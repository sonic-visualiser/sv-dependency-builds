// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: json.capnp

#ifndef CAPNP_INCLUDED_8ef99297a43a5e34_
#define CAPNP_INCLUDED_8ef99297a43a5e34_

#include <capnp/generated-header-support.h>
#if !CAPNP_LITE
#include <capnp/capability.h>
#endif  // !CAPNP_LITE

#if CAPNP_VERSION != 6000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(8825ffaa852cda72);
CAPNP_DECLARE_SCHEMA(c27855d853a937cc);
CAPNP_DECLARE_SCHEMA(9bbf84153dd4bb60);

}  // namespace schemas
}  // namespace capnp

namespace capnp {

struct JsonValue {
  JsonValue() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  enum Which: uint16_t {
    NULL_,
    BOOLEAN,
    NUMBER,
    STRING,
    ARRAY,
    OBJECT,
    CALL,
  };
  struct Field;
  struct Call;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(8825ffaa852cda72, 2, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct JsonValue::Field {
  Field() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(c27855d853a937cc, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct JsonValue::Call {
  Call() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9bbf84153dd4bb60, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class JsonValue::Reader {
public:
  typedef JsonValue Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline Which which() const;
  inline bool isNull() const;
  inline  ::capnp::Void getNull() const;

  inline bool isBoolean() const;
  inline bool getBoolean() const;

  inline bool isNumber() const;
  inline double getNumber() const;

  inline bool isString() const;
  inline bool hasString() const;
  inline  ::capnp::Text::Reader getString() const;

  inline bool isArray() const;
  inline bool hasArray() const;
  inline  ::capnp::List< ::capnp::JsonValue>::Reader getArray() const;

  inline bool isObject() const;
  inline bool hasObject() const;
  inline  ::capnp::List< ::capnp::JsonValue::Field>::Reader getObject() const;

  inline bool isCall() const;
  inline bool hasCall() const;
  inline  ::capnp::JsonValue::Call::Reader getCall() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class JsonValue::Builder {
public:
  typedef JsonValue Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline Which which();
  inline bool isNull();
  inline  ::capnp::Void getNull();
  inline void setNull( ::capnp::Void value = ::capnp::VOID);

  inline bool isBoolean();
  inline bool getBoolean();
  inline void setBoolean(bool value);

  inline bool isNumber();
  inline double getNumber();
  inline void setNumber(double value);

  inline bool isString();
  inline bool hasString();
  inline  ::capnp::Text::Builder getString();
  inline void setString( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initString(unsigned int size);
  inline void adoptString(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownString();

  inline bool isArray();
  inline bool hasArray();
  inline  ::capnp::List< ::capnp::JsonValue>::Builder getArray();
  inline void setArray( ::capnp::List< ::capnp::JsonValue>::Reader value);
  inline  ::capnp::List< ::capnp::JsonValue>::Builder initArray(unsigned int size);
  inline void adoptArray(::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>> disownArray();

  inline bool isObject();
  inline bool hasObject();
  inline  ::capnp::List< ::capnp::JsonValue::Field>::Builder getObject();
  inline void setObject( ::capnp::List< ::capnp::JsonValue::Field>::Reader value);
  inline  ::capnp::List< ::capnp::JsonValue::Field>::Builder initObject(unsigned int size);
  inline void adoptObject(::capnp::Orphan< ::capnp::List< ::capnp::JsonValue::Field>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue::Field>> disownObject();

  inline bool isCall();
  inline bool hasCall();
  inline  ::capnp::JsonValue::Call::Builder getCall();
  inline void setCall( ::capnp::JsonValue::Call::Reader value);
  inline  ::capnp::JsonValue::Call::Builder initCall();
  inline void adoptCall(::capnp::Orphan< ::capnp::JsonValue::Call>&& value);
  inline ::capnp::Orphan< ::capnp::JsonValue::Call> disownCall();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class JsonValue::Pipeline {
public:
  typedef JsonValue Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class JsonValue::Field::Reader {
public:
  typedef Field Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline bool hasName() const;
  inline  ::capnp::Text::Reader getName() const;

  inline bool hasValue() const;
  inline  ::capnp::JsonValue::Reader getValue() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class JsonValue::Field::Builder {
public:
  typedef Field Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasName();
  inline  ::capnp::Text::Builder getName();
  inline void setName( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initName(unsigned int size);
  inline void adoptName(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownName();

  inline bool hasValue();
  inline  ::capnp::JsonValue::Builder getValue();
  inline void setValue( ::capnp::JsonValue::Reader value);
  inline  ::capnp::JsonValue::Builder initValue();
  inline void adoptValue(::capnp::Orphan< ::capnp::JsonValue>&& value);
  inline ::capnp::Orphan< ::capnp::JsonValue> disownValue();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class JsonValue::Field::Pipeline {
public:
  typedef Field Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::capnp::JsonValue::Pipeline getValue();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class JsonValue::Call::Reader {
public:
  typedef Call Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline bool hasFunction() const;
  inline  ::capnp::Text::Reader getFunction() const;

  inline bool hasParams() const;
  inline  ::capnp::List< ::capnp::JsonValue>::Reader getParams() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class JsonValue::Call::Builder {
public:
  typedef Call Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasFunction();
  inline  ::capnp::Text::Builder getFunction();
  inline void setFunction( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initFunction(unsigned int size);
  inline void adoptFunction(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownFunction();

  inline bool hasParams();
  inline  ::capnp::List< ::capnp::JsonValue>::Builder getParams();
  inline void setParams( ::capnp::List< ::capnp::JsonValue>::Reader value);
  inline  ::capnp::List< ::capnp::JsonValue>::Builder initParams(unsigned int size);
  inline void adoptParams(::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>> disownParams();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class JsonValue::Call::Pipeline {
public:
  typedef Call Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline  ::capnp::JsonValue::Which JsonValue::Reader::which() const {
  return _reader.getDataField<Which>(0 * ::capnp::ELEMENTS);
}
inline  ::capnp::JsonValue::Which JsonValue::Builder::which() {
  return _builder.getDataField<Which>(0 * ::capnp::ELEMENTS);
}

inline bool JsonValue::Reader::isNull() const {
  return which() == JsonValue::NULL_;
}
inline bool JsonValue::Builder::isNull() {
  return which() == JsonValue::NULL_;
}
inline  ::capnp::Void JsonValue::Reader::getNull() const {
  KJ_IREQUIRE((which() == JsonValue::NULL_),
              "Must check which() before get()ing a union member.");
  return _reader.getDataField< ::capnp::Void>(
      0 * ::capnp::ELEMENTS);
}

inline  ::capnp::Void JsonValue::Builder::getNull() {
  KJ_IREQUIRE((which() == JsonValue::NULL_),
              "Must check which() before get()ing a union member.");
  return _builder.getDataField< ::capnp::Void>(
      0 * ::capnp::ELEMENTS);
}
inline void JsonValue::Builder::setNull( ::capnp::Void value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::NULL_);
  _builder.setDataField< ::capnp::Void>(
      0 * ::capnp::ELEMENTS, value);
}

inline bool JsonValue::Reader::isBoolean() const {
  return which() == JsonValue::BOOLEAN;
}
inline bool JsonValue::Builder::isBoolean() {
  return which() == JsonValue::BOOLEAN;
}
inline bool JsonValue::Reader::getBoolean() const {
  KJ_IREQUIRE((which() == JsonValue::BOOLEAN),
              "Must check which() before get()ing a union member.");
  return _reader.getDataField<bool>(
      16 * ::capnp::ELEMENTS);
}

inline bool JsonValue::Builder::getBoolean() {
  KJ_IREQUIRE((which() == JsonValue::BOOLEAN),
              "Must check which() before get()ing a union member.");
  return _builder.getDataField<bool>(
      16 * ::capnp::ELEMENTS);
}
inline void JsonValue::Builder::setBoolean(bool value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::BOOLEAN);
  _builder.setDataField<bool>(
      16 * ::capnp::ELEMENTS, value);
}

inline bool JsonValue::Reader::isNumber() const {
  return which() == JsonValue::NUMBER;
}
inline bool JsonValue::Builder::isNumber() {
  return which() == JsonValue::NUMBER;
}
inline double JsonValue::Reader::getNumber() const {
  KJ_IREQUIRE((which() == JsonValue::NUMBER),
              "Must check which() before get()ing a union member.");
  return _reader.getDataField<double>(
      1 * ::capnp::ELEMENTS);
}

inline double JsonValue::Builder::getNumber() {
  KJ_IREQUIRE((which() == JsonValue::NUMBER),
              "Must check which() before get()ing a union member.");
  return _builder.getDataField<double>(
      1 * ::capnp::ELEMENTS);
}
inline void JsonValue::Builder::setNumber(double value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::NUMBER);
  _builder.setDataField<double>(
      1 * ::capnp::ELEMENTS, value);
}

inline bool JsonValue::Reader::isString() const {
  return which() == JsonValue::STRING;
}
inline bool JsonValue::Builder::isString() {
  return which() == JsonValue::STRING;
}
inline bool JsonValue::Reader::hasString() const {
  if (which() != JsonValue::STRING) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Builder::hasString() {
  if (which() != JsonValue::STRING) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader JsonValue::Reader::getString() const {
  KJ_IREQUIRE((which() == JsonValue::STRING),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder JsonValue::Builder::getString() {
  KJ_IREQUIRE((which() == JsonValue::STRING),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void JsonValue::Builder::setString( ::capnp::Text::Reader value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::STRING);
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder JsonValue::Builder::initString(unsigned int size) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::STRING);
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void JsonValue::Builder::adoptString(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::STRING);
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> JsonValue::Builder::disownString() {
  KJ_IREQUIRE((which() == JsonValue::STRING),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool JsonValue::Reader::isArray() const {
  return which() == JsonValue::ARRAY;
}
inline bool JsonValue::Builder::isArray() {
  return which() == JsonValue::ARRAY;
}
inline bool JsonValue::Reader::hasArray() const {
  if (which() != JsonValue::ARRAY) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Builder::hasArray() {
  if (which() != JsonValue::ARRAY) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::capnp::JsonValue>::Reader JsonValue::Reader::getArray() const {
  KJ_IREQUIRE((which() == JsonValue::ARRAY),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::List< ::capnp::JsonValue>::Builder JsonValue::Builder::getArray() {
  KJ_IREQUIRE((which() == JsonValue::ARRAY),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void JsonValue::Builder::setArray( ::capnp::List< ::capnp::JsonValue>::Reader value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::ARRAY);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::capnp::JsonValue>::Builder JsonValue::Builder::initArray(unsigned int size) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::ARRAY);
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void JsonValue::Builder::adoptArray(
    ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>>&& value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::ARRAY);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>> JsonValue::Builder::disownArray() {
  KJ_IREQUIRE((which() == JsonValue::ARRAY),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool JsonValue::Reader::isObject() const {
  return which() == JsonValue::OBJECT;
}
inline bool JsonValue::Builder::isObject() {
  return which() == JsonValue::OBJECT;
}
inline bool JsonValue::Reader::hasObject() const {
  if (which() != JsonValue::OBJECT) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Builder::hasObject() {
  if (which() != JsonValue::OBJECT) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::capnp::JsonValue::Field>::Reader JsonValue::Reader::getObject() const {
  KJ_IREQUIRE((which() == JsonValue::OBJECT),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue::Field>>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::List< ::capnp::JsonValue::Field>::Builder JsonValue::Builder::getObject() {
  KJ_IREQUIRE((which() == JsonValue::OBJECT),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue::Field>>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void JsonValue::Builder::setObject( ::capnp::List< ::capnp::JsonValue::Field>::Reader value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::OBJECT);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue::Field>>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::capnp::JsonValue::Field>::Builder JsonValue::Builder::initObject(unsigned int size) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::OBJECT);
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue::Field>>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void JsonValue::Builder::adoptObject(
    ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue::Field>>&& value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::OBJECT);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue::Field>>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue::Field>> JsonValue::Builder::disownObject() {
  KJ_IREQUIRE((which() == JsonValue::OBJECT),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue::Field>>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool JsonValue::Reader::isCall() const {
  return which() == JsonValue::CALL;
}
inline bool JsonValue::Builder::isCall() {
  return which() == JsonValue::CALL;
}
inline bool JsonValue::Reader::hasCall() const {
  if (which() != JsonValue::CALL) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Builder::hasCall() {
  if (which() != JsonValue::CALL) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::JsonValue::Call::Reader JsonValue::Reader::getCall() const {
  KJ_IREQUIRE((which() == JsonValue::CALL),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue::Call>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::JsonValue::Call::Builder JsonValue::Builder::getCall() {
  KJ_IREQUIRE((which() == JsonValue::CALL),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue::Call>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void JsonValue::Builder::setCall( ::capnp::JsonValue::Call::Reader value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::CALL);
  ::capnp::_::PointerHelpers< ::capnp::JsonValue::Call>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::JsonValue::Call::Builder JsonValue::Builder::initCall() {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::CALL);
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue::Call>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void JsonValue::Builder::adoptCall(
    ::capnp::Orphan< ::capnp::JsonValue::Call>&& value) {
  _builder.setDataField<JsonValue::Which>(
      0 * ::capnp::ELEMENTS, JsonValue::CALL);
  ::capnp::_::PointerHelpers< ::capnp::JsonValue::Call>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::JsonValue::Call> JsonValue::Builder::disownCall() {
  KJ_IREQUIRE((which() == JsonValue::CALL),
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue::Call>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool JsonValue::Field::Reader::hasName() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Field::Builder::hasName() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader JsonValue::Field::Reader::getName() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder JsonValue::Field::Builder::getName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void JsonValue::Field::Builder::setName( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder JsonValue::Field::Builder::initName(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void JsonValue::Field::Builder::adoptName(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> JsonValue::Field::Builder::disownName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool JsonValue::Field::Reader::hasValue() const {
  return !_reader.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Field::Builder::hasValue() {
  return !_builder.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::JsonValue::Reader JsonValue::Field::Reader::getValue() const {
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue>::get(
      _reader.getPointerField(1 * ::capnp::POINTERS));
}
inline  ::capnp::JsonValue::Builder JsonValue::Field::Builder::getValue() {
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue>::get(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::capnp::JsonValue::Pipeline JsonValue::Field::Pipeline::getValue() {
  return  ::capnp::JsonValue::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void JsonValue::Field::Builder::setValue( ::capnp::JsonValue::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::JsonValue>::set(
      _builder.getPointerField(1 * ::capnp::POINTERS), value);
}
inline  ::capnp::JsonValue::Builder JsonValue::Field::Builder::initValue() {
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue>::init(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
inline void JsonValue::Field::Builder::adoptValue(
    ::capnp::Orphan< ::capnp::JsonValue>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::JsonValue>::adopt(
      _builder.getPointerField(1 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::JsonValue> JsonValue::Field::Builder::disownValue() {
  return ::capnp::_::PointerHelpers< ::capnp::JsonValue>::disown(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}

inline bool JsonValue::Call::Reader::hasFunction() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Call::Builder::hasFunction() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader JsonValue::Call::Reader::getFunction() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder JsonValue::Call::Builder::getFunction() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void JsonValue::Call::Builder::setFunction( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder JsonValue::Call::Builder::initFunction(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void JsonValue::Call::Builder::adoptFunction(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> JsonValue::Call::Builder::disownFunction() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool JsonValue::Call::Reader::hasParams() const {
  return !_reader.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline bool JsonValue::Call::Builder::hasParams() {
  return !_builder.getPointerField(1 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::capnp::JsonValue>::Reader JsonValue::Call::Reader::getParams() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::get(
      _reader.getPointerField(1 * ::capnp::POINTERS));
}
inline  ::capnp::List< ::capnp::JsonValue>::Builder JsonValue::Call::Builder::getParams() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::get(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}
inline void JsonValue::Call::Builder::setParams( ::capnp::List< ::capnp::JsonValue>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::set(
      _builder.getPointerField(1 * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::capnp::JsonValue>::Builder JsonValue::Call::Builder::initParams(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::init(
      _builder.getPointerField(1 * ::capnp::POINTERS), size);
}
inline void JsonValue::Call::Builder::adoptParams(
    ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::adopt(
      _builder.getPointerField(1 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::capnp::JsonValue>> JsonValue::Call::Builder::disownParams() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::JsonValue>>::disown(
      _builder.getPointerField(1 * ::capnp::POINTERS));
}

}  // namespace

#endif  // CAPNP_INCLUDED_8ef99297a43a5e34_
