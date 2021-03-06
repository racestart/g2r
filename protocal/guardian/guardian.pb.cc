// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: guardian/guardian.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "guardian/guardian.pb.h"

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
namespace guardian {

namespace {

const ::google::protobuf::Descriptor* GuardianCommand_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GuardianCommand_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_guardian_2fguardian_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_guardian_2fguardian_2eproto() {
  protobuf_AddDesc_guardian_2fguardian_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "guardian/guardian.proto");
  GOOGLE_CHECK(file != NULL);
  GuardianCommand_descriptor_ = file->message_type(0);
  static const int GuardianCommand_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GuardianCommand, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GuardianCommand, control_command_),
  };
  GuardianCommand_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GuardianCommand_descriptor_,
      GuardianCommand::default_instance_,
      GuardianCommand_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GuardianCommand, _has_bits_[0]),
      -1,
      -1,
      sizeof(GuardianCommand),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GuardianCommand, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_guardian_2fguardian_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GuardianCommand_descriptor_, &GuardianCommand::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_guardian_2fguardian_2eproto() {
  delete GuardianCommand::default_instance_;
  delete GuardianCommand_reflection_;
}

void protobuf_AddDesc_guardian_2fguardian_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_guardian_2fguardian_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::common::protobuf_AddDesc_common_2fheader_2eproto();
  ::apollo::control::protobuf_AddDesc_control_2fcontrol_5fcmd_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027guardian/guardian.proto\022\017apollo.guardi"
    "an\032\023common/header.proto\032\031control/control"
    "_cmd.proto\"q\n\017GuardianCommand\022%\n\006header\030"
    "\001 \001(\0132\025.apollo.common.Header\0227\n\017control_"
    "command\030\002 \001(\0132\036.apollo.control.ControlCo"
    "mmand", 205);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "guardian/guardian.proto", &protobuf_RegisterTypes);
  GuardianCommand::default_instance_ = new GuardianCommand();
  GuardianCommand::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_guardian_2fguardian_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_guardian_2fguardian_2eproto {
  StaticDescriptorInitializer_guardian_2fguardian_2eproto() {
    protobuf_AddDesc_guardian_2fguardian_2eproto();
  }
} static_descriptor_initializer_guardian_2fguardian_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GuardianCommand::kHeaderFieldNumber;
const int GuardianCommand::kControlCommandFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GuardianCommand::GuardianCommand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.guardian.GuardianCommand)
}

void GuardianCommand::InitAsDefaultInstance() {
  header_ = const_cast< ::apollo::common::Header*>(&::apollo::common::Header::default_instance());
  control_command_ = const_cast< ::apollo::control::ControlCommand*>(&::apollo::control::ControlCommand::default_instance());
}

GuardianCommand::GuardianCommand(const GuardianCommand& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.guardian.GuardianCommand)
}

void GuardianCommand::SharedCtor() {
  _cached_size_ = 0;
  header_ = NULL;
  control_command_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GuardianCommand::~GuardianCommand() {
  // @@protoc_insertion_point(destructor:apollo.guardian.GuardianCommand)
  SharedDtor();
}

void GuardianCommand::SharedDtor() {
  if (this != default_instance_) {
    delete header_;
    delete control_command_;
  }
}

void GuardianCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GuardianCommand::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuardianCommand_descriptor_;
}

const GuardianCommand& GuardianCommand::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_guardian_2fguardian_2eproto();
  return *default_instance_;
}

GuardianCommand* GuardianCommand::default_instance_ = NULL;

GuardianCommand* GuardianCommand::New(::google::protobuf::Arena* arena) const {
  GuardianCommand* n = new GuardianCommand;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GuardianCommand::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.guardian.GuardianCommand)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_header()) {
      if (header_ != NULL) header_->::apollo::common::Header::Clear();
    }
    if (has_control_command()) {
      if (control_command_ != NULL) control_command_->::apollo::control::ControlCommand::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GuardianCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.guardian.GuardianCommand)
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
        if (input->ExpectTag(18)) goto parse_control_command;
        break;
      }

      // optional .apollo.control.ControlCommand control_command = 2;
      case 2: {
        if (tag == 18) {
         parse_control_command:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_control_command()));
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
  // @@protoc_insertion_point(parse_success:apollo.guardian.GuardianCommand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.guardian.GuardianCommand)
  return false;
