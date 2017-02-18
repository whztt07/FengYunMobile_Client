// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: baidu_vip_prize.proto

#ifndef PROTOBUF_baidu_5fvip_5fprize_2eproto__INCLUDED
#define PROTOBUF_baidu_5fvip_5fprize_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "goods.pb.h"
// @@protoc_insertion_point(includes)

namespace app {
namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_baidu_5fvip_5fprize_2eproto();
void protobuf_AssignDesc_baidu_5fvip_5fprize_2eproto();
void protobuf_ShutdownFile_baidu_5fvip_5fprize_2eproto();

class BaiduVipPrizeProto;
class BaiduVipPrizeConfigProto;

// ===================================================================

class BaiduVipPrizeProto : public ::google::protobuf::Message {
 public:
  BaiduVipPrizeProto();
  virtual ~BaiduVipPrizeProto();

  BaiduVipPrizeProto(const BaiduVipPrizeProto& from);

  inline BaiduVipPrizeProto& operator=(const BaiduVipPrizeProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BaiduVipPrizeProto& default_instance();

  void Swap(BaiduVipPrizeProto* other);

  // implements Message ----------------------------------------------

  BaiduVipPrizeProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BaiduVipPrizeProto& from);
  void MergeFrom(const BaiduVipPrizeProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 sub_type = 2;
  inline bool has_sub_type() const;
  inline void clear_sub_type();
  static const int kSubTypeFieldNumber = 2;
  inline ::google::protobuf::int32 sub_type() const;
  inline void set_sub_type(::google::protobuf::int32 value);

  // repeated .app.message.GoodsWrapperProto prize = 3;
  inline int prize_size() const;
  inline void clear_prize();
  static const int kPrizeFieldNumber = 3;
  inline const ::app::message::GoodsWrapperProto& prize(int index) const;
  inline ::app::message::GoodsWrapperProto* mutable_prize(int index);
  inline ::app::message::GoodsWrapperProto* add_prize();
  inline const ::google::protobuf::RepeatedPtrField< ::app::message::GoodsWrapperProto >&
      prize() const;
  inline ::google::protobuf::RepeatedPtrField< ::app::message::GoodsWrapperProto >*
      mutable_prize();

  // @@protoc_insertion_point(class_scope:app.message.BaiduVipPrizeProto)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_sub_type();
  inline void clear_has_sub_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 sub_type_;
  ::google::protobuf::RepeatedPtrField< ::app::message::GoodsWrapperProto > prize_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_baidu_5fvip_5fprize_2eproto();
  friend void protobuf_AssignDesc_baidu_5fvip_5fprize_2eproto();
  friend void protobuf_ShutdownFile_baidu_5fvip_5fprize_2eproto();

  void InitAsDefaultInstance();
  static BaiduVipPrizeProto* default_instance_;
};
// -------------------------------------------------------------------

class BaiduVipPrizeConfigProto : public ::google::protobuf::Message {
 public:
  BaiduVipPrizeConfigProto();
  virtual ~BaiduVipPrizeConfigProto();

  BaiduVipPrizeConfigProto(const BaiduVipPrizeConfigProto& from);

