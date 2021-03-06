// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: canbus/canbus_conf.proto

#ifndef PROTOBUF_canbus_2fcanbus_5fconf_2eproto__INCLUDED
#define PROTOBUF_canbus_2fcanbus_5fconf_2eproto__INCLUDED

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
#include "drivers/canbus/can_card_parameter.pb.h"
#include "canbus/vehicle_parameter.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace canbus {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_canbus_2fcanbus_5fconf_2eproto();
void protobuf_AssignDesc_canbus_2fcanbus_5fconf_2eproto();
void protobuf_ShutdownFile_canbus_2fcanbus_5fconf_2eproto();

class CanbusConf;

// ===================================================================

class CanbusConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.canbus.CanbusConf) */ {
 public:
  CanbusConf();
  virtual ~CanbusConf();

  CanbusConf(const CanbusConf& from);

  inline CanbusConf& operator=(const CanbusConf& from) {
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
  static const CanbusConf& default_instance();

  void Swap(CanbusConf* other);

  // implements Message ----------------------------------------------

  inline CanbusConf* New() const { return New(NULL); }

  CanbusConf* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CanbusConf& from);
  void MergeFrom(const CanbusConf& from);
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
  void InternalSwap(CanbusConf* other);
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

  // optional .apollo.canbus.VehicleParameter vehicle_parameter = 1;
  bool has_vehicle_parameter() const;
  void clear_vehicle_parameter();
  static const int kVehicleParameterFieldNumber = 1;
  const ::apollo::canbus::VehicleParameter& vehicle_parameter() const;
  ::apollo::canbus::VehicleParameter* mutable_vehicle_parameter();
  ::apollo::canbus::VehicleParameter* release_vehicle_parameter();
  void set_allocated_vehicle_parameter(::apollo::canbus::VehicleParameter* vehicle_parameter);

  // optional .apollo.drivers.canbus.CANCardParameter can_card_parameter = 2;
  bool has_can_card_parameter() const;
  void clear_can_card_parameter();
  static const int kCanCardParameterFieldNumber = 2;
  const ::apollo::drivers::canbus::CANCardParameter& can_card_parameter() const;
  ::apollo::drivers::canbus::CANCardParameter* mutable_can_card_parameter();
  ::apollo::drivers::canbus::CANCardParameter* release_can_card_parameter();
  void set_allocated_can_card_parameter(::apollo::drivers::canbus::CANCardParameter* can_card_parameter);

  // optional bool enable_debug_mode = 3 [default = false];
  bool has_enable_debug_mode() const;
  void clear_enable_debug_mode();
  static const int kEnableDebugModeFieldNumber = 3;
  bool enable_debug_mode() const;
  void set_enable_debug_mode(bool value);

  // optional bool enable_receiver_log = 4 [default = false];
  bool has_enable_receiver_log() const;
  void clear_enable_receiver_log();
  static const int kEnableReceiverLogFieldNumber = 4;
  bool enable_receiver_log() const;
  void set_enable_receiver_log(bool value);

  // optional bool enable_sender_log = 5 [default = false];
  bool has_enable_sender_log() const;
  void clear_enable_sender_log();
  static const int kEnableSenderLogFieldNumber = 5;
  bool enable_sender_log() const;
  void set_enable_sender_log(bool value);

  // @@protoc_insertion_point(class_scope:apollo.canbus.CanbusConf)
 private:
  inline void set_has_vehicle_parameter();
  inline void clear_has_vehicle_parameter();
  inline void set_has_can_card_parameter();
  inline void clear_has_can_card_parameter();
  inline void set_has_enable_debug_mode();
  inline void clear_has_enable_debug_mode();
  inline void set_has_enable_receiver_log();
  inline void clear_has_enable_receiver_log();
  inline void set_has_enable_sender_log();
  inline void clear_has_enable_sender_log();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::apollo::canbus::VehicleParameter* vehicle_parameter_;
  ::apollo::drivers::canbus::CANCardParameter* can_card_parameter_;
  bool enable_debug_mode_;
  bool enable_receiver_log_;
  bool enable_sender_log_;
  friend void  protobuf_AddDesc_canbus_2fcanbus_5fconf_2eproto();
  friend void protobuf_AssignDesc_canbus_2fcanbus_5fconf_2eproto();
  friend void protobuf_ShutdownFile_canbus_2fcanbus_5fconf_2eproto();

