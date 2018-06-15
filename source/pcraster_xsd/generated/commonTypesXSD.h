// Copyright (c) 2005-2017 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef D__PCRDEV_DEVEL_PROJECTS_PCRASTER_SOURCE_PCRASTER_XSD____XMLSCHEMA_COMMON_TYPES_XSD_H
#define D__PCRDEV_DEVEL_PROJECTS_PCRASTER_SOURCE_PCRASTER_XSD____XMLSCHEMA_COMMON_TYPES_XSD_H

#ifndef XSD_CXX11
#define XSD_CXX11
#endif

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4009911L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

#include <xsd/cxx/xml/dom/serialization-header.hxx>
#include <xsd/cxx/tree/serialization.hxx>
#include <xsd/cxx/tree/serialization/byte.hxx>
#include <xsd/cxx/tree/serialization/unsigned-byte.hxx>
#include <xsd/cxx/tree/serialization/short.hxx>
#include <xsd/cxx/tree/serialization/unsigned-short.hxx>
#include <xsd/cxx/tree/serialization/int.hxx>
#include <xsd/cxx/tree/serialization/unsigned-int.hxx>
#include <xsd/cxx/tree/serialization/long.hxx>
#include <xsd/cxx/tree/serialization/unsigned-long.hxx>
#include <xsd/cxx/tree/serialization/boolean.hxx>
#include <xsd/cxx/tree/serialization/float.hxx>
#include <xsd/cxx/tree/serialization/double.hxx>
#include <xsd/cxx/tree/serialization/decimal.hxx>

#include <xsd/cxx/tree/std-ostream-operators.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< char, type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  typedef ::xsd::cxx::tree::content_order content_order;
  // Namespace information and list stream. Used in
  // serialization functions.
  //
  typedef ::xsd::cxx::xml::dom::namespace_info< char > namespace_info;
  typedef ::xsd::cxx::xml::dom::namespace_infomap< char > namespace_infomap;
  typedef ::xsd::cxx::tree::list_stream< char > list_stream;
  typedef ::xsd::cxx::tree::as_double< double_ > as_double;
  typedef ::xsd::cxx::tree::as_decimal< decimal > as_decimal;
  typedef ::xsd::cxx::tree::facet facet;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;
  typedef ::xsd::cxx::tree::serialization< char > serialization;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::unique_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace pcrxml
{
  class Non0UnsignedInt;
  class EmptyElement;
  class TimeDuration;
  class OneBasedIntegerSet;
  class OneBasedIntegerRange;
  class OneBasedIntegerRangeOrSet;
  class StringSet;
  class FloatSet;
  class FloatRange;
  class FloatRangeOrSet;
  class NrRowsNrCols;
  class SpaceTrimmedToken;
  class Identifier;
}


#include <memory>    // ::std::unique_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search
#include <utility>   // std::move

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

namespace pcrxml
{
  class Non0UnsignedInt: public ::xsd::cxx::tree::fundamental_base< ::xml_schema::unsigned_int, char, ::xml_schema::simple_type >
  {
    public:
    // Constructors.
    //
    Non0UnsignedInt (const ::xml_schema::unsigned_int&);

