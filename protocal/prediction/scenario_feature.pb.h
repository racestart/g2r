// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: prediction/scenario_feature.proto

#ifndef PROTOBUF_prediction_2fscenario_5ffeature_2eproto__INCLUDED
#define PROTOBUF_prediction_2fscenario_5ffeature_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace apollo {
namespace prediction {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_prediction_2fscenario_5ffeature_2eproto();
void protobuf_AssignDesc_prediction_2fscenario_5ffeature_2eproto();
void protobuf_ShutdownFile_prediction_2fscenario_5ffeature_2eproto();

class ScenarioFeature;

// ===================================================================

class ScenarioFeature : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.prediction.ScenarioFeature) */ {
 public:
  ScenarioFeature();
  virtual ~ScenarioFeature();

  ScenarioFeature(const ScenarioFeature& from);

  inline ScenarioFeature& operator=(const ScenarioFeature& from) {
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
  static const ScenarioFeature& default_instance();

  void Swap(ScenarioFeature* other);

  // implements Message ----------------------------------------------

  inline ScenarioFeature* New() const { return New(NULL); }

  ScenarioFeature* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ScenarioFeature& from);
  void MergeFrom(const ScenarioFeature& from);
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
  void InternalSwap(ScenarioFeature* other);
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

  // optional double speed = 1;
  bool has_speed() const;
  void clear_speed();
  static const int kSpeedFieldNumber = 1;
  double speed() const;
  void set_speed(double value);

  // optional double acceleration = 2;
  bool has_acceleration() const;
  void clear_acceleration();
  static const int kAccelerationFieldNumber = 2;
  double acceleration() const;
  void set_acceleration(double value);

  // optional double heading = 3;
  bool has_heading() const;
  void clear_heading();
  static const int kHeadingFieldNumber = 3;
  double heading() const;
  void set_heading(double value);

  // optional string curr_lane_id = 1001;
  bool has_curr_lane_id() const;
  void clear_curr_lane_id();
  static const int kCurrLaneIdFieldNumber = 1001;
  const ::std::string& curr_lane_id() const;
  void set_curr_lane_id(const ::std::string& value);
  void set_curr_lane_id(const char* value);
  void set_curr_lane_id(const char* value, size_t size);
  ::std::string* mutable_curr_lane_id();
  ::std::string* release_curr_lane_id();
  void set_allocated_curr_lane_id(::std::string* curr_lane_id);

  // optional double curr_lane_s = 1002;
  bool has_curr_lane_s() const;
  void clear_curr_lane_s();
  static const int kCurrLaneSFieldNumber = 1002;
  double curr_lane_s() const;
  void set_curr_lane_s(double value);

  // optional string left_neighbor_lane_id = 1003;
  bool has_left_neighbor_lane_id() const;
  void clear_left_neighbor_lane_id();
  static const int kLeftNeighborLaneIdFieldNumber = 1003;
  const ::std::string& left_neighbor_lane_id() const;
  void set_left_neighbor_lane_id(const ::std::string& value);
  void set_left_neighbor_lane_id(const char* value);
  void set_left_neighbor_lane_id(const char* value, size_t size);
  ::std::string* mutable_left_neighbor_lane_id();
  ::std::string* release_left_neighbor_lane_id();
  void set_allocated_left_neighbor_lane_id(::std::string* left_neighbor_lane_id);

  // optional double left_neighbor_lane_s = 1004;
  bool has_left_neighbor_lane_s() const;
  void clear_left_neighbor_lane_s();
  static const int kLeftNeighborLaneSFieldNumber = 1004;
  double left_neighbor_lane_s() const;
  void set_left_neighbor_lane_s(double value);

  // optional string right_neighbor_lane_id = 1005;
  bool has_right_neighbor_lane_id() const;
  void clear_right_neighbor_lane_id();
  static const int kRightNeighborLaneIdFieldNumber = 1005;
  const ::std::string& right_neighbor_lane_id() const;
  void set_right_neighbor_lane_id(const ::std::string& value);
  void set_right_neighbor_lane_id(const char* value);
  void set_right_neighbor_lane_id(const char* value, size_t size);
  ::std::string* mutable_right_neighbor_lane_id();
  ::std::string* release_right_neighbor_lane_id();
  void set_allocated_right_neighbor_lane_id(::std::string* right_neighbor_lane_id);

