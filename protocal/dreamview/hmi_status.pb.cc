// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dreamview/hmi_status.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dreamview/hmi_status.pb.h"

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
namespace dreamview {

namespace {

const ::google::protobuf::Descriptor* HMIStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HMIStatus_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dreamview_2fhmi_5fstatus_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_dreamview_2fhmi_5fstatus_2eproto() {
  protobuf_AddDesc_dreamview_2fhmi_5fstatus_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dreamview/hmi_status.proto");
  GOOGLE_CHECK(file != NULL);
  HMIStatus_descriptor_ = file->message_type(0);
  static const int HMIStatus_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, system_status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, current_map_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, current_vehicle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, current_mode_),
  };
  HMIStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HMIStatus_descriptor_,
      HMIStatus::default_instance_,
      HMIStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, _has_bits_[0]),
      -1,
      -1,
      sizeof(HMIStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMIStatus, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dreamview_2fhmi_5fstatus_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HMIStatus_descriptor_, &HMIStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dreamview_2fhmi_5fstatus_2eproto() {
  delete HMIStatus::default_instance_;
  delete HMIStatus_reflection_;
  delete HMIStatus::_default_current_mode_;
}

void protobuf_AddDesc_dreamview_2fhmi_5fstatus_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_dreamview_2fhmi_5fstatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::monitor::protobuf_AddDesc_monitor_2fsystem_5fstatus_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032dreamview/hmi_status.proto\022\020apollo.dre"
    "amview\032\033monitor/system_status.proto\"\216\001\n\t"
    "HMIStatus\0223\n\rsystem_status\030\001 \001(\0132\034.apoll"
    "o.monitor.SystemStatus\022\023\n\013current_map\030\002 "
    "\001(\t\022\027\n\017current_vehicle\030\003 \001(\t\022\036\n\014current_"
    "mode\030\004 \001(\t:\010Standard", 220);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dreamview/hmi_status.proto", &protobuf_RegisterTypes);
  HMIStatus::_default_current_mode_ =
      new ::std::string("Standard", 8);
  HMIStatus::default_instance_ = new HMIStatus();
  HMIStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dreamview_2fhmi_5fstatus_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dreamview_2fhmi_5fstatus_2eproto {
  StaticDescriptorInitializer_dreamview_2fhmi_5fstatus_2eproto() {
    protobuf_AddDesc_dreamview_2fhmi_5fstatus_2eproto();
  }
} static_descriptor_initializer_dreamview_2fhmi_5fstatus_2eproto_;

// ===================================================================

::std::string* HMIStatus::_default_current_mode_ = NULL;
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HMIStatus::kSystemStatusFieldNumber;
const int HMIStatus::kCurrentMapFieldNumber;
const int HMIStatus::kCurrentVehicleFieldNumber;
const int HMIStatus::kCurrentModeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HMIStatus::HMIStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.dreamview.HMIStatus)
}

void HMIStatus::InitAsDefaultInstance() {
  system_status_ = const_cast< ::apollo::monitor::SystemStatus*>(&::apollo::monitor::SystemStatus::default_instance());
}

HMIStatus::HMIStatus(const HMIStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.dreamview.HMIStatus)
}

void HMIStatus::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  system_status_ = NULL;
  current_map_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_vehicle_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_mode_.UnsafeSetDefault(_default_current_mode_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HMIStatus::~HMIStatus() {
  // @@protoc_insertion_point(destructor:apollo.dreamview.HMIStatus)
  SharedDtor();
}

void HMIStatus::SharedDtor() {
  current_map_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_vehicle_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_mode_.DestroyNoArena(_default_current_mode_);
  if (this != default_instance_) {
    delete system_status_;
  }
}

void HMIStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HMIStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HMIStatus_descriptor_;
}

const HMIStatus& HMIStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dreamview_2fhmi_5fstatus_2eproto();
  return *default_instance_;
}

HMIStatus* HMIStatus::default_instance_ = NULL;

HMIStatus* HMIStatus::New(::google::protobuf::Arena* arena) const {
  HMIStatus* n = new HMIStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HMIStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.dreamview.HMIStatus)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_system_status()) {
      if (system_status_ != NULL) system_status_->::apollo::monitor::SystemStatus::Clear();
    }
    if (has_current_map()) {
      current_map_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_current_vehicle()) {
      current_vehicle_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_current_mode()) {
      current_mode_.ClearToDefaultNoArena(_default_current_mode_);
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool HMIStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.dreamview.HMIStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.monitor.SystemStatus system_status = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_system_status()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_current_map;
        break;
      }

      // optional string current_map = 2;
      case 2: {
        if (tag == 18) {
         parse_current_map:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_map()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->current_map().data(), this->current_map().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.dreamview.HMIStatus.current_map");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_current_vehicle;
        break;
      }

      // optional string current_vehicle = 3;
      case 3: {
        if (tag == 26) {
         parse_current_vehicle:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_vehicle()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->current_vehicle().data(), this->current_vehicle().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.dreamview.HMIStatus.current_vehicle");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_current_mode;
        break;
      }

      // optional string current_mode = 4 [default = "Standard"];
      case 4: {
        if (tag == 34) {
         parse_current_mode:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_mode()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->current_mode().data(), this->current_mode().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.dreamview.HMIStatus.current_mode");
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:apollo.dreamview.HMIStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.dreamview.HMIStatus)
  return false;
#undef DO_
}

void HMIStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.dreamview.HMIStatus)
  // optional .apollo.monitor.SystemStatus system_status = 1;
  if (has_system_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->system_status_, output);
  }

  // optional string current_map = 2;
  if (has_current_map()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_map().data(), this->current_map().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_map");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->current_map(), output);
  }

  // optional string current_vehicle = 3;
  if (has_current_vehicle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_vehicle().data(), this->current_vehicle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_vehicle");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->current_vehicle(), output);
  }

  // optional string current_mode = 4 [default = "Standard"];
  if (has_current_mode()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_mode().data(), this->current_mode().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_mode");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->current_mode(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.dreamview.HMIStatus)
}

