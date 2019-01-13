// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: drivers/gnss/imu.proto

#ifndef PROTOBUF_drivers_2fgnss_2fimu_2eproto__INCLUDED
#define PROTOBUF_drivers_2fgnss_2fimu_2eproto__INCLUDED

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
namespace drivers {
namespace gnss {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_drivers_2fgnss_2fimu_2eproto();
void protobuf_AssignDesc_drivers_2fgnss_2fimu_2eproto();
void protobuf_ShutdownFile_drivers_2fgnss_2fimu_2eproto();

class Imu;

// ===================================================================

class Imu : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.drivers.gnss.Imu) */ {
 public:
  Imu();
  virtual ~Imu();

  Imu(const Imu& from);

  inline Imu& operator=(const Imu& from) {
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
  static const Imu& default_instance();

  void Swap(Imu* other);

  // implements Message ----------------------------------------------

  inline Imu* New() const { return New(NULL); }

  Imu* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Imu& from);
  void MergeFrom(const Imu& from);
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
  void InternalSwap(Imu* other);
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

  // optional double measurement_time = 2;
  bool has_measurement_time() const;
  void clear_measurement_time();
  static const int kMeasurementTimeFieldNumber = 2;
  double measurement_time() const;
  void set_measurement_time(double value);

  // optional float measurement_span = 3 [default = 0];
  bool has_measurement_span() const;
  void clear_measurement_span();
  static const int kMeasurementSpanFieldNumber = 3;
  float measurement_span() const;
  void set_measurement_span(float value);

  // optional .apollo.common.Point3D linear_acceleration = 4;
  bool has_linear_acceleration() const;
  void clear_linear_acceleration();
  static const int kLinearAccelerationFieldNumber = 4;
  const ::apollo::common::Point3D& linear_acceleration() const;
  ::apollo::common::Point3D* mutable_linear_acceleration();
  ::apollo::common::Point3D* release_linear_acceleration();
  void set_allocated_linear_acceleration(::apollo::common::Point3D* linear_acceleration);

  // optional .apollo.common.Point3D angular_velocity = 5;
  bool has_angular_velocity() const;
  void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 5;
  const ::apollo::common::Point3D& angular_velocity() const;
  ::apollo::common::Point3D* mutable_angular_velocity();
  ::apollo::common::Point3D* release_angular_velocity();
  void set_allocated_angular_velocity(::apollo::common::Point3D* angular_velocity);

  // @@protoc_insertion_point(class_scope:apollo.drivers.gnss.Imu)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_measurement_time();
  inline void clear_has_measurement_time();
  inline void set_has_measurement_span();
  inline void clear_has_measurement_span();
  inline void set_has_linear_acceleration();
  inline void clear_has_linear_acceleration();
  inline void set_has_angular_velocity();
  inline void clear_has_angular_velocity();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::apollo::common::Header* header_;
  double measurement_time_;
  ::apollo::common::Point3D* linear_acceleration_;
  ::apollo::common::Point3D* angular_velocity_;
  float measurement_span_;
  friend void  protobuf_AddDesc_drivers_2fgnss_2fimu_2eproto();
  friend void protobuf_AssignDesc_drivers_2fgnss_2fimu_2eproto();
  friend void protobuf_ShutdownFile_drivers_2fgnss_2fimu_2eproto();

  void InitAsDefaultInstance();
  static Imu* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Imu

// optional .apollo.common.Header header = 1;
inline bool Imu::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Imu::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Imu::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Imu::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
inline const ::apollo::common::Header& Imu::header() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* Imu::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.drivers.gnss.Imu.header)
  return header_;
}
inline ::apollo::common::Header* Imu::release_header() {
  // @@protoc_insertion_point(field_release:apollo.drivers.gnss.Imu.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Imu::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.gnss.Imu.header)
}

// optional double measurement_time = 2;
inline bool Imu::has_measurement_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Imu::set_has_measurement_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Imu::clear_has_measurement_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Imu::clear_measurement_time() {
  measurement_time_ = 0;
  clear_has_measurement_time();
}
inline double Imu::measurement_time() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.measurement_time)
  return measurement_time_;
}
inline void Imu::set_measurement_time(double value) {
  set_has_measurement_time();
  measurement_time_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.gnss.Imu.measurement_time)
}

