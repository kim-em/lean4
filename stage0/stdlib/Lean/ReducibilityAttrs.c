// Lean compiler output
// Module: Lean.ReducibilityAttrs
// Imports: public import Lean.ScopedEnvExtension
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_SMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_isDefinition(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedReducibilityStatus_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedReducibilityStatus;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.ReducibilityStatus.reducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__0 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__1 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__1_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.ReducibilityStatus.semireducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__2 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__3 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__3_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.ReducibilityStatus.irreducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__4 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__5 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__5_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.ReducibilityStatus.implicitReducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__6 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__6_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__7 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__7_value;
static const lean_string_object l_Lean_instReprReducibilityStatus_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.ReducibilityStatus.instanceReducible"};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__8 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprReducibilityStatus_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprReducibilityStatus_repr___closed__9 = (const lean_object*)&l_Lean_instReprReducibilityStatus_repr___closed__9_value;
static lean_once_cell_t l_Lean_instReprReducibilityStatus_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprReducibilityStatus_repr___closed__10;
static lean_once_cell_t l_Lean_instReprReducibilityStatus_repr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprReducibilityStatus_repr___closed__11;
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprReducibilityStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprReducibilityStatus_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprReducibilityStatus___closed__0 = (const lean_object*)&l_Lean_instReprReducibilityStatus___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprReducibilityStatus = (const lean_object*)&l_Lean_instReprReducibilityStatus___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqReducibilityStatus_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqReducibilityStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqReducibilityStatus_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqReducibilityStatus___closed__0 = (const lean_object*)&l_Lean_instBEqReducibilityStatus___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqReducibilityStatus = (const lean_object*)&l_Lean_instBEqReducibilityStatus___closed__0_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[reducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__0 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__0_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "[semireducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__1 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__1_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[irreducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__2 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__2_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "[implicit_reducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__3 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__3_value;
static const lean_string_object l_Lean_ReducibilityStatus_toAttrString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "[instance_reducible]"};
static const lean_object* l_Lean_ReducibilityStatus_toAttrString___closed__4 = (const lean_object*)&l_Lean_ReducibilityStatus_toAttrString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "reducibility attribute core extension"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "reducibilityCore"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(95, 201, 42, 208, 53, 44, 245, 169)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reducibilityCoreExt;
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__0___redArg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reducibilityExtra"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(114, 61, 52, 173, 157, 234, 207, 193)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reducibilityExtraExt;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_getReducibilityStatusCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getReducibilityStatusCore___closed__0 = (const lean_object*)&l_Lean_getReducibilityStatusCore___closed__0_value;
static const lean_closure_object l_Lean_getReducibilityStatusCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getReducibilityStatusCore___closed__1 = (const lean_object*)&l_Lean_getReducibilityStatusCore___closed__1_value;
static lean_once_cell_t l_Lean_getReducibilityStatusCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getReducibilityStatusCore___closed__2;
LEAN_EXPORT uint8_t lean_get_reducibility_status(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatusCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_set_reducibility_status(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusImp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "allowUnsafeReducibility"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(43, 3, 217, 246, 47, 128, 204, 22)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 235, .m_capacity = 235, .m_length = 234, .m_data = "enables users to modify the reducibility settings for declarations even when such changes are deemed potentially hazardous. For example, `simp` and type class resolution maintain term indices where reducible declarations are expanded."};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(106, 158, 85, 56, 211, 107, 118, 9)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_allowUnsafeReducibility;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "failed to set `[reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__0 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__1;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "` is not currently `[semireducible]`, but `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__2 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "failed to set `[semireducible]` for `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__4 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__5;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "`, declarations are `[semireducible]` by default"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__6 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__7;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "failed to set `[irreducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__8 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__9;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "` is not currently `[semireducible]`, `[implicit_reducible]` nor `[instance_reducible]`, but `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__10 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__11;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set `[implicit_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__12 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__12_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__13;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "` is not currently `[semireducible]` nor `[instance_reducible]`, but `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__14 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__14_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__15;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set `[instance_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__16 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__16_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__17;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "failed to set reducibility status, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__18 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__18_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "` has not been defined in this file, consider using the `local` modifier"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__20 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__20_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__21;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set `[local reducible]` for `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__22 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__22_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__23;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 111, .m_capacity = 111, .m_length = 110, .m_data = "`, recall that `[reducible]` affects the term indexing datastructures used by `simp` and type class resolution"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__24 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__24_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__25;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to set `[local semireducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__26 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__26_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__27;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` is currently `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__28 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__28_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`, `[irreducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__30 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__30_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__31;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "failed to set `[local irreducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__32 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__32_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__33;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "`, `[semireducible]`, `[implicit_reducible]` nor `[instance_reducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__34 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__34_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__35;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "failed to set `[local implicit_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__36 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__36_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__37;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "`, `[semireducible]` or `[instance_reducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__38 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__38_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__39;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "failed to set `[local instance_reducible]`, `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__40 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__40_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__41;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, `[semireducible]` expected"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__42 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__42_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__43;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to set reducibility status for `"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__44 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__44_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__45;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "`, the `scoped` modifier is not recommended for this kind of attribute"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__46 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__46_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__47;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a definition"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__48 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__48_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__49;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "Use `set_option allowUnsafeReducibility true` to override reducibility status validation"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0_value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__0_value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1 = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1_value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ReducibilityAttrs"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 243, 132, 119, 102, 176, 104, 231)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(136, 6, 121, 201, 161, 138, 59, 119)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(97, 62, 6, 154, 126, 194, 108, 7)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(152, 228, 198, 151, 110, 175, 120, 179)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 11, 210, 221, 39, 72, 148, 16)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 11, 42, 155, 183, 228, 253, 121)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__11_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 193, 210, 85, 51, 24, 109, 168)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(562565324) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(13, 53, 165, 236, 93, 163, 7, 1)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__13_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(238, 6, 193, 170, 140, 56, 155, 78)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__15_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 73, 145, 21, 118, 11, 88, 35)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__17_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(155, 100, 92, 11, 143, 96, 227, 175)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "irreducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__19_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 207, 43, 193, 214, 202, 115, 95)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "irreducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__18_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__20_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__22_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__23_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__24_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__21_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "reducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 254, 211, 230, 8, 182, 79, 36)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "semireducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1100345199) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(218, 157, 69, 103, 211, 79, 39, 69)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(117, 240, 158, 251, 10, 76, 50, 188)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 225, 212, 9, 136, 171, 154, 3)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(248, 58, 250, 133, 108, 33, 115, 49)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "implicit_reducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 100, 121, 167, 26, 160, 176, 156)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "implicit reducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "instance_reducible"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(125, 180, 213, 185, 56, 77, 23, 14)}};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "instance reducible declaration"};
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))} };
static const lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isImplicitReducibleCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducibleCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isInstanceReducibleCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducibleCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
default: 
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorIdx___boxed(lean_object* v_x_7_){
_start:
{
uint8_t v_x_boxed_8_; lean_object* v_res_9_; 
v_x_boxed_8_ = lean_unbox(v_x_7_);
v_res_9_ = l_Lean_ReducibilityStatus_ctorIdx(v_x_boxed_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toCtorIdx(uint8_t v_x_10_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_ReducibilityStatus_ctorIdx(v_x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toCtorIdx___boxed(lean_object* v_x_12_){
_start:
{
uint8_t v_x_4__boxed_13_; lean_object* v_res_14_; 
v_x_4__boxed_13_ = lean_unbox(v_x_12_);
v_res_14_ = l_Lean_ReducibilityStatus_toCtorIdx(v_x_4__boxed_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg(lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___redArg___boxed(lean_object* v_k_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_ReducibilityStatus_ctorElim___redArg(v_k_16_);
lean_dec(v_k_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, uint8_t v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_inc(v_k_22_);
return v_k_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_ctorElim___boxed(lean_object* v_motive_23_, lean_object* v_ctorIdx_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_k_27_){
_start:
{
uint8_t v_t_boxed_28_; lean_object* v_res_29_; 
v_t_boxed_28_ = lean_unbox(v_t_25_);
v_res_29_ = l_Lean_ReducibilityStatus_ctorElim(v_motive_23_, v_ctorIdx_24_, v_t_boxed_28_, v_h_26_, v_k_27_);
lean_dec(v_k_27_);
lean_dec(v_ctorIdx_24_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg(lean_object* v_reducible_30_){
_start:
{
lean_inc(v_reducible_30_);
return v_reducible_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___redArg___boxed(lean_object* v_reducible_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_ReducibilityStatus_reducible_elim___redArg(v_reducible_31_);
lean_dec(v_reducible_31_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim(lean_object* v_motive_33_, uint8_t v_t_34_, lean_object* v_h_35_, lean_object* v_reducible_36_){
_start:
{
lean_inc(v_reducible_36_);
return v_reducible_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_reducible_elim___boxed(lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_reducible_40_){
_start:
{
uint8_t v_t_boxed_41_; lean_object* v_res_42_; 
v_t_boxed_41_ = lean_unbox(v_t_38_);
v_res_42_ = l_Lean_ReducibilityStatus_reducible_elim(v_motive_37_, v_t_boxed_41_, v_h_39_, v_reducible_40_);
lean_dec(v_reducible_40_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg(lean_object* v_semireducible_43_){
_start:
{
lean_inc(v_semireducible_43_);
return v_semireducible_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___redArg___boxed(lean_object* v_semireducible_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_ReducibilityStatus_semireducible_elim___redArg(v_semireducible_44_);
lean_dec(v_semireducible_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim(lean_object* v_motive_46_, uint8_t v_t_47_, lean_object* v_h_48_, lean_object* v_semireducible_49_){
_start:
{
lean_inc(v_semireducible_49_);
return v_semireducible_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_semireducible_elim___boxed(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_semireducible_53_){
_start:
{
uint8_t v_t_boxed_54_; lean_object* v_res_55_; 
v_t_boxed_54_ = lean_unbox(v_t_51_);
v_res_55_ = l_Lean_ReducibilityStatus_semireducible_elim(v_motive_50_, v_t_boxed_54_, v_h_52_, v_semireducible_53_);
lean_dec(v_semireducible_53_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg(lean_object* v_irreducible_56_){
_start:
{
lean_inc(v_irreducible_56_);
return v_irreducible_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___redArg___boxed(lean_object* v_irreducible_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_ReducibilityStatus_irreducible_elim___redArg(v_irreducible_57_);
lean_dec(v_irreducible_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim(lean_object* v_motive_59_, uint8_t v_t_60_, lean_object* v_h_61_, lean_object* v_irreducible_62_){
_start:
{
lean_inc(v_irreducible_62_);
return v_irreducible_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_irreducible_elim___boxed(lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_irreducible_66_){
_start:
{
uint8_t v_t_boxed_67_; lean_object* v_res_68_; 
v_t_boxed_67_ = lean_unbox(v_t_64_);
v_res_68_ = l_Lean_ReducibilityStatus_irreducible_elim(v_motive_63_, v_t_boxed_67_, v_h_65_, v_irreducible_66_);
lean_dec(v_irreducible_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg(lean_object* v_implicitReducible_69_){
_start:
{
lean_inc(v_implicitReducible_69_);
return v_implicitReducible_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___redArg___boxed(lean_object* v_implicitReducible_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_ReducibilityStatus_implicitReducible_elim___redArg(v_implicitReducible_70_);
lean_dec(v_implicitReducible_70_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim(lean_object* v_motive_72_, uint8_t v_t_73_, lean_object* v_h_74_, lean_object* v_implicitReducible_75_){
_start:
{
lean_inc(v_implicitReducible_75_);
return v_implicitReducible_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_implicitReducible_elim___boxed(lean_object* v_motive_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_implicitReducible_79_){
_start:
{
uint8_t v_t_boxed_80_; lean_object* v_res_81_; 
v_t_boxed_80_ = lean_unbox(v_t_77_);
v_res_81_ = l_Lean_ReducibilityStatus_implicitReducible_elim(v_motive_76_, v_t_boxed_80_, v_h_78_, v_implicitReducible_79_);
lean_dec(v_implicitReducible_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg(lean_object* v_instanceReducible_82_){
_start:
{
lean_inc(v_instanceReducible_82_);
return v_instanceReducible_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___redArg___boxed(lean_object* v_instanceReducible_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_ReducibilityStatus_instanceReducible_elim___redArg(v_instanceReducible_83_);
lean_dec(v_instanceReducible_83_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim(lean_object* v_motive_85_, uint8_t v_t_86_, lean_object* v_h_87_, lean_object* v_instanceReducible_88_){
_start:
{
lean_inc(v_instanceReducible_88_);
return v_instanceReducible_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_instanceReducible_elim___boxed(lean_object* v_motive_89_, lean_object* v_t_90_, lean_object* v_h_91_, lean_object* v_instanceReducible_92_){
_start:
{
uint8_t v_t_boxed_93_; lean_object* v_res_94_; 
v_t_boxed_93_ = lean_unbox(v_t_90_);
v_res_94_ = l_Lean_ReducibilityStatus_instanceReducible_elim(v_motive_89_, v_t_boxed_93_, v_h_91_, v_instanceReducible_92_);
lean_dec(v_instanceReducible_92_);
return v_res_94_;
}
}
static uint8_t _init_l_Lean_instInhabitedReducibilityStatus_default(void){
_start:
{
uint8_t v___x_95_; 
v___x_95_ = 0;
return v___x_95_;
}
}
static uint8_t _init_l_Lean_instInhabitedReducibilityStatus(void){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = 0;
return v___x_96_;
}
}
static lean_object* _init_l_Lean_instReprReducibilityStatus_repr___closed__10(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(2u);
v___x_113_ = lean_nat_to_int(v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_instReprReducibilityStatus_repr___closed__11(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_to_int(v___x_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr(uint8_t v_x_116_, lean_object* v_prec_117_){
_start:
{
lean_object* v___y_119_; lean_object* v___y_126_; lean_object* v___y_133_; lean_object* v___y_140_; lean_object* v___y_147_; 
switch(v_x_116_)
{
case 0:
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(1024u);
v___x_154_ = lean_nat_dec_le(v___x_153_, v_prec_117_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_119_ = v___x_155_;
goto v___jp_118_;
}
else
{
lean_object* v___x_156_; 
v___x_156_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_119_ = v___x_156_;
goto v___jp_118_;
}
}
case 1:
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1024u);
v___x_158_ = lean_nat_dec_le(v___x_157_, v_prec_117_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_126_ = v___x_159_;
goto v___jp_125_;
}
else
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_126_ = v___x_160_;
goto v___jp_125_;
}
}
case 2:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(1024u);
v___x_162_ = lean_nat_dec_le(v___x_161_, v_prec_117_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_133_ = v___x_163_;
goto v___jp_132_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_133_ = v___x_164_;
goto v___jp_132_;
}
}
case 3:
{
lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(1024u);
v___x_166_ = lean_nat_dec_le(v___x_165_, v_prec_117_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_140_ = v___x_167_;
goto v___jp_139_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_140_ = v___x_168_;
goto v___jp_139_;
}
}
default: 
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_unsigned_to_nat(1024u);
v___x_170_ = lean_nat_dec_le(v___x_169_, v_prec_117_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
v___x_171_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__10, &l_Lean_instReprReducibilityStatus_repr___closed__10_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__10);
v___y_147_ = v___x_171_;
goto v___jp_146_;
}
else
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&l_Lean_instReprReducibilityStatus_repr___closed__11, &l_Lean_instReprReducibilityStatus_repr___closed__11_once, _init_l_Lean_instReprReducibilityStatus_repr___closed__11);
v___y_147_ = v___x_172_;
goto v___jp_146_;
}
}
}
v___jp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_120_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__1));
lean_inc(v___y_119_);
v___x_121_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_121_, 0, v___y_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = 0;
v___x_123_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set_uint8(v___x_123_, sizeof(void*)*1, v___x_122_);
v___x_124_ = l_Repr_addAppParen(v___x_123_, v_prec_117_);
return v___x_124_;
}
v___jp_125_:
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_127_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__3));
lean_inc(v___y_126_);
v___x_128_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_128_, 0, v___y_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = 0;
v___x_130_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_130_, 0, v___x_128_);
lean_ctor_set_uint8(v___x_130_, sizeof(void*)*1, v___x_129_);
v___x_131_ = l_Repr_addAppParen(v___x_130_, v_prec_117_);
return v___x_131_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_134_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__5));
lean_inc(v___y_133_);
v___x_135_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_135_, 0, v___y_133_);
lean_ctor_set(v___x_135_, 1, v___x_134_);
v___x_136_ = 0;
v___x_137_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_137_, 0, v___x_135_);
lean_ctor_set_uint8(v___x_137_, sizeof(void*)*1, v___x_136_);
v___x_138_ = l_Repr_addAppParen(v___x_137_, v_prec_117_);
return v___x_138_;
}
v___jp_139_:
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_141_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__7));
lean_inc(v___y_140_);
v___x_142_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_142_, 0, v___y_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = 0;
v___x_144_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set_uint8(v___x_144_, sizeof(void*)*1, v___x_143_);
v___x_145_ = l_Repr_addAppParen(v___x_144_, v_prec_117_);
return v___x_145_;
}
v___jp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_148_ = ((lean_object*)(l_Lean_instReprReducibilityStatus_repr___closed__9));
lean_inc(v___y_147_);
v___x_149_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_149_, 0, v___y_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = 0;
v___x_151_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set_uint8(v___x_151_, sizeof(void*)*1, v___x_150_);
v___x_152_ = l_Repr_addAppParen(v___x_151_, v_prec_117_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprReducibilityStatus_repr___boxed(lean_object* v_x_173_, lean_object* v_prec_174_){
_start:
{
uint8_t v_x_289__boxed_175_; lean_object* v_res_176_; 
v_x_289__boxed_175_ = lean_unbox(v_x_173_);
v_res_176_ = l_Lean_instReprReducibilityStatus_repr(v_x_289__boxed_175_, v_prec_174_);
lean_dec(v_prec_174_);
return v_res_176_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t v_x_179_, uint8_t v_y_180_){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_181_ = l_Lean_ReducibilityStatus_ctorIdx(v_x_179_);
v___x_182_ = l_Lean_ReducibilityStatus_ctorIdx(v_y_180_);
v___x_183_ = lean_nat_dec_eq(v___x_181_, v___x_182_);
lean_dec(v___x_182_);
lean_dec(v___x_181_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqReducibilityStatus_beq___boxed(lean_object* v_x_184_, lean_object* v_y_185_){
_start:
{
uint8_t v_x_17__boxed_186_; uint8_t v_y_18__boxed_187_; uint8_t v_res_188_; lean_object* v_r_189_; 
v_x_17__boxed_186_ = lean_unbox(v_x_184_);
v_y_18__boxed_187_ = lean_unbox(v_y_185_);
v_res_188_ = l_Lean_instBEqReducibilityStatus_beq(v_x_17__boxed_186_, v_y_18__boxed_187_);
v_r_189_ = lean_box(v_res_188_);
return v_r_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString(uint8_t v_x_197_){
_start:
{
switch(v_x_197_)
{
case 0:
{
lean_object* v___x_198_; 
v___x_198_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__0));
return v___x_198_;
}
case 1:
{
lean_object* v___x_199_; 
v___x_199_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__1));
return v___x_199_;
}
case 2:
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__2));
return v___x_200_;
}
case 3:
{
lean_object* v___x_201_; 
v___x_201_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__3));
return v___x_201_;
}
default: 
{
lean_object* v___x_202_; 
v___x_202_ = ((lean_object*)(l_Lean_ReducibilityStatus_toAttrString___closed__4));
return v___x_202_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityStatus_toAttrString___boxed(lean_object* v_x_203_){
_start:
{
uint8_t v_x_49__boxed_204_; lean_object* v_res_205_; 
v_x_49__boxed_204_ = lean_unbox(v_x_203_);
v_res_205_ = l_Lean_ReducibilityStatus_toAttrString(v_x_49__boxed_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object* v_s_206_, lean_object* v_p_207_){
_start:
{
lean_object* v_fst_208_; lean_object* v_snd_209_; lean_object* v___x_210_; 
v_fst_208_ = lean_ctor_get(v_p_207_, 0);
lean_inc(v_fst_208_);
v_snd_209_ = lean_ctor_get(v_p_207_, 1);
lean_inc(v_snd_209_);
lean_dec_ref(v_p_207_);
v___x_210_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_208_, v_snd_209_, v_s_206_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v_k_213_; lean_object* v_v_214_; lean_object* v_l_215_; lean_object* v_r_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_k_213_ = lean_ctor_get(v_x_212_, 1);
v_v_214_ = lean_ctor_get(v_x_212_, 2);
v_l_215_ = lean_ctor_get(v_x_212_, 3);
v_r_216_ = lean_ctor_get(v_x_212_, 4);
v___x_217_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0(v_init_211_, v_l_215_);
lean_inc(v_v_214_);
lean_inc(v_k_213_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v_k_213_);
lean_ctor_set(v___x_218_, 1, v_v_214_);
v___x_219_ = lean_array_push(v___x_217_, v___x_218_);
v_init_211_ = v___x_219_;
v_x_212_ = v_r_216_;
goto _start;
}
else
{
return v_init_211_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_221_, lean_object* v_x_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0(v_init_221_, v_x_222_);
lean_dec(v_x_222_);
return v_res_223_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_a_224_, lean_object* v_b_225_){
_start:
{
lean_object* v_fst_226_; lean_object* v_fst_227_; uint8_t v___x_228_; 
v_fst_226_ = lean_ctor_get(v_a_224_, 0);
v_fst_227_ = lean_ctor_get(v_b_225_, 0);
v___x_228_ = l_Lean_Name_quickLt(v_fst_226_, v_fst_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_a_229_, lean_object* v_b_230_){
_start:
{
uint8_t v_res_231_; lean_object* v_r_232_; 
v_res_231_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_229_, v_b_230_);
lean_dec_ref(v_b_230_);
lean_dec_ref(v_a_229_);
v_r_232_ = lean_box(v_res_231_);
return v_r_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_233_, lean_object* v_pivot_234_, lean_object* v_as_235_, lean_object* v_i_236_, lean_object* v_k_237_){
_start:
{
uint8_t v___x_238_; 
v___x_238_ = lean_nat_dec_lt(v_k_237_, v_hi_233_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
lean_dec(v_k_237_);
v___x_239_ = lean_array_fswap(v_as_235_, v_i_236_, v_hi_233_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v_i_236_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v_fst_242_; lean_object* v_fst_243_; uint8_t v___x_244_; 
v___x_241_ = lean_array_fget_borrowed(v_as_235_, v_k_237_);
v_fst_242_ = lean_ctor_get(v___x_241_, 0);
v_fst_243_ = lean_ctor_get(v_pivot_234_, 0);
v___x_244_ = l_Lean_Name_quickLt(v_fst_242_, v_fst_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_nat_add(v_k_237_, v___x_245_);
lean_dec(v_k_237_);
v_k_237_ = v___x_246_;
goto _start;
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_248_ = lean_array_fswap(v_as_235_, v_i_236_, v_k_237_);
v___x_249_ = lean_unsigned_to_nat(1u);
v___x_250_ = lean_nat_add(v_i_236_, v___x_249_);
lean_dec(v_i_236_);
v___x_251_ = lean_nat_add(v_k_237_, v___x_249_);
lean_dec(v_k_237_);
v_as_235_ = v___x_248_;
v_i_236_ = v___x_250_;
v_k_237_ = v___x_251_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_253_, lean_object* v_pivot_254_, lean_object* v_as_255_, lean_object* v_i_256_, lean_object* v_k_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_253_, v_pivot_254_, v_as_255_, v_i_256_, v_k_257_);
lean_dec_ref(v_pivot_254_);
lean_dec(v_hi_253_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_259_, lean_object* v_as_260_, lean_object* v_lo_261_, lean_object* v_hi_262_){
_start:
{
lean_object* v___y_264_; uint8_t v___x_274_; 
v___x_274_ = lean_nat_dec_lt(v_lo_261_, v_hi_262_);
if (v___x_274_ == 0)
{
lean_dec(v_lo_261_);
return v_as_260_;
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_mid_277_; lean_object* v___y_279_; lean_object* v___y_285_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_275_ = lean_nat_add(v_lo_261_, v_hi_262_);
v___x_276_ = lean_unsigned_to_nat(1u);
v_mid_277_ = lean_nat_shiftr(v___x_275_, v___x_276_);
lean_dec(v___x_275_);
v___x_290_ = lean_array_fget_borrowed(v_as_260_, v_mid_277_);
v___x_291_ = lean_array_fget_borrowed(v_as_260_, v_lo_261_);
v___x_292_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_290_, v___x_291_);
if (v___x_292_ == 0)
{
v___y_285_ = v_as_260_;
goto v___jp_284_;
}
else
{
lean_object* v___x_293_; 
v___x_293_ = lean_array_fswap(v_as_260_, v_lo_261_, v_mid_277_);
v___y_285_ = v___x_293_;
goto v___jp_284_;
}
v___jp_278_:
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = lean_array_fget_borrowed(v___y_279_, v_mid_277_);
v___x_281_ = lean_array_fget_borrowed(v___y_279_, v_hi_262_);
v___x_282_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_280_, v___x_281_);
if (v___x_282_ == 0)
{
lean_dec(v_mid_277_);
v___y_264_ = v___y_279_;
goto v___jp_263_;
}
else
{
lean_object* v___x_283_; 
v___x_283_ = lean_array_fswap(v___y_279_, v_mid_277_, v_hi_262_);
lean_dec(v_mid_277_);
v___y_264_ = v___x_283_;
goto v___jp_263_;
}
}
v___jp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_286_ = lean_array_fget_borrowed(v___y_285_, v_hi_262_);
v___x_287_ = lean_array_fget_borrowed(v___y_285_, v_lo_261_);
v___x_288_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
v___y_279_ = v___y_285_;
goto v___jp_278_;
}
else
{
lean_object* v___x_289_; 
v___x_289_ = lean_array_fswap(v___y_285_, v_lo_261_, v_hi_262_);
v___y_279_ = v___x_289_;
goto v___jp_278_;
}
}
}
v___jp_263_:
{
lean_object* v_pivot_265_; lean_object* v___x_266_; lean_object* v_fst_267_; lean_object* v_snd_268_; uint8_t v___x_269_; 
v_pivot_265_ = lean_array_fget(v___y_264_, v_hi_262_);
lean_inc_n(v_lo_261_, 2);
v___x_266_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_262_, v_pivot_265_, v___y_264_, v_lo_261_, v_lo_261_);
lean_dec(v_pivot_265_);
v_fst_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_fst_267_);
v_snd_268_ = lean_ctor_get(v___x_266_, 1);
lean_inc(v_snd_268_);
lean_dec_ref(v___x_266_);
v___x_269_ = lean_nat_dec_le(v_hi_262_, v_fst_267_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(v_n_259_, v_snd_268_, v_lo_261_, v_fst_267_);
v___x_271_ = lean_unsigned_to_nat(1u);
v___x_272_ = lean_nat_add(v_fst_267_, v___x_271_);
lean_dec(v_fst_267_);
v_as_260_ = v___x_270_;
v_lo_261_ = v___x_272_;
goto _start;
}
else
{
lean_dec(v_fst_267_);
lean_dec(v_lo_261_);
return v_snd_268_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_294_, lean_object* v_as_295_, lean_object* v_lo_296_, lean_object* v_hi_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(v_n_294_, v_as_295_, v_lo_296_, v_hi_297_);
lean_dec(v_hi_297_);
lean_dec(v_n_294_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object* v_x_301_, lean_object* v_s_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v_r_305_; lean_object* v___x_306_; lean_object* v___y_308_; lean_object* v___y_309_; uint8_t v___x_312_; 
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_));
v_r_305_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0(v___x_304_, v_s_302_);
v___x_306_ = lean_array_get_size(v_r_305_);
v___x_312_ = lean_nat_dec_eq(v___x_306_, v___x_303_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___y_316_; uint8_t v___x_318_; 
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_sub(v___x_306_, v___x_313_);
v___x_318_ = lean_nat_dec_le(v___x_303_, v___x_314_);
if (v___x_318_ == 0)
{
lean_inc(v___x_314_);
v___y_316_ = v___x_314_;
goto v___jp_315_;
}
else
{
v___y_316_ = v___x_303_;
goto v___jp_315_;
}
v___jp_315_:
{
uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_le(v___y_316_, v___x_314_);
if (v___x_317_ == 0)
{
lean_dec(v___x_314_);
lean_inc(v___y_316_);
v___y_308_ = v___y_316_;
v___y_309_ = v___y_316_;
goto v___jp_307_;
}
else
{
v___y_308_ = v___y_316_;
v___y_309_ = v___x_314_;
goto v___jp_307_;
}
}
}
else
{
lean_object* v___x_319_; 
lean_inc_ref_n(v_r_305_, 2);
v___x_319_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_319_, 0, v_r_305_);
lean_ctor_set(v___x_319_, 1, v_r_305_);
lean_ctor_set(v___x_319_, 2, v_r_305_);
return v___x_319_;
}
v___jp_307_:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(v___x_306_, v_r_305_, v___y_308_, v___y_309_);
lean_dec(v___y_309_);
lean_inc_ref_n(v___x_310_, 2);
v___x_311_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
lean_ctor_set(v___x_311_, 2, v___x_310_);
return v___x_311_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object* v_x_320_, lean_object* v_s_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(v_x_320_, v_s_321_);
lean_dec(v_s_321_);
lean_dec_ref(v_x_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object* v_s_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___y_338_; 
v___x_336_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__2___closed__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_));
if (lean_obj_tag(v_s_335_) == 0)
{
lean_object* v_size_342_; 
v_size_342_ = lean_ctor_get(v_s_335_, 0);
lean_inc(v_size_342_);
lean_dec_ref(v_s_335_);
v___y_338_ = v_size_342_;
goto v___jp_337_;
}
else
{
lean_object* v___x_343_; 
v___x_343_ = lean_unsigned_to_nat(0u);
v___y_338_ = v___x_343_;
goto v___jp_337_;
}
v___jp_337_:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = l_Nat_reprFast(v___y_338_);
v___x_340_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
v___x_341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_336_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
return v___x_341_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__2(lean_object* v_newState_344_, lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
if (lean_obj_tag(v_x_346_) == 0)
{
return v_x_345_;
}
else
{
lean_object* v_head_347_; lean_object* v_tail_348_; lean_object* v___x_349_; 
v_head_347_ = lean_ctor_get(v_x_346_, 0);
lean_inc(v_head_347_);
v_tail_348_ = lean_ctor_get(v_x_346_, 1);
lean_inc(v_tail_348_);
lean_dec_ref(v_x_346_);
v___x_349_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_newState_344_, v_head_347_);
if (lean_obj_tag(v___x_349_) == 1)
{
lean_object* v_val_350_; lean_object* v___x_351_; 
v_val_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_val_350_);
lean_dec_ref(v___x_349_);
v___x_351_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_head_347_, v_val_350_, v_x_345_);
v_x_345_ = v___x_351_;
v_x_346_ = v_tail_348_;
goto _start;
}
else
{
lean_dec(v___x_349_);
lean_dec(v_head_347_);
v_x_346_ = v_tail_348_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__2___boxed(lean_object* v_newState_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__2(v_newState_354_, v_x_355_, v_x_356_);
lean_dec(v_newState_354_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object* v___oldState_358_, lean_object* v_newState_359_, lean_object* v_newItems_360_, lean_object* v_otherState_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_List_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__2(v_newState_359_, v_otherState_361_, v_newItems_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object* v___oldState_363_, lean_object* v_newState_364_, lean_object* v_newItems_365_, lean_object* v_otherState_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__3_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(v___oldState_363_, v_newState_364_, v_newItems_365_, v_otherState_366_);
lean_dec(v_newState_364_);
lean_dec(v___oldState_363_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object* v_m_368_){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v_r_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_369_ = lean_unsigned_to_nat(0u);
v___x_370_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_));
v_r_371_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0(v___x_370_, v_m_368_);
v___x_372_ = lean_array_get_size(v_r_371_);
v___x_373_ = lean_nat_dec_eq(v___x_372_, v___x_369_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___y_377_; uint8_t v___x_381_; 
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_nat_sub(v___x_372_, v___x_374_);
v___x_381_ = lean_nat_dec_le(v___x_369_, v___x_375_);
if (v___x_381_ == 0)
{
lean_inc(v___x_375_);
v___y_377_ = v___x_375_;
goto v___jp_376_;
}
else
{
v___y_377_ = v___x_369_;
goto v___jp_376_;
}
v___jp_376_:
{
uint8_t v___x_378_; 
v___x_378_ = lean_nat_dec_le(v___y_377_, v___x_375_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; 
lean_dec(v___x_375_);
lean_inc(v___y_377_);
v___x_379_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(v___x_372_, v_r_371_, v___y_377_, v___y_377_);
lean_dec(v___y_377_);
return v___x_379_;
}
else
{
lean_object* v___x_380_; 
v___x_380_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(v___x_372_, v_r_371_, v___y_377_, v___x_375_);
lean_dec(v___x_375_);
return v___x_380_;
}
}
}
else
{
return v_r_371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object* v_m_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__4_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(v_m_382_);
lean_dec(v_m_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object* v___x_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object* v___x_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__5_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(v___x_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(lean_object* v___x_390_, lean_object* v_x_391_, lean_object* v_x_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_390_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object* v___x_395_, lean_object* v_x_396_, lean_object* v_x_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__6_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(v___x_395_, v_x_396_, v_x_397_);
lean_dec_ref(v_x_397_);
lean_dec_ref(v_x_396_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_));
v___x_430_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2____boxed(lean_object* v_a_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_();
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0(lean_object* v_init_433_, lean_object* v_t_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0_spec__0(v_init_433_, v_t_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_436_, lean_object* v_t_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__0(v_init_436_, v_t_437_);
lean_dec(v_t_437_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1(lean_object* v_n_439_, lean_object* v_as_440_, lean_object* v_lo_441_, lean_object* v_hi_442_, lean_object* v_w_443_, lean_object* v_hlo_444_, lean_object* v_hhi_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg(v_n_439_, v_as_440_, v_lo_441_, v_hi_442_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_447_, lean_object* v_as_448_, lean_object* v_lo_449_, lean_object* v_hi_450_, lean_object* v_w_451_, lean_object* v_hlo_452_, lean_object* v_hhi_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1(v_n_447_, v_as_448_, v_lo_449_, v_hi_450_, v_w_451_, v_hlo_452_, v_hhi_453_);
lean_dec(v_hi_450_);
lean_dec(v_n_447_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_455_, lean_object* v_lo_456_, lean_object* v_hi_457_, lean_object* v_hhi_458_, lean_object* v_pivot_459_, lean_object* v_as_460_, lean_object* v_i_461_, lean_object* v_k_462_, lean_object* v_ilo_463_, lean_object* v_ik_464_, lean_object* v_w_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_457_, v_pivot_459_, v_as_460_, v_i_461_, v_k_462_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_467_, lean_object* v_lo_468_, lean_object* v_hi_469_, lean_object* v_hhi_470_, lean_object* v_pivot_471_, lean_object* v_as_472_, lean_object* v_i_473_, lean_object* v_k_474_, lean_object* v_ilo_475_, lean_object* v_ik_476_, lean_object* v_w_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1_spec__2(v_n_467_, v_lo_468_, v_hi_469_, v_hhi_470_, v_pivot_471_, v_as_472_, v_i_473_, v_k_474_, v_ilo_475_, v_ik_476_, v_w_477_);
lean_dec_ref(v_pivot_471_);
lean_dec(v_hi_469_);
lean_dec(v_lo_468_);
lean_dec(v_n_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__0___redArg(lean_object* v_m_479_){
_start:
{
uint8_t v_stage_u2081_480_; 
v_stage_u2081_480_ = lean_ctor_get_uint8(v_m_479_, sizeof(void*)*2);
if (v_stage_u2081_480_ == 0)
{
return v_m_479_;
}
else
{
lean_object* v_map_u2081_481_; lean_object* v_map_u2082_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_490_; 
v_map_u2081_481_ = lean_ctor_get(v_m_479_, 0);
v_map_u2082_482_ = lean_ctor_get(v_m_479_, 1);
v_isSharedCheck_490_ = !lean_is_exclusive(v_m_479_);
if (v_isSharedCheck_490_ == 0)
{
v___x_484_ = v_m_479_;
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_map_u2082_482_);
lean_inc(v_map_u2081_481_);
lean_dec(v_m_479_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
uint8_t v___x_486_; lean_object* v___x_488_; 
v___x_486_ = 0;
if (v_isShared_485_ == 0)
{
v___x_488_ = v___x_484_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_map_u2081_481_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v_map_u2082_482_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*2, v___x_486_);
return v___x_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_491_, lean_object* v_m_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_SMap_switch___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__0___redArg(v_m_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(uint8_t v_x_494_, lean_object* v___y_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v___y_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2____boxed(lean_object* v_x_497_, lean_object* v___y_498_){
_start:
{
uint8_t v_x_790__boxed_499_; lean_object* v_res_500_; 
v_x_790__boxed_499_ = lean_unbox(v_x_497_);
v_res_500_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(v_x_790__boxed_499_, v___y_498_);
return v_res_500_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_501_; uint64_t v___x_502_; 
v___x_501_ = lean_unsigned_to_nat(1723u);
v___x_502_ = lean_uint64_of_nat(v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(lean_object* v_x_503_, lean_object* v_x_504_){
_start:
{
if (lean_obj_tag(v_x_504_) == 0)
{
return v_x_503_;
}
else
{
lean_object* v_key_505_; lean_object* v_value_506_; lean_object* v_tail_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_533_; 
v_key_505_ = lean_ctor_get(v_x_504_, 0);
v_value_506_ = lean_ctor_get(v_x_504_, 1);
v_tail_507_ = lean_ctor_get(v_x_504_, 2);
v_isSharedCheck_533_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_533_ == 0)
{
v___x_509_ = v_x_504_;
v_isShared_510_ = v_isSharedCheck_533_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_tail_507_);
lean_inc(v_value_506_);
lean_inc(v_key_505_);
lean_dec(v_x_504_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_533_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_511_; uint64_t v___y_513_; 
v___x_511_ = lean_array_get_size(v_x_503_);
if (lean_obj_tag(v_key_505_) == 0)
{
uint64_t v___x_531_; 
v___x_531_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0);
v___y_513_ = v___x_531_;
goto v___jp_512_;
}
else
{
uint64_t v_hash_532_; 
v_hash_532_ = lean_ctor_get_uint64(v_key_505_, sizeof(void*)*2);
v___y_513_ = v_hash_532_;
goto v___jp_512_;
}
v___jp_512_:
{
uint64_t v___x_514_; uint64_t v___x_515_; uint64_t v_fold_516_; uint64_t v___x_517_; uint64_t v___x_518_; uint64_t v___x_519_; size_t v___x_520_; size_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_514_ = 32ULL;
v___x_515_ = lean_uint64_shift_right(v___y_513_, v___x_514_);
v_fold_516_ = lean_uint64_xor(v___y_513_, v___x_515_);
v___x_517_ = 16ULL;
v___x_518_ = lean_uint64_shift_right(v_fold_516_, v___x_517_);
v___x_519_ = lean_uint64_xor(v_fold_516_, v___x_518_);
v___x_520_ = lean_uint64_to_usize(v___x_519_);
v___x_521_ = lean_usize_of_nat(v___x_511_);
v___x_522_ = ((size_t)1ULL);
v___x_523_ = lean_usize_sub(v___x_521_, v___x_522_);
v___x_524_ = lean_usize_land(v___x_520_, v___x_523_);
v___x_525_ = lean_array_uget_borrowed(v_x_503_, v___x_524_);
lean_inc(v___x_525_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 2, v___x_525_);
v___x_527_ = v___x_509_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_key_505_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_value_506_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v___x_525_);
v___x_527_ = v_reuseFailAlloc_530_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_528_; 
v___x_528_ = lean_array_uset(v_x_503_, v___x_524_, v___x_527_);
v_x_503_ = v___x_528_;
v_x_504_ = v_tail_507_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_i_534_, lean_object* v_source_535_, lean_object* v_target_536_){
_start:
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = lean_array_get_size(v_source_535_);
v___x_538_ = lean_nat_dec_lt(v_i_534_, v___x_537_);
if (v___x_538_ == 0)
{
lean_dec_ref(v_source_535_);
lean_dec(v_i_534_);
return v_target_536_;
}
else
{
lean_object* v_es_539_; lean_object* v___x_540_; lean_object* v_source_541_; lean_object* v_target_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_es_539_ = lean_array_fget(v_source_535_, v_i_534_);
v___x_540_ = lean_box(0);
v_source_541_ = lean_array_fset(v_source_535_, v_i_534_, v___x_540_);
v_target_542_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(v_target_536_, v_es_539_);
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_add(v_i_534_, v___x_543_);
lean_dec(v_i_534_);
v_i_534_ = v___x_544_;
v_source_535_ = v_source_541_;
v_target_536_ = v_target_542_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(lean_object* v_data_546_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v_nbuckets_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_547_ = lean_array_get_size(v_data_546_);
v___x_548_ = lean_unsigned_to_nat(2u);
v_nbuckets_549_ = lean_nat_mul(v___x_547_, v___x_548_);
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_box(0);
v___x_552_ = lean_mk_array(v_nbuckets_549_, v___x_551_);
v___x_553_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v___x_550_, v_data_546_, v___x_552_);
return v___x_553_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object* v_a_554_, lean_object* v_x_555_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
uint8_t v___x_556_; 
v___x_556_ = 0;
return v___x_556_;
}
else
{
lean_object* v_key_557_; lean_object* v_tail_558_; uint8_t v___x_559_; 
v_key_557_ = lean_ctor_get(v_x_555_, 0);
v_tail_558_ = lean_ctor_get(v_x_555_, 2);
v___x_559_ = lean_name_eq(v_key_557_, v_a_554_);
if (v___x_559_ == 0)
{
v_x_555_ = v_tail_558_;
goto _start;
}
else
{
return v___x_559_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_a_561_, lean_object* v_x_562_){
_start:
{
uint8_t v_res_563_; lean_object* v_r_564_; 
v_res_563_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_a_561_, v_x_562_);
lean_dec(v_x_562_);
lean_dec(v_a_561_);
v_r_564_ = lean_box(v_res_563_);
return v_r_564_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(lean_object* v_a_565_, lean_object* v_b_566_, lean_object* v_x_567_){
_start:
{
if (lean_obj_tag(v_x_567_) == 0)
{
lean_dec(v_b_566_);
lean_dec(v_a_565_);
return v_x_567_;
}
else
{
lean_object* v_key_568_; lean_object* v_value_569_; lean_object* v_tail_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_582_; 
v_key_568_ = lean_ctor_get(v_x_567_, 0);
v_value_569_ = lean_ctor_get(v_x_567_, 1);
v_tail_570_ = lean_ctor_get(v_x_567_, 2);
v_isSharedCheck_582_ = !lean_is_exclusive(v_x_567_);
if (v_isSharedCheck_582_ == 0)
{
v___x_572_ = v_x_567_;
v_isShared_573_ = v_isSharedCheck_582_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_tail_570_);
lean_inc(v_value_569_);
lean_inc(v_key_568_);
lean_dec(v_x_567_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_582_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
uint8_t v___x_574_; 
v___x_574_ = lean_name_eq(v_key_568_, v_a_565_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___x_577_; 
v___x_575_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_a_565_, v_b_566_, v_tail_570_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 2, v___x_575_);
v___x_577_ = v___x_572_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_key_568_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_value_569_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
else
{
lean_object* v___x_580_; 
lean_dec(v_value_569_);
lean_dec(v_key_568_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 1, v_b_566_);
lean_ctor_set(v___x_572_, 0, v_a_565_);
v___x_580_ = v___x_572_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_565_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_b_566_);
lean_ctor_set(v_reuseFailAlloc_581_, 2, v_tail_570_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_m_583_, lean_object* v_a_584_, lean_object* v_b_585_){
_start:
{
lean_object* v_size_586_; lean_object* v_buckets_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_633_; 
v_size_586_ = lean_ctor_get(v_m_583_, 0);
v_buckets_587_ = lean_ctor_get(v_m_583_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v_m_583_);
if (v_isSharedCheck_633_ == 0)
{
v___x_589_ = v_m_583_;
v_isShared_590_ = v_isSharedCheck_633_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_buckets_587_);
lean_inc(v_size_586_);
lean_dec(v_m_583_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_633_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; uint64_t v___y_593_; 
v___x_591_ = lean_array_get_size(v_buckets_587_);
if (lean_obj_tag(v_a_584_) == 0)
{
uint64_t v___x_631_; 
v___x_631_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0);
v___y_593_ = v___x_631_;
goto v___jp_592_;
}
else
{
uint64_t v_hash_632_; 
v_hash_632_ = lean_ctor_get_uint64(v_a_584_, sizeof(void*)*2);
v___y_593_ = v_hash_632_;
goto v___jp_592_;
}
v___jp_592_:
{
uint64_t v___x_594_; uint64_t v___x_595_; uint64_t v_fold_596_; uint64_t v___x_597_; uint64_t v___x_598_; uint64_t v___x_599_; size_t v___x_600_; size_t v___x_601_; size_t v___x_602_; size_t v___x_603_; size_t v___x_604_; lean_object* v_bkt_605_; uint8_t v___x_606_; 
v___x_594_ = 32ULL;
v___x_595_ = lean_uint64_shift_right(v___y_593_, v___x_594_);
v_fold_596_ = lean_uint64_xor(v___y_593_, v___x_595_);
v___x_597_ = 16ULL;
v___x_598_ = lean_uint64_shift_right(v_fold_596_, v___x_597_);
v___x_599_ = lean_uint64_xor(v_fold_596_, v___x_598_);
v___x_600_ = lean_uint64_to_usize(v___x_599_);
v___x_601_ = lean_usize_of_nat(v___x_591_);
v___x_602_ = ((size_t)1ULL);
v___x_603_ = lean_usize_sub(v___x_601_, v___x_602_);
v___x_604_ = lean_usize_land(v___x_600_, v___x_603_);
v_bkt_605_ = lean_array_uget_borrowed(v_buckets_587_, v___x_604_);
v___x_606_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_a_584_, v_bkt_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v_size_x27_608_; lean_object* v___x_609_; lean_object* v_buckets_x27_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_607_ = lean_unsigned_to_nat(1u);
v_size_x27_608_ = lean_nat_add(v_size_586_, v___x_607_);
lean_dec(v_size_586_);
lean_inc(v_bkt_605_);
v___x_609_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_609_, 0, v_a_584_);
lean_ctor_set(v___x_609_, 1, v_b_585_);
lean_ctor_set(v___x_609_, 2, v_bkt_605_);
v_buckets_x27_610_ = lean_array_uset(v_buckets_587_, v___x_604_, v___x_609_);
v___x_611_ = lean_unsigned_to_nat(4u);
v___x_612_ = lean_nat_mul(v_size_x27_608_, v___x_611_);
v___x_613_ = lean_unsigned_to_nat(3u);
v___x_614_ = lean_nat_div(v___x_612_, v___x_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_array_get_size(v_buckets_x27_610_);
v___x_616_ = lean_nat_dec_le(v___x_614_, v___x_615_);
lean_dec(v___x_614_);
if (v___x_616_ == 0)
{
lean_object* v_val_617_; lean_object* v___x_619_; 
v_val_617_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_buckets_x27_610_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 1, v_val_617_);
lean_ctor_set(v___x_589_, 0, v_size_x27_608_);
v___x_619_ = v___x_589_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_size_x27_608_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_val_617_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
else
{
lean_object* v___x_622_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 1, v_buckets_x27_610_);
lean_ctor_set(v___x_589_, 0, v_size_x27_608_);
v___x_622_ = v___x_589_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_size_x27_608_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_buckets_x27_610_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
else
{
lean_object* v___x_624_; lean_object* v_buckets_x27_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_629_; 
lean_inc(v_bkt_605_);
v___x_624_ = lean_box(0);
v_buckets_x27_625_ = lean_array_uset(v_buckets_587_, v___x_604_, v___x_624_);
v___x_626_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_a_584_, v_b_585_, v_bkt_605_);
v___x_627_ = lean_array_uset(v_buckets_x27_625_, v___x_604_, v___x_626_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 1, v___x_627_);
v___x_629_ = v___x_589_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_size_586_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v___x_627_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_634_, lean_object* v_x_635_, lean_object* v_x_636_, lean_object* v_x_637_){
_start:
{
lean_object* v_ks_638_; lean_object* v_vs_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_663_; 
v_ks_638_ = lean_ctor_get(v_x_634_, 0);
v_vs_639_ = lean_ctor_get(v_x_634_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_x_634_);
if (v_isSharedCheck_663_ == 0)
{
v___x_641_ = v_x_634_;
v_isShared_642_ = v_isSharedCheck_663_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_vs_639_);
lean_inc(v_ks_638_);
lean_dec(v_x_634_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_663_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = lean_array_get_size(v_ks_638_);
v___x_644_ = lean_nat_dec_lt(v_x_635_, v___x_643_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_648_; 
lean_dec(v_x_635_);
v___x_645_ = lean_array_push(v_ks_638_, v_x_636_);
v___x_646_ = lean_array_push(v_vs_639_, v_x_637_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v___x_646_);
lean_ctor_set(v___x_641_, 0, v___x_645_);
v___x_648_ = v___x_641_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
else
{
lean_object* v_k_x27_650_; uint8_t v___x_651_; 
v_k_x27_650_ = lean_array_fget_borrowed(v_ks_638_, v_x_635_);
v___x_651_ = lean_name_eq(v_x_636_, v_k_x27_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_653_; 
if (v_isShared_642_ == 0)
{
v___x_653_ = v___x_641_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_ks_638_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_vs_639_);
v___x_653_ = v_reuseFailAlloc_657_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_nat_add(v_x_635_, v___x_654_);
lean_dec(v_x_635_);
v_x_634_ = v___x_653_;
v_x_635_ = v___x_655_;
goto _start;
}
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_658_ = lean_array_fset(v_ks_638_, v_x_635_, v_x_636_);
v___x_659_ = lean_array_fset(v_vs_639_, v_x_635_, v_x_637_);
lean_dec(v_x_635_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v___x_659_);
lean_ctor_set(v___x_641_, 0, v___x_658_);
v___x_661_ = v___x_641_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_658_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_664_, lean_object* v_k_665_, lean_object* v_v_666_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_n_664_, v___x_667_, v_k_665_, v_v_666_);
return v___x_668_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_669_; size_t v___x_670_; size_t v___x_671_; 
v___x_669_ = ((size_t)5ULL);
v___x_670_ = ((size_t)1ULL);
v___x_671_ = lean_usize_shift_left(v___x_670_, v___x_669_);
return v___x_671_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_672_; size_t v___x_673_; size_t v___x_674_; 
v___x_672_ = ((size_t)1ULL);
v___x_673_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__0);
v___x_674_ = lean_usize_sub(v___x_673_, v___x_672_);
return v___x_674_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(lean_object* v_x_676_, size_t v_x_677_, size_t v_x_678_, lean_object* v_x_679_, lean_object* v_x_680_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v_es_681_; size_t v___x_682_; size_t v___x_683_; size_t v___x_684_; size_t v___x_685_; lean_object* v_j_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v_es_681_ = lean_ctor_get(v_x_676_, 0);
v___x_682_ = ((size_t)5ULL);
v___x_683_ = ((size_t)1ULL);
v___x_684_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1);
v___x_685_ = lean_usize_land(v_x_677_, v___x_684_);
v_j_686_ = lean_usize_to_nat(v___x_685_);
v___x_687_ = lean_array_get_size(v_es_681_);
v___x_688_ = lean_nat_dec_lt(v_j_686_, v___x_687_);
if (v___x_688_ == 0)
{
lean_dec(v_j_686_);
lean_dec(v_x_680_);
lean_dec(v_x_679_);
return v_x_676_;
}
else
{
lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_725_; 
lean_inc_ref(v_es_681_);
v_isSharedCheck_725_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_725_ == 0)
{
lean_object* v_unused_726_; 
v_unused_726_ = lean_ctor_get(v_x_676_, 0);
lean_dec(v_unused_726_);
v___x_690_ = v_x_676_;
v_isShared_691_ = v_isSharedCheck_725_;
goto v_resetjp_689_;
}
else
{
lean_dec(v_x_676_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_725_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_v_692_; lean_object* v___x_693_; lean_object* v_xs_x27_694_; lean_object* v___y_696_; 
v_v_692_ = lean_array_fget(v_es_681_, v_j_686_);
v___x_693_ = lean_box(0);
v_xs_x27_694_ = lean_array_fset(v_es_681_, v_j_686_, v___x_693_);
switch(lean_obj_tag(v_v_692_))
{
case 0:
{
lean_object* v_key_701_; lean_object* v_val_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_712_; 
v_key_701_ = lean_ctor_get(v_v_692_, 0);
v_val_702_ = lean_ctor_get(v_v_692_, 1);
v_isSharedCheck_712_ = !lean_is_exclusive(v_v_692_);
if (v_isSharedCheck_712_ == 0)
{
v___x_704_ = v_v_692_;
v_isShared_705_ = v_isSharedCheck_712_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_val_702_);
lean_inc(v_key_701_);
lean_dec(v_v_692_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_712_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
uint8_t v___x_706_; 
v___x_706_ = lean_name_eq(v_x_679_, v_key_701_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; 
lean_del_object(v___x_704_);
v___x_707_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_701_, v_val_702_, v_x_679_, v_x_680_);
v___x_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
v___y_696_ = v___x_708_;
goto v___jp_695_;
}
else
{
lean_object* v___x_710_; 
lean_dec(v_val_702_);
lean_dec(v_key_701_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v_x_680_);
lean_ctor_set(v___x_704_, 0, v_x_679_);
v___x_710_ = v___x_704_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_x_679_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_x_680_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
v___y_696_ = v___x_710_;
goto v___jp_695_;
}
}
}
}
case 1:
{
lean_object* v_node_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_723_; 
v_node_713_ = lean_ctor_get(v_v_692_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v_v_692_);
if (v_isSharedCheck_723_ == 0)
{
v___x_715_ = v_v_692_;
v_isShared_716_ = v_isSharedCheck_723_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_node_713_);
lean_dec(v_v_692_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_723_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
size_t v___x_717_; size_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_717_ = lean_usize_shift_right(v_x_677_, v___x_682_);
v___x_718_ = lean_usize_add(v_x_678_, v___x_683_);
v___x_719_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_node_713_, v___x_717_, v___x_718_, v_x_679_, v_x_680_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v___x_719_);
v___x_721_ = v___x_715_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
v___y_696_ = v___x_721_;
goto v___jp_695_;
}
}
}
default: 
{
lean_object* v___x_724_; 
v___x_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_724_, 0, v_x_679_);
lean_ctor_set(v___x_724_, 1, v_x_680_);
v___y_696_ = v___x_724_;
goto v___jp_695_;
}
}
v___jp_695_:
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = lean_array_fset(v_xs_x27_694_, v_j_686_, v___y_696_);
lean_dec(v_j_686_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v___x_697_);
v___x_699_ = v___x_690_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
}
else
{
lean_object* v_ks_727_; lean_object* v_vs_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_748_; 
v_ks_727_ = lean_ctor_get(v_x_676_, 0);
v_vs_728_ = lean_ctor_get(v_x_676_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_748_ == 0)
{
v___x_730_ = v_x_676_;
v_isShared_731_ = v_isSharedCheck_748_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_vs_728_);
lean_inc(v_ks_727_);
lean_dec(v_x_676_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_748_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_ks_727_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_vs_728_);
v___x_733_ = v_reuseFailAlloc_747_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v_newNode_734_; uint8_t v___y_736_; size_t v___x_742_; uint8_t v___x_743_; 
v_newNode_734_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(v___x_733_, v_x_679_, v_x_680_);
v___x_742_ = ((size_t)7ULL);
v___x_743_ = lean_usize_dec_le(v___x_742_, v_x_678_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_744_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_734_);
v___x_745_ = lean_unsigned_to_nat(4u);
v___x_746_ = lean_nat_dec_lt(v___x_744_, v___x_745_);
lean_dec(v___x_744_);
v___y_736_ = v___x_746_;
goto v___jp_735_;
}
else
{
v___y_736_ = v___x_743_;
goto v___jp_735_;
}
v___jp_735_:
{
if (v___y_736_ == 0)
{
lean_object* v_ks_737_; lean_object* v_vs_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_ks_737_ = lean_ctor_get(v_newNode_734_, 0);
lean_inc_ref(v_ks_737_);
v_vs_738_ = lean_ctor_get(v_newNode_734_, 1);
lean_inc_ref(v_vs_738_);
lean_dec_ref(v_newNode_734_);
v___x_739_ = lean_unsigned_to_nat(0u);
v___x_740_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__2);
v___x_741_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_x_678_, v_ks_737_, v_vs_738_, v___x_739_, v___x_740_);
lean_dec_ref(v_vs_738_);
lean_dec_ref(v_ks_737_);
return v___x_741_;
}
else
{
return v_newNode_734_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(size_t v_depth_749_, lean_object* v_keys_750_, lean_object* v_vals_751_, lean_object* v_i_752_, lean_object* v_entries_753_){
_start:
{
lean_object* v___x_754_; uint8_t v___x_755_; 
v___x_754_ = lean_array_get_size(v_keys_750_);
v___x_755_ = lean_nat_dec_lt(v_i_752_, v___x_754_);
if (v___x_755_ == 0)
{
lean_dec(v_i_752_);
return v_entries_753_;
}
else
{
lean_object* v_k_756_; lean_object* v_v_757_; uint64_t v___y_759_; 
v_k_756_ = lean_array_fget_borrowed(v_keys_750_, v_i_752_);
v_v_757_ = lean_array_fget_borrowed(v_vals_751_, v_i_752_);
if (lean_obj_tag(v_k_756_) == 0)
{
uint64_t v___x_770_; 
v___x_770_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0);
v___y_759_ = v___x_770_;
goto v___jp_758_;
}
else
{
uint64_t v_hash_771_; 
v_hash_771_ = lean_ctor_get_uint64(v_k_756_, sizeof(void*)*2);
v___y_759_ = v_hash_771_;
goto v___jp_758_;
}
v___jp_758_:
{
size_t v_h_760_; size_t v___x_761_; lean_object* v___x_762_; size_t v___x_763_; size_t v___x_764_; size_t v___x_765_; size_t v_h_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_h_760_ = lean_uint64_to_usize(v___y_759_);
v___x_761_ = ((size_t)5ULL);
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = ((size_t)1ULL);
v___x_764_ = lean_usize_sub(v_depth_749_, v___x_763_);
v___x_765_ = lean_usize_mul(v___x_761_, v___x_764_);
v_h_766_ = lean_usize_shift_right(v_h_760_, v___x_765_);
v___x_767_ = lean_nat_add(v_i_752_, v___x_762_);
lean_dec(v_i_752_);
lean_inc(v_v_757_);
lean_inc(v_k_756_);
v___x_768_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_entries_753_, v_h_766_, v_depth_749_, v_k_756_, v_v_757_);
v_i_752_ = v___x_767_;
v_entries_753_ = v___x_768_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_772_, lean_object* v_keys_773_, lean_object* v_vals_774_, lean_object* v_i_775_, lean_object* v_entries_776_){
_start:
{
size_t v_depth_boxed_777_; lean_object* v_res_778_; 
v_depth_boxed_777_ = lean_unbox_usize(v_depth_772_);
lean_dec(v_depth_772_);
v_res_778_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_777_, v_keys_773_, v_vals_774_, v_i_775_, v_entries_776_);
lean_dec_ref(v_vals_774_);
lean_dec_ref(v_keys_773_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_779_, lean_object* v_x_780_, lean_object* v_x_781_, lean_object* v_x_782_, lean_object* v_x_783_){
_start:
{
size_t v_x_1113__boxed_784_; size_t v_x_1114__boxed_785_; lean_object* v_res_786_; 
v_x_1113__boxed_784_ = lean_unbox_usize(v_x_780_);
lean_dec(v_x_780_);
v_x_1114__boxed_785_ = lean_unbox_usize(v_x_781_);
lean_dec(v_x_781_);
v_res_786_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_779_, v_x_1113__boxed_784_, v_x_1114__boxed_785_, v_x_782_, v_x_783_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1___redArg(lean_object* v_x_787_, lean_object* v_x_788_, lean_object* v_x_789_){
_start:
{
uint64_t v___y_791_; 
if (lean_obj_tag(v_x_788_) == 0)
{
uint64_t v___x_795_; 
v___x_795_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0);
v___y_791_ = v___x_795_;
goto v___jp_790_;
}
else
{
uint64_t v_hash_796_; 
v_hash_796_ = lean_ctor_get_uint64(v_x_788_, sizeof(void*)*2);
v___y_791_ = v_hash_796_;
goto v___jp_790_;
}
v___jp_790_:
{
size_t v___x_792_; size_t v___x_793_; lean_object* v___x_794_; 
v___x_792_ = lean_uint64_to_usize(v___y_791_);
v___x_793_ = ((size_t)1ULL);
v___x_794_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_787_, v___x_792_, v___x_793_, v_x_788_, v_x_789_);
return v___x_794_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1___redArg(lean_object* v_x_797_, lean_object* v_x_798_, lean_object* v_x_799_){
_start:
{
uint8_t v_stage_u2081_800_; 
v_stage_u2081_800_ = lean_ctor_get_uint8(v_x_797_, sizeof(void*)*2);
if (v_stage_u2081_800_ == 0)
{
lean_object* v_map_u2081_801_; lean_object* v_map_u2082_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_810_; 
v_map_u2081_801_ = lean_ctor_get(v_x_797_, 0);
v_map_u2082_802_ = lean_ctor_get(v_x_797_, 1);
v_isSharedCheck_810_ = !lean_is_exclusive(v_x_797_);
if (v_isSharedCheck_810_ == 0)
{
v___x_804_ = v_x_797_;
v_isShared_805_ = v_isSharedCheck_810_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_map_u2082_802_);
lean_inc(v_map_u2081_801_);
lean_dec(v_x_797_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_810_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_806_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1___redArg(v_map_u2082_802_, v_x_798_, v_x_799_);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 1, v___x_806_);
v___x_808_ = v___x_804_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_map_u2081_801_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v___x_806_);
lean_ctor_set_uint8(v_reuseFailAlloc_809_, sizeof(void*)*2, v_stage_u2081_800_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
else
{
lean_object* v_map_u2081_811_; lean_object* v_map_u2082_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_820_; 
v_map_u2081_811_ = lean_ctor_get(v_x_797_, 0);
v_map_u2082_812_ = lean_ctor_get(v_x_797_, 1);
v_isSharedCheck_820_ = !lean_is_exclusive(v_x_797_);
if (v_isSharedCheck_820_ == 0)
{
v___x_814_ = v_x_797_;
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_map_u2082_812_);
lean_inc(v_map_u2081_811_);
lean_dec(v_x_797_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_u2081_811_, v_x_798_, v_x_799_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_816_);
v___x_818_ = v___x_814_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v_map_u2082_812_);
lean_ctor_set_uint8(v_reuseFailAlloc_819_, sizeof(void*)*2, v_stage_u2081_800_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__1_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(lean_object* v_d_821_, lean_object* v_x_822_){
_start:
{
lean_object* v_fst_823_; lean_object* v_snd_824_; lean_object* v___x_825_; 
v_fst_823_ = lean_ctor_get(v_x_822_, 0);
lean_inc(v_fst_823_);
v_snd_824_ = lean_ctor_get(v_x_822_, 1);
lean_inc(v_snd_824_);
lean_dec_ref(v_x_822_);
v___x_825_ = l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1___redArg(v_d_821_, v_fst_823_, v_snd_824_);
return v___x_825_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_832_ = lean_box(0);
v___x_833_ = lean_unsigned_to_nat(16u);
v___x_834_ = lean_mk_array(v___x_833_, v___x_832_);
return v___x_834_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_835_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_);
v___x_836_ = lean_unsigned_to_nat(0u);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v___x_835_);
return v___x_837_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_838_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_);
v___x_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
return v___x_840_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; lean_object* v___x_844_; 
v___x_841_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_);
v___x_842_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_);
v___x_843_ = 1;
v___x_844_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_844_, 0, v___x_842_);
lean_ctor_set(v___x_844_, 1, v___x_841_);
lean_ctor_set_uint8(v___x_844_, sizeof(void*)*2, v___x_843_);
return v___x_844_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_845_; lean_object* v___f_846_; lean_object* v___x_847_; lean_object* v___f_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___f_845_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_));
v___f_846_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_));
v___x_847_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_);
v___f_848_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_));
v___x_849_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__4_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_));
v___x_850_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
lean_ctor_set(v___x_850_, 1, v___f_848_);
lean_ctor_set(v___x_850_, 2, v___x_847_);
lean_ctor_set(v___x_850_, 3, v___f_846_);
lean_ctor_set(v___x_850_, 4, v___f_845_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_);
v___x_853_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2____boxed(lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_();
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_856_, lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v_x_859_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1___redArg(v_x_857_, v_x_858_, v_x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_00_u03b2_861_, lean_object* v_x_862_, lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1___redArg(v_x_862_, v_x_863_, v_x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b2_866_, lean_object* v_m_867_, lean_object* v_a_868_, lean_object* v_b_869_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(v_m_867_, v_a_868_, v_b_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2(lean_object* v_00_u03b2_871_, lean_object* v_x_872_, size_t v_x_873_, size_t v_x_874_, lean_object* v_x_875_, lean_object* v_x_876_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_872_, v_x_873_, v_x_874_, v_x_875_, v_x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_878_, lean_object* v_x_879_, lean_object* v_x_880_, lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v_x_883_){
_start:
{
size_t v_x_1454__boxed_884_; size_t v_x_1455__boxed_885_; lean_object* v_res_886_; 
v_x_1454__boxed_884_ = lean_unbox_usize(v_x_880_);
lean_dec(v_x_880_);
v_x_1455__boxed_885_ = lean_unbox_usize(v_x_881_);
lean_dec(v_x_881_);
v_res_886_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_00_u03b2_878_, v_x_879_, v_x_1454__boxed_884_, v_x_1455__boxed_885_, v_x_882_, v_x_883_);
return v_res_886_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object* v_00_u03b2_887_, lean_object* v_a_888_, lean_object* v_x_889_){
_start:
{
uint8_t v___x_890_; 
v___x_890_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_a_888_, v_x_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_891_, lean_object* v_a_892_, lean_object* v_x_893_){
_start:
{
uint8_t v_res_894_; lean_object* v_r_895_; 
v_res_894_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__4(v_00_u03b2_891_, v_a_892_, v_x_893_);
lean_dec(v_x_893_);
lean_dec(v_a_892_);
v_r_895_ = lean_box(v_res_894_);
return v_r_895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object* v_00_u03b2_896_, lean_object* v_data_897_){
_start:
{
lean_object* v___x_898_; 
v___x_898_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_data_897_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__6(lean_object* v_00_u03b2_899_, lean_object* v_a_900_, lean_object* v_b_901_, lean_object* v_x_902_){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__6___redArg(v_a_900_, v_b_901_, v_x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_904_, lean_object* v_n_905_, lean_object* v_k_906_, lean_object* v_v_907_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3___redArg(v_n_905_, v_k_906_, v_v_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_909_, size_t v_depth_910_, lean_object* v_keys_911_, lean_object* v_vals_912_, lean_object* v_heq_913_, lean_object* v_i_914_, lean_object* v_entries_915_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_depth_910_, v_keys_911_, v_vals_912_, v_i_914_, v_entries_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_917_, lean_object* v_depth_918_, lean_object* v_keys_919_, lean_object* v_vals_920_, lean_object* v_heq_921_, lean_object* v_i_922_, lean_object* v_entries_923_){
_start:
{
size_t v_depth_boxed_924_; lean_object* v_res_925_; 
v_depth_boxed_924_ = lean_unbox_usize(v_depth_918_);
lean_dec(v_depth_918_);
v_res_925_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(v_00_u03b2_917_, v_depth_boxed_924_, v_keys_919_, v_vals_920_, v_heq_921_, v_i_922_, v_entries_923_);
lean_dec_ref(v_vals_920_);
lean_dec_ref(v_keys_919_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_926_, lean_object* v_i_927_, lean_object* v_source_928_, lean_object* v_target_929_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v_i_927_, v_source_928_, v_target_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_931_, lean_object* v_x_932_, lean_object* v_x_933_, lean_object* v_x_934_, lean_object* v_x_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_x_932_, v_x_933_, v_x_934_, v_x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_937_, lean_object* v_x_938_, lean_object* v_x_939_){
_start:
{
lean_object* v___x_940_; 
v___x_940_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg(v_x_938_, v_x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___redArg(lean_object* v_as_941_, lean_object* v_k_942_, lean_object* v_x_943_, lean_object* v_x_944_){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_m_947_; lean_object* v_a_948_; uint8_t v___x_949_; 
v___x_945_ = lean_nat_add(v_x_943_, v_x_944_);
v___x_946_ = lean_unsigned_to_nat(1u);
v_m_947_ = lean_nat_shiftr(v___x_945_, v___x_946_);
lean_dec(v___x_945_);
v_a_948_ = lean_array_fget_borrowed(v_as_941_, v_m_947_);
v___x_949_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_948_, v_k_942_);
if (v___x_949_ == 0)
{
uint8_t v___x_950_; 
lean_dec(v_x_944_);
v___x_950_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_942_, v_a_948_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; 
lean_dec(v_m_947_);
lean_dec(v_x_943_);
lean_inc(v_a_948_);
v___x_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_951_, 0, v_a_948_);
return v___x_951_;
}
else
{
lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = lean_nat_dec_eq(v_m_947_, v___x_952_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; uint8_t v___x_955_; 
v___x_954_ = lean_nat_sub(v_m_947_, v___x_946_);
lean_dec(v_m_947_);
v___x_955_ = lean_nat_dec_lt(v___x_954_, v_x_943_);
if (v___x_955_ == 0)
{
v_x_944_ = v___x_954_;
goto _start;
}
else
{
lean_object* v___x_957_; 
lean_dec(v___x_954_);
lean_dec(v_x_943_);
v___x_957_ = lean_box(0);
return v___x_957_;
}
}
else
{
lean_object* v___x_958_; 
lean_dec(v_m_947_);
lean_dec(v_x_943_);
v___x_958_ = lean_box(0);
return v___x_958_;
}
}
}
else
{
lean_object* v___x_959_; uint8_t v___x_960_; 
lean_dec(v_x_943_);
v___x_959_ = lean_nat_add(v_m_947_, v___x_946_);
lean_dec(v_m_947_);
v___x_960_ = lean_nat_dec_le(v___x_959_, v_x_944_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; 
lean_dec(v___x_959_);
lean_dec(v_x_944_);
v___x_961_ = lean_box(0);
return v___x_961_;
}
else
{
v_x_943_ = v___x_959_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___redArg___boxed(lean_object* v_as_963_, lean_object* v_k_964_, lean_object* v_x_965_, lean_object* v_x_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___redArg(v_as_963_, v_k_964_, v_x_965_, v_x_966_);
lean_dec_ref(v_k_964_);
lean_dec_ref(v_as_963_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_keys_968_, lean_object* v_vals_969_, lean_object* v_i_970_, lean_object* v_k_971_){
_start:
{
lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_972_ = lean_array_get_size(v_keys_968_);
v___x_973_ = lean_nat_dec_lt(v_i_970_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; 
lean_dec(v_i_970_);
v___x_974_ = lean_box(0);
return v___x_974_;
}
else
{
lean_object* v_k_x27_975_; uint8_t v___x_976_; 
v_k_x27_975_ = lean_array_fget_borrowed(v_keys_968_, v_i_970_);
v___x_976_ = lean_name_eq(v_k_971_, v_k_x27_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = lean_unsigned_to_nat(1u);
v___x_978_ = lean_nat_add(v_i_970_, v___x_977_);
lean_dec(v_i_970_);
v_i_970_ = v___x_978_;
goto _start;
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = lean_array_fget_borrowed(v_vals_969_, v_i_970_);
lean_dec(v_i_970_);
lean_inc(v___x_980_);
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_keys_982_, lean_object* v_vals_983_, lean_object* v_i_984_, lean_object* v_k_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_982_, v_vals_983_, v_i_984_, v_k_985_);
lean_dec(v_k_985_);
lean_dec_ref(v_vals_983_);
lean_dec_ref(v_keys_982_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_987_, size_t v_x_988_, lean_object* v_x_989_){
_start:
{
if (lean_obj_tag(v_x_987_) == 0)
{
lean_object* v_es_990_; lean_object* v___x_991_; size_t v___x_992_; size_t v___x_993_; size_t v___x_994_; lean_object* v_j_995_; lean_object* v___x_996_; 
v_es_990_ = lean_ctor_get(v_x_987_, 0);
v___x_991_ = lean_box(2);
v___x_992_ = ((size_t)5ULL);
v___x_993_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___closed__1);
v___x_994_ = lean_usize_land(v_x_988_, v___x_993_);
v_j_995_ = lean_usize_to_nat(v___x_994_);
v___x_996_ = lean_array_get_borrowed(v___x_991_, v_es_990_, v_j_995_);
lean_dec(v_j_995_);
switch(lean_obj_tag(v___x_996_))
{
case 0:
{
lean_object* v_key_997_; lean_object* v_val_998_; uint8_t v___x_999_; 
v_key_997_ = lean_ctor_get(v___x_996_, 0);
v_val_998_ = lean_ctor_get(v___x_996_, 1);
v___x_999_ = lean_name_eq(v_x_989_, v_key_997_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_box(0);
return v___x_1000_;
}
else
{
lean_object* v___x_1001_; 
lean_inc(v_val_998_);
v___x_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1001_, 0, v_val_998_);
return v___x_1001_;
}
}
case 1:
{
lean_object* v_node_1002_; size_t v___x_1003_; 
v_node_1002_ = lean_ctor_get(v___x_996_, 0);
v___x_1003_ = lean_usize_shift_right(v_x_988_, v___x_992_);
v_x_987_ = v_node_1002_;
v_x_988_ = v___x_1003_;
goto _start;
}
default: 
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_box(0);
return v___x_1005_;
}
}
}
else
{
lean_object* v_ks_1006_; lean_object* v_vs_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v_ks_1006_ = lean_ctor_get(v_x_987_, 0);
v_vs_1007_ = lean_ctor_get(v_x_987_, 1);
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___redArg(v_ks_1006_, v_vs_1007_, v___x_1008_, v_x_989_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1010_, lean_object* v_x_1011_, lean_object* v_x_1012_){
_start:
{
size_t v_x_615__boxed_1013_; lean_object* v_res_1014_; 
v_x_615__boxed_1013_ = lean_unbox_usize(v_x_1011_);
lean_dec(v_x_1011_);
v_res_1014_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(v_x_1010_, v_x_615__boxed_1013_, v_x_1012_);
lean_dec(v_x_1012_);
lean_dec_ref(v_x_1010_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(lean_object* v_x_1015_, lean_object* v_x_1016_){
_start:
{
uint64_t v___y_1018_; 
if (lean_obj_tag(v_x_1016_) == 0)
{
uint64_t v___x_1021_; 
v___x_1021_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0);
v___y_1018_ = v___x_1021_;
goto v___jp_1017_;
}
else
{
uint64_t v_hash_1022_; 
v_hash_1022_ = lean_ctor_get_uint64(v_x_1016_, sizeof(void*)*2);
v___y_1018_ = v_hash_1022_;
goto v___jp_1017_;
}
v___jp_1017_:
{
size_t v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_uint64_to_usize(v___y_1018_);
v___x_1020_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(v_x_1015_, v___x_1019_, v_x_1016_);
return v___x_1020_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg___boxed(lean_object* v_x_1023_, lean_object* v_x_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(v_x_1023_, v_x_1024_);
lean_dec(v_x_1024_);
lean_dec_ref(v_x_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(lean_object* v_a_1026_, lean_object* v_x_1027_){
_start:
{
if (lean_obj_tag(v_x_1027_) == 0)
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_box(0);
return v___x_1028_;
}
else
{
lean_object* v_key_1029_; lean_object* v_value_1030_; lean_object* v_tail_1031_; uint8_t v___x_1032_; 
v_key_1029_ = lean_ctor_get(v_x_1027_, 0);
v_value_1030_ = lean_ctor_get(v_x_1027_, 1);
v_tail_1031_ = lean_ctor_get(v_x_1027_, 2);
v___x_1032_ = lean_name_eq(v_key_1029_, v_a_1026_);
if (v___x_1032_ == 0)
{
v_x_1027_ = v_tail_1031_;
goto _start;
}
else
{
lean_object* v___x_1034_; 
lean_inc(v_value_1030_);
v___x_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1034_, 0, v_value_1030_);
return v___x_1034_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_1035_, lean_object* v_x_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(v_a_1035_, v_x_1036_);
lean_dec(v_x_1036_);
lean_dec(v_a_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(lean_object* v_m_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v_buckets_1040_; lean_object* v___x_1041_; uint64_t v___y_1043_; 
v_buckets_1040_ = lean_ctor_get(v_m_1038_, 1);
v___x_1041_ = lean_array_get_size(v_buckets_1040_);
if (lean_obj_tag(v_a_1039_) == 0)
{
uint64_t v___x_1057_; 
v___x_1057_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8_spec__10___redArg___closed__0);
v___y_1043_ = v___x_1057_;
goto v___jp_1042_;
}
else
{
uint64_t v_hash_1058_; 
v_hash_1058_ = lean_ctor_get_uint64(v_a_1039_, sizeof(void*)*2);
v___y_1043_ = v_hash_1058_;
goto v___jp_1042_;
}
v___jp_1042_:
{
uint64_t v___x_1044_; uint64_t v___x_1045_; uint64_t v_fold_1046_; uint64_t v___x_1047_; uint64_t v___x_1048_; uint64_t v___x_1049_; size_t v___x_1050_; size_t v___x_1051_; size_t v___x_1052_; size_t v___x_1053_; size_t v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1044_ = 32ULL;
v___x_1045_ = lean_uint64_shift_right(v___y_1043_, v___x_1044_);
v_fold_1046_ = lean_uint64_xor(v___y_1043_, v___x_1045_);
v___x_1047_ = 16ULL;
v___x_1048_ = lean_uint64_shift_right(v_fold_1046_, v___x_1047_);
v___x_1049_ = lean_uint64_xor(v_fold_1046_, v___x_1048_);
v___x_1050_ = lean_uint64_to_usize(v___x_1049_);
v___x_1051_ = lean_usize_of_nat(v___x_1041_);
v___x_1052_ = ((size_t)1ULL);
v___x_1053_ = lean_usize_sub(v___x_1051_, v___x_1052_);
v___x_1054_ = lean_usize_land(v___x_1050_, v___x_1053_);
v___x_1055_ = lean_array_uget_borrowed(v_buckets_1040_, v___x_1054_);
v___x_1056_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(v_a_1039_, v___x_1055_);
return v___x_1056_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg___boxed(lean_object* v_m_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_m_1059_, v_a_1060_);
lean_dec(v_a_1060_);
lean_dec_ref(v_m_1059_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(lean_object* v_x_1062_, lean_object* v_x_1063_){
_start:
{
uint8_t v_stage_u2081_1064_; 
v_stage_u2081_1064_ = lean_ctor_get_uint8(v_x_1062_, sizeof(void*)*2);
if (v_stage_u2081_1064_ == 0)
{
lean_object* v_map_u2081_1065_; lean_object* v_map_u2082_1066_; lean_object* v___x_1067_; 
v_map_u2081_1065_ = lean_ctor_get(v_x_1062_, 0);
v_map_u2082_1066_ = lean_ctor_get(v_x_1062_, 1);
v___x_1067_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(v_map_u2082_1066_, v_x_1063_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_map_u2081_1065_, v_x_1063_);
return v___x_1068_;
}
else
{
return v___x_1067_;
}
}
else
{
lean_object* v_map_u2081_1069_; lean_object* v___x_1070_; 
v_map_u2081_1069_ = lean_ctor_get(v_x_1062_, 0);
v___x_1070_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_map_u2081_1069_, v_x_1063_);
return v___x_1070_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg___boxed(lean_object* v_x_1071_, lean_object* v_x_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(v_x_1071_, v_x_1072_);
lean_dec(v_x_1072_);
lean_dec_ref(v_x_1071_);
return v_res_1073_;
}
}
static lean_object* _init_l_Lean_getReducibilityStatusCore___closed__2(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = ((lean_object*)(l_Lean_getReducibilityStatusCore___closed__1));
v___x_1077_ = ((lean_object*)(l_Lean_getReducibilityStatusCore___closed__0));
v___x_1078_ = l_Lean_SMap_instInhabited(lean_box(0), lean_box(0), v___x_1077_, v___x_1076_);
return v___x_1078_;
}
}
LEAN_EXPORT uint8_t lean_get_reducibility_status(lean_object* v_env_1079_, lean_object* v_declName_1080_){
_start:
{
lean_object* v___x_1081_; lean_object* v_ext_1082_; lean_object* v_toEnvExtension_1083_; lean_object* v_asyncMode_1084_; lean_object* v___x_1085_; lean_object* v_m_1086_; lean_object* v___x_1087_; 
v___x_1081_ = l_Lean_reducibilityExtraExt;
v_ext_1082_ = lean_ctor_get(v___x_1081_, 1);
v_toEnvExtension_1083_ = lean_ctor_get(v_ext_1082_, 0);
v_asyncMode_1084_ = lean_ctor_get(v_toEnvExtension_1083_, 2);
v___x_1085_ = lean_obj_once(&l_Lean_getReducibilityStatusCore___closed__2, &l_Lean_getReducibilityStatusCore___closed__2_once, _init_l_Lean_getReducibilityStatusCore___closed__2);
lean_inc_ref(v_env_1079_);
v_m_1086_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1085_, v___x_1081_, v_env_1079_, v_asyncMode_1084_);
v___x_1087_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(v_m_1086_, v_declName_1080_);
lean_dec(v_m_1086_);
if (lean_obj_tag(v___x_1087_) == 1)
{
lean_object* v_val_1088_; uint8_t v___x_1089_; 
lean_dec(v_declName_1080_);
lean_dec_ref(v_env_1079_);
v_val_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_val_1088_);
lean_dec_ref(v___x_1087_);
v___x_1089_ = lean_unbox(v_val_1088_);
lean_dec(v_val_1088_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(1);
v___x_1091_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1079_, v_declName_1080_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v___x_1092_; lean_object* v_toEnvExtension_1093_; lean_object* v_asyncMode_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1092_ = l_Lean_reducibilityCoreExt;
v_toEnvExtension_1093_ = lean_ctor_get(v___x_1092_, 0);
v_asyncMode_1094_ = lean_ctor_get(v_toEnvExtension_1093_, 2);
lean_inc(v_declName_1080_);
v___x_1095_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1090_, v___x_1092_, v_env_1079_, v_asyncMode_1094_, v_declName_1080_);
v___x_1096_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1095_, v_declName_1080_);
lean_dec(v_declName_1080_);
lean_dec(v___x_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
uint8_t v___x_1097_; 
v___x_1097_ = 1;
return v___x_1097_;
}
else
{
lean_object* v_val_1098_; uint8_t v___x_1099_; 
v_val_1098_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_val_1098_);
lean_dec_ref(v___x_1096_);
v___x_1099_ = lean_unbox(v_val_1098_);
lean_dec(v_val_1098_);
return v___x_1099_;
}
}
else
{
lean_object* v_val_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; uint8_t v___x_1106_; 
v_val_1100_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_val_1100_);
lean_dec_ref(v___x_1091_);
v___x_1101_ = l_Lean_reducibilityCoreExt;
v___x_1102_ = 0;
v___x_1103_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1090_, v___x_1101_, v_env_1079_, v_val_1100_, v___x_1102_);
lean_dec(v_val_1100_);
lean_dec_ref(v_env_1079_);
v___x_1104_ = lean_unsigned_to_nat(0u);
v___x_1105_ = lean_array_get_size(v___x_1103_);
v___x_1106_ = lean_nat_dec_lt(v___x_1104_, v___x_1105_);
if (v___x_1106_ == 0)
{
uint8_t v___x_1107_; 
lean_dec_ref(v___x_1103_);
lean_dec(v_declName_1080_);
v___x_1107_ = 1;
return v___x_1107_;
}
else
{
uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v___x_1108_ = 1;
v___x_1109_ = lean_unsigned_to_nat(1u);
v___x_1110_ = lean_nat_sub(v___x_1105_, v___x_1109_);
v___x_1111_ = lean_nat_dec_le(v___x_1104_, v___x_1110_);
if (v___x_1111_ == 0)
{
lean_dec(v___x_1110_);
lean_dec_ref(v___x_1103_);
lean_dec(v_declName_1080_);
return v___x_1108_;
}
else
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1112_ = lean_box(v___x_1108_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v_declName_1080_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___redArg(v___x_1103_, v___x_1113_, v___x_1104_, v___x_1110_);
lean_dec_ref(v___x_1113_);
lean_dec_ref(v___x_1103_);
if (lean_obj_tag(v___x_1114_) == 0)
{
return v___x_1108_;
}
else
{
lean_object* v_val_1115_; lean_object* v_snd_1116_; uint8_t v___x_1117_; 
v_val_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_val_1115_);
lean_dec_ref(v___x_1114_);
v_snd_1116_ = lean_ctor_get(v_val_1115_, 1);
lean_inc(v_snd_1116_);
lean_dec(v_val_1115_);
v___x_1117_ = lean_unbox(v_snd_1116_);
lean_dec(v_snd_1116_);
return v___x_1117_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatusCore___boxed(lean_object* v_env_1118_, lean_object* v_declName_1119_){
_start:
{
uint8_t v_res_1120_; lean_object* v_r_1121_; 
v_res_1120_ = lean_get_reducibility_status(v_env_1118_, v_declName_1119_);
v_r_1121_ = lean_box(v_res_1120_);
return v_r_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0(lean_object* v_00_u03b2_1122_, lean_object* v_x_1123_, lean_object* v_x_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___redArg(v_x_1123_, v_x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0___boxed(lean_object* v_00_u03b2_1126_, lean_object* v_x_1127_, lean_object* v_x_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0(v_00_u03b2_1126_, v_x_1127_, v_x_1128_);
lean_dec(v_x_1128_);
lean_dec_ref(v_x_1127_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1(lean_object* v_as_1130_, lean_object* v_k_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_, lean_object* v_x_1134_){
_start:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___redArg(v_as_1130_, v_k_1131_, v_x_1132_, v_x_1133_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1___boxed(lean_object* v_as_1136_, lean_object* v_k_1137_, lean_object* v_x_1138_, lean_object* v_x_1139_, lean_object* v_x_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Array_binSearchAux___at___00Lean_getReducibilityStatusCore_spec__1(v_as_1136_, v_k_1137_, v_x_1138_, v_x_1139_, v_x_1140_);
lean_dec_ref(v_k_1137_);
lean_dec_ref(v_as_1136_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0(lean_object* v_00_u03b2_1142_, lean_object* v_x_1143_, lean_object* v_x_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___redArg(v_x_1143_, v_x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1146_, lean_object* v_x_1147_, lean_object* v_x_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0(v_00_u03b2_1146_, v_x_1147_, v_x_1148_);
lean_dec(v_x_1148_);
lean_dec_ref(v_x_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1(lean_object* v_00_u03b2_1150_, lean_object* v_m_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___redArg(v_m_1151_, v_a_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1154_, lean_object* v_m_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1(v_00_u03b2_1154_, v_m_1155_, v_a_1156_);
lean_dec(v_a_1156_);
lean_dec_ref(v_m_1155_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1158_, lean_object* v_x_1159_, size_t v_x_1160_, lean_object* v_x_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___redArg(v_x_1159_, v_x_1160_, v_x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1163_, lean_object* v_x_1164_, lean_object* v_x_1165_, lean_object* v_x_1166_){
_start:
{
size_t v_x_866__boxed_1167_; lean_object* v_res_1168_; 
v_x_866__boxed_1167_ = lean_unbox_usize(v_x_1165_);
lean_dec(v_x_1165_);
v_res_1168_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1(v_00_u03b2_1163_, v_x_1164_, v_x_866__boxed_1167_, v_x_1166_);
lean_dec(v_x_1166_);
lean_dec_ref(v_x_1164_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1169_, lean_object* v_a_1170_, lean_object* v_x_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___redArg(v_a_1170_, v_x_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1173_, lean_object* v_a_1174_, lean_object* v_x_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__1_spec__3(v_00_u03b2_1173_, v_a_1174_, v_x_1175_);
lean_dec(v_x_1175_);
lean_dec(v_a_1174_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1177_, lean_object* v_keys_1178_, lean_object* v_vals_1179_, lean_object* v_heq_1180_, lean_object* v_i_1181_, lean_object* v_k_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_1178_, v_vals_1179_, v_i_1181_, v_k_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1184_, lean_object* v_keys_1185_, lean_object* v_vals_1186_, lean_object* v_heq_1187_, lean_object* v_i_1188_, lean_object* v_k_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_getReducibilityStatusCore_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1184_, v_keys_1185_, v_vals_1186_, v_heq_1187_, v_i_1188_, v_k_1189_);
lean_dec(v_k_1189_);
lean_dec_ref(v_vals_1186_);
lean_dec_ref(v_keys_1185_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object* v_env_1191_, lean_object* v_declName_1192_, uint8_t v_status_1193_, uint8_t v_attrKind_1194_, lean_object* v_currNamespace_1195_){
_start:
{
if (v_attrKind_1194_ == 0)
{
lean_object* v___x_1196_; 
lean_dec(v_currNamespace_1195_);
v___x_1196_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1191_, v_declName_1192_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v___x_1197_; lean_object* v_toEnvExtension_1198_; lean_object* v_asyncMode_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1197_ = l_Lean_reducibilityCoreExt;
v_toEnvExtension_1198_ = lean_ctor_get(v___x_1197_, 0);
v_asyncMode_1199_ = lean_ctor_get(v_toEnvExtension_1198_, 2);
v___x_1200_ = lean_box(v_status_1193_);
lean_inc(v_declName_1192_);
v___x_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1201_, 0, v_declName_1192_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
v___x_1202_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1197_, v_env_1191_, v___x_1201_, v_asyncMode_1199_, v_declName_1192_);
return v___x_1202_;
}
else
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_dec_ref(v___x_1196_);
v___x_1203_ = l_Lean_reducibilityExtraExt;
v___x_1204_ = lean_box(v_status_1193_);
v___x_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1205_, 0, v_declName_1192_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_1206_ = l_Lean_ScopedEnvExtension_addEntry___redArg(v___x_1203_, v_env_1191_, v___x_1205_);
return v___x_1206_;
}
}
else
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1207_ = l_Lean_reducibilityExtraExt;
v___x_1208_ = lean_box(v_status_1193_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v_declName_1192_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1191_, v___x_1207_, v___x_1209_, v_attrKind_1194_, v_currNamespace_1195_);
return v___x_1210_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore___boxed(lean_object* v_env_1211_, lean_object* v_declName_1212_, lean_object* v_status_1213_, lean_object* v_attrKind_1214_, lean_object* v_currNamespace_1215_){
_start:
{
uint8_t v_status_boxed_1216_; uint8_t v_attrKind_boxed_1217_; lean_object* v_res_1218_; 
v_status_boxed_1216_ = lean_unbox(v_status_1213_);
v_attrKind_boxed_1217_ = lean_unbox(v_attrKind_1214_);
v_res_1218_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1211_, v_declName_1212_, v_status_boxed_1216_, v_attrKind_boxed_1217_, v_currNamespace_1215_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* lean_set_reducibility_status(lean_object* v_env_1219_, lean_object* v_declName_1220_, uint8_t v_status_1221_){
_start:
{
uint8_t v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1222_ = 0;
v___x_1223_ = lean_box(0);
v___x_1224_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1219_, v_declName_1220_, v_status_1221_, v___x_1222_, v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusImp___boxed(lean_object* v_env_1225_, lean_object* v_declName_1226_, lean_object* v_status_1227_){
_start:
{
uint8_t v_status_boxed_1228_; lean_object* v_res_1229_; 
v_status_boxed_1228_ = lean_unbox(v_status_1227_);
v_res_1229_ = lean_set_reducibility_status(v_env_1225_, v_declName_1226_, v_status_boxed_1228_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(lean_object* v_name_1230_, lean_object* v_decl_1231_, lean_object* v_ref_1232_){
_start:
{
lean_object* v_defValue_1234_; lean_object* v_descr_1235_; lean_object* v_deprecation_x3f_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v_defValue_1234_ = lean_ctor_get(v_decl_1231_, 0);
v_descr_1235_ = lean_ctor_get(v_decl_1231_, 1);
v_deprecation_x3f_1236_ = lean_ctor_get(v_decl_1231_, 2);
v___x_1237_ = lean_alloc_ctor(1, 0, 1);
v___x_1238_ = lean_unbox(v_defValue_1234_);
lean_ctor_set_uint8(v___x_1237_, 0, v___x_1238_);
lean_inc(v_deprecation_x3f_1236_);
lean_inc_ref(v_descr_1235_);
lean_inc_n(v_name_1230_, 2);
v___x_1239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1239_, 0, v_name_1230_);
lean_ctor_set(v___x_1239_, 1, v_ref_1232_);
lean_ctor_set(v___x_1239_, 2, v___x_1237_);
lean_ctor_set(v___x_1239_, 3, v_descr_1235_);
lean_ctor_set(v___x_1239_, 4, v_deprecation_x3f_1236_);
v___x_1240_ = lean_register_option(v_name_1230_, v___x_1239_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1248_; 
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; 
v_unused_1249_ = lean_ctor_get(v___x_1240_, 0);
lean_dec(v_unused_1249_);
v___x_1242_ = v___x_1240_;
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
else
{
lean_dec(v___x_1240_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; lean_object* v___x_1246_; 
lean_inc(v_defValue_1234_);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v_name_1230_);
lean_ctor_set(v___x_1244_, 1, v_defValue_1234_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___x_1244_);
v___x_1246_ = v___x_1242_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec(v_name_1230_);
v_a_1250_ = lean_ctor_get(v___x_1240_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1240_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1240_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1258_, lean_object* v_decl_1259_, lean_object* v_ref_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(v_name_1258_, v_decl_1259_, v_ref_1260_);
lean_dec_ref(v_decl_1259_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1277_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_));
v___x_1278_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_));
v___x_1279_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_));
v___x_1280_ = l_Lean_Option_register___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4__spec__0(v___x_1277_, v___x_1278_, v___x_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4____boxed(lean_object* v_a_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_();
return v_res_1282_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(lean_object* v_opts_1283_, lean_object* v_opt_1284_){
_start:
{
lean_object* v_name_1285_; lean_object* v_defValue_1286_; lean_object* v_map_1287_; lean_object* v___x_1288_; 
v_name_1285_ = lean_ctor_get(v_opt_1284_, 0);
v_defValue_1286_ = lean_ctor_get(v_opt_1284_, 1);
v_map_1287_ = lean_ctor_get(v_opts_1283_, 0);
v___x_1288_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1287_, v_name_1285_);
if (lean_obj_tag(v___x_1288_) == 0)
{
uint8_t v___x_1289_; 
v___x_1289_ = lean_unbox(v_defValue_1286_);
return v___x_1289_;
}
else
{
lean_object* v_val_1290_; 
v_val_1290_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_val_1290_);
lean_dec_ref(v___x_1288_);
if (lean_obj_tag(v_val_1290_) == 1)
{
uint8_t v_v_1291_; 
v_v_1291_ = lean_ctor_get_uint8(v_val_1290_, 0);
lean_dec_ref(v_val_1290_);
return v_v_1291_;
}
else
{
uint8_t v___x_1292_; 
lean_dec(v_val_1290_);
v___x_1292_ = lean_unbox(v_defValue_1286_);
return v___x_1292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0___boxed(lean_object* v_opts_1293_, lean_object* v_opt_1294_){
_start:
{
uint8_t v_res_1295_; lean_object* v_r_1296_; 
v_res_1295_ = l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(v_opts_1293_, v_opt_1294_);
lean_dec_ref(v_opt_1294_);
lean_dec_ref(v_opts_1293_);
v_r_1296_ = lean_box(v_res_1295_);
return v_r_1296_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1297_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__0);
v___x_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
return v___x_1299_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1);
v___x_1301_ = lean_unsigned_to_nat(0u);
v___x_1302_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
lean_ctor_set(v___x_1302_, 2, v___x_1301_);
lean_ctor_set(v___x_1302_, 3, v___x_1301_);
lean_ctor_set(v___x_1302_, 4, v___x_1300_);
lean_ctor_set(v___x_1302_, 5, v___x_1300_);
lean_ctor_set(v___x_1302_, 6, v___x_1300_);
lean_ctor_set(v___x_1302_, 7, v___x_1300_);
lean_ctor_set(v___x_1302_, 8, v___x_1300_);
lean_ctor_set(v___x_1302_, 9, v___x_1300_);
return v___x_1302_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = lean_unsigned_to_nat(32u);
v___x_1304_ = lean_mk_empty_array_with_capacity(v___x_1303_);
v___x_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4(void){
_start:
{
size_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1306_ = ((size_t)5ULL);
v___x_1307_ = lean_unsigned_to_nat(0u);
v___x_1308_ = lean_unsigned_to_nat(32u);
v___x_1309_ = lean_mk_empty_array_with_capacity(v___x_1308_);
v___x_1310_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__3);
v___x_1311_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1309_);
lean_ctor_set(v___x_1311_, 2, v___x_1307_);
lean_ctor_set(v___x_1311_, 3, v___x_1307_);
lean_ctor_set_usize(v___x_1311_, 4, v___x_1306_);
return v___x_1311_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1312_ = lean_box(1);
v___x_1313_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__4);
v___x_1314_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__1);
v___x_1315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
lean_ctor_set(v___x_1315_, 1, v___x_1313_);
lean_ctor_set(v___x_1315_, 2, v___x_1312_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(lean_object* v_msgData_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___x_1320_; lean_object* v_env_1321_; lean_object* v_options_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1320_ = lean_st_ref_get(v___y_1318_);
v_env_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc_ref(v_env_1321_);
lean_dec(v___x_1320_);
v_options_1322_ = lean_ctor_get(v___y_1317_, 2);
v___x_1323_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2);
v___x_1324_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5);
lean_inc_ref(v_options_1322_);
v___x_1325_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1325_, 0, v_env_1321_);
lean_ctor_set(v___x_1325_, 1, v___x_1323_);
lean_ctor_set(v___x_1325_, 2, v___x_1324_);
lean_ctor_set(v___x_1325_, 3, v_options_1322_);
v___x_1326_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v_msgData_1316_);
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___boxed(lean_object* v_msgData_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(v_msgData_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(lean_object* v_msg_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_){
_start:
{
lean_object* v_ref_1337_; lean_object* v___x_1338_; lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1347_; 
v_ref_1337_ = lean_ctor_get(v___y_1334_, 5);
v___x_1338_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1(v_msg_1333_, v___y_1334_, v___y_1335_);
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1338_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1341_ = v___x_1338_;
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1338_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
lean_inc(v_ref_1337_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_ref_1337_);
lean_ctor_set(v___x_1343_, 1, v_a_1339_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set_tag(v___x_1341_, 1);
lean_ctor_set(v___x_1341_, 0, v___x_1343_);
v___x_1345_ = v___x_1341_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg___boxed(lean_object* v_msg_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v_msg_1348_, v___y_1349_, v___y_1350_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(lean_object* v_ref_1353_, lean_object* v_msg_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v_fileName_1358_; lean_object* v_fileMap_1359_; lean_object* v_options_1360_; lean_object* v_currRecDepth_1361_; lean_object* v_maxRecDepth_1362_; lean_object* v_ref_1363_; lean_object* v_currNamespace_1364_; lean_object* v_openDecls_1365_; lean_object* v_initHeartbeats_1366_; lean_object* v_maxHeartbeats_1367_; lean_object* v_quotContext_1368_; lean_object* v_currMacroScope_1369_; uint8_t v_diag_1370_; lean_object* v_cancelTk_x3f_1371_; uint8_t v_suppressElabErrors_1372_; lean_object* v_inheritedTraceOptions_1373_; lean_object* v_ref_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v_fileName_1358_ = lean_ctor_get(v___y_1355_, 0);
v_fileMap_1359_ = lean_ctor_get(v___y_1355_, 1);
v_options_1360_ = lean_ctor_get(v___y_1355_, 2);
v_currRecDepth_1361_ = lean_ctor_get(v___y_1355_, 3);
v_maxRecDepth_1362_ = lean_ctor_get(v___y_1355_, 4);
v_ref_1363_ = lean_ctor_get(v___y_1355_, 5);
v_currNamespace_1364_ = lean_ctor_get(v___y_1355_, 6);
v_openDecls_1365_ = lean_ctor_get(v___y_1355_, 7);
v_initHeartbeats_1366_ = lean_ctor_get(v___y_1355_, 8);
v_maxHeartbeats_1367_ = lean_ctor_get(v___y_1355_, 9);
v_quotContext_1368_ = lean_ctor_get(v___y_1355_, 10);
v_currMacroScope_1369_ = lean_ctor_get(v___y_1355_, 11);
v_diag_1370_ = lean_ctor_get_uint8(v___y_1355_, sizeof(void*)*14);
v_cancelTk_x3f_1371_ = lean_ctor_get(v___y_1355_, 12);
v_suppressElabErrors_1372_ = lean_ctor_get_uint8(v___y_1355_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1373_ = lean_ctor_get(v___y_1355_, 13);
v_ref_1374_ = l_Lean_replaceRef(v_ref_1353_, v_ref_1363_);
lean_inc_ref(v_inheritedTraceOptions_1373_);
lean_inc(v_cancelTk_x3f_1371_);
lean_inc(v_currMacroScope_1369_);
lean_inc(v_quotContext_1368_);
lean_inc(v_maxHeartbeats_1367_);
lean_inc(v_initHeartbeats_1366_);
lean_inc(v_openDecls_1365_);
lean_inc(v_currNamespace_1364_);
lean_inc(v_maxRecDepth_1362_);
lean_inc(v_currRecDepth_1361_);
lean_inc_ref(v_options_1360_);
lean_inc_ref(v_fileMap_1359_);
lean_inc_ref(v_fileName_1358_);
v___x_1375_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1375_, 0, v_fileName_1358_);
lean_ctor_set(v___x_1375_, 1, v_fileMap_1359_);
lean_ctor_set(v___x_1375_, 2, v_options_1360_);
lean_ctor_set(v___x_1375_, 3, v_currRecDepth_1361_);
lean_ctor_set(v___x_1375_, 4, v_maxRecDepth_1362_);
lean_ctor_set(v___x_1375_, 5, v_ref_1374_);
lean_ctor_set(v___x_1375_, 6, v_currNamespace_1364_);
lean_ctor_set(v___x_1375_, 7, v_openDecls_1365_);
lean_ctor_set(v___x_1375_, 8, v_initHeartbeats_1366_);
lean_ctor_set(v___x_1375_, 9, v_maxHeartbeats_1367_);
lean_ctor_set(v___x_1375_, 10, v_quotContext_1368_);
lean_ctor_set(v___x_1375_, 11, v_currMacroScope_1369_);
lean_ctor_set(v___x_1375_, 12, v_cancelTk_x3f_1371_);
lean_ctor_set(v___x_1375_, 13, v_inheritedTraceOptions_1373_);
lean_ctor_set_uint8(v___x_1375_, sizeof(void*)*14, v_diag_1370_);
lean_ctor_set_uint8(v___x_1375_, sizeof(void*)*14 + 1, v_suppressElabErrors_1372_);
v___x_1376_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v_msg_1354_, v___x_1375_, v___y_1356_);
lean_dec_ref(v___x_1375_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg___boxed(lean_object* v_ref_1377_, lean_object* v_msg_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_1377_, v_msg_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v_ref_1377_);
return v_res_1382_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0));
v___x_1385_ = l_Lean_stringToMessageData(v___x_1384_);
return v___x_1385_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2));
v___x_1388_ = l_Lean_stringToMessageData(v___x_1387_);
return v___x_1388_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4));
v___x_1391_ = l_Lean_stringToMessageData(v___x_1390_);
return v___x_1391_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6));
v___x_1394_ = l_Lean_stringToMessageData(v___x_1393_);
return v___x_1394_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8));
v___x_1397_ = l_Lean_stringToMessageData(v___x_1396_);
return v___x_1397_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10));
v___x_1400_ = l_Lean_stringToMessageData(v___x_1399_);
return v___x_1400_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12));
v___x_1403_ = l_Lean_stringToMessageData(v___x_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_1404_, lean_object* v_declHint_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v___x_1408_; lean_object* v_env_1409_; uint8_t v___x_1410_; 
v___x_1408_ = lean_st_ref_get(v___y_1406_);
v_env_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc_ref(v_env_1409_);
lean_dec(v___x_1408_);
v___x_1410_ = l_Lean_Name_isAnonymous(v_declHint_1405_);
if (v___x_1410_ == 0)
{
uint8_t v_isExporting_1411_; 
v_isExporting_1411_ = lean_ctor_get_uint8(v_env_1409_, sizeof(void*)*8);
if (v_isExporting_1411_ == 0)
{
lean_object* v___x_1412_; 
lean_dec_ref(v_env_1409_);
lean_dec(v_declHint_1405_);
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v_msg_1404_);
return v___x_1412_;
}
else
{
lean_object* v___x_1413_; uint8_t v___x_1414_; 
lean_inc_ref(v_env_1409_);
v___x_1413_ = l_Lean_Environment_setExporting(v_env_1409_, v___x_1410_);
lean_inc(v_declHint_1405_);
lean_inc_ref(v___x_1413_);
v___x_1414_ = l_Lean_Environment_contains(v___x_1413_, v_declHint_1405_, v_isExporting_1411_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; 
lean_dec_ref(v___x_1413_);
lean_dec_ref(v_env_1409_);
lean_dec(v_declHint_1405_);
v___x_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1415_, 0, v_msg_1404_);
return v___x_1415_;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v_c_1421_; lean_object* v___x_1422_; 
v___x_1416_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__2);
v___x_1417_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1_spec__1___closed__5);
v___x_1418_ = l_Lean_Options_empty;
v___x_1419_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1413_);
lean_ctor_set(v___x_1419_, 1, v___x_1416_);
lean_ctor_set(v___x_1419_, 2, v___x_1417_);
lean_ctor_set(v___x_1419_, 3, v___x_1418_);
lean_inc(v_declHint_1405_);
v___x_1420_ = l_Lean_MessageData_ofConstName(v_declHint_1405_, v___x_1410_);
v_c_1421_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1421_, 0, v___x_1419_);
lean_ctor_set(v_c_1421_, 1, v___x_1420_);
v___x_1422_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1409_, v_declHint_1405_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
lean_dec_ref(v_env_1409_);
lean_dec(v_declHint_1405_);
v___x_1423_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
lean_ctor_set(v___x_1424_, 1, v_c_1421_);
v___x_1425_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = l_Lean_MessageData_note(v___x_1426_);
v___x_1428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1428_, 0, v_msg_1404_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
return v___x_1429_;
}
else
{
lean_object* v_val_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1465_; 
v_val_1430_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1432_ = v___x_1422_;
v_isShared_1433_ = v_isSharedCheck_1465_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_val_1430_);
lean_dec(v___x_1422_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1465_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v_mod_1437_; uint8_t v___x_1438_; 
v___x_1434_ = lean_box(0);
v___x_1435_ = l_Lean_Environment_header(v_env_1409_);
lean_dec_ref(v_env_1409_);
v___x_1436_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1435_);
v_mod_1437_ = lean_array_get(v___x_1434_, v___x_1436_, v_val_1430_);
lean_dec(v_val_1430_);
lean_dec_ref(v___x_1436_);
v___x_1438_ = l_Lean_isPrivateName(v_declHint_1405_);
lean_dec(v_declHint_1405_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1450_; 
v___x_1439_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5);
v___x_1440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
lean_ctor_set(v___x_1440_, 1, v_c_1421_);
v___x_1441_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7);
v___x_1442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1440_);
lean_ctor_set(v___x_1442_, 1, v___x_1441_);
v___x_1443_ = l_Lean_MessageData_ofName(v_mod_1437_);
v___x_1444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9);
v___x_1446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = l_Lean_MessageData_note(v___x_1446_);
v___x_1448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1448_, 0, v_msg_1404_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set_tag(v___x_1432_, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1448_);
v___x_1450_ = v___x_1432_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
else
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1452_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1452_);
lean_ctor_set(v___x_1453_, 1, v_c_1421_);
v___x_1454_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11);
v___x_1455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1453_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = l_Lean_MessageData_ofName(v_mod_1437_);
v___x_1457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1455_);
lean_ctor_set(v___x_1457_, 1, v___x_1456_);
v___x_1458_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13);
v___x_1459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1457_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = l_Lean_MessageData_note(v___x_1459_);
v___x_1461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1461_, 0, v_msg_1404_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set_tag(v___x_1432_, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1461_);
v___x_1463_ = v___x_1432_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1461_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1466_; 
lean_dec_ref(v_env_1409_);
lean_dec(v_declHint_1405_);
v___x_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1466_, 0, v_msg_1404_);
return v___x_1466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_1467_, lean_object* v_declHint_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_1467_, v_declHint_1468_, v___y_1469_);
lean_dec(v___y_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(lean_object* v_msg_1472_, lean_object* v_declHint_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v___x_1477_; lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1487_; 
v___x_1477_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_1472_, v_declHint_1473_, v___y_1475_);
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1480_ = v___x_1477_;
v_isShared_1481_ = v_isSharedCheck_1487_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1477_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1487_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1485_; 
v___x_1482_ = l_Lean_unknownIdentifierMessageTag;
v___x_1483_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1482_);
lean_ctor_set(v___x_1483_, 1, v_a_1478_);
if (v_isShared_1481_ == 0)
{
lean_ctor_set(v___x_1480_, 0, v___x_1483_);
v___x_1485_ = v___x_1480_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8___boxed(lean_object* v_msg_1488_, lean_object* v_declHint_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(v_msg_1488_, v_declHint_1489_, v___y_1490_, v___y_1491_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(lean_object* v_ref_1494_, lean_object* v_msg_1495_, lean_object* v_declHint_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; lean_object* v_a_1501_; lean_object* v___x_1502_; 
v___x_1500_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8(v_msg_1495_, v_declHint_1496_, v___y_1497_, v___y_1498_);
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1501_);
lean_dec_ref(v___x_1500_);
v___x_1502_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_1494_, v_a_1501_, v___y_1497_, v___y_1498_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_ref_1503_, lean_object* v_msg_1504_, lean_object* v_declHint_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(v_ref_1503_, v_msg_1504_, v_declHint_1505_, v___y_1506_, v___y_1507_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v_ref_1503_);
return v_res_1509_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__0));
v___x_1512_ = l_Lean_stringToMessageData(v___x_1511_);
return v___x_1512_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__2));
v___x_1515_ = l_Lean_stringToMessageData(v___x_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(lean_object* v_ref_1516_, lean_object* v_constName_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v___x_1521_; uint8_t v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1521_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_1522_ = 0;
lean_inc(v_constName_1517_);
v___x_1523_ = l_Lean_MessageData_ofConstName(v_constName_1517_, v___x_1522_);
v___x_1524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1521_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1524_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(v_ref_1516_, v___x_1526_, v_constName_1517_, v___y_1518_, v___y_1519_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_ref_1528_, lean_object* v_constName_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(v_ref_1528_, v_constName_1529_, v___y_1530_, v___y_1531_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v_ref_1528_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(lean_object* v_constName_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_ref_1538_; lean_object* v___x_1539_; 
v_ref_1538_ = lean_ctor_get(v___y_1535_, 5);
v___x_1539_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(v_ref_1538_, v_constName_1534_, v___y_1535_, v___y_1536_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg___boxed(lean_object* v_constName_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(v_constName_1540_, v___y_1541_, v___y_1542_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(lean_object* v_constName_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v___x_1549_; lean_object* v_env_1550_; uint8_t v___x_1551_; lean_object* v___x_1552_; 
v___x_1549_ = lean_st_ref_get(v___y_1547_);
v_env_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc_ref(v_env_1550_);
lean_dec(v___x_1549_);
v___x_1551_ = 0;
lean_inc(v_constName_1545_);
v___x_1552_ = l_Lean_Environment_find_x3f(v_env_1550_, v_constName_1545_, v___x_1551_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(v_constName_1545_, v___y_1546_, v___y_1547_);
return v___x_1553_;
}
else
{
lean_object* v_val_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
lean_dec(v_constName_1545_);
v_val_1554_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1552_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_val_1554_);
lean_dec(v___x_1552_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
lean_ctor_set_tag(v___x_1556_, 0);
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_val_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2___boxed(lean_object* v_constName_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(v_constName_1562_, v___y_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
return v_res_1566_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__0));
v___x_1569_ = l_Lean_stringToMessageData(v___x_1568_);
return v___x_1569_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__2));
v___x_1572_ = l_Lean_stringToMessageData(v___x_1571_);
return v___x_1572_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__4));
v___x_1575_ = l_Lean_stringToMessageData(v___x_1574_);
return v___x_1575_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__6));
v___x_1578_ = l_Lean_stringToMessageData(v___x_1577_);
return v___x_1578_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__9(void){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__8));
v___x_1581_ = l_Lean_stringToMessageData(v___x_1580_);
return v___x_1581_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__11(void){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__10));
v___x_1584_ = l_Lean_stringToMessageData(v___x_1583_);
return v___x_1584_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__13(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__12));
v___x_1587_ = l_Lean_stringToMessageData(v___x_1586_);
return v___x_1587_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__15(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__14));
v___x_1590_ = l_Lean_stringToMessageData(v___x_1589_);
return v___x_1590_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__17(void){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__16));
v___x_1593_ = l_Lean_stringToMessageData(v___x_1592_);
return v___x_1593_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__18));
v___x_1596_ = l_Lean_stringToMessageData(v___x_1595_);
return v___x_1596_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__21(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__20));
v___x_1599_ = l_Lean_stringToMessageData(v___x_1598_);
return v___x_1599_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__23(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__22));
v___x_1602_ = l_Lean_stringToMessageData(v___x_1601_);
return v___x_1602_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__25(void){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__24));
v___x_1605_ = l_Lean_stringToMessageData(v___x_1604_);
return v___x_1605_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__27(void){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__26));
v___x_1608_ = l_Lean_stringToMessageData(v___x_1607_);
return v___x_1608_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__28));
v___x_1611_ = l_Lean_stringToMessageData(v___x_1610_);
return v___x_1611_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__31(void){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__30));
v___x_1614_ = l_Lean_stringToMessageData(v___x_1613_);
return v___x_1614_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__33(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__32));
v___x_1617_ = l_Lean_stringToMessageData(v___x_1616_);
return v___x_1617_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__35(void){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1619_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__34));
v___x_1620_ = l_Lean_stringToMessageData(v___x_1619_);
return v___x_1620_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__37(void){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__36));
v___x_1623_ = l_Lean_stringToMessageData(v___x_1622_);
return v___x_1623_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__39(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__38));
v___x_1626_ = l_Lean_stringToMessageData(v___x_1625_);
return v___x_1626_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__41(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__40));
v___x_1629_ = l_Lean_stringToMessageData(v___x_1628_);
return v___x_1629_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__43(void){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__42));
v___x_1632_ = l_Lean_stringToMessageData(v___x_1631_);
return v___x_1632_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__45(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1634_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__44));
v___x_1635_ = l_Lean_stringToMessageData(v___x_1634_);
return v___x_1635_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__47(void){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__46));
v___x_1638_ = l_Lean_stringToMessageData(v___x_1637_);
return v___x_1638_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__49(void){
_start:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1640_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__48));
v___x_1641_ = l_Lean_stringToMessageData(v___x_1640_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0(lean_object* v_declName_1642_, uint8_t v_status_1643_, lean_object* v_suffix_1644_, uint8_t v_attrKind_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v_options_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; uint8_t v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; uint8_t v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1747_; lean_object* v___y_1748_; 
v_options_1673_ = lean_ctor_get(v___y_1646_, 2);
v___x_1674_ = l_Lean_allowUnsafeReducibility;
v___x_1675_ = l_Lean_Option_get___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__0(v_options_1673_, v___x_1674_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1817_; 
lean_inc(v_declName_1642_);
v___x_1817_ = l_Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2(v_declName_1642_, v___y_1646_, v___y_1647_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; uint8_t v___x_1819_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1818_);
lean_dec_ref(v___x_1817_);
v___x_1819_ = l_Lean_ConstantInfo_isDefinition(v_a_1818_);
lean_dec(v_a_1818_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1820_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19);
v___x_1821_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1819_);
v___x_1822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1820_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__49, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__49_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__49);
v___x_1824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1822_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
v___x_1825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
lean_ctor_set(v___x_1825_, 1, v_suffix_1644_);
v___x_1826_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1825_, v___y_1646_, v___y_1647_);
return v___x_1826_;
}
else
{
v___y_1747_ = v___y_1646_;
v___y_1748_ = v___y_1647_;
goto v___jp_1746_;
}
}
else
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
v_a_1827_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1817_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1817_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1827_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
else
{
lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
v___x_1835_ = lean_box(0);
v___x_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
return v___x_1836_;
}
v___jp_1649_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_box(0);
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
return v___x_1651_;
}
v___jp_1652_:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1653_ = lean_box(0);
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
return v___x_1654_;
}
v___jp_1655_:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
v___jp_1658_:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = lean_box(0);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
return v___x_1660_;
}
v___jp_1661_:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_box(0);
v___x_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
return v___x_1663_;
}
v___jp_1664_:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = lean_box(0);
v___x_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
return v___x_1666_;
}
v___jp_1667_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = lean_box(0);
v___x_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
return v___x_1669_;
}
v___jp_1670_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1671_ = lean_box(0);
v___x_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
return v___x_1672_;
}
v___jp_1676_:
{
switch(v_status_1643_)
{
case 0:
{
if (v___y_1677_ == 1)
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1670_;
}
else
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1680_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__1, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__1_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__1);
v___x_1681_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1680_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3);
v___x_1684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1682_);
lean_ctor_set(v___x_1684_, 1, v___x_1683_);
v___x_1685_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1677_);
v___x_1686_ = l_Lean_stringToMessageData(v___x_1685_);
v___x_1687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1684_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
v___x_1688_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
lean_ctor_set(v___x_1690_, 1, v_suffix_1644_);
v___x_1691_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1690_, v___y_1678_, v___y_1679_);
return v___x_1691_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1670_;
}
}
}
case 1:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1692_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__5, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__5_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__5);
v___x_1693_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1692_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__7, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__7_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__7);
v___x_1696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
lean_ctor_set(v___x_1697_, 1, v_suffix_1644_);
v___x_1698_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1697_, v___y_1678_, v___y_1679_);
return v___x_1698_;
}
case 2:
{
switch(v___y_1677_)
{
case 1:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1667_;
}
case 3:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1667_;
}
case 4:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1667_;
}
default: 
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1699_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__9, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__9_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__9);
v___x_1700_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1699_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__11, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__11_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__11);
v___x_1703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1701_);
lean_ctor_set(v___x_1703_, 1, v___x_1702_);
v___x_1704_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1677_);
v___x_1705_ = l_Lean_stringToMessageData(v___x_1704_);
v___x_1706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1703_);
lean_ctor_set(v___x_1706_, 1, v___x_1705_);
v___x_1707_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1706_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
lean_ctor_set(v___x_1709_, 1, v_suffix_1644_);
v___x_1710_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1709_, v___y_1678_, v___y_1679_);
return v___x_1710_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1667_;
}
}
}
}
case 3:
{
switch(v___y_1677_)
{
case 1:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1664_;
}
case 4:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1664_;
}
default: 
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1711_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__13, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__13_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__13);
v___x_1712_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1711_);
lean_ctor_set(v___x_1713_, 1, v___x_1712_);
v___x_1714_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__15, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__15_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__15);
v___x_1715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1713_);
lean_ctor_set(v___x_1715_, 1, v___x_1714_);
v___x_1716_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1677_);
v___x_1717_ = l_Lean_stringToMessageData(v___x_1716_);
v___x_1718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1715_);
lean_ctor_set(v___x_1718_, 1, v___x_1717_);
v___x_1719_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1718_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
v___x_1721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
lean_ctor_set(v___x_1721_, 1, v_suffix_1644_);
v___x_1722_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1721_, v___y_1678_, v___y_1679_);
return v___x_1722_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1664_;
}
}
}
}
default: 
{
if (v___y_1677_ == 1)
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1661_;
}
else
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1723_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__17, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__17_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__17);
v___x_1724_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1723_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
v___x_1726_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__3);
v___x_1727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1725_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
v___x_1728_ = l_Lean_ReducibilityStatus_toAttrString(v___y_1677_);
v___x_1729_ = l_Lean_stringToMessageData(v___x_1728_);
v___x_1730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1727_);
lean_ctor_set(v___x_1730_, 1, v___x_1729_);
v___x_1731_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1732_);
lean_ctor_set(v___x_1733_, 1, v_suffix_1644_);
v___x_1734_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1733_, v___y_1678_, v___y_1679_);
return v___x_1734_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1661_;
}
}
}
}
}
v___jp_1735_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1739_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__19);
v___x_1740_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1739_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__21, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__21_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__21);
v___x_1743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1741_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
v___x_1744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
lean_ctor_set(v___x_1744_, 1, v_suffix_1644_);
v___x_1745_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1744_, v___y_1738_, v___y_1737_);
return v___x_1745_;
}
v___jp_1746_:
{
lean_object* v___x_1749_; lean_object* v_env_1750_; uint8_t v___x_1751_; 
v___x_1749_ = lean_st_ref_get(v___y_1748_);
v_env_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc_ref(v_env_1750_);
lean_dec(v___x_1749_);
lean_inc(v_declName_1642_);
v___x_1751_ = lean_get_reducibility_status(v_env_1750_, v_declName_1642_);
switch(v_attrKind_1645_)
{
case 0:
{
lean_object* v___x_1752_; lean_object* v_env_1753_; lean_object* v___x_1754_; 
v___x_1752_ = lean_st_ref_get(v___y_1748_);
v_env_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc_ref(v_env_1753_);
lean_dec(v___x_1752_);
v___x_1754_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1753_, v_declName_1642_);
lean_dec_ref(v_env_1753_);
if (lean_obj_tag(v___x_1754_) == 1)
{
lean_dec_ref(v___x_1754_);
v___y_1736_ = v___x_1751_;
v___y_1737_ = v___y_1748_;
v___y_1738_ = v___y_1747_;
goto v___jp_1735_;
}
else
{
lean_dec(v___x_1754_);
if (v___x_1675_ == 0)
{
v___y_1677_ = v___x_1751_;
v___y_1678_ = v___y_1747_;
v___y_1679_ = v___y_1748_;
goto v___jp_1676_;
}
else
{
v___y_1736_ = v___x_1751_;
v___y_1737_ = v___y_1748_;
v___y_1738_ = v___y_1747_;
goto v___jp_1735_;
}
}
}
case 1:
{
switch(v_status_1643_)
{
case 0:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1755_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__23, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__23_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__23);
v___x_1756_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1755_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__25, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__25_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__25);
v___x_1759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1757_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
lean_ctor_set(v___x_1760_, 1, v_suffix_1644_);
v___x_1761_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1760_, v___y_1747_, v___y_1748_);
return v___x_1761_;
}
case 1:
{
if (v___x_1751_ == 2)
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1649_;
}
else
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1762_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__27, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__27_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__27);
v___x_1763_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1762_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
v___x_1765_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29);
v___x_1766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v___x_1767_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1751_);
v___x_1768_ = l_Lean_stringToMessageData(v___x_1767_);
v___x_1769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1766_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__31, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__31_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__31);
v___x_1771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
lean_ctor_set(v___x_1772_, 1, v_suffix_1644_);
v___x_1773_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1772_, v___y_1747_, v___y_1748_);
return v___x_1773_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1649_;
}
}
}
case 2:
{
switch(v___x_1751_)
{
case 1:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1652_;
}
case 3:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1652_;
}
case 4:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1652_;
}
default: 
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1774_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__33, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__33_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__33);
v___x_1775_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1774_);
lean_ctor_set(v___x_1776_, 1, v___x_1775_);
v___x_1777_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29);
v___x_1778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1776_);
lean_ctor_set(v___x_1778_, 1, v___x_1777_);
v___x_1779_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1751_);
v___x_1780_ = l_Lean_stringToMessageData(v___x_1779_);
v___x_1781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1778_);
lean_ctor_set(v___x_1781_, 1, v___x_1780_);
v___x_1782_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__35, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__35_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__35);
v___x_1783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1781_);
lean_ctor_set(v___x_1783_, 1, v___x_1782_);
v___x_1784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1783_);
lean_ctor_set(v___x_1784_, 1, v_suffix_1644_);
v___x_1785_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1784_, v___y_1747_, v___y_1748_);
return v___x_1785_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1652_;
}
}
}
}
case 3:
{
switch(v___x_1751_)
{
case 1:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1655_;
}
case 4:
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1655_;
}
default: 
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1786_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__37, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__37_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__37);
v___x_1787_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1786_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29);
v___x_1790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1788_);
lean_ctor_set(v___x_1790_, 1, v___x_1789_);
v___x_1791_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1751_);
v___x_1792_ = l_Lean_stringToMessageData(v___x_1791_);
v___x_1793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1790_);
lean_ctor_set(v___x_1793_, 1, v___x_1792_);
v___x_1794_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__39, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__39_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__39);
v___x_1795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1793_);
lean_ctor_set(v___x_1795_, 1, v___x_1794_);
v___x_1796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
lean_ctor_set(v___x_1796_, 1, v_suffix_1644_);
v___x_1797_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1796_, v___y_1747_, v___y_1748_);
return v___x_1797_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1655_;
}
}
}
}
default: 
{
if (v___x_1751_ == 1)
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1658_;
}
else
{
if (v___x_1675_ == 0)
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1798_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__41, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__41_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__41);
v___x_1799_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1798_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
v___x_1801_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__29);
v___x_1802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1800_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = l_Lean_ReducibilityStatus_toAttrString(v___x_1751_);
v___x_1804_ = l_Lean_stringToMessageData(v___x_1803_);
v___x_1805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1802_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
v___x_1806_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__43, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__43_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__43);
v___x_1807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
lean_ctor_set(v___x_1808_, 1, v_suffix_1644_);
v___x_1809_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1808_, v___y_1747_, v___y_1748_);
return v___x_1809_;
}
else
{
lean_dec_ref(v_suffix_1644_);
lean_dec(v_declName_1642_);
goto v___jp_1658_;
}
}
}
}
}
default: 
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1810_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__45, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__45_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__45);
v___x_1811_ = l_Lean_MessageData_ofConstName(v_declName_1642_, v___x_1675_);
v___x_1812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1810_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v___x_1813_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__47, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__47_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___closed__47);
v___x_1814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1812_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
lean_ctor_set(v___x_1815_, 1, v_suffix_1644_);
v___x_1816_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_1815_, v___y_1747_, v___y_1748_);
return v___x_1816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___boxed(lean_object* v_declName_1837_, lean_object* v_status_1838_, lean_object* v_suffix_1839_, lean_object* v_attrKind_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
uint8_t v_status_boxed_1844_; uint8_t v_attrKind_boxed_1845_; lean_object* v_res_1846_; 
v_status_boxed_1844_ = lean_unbox(v_status_1838_);
v_attrKind_boxed_1845_ = lean_unbox(v_attrKind_1840_);
v_res_1846_ = l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0(v_declName_1837_, v_status_boxed_1844_, v_suffix_1839_, v_attrKind_boxed_1845_, v___y_1841_, v___y_1842_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(lean_object* v___y_1847_, uint8_t v_isExporting_1848_, lean_object* v___x_1849_, lean_object* v_a_x3f_1850_){
_start:
{
lean_object* v___x_1852_; lean_object* v_env_1853_; lean_object* v_nextMacroScope_1854_; lean_object* v_ngen_1855_; lean_object* v_auxDeclNGen_1856_; lean_object* v_traceState_1857_; lean_object* v_messages_1858_; lean_object* v_infoState_1859_; lean_object* v_snapshotTasks_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1871_; 
v___x_1852_ = lean_st_ref_take(v___y_1847_);
v_env_1853_ = lean_ctor_get(v___x_1852_, 0);
v_nextMacroScope_1854_ = lean_ctor_get(v___x_1852_, 1);
v_ngen_1855_ = lean_ctor_get(v___x_1852_, 2);
v_auxDeclNGen_1856_ = lean_ctor_get(v___x_1852_, 3);
v_traceState_1857_ = lean_ctor_get(v___x_1852_, 4);
v_messages_1858_ = lean_ctor_get(v___x_1852_, 6);
v_infoState_1859_ = lean_ctor_get(v___x_1852_, 7);
v_snapshotTasks_1860_ = lean_ctor_get(v___x_1852_, 8);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1871_ == 0)
{
lean_object* v_unused_1872_; 
v_unused_1872_ = lean_ctor_get(v___x_1852_, 5);
lean_dec(v_unused_1872_);
v___x_1862_ = v___x_1852_;
v_isShared_1863_ = v_isSharedCheck_1871_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_snapshotTasks_1860_);
lean_inc(v_infoState_1859_);
lean_inc(v_messages_1858_);
lean_inc(v_traceState_1857_);
lean_inc(v_auxDeclNGen_1856_);
lean_inc(v_ngen_1855_);
lean_inc(v_nextMacroScope_1854_);
lean_inc(v_env_1853_);
lean_dec(v___x_1852_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1871_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1864_ = l_Lean_Environment_setExporting(v_env_1853_, v_isExporting_1848_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 5, v___x_1849_);
lean_ctor_set(v___x_1862_, 0, v___x_1864_);
v___x_1866_ = v___x_1862_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1864_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_nextMacroScope_1854_);
lean_ctor_set(v_reuseFailAlloc_1870_, 2, v_ngen_1855_);
lean_ctor_set(v_reuseFailAlloc_1870_, 3, v_auxDeclNGen_1856_);
lean_ctor_set(v_reuseFailAlloc_1870_, 4, v_traceState_1857_);
lean_ctor_set(v_reuseFailAlloc_1870_, 5, v___x_1849_);
lean_ctor_set(v_reuseFailAlloc_1870_, 6, v_messages_1858_);
lean_ctor_set(v_reuseFailAlloc_1870_, 7, v_infoState_1859_);
lean_ctor_set(v_reuseFailAlloc_1870_, 8, v_snapshotTasks_1860_);
v___x_1866_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1867_ = lean_st_ref_set(v___y_1847_, v___x_1866_);
v___x_1868_ = lean_box(0);
v___x_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
return v___x_1869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v___y_1873_, lean_object* v_isExporting_1874_, lean_object* v___x_1875_, lean_object* v_a_x3f_1876_, lean_object* v___y_1877_){
_start:
{
uint8_t v_isExporting_boxed_1878_; lean_object* v_res_1879_; 
v_isExporting_boxed_1878_ = lean_unbox(v_isExporting_1874_);
v_res_1879_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(v___y_1873_, v_isExporting_boxed_1878_, v___x_1875_, v_a_x3f_1876_);
lean_dec(v_a_x3f_1876_);
lean_dec(v___y_1873_);
return v_res_1879_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1880_; 
v___x_1880_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1880_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__0);
v___x_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
return v___x_1882_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__1);
v___x_1884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
lean_ctor_set(v___x_1884_, 1, v___x_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(lean_object* v_x_1885_, uint8_t v_isExporting_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v___x_1890_; lean_object* v_env_1891_; uint8_t v_isExporting_1892_; lean_object* v___x_1893_; lean_object* v_env_1894_; lean_object* v_nextMacroScope_1895_; lean_object* v_ngen_1896_; lean_object* v_auxDeclNGen_1897_; lean_object* v_traceState_1898_; lean_object* v_messages_1899_; lean_object* v_infoState_1900_; lean_object* v_snapshotTasks_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1940_; 
v___x_1890_ = lean_st_ref_get(v___y_1888_);
v_env_1891_ = lean_ctor_get(v___x_1890_, 0);
lean_inc_ref(v_env_1891_);
lean_dec(v___x_1890_);
v_isExporting_1892_ = lean_ctor_get_uint8(v_env_1891_, sizeof(void*)*8);
lean_dec_ref(v_env_1891_);
v___x_1893_ = lean_st_ref_take(v___y_1888_);
v_env_1894_ = lean_ctor_get(v___x_1893_, 0);
v_nextMacroScope_1895_ = lean_ctor_get(v___x_1893_, 1);
v_ngen_1896_ = lean_ctor_get(v___x_1893_, 2);
v_auxDeclNGen_1897_ = lean_ctor_get(v___x_1893_, 3);
v_traceState_1898_ = lean_ctor_get(v___x_1893_, 4);
v_messages_1899_ = lean_ctor_get(v___x_1893_, 6);
v_infoState_1900_ = lean_ctor_get(v___x_1893_, 7);
v_snapshotTasks_1901_ = lean_ctor_get(v___x_1893_, 8);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1940_ == 0)
{
lean_object* v_unused_1941_; 
v_unused_1941_ = lean_ctor_get(v___x_1893_, 5);
lean_dec(v_unused_1941_);
v___x_1903_ = v___x_1893_;
v_isShared_1904_ = v_isSharedCheck_1940_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_snapshotTasks_1901_);
lean_inc(v_infoState_1900_);
lean_inc(v_messages_1899_);
lean_inc(v_traceState_1898_);
lean_inc(v_auxDeclNGen_1897_);
lean_inc(v_ngen_1896_);
lean_inc(v_nextMacroScope_1895_);
lean_inc(v_env_1894_);
lean_dec(v___x_1893_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1940_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1905_ = l_Lean_Environment_setExporting(v_env_1894_, v_isExporting_1886_);
v___x_1906_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2);
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 5, v___x_1906_);
lean_ctor_set(v___x_1903_, 0, v___x_1905_);
v___x_1908_ = v___x_1903_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v___x_1905_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v_nextMacroScope_1895_);
lean_ctor_set(v_reuseFailAlloc_1939_, 2, v_ngen_1896_);
lean_ctor_set(v_reuseFailAlloc_1939_, 3, v_auxDeclNGen_1897_);
lean_ctor_set(v_reuseFailAlloc_1939_, 4, v_traceState_1898_);
lean_ctor_set(v_reuseFailAlloc_1939_, 5, v___x_1906_);
lean_ctor_set(v_reuseFailAlloc_1939_, 6, v_messages_1899_);
lean_ctor_set(v_reuseFailAlloc_1939_, 7, v_infoState_1900_);
lean_ctor_set(v_reuseFailAlloc_1939_, 8, v_snapshotTasks_1901_);
v___x_1908_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
lean_object* v___x_1909_; lean_object* v_r_1910_; 
v___x_1909_ = lean_st_ref_set(v___y_1888_, v___x_1908_);
lean_inc(v___y_1888_);
lean_inc_ref(v___y_1887_);
v_r_1910_ = lean_apply_3(v_x_1885_, v___y_1887_, v___y_1888_, lean_box(0));
if (lean_obj_tag(v_r_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1927_; 
v_a_1911_ = lean_ctor_get(v_r_1910_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_r_1910_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1913_ = v_r_1910_;
v_isShared_1914_ = v_isSharedCheck_1927_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v_r_1910_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1927_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
lean_inc(v_a_1911_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set_tag(v___x_1913_, 1);
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
v___x_1917_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(v___y_1888_, v_isExporting_1892_, v___x_1906_, v___x_1916_);
lean_dec_ref(v___x_1916_);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1924_ == 0)
{
lean_object* v_unused_1925_; 
v_unused_1925_ = lean_ctor_get(v___x_1917_, 0);
lean_dec(v_unused_1925_);
v___x_1919_ = v___x_1917_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_dec(v___x_1917_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v_a_1911_);
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1911_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
v_a_1928_ = lean_ctor_get(v_r_1910_, 0);
lean_inc(v_a_1928_);
lean_dec_ref(v_r_1910_);
v___x_1929_ = lean_box(0);
v___x_1930_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___lam__0(v___y_1888_, v_isExporting_1892_, v___x_1906_, v___x_1929_);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; 
v_unused_1938_ = lean_ctor_get(v___x_1930_, 0);
lean_dec(v_unused_1938_);
v___x_1932_ = v___x_1930_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_dec(v___x_1930_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
lean_ctor_set_tag(v___x_1932_, 1);
lean_ctor_set(v___x_1932_, 0, v_a_1928_);
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1928_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___boxed(lean_object* v_x_1942_, lean_object* v_isExporting_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
uint8_t v_isExporting_boxed_1947_; lean_object* v_res_1948_; 
v_isExporting_boxed_1947_ = lean_unbox(v_isExporting_1943_);
v_res_1948_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(v_x_1942_, v_isExporting_boxed_1947_, v___y_1944_, v___y_1945_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(lean_object* v_x_1949_, uint8_t v_when_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
if (v_when_1950_ == 0)
{
lean_object* v___x_1954_; 
lean_inc(v___y_1952_);
lean_inc_ref(v___y_1951_);
v___x_1954_ = lean_apply_3(v_x_1949_, v___y_1951_, v___y_1952_, lean_box(0));
return v___x_1954_;
}
else
{
uint8_t v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = 0;
v___x_1956_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(v_x_1949_, v___x_1955_, v___y_1951_, v___y_1952_);
return v___x_1956_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg___boxed(lean_object* v_x_1957_, lean_object* v_when_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
uint8_t v_when_boxed_1962_; lean_object* v_res_1963_; 
v_when_boxed_1962_ = lean_unbox(v_when_1958_);
v_res_1963_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(v_x_1957_, v_when_boxed_1962_, v___y_1959_, v___y_1960_);
lean_dec(v___y_1960_);
lean_dec_ref(v___y_1959_);
return v_res_1963_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2(void){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__1));
v___x_1968_ = l_Lean_MessageData_ofFormat(v___x_1967_);
return v___x_1968_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3(void){
_start:
{
lean_object* v___x_1969_; lean_object* v_suffix_1970_; 
v___x_1969_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__2);
v_suffix_1970_ = l_Lean_MessageData_note(v___x_1969_);
return v_suffix_1970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate(lean_object* v_declName_1971_, uint8_t v_status_1972_, uint8_t v_attrKind_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v_suffix_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___f_1980_; uint8_t v___x_1981_; lean_object* v___x_1982_; 
v_suffix_1977_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3, &l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3_once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_validate___closed__3);
v___x_1978_ = lean_box(v_status_1972_);
v___x_1979_ = lean_box(v_attrKind_1973_);
v___f_1980_ = lean_alloc_closure((void*)(l___private_Lean_ReducibilityAttrs_0__Lean_validate___lam__0___boxed), 7, 4);
lean_closure_set(v___f_1980_, 0, v_declName_1971_);
lean_closure_set(v___f_1980_, 1, v___x_1978_);
lean_closure_set(v___f_1980_, 2, v_suffix_1977_);
lean_closure_set(v___f_1980_, 3, v___x_1979_);
v___x_1981_ = 1;
v___x_1982_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(v___f_1980_, v___x_1981_, v_a_1974_, v_a_1975_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_validate___boxed(lean_object* v_declName_1983_, lean_object* v_status_1984_, lean_object* v_attrKind_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_){
_start:
{
uint8_t v_status_boxed_1989_; uint8_t v_attrKind_boxed_1990_; lean_object* v_res_1991_; 
v_status_boxed_1989_ = lean_unbox(v_status_1984_);
v_attrKind_boxed_1990_ = lean_unbox(v_attrKind_1985_);
v_res_1991_ = l___private_Lean_ReducibilityAttrs_0__Lean_validate(v_declName_1983_, v_status_boxed_1989_, v_attrKind_boxed_1990_, v_a_1986_, v_a_1987_);
lean_dec(v_a_1987_);
lean_dec_ref(v_a_1986_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1(lean_object* v_00_u03b1_1992_, lean_object* v_msg_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v_msg_1993_, v___y_1994_, v___y_1995_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___boxed(lean_object* v_00_u03b1_1998_, lean_object* v_msg_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1(v_00_u03b1_1998_, v_msg_1999_, v___y_2000_, v___y_2001_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5(lean_object* v_00_u03b1_2004_, lean_object* v_x_2005_, uint8_t v_isExporting_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg(v_x_2005_, v_isExporting_2006_, v___y_2007_, v___y_2008_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___boxed(lean_object* v_00_u03b1_2011_, lean_object* v_x_2012_, lean_object* v_isExporting_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
uint8_t v_isExporting_boxed_2017_; lean_object* v_res_2018_; 
v_isExporting_boxed_2017_ = lean_unbox(v_isExporting_2013_);
v_res_2018_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5(v_00_u03b1_2011_, v_x_2012_, v_isExporting_boxed_2017_, v___y_2014_, v___y_2015_);
lean_dec(v___y_2015_);
lean_dec_ref(v___y_2014_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3(lean_object* v_00_u03b1_2019_, lean_object* v_x_2020_, uint8_t v_when_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___redArg(v_x_2020_, v_when_2021_, v___y_2022_, v___y_2023_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3___boxed(lean_object* v_00_u03b1_2026_, lean_object* v_x_2027_, lean_object* v_when_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
uint8_t v_when_boxed_2032_; lean_object* v_res_2033_; 
v_when_boxed_2032_ = lean_unbox(v_when_2028_);
v_res_2033_ = l_Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3(v_00_u03b1_2026_, v_x_2027_, v_when_boxed_2032_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3(lean_object* v_00_u03b1_2034_, lean_object* v_constName_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v___x_2039_; 
v___x_2039_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___redArg(v_constName_2035_, v___y_2036_, v___y_2037_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2040_, lean_object* v_constName_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3(v_00_u03b1_2040_, v_constName_2041_, v___y_2042_, v___y_2043_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4(lean_object* v_00_u03b1_2046_, lean_object* v_ref_2047_, lean_object* v_constName_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v___x_2052_; 
v___x_2052_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___redArg(v_ref_2047_, v_constName_2048_, v___y_2049_, v___y_2050_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2053_, lean_object* v_ref_2054_, lean_object* v_constName_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4(v_00_u03b1_2053_, v_ref_2054_, v_constName_2055_, v___y_2056_, v___y_2057_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
lean_dec(v_ref_2054_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7(lean_object* v_00_u03b1_2060_, lean_object* v_ref_2061_, lean_object* v_msg_2062_, lean_object* v_declHint_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v___x_2067_; 
v___x_2067_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___redArg(v_ref_2061_, v_msg_2062_, v_declHint_2063_, v___y_2064_, v___y_2065_);
return v___x_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b1_2068_, lean_object* v_ref_2069_, lean_object* v_msg_2070_, lean_object* v_declHint_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7(v_00_u03b1_2068_, v_ref_2069_, v_msg_2070_, v_declHint_2071_, v___y_2072_, v___y_2073_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
lean_dec(v_ref_2069_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(lean_object* v_msg_2076_, lean_object* v_declHint_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_2076_, v_declHint_2077_, v___y_2079_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_2082_, lean_object* v_declHint_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(v_msg_2082_, v_declHint_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9(lean_object* v_00_u03b1_2088_, lean_object* v_ref_2089_, lean_object* v_msg_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_2089_, v_msg_2090_, v___y_2091_, v___y_2092_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9___boxed(lean_object* v_00_u03b1_2095_, lean_object* v_ref_2096_, lean_object* v_msg_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
lean_object* v_res_2101_; 
v_res_2101_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__2_spec__3_spec__4_spec__7_spec__9(v_00_u03b1_2095_, v_ref_2096_, v_msg_2097_, v___y_2098_, v___y_2099_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v_ref_2096_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr(uint8_t v_status_2102_, lean_object* v_declName_2103_, lean_object* v_stx_2104_, uint8_t v_attrKind_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_){
_start:
{
lean_object* v___x_2109_; 
v___x_2109_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_2104_, v_a_2106_, v_a_2107_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v___x_2110_; 
lean_dec_ref(v___x_2109_);
lean_inc(v_declName_2103_);
v___x_2110_ = l___private_Lean_ReducibilityAttrs_0__Lean_validate(v_declName_2103_, v_status_2102_, v_attrKind_2105_, v_a_2106_, v_a_2107_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2139_; 
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2139_ == 0)
{
lean_object* v_unused_2140_; 
v_unused_2140_ = lean_ctor_get(v___x_2110_, 0);
lean_dec(v_unused_2140_);
v___x_2112_ = v___x_2110_;
v_isShared_2113_ = v_isSharedCheck_2139_;
goto v_resetjp_2111_;
}
else
{
lean_dec(v___x_2110_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2139_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2114_; lean_object* v_currNamespace_2115_; lean_object* v_env_2116_; lean_object* v_nextMacroScope_2117_; lean_object* v_ngen_2118_; lean_object* v_auxDeclNGen_2119_; lean_object* v_traceState_2120_; lean_object* v_messages_2121_; lean_object* v_infoState_2122_; lean_object* v_snapshotTasks_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2137_; 
v___x_2114_ = lean_st_ref_take(v_a_2107_);
v_currNamespace_2115_ = lean_ctor_get(v_a_2106_, 6);
v_env_2116_ = lean_ctor_get(v___x_2114_, 0);
v_nextMacroScope_2117_ = lean_ctor_get(v___x_2114_, 1);
v_ngen_2118_ = lean_ctor_get(v___x_2114_, 2);
v_auxDeclNGen_2119_ = lean_ctor_get(v___x_2114_, 3);
v_traceState_2120_ = lean_ctor_get(v___x_2114_, 4);
v_messages_2121_ = lean_ctor_get(v___x_2114_, 6);
v_infoState_2122_ = lean_ctor_get(v___x_2114_, 7);
v_snapshotTasks_2123_ = lean_ctor_get(v___x_2114_, 8);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2137_ == 0)
{
lean_object* v_unused_2138_; 
v_unused_2138_ = lean_ctor_get(v___x_2114_, 5);
lean_dec(v_unused_2138_);
v___x_2125_ = v___x_2114_;
v_isShared_2126_ = v_isSharedCheck_2137_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_snapshotTasks_2123_);
lean_inc(v_infoState_2122_);
lean_inc(v_messages_2121_);
lean_inc(v_traceState_2120_);
lean_inc(v_auxDeclNGen_2119_);
lean_inc(v_ngen_2118_);
lean_inc(v_nextMacroScope_2117_);
lean_inc(v_env_2116_);
lean_dec(v___x_2114_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2137_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2130_; 
lean_inc(v_currNamespace_2115_);
v___x_2127_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2116_, v_declName_2103_, v_status_2102_, v_attrKind_2105_, v_currNamespace_2115_);
v___x_2128_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__3_spec__5___redArg___closed__2);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 5, v___x_2128_);
lean_ctor_set(v___x_2125_, 0, v___x_2127_);
v___x_2130_ = v___x_2125_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v___x_2127_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v_nextMacroScope_2117_);
lean_ctor_set(v_reuseFailAlloc_2136_, 2, v_ngen_2118_);
lean_ctor_set(v_reuseFailAlloc_2136_, 3, v_auxDeclNGen_2119_);
lean_ctor_set(v_reuseFailAlloc_2136_, 4, v_traceState_2120_);
lean_ctor_set(v_reuseFailAlloc_2136_, 5, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2136_, 6, v_messages_2121_);
lean_ctor_set(v_reuseFailAlloc_2136_, 7, v_infoState_2122_);
lean_ctor_set(v_reuseFailAlloc_2136_, 8, v_snapshotTasks_2123_);
v___x_2130_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2131_ = lean_st_ref_set(v_a_2107_, v___x_2130_);
v___x_2132_ = lean_box(0);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v___x_2132_);
v___x_2134_ = v___x_2112_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
}
else
{
lean_dec(v_declName_2103_);
return v___x_2110_;
}
}
else
{
lean_dec(v_declName_2103_);
return v___x_2109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_addAttr___boxed(lean_object* v_status_2141_, lean_object* v_declName_2142_, lean_object* v_stx_2143_, lean_object* v_attrKind_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_){
_start:
{
uint8_t v_status_boxed_2148_; uint8_t v_attrKind_boxed_2149_; lean_object* v_res_2150_; 
v_status_boxed_2148_ = lean_unbox(v_status_2141_);
v_attrKind_boxed_2149_ = lean_unbox(v_attrKind_2144_);
v_res_2150_ = l___private_Lean_ReducibilityAttrs_0__Lean_addAttr(v_status_boxed_2148_, v_declName_2142_, v_stx_2143_, v_attrKind_boxed_2149_, v_a_2145_, v_a_2146_);
lean_dec(v_a_2146_);
lean_dec_ref(v_a_2145_);
return v_res_2150_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2153_ = l_Lean_stringToMessageData(v___x_2152_);
return v___x_2153_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2155_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2156_ = l_Lean_stringToMessageData(v___x_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(lean_object* v___x_2157_, lean_object* v_decl_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2162_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_);
v___x_2163_ = l_Lean_MessageData_ofName(v___x_2157_);
v___x_2164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2162_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_);
v___x_2166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2164_);
lean_ctor_set(v___x_2166_, 1, v___x_2165_);
v___x_2167_ = l_Lean_throwError___at___00__private_Lean_ReducibilityAttrs_0__Lean_validate_spec__1___redArg(v___x_2166_, v___y_2159_, v___y_2160_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object* v___x_2168_, lean_object* v_decl_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn___lam__0_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(v___x_2168_, v_decl_2169_, v___y_2170_, v___y_2171_);
lean_dec(v___y_2171_);
lean_dec_ref(v___y_2170_);
lean_dec(v_decl_2169_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2238_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__25_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2239_ = l_Lean_registerBuiltinAttribute(v___x_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2____boxed(lean_object* v_a_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_();
return v_res_2241_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2242_ = lean_unsigned_to_nat(4118757939u);
v___x_2243_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2244_ = l_Lean_Name_num___override(v___x_2243_, v___x_2242_);
return v___x_2244_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2246_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2247_ = l_Lean_Name_str___override(v___x_2246_, v___x_2245_);
return v___x_2247_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2249_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2250_ = l_Lean_Name_str___override(v___x_2249_, v___x_2248_);
return v___x_2250_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = lean_unsigned_to_nat(2u);
v___x_2252_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2253_ = l_Lean_Name_num___override(v___x_2252_, v___x_2251_);
return v___x_2253_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2260_ = 0;
v___x_2261_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2262_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2263_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2264_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
lean_ctor_set(v___x_2264_, 1, v___x_2262_);
lean_ctor_set(v___x_2264_, 2, v___x_2261_);
lean_ctor_set_uint8(v___x_2264_, sizeof(void*)*3, v___x_2260_);
return v___x_2264_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___f_2268_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2269_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_));
v___x_2270_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2271_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
lean_ctor_set(v___x_2271_, 1, v___x_2269_);
lean_ctor_set(v___x_2271_, 2, v___f_2268_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_);
v___x_2274_ = l_Lean_registerBuiltinAttribute(v___x_2273_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2____boxed(lean_object* v_a_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_();
return v_res_2276_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2277_ = lean_unsigned_to_nat(2994861043u);
v___x_2278_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2279_ = l_Lean_Name_num___override(v___x_2278_, v___x_2277_);
return v___x_2279_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2281_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2282_ = l_Lean_Name_str___override(v___x_2281_, v___x_2280_);
return v___x_2282_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2283_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2284_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2285_ = l_Lean_Name_str___override(v___x_2284_, v___x_2283_);
return v___x_2285_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2286_ = lean_unsigned_to_nat(2u);
v___x_2287_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2288_ = l_Lean_Name_num___override(v___x_2287_, v___x_2286_);
return v___x_2288_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2295_ = 0;
v___x_2296_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2297_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2298_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2299_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set(v___x_2299_, 1, v___x_2297_);
lean_ctor_set(v___x_2299_, 2, v___x_2296_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*3, v___x_2295_);
return v___x_2299_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___f_2303_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2304_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_));
v___x_2305_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2306_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
lean_ctor_set(v___x_2306_, 1, v___x_2304_);
lean_ctor_set(v___x_2306_, 2, v___f_2303_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_);
v___x_2309_ = l_Lean_registerBuiltinAttribute(v___x_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2____boxed(lean_object* v_a_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_();
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_));
v___x_2344_ = l_Lean_registerBuiltinAttribute(v___x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2____boxed(lean_object* v_a_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_();
return v_res_2346_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2347_ = lean_unsigned_to_nat(2384721930u);
v___x_2348_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__12_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2349_ = l_Lean_Name_num___override(v___x_2348_, v___x_2347_);
return v___x_2349_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2350_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__14_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2351_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__0_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_);
v___x_2352_ = l_Lean_Name_str___override(v___x_2351_, v___x_2350_);
return v___x_2352_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2353_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__16_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_));
v___x_2354_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__1_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_);
v___x_2355_ = l_Lean_Name_str___override(v___x_2354_, v___x_2353_);
return v___x_2355_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2356_ = lean_unsigned_to_nat(2u);
v___x_2357_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__2_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_);
v___x_2358_ = l_Lean_Name_num___override(v___x_2357_, v___x_2356_);
return v___x_2358_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2365_ = 0;
v___x_2366_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__7_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_));
v___x_2367_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__5_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_));
v___x_2368_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__3_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_);
v___x_2369_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2369_, 0, v___x_2368_);
lean_ctor_set(v___x_2369_, 1, v___x_2367_);
lean_ctor_set(v___x_2369_, 2, v___x_2366_);
lean_ctor_set_uint8(v___x_2369_, sizeof(void*)*3, v___x_2365_);
return v___x_2369_;
}
}
static lean_object* _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___f_2373_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__6_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_));
v___x_2374_ = ((lean_object*)(l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__9_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_));
v___x_2375_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__8_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_);
v___x_2376_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
lean_ctor_set(v___x_2376_, 1, v___x_2374_);
lean_ctor_set(v___x_2376_, 2, v___f_2373_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2378_ = lean_obj_once(&l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_, &l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2__once, _init_l___private_Lean_ReducibilityAttrs_0__Lean_initFn___closed__10_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_);
v___x_2379_ = l_Lean_registerBuiltinAttribute(v___x_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2____boxed(lean_object* v_a_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_();
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg___lam__0(lean_object* v_declName_2382_, lean_object* v_toPure_2383_, lean_object* v_____do__lift_2384_){
_start:
{
uint8_t v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = lean_get_reducibility_status(v_____do__lift_2384_, v_declName_2382_);
v___x_2386_ = lean_box(v___x_2385_);
v___x_2387_ = lean_apply_2(v_toPure_2383_, lean_box(0), v___x_2386_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___redArg(lean_object* v_inst_2388_, lean_object* v_inst_2389_, lean_object* v_declName_2390_){
_start:
{
lean_object* v_toApplicative_2391_; lean_object* v_toBind_2392_; lean_object* v_getEnv_2393_; lean_object* v_toPure_2394_; lean_object* v___f_2395_; lean_object* v___x_2396_; 
v_toApplicative_2391_ = lean_ctor_get(v_inst_2388_, 0);
lean_inc_ref(v_toApplicative_2391_);
v_toBind_2392_ = lean_ctor_get(v_inst_2388_, 1);
lean_inc(v_toBind_2392_);
lean_dec_ref(v_inst_2388_);
v_getEnv_2393_ = lean_ctor_get(v_inst_2389_, 0);
lean_inc(v_getEnv_2393_);
lean_dec_ref(v_inst_2389_);
v_toPure_2394_ = lean_ctor_get(v_toApplicative_2391_, 1);
lean_inc(v_toPure_2394_);
lean_dec_ref(v_toApplicative_2391_);
v___f_2395_ = lean_alloc_closure((void*)(l_Lean_getReducibilityStatus___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2395_, 0, v_declName_2390_);
lean_closure_set(v___f_2395_, 1, v_toPure_2394_);
v___x_2396_ = lean_apply_4(v_toBind_2392_, lean_box(0), lean_box(0), v_getEnv_2393_, v___f_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus(lean_object* v_m_2397_, lean_object* v_inst_2398_, lean_object* v_inst_2399_, lean_object* v_declName_2400_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_Lean_getReducibilityStatus___redArg(v_inst_2398_, v_inst_2399_, v_declName_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0(lean_object* v_declName_2402_, uint8_t v_s_2403_, lean_object* v_env_2404_){
_start:
{
uint8_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2405_ = 0;
v___x_2406_ = lean_box(0);
v___x_2407_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2404_, v_declName_2402_, v_s_2403_, v___x_2405_, v___x_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___lam__0___boxed(lean_object* v_declName_2408_, lean_object* v_s_2409_, lean_object* v_env_2410_){
_start:
{
uint8_t v_s_boxed_2411_; lean_object* v_res_2412_; 
v_s_boxed_2411_ = lean_unbox(v_s_2409_);
v_res_2412_ = l_Lean_setReducibilityStatus___redArg___lam__0(v_declName_2408_, v_s_boxed_2411_, v_env_2410_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg(lean_object* v_inst_2413_, lean_object* v_declName_2414_, uint8_t v_s_2415_){
_start:
{
lean_object* v_modifyEnv_2416_; lean_object* v___x_2417_; lean_object* v___f_2418_; lean_object* v___x_2419_; 
v_modifyEnv_2416_ = lean_ctor_get(v_inst_2413_, 1);
lean_inc(v_modifyEnv_2416_);
lean_dec_ref(v_inst_2413_);
v___x_2417_ = lean_box(v_s_2415_);
v___f_2418_ = lean_alloc_closure((void*)(l_Lean_setReducibilityStatus___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2418_, 0, v_declName_2414_);
lean_closure_set(v___f_2418_, 1, v___x_2417_);
v___x_2419_ = lean_apply_1(v_modifyEnv_2416_, v___f_2418_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___redArg___boxed(lean_object* v_inst_2420_, lean_object* v_declName_2421_, lean_object* v_s_2422_){
_start:
{
uint8_t v_s_boxed_2423_; lean_object* v_res_2424_; 
v_s_boxed_2423_ = lean_unbox(v_s_2422_);
v_res_2424_ = l_Lean_setReducibilityStatus___redArg(v_inst_2420_, v_declName_2421_, v_s_boxed_2423_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus(lean_object* v_m_2425_, lean_object* v_inst_2426_, lean_object* v_declName_2427_, uint8_t v_s_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Lean_setReducibilityStatus___redArg(v_inst_2426_, v_declName_2427_, v_s_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___boxed(lean_object* v_m_2430_, lean_object* v_inst_2431_, lean_object* v_declName_2432_, lean_object* v_s_2433_){
_start:
{
uint8_t v_s_boxed_2434_; lean_object* v_res_2435_; 
v_s_boxed_2434_ = lean_unbox(v_s_2433_);
v_res_2435_ = l_Lean_setReducibilityStatus(v_m_2430_, v_inst_2431_, v_declName_2432_, v_s_boxed_2434_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___redArg(lean_object* v_inst_2436_, lean_object* v_declName_2437_){
_start:
{
uint8_t v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = 0;
v___x_2439_ = l_Lean_setReducibilityStatus___redArg(v_inst_2436_, v_declName_2437_, v___x_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute(lean_object* v_m_2440_, lean_object* v_inst_2441_, lean_object* v_declName_2442_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = l_Lean_setReducibleAttribute___redArg(v_inst_2441_, v_declName_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0(lean_object* v_toPure_2444_, uint8_t v_____do__lift_2445_){
_start:
{
if (v_____do__lift_2445_ == 0)
{
uint8_t v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2446_ = 1;
v___x_2447_ = lean_box(v___x_2446_);
v___x_2448_ = lean_apply_2(v_toPure_2444_, lean_box(0), v___x_2447_);
return v___x_2448_;
}
else
{
uint8_t v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2449_ = 0;
v___x_2450_ = lean_box(v___x_2449_);
v___x_2451_ = lean_apply_2(v_toPure_2444_, lean_box(0), v___x_2450_);
return v___x_2451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg___lam__0___boxed(lean_object* v_toPure_2452_, lean_object* v_____do__lift_2453_){
_start:
{
uint8_t v_____do__lift_47__boxed_2454_; lean_object* v_res_2455_; 
v_____do__lift_47__boxed_2454_ = lean_unbox(v_____do__lift_2453_);
v_res_2455_ = l_Lean_isReducible___redArg___lam__0(v_toPure_2452_, v_____do__lift_47__boxed_2454_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___redArg(lean_object* v_inst_2456_, lean_object* v_inst_2457_, lean_object* v_declName_2458_){
_start:
{
lean_object* v_toApplicative_2459_; lean_object* v_toBind_2460_; lean_object* v_toPure_2461_; lean_object* v___x_2462_; lean_object* v___f_2463_; lean_object* v___x_2464_; 
v_toApplicative_2459_ = lean_ctor_get(v_inst_2456_, 0);
v_toBind_2460_ = lean_ctor_get(v_inst_2456_, 1);
lean_inc(v_toBind_2460_);
v_toPure_2461_ = lean_ctor_get(v_toApplicative_2459_, 1);
lean_inc(v_toPure_2461_);
v___x_2462_ = l_Lean_getReducibilityStatus___redArg(v_inst_2456_, v_inst_2457_, v_declName_2458_);
v___f_2463_ = lean_alloc_closure((void*)(l_Lean_isReducible___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2463_, 0, v_toPure_2461_);
v___x_2464_ = lean_apply_4(v_toBind_2460_, lean_box(0), lean_box(0), v___x_2462_, v___f_2463_);
return v___x_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible(lean_object* v_m_2465_, lean_object* v_inst_2466_, lean_object* v_inst_2467_, lean_object* v_declName_2468_){
_start:
{
lean_object* v___x_2469_; 
v___x_2469_ = l_Lean_isReducible___redArg(v_inst_2466_, v_inst_2467_, v_declName_2468_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0(lean_object* v_toPure_2470_, uint8_t v_____do__lift_2471_){
_start:
{
if (v_____do__lift_2471_ == 2)
{
uint8_t v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2472_ = 1;
v___x_2473_ = lean_box(v___x_2472_);
v___x_2474_ = lean_apply_2(v_toPure_2470_, lean_box(0), v___x_2473_);
return v___x_2474_;
}
else
{
uint8_t v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2475_ = 0;
v___x_2476_ = lean_box(v___x_2475_);
v___x_2477_ = lean_apply_2(v_toPure_2470_, lean_box(0), v___x_2476_);
return v___x_2477_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg___lam__0___boxed(lean_object* v_toPure_2478_, lean_object* v_____do__lift_2479_){
_start:
{
uint8_t v_____do__lift_47__boxed_2480_; lean_object* v_res_2481_; 
v_____do__lift_47__boxed_2480_ = lean_unbox(v_____do__lift_2479_);
v_res_2481_ = l_Lean_isIrreducible___redArg___lam__0(v_toPure_2478_, v_____do__lift_47__boxed_2480_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___redArg(lean_object* v_inst_2482_, lean_object* v_inst_2483_, lean_object* v_declName_2484_){
_start:
{
lean_object* v_toApplicative_2485_; lean_object* v_toBind_2486_; lean_object* v_toPure_2487_; lean_object* v___x_2488_; lean_object* v___f_2489_; lean_object* v___x_2490_; 
v_toApplicative_2485_ = lean_ctor_get(v_inst_2482_, 0);
v_toBind_2486_ = lean_ctor_get(v_inst_2482_, 1);
lean_inc(v_toBind_2486_);
v_toPure_2487_ = lean_ctor_get(v_toApplicative_2485_, 1);
lean_inc(v_toPure_2487_);
v___x_2488_ = l_Lean_getReducibilityStatus___redArg(v_inst_2482_, v_inst_2483_, v_declName_2484_);
v___f_2489_ = lean_alloc_closure((void*)(l_Lean_isIrreducible___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2489_, 0, v_toPure_2487_);
v___x_2490_ = lean_apply_4(v_toBind_2486_, lean_box(0), lean_box(0), v___x_2488_, v___f_2489_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible(lean_object* v_m_2491_, lean_object* v_inst_2492_, lean_object* v_inst_2493_, lean_object* v_declName_2494_){
_start:
{
lean_object* v___x_2495_; 
v___x_2495_ = l_Lean_isIrreducible___redArg(v_inst_2492_, v_inst_2493_, v_declName_2494_);
return v___x_2495_;
}
}
LEAN_EXPORT uint8_t l_Lean_isImplicitReducibleCore(lean_object* v_env_2496_, lean_object* v_declName_2497_){
_start:
{
uint8_t v___x_2498_; 
v___x_2498_ = lean_get_reducibility_status(v_env_2496_, v_declName_2497_);
if (v___x_2498_ == 3)
{
uint8_t v___x_2499_; 
v___x_2499_ = 1;
return v___x_2499_;
}
else
{
uint8_t v___x_2500_; 
v___x_2500_ = 0;
return v___x_2500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducibleCore___boxed(lean_object* v_env_2501_, lean_object* v_declName_2502_){
_start:
{
uint8_t v_res_2503_; lean_object* v_r_2504_; 
v_res_2503_ = l_Lean_isImplicitReducibleCore(v_env_2501_, v_declName_2502_);
v_r_2504_ = lean_box(v_res_2503_);
return v_r_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg___lam__0(lean_object* v_declName_2505_, lean_object* v_toPure_2506_, lean_object* v_____do__lift_2507_){
_start:
{
uint8_t v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2508_ = l_Lean_isImplicitReducibleCore(v_____do__lift_2507_, v_declName_2505_);
v___x_2509_ = lean_box(v___x_2508_);
v___x_2510_ = lean_apply_2(v_toPure_2506_, lean_box(0), v___x_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___redArg(lean_object* v_inst_2511_, lean_object* v_inst_2512_, lean_object* v_declName_2513_){
_start:
{
lean_object* v_toApplicative_2514_; lean_object* v_toBind_2515_; lean_object* v_getEnv_2516_; lean_object* v_toPure_2517_; lean_object* v___f_2518_; lean_object* v___x_2519_; 
v_toApplicative_2514_ = lean_ctor_get(v_inst_2511_, 0);
lean_inc_ref(v_toApplicative_2514_);
v_toBind_2515_ = lean_ctor_get(v_inst_2511_, 1);
lean_inc(v_toBind_2515_);
lean_dec_ref(v_inst_2511_);
v_getEnv_2516_ = lean_ctor_get(v_inst_2512_, 0);
lean_inc(v_getEnv_2516_);
lean_dec_ref(v_inst_2512_);
v_toPure_2517_ = lean_ctor_get(v_toApplicative_2514_, 1);
lean_inc(v_toPure_2517_);
lean_dec_ref(v_toApplicative_2514_);
v___f_2518_ = lean_alloc_closure((void*)(l_Lean_isImplicitReducible___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2518_, 0, v_declName_2513_);
lean_closure_set(v___f_2518_, 1, v_toPure_2517_);
v___x_2519_ = lean_apply_4(v_toBind_2515_, lean_box(0), lean_box(0), v_getEnv_2516_, v___f_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible(lean_object* v_m_2520_, lean_object* v_inst_2521_, lean_object* v_inst_2522_, lean_object* v_declName_2523_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lean_isImplicitReducible___redArg(v_inst_2521_, v_inst_2522_, v_declName_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT uint8_t l_Lean_isInstanceReducibleCore(lean_object* v_env_2525_, lean_object* v_declName_2526_){
_start:
{
uint8_t v___x_2527_; 
v___x_2527_ = lean_get_reducibility_status(v_env_2525_, v_declName_2526_);
if (v___x_2527_ == 4)
{
uint8_t v___x_2528_; 
v___x_2528_ = 1;
return v___x_2528_;
}
else
{
uint8_t v___x_2529_; 
v___x_2529_ = 0;
return v___x_2529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducibleCore___boxed(lean_object* v_env_2530_, lean_object* v_declName_2531_){
_start:
{
uint8_t v_res_2532_; lean_object* v_r_2533_; 
v_res_2532_ = l_Lean_isInstanceReducibleCore(v_env_2530_, v_declName_2531_);
v_r_2533_ = lean_box(v_res_2532_);
return v_r_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg___lam__0(lean_object* v_declName_2534_, lean_object* v_toPure_2535_, lean_object* v_____do__lift_2536_){
_start:
{
uint8_t v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2537_ = l_Lean_isInstanceReducibleCore(v_____do__lift_2536_, v_declName_2534_);
v___x_2538_ = lean_box(v___x_2537_);
v___x_2539_ = lean_apply_2(v_toPure_2535_, lean_box(0), v___x_2538_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___redArg(lean_object* v_inst_2540_, lean_object* v_inst_2541_, lean_object* v_declName_2542_){
_start:
{
lean_object* v_toApplicative_2543_; lean_object* v_toBind_2544_; lean_object* v_getEnv_2545_; lean_object* v_toPure_2546_; lean_object* v___f_2547_; lean_object* v___x_2548_; 
v_toApplicative_2543_ = lean_ctor_get(v_inst_2540_, 0);
lean_inc_ref(v_toApplicative_2543_);
v_toBind_2544_ = lean_ctor_get(v_inst_2540_, 1);
lean_inc(v_toBind_2544_);
lean_dec_ref(v_inst_2540_);
v_getEnv_2545_ = lean_ctor_get(v_inst_2541_, 0);
lean_inc(v_getEnv_2545_);
lean_dec_ref(v_inst_2541_);
v_toPure_2546_ = lean_ctor_get(v_toApplicative_2543_, 1);
lean_inc(v_toPure_2546_);
lean_dec_ref(v_toApplicative_2543_);
v___f_2547_ = lean_alloc_closure((void*)(l_Lean_isInstanceReducible___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2547_, 0, v_declName_2542_);
lean_closure_set(v___f_2547_, 1, v_toPure_2546_);
v___x_2548_ = lean_apply_4(v_toBind_2544_, lean_box(0), lean_box(0), v_getEnv_2545_, v___f_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible(lean_object* v_m_2549_, lean_object* v_inst_2550_, lean_object* v_inst_2551_, lean_object* v_declName_2552_){
_start:
{
lean_object* v___x_2553_; 
v___x_2553_ = l_Lean_isInstanceReducible___redArg(v_inst_2550_, v_inst_2551_, v_declName_2552_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___redArg(lean_object* v_inst_2554_, lean_object* v_declName_2555_){
_start:
{
uint8_t v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = 2;
v___x_2557_ = l_Lean_setReducibilityStatus___redArg(v_inst_2554_, v_declName_2555_, v___x_2556_);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute(lean_object* v_m_2558_, lean_object* v_inst_2559_, lean_object* v_declName_2560_){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = l_Lean_setIrreducibleAttribute___redArg(v_inst_2559_, v_declName_2560_);
return v___x_2561_;
}
}
lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ReducibilityAttrs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedReducibilityStatus_default = _init_l_Lean_instInhabitedReducibilityStatus_default();
l_Lean_instInhabitedReducibilityStatus = _init_l_Lean_instInhabitedReducibilityStatus();
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1725919122____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reducibilityCoreExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reducibilityCoreExt);
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reducibilityExtraExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reducibilityExtraExt);
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3530019704____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_allowUnsafeReducibility = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_allowUnsafeReducibility);
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_562565324____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_4118757939____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2994861043____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1100345199____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_2384721930____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ReducibilityAttrs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ReducibilityAttrs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ReducibilityAttrs(builtin);
}
#ifdef __cplusplus
}
#endif