::google::protobuf::uint8* HMIStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.dreamview.HMIStatus)
  // optional .apollo.monitor.SystemStatus system_status = 1;
  if (has_system_status()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->system_status_, false, target);
  }

  // optional string current_map = 2;
  if (has_current_map()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_map().data(), this->current_map().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_map");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->current_map(), target);
  }

  // optional string current_vehicle = 3;
  if (has_current_vehicle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_vehicle().data(), this->current_vehicle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_vehicle");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->current_vehicle(), target);
  }

  // optional string current_mode = 4 [default = "Standard"];
  if (has_current_mode()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->current_mode().data(), this->current_mode().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.dreamview.HMIStatus.current_mode");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->current_mode(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.dreamview.HMIStatus)
  return target;
}

int HMIStatus::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.dreamview.HMIStatus)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional .apollo.monitor.SystemStatus system_status = 1;
    if (has_system_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->system_status_);
    }

    // optional string current_map = 2;
    if (has_current_map()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_map());
    }

    // optional string current_vehicle = 3;
    if (has_current_vehicle()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_vehicle());
    }

    // optional string current_mode = 4 [default = "Standard"];
    if (has_current_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_mode());
    }

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

void HMIStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.dreamview.HMIStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HMIStatus* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HMIStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.dreamview.HMIStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.dreamview.HMIStatus)
    MergeFrom(*source);
  }
}

void HMIStatus::MergeFrom(const HMIStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.dreamview.HMIStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_system_status()) {
      mutable_system_status()->::apollo::monitor::SystemStatus::MergeFrom(from.system_status());
    }
    if (from.has_current_map()) {
      set_has_current_map();
      current_map_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_map_);
    }
    if (from.has_current_vehicle()) {
      set_has_current_vehicle();
      current_vehicle_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_vehicle_);
    }
    if (from.has_current_mode()) {
      set_has_current_mode();
      current_mode_.AssignWithDefault(_default_current_mode_, from.current_mode_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void HMIStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.dreamview.HMIStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HMIStatus::CopyFrom(const HMIStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.dreamview.HMIStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HMIStatus::IsInitialized() const {

  return true;
}

void HMIStatus::Swap(HMIStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HMIStatus::InternalSwap(HMIStatus* other) {
  std::swap(system_status_, other->system_status_);
  current_map_.Swap(&other->current_map_);
  current_vehicle_.Swap(&other->current_vehicle_);
  current_mode_.Swap(&other->current_mode_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HMIStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HMIStatus_descriptor_;
  metadata.reflection = HMIStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HMIStatus

// optional .apollo.monitor.SystemStatus system_status = 1;
bool HMIStatus::has_system_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void HMIStatus::set_has_system_status() {
  _has_bits_[0] |= 0x00000001u;
}
void HMIStatus::clear_has_system_status() {
  _has_bits_[0] &= ~0x00000001u;
}
void HMIStatus::clear_system_status() {
  if (system_status_ != NULL) system_status_->::apollo::monitor::SystemStatus::Clear();
  clear_has_system_status();
}
const ::apollo::monitor::SystemStatus& HMIStatus::system_status() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.system_status)
  return system_status_ != NULL ? *system_status_ : *default_instance_->system_status_;
}
::apollo::monitor::SystemStatus* HMIStatus::mutable_system_status() {
  set_has_system_status();
  if (system_status_ == NULL) {
    system_status_ = new ::apollo::monitor::SystemStatus;
  }
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.system_status)
  return system_status_;
}
::apollo::monitor::SystemStatus* HMIStatus::release_system_status() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.system_status)
  clear_has_system_status();
  ::apollo::monitor::SystemStatus* temp = system_status_;
  system_status_ = NULL;
  return temp;
}
void HMIStatus::set_allocated_system_status(::apollo::monitor::SystemStatus* system_status) {
  delete system_status_;
  system_status_ = system_status;
  if (system_status) {
    set_has_system_status();
  } else {
    clear_has_system_status();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.system_status)
}

// optional string current_map = 2;
bool HMIStatus::has_current_map() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void HMIStatus::set_has_current_map() {
  _has_bits_[0] |= 0x00000002u;
}
void HMIStatus::clear_has_current_map() {
  _has_bits_[0] &= ~0x00000002u;
}
void HMIStatus::clear_current_map() {
  current_map_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_current_map();
}
 const ::std::string& HMIStatus::current_map() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.current_map)
  return current_map_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HMIStatus::set_current_map(const ::std::string& value) {
  set_has_current_map();
  current_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.dreamview.HMIStatus.current_map)
}
 void HMIStatus::set_current_map(const char* value) {
  set_has_current_map();
  current_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.dreamview.HMIStatus.current_map)
}
 void HMIStatus::set_current_map(const char* value, size_t size) {
  set_has_current_map();
  current_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.dreamview.HMIStatus.current_map)
}
 ::std::string* HMIStatus::mutable_current_map() {
  set_has_current_map();
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.current_map)
  return current_map_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* HMIStatus::release_current_map() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.current_map)
  clear_has_current_map();
  return current_map_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HMIStatus::set_allocated_current_map(::std::string* current_map) {
  if (current_map != NULL) {
    set_has_current_map();
  } else {
    clear_has_current_map();
  }
  current_map_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_map);
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.current_map)
}