// optional float measurement_span = 3 [default = 0];
inline bool Imu::has_measurement_span() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Imu::set_has_measurement_span() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Imu::clear_has_measurement_span() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Imu::clear_measurement_span() {
  measurement_span_ = 0;
  clear_has_measurement_span();
}
inline float Imu::measurement_span() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.measurement_span)
  return measurement_span_;
}
inline void Imu::set_measurement_span(float value) {
  set_has_measurement_span();
  measurement_span_ = value;
  // @@protoc_insertion_point(field_set:apollo.drivers.gnss.Imu.measurement_span)
}

// optional .apollo.common.Point3D linear_acceleration = 4;
inline bool Imu::has_linear_acceleration() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Imu::set_has_linear_acceleration() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Imu::clear_has_linear_acceleration() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Imu::clear_linear_acceleration() {
  if (linear_acceleration_ != NULL) linear_acceleration_->::apollo::common::Point3D::Clear();
  clear_has_linear_acceleration();
}
inline const ::apollo::common::Point3D& Imu::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.linear_acceleration)
  return linear_acceleration_ != NULL ? *linear_acceleration_ : *default_instance_->linear_acceleration_;
}
inline ::apollo::common::Point3D* Imu::mutable_linear_acceleration() {
  set_has_linear_acceleration();
  if (linear_acceleration_ == NULL) {
    linear_acceleration_ = new ::apollo::common::Point3D;
  }
  // @@protoc_insertion_point(field_mutable:apollo.drivers.gnss.Imu.linear_acceleration)
  return linear_acceleration_;
}
inline ::apollo::common::Point3D* Imu::release_linear_acceleration() {
  // @@protoc_insertion_point(field_release:apollo.drivers.gnss.Imu.linear_acceleration)
  clear_has_linear_acceleration();
  ::apollo::common::Point3D* temp = linear_acceleration_;
  linear_acceleration_ = NULL;
  return temp;
}
inline void Imu::set_allocated_linear_acceleration(::apollo::common::Point3D* linear_acceleration) {
  delete linear_acceleration_;
  linear_acceleration_ = linear_acceleration;
  if (linear_acceleration) {
    set_has_linear_acceleration();
  } else {
    clear_has_linear_acceleration();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.gnss.Imu.linear_acceleration)
}

// optional .apollo.common.Point3D angular_velocity = 5;
inline bool Imu::has_angular_velocity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Imu::set_has_angular_velocity() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Imu::clear_has_angular_velocity() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Imu::clear_angular_velocity() {
  if (angular_velocity_ != NULL) angular_velocity_->::apollo::common::Point3D::Clear();
  clear_has_angular_velocity();
}
inline const ::apollo::common::Point3D& Imu::angular_velocity() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.angular_velocity)
  return angular_velocity_ != NULL ? *angular_velocity_ : *default_instance_->angular_velocity_;
}
inline ::apollo::common::Point3D* Imu::mutable_angular_velocity() {
  set_has_angular_velocity();
  if (angular_velocity_ == NULL) {
    angular_velocity_ = new ::apollo::common::Point3D;
  }
  // @@protoc_insertion_point(field_mutable:apollo.drivers.gnss.Imu.angular_velocity)
  return angular_velocity_;
}
inline ::apollo::common::Point3D* Imu::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:apollo.drivers.gnss.Imu.angular_velocity)
  clear_has_angular_velocity();
  ::apollo::common::Point3D* temp = angular_velocity_;
  angular_velocity_ = NULL;
  return temp;
}
inline void Imu::set_allocated_angular_velocity(::apollo::common::Point3D* angular_velocity) {
  delete angular_velocity_;
  angular_velocity_ = angular_velocity;
  if (angular_velocity) {
    set_has_angular_velocity();
  } else {
    clear_has_angular_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.gnss.Imu.angular_velocity)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gnss
}  // namespace drivers
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_drivers_2fgnss_2fimu_2eproto__INCLUDED