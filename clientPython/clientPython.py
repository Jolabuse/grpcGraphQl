from __future__ import print_function

import grpc
import hashlib
import addressbook_pb2
import addressbook_pb2_grpc
import route_guide_pb2
import route_guide_pb2_grpc
import sys

class GrpcPythonClient:

    def getPerson(self,stub,id,metadata):
        try:
            person=stub.GetPerson(id,metadata=metadata)
        except:
            #print("Request Failed")
            print(sys.exc_info())
            return (False,False)
        return (person,True)
    
    def hash_password(self,password):
        hasher = hashlib.sha256()
        hasher.update(b"test")
        return hasher.hexdigest()

    
    def run(self):
        with grpc.insecure_channel('localhost:50051') as channel:
            stub = route_guide_pb2_grpc.RouteGuideStub(channel)
            username = input("Enter the username")
            password = input("Enter the password")
            metadata = [('client_id','Python client'),(str(username),str(self.hash_password(password)))]
            id_number = input("Enter an ID")
            id = route_guide_pb2.IdInBook()
            id.number=int(id_number)
            person,status = self.getPerson(stub,id,metadata)
            if status:
                print(person)
                return person
    """
        def run(self,id_number,username,password):
            with grpc.insecure_channel('localhost:50051') as channel:
                stub = route_guide_pb2_grpc.RouteGuideStub(channel)
                metadata = [('client_id','Python client'),(str(username),str(self.hash_password(password)))]
                id = route_guide_pb2.IdInBook()
                id.number=int(id_number)
                person,status = self.getPerson(stub,id,metadata)
                if status:
                    print(person)
                    return person
    """

#GrpcPythonClient().run(1)
grpcClient = GrpcPythonClient()

tmp_in = ""
while(tmp_in==""):
    grpcClient.run()
    tmp_in=input("press a key to stop")
