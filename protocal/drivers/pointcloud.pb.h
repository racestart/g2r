// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: drivers/pointcloud.proto

#ifndef PROTOBUF_drivers_2fpointcloud_2eproto__INCLUDED
#define PROTOBUF_drivers_2fpointcloud_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace apollo {
namespace drivers {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_drivers_2fpointcloud_2eproto();
void protobuf_AssignDesc_drivers_2fpointcloud_2eproto();
void protobuf_ShutdownFile_drivers_2fpointcloud_2eproto();

class PointCloud;
class PointXYZIT;

// ===================================================================

class PointXYZIT : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.drivers.PointXYZIT) */ {
 public:
  PointXYZIT();
  virtual ~PointXYZIT();

  PointXYZIT(const PointXYZIT& from);

  inline PointXYZIT& operator=(const PointXYZIT& from) {
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
  static const PointXYZIT& default_instance();

  void Swap(PointXYZIT* other);

  // implements Message ----------------------------------------------

  inline PointXYZIT* New() const { return New(NULL); }

  PointXYZIT* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PointXYZIT& from);
  void MergeFrom(const PointXYZIT& from);
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
  void InternalSwap(PointXYZIT* other);
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

  // required float x = 1 [default = nan];
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // required float y = 2 [default = nan];
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // required float z = 3 [default = nan];
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // required uint32 intensity = 4 [default = 0];
  bool has_intensity() const;
  void clear_intensity();
  static const int kIntensityFieldNumber = 4;
  ::google::protobuf::uint32 intensity() const;
  void set_intensity(::google::protobuf::uint32 value);

  // required uint64 timestamp = 5 [default = 0];
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 5;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:apollo.drivers.PointXYZIT)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();
  inline void set_has_intensity();
  inline void clear_has_intensity();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float x_;
  float y_;
  float z_;
  ::google::protobuf::uint32 intensity_;
  ::google::protobuf::uint64 timestamp_;
  friend void  protobuf_AddDesc_drivers_2fpointcloud_2eproto();
  friend void protobuf_AssignDesc_drivers_2fpointcloud_2eproto();
  friend void protobuf_ShutdownFile_drivers_2fpointcloud_2eproto();

  void InitAsDefaultInstance();
  static PointXYZIT* default_instance_;
};
// -------------------------------------------------------------------

class PointCloud : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.drivers.PointCloud) */ {
 public:
  PointCloud();
  virtual ~PointCloud();

  PointCloud(const PointCloud& from);

  inline PointCloud& operator=(const PointCloud& from) {
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
  static const PointCloud& default_instance();

  void Swap(PointCloud* other);

  // implements Message ----------------------------------------------

  inline PointCloud* New() const { return New(NULL); }

  PointCloud* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PointCloud& from);
  void MergeFrom(const PointCloud& from);
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
  void InternalSwap(PointCloud* other);
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

  // optional string frame_id = 2;
  bool has_frame_id() const;
  void clear_frame_id();
  static const int kFrameIdFieldNumber = 2;
  const ::std::string& frame_id() const;
  void set_frame_id(const ::std::string& value);
  void set_frame_id(const char* value);
  void set_frame_id(const char* value, size_t size);
  ::std::string* mutable_frame_id();
  ::std::string* release_frame_id();
  void set_allocated_frame_id(::std::string* frame_id);

  // optional bool is_dense = 3;
  bool has_is_dense() const;
  void clear_is_dense();
  static const int kIsDenseFieldNumber = 3;
  bool is_dense() const;
  void set_is_dense(bool value);

  // repeated .apollo.drivers.PointXYZIT point = 4;
  int point_size() const;
  void clear_point();
  static const int kPointFieldNumber = 4;
  const ::apollo::drivers::PointXYZIT& point(int index) const;
  ::apollo::drivers::PointXYZIT* mutable_point(int index);
  ::apollo::drivers::PointXYZIT* add_point();
  ::google::protobuf::RepeatedPtrField< ::apollo::drivers::PointXYZIT >*
      mutable_point();
  const ::google::protobuf::RepeatedPtrField< ::apollo::drivers::PointXYZIT >&
      point() const;

  // optional double measurement_time = 5;
  bool has_measurement_time() const;
  void clear_measurement_time();
  static const int kMeasurementTimeFieldNumber = 5;
  double measurement_time() const;
  void set_measurement_time(double value);

  // @@protoc_insertion_point(class_scope:apollo.drivers.PointCloud)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_frame_id();
  inline void clear_has_frame_id();
  inline void set_has_is_dense();
  inline void clear_has_is_dense();
  inline void set_has_measurement_time();
  inline void clear_has_measurement_time();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::apollo::common::Header* header_;
  ::google::protobuf::internal::ArenaStringPtr frame_id_;
  ::google::protobuf::RepeatedPtrField< ::apollo::drivers::PointXYZIT > point_;
  double measurement_time_;
  bool is_dense_;
  friend void  protobuf_AddDesc_drivers_2fpointcloud_2eproto();
  friend void protobuf_AssignDesc_drivers_2fpointcloud_2eproto();
  friend void protobuf_ShutdownFile_drivers_2fpointcloud_2eproto();

  void InitAsDefaultInstance();
  static PointCloud* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PointXYZIT

// required float x = 1 [default = nan];
inline bool PointXYZIT::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PointXYZIT::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PointXYZIT::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PointXYZIT::clear_x() {
  x_ = static_cast<float>(::google::protobuf::internal::NaN());
  clear_has_x();
}
inline float PointXYZIT::x() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointXYZIT.x)
  return x_;
}
inline void PointXYZIT::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.PointXYZIT.x)
}

