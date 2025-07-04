// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: proto/QueueMessage.proto
// Protobuf C++ Version: 5.29.3

#ifndef proto_2fQueueMessage_2eproto_2epb_2eh
#define proto_2fQueueMessage_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029003
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_proto_2fQueueMessage_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fQueueMessage_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_proto_2fQueueMessage_2eproto;
class QueueMessage;
struct QueueMessageDefaultTypeInternal;
extern QueueMessageDefaultTypeInternal _QueueMessage_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class QueueMessage final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:QueueMessage) */ {
 public:
  inline QueueMessage() : QueueMessage(nullptr) {}
  ~QueueMessage() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(QueueMessage* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(QueueMessage));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR QueueMessage(
      ::google::protobuf::internal::ConstantInitialized);

  inline QueueMessage(const QueueMessage& from) : QueueMessage(nullptr, from) {}
  inline QueueMessage(QueueMessage&& from) noexcept
      : QueueMessage(nullptr, std::move(from)) {}
  inline QueueMessage& operator=(const QueueMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueueMessage& operator=(QueueMessage&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const QueueMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueueMessage* internal_default_instance() {
    return reinterpret_cast<const QueueMessage*>(
        &_QueueMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(QueueMessage& a, QueueMessage& b) { a.Swap(&b); }
  inline void Swap(QueueMessage* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(QueueMessage* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueueMessage* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<QueueMessage>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const QueueMessage& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const QueueMessage& from) { QueueMessage::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(QueueMessage* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "QueueMessage"; }

 protected:
  explicit QueueMessage(::google::protobuf::Arena* arena);
  QueueMessage(::google::protobuf::Arena* arena, const QueueMessage& from);
  QueueMessage(::google::protobuf::Arena* arena, QueueMessage&& from) noexcept
      : QueueMessage(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kTextFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // string text = 1;
  void clear_text() ;
  const std::string& text() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_text(Arg_&& arg, Args_... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* value);

  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(
      const std::string& value);
  std::string* _internal_mutable_text();

  public:
  // int32 id = 2;
  void clear_id() ;
  ::int32_t id() const;
  void set_id(::int32_t value);

  private:
  ::int32_t _internal_id() const;
  void _internal_set_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:QueueMessage)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      25, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const QueueMessage& from_msg);
    ::google::protobuf::internal::ArenaStringPtr text_;
    ::int32_t id_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fQueueMessage_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueueMessage

// string text = 1;
inline void QueueMessage::clear_text() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.text_.ClearToEmpty();
}
inline const std::string& QueueMessage::text() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:QueueMessage.text)
  return _internal_text();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void QueueMessage::set_text(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.text_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:QueueMessage.text)
}
inline std::string* QueueMessage::mutable_text() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:QueueMessage.text)
  return _s;
}
inline const std::string& QueueMessage::_internal_text() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.text_.Get();
}
inline void QueueMessage::_internal_set_text(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.text_.Set(value, GetArena());
}
inline std::string* QueueMessage::_internal_mutable_text() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.text_.Mutable( GetArena());
}
inline std::string* QueueMessage::release_text() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:QueueMessage.text)
  return _impl_.text_.Release();
}
inline void QueueMessage::set_allocated_text(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.text_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.text_.IsDefault()) {
    _impl_.text_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:QueueMessage.text)
}

// int32 id = 2;
inline void QueueMessage::clear_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_ = 0;
}
inline ::int32_t QueueMessage::id() const {
  // @@protoc_insertion_point(field_get:QueueMessage.id)
  return _internal_id();
}
inline void QueueMessage::set_id(::int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:QueueMessage.id)
}
inline ::int32_t QueueMessage::_internal_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.id_;
}
inline void QueueMessage::_internal_set_id(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // proto_2fQueueMessage_2eproto_2epb_2eh
