// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control/pad_msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "control/pad_msg.pb.h"

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
namespace control {

namespace {

const ::google::protobuf::Descriptor* PadMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PadMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* DrivingAction_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_control_2fpad_5fmsg_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_control_2fpad_5fmsg_2eproto() {
  protobuf_AddDesc_control_2fpad_5fmsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "control/pad_msg.proto");
  GOOGLE_CHECK(file != NULL);
  PadMessage_descriptor_ = file->message_type(0);
  static const int PadMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, driving_mode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, action_),
  };
  PadMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PadMessage_descriptor_,
      PadMessage::default_instance_,
      PadMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(PadMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, _internal_metadata_),
      -1);
  DrivingAction_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_control_2fpad_5fmsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PadMessage_descriptor_, &PadMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_control_2fpad_5fmsg_2eproto() {
  delete PadMessage::default_instance_;
  delete PadMessage_reflection_;
}

void protobuf_AddDesc_control_2fpad_5fmsg_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_control_2fpad_5fmsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::common::protobuf_AddDesc_common_2fheader_2eproto();
  ::apollo::canbus::protobuf_AddDesc_canbus_2fchassis_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025control/pad_msg.proto\022\016apollo.control\032"
    "\023common/header.proto\032\024canbus/chassis.pro"
    "to\"\234\001\n\nPadMessage\022%\n\006header\030\001 \001(\0132\025.apol"
    "lo.common.Header\0228\n\014driving_mode\030\002 \001(\0162\""
    ".apollo.canbus.Chassis.DrivingMode\022-\n\006ac"
    "tion\030\003 \001(\0162\035.apollo.control.DrivingActio"
    "n*/\n\rDrivingAction\022\010\n\004STOP\020\000\022\t\n\005START\020\001\022"
    "\t\n\005RESET\020\002", 290);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "control/pad_msg.proto", &protobuf_RegisterTypes);
  PadMessage::default_instance_ = new PadMessage();
  PadMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_control_2fpad_5fmsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_control_2fpad_5fmsg_2eproto {
  StaticDescriptorInitializer_control_2fpad_5fmsg_2eproto() {
    protobuf_AddDesc_control_2fpad_5fmsg_2eproto();
  }
} static_descriptor_initializer_control_2fpad_5fmsg_2eproto_;
const ::google::protobuf::EnumDescriptor* DrivingAction_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DrivingAction_descriptor_;
}
bool DrivingAction_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PadMessage::kHeaderFieldNumber;
const int PadMessage::kDrivingModeFieldNumber;
const int PadMessage::kActionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PadMessage::PadMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.control.PadMessage)
}

void PadMessage::InitAsDefaultInstance() {
  header_ = const_cast< ::apollo::common::Header*>(&::apollo::common::Header::default_instance());
}

PadMessage::PadMessage(const PadMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.control.PadMessage)
}

void PadMessage::SharedCtor() {
  _cached_size_ = 0;
  header_ = NULL;
  driving_mode_ = 0;
  action_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PadMessage::~PadMessage() {
  // @@protoc_insertion_point(destructor:apollo.control.PadMessage)
  SharedDtor();
}

void PadMessage::SharedDtor() {
  if (this != default_instance_) {
    delete header_;
  }
}

void PadMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PadMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PadMessage_descriptor_;
}

const PadMessage& PadMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_control_2fpad_5fmsg_2eproto();
  return *default_instance_;
}

PadMessage* PadMessage::default_instance_ = NULL;

