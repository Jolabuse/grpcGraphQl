#include <iostream>
#include <iomanip>
#include <sstream>

#include <grpc/grpc.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/security/credentials.h>
#include <grpcpp/channel.h>
#include <openssl/sha.h>

#include "route/route_guide.grpc.pb.h"
#include "tutorial/addressbook.pb.h"
#include "person.h"
#include "server.h"

using namespace grpc;
using namespace tutorial;
using namespace route;




Status RouteGuideImpl::GetPerson(ServerContext* context, const IdInBook* id, Person* person)  
{
	bool tmp_status = getPersonById(id->number(), m_addressBook,person); 
	const std::multimap<grpc::string_ref, grpc::string_ref> metadata =
		context->client_metadata();
	auto iter = metadata.begin();
	if (checkAuthentication(metadata)) {
		std::cout << getClientId(metadata) << " is requesting : GetPerson(id = " << id->number() << ")" << std::endl;
		if (tmp_status)
			return Status::OK;
	}
	else {
		std::cout << "Authentication failed" << std::endl;
	}
	return Status::CANCELLED;
}

RouteGuideImpl::RouteGuideImpl()
:route::RouteGuide::Service()
{
	tutorial::Person* p = m_addressBook.add_people();
	*p = createPerson(1, "Vero", "veve.67@mail.net", "000000001", tutorial::Person::WORK);

	p = m_addressBook.add_people();
	*p = createPerson(2, "Gege", "gege.58@mail.net", "500000002", tutorial::Person::MOBILE);

}

bool checkAuthentication(std::multimap<grpc::string_ref, grpc::string_ref> metadata) {
	for (auto iter = metadata.begin(); iter != metadata.end(); ++iter) {
		std::string tempUsername = std::string(iter->first.begin(), iter->first.end());
		std::string tempPassword = std::string(iter->second.begin(), iter->second.end());
		if (tempUsername.compare("test") == 0 && tempPassword.compare(hashPassword("test")) == 0) {
			std::cout << "Username : " << tempUsername << " and Password : " << tempPassword << std::endl;
			return true;
		}
	}
	return false;
}

void runServer()
{
	std::string tmp_server_address("0.0.0.0:50051");
	RouteGuideImpl tmp_service;
	ServerBuilder tmp_builder;
	tmp_builder.AddListeningPort(tmp_server_address, grpc::InsecureServerCredentials());
	tmp_builder.RegisterService(&tmp_service);
	std::unique_ptr<Server> tmp_server(tmp_builder.BuildAndStart());
	std::cout << "Server listening on " << tmp_server_address << std::endl;
	tmp_server->Wait();
}

std::string hashPassword(std::string password) {
	unsigned char hash[SHA256_DIGEST_LENGTH];

	SHA256_CTX sha256;
	SHA256_Init(&sha256);
	SHA256_Update(&sha256, password.c_str(), password.size());
	SHA256_Final(hash, &sha256);

	std::stringstream ss;

	for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
		ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
	}
	return ss.str();
}

std::string getClientId(std::multimap<grpc::string_ref, grpc::string_ref> metadata) {
	for (auto iter = metadata.begin(); iter != metadata.end(); ++iter) {
		std::string tempFirst = std::string(iter->first.begin(), iter->first.end());
		std::string tempClientId = std::string(iter->second.begin(), iter->second.end());
		if (tempFirst.compare("client_id") == 0) {
			return tempClientId;
		}
	}
	return "Configuration problem";
}