  inline BaiduVipPrizeConfigProto& operator=(const BaiduVipPrizeConfigProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BaiduVipPrizeConfigProto& default_instance();

  void Swap(BaiduVipPrizeConfigProto* other);

  // implements Message ----------------------------------------------

  BaiduVipPrizeConfigProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BaiduVipPrizeConfigProto& from);
  void MergeFrom(const BaiduVipPrizeConfigProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .app.message.BaiduVipPrizeProto prizelist = 1;
  inline int prizelist_size() const;
  inline void clear_prizelist();
  static const int kPrizelistFieldNumber = 1;
  inline const ::app::message::BaiduVipPrizeProto& prizelist(int index) const;
  inline ::app::message::BaiduVipPrizeProto* mutable_prizelist(int index);
  inline ::app::message::BaiduVipPrizeProto* add_prizelist();
  inline const ::google::protobuf::RepeatedPtrField< ::app::message::BaiduVipPrizeProto >&
      prizelist() const;
  inline ::google::protobuf::RepeatedPtrField< ::app::message::BaiduVipPrizeProto >*
      mutable_prizelist();

  // repeated int32 nick_name_id_list = 2;
  inline int nick_name_id_list_size() const;
  inline void clear_nick_name_id_list();
  static const int kNickNameIdListFieldNumber = 2;
  inline ::google::protobuf::int32 nick_name_id_list(int index) const;
  inline void set_nick_name_id_list(int index, ::google::protobuf::int32 value);
  inline void add_nick_name_id_list(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      nick_name_id_list() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_nick_name_id_list();

  // @@protoc_insertion_point(class_scope:app.message.BaiduVipPrizeConfigProto)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::app::message::BaiduVipPrizeProto > prizelist_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > nick_name_id_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_baidu_5fvip_5fprize_2eproto();
  friend void protobuf_AssignDesc_baidu_5fvip_5fprize_2eproto();
  friend void protobuf_ShutdownFile_baidu_5fvip_5fprize_2eproto();

  void InitAsDefaultInstance();
  static BaiduVipPrizeConfigProto* default_instance_;
};
// ===================================================================


// ===================================================================

// BaiduVipPrizeProto

// optional int32 type = 1;
inline bool BaiduVipPrizeProto::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BaiduVipPrizeProto::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BaiduVipPrizeProto::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BaiduVipPrizeProto::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 BaiduVipPrizeProto::type() const {
  return type_;
}
inline void BaiduVipPrizeProto::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 sub_type = 2;
inline bool BaiduVipPrizeProto::has_sub_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BaiduVipPrizeProto::set_has_sub_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BaiduVipPrizeProto::clear_has_sub_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BaiduVipPrizeProto::clear_sub_type() {
  sub_type_ = 0;
  clear_has_sub_type();
}
inline ::google::protobuf::int32 BaiduVipPrizeProto::sub_type() const {
  return sub_type_;
}
inline void BaiduVipPrizeProto::set_sub_type(::google::protobuf::int32 value) {
  set_has_sub_type();
  sub_type_ = value;
}

// repeated .app.message.GoodsWrapperProto prize = 3;
inline int BaiduVipPrizeProto::prize_size() const {
  return prize_.size();
}
inline void BaiduVipPrizeProto::clear_prize() {
  prize_.Clear();
}
inline const ::app::message::GoodsWrapperProto& BaiduVipPrizeProto::prize(int index) const {
  return prize_.Get(index);
}
inline ::app::message::GoodsWrapperProto* BaiduVipPrizeProto::mutable_prize(int index) {
  return prize_.Mutable(index);
}
inline ::app::message::GoodsWrapperProto* BaiduVipPrizeProto::add_prize() {
  return prize_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::app::message::GoodsWrapperProto >&
BaiduVipPrizeProto::prize() const {
  return prize_;
}
inline ::google::protobuf::RepeatedPtrField< ::app::message::GoodsWrapperProto >*
BaiduVipPrizeProto::mutable_prize() {
  return &prize_;
}

// -------------------------------------------------------------------

// BaiduVipPrizeConfigProto

// repeated .app.message.BaiduVipPrizeProto prizelist = 1;
inline int BaiduVipPrizeConfigProto::prizelist_size() const {
  return prizelist_.size();
}
inline void BaiduVipPrizeConfigProto::clear_prizelist() {
  prizelist_.Clear();
}
inline const ::app::message::BaiduVipPrizeProto& BaiduVipPrizeConfigProto::prizelist(int index) const {
  return prizelist_.Get(index);
}
inline ::app::message::BaiduVipPrizeProto* BaiduVipPrizeConfigProto::mutable_prizelist(int index) {
  return prizelist_.Mutable(index);
}
inline ::app::message::BaiduVipPrizeProto* BaiduVipPrizeConfigProto::add_prizelist() {
  return prizelist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::app::message::BaiduVipPrizeProto >&
BaiduVipPrizeConfigProto::prizelist() const {
  return prizelist_;
}
inline ::google::protobuf::RepeatedPtrField< ::app::message::BaiduVipPrizeProto >*
BaiduVipPrizeConfigProto::mutable_prizelist() {
  return &prizelist_;
}

// repeated int32 nick_name_id_list = 2;
inline int BaiduVipPrizeConfigProto::nick_name_id_list_size() const {
  return nick_name_id_list_.size();
}
inline void BaiduVipPrizeConfigProto::clear_nick_name_id_list() {
  nick_name_id_list_.Clear();
}
inline ::google::protobuf::int32 BaiduVipPrizeConfigProto::nick_name_id_list(int index) const {
  return nick_name_id_list_.Get(index);
}
inline void BaiduVipPrizeConfigProto::set_nick_name_id_list(int index, ::google::protobuf::int32 value) {
  nick_name_id_list_.Set(index, value);
}
inline void BaiduVipPrizeConfigProto::add_nick_name_id_list(::google::protobuf::int32 value) {
  nick_name_id_list_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
BaiduVipPrizeConfigProto::nick_name_id_list() const {
  return nick_name_id_list_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
BaiduVipPrizeConfigProto::mutable_nick_name_id_list() {
  return &nick_name_id_list_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message
}  // namespace app

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_baidu_5fvip_5fprize_2eproto__INCLUDED
