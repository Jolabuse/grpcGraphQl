from api import app

from ariadne import load_schema_from_path, make_executable_schema, \
    graphql_sync, ObjectType,gql
from flask import request, jsonify
from api.queries import query
from ariadne.explorer import ExplorerGraphiQL

explorer_html = ExplorerGraphiQL().html(None)



type_defs = gql(load_schema_from_path("schema.graphql"))
schema = make_executable_schema(
    type_defs, query
)

@app.route("/grpc",methods=["GET"])
def graphql_playground():
    return explorer_html, 200

@app.route("/grpc",methods=['POST'])
def id_input():
    """
        tmp_id = request.form['id']
        tmp_username = request.form['username']
        tmp_password = request.form['password']
    """
    data=request.get_json()
    success,result = graphql_sync(schema,data,context_value=request,debug=app.debug)
    status_code = 200 if success else 400
    return jsonify(result),status_code
      #return jsonify(person)
      #return redirect(url_for('get_id',id=tmp_id))
    

@app.route("/person/<id>")
def get_id(id):
    return "Asking for person %s" % id