  // optional double right_neighbor_lane_s = 1006;
  bool has_right_neighbor_lane_s() const;
  void clear_right_neighbor_lane_s();
  static const int kRightNeighborLaneSFieldNumber = 1006;
  double right_neighbor_lane_s() const;
  void set_right_neighbor_lane_s(double value);

  // optional string junction_id = 2001;
  bool has_junction_id() const;
  void clear_junction_id();
  static const int kJunctionIdFieldNumber = 2001;
  const ::std::string& junction_id() const;
  void set_junction_id(const ::std::string& value);
  void set_junction_id(const char* value);
  void set_junction_id(const char* value, size_t size);
  ::std::string* mutable_junction_id();
  ::std::string* release_junction_id();
  void set_allocated_junction_id(::std::string* junction_id);

  // optional double dist_to_junction = 2002;
  bool has_dist_to_junction() const;
  void clear_dist_to_junction();
  static const int kDistToJunctionFieldNumber = 2002;
  double dist_to_junction() const;
  void set_dist_to_junction(double value);

  // repeated int32 obstacle_id = 3001;
  int obstacle_id_size() const;
  void clear_obstacle_id();
  static const int kObstacleIdFieldNumber = 3001;
  ::google::protobuf::int32 obstacle_id(int index) const;
  void set_obstacle_id(int index, ::google::protobuf::int32 value);
  void add_obstacle_id(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      obstacle_id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_obstacle_id();

  // @@protoc_insertion_point(class_scope:apollo.prediction.ScenarioFeature)
 private:
  inline void set_has_speed();
  inline void clear_has_speed();
  inline void set_has_acceleration();
  inline void clear_has_acceleration();
  inline void set_has_heading();
  inline void clear_has_heading();
  inline void set_has_curr_lane_id();
  inline void clear_has_curr_lane_id();
  inline void set_has_curr_lane_s();
  inline void clear_has_curr_lane_s();
  inline void set_has_left_neighbor_lane_id();
  inline void clear_has_left_neighbor_lane_id();
  inline void set_has_left_neighbor_lane_s();
  inline void clear_has_left_neighbor_lane_s();
  inline void set_has_right_neighbor_lane_id();
  inline void clear_has_right_neighbor_lane_id();
  inline void set_has_right_neighbor_lane_s();
  inline void clear_has_right_neighbor_lane_s();
  inline void set_has_junction_id();
  inline void clear_has_junction_id();
  inline void set_has_dist_to_junction();
  inline void clear_has_dist_to_junction();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double speed_;
  double acceleration_;
  double heading_;
  ::google::protobuf::internal::ArenaStringPtr curr_lane_id_;
  double curr_lane_s_;
  ::google::protobuf::internal::ArenaStringPtr left_neighbor_lane_id_;
  double left_neighbor_lane_s_;
  ::google::protobuf::internal::ArenaStringPtr right_neighbor_lane_id_;
  double right_neighbor_lane_s_;
  ::google::protobuf::internal::ArenaStringPtr junction_id_;
  double dist_to_junction_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > obstacle_id_;
  friend void  protobuf_AddDesc_prediction_2fscenario_5ffeature_2eproto();
  friend void protobuf_AssignDesc_prediction_2fscenario_5ffeature_2eproto();
  friend void protobuf_ShutdownFile_prediction_2fscenario_5ffeature_2eproto();

  void InitAsDefaultInstance();
  static ScenarioFeature* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ScenarioFeature

// optional double speed = 1;
inline bool ScenarioFeature::has_speed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ScenarioFeature::set_has_speed() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ScenarioFeature::clear_has_speed() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ScenarioFeature::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
inline double ScenarioFeature::speed() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.speed)
  return speed_;
}
inline void ScenarioFeature::set_speed(double value) {
  set_has_speed();
  speed_ = value;
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.speed)
}

