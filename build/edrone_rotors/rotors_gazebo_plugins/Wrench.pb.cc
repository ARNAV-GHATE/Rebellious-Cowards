// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Wrench.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Wrench.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gz_geometry_msgs {

namespace {

const ::google::protobuf::Descriptor* Wrench_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Wrench_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Wrench_2eproto() {
  protobuf_AddDesc_Wrench_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Wrench.proto");
  GOOGLE_CHECK(file != NULL);
  Wrench_descriptor_ = file->message_type(0);
  static const int Wrench_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Wrench, force_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Wrench, torque_),
  };
  Wrench_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Wrench_descriptor_,
      Wrench::default_instance_,
      Wrench_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Wrench, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Wrench, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Wrench));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Wrench_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Wrench_descriptor_, &Wrench::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Wrench_2eproto() {
  delete Wrench::default_instance_;
  delete Wrench_reflection_;
}

void protobuf_AddDesc_Wrench_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014Wrench.proto\022\020gz_geometry_msgs\032\016vector"
    "3d.proto\"U\n\006Wrench\022$\n\005force\030\001 \002(\0132\025.gaze"
    "bo.msgs.Vector3d\022%\n\006torque\030\002 \002(\0132\025.gazeb"
    "o.msgs.Vector3d", 135);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Wrench.proto", &protobuf_RegisterTypes);
  Wrench::default_instance_ = new Wrench();
  Wrench::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Wrench_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Wrench_2eproto {
  StaticDescriptorInitializer_Wrench_2eproto() {
    protobuf_AddDesc_Wrench_2eproto();
  }
} static_descriptor_initializer_Wrench_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Wrench::kForceFieldNumber;
const int Wrench::kTorqueFieldNumber;
#endif  // !_MSC_VER

Wrench::Wrench()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz_geometry_msgs.Wrench)
}

void Wrench::InitAsDefaultInstance() {
  force_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  torque_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

Wrench::Wrench(const Wrench& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gz_geometry_msgs.Wrench)
}

void Wrench::SharedCtor() {
  _cached_size_ = 0;
  force_ = NULL;
  torque_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Wrench::~Wrench() {
  // @@protoc_insertion_point(destructor:gz_geometry_msgs.Wrench)
  SharedDtor();
}

void Wrench::SharedDtor() {
  if (this != default_instance_) {
    delete force_;
    delete torque_;
  }
}

void Wrench::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Wrench::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Wrench_descriptor_;
}

const Wrench& Wrench::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Wrench_2eproto();
  return *default_instance_;
}

Wrench* Wrench::default_instance_ = NULL;

Wrench* Wrench::New() const {
  return new Wrench;
}

void Wrench::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_force()) {
      if (force_ != NULL) force_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_torque()) {
      if (torque_ != NULL) torque_->::gazebo::msgs::Vector3d::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Wrench::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz_geometry_msgs.Wrench)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Vector3d force = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_force()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_torque;
        break;
      }

      // required .gazebo.msgs.Vector3d torque = 2;
      case 2: {
        if (tag == 18) {
         parse_torque:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_torque()));
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
  // @@protoc_insertion_point(parse_success:gz_geometry_msgs.Wrench)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz_geometry_msgs.Wrench)
  return false;
#undef DO_
}

void Wrench::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz_geometry_msgs.Wrench)
  // required .gazebo.msgs.Vector3d force = 1;
  if (has_force()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->force(), output);
  }

  // required .gazebo.msgs.Vector3d torque = 2;
  if (has_torque()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->torque(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gz_geometry_msgs.Wrench)
}

::google::protobuf::uint8* Wrench::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gz_geometry_msgs.Wrench)
  // required .gazebo.msgs.Vector3d force = 1;
  if (has_force()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->force(), target);
  }

  // required .gazebo.msgs.Vector3d torque = 2;
  if (has_torque()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->torque(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz_geometry_msgs.Wrench)
  return target;
}

int Wrench::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gazebo.msgs.Vector3d force = 1;
    if (has_force()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->force());
    }

    // required .gazebo.msgs.Vector3d torque = 2;
    if (has_torque()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->torque());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Wrench::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Wrench* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Wrench*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Wrench::MergeFrom(const Wrench& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_force()) {
      mutable_force()->::gazebo::msgs::Vector3d::MergeFrom(from.force());
    }
    if (from.has_torque()) {
      mutable_torque()->::gazebo::msgs::Vector3d::MergeFrom(from.torque());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Wrench::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Wrench::CopyFrom(const Wrench& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Wrench::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_force()) {
    if (!this->force().IsInitialized()) return false;
  }
  if (has_torque()) {
    if (!this->torque().IsInitialized()) return false;
  }
  return true;
}

void Wrench::Swap(Wrench* other) {
  if (other != this) {
    std::swap(force_, other->force_);
    std::swap(torque_, other->torque_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Wrench::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Wrench_descriptor_;
  metadata.reflection = Wrench_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_geometry_msgs

// @@protoc_insertion_point(global_scope)
