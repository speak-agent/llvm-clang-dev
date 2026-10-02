// A test-local subset of the std::meta library, for the tests of this directory (and the other reflection
// papers): the tests are built without a C++ library, so it needs none. The metafunction identifiers of
// 'detail' are libc++'s (bloomberg/clang-p2996, libcxx/include/meta, Copyright 2025 Bloomberg Finance L.P.,
// Apache-2.0 WITH LLVM-exception; the compiler's table of metafunctions is indexed by them), and so is how
// each function below calls '__metafunction'; the containers are fixed-capacity arrays.
#ifndef LANG_META_H
#define LANG_META_H

namespace std {
using size_t = decltype(sizeof 0);
using ptrdiff_t = decltype((char *)0 - (char *)0);

namespace meta {
using info = decltype(^^int);

namespace detail {
enum : unsigned {

  // non-exposed metafunctions
  __metafn_get_begin_enumerator_decl_of,
  __metafn_get_get_next_enumerator_decl_of,
  __metafn_get_ith_base_of,
  __metafn_get_ith_template_argument_of,
  __metafn_get_begin_member_decl_of,
  __metafn_get_next_member_decl_of,
  __metafn_is_structural_type,
  __metafn_map_decl_to_entity,
  __metafn_is_unscoped_attribute,
  __metafn_is_clang_attribute,
  __metafn_is_msvc_attribute,
  __metafn_is_gcc_attribute,

  // P2996 metafunctions
  __metafn_identifier_of,
  __metafn_has_identifier,
  __metafn_operator_of,
  __metafn_source_location_of,
  __metafn_type_of,
  __metafn_parent_of,
  __metafn_underlying_entity_of,
  __metafn_proxied_entity_of,
  __metafn_object_of,
  __metafn_constant_of,
  __metafn_template_of,
  __metafn_substitute,
  __metafn_extract,
  __metafn_is_public,
  __metafn_is_protected,
  __metafn_is_private,
  __metafn_is_virtual,
  __metafn_is_pure_virtual,
  __metafn_is_override,
  __metafn_is_deleted,
  __metafn_is_defaulted,
  __metafn_is_explicit,
  __metafn_is_noexcept,
  __metafn_is_bit_field,
  __metafn_is_enumerator,
  __metafn_is_final,
  __metafn_is_const,
  __metafn_is_volatile,
  __metafn_is_mutable_member,
  __metafn_is_lvalue_reference_qualified,
  __metafn_is_rvalue_reference_qualified,
  __metafn_has_static_storage_duration,
  __metafn_has_thread_storage_duration,
  __metafn_has_automatic_storage_duration,
  __metafn_has_internal_linkage,
  __metafn_has_module_linkage,
  __metafn_has_external_linkage,
  __metafn_has_linkage,
  __metafn_is_class_member,
  __metafn_is_namespace_member,
  __metafn_is_nonstatic_data_member,
  __metafn_is_static_member,
  __metafn_is_base,
  __metafn_is_data_member_spec,
  __metafn_is_namespace,
  __metafn_is_function,
  __metafn_is_variable,
  __metafn_is_type,
  __metafn_is_alias,
  __metafn_is_entity_proxy,
  __metafn_is_complete_type,
  __metafn_has_complete_definition,
  __metafn_is_enumerable_type,
  __metafn_is_template,
  __metafn_is_function_template,
  __metafn_is_variable_template,
  __metafn_is_class_template,
  __metafn_is_alias_template,
  __metafn_is_conversion_function_template,
  __metafn_is_operator_function_template,
  __metafn_is_literal_operator_template,
  __metafn_is_constructor_template,
  __metafn_is_concept,
  __metafn_is_structured_binding,
  __metafn_is_value,
  __metafn_is_object,
  __metafn_has_template_arguments,
  __metafn_has_default_member_initializer,
  __metafn_is_conversion_function,
  __metafn_is_operator_function,
  __metafn_is_literal_operator,
  __metafn_is_constructor,
  __metafn_is_default_constructor,
  __metafn_is_copy_constructor,
  __metafn_is_move_constructor,
  __metafn_is_assignment,
  __metafn_is_copy_assignment,
  __metafn_is_move_assignment,
  __metafn_is_destructor,
  __metafn_is_special_member_function,
  __metafn_is_user_provided,
  __metafn_is_user_declared,
  __metafn_reflect_result,
  __metafn_data_member_spec,
  __metafn_enumerator_spec,
  __metafn_is_enumerator_spec,
  __metafn_define_aggregate,
  __metafn_define_enum,
  __metafn_offset_of,
  __metafn_size_of,
  __metafn_bit_offset_of,
  __metafn_bit_size_of,
  __metafn_alignment_of,