// optional double acceleration = 2;
inline bool ScenarioFeature::has_acceleration() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ScenarioFeature::set_has_acceleration() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ScenarioFeature::clear_has_acceleration() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ScenarioFeature::clear_acceleration() {
  acceleration_ = 0;
  clear_has_acceleration();
}
inline double ScenarioFeature::acceleration() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.acceleration)
  return acceleration_;
}
inline void ScenarioFeature::set_acceleration(double value) {
  set_has_acceleration();
  acceleration_ = value;
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.acceleration)
}

// optional double heading = 3;
inline bool ScenarioFeature::has_heading() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ScenarioFeature::set_has_heading() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ScenarioFeature::clear_has_heading() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ScenarioFeature::clear_heading() {
  heading_ = 0;
  clear_has_heading();
}
inline double ScenarioFeature::heading() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.heading)
  return heading_;
}
inline void ScenarioFeature::set_heading(double value) {
  set_has_heading();
  heading_ = value;
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.heading)
}

// optional string curr_lane_id = 1001;
inline bool ScenarioFeature::has_curr_lane_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ScenarioFeature::set_has_curr_lane_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ScenarioFeature::clear_has_curr_lane_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ScenarioFeature::clear_curr_lane_id() {
  curr_lane_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_curr_lane_id();
}
inline const ::std::string& ScenarioFeature::curr_lane_id() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.curr_lane_id)
  return curr_lane_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_curr_lane_id(const ::std::string& value) {
  set_has_curr_lane_id();
  curr_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.curr_lane_id)
}
inline void ScenarioFeature::set_curr_lane_id(const char* value) {
  set_has_curr_lane_id();
  curr_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.prediction.ScenarioFeature.curr_lane_id)
}
inline void ScenarioFeature::set_curr_lane_id(const char* value, size_t size) {
  set_has_curr_lane_id();
  curr_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.prediction.ScenarioFeature.curr_lane_id)
}
inline ::std::string* ScenarioFeature::mutable_curr_lane_id() {
  set_has_curr_lane_id();
  // @@protoc_insertion_point(field_mutable:apollo.prediction.ScenarioFeature.curr_lane_id)
  return curr_lane_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScenarioFeature::release_curr_lane_id() {
  // @@protoc_insertion_point(field_release:apollo.prediction.ScenarioFeature.curr_lane_id)
  clear_has_curr_lane_id();
  return curr_lane_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_allocated_curr_lane_id(::std::string* curr_lane_id) {
  if (curr_lane_id != NULL) {
    set_has_curr_lane_id();
  } else {
    clear_has_curr_lane_id();
  }
  curr_lane_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), curr_lane_id);
  // @@protoc_insertion_point(field_set_allocated:apollo.prediction.ScenarioFeature.curr_lane_id)
}

// optional double curr_lane_s = 1002;
inline bool ScenarioFeature::has_curr_lane_s() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ScenarioFeature::set_has_curr_lane_s() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ScenarioFeature::clear_has_curr_lane_s() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ScenarioFeature::clear_curr_lane_s() {
  curr_lane_s_ = 0;
  clear_has_curr_lane_s();
}
inline double ScenarioFeature::curr_lane_s() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.curr_lane_s)
  return curr_lane_s_;
}
inline void ScenarioFeature::set_curr_lane_s(double value) {
  set_has_curr_lane_s();
  curr_lane_s_ = value;
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.curr_lane_s)
}

