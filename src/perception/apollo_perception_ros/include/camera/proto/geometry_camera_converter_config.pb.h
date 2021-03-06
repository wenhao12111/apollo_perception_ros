// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: camera/proto/geometry_camera_converter_config.proto

#ifndef PROTOBUF_camera_2fproto_2fgeometry_5fcamera_5fconverter_5fconfig_2eproto__INCLUDED
#define PROTOBUF_camera_2fproto_2fgeometry_5fcamera_5fconverter_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace apollo_perception_standalone {
namespace geometry_camera_converter_config {
class ModelConfigs;
class ModelConfigsDefaultTypeInternal;
extern ModelConfigsDefaultTypeInternal _ModelConfigs_default_instance_;
}  // namespace geometry_camera_converter_config
}  // namespace apollo_perception_standalone

namespace apollo_perception_standalone {
namespace geometry_camera_converter_config {

namespace protobuf_camera_2fproto_2fgeometry_5fcamera_5fconverter_5fconfig_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_camera_2fproto_2fgeometry_5fcamera_5fconverter_5fconfig_2eproto

// ===================================================================

class ModelConfigs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs) */ {
 public:
  ModelConfigs();
  virtual ~ModelConfigs();

  ModelConfigs(const ModelConfigs& from);

  inline ModelConfigs& operator=(const ModelConfigs& from) {
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
  static const ModelConfigs& default_instance();

  static inline const ModelConfigs* internal_default_instance() {
    return reinterpret_cast<const ModelConfigs*>(
               &_ModelConfigs_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ModelConfigs* other);

  // implements Message ----------------------------------------------

  inline ModelConfigs* New() const PROTOBUF_FINAL { return New(NULL); }

  ModelConfigs* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ModelConfigs& from);
  void MergeFrom(const ModelConfigs& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ModelConfigs* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1 [default = "GeometryCameraConverter"];
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string version = 2 [default = "1.0.0"];
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional string camera_intrinsic_file = 3 [default = "modules/perception/data/params/front_camera_intrinsics.yaml"];
  bool has_camera_intrinsic_file() const;
  void clear_camera_intrinsic_file();
  static const int kCameraIntrinsicFileFieldNumber = 3;
  const ::std::string& camera_intrinsic_file() const;
  void set_camera_intrinsic_file(const ::std::string& value);
  #if LANG_CXX11
  void set_camera_intrinsic_file(::std::string&& value);
  #endif
  void set_camera_intrinsic_file(const char* value);
  void set_camera_intrinsic_file(const char* value, size_t size);
  ::std::string* mutable_camera_intrinsic_file();
  ::std::string* release_camera_intrinsic_file();
  void set_allocated_camera_intrinsic_file(::std::string* camera_intrinsic_file);

  // @@protoc_insertion_point(class_scope:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_version();
  void clear_has_version();
  void set_has_camera_intrinsic_file();
  void clear_has_camera_intrinsic_file();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_camera_intrinsic_file_;
  ::google::protobuf::internal::ArenaStringPtr camera_intrinsic_file_;
  friend struct protobuf_camera_2fproto_2fgeometry_5fcamera_5fconverter_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "GeometryCameraConverter"];
inline bool ModelConfigs::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ModelConfigs::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ModelConfigs::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ModelConfigs::clear_name() {
  name_.ClearToDefaultNoArena(&ModelConfigs::_default_name_.get());
  clear_has_name();
}
inline const ::std::string& ModelConfigs::name() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
  return name_.GetNoArena();
}
inline void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
}
#if LANG_CXX11
inline void ModelConfigs::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &ModelConfigs::_default_name_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
}
#endif
inline void ModelConfigs::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
}
inline ::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
  return name_.MutableNoArena(&ModelConfigs::_default_name_.get());
}
inline ::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
  clear_has_name();
  return name_.ReleaseNoArena(&ModelConfigs::_default_name_.get());
}
inline void ModelConfigs::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&ModelConfigs::_default_name_.get(), name);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.name)
}

