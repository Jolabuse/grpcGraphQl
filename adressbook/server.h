#ifndef SERVER_H
#define SERVER_H



#include "route/route_guide.grpc.pb.h"
#include "tutorial/addressbook.pb.h"
#include "person.h"
#include "server.h"

class RouteGuideImpl final : public route::RouteGuide::Service
{
public:
	RouteGuideImpl();
	
	grpc::Status GetPerson(grpc::ServerContext* context, const route::IdInBook* id, tutorial::Person* person) override;
	
private:
	tutorial::AddressBook m_addressBook;
};

bool checkAuthentication(std::multimap<grpc::string_ref, grpc::string_ref> metadata);
void runServer();
std::string hashPassword(std::string password);
std::string getClientId(std::multimap<grpc::string_ref, grpc::string_ref> metadata);
#endif // !SERVER_H
