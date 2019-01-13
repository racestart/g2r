// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: calibration/republish_msg/relative_odometry.proto

#ifndef PROTOBUF_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto__INCLUDED
#define PROTOBUF_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "common/header.pb.h"
#include "common/geometry.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace calibration {
namespace republish_msg {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();
void protobuf_AssignDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();
void protobuf_ShutdownFile_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();

class RelativeOdometry;

// ===================================================================

class RelativeOdometry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.calibration.republish_msg.RelativeOdometry) */ {
 public:
  RelativeOdometry();
  virtual ~RelativeOdometry();

  RelativeOdometry(const RelativeOdometry& from);

  inline RelativeOdometry& operator=(const RelativeOdometry& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RelativeOdometry& default_instance();

  void Swap(RelativeOdometry* other);

  // implements Message ----------------------------------------------

  inline RelativeOdometry* New() const { return New(NULL); }

  RelativeOdometry* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RelativeOdometry& from);
  void MergeFrom(const RelativeOdometry& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RelativeOdometry* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // optional .apollo.common.PointENU position = 2;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 2;
  const ::apollo::common::PointENU& position() const;
  ::apollo::common::PointENU* mutable_position();
  ::apollo::common::PointENU* release_position();
  void set_allocated_position(::apollo::common::PointENU* position);

  // optional .apollo.common.Quaternion orientation = 3;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 3;
  const ::apollo::common::Quaternion& orientation() const;
  ::apollo::common::Quaternion* mutable_orientation();
  ::apollo::common::Quaternion* release_orientation();
  void set_allocated_orientation(::apollo::common::Quaternion* orientation);

  // optional uint32 position_type = 4;
  bool has_position_type() const;
  void clear_position_type();
  static const int kPositionTypeFieldNumber = 4;
  ::google::protobuf::uint32 position_type() const;
  void set_position_type(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:apollo.calibration.republish_msg.RelativeOdometry)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_position();
  inline void clear_has_position();
  inline void set_has_orientation();
  inline void clear_has_orientation();
  inline void set_has_position_type();
  inline void clear_has_position_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::apollo::common::Header* header_;
  ::apollo::common::PointENU* position_;
  ::apollo::common::Quaternion* orientation_;
  ::google::protobuf::uint32 position_type_;
  friend void  protobuf_AddDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();
  friend void protobuf_AssignDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();
  friend void protobuf_ShutdownFile_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();

  void InitAsDefaultInstance();
  static RelativeOdometry* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RelativeOdometry

// optional .apollo.common.Header header = 1;
inline bool RelativeOdometry::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RelativeOdometry::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RelativeOdometry::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RelativeOdometry::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
inline const ::apollo::common::Header& RelativeOdometry::header() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* RelativeOdometry::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.calibration.republish_msg.RelativeOdometry.header)
  return header_;
}
inline ::apollo::common::Header* RelativeOdometry::release_header() {
  // @@protoc_insertion_point(field_release:apollo.calibration.republish_msg.RelativeOdometry.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void RelativeOdometry::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.calibration.republish_msg.RelativeOdometry.header)
}

// optional .apollo.common.PointENU position = 2;
inline bool RelativeOdometry::has_position() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RelativeOdometry::set_has_position() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RelativeOdometry::clear_has_position() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RelativeOdometry::clear_position() {
  if (position_ != NULL) position_->::apollo::common::PointENU::Clear();
  clear_has_position();
}
inline const ::apollo::common::PointENU& RelativeOdometry::position() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.position)
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::apollo::common::PointENU* RelativeOdometry::mutable_position() {
  set_has_position();
  if (position_ == NULL) {
    position_ = new ::apollo::common::PointENU;
  }
  // @@protoc_insertion_point(field_mutable:apollo.calibration.republish_msg.RelativeOdometry.position)
  return position_;
}
inline ::apollo::common::PointENU* RelativeOdometry::release_position() {
  // @@protoc_insertion_point(field_release:apollo.calibration.republish_msg.RelativeOdometry.position)
  clear_has_position();
  ::apollo::common::PointENU* temp = position_;
  position_ = NULL;
  return temp;
}
inline void RelativeOdometry::set_allocated_position(::apollo::common::PointENU* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.calibration.republish_msg.RelativeOdometry.position)
}

// optional .apollo.common.Quaternion orientation = 3;
inline bool RelativeOdometry::has_orientation() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RelativeOdometry::set_has_orientation() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RelativeOdometry::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RelativeOdometry::clear_orientation() {
  if (orientation_ != NULL) orientation_->::apollo::common::Quaternion::Clear();
  clear_has_orientation();
}
inline const ::apollo::common::Quaternion& RelativeOdometry::orientation() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.orientation)
  return orientation_ != NULL ? *orientation_ : *default_instance_->orientation_;
}
inline ::apollo::common::Quaternion* RelativeOdometry::mutable_orientation() {
  set_has_orientation();
  if (orientation_ == NULL) {
    orientation_ = new ::apollo::common::Quaternion;
  }
  // @@protoc_insertion_point(field_mutable:apollo.calibration.republish_msg.RelativeOdometry.orientation)
  return orientation_;
}
inline ::apollo::common::Quaternion* RelativeOdometry::release_orientation() {
  // @@protoc_insertion_point(field_release:apollo.calibration.republish_msg.RelativeOdometry.orientation)
  clear_has_orientation();
  ::apollo::common::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
inline void RelativeOdometry::set_allocated_orientation(::apollo::common::Quaternion* orientation) {
  delete orientation_;
  orientation_ = orientation;
  if (orientation) {
    set_has_orientation();
  } else {
    clear_has_orientation();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.calibration.republish_msg.RelativeOdometry.orientation)
}

// optional uint32 position_type = 4;
inline bool RelativeOdometry::has_position_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RelativeOdometry::set_has_position_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RelativeOdometry::clear_has_position_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RelativeOdometry::clear_position_type() {
  position_type_ = 0u;
  clear_has_position_type();
}
inline ::google::protobuf::uint32 RelativeOdometry::position_type() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.position_type)
  return position_type_;
}
inline void RelativeOdometry::set_position_type(::google::protobuf::uint32 value) {
  set_has_position_type();
  position_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.calibration.republish_msg.RelativeOdometry.position_type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace republish_msg
}  // namespace calibration
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto__INCLUDED