    Non0UnsignedInt (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    Non0UnsignedInt (const ::xercesc::DOMAttr& a,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    Non0UnsignedInt (const ::std::string& s,
                     const ::xercesc::DOMElement* e,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    Non0UnsignedInt (const Non0UnsignedInt& x,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    virtual Non0UnsignedInt*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual
    ~Non0UnsignedInt ();
  };

  class EmptyElement: public ::xml_schema::type
  {
    public:
    // Constructors.
    //
    EmptyElement ();

    EmptyElement (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    EmptyElement (const ::xercesc::DOMAttr& a,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    EmptyElement (const ::std::string& s,
                  const ::xercesc::DOMElement* e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    EmptyElement (const EmptyElement& x,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    virtual EmptyElement*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual
    ~EmptyElement ();
  };

  class TimeDuration: public ::xml_schema::type
  {
    public:
    // hours
    //
    typedef ::xml_schema::unsigned_int hours_type;
    typedef ::xsd::cxx::tree::optional< hours_type > hours_optional;
    typedef ::xsd::cxx::tree::traits< hours_type, char > hours_traits;

    const hours_optional&
    hours () const;

    hours_optional&
    hours ();

    void
    hours (const hours_type& x);

    void
    hours (const hours_optional& x);

    // minutes
    //
    typedef ::xml_schema::unsigned_int minutes_type;
    typedef ::xsd::cxx::tree::optional< minutes_type > minutes_optional;
    typedef ::xsd::cxx::tree::traits< minutes_type, char > minutes_traits;

    const minutes_optional&
    minutes () const;

    minutes_optional&
    minutes ();

    void
    minutes (const minutes_type& x);

    void
    minutes (const minutes_optional& x);

    // seconds
    //
    typedef ::xml_schema::unsigned_int seconds_type;
    typedef ::xsd::cxx::tree::optional< seconds_type > seconds_optional;
    typedef ::xsd::cxx::tree::traits< seconds_type, char > seconds_traits;

    const seconds_optional&
    seconds () const;

    seconds_optional&
    seconds ();

    void
    seconds (const seconds_type& x);

    void
    seconds (const seconds_optional& x);

    // Constructors.
    //
    TimeDuration ();

    TimeDuration (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    TimeDuration (const TimeDuration& x,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    virtual TimeDuration*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    TimeDuration&
    operator= (const TimeDuration& x);

    virtual
    ~TimeDuration ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    hours_optional hours_;
    minutes_optional minutes_;
    seconds_optional seconds_;
  };

  class OneBasedIntegerSet: public ::xml_schema::type
  {
    public:
    // item
    //
    typedef ::pcrxml::Non0UnsignedInt item_type;
    typedef ::xsd::cxx::tree::sequence< item_type > item_sequence;
    typedef item_sequence::iterator item_iterator;
    typedef item_sequence::const_iterator item_const_iterator;
    typedef ::xsd::cxx::tree::traits< item_type, char > item_traits;

    const item_sequence&
    item () const;

    item_sequence&
    item ();

    void
    item (const item_sequence& s);

    // Constructors.
    //
    OneBasedIntegerSet ();

    OneBasedIntegerSet (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

    OneBasedIntegerSet (const OneBasedIntegerSet& x,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

    virtual OneBasedIntegerSet*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    OneBasedIntegerSet&
    operator= (const OneBasedIntegerSet& x);

    virtual
    ~OneBasedIntegerSet ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    item_sequence item_;
  };

  class OneBasedIntegerRange: public ::xml_schema::type
  {
    public:
    // begin
    //
    typedef ::pcrxml::Non0UnsignedInt begin_type;
    typedef ::xsd::cxx::tree::traits< begin_type, char > begin_traits;

    const begin_type&
    begin () const;

    begin_type&
    begin ();

    void
    begin (const begin_type& x);

    void
    begin (::std::unique_ptr< begin_type > p);

    // end
    //
    typedef ::pcrxml::Non0UnsignedInt end_type;
    typedef ::xsd::cxx::tree::traits< end_type, char > end_traits;

    const end_type&
    end () const;

    end_type&
    end ();

    void
    end (const end_type& x);

    void
    end (::std::unique_ptr< end_type > p);

    // increment
    //
    typedef ::pcrxml::Non0UnsignedInt increment_type;
    typedef ::xsd::cxx::tree::traits< increment_type, char > increment_traits;

    const increment_type&
    increment () const;

    increment_type&
    increment ();

    void
    increment (const increment_type& x);

    void
    increment (::std::unique_ptr< increment_type > p);

    // Constructors.
    //
    OneBasedIntegerRange (const begin_type&,
                          const end_type&,
                          const increment_type&);

    OneBasedIntegerRange (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f = 0,
                          ::xml_schema::container* c = 0);

    OneBasedIntegerRange (const OneBasedIntegerRange& x,
                          ::xml_schema::flags f = 0,
                          ::xml_schema::container* c = 0);

    virtual OneBasedIntegerRange*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    OneBasedIntegerRange&
    operator= (const OneBasedIntegerRange& x);

    virtual
    ~OneBasedIntegerRange ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< begin_type > begin_;
    ::xsd::cxx::tree::one< end_type > end_;
    ::xsd::cxx::tree::one< increment_type > increment_;
  };

  class OneBasedIntegerRangeOrSet: public ::xml_schema::type
  {
    public:
    // range
    //
    typedef ::pcrxml::OneBasedIntegerRange range_type;
    typedef ::xsd::cxx::tree::optional< range_type > range_optional;
    typedef ::xsd::cxx::tree::traits< range_type, char > range_traits;

    const range_optional&
    range () const;

    range_optional&
    range ();

    void
    range (const range_type& x);

    void
    range (const range_optional& x);

    void
    range (::std::unique_ptr< range_type > p);

    // set
    //
    typedef ::pcrxml::OneBasedIntegerSet set_type;
    typedef ::xsd::cxx::tree::optional< set_type > set_optional;
    typedef ::xsd::cxx::tree::traits< set_type, char > set_traits;

    const set_optional&
    set () const;

    set_optional&
    set ();

    void
    set (const set_type& x);

    void
    set (const set_optional& x);

    void
    set (::std::unique_ptr< set_type > p);

    // Constructors.
    //
    OneBasedIntegerRangeOrSet ();

    OneBasedIntegerRangeOrSet (const ::xercesc::DOMElement& e,
                               ::xml_schema::flags f = 0,
                               ::xml_schema::container* c = 0);

    OneBasedIntegerRangeOrSet (const OneBasedIntegerRangeOrSet& x,
                               ::xml_schema::flags f = 0,
                               ::xml_schema::container* c = 0);

    virtual OneBasedIntegerRangeOrSet*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    OneBasedIntegerRangeOrSet&
    operator= (const OneBasedIntegerRangeOrSet& x);

    virtual
    ~OneBasedIntegerRangeOrSet ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    range_optional range_;
    set_optional set_;
  };

  class StringSet: public ::xml_schema::type
  {
    public:
    // item
    //
    typedef ::xml_schema::string item_type;
    typedef ::xsd::cxx::tree::sequence< item_type > item_sequence;
    typedef item_sequence::iterator item_iterator;
    typedef item_sequence::const_iterator item_const_iterator;
    typedef ::xsd::cxx::tree::traits< item_type, char > item_traits;

    const item_sequence&
    item () const;

    item_sequence&
    item ();

    void
    item (const item_sequence& s);

    // Constructors.
    //
    StringSet ();

    StringSet (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    StringSet (const StringSet& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    virtual StringSet*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    StringSet&
    operator= (const StringSet& x);

    virtual
    ~StringSet ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    item_sequence item_;
  };

  class FloatSet: public ::xml_schema::type
  {
    public:
    // item
    //
    typedef ::xml_schema::float_ item_type;
    typedef ::xsd::cxx::tree::sequence< item_type > item_sequence;
    typedef item_sequence::iterator item_iterator;
    typedef item_sequence::const_iterator item_const_iterator;
    typedef ::xsd::cxx::tree::traits< item_type, char > item_traits;

    const item_sequence&
    item () const;

    item_sequence&
    item ();

    void
    item (const item_sequence& s);

    // Constructors.
    //
    FloatSet ();

    FloatSet (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    FloatSet (const FloatSet& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    virtual FloatSet*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    FloatSet&
    operator= (const FloatSet& x);

    virtual
    ~FloatSet ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    item_sequence item_;
  };

  class FloatRange: public ::xml_schema::type
  {
    public:
    // begin
    //
    typedef ::xml_schema::float_ begin_type;
    typedef ::xsd::cxx::tree::traits< begin_type, char > begin_traits;

    const begin_type&
    begin () const;

    begin_type&
    begin ();

    void
    begin (const begin_type& x);

    // end
    //
    typedef ::xml_schema::float_ end_type;
    typedef ::xsd::cxx::tree::traits< end_type, char > end_traits;

    const end_type&
    end () const;

    end_type&
    end ();

    void
    end (const end_type& x);

    // increment
    //
    typedef ::xml_schema::float_ increment_type;
    typedef ::xsd::cxx::tree::traits< increment_type, char > increment_traits;

    const increment_type&
    increment () const;

    increment_type&
    increment ();

    void
    increment (const increment_type& x);

    // Constructors.
    //
    FloatRange (const begin_type&,
                const end_type&,
                const increment_type&);

    FloatRange (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    FloatRange (const FloatRange& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    virtual FloatRange*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    FloatRange&
    operator= (const FloatRange& x);

    virtual
    ~FloatRange ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< begin_type > begin_;
    ::xsd::cxx::tree::one< end_type > end_;
    ::xsd::cxx::tree::one< increment_type > increment_;
  };

  class FloatRangeOrSet: public ::xml_schema::type
  {
    public:
    // range
    //
    typedef ::pcrxml::FloatRange range_type;
    typedef ::xsd::cxx::tree::optional< range_type > range_optional;
    typedef ::xsd::cxx::tree::traits< range_type, char > range_traits;

    const range_optional&
    range () const;

    range_optional&
    range ();

    void
    range (const range_type& x);

    void
    range (const range_optional& x);

    void
    range (::std::unique_ptr< range_type > p);

    // set
    //
    typedef ::pcrxml::FloatSet set_type;
    typedef ::xsd::cxx::tree::optional< set_type > set_optional;
    typedef ::xsd::cxx::tree::traits< set_type, char > set_traits;

    const set_optional&
    set () const;

    set_optional&
    set ();

    void
    set (const set_type& x);

    void
    set (const set_optional& x);

    void
    set (::std::unique_ptr< set_type > p);

    // Constructors.
    //
    FloatRangeOrSet ();

    FloatRangeOrSet (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    FloatRangeOrSet (const FloatRangeOrSet& x,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    virtual FloatRangeOrSet*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    FloatRangeOrSet&
    operator= (const FloatRangeOrSet& x);

    virtual
    ~FloatRangeOrSet ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    range_optional range_;
    set_optional set_;
  };

  class NrRowsNrCols: public ::xml_schema::type
  {
    public:
    // nrRows
    //
    typedef ::pcrxml::Non0UnsignedInt nrRows_type;
    typedef ::xsd::cxx::tree::traits< nrRows_type, char > nrRows_traits;

    const nrRows_type&
    nrRows () const;

    nrRows_type&
    nrRows ();

    void
    nrRows (const nrRows_type& x);

    void
    nrRows (::std::unique_ptr< nrRows_type > p);

    // nrCols
    //
    typedef ::pcrxml::Non0UnsignedInt nrCols_type;
    typedef ::xsd::cxx::tree::traits< nrCols_type, char > nrCols_traits;

    const nrCols_type&
    nrCols () const;

    nrCols_type&
    nrCols ();

    void
    nrCols (const nrCols_type& x);

    void
    nrCols (::std::unique_ptr< nrCols_type > p);

    // Constructors.
    //
    NrRowsNrCols (const nrRows_type&,
                  const nrCols_type&);

    NrRowsNrCols (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    NrRowsNrCols (const NrRowsNrCols& x,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    virtual NrRowsNrCols*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    NrRowsNrCols&
    operator= (const NrRowsNrCols& x);

    virtual
    ~NrRowsNrCols ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< nrRows_type > nrRows_;
    ::xsd::cxx::tree::one< nrCols_type > nrCols_;
  };

  class SpaceTrimmedToken: public ::xml_schema::string
  {
    public:
    // Constructors.
    //
    SpaceTrimmedToken ();

    SpaceTrimmedToken (const char*);

    SpaceTrimmedToken (const ::std::string&);

    SpaceTrimmedToken (const ::xml_schema::string&);

    SpaceTrimmedToken (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

    SpaceTrimmedToken (const ::xercesc::DOMAttr& a,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

    SpaceTrimmedToken (const ::std::string& s,
                       const ::xercesc::DOMElement* e,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

    SpaceTrimmedToken (const SpaceTrimmedToken& x,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

    virtual SpaceTrimmedToken*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual
    ~SpaceTrimmedToken ();
  };

  class Identifier: public ::xml_schema::string
  {
    public:
    // Constructors.
    //
    Identifier ();

    Identifier (const char*);

    Identifier (const ::std::string&);

    Identifier (const ::xml_schema::string&);

    Identifier (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    Identifier (const ::xercesc::DOMAttr& a,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    Identifier (const ::std::string& s,
                const ::xercesc::DOMElement* e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    Identifier (const Identifier& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    virtual Identifier*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual
    ~Identifier ();
  };
}

#include <iosfwd>

namespace pcrxml
{
  ::std::ostream&
  operator<< (::std::ostream&, const Non0UnsignedInt&);

  ::std::ostream&
  operator<< (::std::ostream&, const EmptyElement&);

  ::std::ostream&
  operator<< (::std::ostream&, const TimeDuration&);

  ::std::ostream&
  operator<< (::std::ostream&, const OneBasedIntegerSet&);

  ::std::ostream&
  operator<< (::std::ostream&, const OneBasedIntegerRange&);

  ::std::ostream&
  operator<< (::std::ostream&, const OneBasedIntegerRangeOrSet&);

  ::std::ostream&
  operator<< (::std::ostream&, const StringSet&);

  ::std::ostream&
  operator<< (::std::ostream&, const FloatSet&);

  ::std::ostream&
  operator<< (::std::ostream&, const FloatRange&);

  ::std::ostream&
  operator<< (::std::ostream&, const FloatRangeOrSet&);

  ::std::ostream&
  operator<< (::std::ostream&, const NrRowsNrCols&);

  ::std::ostream&
  operator<< (::std::ostream&, const SpaceTrimmedToken&);

  ::std::ostream&
  operator<< (::std::ostream&, const Identifier&);
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace pcrxml
{
  // Parse a URI or a local file.
  //

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (const ::std::string& uri,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (const ::std::string& uri,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (const ::std::string& uri,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse std::istream.
  //

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::std::istream& is,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::std::istream& is,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::std::istream& is,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::std::istream& is,
                        const ::std::string& id,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::std::istream& is,
                        const ::std::string& id,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::std::istream& is,
                        const ::std::string& id,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::InputSource.
  //

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::xercesc::InputSource& is,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::xercesc::InputSource& is,
                        ::xml_schema::error_handler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::xercesc::InputSource& is,
                        ::xercesc::DOMErrorHandler& eh,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::DOMDocument.
  //

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (const ::xercesc::DOMDocument& d,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::unique_ptr< ::pcrxml::TimeDuration >
  unitTestOnlyDuration (::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument > d,
                        ::xml_schema::flags f = 0,
                        const ::xml_schema::properties& p = ::xml_schema::properties ());
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace pcrxml
{
  void
  operator<< (::xercesc::DOMElement&, const Non0UnsignedInt&);

  void
  operator<< (::xercesc::DOMAttr&, const Non0UnsignedInt&);

  void
  operator<< (::xml_schema::list_stream&,
              const Non0UnsignedInt&);

  void
  operator<< (::xercesc::DOMElement&, const EmptyElement&);

  void
  operator<< (::xercesc::DOMAttr&, const EmptyElement&);

  void
  operator<< (::xml_schema::list_stream&,
              const EmptyElement&);

  void
  operator<< (::xercesc::DOMElement&, const TimeDuration&);

  void
  operator<< (::xercesc::DOMElement&, const OneBasedIntegerSet&);

  void
  operator<< (::xercesc::DOMElement&, const OneBasedIntegerRange&);

  void
  operator<< (::xercesc::DOMElement&, const OneBasedIntegerRangeOrSet&);

  void
  operator<< (::xercesc::DOMElement&, const StringSet&);

  void
  operator<< (::xercesc::DOMElement&, const FloatSet&);

  void
  operator<< (::xercesc::DOMElement&, const FloatRange&);

  void
  operator<< (::xercesc::DOMElement&, const FloatRangeOrSet&);

  void
  operator<< (::xercesc::DOMElement&, const NrRowsNrCols&);

  void
  operator<< (::xercesc::DOMElement&, const SpaceTrimmedToken&);

  void
  operator<< (::xercesc::DOMAttr&, const SpaceTrimmedToken&);

  void
  operator<< (::xml_schema::list_stream&,
              const SpaceTrimmedToken&);

  void
  operator<< (::xercesc::DOMElement&, const Identifier&);

  void
  operator<< (::xercesc::DOMAttr&, const Identifier&);

  void
  operator<< (::xml_schema::list_stream&,
              const Identifier&);

  // Serialize to std::ostream.
  //

  void
  unitTestOnlyDuration (::std::ostream& os,
                        const ::pcrxml::TimeDuration& x,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

  void
  unitTestOnlyDuration (::std::ostream& os,
                        const ::pcrxml::TimeDuration& x,
                        ::xml_schema::error_handler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

  void
  unitTestOnlyDuration (::std::ostream& os,
                        const ::pcrxml::TimeDuration& x,
                        ::xercesc::DOMErrorHandler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

  // Serialize to xercesc::XMLFormatTarget.
  //

  void
  unitTestOnlyDuration (::xercesc::XMLFormatTarget& ft,
                        const ::pcrxml::TimeDuration& x,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

  void
  unitTestOnlyDuration (::xercesc::XMLFormatTarget& ft,
                        const ::pcrxml::TimeDuration& x,
                        ::xml_schema::error_handler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

  void
  unitTestOnlyDuration (::xercesc::XMLFormatTarget& ft,
                        const ::pcrxml::TimeDuration& x,
                        ::xercesc::DOMErrorHandler& eh,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        const ::std::string& e = "UTF-8",
                        ::xml_schema::flags f = 0);

  // Serialize to an existing xercesc::DOMDocument.
  //

  void
  unitTestOnlyDuration (::xercesc::DOMDocument& d,
                        const ::pcrxml::TimeDuration& x,
                        ::xml_schema::flags f = 0);

  // Serialize to a new xercesc::DOMDocument.
  //

  ::xml_schema::dom::unique_ptr< ::xercesc::DOMDocument >
  unitTestOnlyDuration (const ::pcrxml::TimeDuration& x,
                        const ::xml_schema::namespace_infomap& m = ::xml_schema::namespace_infomap (),
                        ::xml_schema::flags f = 0);
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
#include "commonTypesUtilEpilogue.h"
//
// End epilogue.

#endif // D__PCRDEV_DEVEL_PROJECTS_PCRASTER_SOURCE_PCRASTER_XSD____XMLSCHEMA_COMMON_TYPES_XSD_H
