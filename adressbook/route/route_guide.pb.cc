// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: route/route_guide.proto

#include "route_guide.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace route {
PROTOBUF_CONSTEXPR IdInBook::IdInBook(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.number_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct IdInBookDefaultTypeInternal {
  PROTOBUF_CONSTEXPR IdInBookDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~IdInBookDefaultTypeInternal() {}
  union {
    IdInBook _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 IdInBookDefaultTypeInternal _IdInBook_default_instance_;
}  // namespace route
static ::_pb::Metadata file_level_metadata_route_2froute_5fguide_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_route_2froute_5fguide_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_route_2froute_5fguide_2eproto = nullptr;

const uint32_t TableStruct_route_2froute_5fguide_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::route::IdInBook, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::route::IdInBook, _impl_.number_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::route::IdInBook)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::route::_IdInBook_default_instance_._instance,
};

const char descriptor_table_protodef_route_2froute_5fguide_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027route/route_guide.proto\022\005route\032\032tutori"
  "al/addressbook.proto\"\032\n\010IdInBook\022\016\n\006numb"
  "er\030\001 \001(\0052>\n\nRouteGuide\0220\n\tGetPerson\022\017.ro"
  "ute.IdInBook\032\020.tutorial.Person\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_route_2froute_5fguide_2eproto_deps[1] = {
  &::descriptor_table_tutorial_2faddressbook_2eproto,
};
static ::_pbi::once_flag descriptor_table_route_2froute_5fguide_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_route_2froute_5fguide_2eproto = {
    false, false, 160, descriptor_table_protodef_route_2froute_5fguide_2eproto,
    "route/route_guide.proto",
    &descriptor_table_route_2froute_5fguide_2eproto_once, descriptor_table_route_2froute_5fguide_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_route_2froute_5fguide_2eproto::offsets,
    file_level_metadata_route_2froute_5fguide_2eproto, file_level_enum_descriptors_route_2froute_5fguide_2eproto,
    file_level_service_descriptors_route_2froute_5fguide_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_route_2froute_5fguide_2eproto_getter() {
  return &descriptor_table_route_2froute_5fguide_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_route_2froute_5fguide_2eproto(&descriptor_table_route_2froute_5fguide_2eproto);
namespace route {

// ===================================================================

class IdInBook::_Internal {
 public:
};

IdInBook::IdInBook(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:route.IdInBook)
}
IdInBook::IdInBook(const IdInBook& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  IdInBook* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.number_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.number_ = from._impl_.number_;
  // @@protoc_insertion_point(copy_constructor:route.IdInBook)
}

inline void IdInBook::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.number_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

IdInBook::~IdInBook() {
  // @@protoc_insertion_point(destructor:route.IdInBook)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void IdInBook::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void IdInBook::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void IdInBook::Clear() {
// @@protoc_insertion_point(message_clear_start:route.IdInBook)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.number_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* IdInBook::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* IdInBook::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:route.IdInBook)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 number = 1;
  if (this->_internal_number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:route.IdInBook)
  return target;
}

size_t IdInBook::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:route.IdInBook)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 number = 1;
  if (this->_internal_number() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_number());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData IdInBook::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    IdInBook::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*IdInBook::GetClassData() const { return &_class_data_; }


void IdInBook::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<IdInBook*>(&to_msg);
  auto& from = static_cast<const IdInBook&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:route.IdInBook)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_number() != 0) {
    _this->_internal_set_number(from._internal_number());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void IdInBook::CopyFrom(const IdInBook& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:route.IdInBook)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IdInBook::IsInitialized() const {
  return true;
}

void IdInBook::InternalSwap(IdInBook* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.number_, other->_impl_.number_);
}

::PROTOBUF_NAMESPACE_ID::Metadata IdInBook::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_route_2froute_5fguide_2eproto_getter, &descriptor_table_route_2froute_5fguide_2eproto_once,
      file_level_metadata_route_2froute_5fguide_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace route
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::route::IdInBook*
Arena::CreateMaybeMessage< ::route::IdInBook >(Arena* arena) {
  return Arena::CreateMessageInternal< ::route::IdInBook >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
