// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: p37wan_vip_prize.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "p37wan_vip_prize.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace app {
namespace message {

namespace {

const ::google::protobuf::Descriptor* P37wanVipPrizeProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  P37wanVipPrizeProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* P37wanVipPrizeConfigProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  P37wanVipPrizeConfigProto_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_p37wan_5fvip_5fprize_2eproto() {
  protobuf_AddDesc_p37wan_5fvip_5fprize_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "p37wan_vip_prize.proto");
  GOOGLE_CHECK(file != NULL);
  P37wanVipPrizeProto_descriptor_ = file->message_type(0);
  static const int P37wanVipPrizeProto_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P37wanVipPrizeProto, vip_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P37wanVipPrizeProto, prize_),
  };
  P37wanVipPrizeProto_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      P37wanVipPrizeProto_descriptor_,
      P37wanVipPrizeProto::default_instance_,
      P37wanVipPrizeProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P37wanVipPrizeProto, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P37wanVipPrizeProto, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(P37wanVipPrizeProto));
  P37wanVipPrizeConfigProto_descriptor_ = file->message_type(1);
  static const int P37wanVipPrizeConfigProto_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P37wanVipPrizeConfigProto, prizelist_),
  };
  P37wanVipPrizeConfigProto_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      P37wanVipPrizeConfigProto_descriptor_,
      P37wanVipPrizeConfigProto::default_instance_,
      P37wanVipPrizeConfigProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P37wanVipPrizeConfigProto, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P37wanVipPrizeConfigProto, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(P37wanVipPrizeConfigProto));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_p37wan_5fvip_5fprize_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    P37wanVipPrizeProto_descriptor_, &P37wanVipPrizeProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    P37wanVipPrizeConfigProto_descriptor_, &P37wanVipPrizeConfigProto::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_p37wan_5fvip_5fprize_2eproto() {
  delete P37wanVipPrizeProto::default_instance_;
  delete P37wanVipPrizeProto_reflection_;
  delete P37wanVipPrizeConfigProto::default_instance_;
  delete P37wanVipPrizeConfigProto_reflection_;
}

void protobuf_AddDesc_p37wan_5fvip_5fprize_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::app::message::protobuf_AddDesc_goods_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026p37wan_vip_prize.proto\022\013app.message\032\013g"
    "oods.proto\"W\n\023P37wanVipPrizeProto\022\021\n\tvip"
    "_level\030\001 \001(\005\022-\n\005prize\030\002 \003(\0132\036.app.messag"
    "e.GoodsWrapperProto\"P\n\031P37wanVipPrizeCon"
    "figProto\0223\n\tprizelist\030\001 \003(\0132 .app.messag"
    "e.P37wanVipPrizeProtoB\'\n\014app.protobufB\025P"
    "37wanVipPrizeContentH\001", 262);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "p37wan_vip_prize.proto", &protobuf_RegisterTypes);
  P37wanVipPrizeProto::default_instance_ = new P37wanVipPrizeProto();
  P37wanVipPrizeConfigProto::default_instance_ = new P37wanVipPrizeConfigProto();
  P37wanVipPrizeProto::default_instance_->InitAsDefaultInstance();
  P37wanVipPrizeConfigProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_p37wan_5fvip_5fprize_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_p37wan_5fvip_5fprize_2eproto {
  StaticDescriptorInitializer_p37wan_5fvip_5fprize_2eproto() {
    protobuf_AddDesc_p37wan_5fvip_5fprize_2eproto();
  }
} static_descriptor_initializer_p37wan_5fvip_5fprize_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int P37wanVipPrizeProto::kVipLevelFieldNumber;
const int P37wanVipPrizeProto::kPrizeFieldNumber;
#endif  // !_MSC_VER

P37wanVipPrizeProto::P37wanVipPrizeProto()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void P37wanVipPrizeProto::InitAsDefaultInstance() {
}

P37wanVipPrizeProto::P37wanVipPrizeProto(const P37wanVipPrizeProto& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void P37wanVipPrizeProto::SharedCtor() {
  _cached_size_ = 0;
  vip_level_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

P37wanVipPrizeProto::~P37wanVipPrizeProto() {
  SharedDtor();
}

void P37wanVipPrizeProto::SharedDtor() {
  if (this != default_instance_) {
  }
}

void P37wanVipPrizeProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* P37wanVipPrizeProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return P37wanVipPrizeProto_descriptor_;
}

const P37wanVipPrizeProto& P37wanVipPrizeProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_p37wan_5fvip_5fprize_2eproto();
  return *default_instance_;
}

P37wanVipPrizeProto* P37wanVipPrizeProto::default_instance_ = NULL;

P37wanVipPrizeProto* P37wanVipPrizeProto::New() const {
  return new P37wanVipPrizeProto;
}