#undef DO_
}

void GuardianCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.guardian.GuardianCommand)
  // optional .apollo.common.Header header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // optional .apollo.control.ControlCommand control_command = 2;
  if (has_control_command()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->control_command_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.guardian.GuardianCommand)
}

::google::protobuf::uint8* GuardianCommand::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.guardian.GuardianCommand)
  // optional .apollo.common.Header header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, false, target);
  }

  // optional .apollo.control.ControlCommand control_command = 2;
  if (has_control_command()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->control_command_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.guardian.GuardianCommand)
  return target;
}

int GuardianCommand::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.guardian.GuardianCommand)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional .apollo.common.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->header_);
    }

    // optional .apollo.control.ControlCommand control_command = 2;
    if (has_control_command()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->control_command_);
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

void GuardianCommand::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.guardian.GuardianCommand)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GuardianCommand* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GuardianCommand>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.guardian.GuardianCommand)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.guardian.GuardianCommand)
    MergeFrom(*source);
  }
}

void GuardianCommand::MergeFrom(const GuardianCommand& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.guardian.GuardianCommand)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      mutable_header()->::apollo::common::Header::MergeFrom(from.header());
    }
    if (from.has_control_command()) {
      mutable_control_command()->::apollo::control::ControlCommand::MergeFrom(from.control_command());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GuardianCommand::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.guardian.GuardianCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GuardianCommand::CopyFrom(const GuardianCommand& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.guardian.GuardianCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GuardianCommand::IsInitialized() const {

  return true;
}

void GuardianCommand::Swap(GuardianCommand* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GuardianCommand::InternalSwap(GuardianCommand* other) {
  std::swap(header_, other->header_);
  std::swap(control_command_, other->control_command_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GuardianCommand::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GuardianCommand_descriptor_;
  metadata.reflection = GuardianCommand_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GuardianCommand

// optional .apollo.common.Header header = 1;
bool GuardianCommand::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void GuardianCommand::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
void GuardianCommand::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
void GuardianCommand::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
const ::apollo::common::Header& GuardianCommand::header() const {
  // @@protoc_insertion_point(field_get:apollo.guardian.GuardianCommand.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
::apollo::common::Header* GuardianCommand::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.guardian.GuardianCommand.header)
  return header_;
}
::apollo::common::Header* GuardianCommand::release_header() {
  // @@protoc_insertion_point(field_release:apollo.guardian.GuardianCommand.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void GuardianCommand::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.guardian.GuardianCommand.header)
}

// optional .apollo.control.ControlCommand control_command = 2;
bool GuardianCommand::has_control_command() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void GuardianCommand::set_has_control_command() {
  _has_bits_[0] |= 0x00000002u;
}
void GuardianCommand::clear_has_control_command() {
  _has_bits_[0] &= ~0x00000002u;
}
void GuardianCommand::clear_control_command() {
  if (control_command_ != NULL) control_command_->::apollo::control::ControlCommand::Clear();
  clear_has_control_command();
}
const ::apollo::control::ControlCommand& GuardianCommand::control_command() const {
  // @@protoc_insertion_point(field_get:apollo.guardian.GuardianCommand.control_command)
  return control_command_ != NULL ? *control_command_ : *default_instance_->control_command_;
}
::apollo::control::ControlCommand* GuardianCommand::mutable_control_command() {
  set_has_control_command();
  if (control_command_ == NULL) {
    control_command_ = new ::apollo::control::ControlCommand;
  }
  // @@protoc_insertion_point(field_mutable:apollo.guardian.GuardianCommand.control_command)
  return control_command_;
}
::apollo::control::ControlCommand* GuardianCommand::release_control_command() {
  // @@protoc_insertion_point(field_release:apollo.guardian.GuardianCommand.control_command)
  clear_has_control_command();
  ::apollo::control::ControlCommand* temp = control_command_;
  control_command_ = NULL;
  return temp;
}
void GuardianCommand::set_allocated_control_command(::apollo::control::ControlCommand* control_command) {
  delete control_command_;
  control_command_ = control_command;
  if (control_command) {
    set_has_control_command();
  } else {
    clear_has_control_command();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.guardian.GuardianCommand.control_command)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace guardian
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