  // P3096 parameter reflection metafunctions
  __metafn_get_ith_parameter_of,
  __metafn_has_ellipsis_parameter,
  __metafn_has_default_argument,
  __metafn_is_explicit_object_parameter,
  __metafn_is_function_parameter,
  __metafn_return_type_of,
  __metafn_variable_of,

  // P3394 annotation metafunctions
  __metafn_get_ith_annotation_of,
  __metafn_is_annotation,
  __metafn_annotate,

  // P3385 attributes reflection
  __metafn_get_ith_attribute_of,
  __metafn_is_attribute,
  __metafn_has_attribute,
  __metafn_has_attribute_namespace,
  __metafn_attribute_token_of,
  __metafn_attribute_namespace_of,

  // P3493 accessibility metafunctions
  __metafn_access_context,
  __metafn_is_accessible,

  // Other bespoke functions (not proposed at this time)
  __metafn_is_access_specified,
  __metafn_reflect_invoke,

  // P4033 extension: completing unscoped (C-style) enums
  __metafn_define_unscoped_enum,

  // P3867: define_encoded_static_string
  __metafn_define_encoded_static_string,
};

}  // namespace detail

struct sentinel_t {};

// A list of reflections of at most 128 elements, usable in constant expressions and as an expansion-initializer.
struct infos {
  info data[128] = {};
  size_t count = 0;