PadMessage* PadMessage::New(::google::protobuf::Arena* arena) const {
  PadMessage* n = new PadMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PadMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.PadMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PadMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PadMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(driving_mode_, action_);
    if (has_header()) {
      if (header_ != NULL) header_->::apollo::common::Header::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PadMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.control.PadMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.Header header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_driving_mode;
        break;
      }

      // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
      case 2: {
        if (tag == 16) {
         parse_driving_mode:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::canbus::Chassis_DrivingMode_IsValid(value)) {
            set_driving_mode(static_cast< ::apollo::canbus::Chassis_DrivingMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_action;
        break;
      }

      // optional .apollo.control.DrivingAction action = 3;
      case 3: {
        if (tag == 24) {
         parse_action:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::control::DrivingAction_IsValid(value)) {
            set_action(static_cast< ::apollo::control::DrivingAction >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
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
  // @@protoc_insertion_point(parse_success:apollo.control.PadMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.control.PadMessage)
  return false;
#undef DO_
}

void PadMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.control.PadMessage)
  // optional .apollo.common.Header header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
  if (has_driving_mode()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->driving_mode(), output);
  }

  // optional .apollo.control.DrivingAction action = 3;
  if (has_action()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->action(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.control.PadMessage)
}

::google::protobuf::uint8* PadMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.PadMessage)
  // optional .apollo.common.Header header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, false, target);
  }

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
  if (has_driving_mode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->driving_mode(), target);
  }

  // optional .apollo.control.DrivingAction action = 3;
  if (has_action()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->action(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.PadMessage)
  return target;
}

int PadMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.PadMessage)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional .apollo.common.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->header_);
    }

    // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
    if (has_driving_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->driving_mode());
    }

    // optional .apollo.control.DrivingAction action = 3;
    if (has_action()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->action());
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

void PadMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.PadMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PadMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PadMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.PadMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.PadMessage)
    MergeFrom(*source);
  }
}

void PadMessage::MergeFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.PadMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      mutable_header()->::apollo::common::Header::MergeFrom(from.header());
    }
    if (from.has_driving_mode()) {
      set_driving_mode(from.driving_mode());
    }
    if (from.has_action()) {
      set_action(from.action());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PadMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PadMessage::CopyFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PadMessage::IsInitialized() const {

  return true;
}

void PadMessage::Swap(PadMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PadMessage::InternalSwap(PadMessage* other) {
  std::swap(header_, other->header_);
  std::swap(driving_mode_, other->driving_mode_);
  std::swap(action_, other->action_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PadMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PadMessage_descriptor_;
  metadata.reflection = PadMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PadMessage

// optional .apollo.common.Header header = 1;
bool PadMessage::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PadMessage::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
void PadMessage::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
void PadMessage::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
const ::apollo::common::Header& PadMessage::header() const {
  // @@protoc_insertion_point(field_get:apollo.control.PadMessage.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
::apollo::common::Header* PadMessage::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.PadMessage.header)
  return header_;
}
::apollo::common::Header* PadMessage::release_header() {
  // @@protoc_insertion_point(field_release:apollo.control.PadMessage.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void PadMessage::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.PadMessage.header)
}

// optional .apollo.canbus.Chassis.DrivingMode driving_mode = 2;
bool PadMessage::has_driving_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PadMessage::set_has_driving_mode() {
  _has_bits_[0] |= 0x00000002u;
}
void PadMessage::clear_has_driving_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
void PadMessage::clear_driving_mode() {
  driving_mode_ = 0;
  clear_has_driving_mode();
}
 ::apollo::canbus::Chassis_DrivingMode PadMessage::driving_mode() const {
  // @@protoc_insertion_point(field_get:apollo.control.PadMessage.driving_mode)
  return static_cast< ::apollo::canbus::Chassis_DrivingMode >(driving_mode_);
}
 void PadMessage::set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  assert(::apollo::canbus::Chassis_DrivingMode_IsValid(value));
  set_has_driving_mode();
  driving_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PadMessage.driving_mode)
}

// optional .apollo.control.DrivingAction action = 3;
bool PadMessage::has_action() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PadMessage::set_has_action() {
  _has_bits_[0] |= 0x00000004u;
}
void PadMessage::clear_has_action() {
  _has_bits_[0] &= ~0x00000004u;
}
void PadMessage::clear_action() {
  action_ = 0;
  clear_has_action();
}
 ::apollo::control::DrivingAction PadMessage::action() const {
  // @@protoc_insertion_point(field_get:apollo.control.PadMessage.action)
  return static_cast< ::apollo::control::DrivingAction >(action_);
}
 void PadMessage::set_action(::apollo::control::DrivingAction value) {
  assert(::apollo::control::DrivingAction_IsValid(value));
  set_has_action();
  action_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PadMessage.action)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)