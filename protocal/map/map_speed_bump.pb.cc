// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map/map_speed_bump.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "map/map_speed_bump.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace hdmap {

namespace {

const ::google::protobuf::Descriptor* SpeedBump_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SpeedBump_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_map_2fmap_5fspeed_5fbump_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_map_2fmap_5fspeed_5fbump_2eproto() {
  protobuf_AddDesc_map_2fmap_5fspeed_5fbump_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "map/map_speed_bump.proto");
  GOOGLE_CHECK(file != NULL);
  SpeedBump_descriptor_ = file->message_type(0);
  static const int SpeedBump_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, overlap_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, position_),
  };
  SpeedBump_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SpeedBump_descriptor_,
      SpeedBump::default_instance_,
      SpeedBump_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, _has_bits_[0]),
      -1,
      -1,
      sizeof(SpeedBump),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_map_2fmap_5fspeed_5fbump_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SpeedBump_descriptor_, &SpeedBump::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_map_2fmap_5fspeed_5fbump_2eproto() {
  delete SpeedBump::default_instance_;
  delete SpeedBump_reflection_;
}

void protobuf_AddDesc_map_2fmap_5fspeed_5fbump_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_map_2fmap_5fspeed_5fbump_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::hdmap::protobuf_AddDesc_map_2fmap_5fid_2eproto();
  ::apollo::hdmap::protobuf_AddDesc_map_2fmap_5fgeometry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030map/map_speed_bump.proto\022\014apollo.hdmap"
    "\032\020map/map_id.proto\032\026map/map_geometry.pro"
    "to\"v\n\tSpeedBump\022\034\n\002id\030\001 \001(\0132\020.apollo.hdm"
    "ap.Id\022$\n\noverlap_id\030\002 \003(\0132\020.apollo.hdmap"
    ".Id\022%\n\010position\030\003 \003(\0132\023.apollo.hdmap.Cur"
    "ve", 202);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "map/map_speed_bump.proto", &protobuf_RegisterTypes);
  SpeedBump::default_instance_ = new SpeedBump();
  SpeedBump::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_map_2fmap_5fspeed_5fbump_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_map_2fmap_5fspeed_5fbump_2eproto {
  StaticDescriptorInitializer_map_2fmap_5fspeed_5fbump_2eproto() {
    protobuf_AddDesc_map_2fmap_5fspeed_5fbump_2eproto();
  }
} static_descriptor_initializer_map_2fmap_5fspeed_5fbump_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeedBump::kIdFieldNumber;
const int SpeedBump::kOverlapIdFieldNumber;
const int SpeedBump::kPositionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpeedBump::SpeedBump()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.SpeedBump)
}

void SpeedBump::InitAsDefaultInstance() {
  id_ = const_cast< ::apollo::hdmap::Id*>(&::apollo::hdmap::Id::default_instance());
}

SpeedBump::SpeedBump(const SpeedBump& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.SpeedBump)
}

void SpeedBump::SharedCtor() {
  _cached_size_ = 0;
  id_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpeedBump::~SpeedBump() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.SpeedBump)
  SharedDtor();
}

void SpeedBump::SharedDtor() {
  if (this != default_instance_) {
    delete id_;
  }
}

void SpeedBump::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SpeedBump::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SpeedBump_descriptor_;
}

const SpeedBump& SpeedBump::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_map_2fmap_5fspeed_5fbump_2eproto();
  return *default_instance_;
}

SpeedBump* SpeedBump::default_instance_ = NULL;

SpeedBump* SpeedBump::New(::google::protobuf::Arena* arena) const {
  SpeedBump* n = new SpeedBump;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SpeedBump::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.SpeedBump)
  if (has_id()) {
    if (id_ != NULL) id_->::apollo::hdmap::Id::Clear();
  }
  overlap_id_.Clear();
  position_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SpeedBump::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.SpeedBump)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.hdmap.Id id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_overlap_id;
        break;
      }

      // repeated .apollo.hdmap.Id overlap_id = 2;
      case 2: {
        if (tag == 18) {
         parse_overlap_id:
          DO_(input->IncrementRecursionDepth());
         parse_loop_overlap_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_overlap_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_overlap_id;
        if (input->ExpectTag(26)) goto parse_loop_position;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .apollo.hdmap.Curve position = 3;
      case 3: {
        if (tag == 26) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_position:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_position()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_position;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.hdmap.SpeedBump)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.SpeedBump)
  return false;
#undef DO_
}