  constexpr void push_back(info i) {
    if (count == 128)
      throw "too many reflections";
    data[count++] = i;
  }
  constexpr const info *begin() const { return data; }
  constexpr const info *end() const { return data + count; }
  constexpr size_t size() const { return count; }
  constexpr info operator[](size_t i) const { return data[i]; }
};

constexpr size_t length_of(const char *s) {
  size_t n = 0;
  while (s[n])
    ++n;
  return n;
}

// name and kind queries
consteval const char *identifier_of(info r) {
  return __metafunction(detail::__metafn_identifier_of, ^^const char *, r, /*UTF8=*/false,
                        /*EnforceConsistent=*/true);
}
consteval bool has_identifier(info r) { return __metafunction(detail::__metafn_has_identifier, r); }
consteval info type_of(info r) { return __metafunction(detail::__metafn_type_of, r); }
consteval info parent_of(info r) { return __metafunction(detail::__metafn_parent_of, r); }
consteval info dealias(info r) { return __metafunction(detail::__metafn_underlying_entity_of, r); }
consteval info template_of(info r) { return __metafunction(detail::__metafn_template_of, r); }

consteval bool is_type(info r) { return __metafunction(detail::__metafn_is_type, r); }
consteval bool is_namespace(info r) { return __metafunction(detail::__metafn_is_namespace, r); }
consteval bool is_function(info r) { return __metafunction(detail::__metafn_is_function, r); }
consteval bool is_variable(info r) { return __metafunction(detail::__metafn_is_variable, r); }
consteval bool is_template(info r) { return __metafunction(detail::__metafn_is_template, r); }
consteval bool is_enumerator(info r) { return __metafunction(detail::__metafn_is_enumerator, r); }
consteval bool is_class_member(info r) { return __metafunction(detail::__metafn_is_class_member, r); }
consteval bool is_namespace_member(info r) { return __metafunction(detail::__metafn_is_namespace_member, r); }
consteval bool is_nonstatic_data_member(info r) {
  return __metafunction(detail::__metafn_is_nonstatic_data_member, r);
}
consteval bool is_static_member(info r) { return __metafunction(detail::__metafn_is_static_member, r); }
consteval bool is_public(info r) { return __metafunction(detail::__metafn_is_public, r); }
consteval bool is_protected(info r) { return __metafunction(detail::__metafn_is_protected, r); }
consteval bool is_private(info r) { return __metafunction(detail::__metafn_is_private, r); }
consteval bool is_virtual(info r) { return __metafunction(detail::__metafn_is_virtual, r); }
consteval bool is_const(info r) { return __metafunction(detail::__metafn_is_const, r); }
consteval bool is_complete_type(info r) { return __metafunction(detail::__metafn_is_complete_type, r); }
consteval bool is_bit_field(info r) { return __metafunction(detail::__metafn_is_bit_field, r); }
consteval bool is_base(info r) { return __metafunction(detail::__metafn_is_base, r); }
consteval bool is_data_member_spec(info r) { return __metafunction(detail::__metafn_is_data_member_spec, r); }
consteval bool has_template_arguments(info r) {
  return __metafunction(detail::__metafn_has_template_arguments, r);
}

// ranges of reflections
consteval infos members_of(info r) {
  infos out;
  info m = __metafunction(detail::__metafn_get_begin_member_decl_of, r, ^^sentinel_t);
  while (m != ^^sentinel_t) {
    out.push_back(__metafunction(detail::__metafn_map_decl_to_entity, m));
    m = __metafunction(detail::__metafn_get_next_member_decl_of, m, ^^sentinel_t);
  }
  return out;
}
consteval infos nonstatic_data_members_of(info r) {
  infos out;
  for (info m : members_of(r))
    if (is_nonstatic_data_member(m))
      out.push_back(m);
  return out;
}
consteval infos enumerators_of(info r) {
  infos out;
  info m = __metafunction(detail::__metafn_get_begin_enumerator_decl_of, r, ^^sentinel_t);
  while (m != ^^sentinel_t) {
    out.push_back(__metafunction(detail::__metafn_map_decl_to_entity, m));
    m = __metafunction(detail::__metafn_get_get_next_enumerator_decl_of, m, ^^sentinel_t);
  }
  return out;
}
consteval infos bases_of(info r) {
  infos out;
  for (size_t i = 0;; ++i) {
    info b = __metafunction(detail::__metafn_get_ith_base_of, r, ^^sentinel_t, i);
    if (b == ^^sentinel_t)
      break;
    out.push_back(b);
  }
  return out;
}
consteval infos template_arguments_of(info r) {
  infos out;
  for (size_t i = 0;; ++i) {
    info a = __metafunction(detail::__metafn_get_ith_template_argument_of, r, ^^sentinel_t, i);
    if (a == ^^sentinel_t)
      break;
    out.push_back(a);
  }
  return out;
}

// values, objects, templates
template <typename T>
consteval info reflect_constant(T v) {
  return __metafunction(detail::__metafn_reflect_result, ^^T, v);
}
template <typename T>
consteval info reflect_object(T &o) {
  return __metafunction(detail::__metafn_reflect_result, type_of(^^o), o);
}
template <typename T>
consteval T extract(info r) {
  return __metafunction(detail::__metafn_extract, ^^T, r);
}
consteval info substitute(info templ, const infos &args) {
  return __metafunction(detail::__metafn_substitute, templ, args.data, args.count, true);
}

// define_aggregate
consteval info data_member_spec(info type, const char *name) {
  return __metafunction(detail::__metafn_data_member_spec, type, name != nullptr, length_of(name), ^^const char,
                        name, /*has alignment=*/false, 0, /*has width=*/false, 0, /*no_unique_address=*/false,
                        size_t(0), (const info *)nullptr);
}
consteval info define_aggregate(info type, const infos &members) {
  return __metafunction(detail::__metafn_define_aggregate, type, members.count, members.data);
}


// function parameters (P3096)
consteval infos parameters_of(info r) {
  infos out;
  for (size_t i = 0;; ++i) {
    info p = __metafunction(detail::__metafn_get_ith_parameter_of, r, ^^sentinel_t, i);
    if (p == ^^sentinel_t)
      break;
    out.push_back(p);
  }
  return out;
}
consteval info return_type_of(info r) { return __metafunction(detail::__metafn_return_type_of, r); }
consteval info variable_of(info r) { return __metafunction(detail::__metafn_variable_of, r); }
consteval bool has_default_argument(info r) { return __metafunction(detail::__metafn_has_default_argument, r); }
consteval bool has_ellipsis_parameter(info r) { return __metafunction(detail::__metafn_has_ellipsis_parameter, r); }
consteval bool is_function_parameter(info r) { return __metafunction(detail::__metafn_is_function_parameter, r); }
consteval bool is_explicit_object_parameter(info r) {
  return __metafunction(detail::__metafn_is_explicit_object_parameter, r);
}

// annotations (P3394)
consteval infos annotations_of(info r) {
  infos out;
  for (size_t i = 0;; ++i) {
    info a = __metafunction(detail::__metafn_get_ith_annotation_of, r, ^^sentinel_t, i);
    if (a == ^^sentinel_t)
      break;
    out.push_back(a);
  }
  return out;
}
consteval bool is_annotation(info r) { return __metafunction(detail::__metafn_is_annotation, r); }

}  // namespace meta

// P3491
namespace meta::detail_static {
template <typename T, T... Vs>
inline constexpr T FixedArray[sizeof...(Vs)] = {Vs...};
}  // namespace meta::detail_static

// define_static_string / define_static_array (P3491), over the template 'FixedArray' as libc++ does
consteval const char *define_static_string(const char *s) {
  meta::infos args;
  args.push_back(^^char);
  for (size_t i = 0; s[i]; ++i)
    args.push_back(meta::reflect_constant(s[i]));
  args.push_back(meta::reflect_constant(char{}));
  return meta::extract<const char *>(meta::substitute(^^meta::detail_static::FixedArray, args));
}
}  // namespace std

#endif  // LANG_META_H