// optional string left_neighbor_lane_id = 1003;
inline bool ScenarioFeature::has_left_neighbor_lane_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ScenarioFeature::set_has_left_neighbor_lane_id() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ScenarioFeature::clear_has_left_neighbor_lane_id() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ScenarioFeature::clear_left_neighbor_lane_id() {
  left_neighbor_lane_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_left_neighbor_lane_id();
}
inline const ::std::string& ScenarioFeature::left_neighbor_lane_id() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.left_neighbor_lane_id)
  return left_neighbor_lane_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_left_neighbor_lane_id(const ::std::string& value) {
  set_has_left_neighbor_lane_id();
  left_neighbor_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.left_neighbor_lane_id)
}
inline void ScenarioFeature::set_left_neighbor_lane_id(const char* value) {
  set_has_left_neighbor_lane_id();
  left_neighbor_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.prediction.ScenarioFeature.left_neighbor_lane_id)
}
inline void ScenarioFeature::set_left_neighbor_lane_id(const char* value, size_t size) {
  set_has_left_neighbor_lane_id();
  left_neighbor_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.prediction.ScenarioFeature.left_neighbor_lane_id)
}
inline ::std::string* ScenarioFeature::mutable_left_neighbor_lane_id() {
  set_has_left_neighbor_lane_id();
  // @@protoc_insertion_point(field_mutable:apollo.prediction.ScenarioFeature.left_neighbor_lane_id)
  return left_neighbor_lane_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScenarioFeature::release_left_neighbor_lane_id() {
  // @@protoc_insertion_point(field_release:apollo.prediction.ScenarioFeature.left_neighbor_lane_id)
  clear_has_left_neighbor_lane_id();
  return left_neighbor_lane_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_allocated_left_neighbor_lane_id(::std::string* left_neighbor_lane_id) {
  if (left_neighbor_lane_id != NULL) {
    set_has_left_neighbor_lane_id();
  } else {
    clear_has_left_neighbor_lane_id();
  }
  left_neighbor_lane_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), left_neighbor_lane_id);
  // @@protoc_insertion_point(field_set_allocated:apollo.prediction.ScenarioFeature.left_neighbor_lane_id)
}

// optional double left_neighbor_lane_s = 1004;
inline bool ScenarioFeature::has_left_neighbor_lane_s() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ScenarioFeature::set_has_left_neighbor_lane_s() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ScenarioFeature::clear_has_left_neighbor_lane_s() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ScenarioFeature::clear_left_neighbor_lane_s() {
  left_neighbor_lane_s_ = 0;
  clear_has_left_neighbor_lane_s();
}
inline double ScenarioFeature::left_neighbor_lane_s() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.left_neighbor_lane_s)
  return left_neighbor_lane_s_;
}
inline void ScenarioFeature::set_left_neighbor_lane_s(double value) {
  set_has_left_neighbor_lane_s();
  left_neighbor_lane_s_ = value;
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.left_neighbor_lane_s)
}

// optional string right_neighbor_lane_id = 1005;
inline bool ScenarioFeature::has_right_neighbor_lane_id() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ScenarioFeature::set_has_right_neighbor_lane_id() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ScenarioFeature::clear_has_right_neighbor_lane_id() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ScenarioFeature::clear_right_neighbor_lane_id() {
  right_neighbor_lane_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_right_neighbor_lane_id();
}
inline const ::std::string& ScenarioFeature::right_neighbor_lane_id() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.right_neighbor_lane_id)
  return right_neighbor_lane_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_right_neighbor_lane_id(const ::std::string& value) {
  set_has_right_neighbor_lane_id();
  right_neighbor_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.right_neighbor_lane_id)
}
inline void ScenarioFeature::set_right_neighbor_lane_id(const char* value) {
  set_has_right_neighbor_lane_id();
  right_neighbor_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.prediction.ScenarioFeature.right_neighbor_lane_id)
}
inline void ScenarioFeature::set_right_neighbor_lane_id(const char* value, size_t size) {
  set_has_right_neighbor_lane_id();
  right_neighbor_lane_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.prediction.ScenarioFeature.right_neighbor_lane_id)
}
inline ::std::string* ScenarioFeature::mutable_right_neighbor_lane_id() {
  set_has_right_neighbor_lane_id();
  // @@protoc_insertion_point(field_mutable:apollo.prediction.ScenarioFeature.right_neighbor_lane_id)
  return right_neighbor_lane_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScenarioFeature::release_right_neighbor_lane_id() {
  // @@protoc_insertion_point(field_release:apollo.prediction.ScenarioFeature.right_neighbor_lane_id)
  clear_has_right_neighbor_lane_id();
  return right_neighbor_lane_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_allocated_right_neighbor_lane_id(::std::string* right_neighbor_lane_id) {
  if (right_neighbor_lane_id != NULL) {
    set_has_right_neighbor_lane_id();
  } else {
    clear_has_right_neighbor_lane_id();
  }
  right_neighbor_lane_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), right_neighbor_lane_id);
  // @@protoc_insertion_point(field_set_allocated:apollo.prediction.ScenarioFeature.right_neighbor_lane_id)
}