// optional string current_vehicle = 3;
bool HMIStatus::has_current_vehicle() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void HMIStatus::set_has_current_vehicle() {
  _has_bits_[0] |= 0x00000004u;
}
void HMIStatus::clear_has_current_vehicle() {
  _has_bits_[0] &= ~0x00000004u;
}
void HMIStatus::clear_current_vehicle() {
  current_vehicle_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_current_vehicle();
}
 const ::std::string& HMIStatus::current_vehicle() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.current_vehicle)
  return current_vehicle_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HMIStatus::set_current_vehicle(const ::std::string& value) {
  set_has_current_vehicle();
  current_vehicle_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.dreamview.HMIStatus.current_vehicle)
}
 void HMIStatus::set_current_vehicle(const char* value) {
  set_has_current_vehicle();
  current_vehicle_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.dreamview.HMIStatus.current_vehicle)
}
 void HMIStatus::set_current_vehicle(const char* value, size_t size) {
  set_has_current_vehicle();
  current_vehicle_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.dreamview.HMIStatus.current_vehicle)
}
 ::std::string* HMIStatus::mutable_current_vehicle() {
  set_has_current_vehicle();
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.current_vehicle)
  return current_vehicle_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* HMIStatus::release_current_vehicle() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.current_vehicle)
  clear_has_current_vehicle();
  return current_vehicle_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HMIStatus::set_allocated_current_vehicle(::std::string* current_vehicle) {
  if (current_vehicle != NULL) {
    set_has_current_vehicle();
  } else {
    clear_has_current_vehicle();
  }
  current_vehicle_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_vehicle);
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.current_vehicle)
}

// optional string current_mode = 4 [default = "Standard"];
bool HMIStatus::has_current_mode() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void HMIStatus::set_has_current_mode() {
  _has_bits_[0] |= 0x00000008u;
}
void HMIStatus::clear_has_current_mode() {
  _has_bits_[0] &= ~0x00000008u;
}
void HMIStatus::clear_current_mode() {
  current_mode_.ClearToDefaultNoArena(_default_current_mode_);
  clear_has_current_mode();
}
 const ::std::string& HMIStatus::current_mode() const {
  // @@protoc_insertion_point(field_get:apollo.dreamview.HMIStatus.current_mode)
  return current_mode_.GetNoArena(_default_current_mode_);
}
 void HMIStatus::set_current_mode(const ::std::string& value) {
  set_has_current_mode();
  current_mode_.SetNoArena(_default_current_mode_, value);
  // @@protoc_insertion_point(field_set:apollo.dreamview.HMIStatus.current_mode)
}
 void HMIStatus::set_current_mode(const char* value) {
  set_has_current_mode();
  current_mode_.SetNoArena(_default_current_mode_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.dreamview.HMIStatus.current_mode)
}
 void HMIStatus::set_current_mode(const char* value, size_t size) {
  set_has_current_mode();
  current_mode_.SetNoArena(_default_current_mode_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.dreamview.HMIStatus.current_mode)
}
 ::std::string* HMIStatus::mutable_current_mode() {
  set_has_current_mode();
  // @@protoc_insertion_point(field_mutable:apollo.dreamview.HMIStatus.current_mode)
  return current_mode_.MutableNoArena(_default_current_mode_);
}
 ::std::string* HMIStatus::release_current_mode() {
  // @@protoc_insertion_point(field_release:apollo.dreamview.HMIStatus.current_mode)
  clear_has_current_mode();
  return current_mode_.ReleaseNoArena(_default_current_mode_);
}
 void HMIStatus::set_allocated_current_mode(::std::string* current_mode) {
  if (current_mode != NULL) {
    set_has_current_mode();
  } else {
    clear_has_current_mode();
  }
  current_mode_.SetAllocatedNoArena(_default_current_mode_, current_mode);
  // @@protoc_insertion_point(field_set_allocated:apollo.dreamview.HMIStatus.current_mode)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dreamview
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