void SpeedBump::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.SpeedBump)
  // optional .apollo.hdmap.Id id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->id_, output);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0, n = this->overlap_id_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->overlap_id(i), output);
  }

  // repeated .apollo.hdmap.Curve position = 3;
  for (unsigned int i = 0, n = this->position_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->position(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.SpeedBump)
}

::google::protobuf::uint8* SpeedBump::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.SpeedBump)
  // optional .apollo.hdmap.Id id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->id_, false, target);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0, n = this->overlap_id_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->overlap_id(i), false, target);
  }

  // repeated .apollo.hdmap.Curve position = 3;
  for (unsigned int i = 0, n = this->position_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->position(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.SpeedBump)
  return target;
}

int SpeedBump::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.SpeedBump)
  int total_size = 0;

  // optional .apollo.hdmap.Id id = 1;
  if (has_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->id_);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  total_size += 1 * this->overlap_id_size();
  for (int i = 0; i < this->overlap_id_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->overlap_id(i));
  }

  // repeated .apollo.hdmap.Curve position = 3;
  total_size += 1 * this->position_size();
  for (int i = 0; i < this->position_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->position(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpeedBump::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.SpeedBump)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SpeedBump* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SpeedBump>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.SpeedBump)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.SpeedBump)
    MergeFrom(*source);
  }
}

void SpeedBump::MergeFrom(const SpeedBump& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.SpeedBump)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  overlap_id_.MergeFrom(from.overlap_id_);
  position_.MergeFrom(from.position_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      mutable_id()->::apollo::hdmap::Id::MergeFrom(from.id());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SpeedBump::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.SpeedBump)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpeedBump::CopyFrom(const SpeedBump& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.SpeedBump)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeedBump::IsInitialized() const {

  return true;
}

void SpeedBump::Swap(SpeedBump* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpeedBump::InternalSwap(SpeedBump* other) {
  std::swap(id_, other->id_);
  overlap_id_.UnsafeArenaSwap(&other->overlap_id_);
  position_.UnsafeArenaSwap(&other->position_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SpeedBump::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SpeedBump_descriptor_;
  metadata.reflection = SpeedBump_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedBump

// optional .apollo.hdmap.Id id = 1;
bool SpeedBump::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SpeedBump::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void SpeedBump::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void SpeedBump::clear_id() {
  if (id_ != NULL) id_->::apollo::hdmap::Id::Clear();
  clear_has_id();
}
const ::apollo::hdmap::Id& SpeedBump::id() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.id)
  return id_ != NULL ? *id_ : *default_instance_->id_;
}
::apollo::hdmap::Id* SpeedBump::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    id_ = new ::apollo::hdmap::Id;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.id)
  return id_;
}
::apollo::hdmap::Id* SpeedBump::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedBump.id)
  clear_has_id();
  ::apollo::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
void SpeedBump::set_allocated_id(::apollo::hdmap::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedBump.id)
}

// repeated .apollo.hdmap.Id overlap_id = 2;
int SpeedBump::overlap_id_size() const {
  return overlap_id_.size();
}
void SpeedBump::clear_overlap_id() {
  overlap_id_.Clear();
}
const ::apollo::hdmap::Id& SpeedBump::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Get(index);
}
::apollo::hdmap::Id* SpeedBump::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Mutable(index);
}
::apollo::hdmap::Id* SpeedBump::add_overlap_id() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
SpeedBump::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedBump.overlap_id)
  return &overlap_id_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
SpeedBump::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_;
}

// repeated .apollo.hdmap.Curve position = 3;
int SpeedBump::position_size() const {
  return position_.size();
}
void SpeedBump::clear_position() {
  position_.Clear();
}
const ::apollo::hdmap::Curve& SpeedBump::position(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.position)
  return position_.Get(index);
}
::apollo::hdmap::Curve* SpeedBump::mutable_position(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.position)
  return position_.Mutable(index);
}
::apollo::hdmap::Curve* SpeedBump::add_position() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedBump.position)
  return position_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >*
SpeedBump::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedBump.position)
  return &position_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >&
SpeedBump::position() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedBump.position)
  return position_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)