// optional double right_neighbor_lane_s = 1006;
inline bool ScenarioFeature::has_right_neighbor_lane_s() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ScenarioFeature::set_has_right_neighbor_lane_s() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ScenarioFeature::clear_has_right_neighbor_lane_s() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ScenarioFeature::clear_right_neighbor_lane_s() {
  right_neighbor_lane_s_ = 0;
  clear_has_right_neighbor_lane_s();
}
inline double ScenarioFeature::right_neighbor_lane_s() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.right_neighbor_lane_s)
  return right_neighbor_lane_s_;
}
inline void ScenarioFeature::set_right_neighbor_lane_s(double value) {
  set_has_right_neighbor_lane_s();
  right_neighbor_lane_s_ = value;
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.right_neighbor_lane_s)
}

// optional string junction_id = 2001;
inline bool ScenarioFeature::has_junction_id() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ScenarioFeature::set_has_junction_id() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ScenarioFeature::clear_has_junction_id() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ScenarioFeature::clear_junction_id() {
  junction_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_junction_id();
}
inline const ::std::string& ScenarioFeature::junction_id() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.junction_id)
  return junction_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_junction_id(const ::std::string& value) {
  set_has_junction_id();
  junction_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.junction_id)
}
inline void ScenarioFeature::set_junction_id(const char* value) {
  set_has_junction_id();
  junction_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.prediction.ScenarioFeature.junction_id)
}
inline void ScenarioFeature::set_junction_id(const char* value, size_t size) {
  set_has_junction_id();
  junction_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.prediction.ScenarioFeature.junction_id)
}
inline ::std::string* ScenarioFeature::mutable_junction_id() {
  set_has_junction_id();
  // @@protoc_insertion_point(field_mutable:apollo.prediction.ScenarioFeature.junction_id)
  return junction_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScenarioFeature::release_junction_id() {
  // @@protoc_insertion_point(field_release:apollo.prediction.ScenarioFeature.junction_id)
  clear_has_junction_id();
  return junction_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScenarioFeature::set_allocated_junction_id(::std::string* junction_id) {
  if (junction_id != NULL) {
    set_has_junction_id();
  } else {
    clear_has_junction_id();
  }
  junction_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), junction_id);
  // @@protoc_insertion_point(field_set_allocated:apollo.prediction.ScenarioFeature.junction_id)
}

// optional double dist_to_junction = 2002;
inline bool ScenarioFeature::has_dist_to_junction() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ScenarioFeature::set_has_dist_to_junction() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ScenarioFeature::clear_has_dist_to_junction() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ScenarioFeature::clear_dist_to_junction() {
  dist_to_junction_ = 0;
  clear_has_dist_to_junction();
}
inline double ScenarioFeature::dist_to_junction() const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.dist_to_junction)
  return dist_to_junction_;
}
inline void ScenarioFeature::set_dist_to_junction(double value) {
  set_has_dist_to_junction();
  dist_to_junction_ = value;
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.dist_to_junction)
}

// repeated int32 obstacle_id = 3001;
inline int ScenarioFeature::obstacle_id_size() const {
  return obstacle_id_.size();
}
inline void ScenarioFeature::clear_obstacle_id() {
  obstacle_id_.Clear();
}
inline ::google::protobuf::int32 ScenarioFeature::obstacle_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.prediction.ScenarioFeature.obstacle_id)
  return obstacle_id_.Get(index);
}
inline void ScenarioFeature::set_obstacle_id(int index, ::google::protobuf::int32 value) {
  obstacle_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:apollo.prediction.ScenarioFeature.obstacle_id)
}
inline void ScenarioFeature::add_obstacle_id(::google::protobuf::int32 value) {
  obstacle_id_.Add(value);
  // @@protoc_insertion_point(field_add:apollo.prediction.ScenarioFeature.obstacle_id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ScenarioFeature::obstacle_id() const {
  // @@protoc_insertion_point(field_list:apollo.prediction.ScenarioFeature.obstacle_id)
  return obstacle_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ScenarioFeature::mutable_obstacle_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.prediction.ScenarioFeature.obstacle_id)
  return &obstacle_id_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace prediction
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_prediction_2fscenario_5ffeature_2eproto__INCLUDED
