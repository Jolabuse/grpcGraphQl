# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: route_guide.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import addressbook_pb2 as addressbook__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x11route_guide.proto\x12\x05route\x1a\x11\x61\x64\x64ressbook.proto\"\x1a\n\x08IdInBook\x12\x0e\n\x06number\x18\x01 \x01(\x05\x32>\n\nRouteGuide\x12\x30\n\tGetPerson\x12\x0f.route.IdInBook\x1a\x10.tutorial.Person\"\x00\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'route_guide_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _IDINBOOK._serialized_start=47
  _IDINBOOK._serialized_end=73
  _ROUTEGUIDE._serialized_start=75
  _ROUTEGUIDE._serialized_end=137
# @@protoc_insertion_point(module_scope)
