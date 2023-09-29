import sys
from ariadne import ObjectType



sys.path.insert(0, '../../clientPython/clientPython')
from clientPython import GrpcPythonClient

query = ObjectType("Query")
@query.field("getPerson")
def getPerson(_,info,id,username,password):
    person = GrpcPythonClient().run(id,username,password)
    return {"name":person.name,"id":person.id,"email":person.email,"phones":[{"number":person.phones[0].number,"p_type":{"p_type":person.phones[0].type}}]}
    