// required float y = 2 [default = nan];
inline bool PointXYZIT::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PointXYZIT::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PointXYZIT::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PointXYZIT::clear_y() {
  y_ = static_cast<float>(::google::protobuf::internal::NaN());
  clear_has_y();
}
inline float PointXYZIT::y() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointXYZIT.y)
  return y_;
}
inline void PointXYZIT::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.PointXYZIT.y)
}

// required float z = 3 [default = nan];
inline bool PointXYZIT::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PointXYZIT::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PointXYZIT::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PointXYZIT::clear_z() {
  z_ = static_cast<float>(::google::protobuf::internal::NaN());
  clear_has_z();
}
inline float PointXYZIT::z() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointXYZIT.z)
  return z_;
}
inline void PointXYZIT::set_z(float value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.PointXYZIT.z)
}

// required uint32 intensity = 4 [default = 0];
inline bool PointXYZIT::has_intensity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PointXYZIT::set_has_intensity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PointXYZIT::clear_has_intensity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PointXYZIT::clear_intensity() {
  intensity_ = 0u;
  clear_has_intensity();
}
inline ::google::protobuf::uint32 PointXYZIT::intensity() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointXYZIT.intensity)
  return intensity_;
}
inline void PointXYZIT::set_intensity(::google::protobuf::uint32 value) {
  set_has_intensity();
  intensity_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.PointXYZIT.intensity)
}

// required uint64 timestamp = 5 [default = 0];
inline bool PointXYZIT::has_timestamp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PointXYZIT::set_has_timestamp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PointXYZIT::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PointXYZIT::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 PointXYZIT::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointXYZIT.timestamp)
  return timestamp_;
}
inline void PointXYZIT::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.PointXYZIT.timestamp)
}

// -------------------------------------------------------------------

// PointCloud

// optional .apollo.common.Header header = 1;
inline bool PointCloud::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PointCloud::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PointCloud::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PointCloud::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
inline const ::apollo::common::Header& PointCloud::header() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointCloud.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* PointCloud::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.drivers.PointCloud.header)
  return header_;
}
inline ::apollo::common::Header* PointCloud::release_header() {
  // @@protoc_insertion_point(field_release:apollo.drivers.PointCloud.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void PointCloud::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.PointCloud.header)
}

// optional string frame_id = 2;
inline bool PointCloud::has_frame_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PointCloud::set_has_frame_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PointCloud::clear_has_frame_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PointCloud::clear_frame_id() {
  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_frame_id();
}
inline const ::std::string& PointCloud::frame_id() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointCloud.frame_id)
  return frame_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PointCloud::set_frame_id(const ::std::string& value) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.drivers.PointCloud.frame_id)
}
inline void PointCloud::set_frame_id(const char* value) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.drivers.PointCloud.frame_id)
}
inline void PointCloud::set_frame_id(const char* value, size_t size) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.drivers.PointCloud.frame_id)
}
inline ::std::string* PointCloud::mutable_frame_id() {
  set_has_frame_id();
  // @@protoc_insertion_point(field_mutable:apollo.drivers.PointCloud.frame_id)
  return frame_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PointCloud::release_frame_id() {
  // @@protoc_insertion_point(field_release:apollo.drivers.PointCloud.frame_id)
  clear_has_frame_id();
  return frame_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PointCloud::set_allocated_frame_id(::std::string* frame_id) {
  if (frame_id != NULL) {
    set_has_frame_id();
  } else {
    clear_has_frame_id();
  }
  frame_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), frame_id);
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.PointCloud.frame_id)
}

// optional bool is_dense = 3;
inline bool PointCloud::has_is_dense() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PointCloud::set_has_is_dense() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PointCloud::clear_has_is_dense() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PointCloud::clear_is_dense() {
  is_dense_ = false;
  clear_has_is_dense();
}
inline bool PointCloud::is_dense() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointCloud.is_dense)
  return is_dense_;
}
inline void PointCloud::set_is_dense(bool value) {
  set_has_is_dense();
  is_dense_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.PointCloud.is_dense)
}

// repeated .apollo.drivers.PointXYZIT point = 4;
inline int PointCloud::point_size() const {
  return point_.size();
}
inline void PointCloud::clear_point() {
  point_.Clear();
}
inline const ::apollo::drivers::PointXYZIT& PointCloud::point(int index) const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointCloud.point)
  return point_.Get(index);
}
inline ::apollo::drivers::PointXYZIT* PointCloud::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.PointCloud.point)
  return point_.Mutable(index);
}
inline ::apollo::drivers::PointXYZIT* PointCloud::add_point() {
  // @@protoc_insertion_point(field_add:apollo.drivers.PointCloud.point)
  return point_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::drivers::PointXYZIT >*
PointCloud::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:apollo.drivers.PointCloud.point)
  return &point_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::drivers::PointXYZIT >&
PointCloud::point() const {
  // @@protoc_insertion_point(field_list:apollo.drivers.PointCloud.point)
  return point_;
}

// optional double measurement_time = 5;
inline bool PointCloud::has_measurement_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PointCloud::set_has_measurement_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PointCloud::clear_has_measurement_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PointCloud::clear_measurement_time() {
  measurement_time_ = 0;
  clear_has_measurement_time();
}
inline double PointCloud::measurement_time() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.PointCloud.measurement_time)
  return measurement_time_;
}
inline void PointCloud::set_measurement_time(double value) {
  set_has_measurement_time();
  measurement_time_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.PointCloud.measurement_time)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace drivers
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_drivers_2fpointcloud_2eproto__INCLUDED