// optional string version = 2 [default = "1.0.0"];
inline bool ModelConfigs::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ModelConfigs::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ModelConfigs::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ModelConfigs::clear_version() {
  version_.ClearToDefaultNoArena(&ModelConfigs::_default_version_.get());
  clear_has_version();
}
inline const ::std::string& ModelConfigs::version() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
  return version_.GetNoArena();
}
inline void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
}
#if LANG_CXX11
inline void ModelConfigs::set_version(::std::string&& value) {
  set_has_version();
  version_.SetNoArena(
    &ModelConfigs::_default_version_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
}
#endif
inline void ModelConfigs::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
}
inline ::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
  return version_.MutableNoArena(&ModelConfigs::_default_version_.get());
}
inline ::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
  clear_has_version();
  return version_.ReleaseNoArena(&ModelConfigs::_default_version_.get());
}
inline void ModelConfigs::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&ModelConfigs::_default_version_.get(), version);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.version)
}

// optional string camera_intrinsic_file = 3 [default = "modules/perception/data/params/front_camera_intrinsics.yaml"];
inline bool ModelConfigs::has_camera_intrinsic_file() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ModelConfigs::set_has_camera_intrinsic_file() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ModelConfigs::clear_has_camera_intrinsic_file() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ModelConfigs::clear_camera_intrinsic_file() {
  camera_intrinsic_file_.ClearToDefaultNoArena(&ModelConfigs::_default_camera_intrinsic_file_.get());
  clear_has_camera_intrinsic_file();
}
inline const ::std::string& ModelConfigs::camera_intrinsic_file() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
  return camera_intrinsic_file_.GetNoArena();
}
inline void ModelConfigs::set_camera_intrinsic_file(const ::std::string& value) {
  set_has_camera_intrinsic_file();
  camera_intrinsic_file_.SetNoArena(&ModelConfigs::_default_camera_intrinsic_file_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
}
#if LANG_CXX11
inline void ModelConfigs::set_camera_intrinsic_file(::std::string&& value) {
  set_has_camera_intrinsic_file();
  camera_intrinsic_file_.SetNoArena(
    &ModelConfigs::_default_camera_intrinsic_file_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
}
#endif
inline void ModelConfigs::set_camera_intrinsic_file(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_camera_intrinsic_file();
  camera_intrinsic_file_.SetNoArena(&ModelConfigs::_default_camera_intrinsic_file_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
}
inline void ModelConfigs::set_camera_intrinsic_file(const char* value, size_t size) {
  set_has_camera_intrinsic_file();
  camera_intrinsic_file_.SetNoArena(&ModelConfigs::_default_camera_intrinsic_file_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
}
inline ::std::string* ModelConfigs::mutable_camera_intrinsic_file() {
  set_has_camera_intrinsic_file();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
  return camera_intrinsic_file_.MutableNoArena(&ModelConfigs::_default_camera_intrinsic_file_.get());
}
inline ::std::string* ModelConfigs::release_camera_intrinsic_file() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
  clear_has_camera_intrinsic_file();
  return camera_intrinsic_file_.ReleaseNoArena(&ModelConfigs::_default_camera_intrinsic_file_.get());
}
inline void ModelConfigs::set_allocated_camera_intrinsic_file(::std::string* camera_intrinsic_file) {
  if (camera_intrinsic_file != NULL) {
    set_has_camera_intrinsic_file();
  } else {
    clear_has_camera_intrinsic_file();
  }
  camera_intrinsic_file_.SetAllocatedNoArena(&ModelConfigs::_default_camera_intrinsic_file_.get(), camera_intrinsic_file);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.geometry_camera_converter_config.ModelConfigs.camera_intrinsic_file)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace geometry_camera_converter_config
}  // namespace apollo_perception_standalone

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_camera_2fproto_2fgeometry_5fcamera_5fconverter_5fconfig_2eproto__INCLUDED