  void InitAsDefaultInstance();
  static CanbusConf* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CanbusConf

// optional .apollo.canbus.VehicleParameter vehicle_parameter = 1;
inline bool CanbusConf::has_vehicle_parameter() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CanbusConf::set_has_vehicle_parameter() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CanbusConf::clear_has_vehicle_parameter() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CanbusConf::clear_vehicle_parameter() {
  if (vehicle_parameter_ != NULL) vehicle_parameter_->::apollo::canbus::VehicleParameter::Clear();
  clear_has_vehicle_parameter();
}
inline const ::apollo::canbus::VehicleParameter& CanbusConf::vehicle_parameter() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.CanbusConf.vehicle_parameter)
  return vehicle_parameter_ != NULL ? *vehicle_parameter_ : *default_instance_->vehicle_parameter_;
}
inline ::apollo::canbus::VehicleParameter* CanbusConf::mutable_vehicle_parameter() {
  set_has_vehicle_parameter();
  if (vehicle_parameter_ == NULL) {
    vehicle_parameter_ = new ::apollo::canbus::VehicleParameter;
  }
  // @@protoc_insertion_point(field_mutable:apollo.canbus.CanbusConf.vehicle_parameter)
  return vehicle_parameter_;
}
inline ::apollo::canbus::VehicleParameter* CanbusConf::release_vehicle_parameter() {
  // @@protoc_insertion_point(field_release:apollo.canbus.CanbusConf.vehicle_parameter)
  clear_has_vehicle_parameter();
  ::apollo::canbus::VehicleParameter* temp = vehicle_parameter_;
  vehicle_parameter_ = NULL;
  return temp;
}
inline void CanbusConf::set_allocated_vehicle_parameter(::apollo::canbus::VehicleParameter* vehicle_parameter) {
  delete vehicle_parameter_;
  vehicle_parameter_ = vehicle_parameter;
  if (vehicle_parameter) {
    set_has_vehicle_parameter();
  } else {
    clear_has_vehicle_parameter();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.canbus.CanbusConf.vehicle_parameter)
}

// optional .apollo.drivers.canbus.CANCardParameter can_card_parameter = 2;
inline bool CanbusConf::has_can_card_parameter() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CanbusConf::set_has_can_card_parameter() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CanbusConf::clear_has_can_card_parameter() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CanbusConf::clear_can_card_parameter() {
  if (can_card_parameter_ != NULL) can_card_parameter_->::apollo::drivers::canbus::CANCardParameter::Clear();
  clear_has_can_card_parameter();
}
inline const ::apollo::drivers::canbus::CANCardParameter& CanbusConf::can_card_parameter() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.CanbusConf.can_card_parameter)
  return can_card_parameter_ != NULL ? *can_card_parameter_ : *default_instance_->can_card_parameter_;
}
inline ::apollo::drivers::canbus::CANCardParameter* CanbusConf::mutable_can_card_parameter() {
  set_has_can_card_parameter();
  if (can_card_parameter_ == NULL) {
    can_card_parameter_ = new ::apollo::drivers::canbus::CANCardParameter;
  }
  // @@protoc_insertion_point(field_mutable:apollo.canbus.CanbusConf.can_card_parameter)
  return can_card_parameter_;
}
inline ::apollo::drivers::canbus::CANCardParameter* CanbusConf::release_can_card_parameter() {
  // @@protoc_insertion_point(field_release:apollo.canbus.CanbusConf.can_card_parameter)
  clear_has_can_card_parameter();
  ::apollo::drivers::canbus::CANCardParameter* temp = can_card_parameter_;
  can_card_parameter_ = NULL;
  return temp;
}
inline void CanbusConf::set_allocated_can_card_parameter(::apollo::drivers::canbus::CANCardParameter* can_card_parameter) {
  delete can_card_parameter_;
  can_card_parameter_ = can_card_parameter;
  if (can_card_parameter) {
    set_has_can_card_parameter();
  } else {
    clear_has_can_card_parameter();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.canbus.CanbusConf.can_card_parameter)
}

// optional bool enable_debug_mode = 3 [default = false];
inline bool CanbusConf::has_enable_debug_mode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CanbusConf::set_has_enable_debug_mode() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CanbusConf::clear_has_enable_debug_mode() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CanbusConf::clear_enable_debug_mode() {
  enable_debug_mode_ = false;
  clear_has_enable_debug_mode();
}
inline bool CanbusConf::enable_debug_mode() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.CanbusConf.enable_debug_mode)
  return enable_debug_mode_;
}
inline void CanbusConf::set_enable_debug_mode(bool value) {
  set_has_enable_debug_mode();
  enable_debug_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.CanbusConf.enable_debug_mode)
}

// optional bool enable_receiver_log = 4 [default = false];
inline bool CanbusConf::has_enable_receiver_log() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CanbusConf::set_has_enable_receiver_log() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CanbusConf::clear_has_enable_receiver_log() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CanbusConf::clear_enable_receiver_log() {
  enable_receiver_log_ = false;
  clear_has_enable_receiver_log();
}
inline bool CanbusConf::enable_receiver_log() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.CanbusConf.enable_receiver_log)
  return enable_receiver_log_;
}
inline void CanbusConf::set_enable_receiver_log(bool value) {
  set_has_enable_receiver_log();
  enable_receiver_log_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.CanbusConf.enable_receiver_log)
}

// optional bool enable_sender_log = 5 [default = false];
inline bool CanbusConf::has_enable_sender_log() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CanbusConf::set_has_enable_sender_log() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CanbusConf::clear_has_enable_sender_log() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CanbusConf::clear_enable_sender_log() {
  enable_sender_log_ = false;
  clear_has_enable_sender_log();
}
inline bool CanbusConf::enable_sender_log() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.CanbusConf.enable_sender_log)
  return enable_sender_log_;
}
inline void CanbusConf::set_enable_sender_log(bool value) {
  set_has_enable_sender_log();
  enable_sender_log_ = value;
  // @@protoc_insertion_point(field_set:apollo.canbus.CanbusConf.enable_sender_log)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace canbus
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_canbus_2fcanbus_5fconf_2eproto__INCLUDED
