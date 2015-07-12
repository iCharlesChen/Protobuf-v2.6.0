// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class test;

// ===================================================================

class test : public ::google::protobuf::Message {
 public:
  test();
  virtual ~test();

  test(const test& from);

  inline test& operator=(const test& from) {
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
  static const test& default_instance();

  void Swap(test* other);

  // implements Message ----------------------------------------------

  inline test* New() const { return New(NULL); }

  test* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const test& from);
  void MergeFrom(const test& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(test* other);
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

  // optional int32 int32_value = 1;
  bool has_int32_value() const;
  void clear_int32_value();
  static const int kInt32ValueFieldNumber = 1;
  ::google::protobuf::int32 int32_value() const;
  void set_int32_value(::google::protobuf::int32 value);

  // optional string string_value = 2;
  bool has_string_value() const;
  void clear_string_value();
  static const int kStringValueFieldNumber = 2;
  const ::std::string& string_value() const;
  void set_string_value(const ::std::string& value);
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  ::std::string* mutable_string_value();
  ::std::string* release_string_value();
  void set_allocated_string_value(::std::string* string_value);

  // repeated int32 rpt_int32_value = 3;
  int rpt_int32_value_size() const;
  void clear_rpt_int32_value();
  static const int kRptInt32ValueFieldNumber = 3;
  ::google::protobuf::int32 rpt_int32_value(int index) const;
  void set_rpt_int32_value(int index, ::google::protobuf::int32 value);
  void add_rpt_int32_value(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      rpt_int32_value() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_rpt_int32_value();

  // repeated string rpt_string_value = 4;
  int rpt_string_value_size() const;
  void clear_rpt_string_value();
  static const int kRptStringValueFieldNumber = 4;
  const ::std::string& rpt_string_value(int index) const;
  ::std::string* mutable_rpt_string_value(int index);
  void set_rpt_string_value(int index, const ::std::string& value);
  void set_rpt_string_value(int index, const char* value);
  void set_rpt_string_value(int index, const char* value, size_t size);
  ::std::string* add_rpt_string_value();
  void add_rpt_string_value(const ::std::string& value);
  void add_rpt_string_value(const char* value);
  void add_rpt_string_value(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& rpt_string_value() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_rpt_string_value();

  // @@protoc_insertion_point(class_scope:test)
 private:
  inline void set_has_int32_value();
  inline void clear_has_int32_value();
  inline void set_has_string_value();
  inline void clear_has_string_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr string_value_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > rpt_int32_value_;
  ::google::protobuf::RepeatedPtrField< ::std::string> rpt_string_value_;
  ::google::protobuf::int32 int32_value_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static test* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// test

// optional int32 int32_value = 1;
inline bool test::has_int32_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void test::set_has_int32_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void test::clear_has_int32_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void test::clear_int32_value() {
  int32_value_ = 0;
  clear_has_int32_value();
}
inline ::google::protobuf::int32 test::int32_value() const {
  // @@protoc_insertion_point(field_get:test.int32_value)
  return int32_value_;
}
inline void test::set_int32_value(::google::protobuf::int32 value) {
  set_has_int32_value();
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:test.int32_value)
}

// optional string string_value = 2;
inline bool test::has_string_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void test::set_has_string_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void test::clear_has_string_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void test::clear_string_value() {
  string_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_string_value();
}
inline const ::std::string& test::string_value() const {
  // @@protoc_insertion_point(field_get:test.string_value)
  return string_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void test::set_string_value(const ::std::string& value) {
  set_has_string_value();
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:test.string_value)
}
inline void test::set_string_value(const char* value) {
  set_has_string_value();
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test.string_value)
}
inline void test::set_string_value(const char* value, size_t size) {
  set_has_string_value();
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test.string_value)
}
inline ::std::string* test::mutable_string_value() {
  set_has_string_value();
  // @@protoc_insertion_point(field_mutable:test.string_value)
  return string_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* test::release_string_value() {
  clear_has_string_value();
  return string_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void test::set_allocated_string_value(::std::string* string_value) {
  if (string_value != NULL) {
    set_has_string_value();
  } else {
    clear_has_string_value();
  }
  string_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value);
  // @@protoc_insertion_point(field_set_allocated:test.string_value)
}

// repeated int32 rpt_int32_value = 3;
inline int test::rpt_int32_value_size() const {
  return rpt_int32_value_.size();
}
inline void test::clear_rpt_int32_value() {
  rpt_int32_value_.Clear();
}
inline ::google::protobuf::int32 test::rpt_int32_value(int index) const {
  // @@protoc_insertion_point(field_get:test.rpt_int32_value)
  return rpt_int32_value_.Get(index);
}
inline void test::set_rpt_int32_value(int index, ::google::protobuf::int32 value) {
  rpt_int32_value_.Set(index, value);
  // @@protoc_insertion_point(field_set:test.rpt_int32_value)
}
inline void test::add_rpt_int32_value(::google::protobuf::int32 value) {
  rpt_int32_value_.Add(value);
  // @@protoc_insertion_point(field_add:test.rpt_int32_value)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
test::rpt_int32_value() const {
  // @@protoc_insertion_point(field_list:test.rpt_int32_value)
  return rpt_int32_value_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
test::mutable_rpt_int32_value() {
  // @@protoc_insertion_point(field_mutable_list:test.rpt_int32_value)
  return &rpt_int32_value_;
}

// repeated string rpt_string_value = 4;
inline int test::rpt_string_value_size() const {
  return rpt_string_value_.size();
}
inline void test::clear_rpt_string_value() {
  rpt_string_value_.Clear();
}
inline const ::std::string& test::rpt_string_value(int index) const {
  // @@protoc_insertion_point(field_get:test.rpt_string_value)
  return rpt_string_value_.Get(index);
}
inline ::std::string* test::mutable_rpt_string_value(int index) {
  // @@protoc_insertion_point(field_mutable:test.rpt_string_value)
  return rpt_string_value_.Mutable(index);
}
inline void test::set_rpt_string_value(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:test.rpt_string_value)
  rpt_string_value_.Mutable(index)->assign(value);
}
inline void test::set_rpt_string_value(int index, const char* value) {
  rpt_string_value_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:test.rpt_string_value)
}
inline void test::set_rpt_string_value(int index, const char* value, size_t size) {
  rpt_string_value_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:test.rpt_string_value)
}
inline ::std::string* test::add_rpt_string_value() {
  return rpt_string_value_.Add();
}
inline void test::add_rpt_string_value(const ::std::string& value) {
  rpt_string_value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:test.rpt_string_value)
}
inline void test::add_rpt_string_value(const char* value) {
  rpt_string_value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:test.rpt_string_value)
}
inline void test::add_rpt_string_value(const char* value, size_t size) {
  rpt_string_value_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:test.rpt_string_value)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
test::rpt_string_value() const {
  // @@protoc_insertion_point(field_list:test.rpt_string_value)
  return rpt_string_value_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
test::mutable_rpt_string_value() {
  // @@protoc_insertion_point(field_mutable_list:test.rpt_string_value)
  return &rpt_string_value_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