void P37wanVipPrizeProto::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    vip_level_ = 0;
  }
  prize_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool P37wanVipPrizeProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 vip_level = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &vip_level_)));
          set_has_vip_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_prize;
        break;
      }

      // repeated .app.message.GoodsWrapperProto prize = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_prize:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_prize()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_prize;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void P37wanVipPrizeProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 vip_level = 1;
  if (has_vip_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->vip_level(), output);
  }

  // repeated .app.message.GoodsWrapperProto prize = 2;
  for (int i = 0; i < this->prize_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->prize(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* P37wanVipPrizeProto::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 vip_level = 1;
  if (has_vip_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->vip_level(), target);
  }

  // repeated .app.message.GoodsWrapperProto prize = 2;
  for (int i = 0; i < this->prize_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->prize(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int P37wanVipPrizeProto::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 vip_level = 1;
    if (has_vip_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->vip_level());
    }

  }
  // repeated .app.message.GoodsWrapperProto prize = 2;
  total_size += 1 * this->prize_size();
  for (int i = 0; i < this->prize_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->prize(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void P37wanVipPrizeProto::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const P37wanVipPrizeProto* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const P37wanVipPrizeProto*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void P37wanVipPrizeProto::MergeFrom(const P37wanVipPrizeProto& from) {
  GOOGLE_CHECK_NE(&from, this);
  prize_.MergeFrom(from.prize_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_vip_level()) {
      set_vip_level(from.vip_level());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void P37wanVipPrizeProto::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void P37wanVipPrizeProto::CopyFrom(const P37wanVipPrizeProto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool P37wanVipPrizeProto::IsInitialized() const {

  return true;
}

void P37wanVipPrizeProto::Swap(P37wanVipPrizeProto* other) {
  if (other != this) {
    std::swap(vip_level_, other->vip_level_);
    prize_.Swap(&other->prize_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata P37wanVipPrizeProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = P37wanVipPrizeProto_descriptor_;
  metadata.reflection = P37wanVipPrizeProto_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int P37wanVipPrizeConfigProto::kPrizelistFieldNumber;
#endif  // !_MSC_VER

P37wanVipPrizeConfigProto::P37wanVipPrizeConfigProto()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void P37wanVipPrizeConfigProto::InitAsDefaultInstance() {
}

P37wanVipPrizeConfigProto::P37wanVipPrizeConfigProto(const P37wanVipPrizeConfigProto& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void P37wanVipPrizeConfigProto::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

P37wanVipPrizeConfigProto::~P37wanVipPrizeConfigProto() {
  SharedDtor();
}

void P37wanVipPrizeConfigProto::SharedDtor() {
  if (this != default_instance_) {
  }
}

void P37wanVipPrizeConfigProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* P37wanVipPrizeConfigProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return P37wanVipPrizeConfigProto_descriptor_;
}

const P37wanVipPrizeConfigProto& P37wanVipPrizeConfigProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_p37wan_5fvip_5fprize_2eproto();
  return *default_instance_;
}

P37wanVipPrizeConfigProto* P37wanVipPrizeConfigProto::default_instance_ = NULL;

P37wanVipPrizeConfigProto* P37wanVipPrizeConfigProto::New() const {
  return new P37wanVipPrizeConfigProto;
}

void P37wanVipPrizeConfigProto::Clear() {
  prizelist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool P37wanVipPrizeConfigProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .app.message.P37wanVipPrizeProto prizelist = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_prizelist:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_prizelist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_prizelist;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void P37wanVipPrizeConfigProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .app.message.P37wanVipPrizeProto prizelist = 1;
  for (int i = 0; i < this->prizelist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->prizelist(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* P37wanVipPrizeConfigProto::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .app.message.P37wanVipPrizeProto prizelist = 1;
  for (int i = 0; i < this->prizelist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->prizelist(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int P37wanVipPrizeConfigProto::ByteSize() const {
  int total_size = 0;

  // repeated .app.message.P37wanVipPrizeProto prizelist = 1;
  total_size += 1 * this->prizelist_size();
  for (int i = 0; i < this->prizelist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->prizelist(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void P37wanVipPrizeConfigProto::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const P37wanVipPrizeConfigProto* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const P37wanVipPrizeConfigProto*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void P37wanVipPrizeConfigProto::MergeFrom(const P37wanVipPrizeConfigProto& from) {
  GOOGLE_CHECK_NE(&from, this);
  prizelist_.MergeFrom(from.prizelist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void P37wanVipPrizeConfigProto::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void P37wanVipPrizeConfigProto::CopyFrom(const P37wanVipPrizeConfigProto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool P37wanVipPrizeConfigProto::IsInitialized() const {

  return true;
}

void P37wanVipPrizeConfigProto::Swap(P37wanVipPrizeConfigProto* other) {
  if (other != this) {
    prizelist_.Swap(&other->prizelist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata P37wanVipPrizeConfigProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = P37wanVipPrizeConfigProto_descriptor_;
  metadata.reflection = P37wanVipPrizeConfigProto_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message
}  // namespace app

// @@protoc_insertion_point(global_scope)
