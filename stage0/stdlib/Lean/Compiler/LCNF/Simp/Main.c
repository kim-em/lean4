// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.Main
// Imports: public import Lean.Compiler.LCNF.Simp.InlineCandidate public import Lean.Compiler.LCNF.Simp.InlineProj public import Lean.Compiler.LCNF.Simp.Used public import Lean.Compiler.LCNF.Simp.DefaultAlt public import Lean.Compiler.LCNF.Simp.SimpValue public import Lean.Compiler.LCNF.Simp.ConstantFold
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isImplicitReducibleCore(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isInstanceReducibleCore(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1(uint8_t);
lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1(uint8_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isFun___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasLocalInst___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetValue_beq(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Alt_getParams(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetDecl_beq(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Cases_extractAlt_x21(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default(uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_inferAppType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_f"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(253, 65, 185, 154, 193, 83, 240, 170)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_jp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 69, 15, 56, 172, 246, 212, 179)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LCNF simp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simp___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0(void){
_start:
{
uint8_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 0;
v___x_2_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object* v_c_3_){
_start:
{
switch(lean_obj_tag(v_c_3_))
{
case 0:
{
lean_object* v_k_4_; 
v_k_4_ = lean_ctor_get(v_c_3_, 1);
v_c_3_ = v_k_4_;
goto _start;
}
case 1:
{
lean_object* v_k_6_; 
v_k_6_ = lean_ctor_get(v_c_3_, 1);
v_c_3_ = v_k_6_;
goto _start;
}
case 4:
{
lean_object* v_cases_8_; lean_object* v_alts_9_; lean_object* v___x_10_; lean_object* v___x_11_; uint8_t v___x_12_; 
v_cases_8_ = lean_ctor_get(v_c_3_, 0);
v_alts_9_ = lean_ctor_get(v_cases_8_, 3);
v___x_10_ = lean_array_get_size(v_alts_9_);
v___x_11_ = lean_unsigned_to_nat(1u);
v___x_12_ = lean_nat_dec_eq(v___x_10_, v___x_11_);
if (v___x_12_ == 0)
{
return v___x_12_;
}
else
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0, &l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0);
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_array_get_borrowed(v___x_13_, v_alts_9_, v___x_14_);
switch(lean_obj_tag(v___x_15_))
{
case 0:
{
lean_object* v_code_16_; 
v_code_16_ = lean_ctor_get(v___x_15_, 2);
v_c_3_ = v_code_16_;
goto _start;
}
case 1:
{
lean_object* v_code_18_; 
v_code_18_ = lean_ctor_get(v___x_15_, 1);
v_c_3_ = v_code_18_;
goto _start;
}
default: 
{
lean_object* v_code_20_; 
v_code_20_ = lean_ctor_get(v___x_15_, 0);
v_c_3_ = v_code_20_;
goto _start;
}
}
}
}
case 5:
{
uint8_t v___x_22_; 
v___x_22_ = 1;
return v___x_22_;
}
default: 
{
uint8_t v___x_23_; 
v___x_23_ = 0;
return v___x_23_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object* v_c_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_24_);
lean_dec_ref(v_c_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object* v_c_27_){
_start:
{
uint8_t v___x_28_; 
v___x_28_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object* v_c_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(v_c_29_);
lean_dec_ref(v_c_29_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object* v_a_32_, lean_object* v_x_33_){
_start:
{
if (lean_obj_tag(v_x_33_) == 0)
{
uint8_t v___x_34_; 
v___x_34_ = 0;
return v___x_34_;
}
else
{
lean_object* v_key_35_; lean_object* v_tail_36_; uint8_t v___x_37_; 
v_key_35_ = lean_ctor_get(v_x_33_, 0);
v_tail_36_ = lean_ctor_get(v_x_33_, 2);
v___x_37_ = l_Lean_instBEqFVarId_beq(v_key_35_, v_a_32_);
if (v___x_37_ == 0)
{
v_x_33_ = v_tail_36_;
goto _start;
}
else
{
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object* v_a_39_, lean_object* v_x_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_39_, v_x_40_);
lean_dec(v_x_40_);
lean_dec(v_a_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_43_, lean_object* v_x_44_){
_start:
{
if (lean_obj_tag(v_x_44_) == 0)
{
return v_x_43_;
}
else
{
lean_object* v_key_45_; lean_object* v_value_46_; lean_object* v_tail_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_70_; 
v_key_45_ = lean_ctor_get(v_x_44_, 0);
v_value_46_ = lean_ctor_get(v_x_44_, 1);
v_tail_47_ = lean_ctor_get(v_x_44_, 2);
v_isSharedCheck_70_ = !lean_is_exclusive(v_x_44_);
if (v_isSharedCheck_70_ == 0)
{
v___x_49_ = v_x_44_;
v_isShared_50_ = v_isSharedCheck_70_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_tail_47_);
lean_inc(v_value_46_);
lean_inc(v_key_45_);
lean_dec(v_x_44_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_70_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; uint64_t v___x_52_; uint64_t v___x_53_; uint64_t v___x_54_; uint64_t v_fold_55_; uint64_t v___x_56_; uint64_t v___x_57_; uint64_t v___x_58_; size_t v___x_59_; size_t v___x_60_; size_t v___x_61_; size_t v___x_62_; size_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_51_ = lean_array_get_size(v_x_43_);
v___x_52_ = l_Lean_instHashableFVarId_hash(v_key_45_);
v___x_53_ = 32ULL;
v___x_54_ = lean_uint64_shift_right(v___x_52_, v___x_53_);
v_fold_55_ = lean_uint64_xor(v___x_52_, v___x_54_);
v___x_56_ = 16ULL;
v___x_57_ = lean_uint64_shift_right(v_fold_55_, v___x_56_);
v___x_58_ = lean_uint64_xor(v_fold_55_, v___x_57_);
v___x_59_ = lean_uint64_to_usize(v___x_58_);
v___x_60_ = lean_usize_of_nat(v___x_51_);
v___x_61_ = ((size_t)1ULL);
v___x_62_ = lean_usize_sub(v___x_60_, v___x_61_);
v___x_63_ = lean_usize_land(v___x_59_, v___x_62_);
v___x_64_ = lean_array_uget_borrowed(v_x_43_, v___x_63_);
lean_inc(v___x_64_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_64_);
v___x_66_ = v___x_49_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_key_45_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_value_46_);
lean_ctor_set(v_reuseFailAlloc_69_, 2, v___x_64_);
v___x_66_ = v_reuseFailAlloc_69_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v___x_67_; 
v___x_67_ = lean_array_uset(v_x_43_, v___x_63_, v___x_66_);
v_x_43_ = v___x_67_;
v_x_44_ = v_tail_47_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object* v_i_71_, lean_object* v_source_72_, lean_object* v_target_73_){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_array_get_size(v_source_72_);
v___x_75_ = lean_nat_dec_lt(v_i_71_, v___x_74_);
if (v___x_75_ == 0)
{
lean_dec_ref(v_source_72_);
lean_dec(v_i_71_);
return v_target_73_;
}
else
{
lean_object* v_es_76_; lean_object* v___x_77_; lean_object* v_source_78_; lean_object* v_target_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_es_76_ = lean_array_fget(v_source_72_, v_i_71_);
v___x_77_ = lean_box(0);
v_source_78_ = lean_array_fset(v_source_72_, v_i_71_, v___x_77_);
v_target_79_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_target_73_, v_es_76_);
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_add(v_i_71_, v___x_80_);
lean_dec(v_i_71_);
v_i_71_ = v___x_81_;
v_source_72_ = v_source_78_;
v_target_73_ = v_target_79_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object* v_data_83_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v_nbuckets_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_84_ = lean_array_get_size(v_data_83_);
v___x_85_ = lean_unsigned_to_nat(2u);
v_nbuckets_86_ = lean_nat_mul(v___x_84_, v___x_85_);
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = lean_box(0);
v___x_89_ = lean_mk_array(v_nbuckets_86_, v___x_88_);
v___x_90_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v___x_87_, v_data_83_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object* v_a_91_, lean_object* v_b_92_, lean_object* v_x_93_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_dec(v_b_92_);
lean_dec(v_a_91_);
return v_x_93_;
}
else
{
lean_object* v_key_94_; lean_object* v_value_95_; lean_object* v_tail_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_108_; 
v_key_94_ = lean_ctor_get(v_x_93_, 0);
v_value_95_ = lean_ctor_get(v_x_93_, 1);
v_tail_96_ = lean_ctor_get(v_x_93_, 2);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_108_ == 0)
{
v___x_98_ = v_x_93_;
v_isShared_99_ = v_isSharedCheck_108_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_tail_96_);
lean_inc(v_value_95_);
lean_inc(v_key_94_);
lean_dec(v_x_93_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_108_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
uint8_t v___x_100_; 
v___x_100_ = l_Lean_instBEqFVarId_beq(v_key_94_, v_a_91_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_101_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_91_, v_b_92_, v_tail_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 2, v___x_101_);
v___x_103_ = v___x_98_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_key_94_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_value_95_);
lean_ctor_set(v_reuseFailAlloc_104_, 2, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
else
{
lean_object* v___x_106_; 
lean_dec(v_value_95_);
lean_dec(v_key_94_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_b_92_);
lean_ctor_set(v___x_98_, 0, v_a_91_);
v___x_106_ = v___x_98_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_91_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_b_92_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_tail_96_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object* v_m_109_, lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
lean_object* v_size_112_; lean_object* v_buckets_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_156_; 
v_size_112_ = lean_ctor_get(v_m_109_, 0);
v_buckets_113_ = lean_ctor_get(v_m_109_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_m_109_);
if (v_isSharedCheck_156_ == 0)
{
v___x_115_ = v_m_109_;
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_buckets_113_);
lean_inc(v_size_112_);
lean_dec(v_m_109_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; uint64_t v___x_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v_fold_121_; uint64_t v___x_122_; uint64_t v___x_123_; uint64_t v___x_124_; size_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; lean_object* v_bkt_130_; uint8_t v___x_131_; 
v___x_117_ = lean_array_get_size(v_buckets_113_);
v___x_118_ = l_Lean_instHashableFVarId_hash(v_a_110_);
v___x_119_ = 32ULL;
v___x_120_ = lean_uint64_shift_right(v___x_118_, v___x_119_);
v_fold_121_ = lean_uint64_xor(v___x_118_, v___x_120_);
v___x_122_ = 16ULL;
v___x_123_ = lean_uint64_shift_right(v_fold_121_, v___x_122_);
v___x_124_ = lean_uint64_xor(v_fold_121_, v___x_123_);
v___x_125_ = lean_uint64_to_usize(v___x_124_);
v___x_126_ = lean_usize_of_nat(v___x_117_);
v___x_127_ = ((size_t)1ULL);
v___x_128_ = lean_usize_sub(v___x_126_, v___x_127_);
v___x_129_ = lean_usize_land(v___x_125_, v___x_128_);
v_bkt_130_ = lean_array_uget_borrowed(v_buckets_113_, v___x_129_);
v___x_131_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_110_, v_bkt_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v_size_x27_133_; lean_object* v___x_134_; lean_object* v_buckets_x27_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_132_ = lean_unsigned_to_nat(1u);
v_size_x27_133_ = lean_nat_add(v_size_112_, v___x_132_);
lean_dec(v_size_112_);
lean_inc(v_bkt_130_);
v___x_134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_134_, 0, v_a_110_);
lean_ctor_set(v___x_134_, 1, v_b_111_);
lean_ctor_set(v___x_134_, 2, v_bkt_130_);
v_buckets_x27_135_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_134_);
v___x_136_ = lean_unsigned_to_nat(4u);
v___x_137_ = lean_nat_mul(v_size_x27_133_, v___x_136_);
v___x_138_ = lean_unsigned_to_nat(3u);
v___x_139_ = lean_nat_div(v___x_137_, v___x_138_);
lean_dec(v___x_137_);
v___x_140_ = lean_array_get_size(v_buckets_x27_135_);
v___x_141_ = lean_nat_dec_le(v___x_139_, v___x_140_);
lean_dec(v___x_139_);
if (v___x_141_ == 0)
{
lean_object* v_val_142_; lean_object* v___x_144_; 
v_val_142_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_buckets_x27_135_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_val_142_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_144_ = v___x_115_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_val_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
else
{
lean_object* v___x_147_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_buckets_x27_135_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_147_ = v___x_115_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_buckets_x27_135_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v___x_149_; lean_object* v_buckets_x27_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
lean_inc(v_bkt_130_);
v___x_149_ = lean_box(0);
v_buckets_x27_150_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_149_);
v___x_151_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_110_, v_b_111_, v_bkt_130_);
v___x_152_ = lean_array_uset(v_buckets_x27_150_, v___x_129_, v___x_151_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v___x_152_);
v___x_154_ = v___x_115_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_size_112_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object* v_as_157_, size_t v_sz_158_, size_t v_i_159_, lean_object* v_b_160_){
_start:
{
uint8_t v___x_162_; 
v___x_162_ = lean_usize_dec_lt(v_i_159_, v_sz_158_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_b_160_);
return v___x_163_;
}
else
{
lean_object* v_snd_164_; lean_object* v_fst_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_199_; 
v_snd_164_ = lean_ctor_get(v_b_160_, 1);
v_fst_165_ = lean_ctor_get(v_b_160_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v_b_160_);
if (v_isSharedCheck_199_ == 0)
{
v___x_167_ = v_b_160_;
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_snd_164_);
lean_inc(v_fst_165_);
lean_dec(v_b_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_array_169_; lean_object* v_start_170_; lean_object* v_stop_171_; uint8_t v___x_172_; 
v_array_169_ = lean_ctor_get(v_snd_164_, 0);
v_start_170_ = lean_ctor_get(v_snd_164_, 1);
v_stop_171_ = lean_ctor_get(v_snd_164_, 2);
v___x_172_ = lean_nat_dec_lt(v_start_170_, v_stop_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_174_; 
if (v_isShared_168_ == 0)
{
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_fst_165_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_snd_164_);
v___x_174_ = v_reuseFailAlloc_176_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; 
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
}
else
{
lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_195_; 
lean_inc(v_stop_171_);
lean_inc(v_start_170_);
lean_inc_ref(v_array_169_);
v_isSharedCheck_195_ = !lean_is_exclusive(v_snd_164_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; lean_object* v_unused_197_; lean_object* v_unused_198_; 
v_unused_196_ = lean_ctor_get(v_snd_164_, 2);
lean_dec(v_unused_196_);
v_unused_197_ = lean_ctor_get(v_snd_164_, 1);
lean_dec(v_unused_197_);
v_unused_198_ = lean_ctor_get(v_snd_164_, 0);
lean_dec(v_unused_198_);
v___x_178_ = v_snd_164_;
v_isShared_179_ = v_isSharedCheck_195_;
goto v_resetjp_177_;
}
else
{
lean_dec(v_snd_164_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_195_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_a_180_; lean_object* v_fvarId_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
v_a_180_ = lean_array_uget_borrowed(v_as_157_, v_i_159_);
v_fvarId_181_ = lean_ctor_get(v_a_180_, 0);
v___x_182_ = lean_array_fget(v_array_169_, v_start_170_);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_start_170_, v___x_183_);
lean_dec(v_start_170_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v___x_184_);
v___x_186_ = v___x_178_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_array_169_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_194_, 2, v_stop_171_);
v___x_186_ = v_reuseFailAlloc_194_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
lean_object* v___x_187_; lean_object* v___x_189_; 
lean_inc(v_fvarId_181_);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_165_, v_fvarId_181_, v___x_182_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_186_);
lean_ctor_set(v___x_167_, 0, v___x_187_);
v___x_189_ = v___x_167_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v___x_186_);
v___x_189_ = v_reuseFailAlloc_193_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
size_t v___x_190_; size_t v___x_191_; 
v___x_190_ = ((size_t)1ULL);
v___x_191_ = lean_usize_add(v_i_159_, v___x_190_);
v_i_159_ = v___x_191_;
v_b_160_ = v___x_189_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object* v_as_200_, lean_object* v_sz_201_, lean_object* v_i_202_, lean_object* v_b_203_, lean_object* v___y_204_){
_start:
{
size_t v_sz_boxed_205_; size_t v_i_boxed_206_; lean_object* v_res_207_; 
v_sz_boxed_205_ = lean_unbox_usize(v_sz_201_);
lean_dec(v_sz_201_);
v_i_boxed_206_ = lean_unbox_usize(v_i_202_);
lean_dec(v_i_202_);
v_res_207_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_200_, v_sz_boxed_205_, v_i_boxed_206_, v_b_203_);
lean_dec_ref(v_as_200_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object* v_a_208_, lean_object* v_b_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_array_215_; lean_object* v_start_216_; lean_object* v_stop_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_267_; 
v_array_215_ = lean_ctor_get(v_a_208_, 0);
v_start_216_ = lean_ctor_get(v_a_208_, 1);
v_stop_217_ = lean_ctor_get(v_a_208_, 2);
v_isSharedCheck_267_ = !lean_is_exclusive(v_a_208_);
if (v_isSharedCheck_267_ == 0)
{
v___x_219_ = v_a_208_;
v_isShared_220_ = v_isSharedCheck_267_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_stop_217_);
lean_inc(v_start_216_);
lean_inc(v_array_215_);
lean_dec(v_a_208_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_267_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
uint8_t v___x_221_; 
v___x_221_ = lean_nat_dec_lt(v_start_216_, v_stop_217_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
lean_del_object(v___x_219_);
lean_dec(v_stop_217_);
lean_dec(v_start_216_);
lean_dec_ref(v_array_215_);
v___x_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_222_, 0, v_b_209_);
return v___x_222_;
}
else
{
lean_object* v_fst_223_; lean_object* v_snd_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_266_; 
v_fst_223_ = lean_ctor_get(v_b_209_, 0);
v_snd_224_ = lean_ctor_get(v_b_209_, 1);
v_isSharedCheck_266_ = !lean_is_exclusive(v_b_209_);
if (v_isSharedCheck_266_ == 0)
{
v___x_226_ = v_b_209_;
v_isShared_227_ = v_isSharedCheck_266_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_snd_224_);
lean_inc(v_fst_223_);
lean_dec(v_b_209_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_266_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v_fvarId_229_; lean_object* v_type_230_; uint8_t v___x_231_; lean_object* v___x_232_; 
v___x_228_ = lean_array_fget_borrowed(v_array_215_, v_start_216_);
v_fvarId_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_fvarId_229_);
v_type_230_ = lean_ctor_get(v___x_228_, 2);
v___x_231_ = 0;
lean_inc_ref(v_type_230_);
v___x_232_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v___x_231_, v_type_230_, v_fst_223_, v___x_221_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; uint8_t v___x_234_; lean_object* v___x_235_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref(v___x_232_);
v___x_234_ = 0;
v___x_235_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_231_, v_a_233_, v___x_234_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v_fvarId_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref(v___x_235_);
v_fvarId_237_ = lean_ctor_get(v_a_236_, 0);
lean_inc(v_fvarId_237_);
v___x_238_ = lean_unsigned_to_nat(1u);
v___x_239_ = lean_nat_add(v_start_216_, v___x_238_);
lean_dec(v_start_216_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_239_);
v___x_241_ = v___x_219_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_array_215_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v___x_239_);
lean_ctor_set(v_reuseFailAlloc_249_, 2, v_stop_217_);
v___x_241_ = v_reuseFailAlloc_249_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v___x_242_ = lean_array_push(v_snd_224_, v_a_236_);
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v_fvarId_237_);
v___x_244_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_223_, v_fvarId_229_, v___x_243_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 1, v___x_242_);
lean_ctor_set(v___x_226_, 0, v___x_244_);
v___x_246_ = v___x_226_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v___x_242_);
v___x_246_ = v_reuseFailAlloc_248_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
v_a_208_ = v___x_241_;
v_b_209_ = v___x_246_;
goto _start;
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec(v_fvarId_229_);
lean_del_object(v___x_226_);
lean_dec(v_snd_224_);
lean_dec(v_fst_223_);
lean_del_object(v___x_219_);
lean_dec(v_stop_217_);
lean_dec(v_start_216_);
lean_dec_ref(v_array_215_);
v_a_250_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_235_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_235_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec(v_fvarId_229_);
lean_del_object(v___x_226_);
lean_dec(v_snd_224_);
lean_dec(v_fst_223_);
lean_del_object(v___x_219_);
lean_dec(v_stop_217_);
lean_dec(v_start_216_);
lean_dec_ref(v_array_215_);
v_a_258_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_232_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_232_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_268_, v_b_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_275_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_box(0);
v___x_277_ = lean_unsigned_to_nat(16u);
v___x_278_ = lean_mk_array(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_subst_281_; 
v___x_279_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0);
v___x_280_ = lean_unsigned_to_nat(0u);
v_subst_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_subst_281_, 0, v___x_280_);
lean_ctor_set(v_subst_281_, 1, v___x_279_);
return v_subst_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object* v_info_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_params_296_; lean_object* v_value_297_; lean_object* v_args_298_; lean_object* v___x_299_; lean_object* v_subst_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; size_t v_sz_304_; size_t v___x_305_; lean_object* v___x_306_; 
v_params_296_ = lean_ctor_get(v_info_287_, 0);
lean_inc_ref(v_params_296_);
v_value_297_ = lean_ctor_get(v_info_287_, 1);
lean_inc_ref(v_value_297_);
v_args_298_ = lean_ctor_get(v_info_287_, 3);
lean_inc_ref(v_args_298_);
lean_dec_ref(v_info_287_);
v___x_299_ = lean_unsigned_to_nat(0u);
v_subst_300_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1);
v___x_301_ = lean_array_get_size(v_args_298_);
v___x_302_ = l_Array_toSubarray___redArg(v_args_298_, v___x_299_, v___x_301_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v_subst_300_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v_sz_304_ = lean_array_size(v_params_296_);
v___x_305_ = ((size_t)0ULL);
v___x_306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_params_296_, v_sz_304_, v___x_305_, v___x_303_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v_fst_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_357_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref(v___x_306_);
v_fst_308_ = lean_ctor_get(v_a_307_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v_a_307_);
if (v_isSharedCheck_357_ == 0)
{
lean_object* v_unused_358_; 
v_unused_358_ = lean_ctor_get(v_a_307_, 1);
lean_dec(v_unused_358_);
v___x_310_ = v_a_307_;
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_fst_308_);
lean_dec(v_a_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v_lower_314_; lean_object* v_upper_315_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_312_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2));
v___x_355_ = lean_array_get_size(v_params_296_);
v___x_356_ = lean_nat_dec_le(v___x_301_, v___x_299_);
if (v___x_356_ == 0)
{
v_lower_314_ = v___x_301_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
else
{
v_lower_314_ = v___x_299_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
v___jp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = l_Array_toSubarray___redArg(v_params_296_, v_lower_314_, v_upper_315_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_312_);
v___x_318_ = v___x_310_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_fst_308_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_312_);
v___x_318_ = v_reuseFailAlloc_354_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; 
v___x_319_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v___x_316_, v___x_318_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v_fst_321_; lean_object* v_snd_322_; uint8_t v___x_323_; uint8_t v___x_324_; lean_object* v___x_325_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref(v___x_319_);
v_fst_321_ = lean_ctor_get(v_a_320_, 0);
lean_inc(v_fst_321_);
v_snd_322_ = lean_ctor_get(v_a_320_, 1);
lean_inc(v_snd_322_);
lean_dec(v_a_320_);
v___x_323_ = 0;
v___x_324_ = 0;
v___x_325_ = l_Lean_Compiler_LCNF_Code_internalize(v___x_323_, v_value_297_, v_fst_321_, v___x_324_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc_n(v_a_326_, 2);
lean_dec_ref(v___x_325_);
v___x_327_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_a_326_, v___x_324_, v_a_289_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec_ref(v___x_327_);
v___x_328_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_329_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_snd_322_, v_a_326_, v___x_328_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
return v___x_329_;
}
else
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
lean_dec(v_a_326_);
lean_dec(v_snd_322_);
v_a_330_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v___x_327_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_327_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v_snd_322_);
v_a_338_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_325_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_325_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_value_297_);
v_a_346_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_319_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_319_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v_value_297_);
lean_dec_ref(v_params_296_);
v_a_359_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_306_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_306_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object* v_info_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_info_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object* v_00_u03b2_377_, lean_object* v_m_378_, lean_object* v_a_379_, lean_object* v_b_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_m_378_, v_a_379_, v_b_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object* v_as_382_, size_t v_sz_383_, size_t v_i_384_, lean_object* v_b_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_382_, v_sz_383_, v_i_384_, v_b_385_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object* v_as_395_, lean_object* v_sz_396_, lean_object* v_i_397_, lean_object* v_b_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
size_t v_sz_boxed_407_; size_t v_i_boxed_408_; lean_object* v_res_409_; 
v_sz_boxed_407_ = lean_unbox_usize(v_sz_396_);
lean_dec(v_sz_396_);
v_i_boxed_408_ = lean_unbox_usize(v_i_397_);
lean_dec(v_i_397_);
v_res_409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(v_as_395_, v_sz_boxed_407_, v_i_boxed_408_, v_b_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec_ref(v_as_395_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object* v_inst_410_, lean_object* v_R_411_, lean_object* v_a_412_, lean_object* v_b_413_, lean_object* v_c_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_412_, v_b_413_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object* v_inst_424_, lean_object* v_R_425_, lean_object* v_a_426_, lean_object* v_b_427_, lean_object* v_c_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(v_inst_424_, v_R_425_, v_a_426_, v_b_427_, v_c_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_437_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object* v_00_u03b2_438_, lean_object* v_a_439_, lean_object* v_x_440_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_439_, v_x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object* v_00_u03b2_442_, lean_object* v_a_443_, lean_object* v_x_444_){
_start:
{
uint8_t v_res_445_; lean_object* v_r_446_; 
v_res_445_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(v_00_u03b2_442_, v_a_443_, v_x_444_);
lean_dec(v_x_444_);
lean_dec(v_a_443_);
v_r_446_ = lean_box(v_res_445_);
return v_r_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object* v_00_u03b2_447_, lean_object* v_data_448_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_data_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object* v_00_u03b2_450_, lean_object* v_a_451_, lean_object* v_b_452_, lean_object* v_x_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_451_, v_b_452_, v_x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_455_, lean_object* v_i_456_, lean_object* v_source_457_, lean_object* v_target_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v_i_456_, v_source_457_, v_target_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_460_, lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_x_461_, v_x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object* v_fvarId_464_, lean_object* v_args_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
uint8_t v___x_474_; lean_object* v___x_475_; 
v___x_474_ = 0;
v___x_475_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_474_, v_fvarId_464_, v_a_470_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_540_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_540_ == 0)
{
v___x_478_ = v___x_475_;
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_475_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
if (lean_obj_tag(v_a_476_) == 1)
{
lean_object* v_val_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_535_; 
lean_del_object(v___x_478_);
v_val_480_ = lean_ctor_get(v_a_476_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v_a_476_);
if (v_isSharedCheck_535_ == 0)
{
v___x_482_ = v_a_476_;
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_val_480_);
lean_dec(v_a_476_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_val_480_, v_a_467_, v_a_469_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_526_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_526_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
uint8_t v___x_489_; 
v___x_489_ = lean_unbox(v_a_485_);
lean_dec(v_a_485_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_492_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v___x_490_ = lean_box(0);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
else
{
lean_object* v___x_494_; 
lean_del_object(v___x_487_);
v___x_494_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_467_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_params_495_; lean_object* v_value_496_; uint8_t v___x_497_; lean_object* v___x_498_; 
lean_dec_ref(v___x_494_);
v_params_495_ = lean_ctor_get(v_val_480_, 2);
lean_inc_ref(v_params_495_);
v_value_496_ = lean_ctor_get(v_val_480_, 4);
lean_inc_ref(v_value_496_);
lean_dec(v_val_480_);
v___x_497_ = 0;
v___x_498_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_495_, v_value_496_, v_args_465_, v___x_497_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_);
lean_dec_ref(v_params_495_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_509_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_509_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v_a_499_);
v___x_504_ = v___x_482_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_508_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_506_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_del_object(v___x_482_);
v_a_510_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_498_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_498_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_518_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_494_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_494_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_527_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_484_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_484_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec(v_a_476_);
lean_dec_ref(v_args_465_);
v___x_536_ = lean_box(0);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_536_);
v___x_538_ = v___x_478_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v_args_465_);
v_a_541_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_475_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_475_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object* v_fvarId_549_, lean_object* v_args_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_549_, v_args_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_a_553_);
lean_dec(v_a_552_);
lean_dec_ref(v_a_551_);
lean_dec(v_fvarId_549_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object* v_declName_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v_env_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_563_ = lean_st_ref_get(v___y_561_);
v_env_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc_ref(v_env_564_);
lean_dec(v___x_563_);
v___x_565_ = l_Lean_isInstanceReducibleCore(v_env_564_, v_declName_560_);
v___x_566_ = lean_box(v___x_565_);
v___x_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object* v_declName_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_569_, v___y_570_);
lean_dec(v___y_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object* v_declName_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_573_, v___y_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object* v_declName_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(v_declName_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(lean_object* v_declName_593_, lean_object* v___y_594_){
_start:
{
lean_object* v___x_596_; lean_object* v_env_597_; uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_596_ = lean_st_ref_get(v___y_594_);
v_env_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc_ref(v_env_597_);
lean_dec(v___x_596_);
v___x_598_ = l_Lean_isImplicitReducibleCore(v_env_597_, v_declName_593_);
v___x_599_ = lean_box(v___x_598_);
v___x_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object* v_declName_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_declName_602_, v___y_603_);
lean_dec(v___y_603_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(lean_object* v_declName_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_declName_606_, v___y_613_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object* v_declName_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(v_declName_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___redArg(size_t v_sz_626_, size_t v_i_627_, lean_object* v_bs_628_){
_start:
{
uint8_t v___x_629_; 
v___x_629_ = lean_usize_dec_lt(v_i_627_, v_sz_626_);
if (v___x_629_ == 0)
{
return v_bs_628_;
}
else
{
lean_object* v_v_630_; lean_object* v_fvarId_631_; lean_object* v___x_632_; lean_object* v_bs_x27_633_; lean_object* v___x_634_; size_t v___x_635_; size_t v___x_636_; lean_object* v___x_637_; 
v_v_630_ = lean_array_uget_borrowed(v_bs_628_, v_i_627_);
v_fvarId_631_ = lean_ctor_get(v_v_630_, 0);
lean_inc(v_fvarId_631_);
v___x_632_ = lean_unsigned_to_nat(0u);
v_bs_x27_633_ = lean_array_uset(v_bs_628_, v_i_627_, v___x_632_);
v___x_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_634_, 0, v_fvarId_631_);
v___x_635_ = ((size_t)1ULL);
v___x_636_ = lean_usize_add(v_i_627_, v___x_635_);
v___x_637_ = lean_array_uset(v_bs_x27_633_, v_i_627_, v___x_634_);
v_i_627_ = v___x_636_;
v_bs_628_ = v___x_637_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___redArg___boxed(lean_object* v_sz_639_, lean_object* v_i_640_, lean_object* v_bs_641_){
_start:
{
size_t v_sz_boxed_642_; size_t v_i_boxed_643_; lean_object* v_res_644_; 
v_sz_boxed_642_ = lean_unbox_usize(v_sz_639_);
lean_dec(v_sz_639_);
v_i_boxed_643_ = lean_unbox_usize(v_i_640_);
lean_dec(v_i_640_);
v_res_644_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___redArg(v_sz_boxed_642_, v_i_boxed_643_, v_bs_641_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object* v_letDecl_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_config_657_; uint8_t v_etaPoly_658_; 
v_config_657_ = lean_ctor_get(v_a_649_, 1);
v_etaPoly_658_ = lean_ctor_get_uint8(v_config_657_, 0);
if (v_etaPoly_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; 
lean_dec_ref(v_letDecl_648_);
v___x_659_ = lean_box(0);
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
else
{
lean_object* v_value_661_; 
v_value_661_ = lean_ctor_get(v_letDecl_648_, 3);
lean_inc(v_value_661_);
if (lean_obj_tag(v_value_661_) == 3)
{
lean_object* v_fvarId_662_; lean_object* v_type_663_; lean_object* v_declName_664_; lean_object* v_us_665_; lean_object* v_args_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_840_; 
v_fvarId_662_ = lean_ctor_get(v_letDecl_648_, 0);
v_type_663_ = lean_ctor_get(v_letDecl_648_, 2);
v_declName_664_ = lean_ctor_get(v_value_661_, 0);
v_us_665_ = lean_ctor_get(v_value_661_, 1);
v_args_666_ = lean_ctor_get(v_value_661_, 2);
v_isSharedCheck_840_ = !lean_is_exclusive(v_value_661_);
if (v_isSharedCheck_840_ == 0)
{
v___x_668_ = v_value_661_;
v_isShared_669_ = v_isSharedCheck_840_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_args_666_);
lean_inc(v_us_665_);
lean_inc(v_declName_664_);
lean_dec(v_value_661_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_840_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v_env_671_; uint8_t v___x_672_; lean_object* v___x_673_; 
v___x_670_ = lean_st_ref_get(v_a_655_);
v_env_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc_ref(v_env_671_);
lean_dec(v___x_670_);
v___x_672_ = 0;
lean_inc(v_declName_664_);
v___x_673_ = l_Lean_Environment_find_x3f(v_env_671_, v_declName_664_, v___x_672_);
if (lean_obj_tag(v___x_673_) == 1)
{
lean_object* v_val_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_val_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_val_674_);
lean_dec_ref(v___x_673_);
v___x_675_ = l_Lean_ConstantInfo_type(v_val_674_);
lean_dec(v_val_674_);
v___x_676_ = l_Lean_Compiler_LCNF_hasLocalInst___redArg(v___x_675_, v_a_655_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_829_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_829_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_829_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_829_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
uint8_t v___x_681_; 
v___x_681_ = lean_unbox(v_a_677_);
lean_dec(v_a_677_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_684_; 
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
v___x_682_ = lean_box(0);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_682_);
v___x_684_ = v___x_679_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
else
{
lean_object* v___x_686_; lean_object* v_a_687_; lean_object* v_val_688_; lean_object* v___x_689_; lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_828_; 
lean_del_object(v___x_679_);
lean_inc_n(v_declName_664_, 2);
v___x_686_ = l_Lean_isInstanceReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_664_, v_a_655_);
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref(v___x_686_);
v_val_688_ = lean_ctor_get(v_a_687_, 0);
lean_inc(v_val_688_);
lean_dec(v_a_687_);
v___x_689_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_declName_664_, v_a_655_);
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_828_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_828_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_828_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
uint8_t v___x_699_; 
v___x_699_ = lean_unbox(v_val_688_);
lean_dec(v_val_688_);
if (v___x_699_ == 0)
{
lean_object* v_val_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_827_; 
v_val_700_ = lean_ctor_get(v_a_690_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v_a_690_);
if (v_isSharedCheck_827_ == 0)
{
v___x_702_ = v_a_690_;
v_isShared_703_ = v_isSharedCheck_827_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_val_700_);
lean_dec(v_a_690_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_827_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
uint8_t v___x_704_; 
v___x_704_ = lean_unbox(v_val_700_);
lean_dec(v_val_700_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; 
lean_del_object(v___x_692_);
v___x_705_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_652_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_818_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_818_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_818_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_818_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
uint8_t v___x_710_; lean_object* v___x_711_; 
v___x_710_ = lean_unbox(v_a_706_);
lean_inc(v_declName_664_);
v___x_711_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_664_, v___x_710_, v_a_654_, v_a_655_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_809_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_809_ == 0)
{
v___x_714_ = v___x_711_;
v_isShared_715_ = v_isSharedCheck_809_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_711_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_809_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
if (lean_obj_tag(v_a_712_) == 1)
{
lean_object* v_val_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_808_; 
v_val_721_ = lean_ctor_get(v_a_712_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v_a_712_);
if (v_isSharedCheck_808_ == 0)
{
v___x_723_ = v_a_712_;
v_isShared_724_ = v_isSharedCheck_808_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_val_721_);
lean_dec(v_a_712_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_808_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
uint8_t v___x_725_; uint8_t v___x_726_; 
v___x_725_ = lean_unbox(v_a_706_);
lean_dec(v_a_706_);
v___x_726_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_725_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
lean_del_object(v___x_714_);
v___x_727_ = lean_array_get_size(v_args_666_);
v___x_728_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_721_);
lean_dec(v_val_721_);
v___x_729_ = lean_nat_dec_lt(v___x_727_, v___x_728_);
lean_dec(v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_732_; 
lean_del_object(v___x_723_);
lean_del_object(v___x_702_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
v___x_730_ = lean_box(0);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_730_);
v___x_732_ = v___x_708_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
else
{
lean_object* v___x_734_; 
lean_del_object(v___x_708_);
lean_inc_ref(v_type_663_);
v___x_734_ = l_Lean_Compiler_LCNF_mkNewParams(v___x_726_, v_type_663_, v_a_652_, v_a_653_, v_a_654_, v_a_655_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; size_t v_sz_736_; size_t v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc_n(v_a_735_, 2);
lean_dec_ref(v___x_734_);
v_sz_736_ = lean_array_size(v_a_735_);
v___x_737_ = ((size_t)0ULL);
v___x_738_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___redArg(v_sz_736_, v___x_737_, v_a_735_);
v___x_739_ = l_Array_append___redArg(v_args_666_, v___x_738_);
lean_dec_ref(v___x_738_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 2, v___x_739_);
v___x_741_ = v___x_668_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_declName_664_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_us_665_);
lean_ctor_set(v_reuseFailAlloc_799_, 2, v___x_739_);
v___x_741_ = v_reuseFailAlloc_799_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_743_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_726_, v___x_741_, v___x_742_, v_a_652_, v_a_653_, v_a_654_, v_a_655_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v_fvarId_745_; lean_object* v___x_747_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref(v___x_743_);
v_fvarId_745_ = lean_ctor_get(v_a_744_, 0);
lean_inc(v_fvarId_745_);
if (v_isShared_703_ == 0)
{
lean_ctor_set_tag(v___x_702_, 5);
lean_ctor_set(v___x_702_, 0, v_fvarId_745_);
v___x_747_ = v___x_702_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_fvarId_745_);
v___x_747_ = v_reuseFailAlloc_790_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v_a_744_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_750_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_a_735_, v___x_748_, v___x_749_, v_a_652_, v_a_653_, v_a_654_, v_a_655_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v_fvarId_752_; lean_object* v___x_753_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref(v___x_750_);
v_fvarId_752_ = lean_ctor_get(v_a_751_, 0);
lean_inc(v_fvarId_752_);
lean_inc(v_fvarId_662_);
v___x_753_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_662_, v_fvarId_752_, v_a_650_, v_a_652_, v_a_653_, v_a_654_, v_a_655_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v___x_754_; 
lean_dec_ref(v___x_753_);
v___x_754_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_letDecl_648_, v_a_650_, v_a_653_);
lean_dec_ref(v_letDecl_648_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_764_; 
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_764_ == 0)
{
lean_object* v_unused_765_; 
v_unused_765_ = lean_ctor_get(v___x_754_, 0);
lean_dec(v_unused_765_);
v___x_756_ = v___x_754_;
v_isShared_757_ = v_isSharedCheck_764_;
goto v_resetjp_755_;
}
else
{
lean_dec(v___x_754_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_764_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 0, v_a_751_);
v___x_759_ = v___x_723_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_751_);
v___x_759_ = v_reuseFailAlloc_763_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_761_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_759_);
v___x_761_ = v___x_756_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_dec(v_a_751_);
lean_del_object(v___x_723_);
v_a_766_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_754_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_754_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec(v_a_751_);
lean_del_object(v___x_723_);
lean_dec_ref(v_letDecl_648_);
v_a_774_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_753_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_753_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_del_object(v___x_723_);
lean_dec_ref(v_letDecl_648_);
v_a_782_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_750_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_750_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_a_735_);
lean_del_object(v___x_723_);
lean_del_object(v___x_702_);
lean_dec_ref(v_letDecl_648_);
v_a_791_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_743_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_743_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_del_object(v___x_723_);
lean_del_object(v___x_702_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
v_a_800_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_734_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_734_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
else
{
lean_del_object(v___x_723_);
lean_dec(v_val_721_);
lean_del_object(v___x_708_);
lean_del_object(v___x_702_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
goto v___jp_716_;
}
}
}
else
{
lean_dec(v_a_712_);
lean_del_object(v___x_708_);
lean_dec(v_a_706_);
lean_del_object(v___x_702_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
goto v___jp_716_;
}
v___jp_716_:
{
lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_717_ = lean_box(0);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_717_);
v___x_719_ = v___x_714_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_del_object(v___x_708_);
lean_dec(v_a_706_);
lean_del_object(v___x_702_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
v_a_810_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_711_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_711_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_del_object(v___x_702_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
v_a_819_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_705_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_705_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
else
{
lean_del_object(v___x_702_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
goto v___jp_694_;
}
}
}
else
{
lean_dec(v_a_690_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
goto v___jp_694_;
}
v___jp_694_:
{
lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_695_ = lean_box(0);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_695_);
v___x_697_ = v___x_692_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
v_a_830_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_676_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_676_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec(v___x_673_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_666_);
lean_dec(v_us_665_);
lean_dec(v_declName_664_);
lean_dec_ref(v_letDecl_648_);
v___x_838_ = lean_box(0);
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
}
}
else
{
lean_object* v___x_841_; lean_object* v___x_842_; 
lean_dec(v_value_661_);
lean_dec_ref(v_letDecl_648_);
v___x_841_ = lean_box(0);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object* v_letDecl_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v_letDecl_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
lean_dec_ref(v_a_846_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2(uint8_t v___x_853_, size_t v_sz_854_, size_t v_i_855_, lean_object* v_bs_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___redArg(v_sz_854_, v_i_855_, v_bs_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2___boxed(lean_object* v___x_858_, lean_object* v_sz_859_, lean_object* v_i_860_, lean_object* v_bs_861_){
_start:
{
uint8_t v___x_26972__boxed_862_; size_t v_sz_boxed_863_; size_t v_i_boxed_864_; lean_object* v_res_865_; 
v___x_26972__boxed_862_ = lean_unbox(v___x_858_);
v_sz_boxed_863_ = lean_unbox_usize(v_sz_859_);
lean_dec(v_sz_859_);
v_i_boxed_864_ = lean_unbox_usize(v_i_860_);
lean_dec(v_i_860_);
v_res_865_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__2(v___x_26972__boxed_862_, v_sz_boxed_863_, v_i_boxed_864_, v_bs_861_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object* v_c_866_, lean_object* v_fvarId_867_, lean_object* v_a_868_){
_start:
{
if (lean_obj_tag(v_c_866_) == 5)
{
lean_object* v_fvarId_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_892_; 
v_fvarId_870_ = lean_ctor_get(v_c_866_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v_c_866_);
if (v_isSharedCheck_892_ == 0)
{
v___x_872_ = v_c_866_;
v_isShared_873_ = v_isSharedCheck_892_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_fvarId_870_);
lean_dec(v_c_866_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_892_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_874_; lean_object* v_subst_875_; uint8_t v___x_876_; lean_object* v___x_877_; 
v___x_874_ = lean_st_ref_get(v_a_868_);
v_subst_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc_ref(v_subst_875_);
lean_dec(v___x_874_);
v___x_876_ = 0;
v___x_877_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_875_, v_fvarId_870_, v___x_876_);
lean_dec_ref(v_subst_875_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_fvarId_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_887_; 
lean_del_object(v___x_872_);
v_fvarId_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_887_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_887_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_fvarId_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_887_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
uint8_t v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_882_ = l_Lean_instBEqFVarId_beq(v_fvarId_878_, v_fvarId_867_);
lean_dec(v_fvarId_878_);
v___x_883_ = lean_box(v___x_882_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_883_);
v___x_885_ = v___x_880_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
else
{
lean_object* v___x_888_; lean_object* v___x_890_; 
v___x_888_ = lean_box(v___x_876_);
if (v_isShared_873_ == 0)
{
lean_ctor_set_tag(v___x_872_, 0);
lean_ctor_set(v___x_872_, 0, v___x_888_);
v___x_890_ = v___x_872_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
else
{
uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec_ref(v_c_866_);
v___x_893_ = 0;
v___x_894_ = lean_box(v___x_893_);
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object* v_c_896_, lean_object* v_fvarId_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_896_, v_fvarId_897_, v_a_898_);
lean_dec(v_a_898_);
lean_dec(v_fvarId_897_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object* v_c_901_, lean_object* v_fvarId_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_901_, v_fvarId_902_, v_a_904_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object* v_c_912_, lean_object* v_fvarId_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_Compiler_LCNF_Simp_isReturnOf(v_c_912_, v_fvarId_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec_ref(v_a_916_);
lean_dec(v_a_915_);
lean_dec_ref(v_a_914_);
lean_dec(v_fvarId_913_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object* v_value_923_){
_start:
{
if (lean_obj_tag(v_value_923_) == 4)
{
lean_object* v_fvarId_928_; lean_object* v_args_929_; lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_fvarId_928_ = lean_ctor_get(v_value_923_, 0);
v_args_929_ = lean_ctor_get(v_value_923_, 1);
v___x_930_ = lean_array_get_size(v_args_929_);
v___x_931_ = lean_unsigned_to_nat(0u);
v___x_932_ = lean_nat_dec_eq(v___x_930_, v___x_931_);
if (v___x_932_ == 0)
{
goto v___jp_925_;
}
else
{
lean_object* v___x_933_; lean_object* v___x_934_; 
lean_inc(v_fvarId_928_);
v___x_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_933_, 0, v_fvarId_928_);
v___x_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
}
else
{
goto v___jp_925_;
}
v___jp_925_:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_926_ = lean_box(0);
v___x_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
return v___x_927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object* v_value_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_935_);
lean_dec(v_value_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object* v_value_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_938_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object* v_value_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f(v_value_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_value_948_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object* v_a_958_, lean_object* v___x_959_, lean_object* v_fvarId_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_fvarId_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_fvarId_966_ = lean_ctor_get(v_a_958_, 0);
v___x_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_967_, 0, v_fvarId_960_);
v___x_968_ = lean_mk_empty_array_with_capacity(v___x_959_);
v___x_969_ = lean_array_push(v___x_968_, v___x_967_);
lean_inc(v_fvarId_966_);
v___x_970_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_970_, 0, v_fvarId_966_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object* v_a_972_, lean_object* v___x_973_, lean_object* v_fvarId_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(v_a_972_, v___x_973_, v_fvarId_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___x_973_);
lean_dec_ref(v_a_972_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t v_pu_981_, uint8_t v_t_982_, lean_object* v_args_983_, lean_object* v___y_984_){
_start:
{
lean_object* v___x_986_; lean_object* v_subst_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_986_ = lean_st_ref_get(v___y_984_);
v_subst_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc_ref(v_subst_987_);
lean_dec(v___x_986_);
v___x_988_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_981_, v_subst_987_, v_args_983_, v_t_982_);
lean_dec_ref(v_subst_987_);
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object* v_pu_990_, lean_object* v_t_991_, lean_object* v_args_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
uint8_t v_pu_boxed_995_; uint8_t v_t_boxed_996_; lean_object* v_res_997_; 
v_pu_boxed_995_ = lean_unbox(v_pu_990_);
v_t_boxed_996_ = lean_unbox(v_t_991_);
v_res_997_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_boxed_995_, v_t_boxed_996_, v_args_992_, v___y_993_);
lean_dec(v___y_993_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object* v_as_998_, size_t v_i_999_, size_t v_stop_1000_, lean_object* v_b_1001_, lean_object* v___y_1002_){
_start:
{
uint8_t v___x_1004_; 
v___x_1004_ = lean_usize_dec_eq(v_i_999_, v_stop_1000_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_array_uget_borrowed(v_as_998_, v_i_999_);
lean_inc(v___x_1005_);
v___x_1006_ = l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(v___x_1005_, v___y_1002_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; size_t v___x_1008_; size_t v___x_1009_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref(v___x_1006_);
v___x_1008_ = ((size_t)1ULL);
v___x_1009_ = lean_usize_add(v_i_999_, v___x_1008_);
v_i_999_ = v___x_1009_;
v_b_1001_ = v_a_1007_;
goto _start;
}
else
{
return v___x_1006_;
}
}
else
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v_b_1001_);
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object* v_as_1012_, lean_object* v_i_1013_, lean_object* v_stop_1014_, lean_object* v_b_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
size_t v_i_boxed_1018_; size_t v_stop_boxed_1019_; lean_object* v_res_1020_; 
v_i_boxed_1018_ = lean_unbox_usize(v_i_1013_);
lean_dec(v_i_1013_);
v_stop_boxed_1019_ = lean_unbox_usize(v_stop_1014_);
lean_dec(v_stop_1014_);
v_res_1020_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_1012_, v_i_boxed_1018_, v_stop_boxed_1019_, v_b_1015_, v___y_1016_);
lean_dec(v___y_1016_);
lean_dec_ref(v_as_1012_);
return v_res_1020_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object* v_as_1021_, size_t v_i_1022_, size_t v_stop_1023_){
_start:
{
uint8_t v___x_1024_; 
v___x_1024_ = lean_usize_dec_eq(v_i_1022_, v_stop_1023_);
if (v___x_1024_ == 0)
{
uint8_t v___x_1025_; lean_object* v___y_1027_; lean_object* v___x_1031_; 
v___x_1025_ = 1;
v___x_1031_ = lean_array_uget_borrowed(v_as_1021_, v_i_1022_);
switch(lean_obj_tag(v___x_1031_))
{
case 0:
{
lean_object* v_code_1032_; 
v_code_1032_ = lean_ctor_get(v___x_1031_, 2);
v___y_1027_ = v_code_1032_;
goto v___jp_1026_;
}
case 1:
{
lean_object* v_code_1033_; 
v_code_1033_ = lean_ctor_get(v___x_1031_, 1);
v___y_1027_ = v_code_1033_;
goto v___jp_1026_;
}
default: 
{
lean_object* v_code_1034_; 
v_code_1034_ = lean_ctor_get(v___x_1031_, 0);
v___y_1027_ = v_code_1034_;
goto v___jp_1026_;
}
}
v___jp_1026_:
{
if (lean_obj_tag(v___y_1027_) == 6)
{
if (v___x_1024_ == 0)
{
size_t v___x_1028_; size_t v___x_1029_; 
v___x_1028_ = ((size_t)1ULL);
v___x_1029_ = lean_usize_add(v_i_1022_, v___x_1028_);
v_i_1022_ = v___x_1029_;
goto _start;
}
else
{
return v___x_1025_;
}
}
else
{
return v___x_1025_;
}
}
}
else
{
uint8_t v___x_1035_; 
v___x_1035_ = 0;
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object* v_as_1036_, lean_object* v_i_1037_, lean_object* v_stop_1038_){
_start:
{
size_t v_i_boxed_1039_; size_t v_stop_boxed_1040_; uint8_t v_res_1041_; lean_object* v_r_1042_; 
v_i_boxed_1039_ = lean_unbox_usize(v_i_1037_);
lean_dec(v_i_1037_);
v_stop_boxed_1040_ = lean_unbox_usize(v_stop_1038_);
lean_dec(v_stop_1038_);
v_res_1041_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v_as_1036_, v_i_boxed_1039_, v_stop_boxed_1040_);
lean_dec_ref(v_as_1036_);
v_r_1042_ = lean_box(v_res_1041_);
return v_r_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t v_pu_1043_, uint8_t v_t_1044_, lean_object* v_i_1045_, lean_object* v_as_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v___x_1050_; uint8_t v___x_1051_; 
v___x_1050_ = lean_array_get_size(v_as_1046_);
v___x_1051_ = lean_nat_dec_lt(v_i_1045_, v___x_1050_);
if (v___x_1051_ == 0)
{
lean_object* v___x_1052_; 
lean_dec(v_i_1045_);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v_as_1046_);
return v___x_1052_;
}
else
{
lean_object* v_a_1053_; lean_object* v_type_1054_; lean_object* v___x_1055_; lean_object* v_subst_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v_a_1053_ = lean_array_fget_borrowed(v_as_1046_, v_i_1045_);
v_type_1054_ = lean_ctor_get(v_a_1053_, 2);
v___x_1055_ = lean_st_ref_get(v___y_1047_);
v_subst_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc_ref(v_subst_1056_);
lean_dec(v___x_1055_);
lean_inc_ref(v_type_1054_);
v___x_1057_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1043_, v_subst_1056_, v_t_1044_, v_type_1054_);
lean_dec_ref(v_subst_1056_);
lean_inc(v_a_1053_);
v___x_1058_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_1043_, v_a_1053_, v___x_1057_, v___y_1048_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; size_t v___x_1060_; size_t v___x_1061_; uint8_t v___x_1062_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
lean_dec_ref(v___x_1058_);
v___x_1060_ = lean_ptr_addr(v_a_1053_);
v___x_1061_ = lean_ptr_addr(v_a_1059_);
v___x_1062_ = lean_usize_dec_eq(v___x_1060_, v___x_1061_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1063_ = lean_unsigned_to_nat(1u);
v___x_1064_ = lean_nat_add(v_i_1045_, v___x_1063_);
v___x_1065_ = lean_array_fset(v_as_1046_, v_i_1045_, v_a_1059_);
lean_dec(v_i_1045_);
v_i_1045_ = v___x_1064_;
v_as_1046_ = v___x_1065_;
goto _start;
}
else
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_dec(v_a_1059_);
v___x_1067_ = lean_unsigned_to_nat(1u);
v___x_1068_ = lean_nat_add(v_i_1045_, v___x_1067_);
lean_dec(v_i_1045_);
v_i_1045_ = v___x_1068_;
goto _start;
}
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
lean_dec_ref(v_as_1046_);
lean_dec(v_i_1045_);
v_a_1070_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1072_ = v___x_1058_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_a_1070_);
lean_dec(v___x_1058_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1075_; 
if (v_isShared_1073_ == 0)
{
v___x_1075_ = v___x_1072_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_a_1070_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object* v_pu_1078_, lean_object* v_t_1079_, lean_object* v_i_1080_, lean_object* v_as_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
uint8_t v_pu_boxed_1085_; uint8_t v_t_boxed_1086_; lean_object* v_res_1087_; 
v_pu_boxed_1085_ = lean_unbox(v_pu_1078_);
v_t_boxed_1086_ = lean_unbox(v_t_1079_);
v_res_1087_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_boxed_1085_, v_t_boxed_1086_, v_i_1080_, v_as_1081_, v___y_1082_, v___y_1083_);
lean_dec(v___y_1083_);
lean_dec(v___y_1082_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t v_pu_1088_, uint8_t v_t_1089_, lean_object* v_ps_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = lean_unsigned_to_nat(0u);
v___x_1100_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_1088_, v_t_1089_, v___x_1099_, v_ps_1090_, v___y_1092_, v___y_1095_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object* v_pu_1101_, lean_object* v_t_1102_, lean_object* v_ps_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
uint8_t v_pu_boxed_1112_; uint8_t v_t_boxed_1113_; lean_object* v_res_1114_; 
v_pu_boxed_1112_ = lean_unbox(v_pu_1101_);
v_t_boxed_1113_ = lean_unbox(v_t_1102_);
v_res_1114_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v_pu_boxed_1112_, v_t_boxed_1113_, v_ps_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t v_pu_1115_, uint8_t v_t_1116_, lean_object* v_decl_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_type_1121_; lean_object* v_value_1122_; lean_object* v___x_1123_; lean_object* v_subst_1124_; lean_object* v___x_1125_; lean_object* v_subst_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_type_1121_ = lean_ctor_get(v_decl_1117_, 2);
v_value_1122_ = lean_ctor_get(v_decl_1117_, 3);
v___x_1123_ = lean_st_ref_get(v___y_1118_);
v_subst_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc_ref(v_subst_1124_);
lean_dec(v___x_1123_);
v___x_1125_ = lean_st_ref_get(v___y_1118_);
v_subst_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc_ref(v_subst_1126_);
lean_dec(v___x_1125_);
lean_inc_ref(v_type_1121_);
v___x_1127_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1115_, v_subst_1124_, v_t_1116_, v_type_1121_);
lean_dec_ref(v_subst_1124_);
lean_inc(v_value_1122_);
v___x_1128_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_1115_, v_subst_1126_, v_value_1122_, v_t_1116_);
lean_dec_ref(v_subst_1126_);
v___x_1129_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_1115_, v_decl_1117_, v___x_1127_, v___x_1128_, v___y_1119_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object* v_pu_1130_, lean_object* v_t_1131_, lean_object* v_decl_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
uint8_t v_pu_boxed_1136_; uint8_t v_t_boxed_1137_; lean_object* v_res_1138_; 
v_pu_boxed_1136_ = lean_unbox(v_pu_1130_);
v_t_boxed_1137_ = lean_unbox(v_t_1131_);
v_res_1138_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_boxed_1136_, v_t_boxed_1137_, v_decl_1132_, v___y_1133_, v___y_1134_);
lean_dec(v___y_1134_);
lean_dec(v___y_1133_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object* v___y_1139_, lean_object* v___f_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v_fvarId_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v___x_1149_; 
lean_inc(v_fvarId_1143_);
v___x_1149_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_1143_, v___y_1139_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v___x_1150_; 
lean_dec_ref(v___x_1149_);
lean_inc(v___y_1147_);
lean_inc_ref(v___y_1146_);
lean_inc(v___y_1145_);
lean_inc_ref(v___y_1144_);
lean_inc_ref(v___y_1142_);
lean_inc(v___y_1139_);
lean_inc_ref(v___y_1141_);
v___x_1150_ = lean_apply_9(v___f_1140_, v_fvarId_1143_, v___y_1141_, v___y_1139_, v___y_1142_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, lean_box(0));
return v___x_1150_;
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_fvarId_1143_);
lean_dec_ref(v___f_1140_);
v_a_1151_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1149_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1149_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object* v___y_1159_, lean_object* v___f_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v_fvarId_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(v___y_1159_, v___f_1160_, v___y_1161_, v___y_1162_, v_fvarId_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec_ref(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1159_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object* v_x_1170_, lean_object* v_x_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_){
_start:
{
lean_object* v_ks_1174_; lean_object* v_vs_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1199_; 
v_ks_1174_ = lean_ctor_get(v_x_1170_, 0);
v_vs_1175_ = lean_ctor_get(v_x_1170_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_x_1170_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1177_ = v_x_1170_;
v_isShared_1178_ = v_isSharedCheck_1199_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_vs_1175_);
lean_inc(v_ks_1174_);
lean_dec(v_x_1170_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1199_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1179_ = lean_array_get_size(v_ks_1174_);
v___x_1180_ = lean_nat_dec_lt(v_x_1171_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
lean_dec(v_x_1171_);
v___x_1181_ = lean_array_push(v_ks_1174_, v_x_1172_);
v___x_1182_ = lean_array_push(v_vs_1175_, v_x_1173_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 1, v___x_1182_);
lean_ctor_set(v___x_1177_, 0, v___x_1181_);
v___x_1184_ = v___x_1177_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1181_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
else
{
lean_object* v_k_x27_1186_; uint8_t v___x_1187_; 
v_k_x27_1186_ = lean_array_fget_borrowed(v_ks_1174_, v_x_1171_);
v___x_1187_ = lean_name_eq(v_x_1172_, v_k_x27_1186_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1189_; 
if (v_isShared_1178_ == 0)
{
v___x_1189_ = v___x_1177_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_ks_1174_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_vs_1175_);
v___x_1189_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = lean_unsigned_to_nat(1u);
v___x_1191_ = lean_nat_add(v_x_1171_, v___x_1190_);
lean_dec(v_x_1171_);
v_x_1170_ = v___x_1189_;
v_x_1171_ = v___x_1191_;
goto _start;
}
}
else
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1194_ = lean_array_fset(v_ks_1174_, v_x_1171_, v_x_1172_);
v___x_1195_ = lean_array_fset(v_vs_1175_, v_x_1171_, v_x_1173_);
lean_dec(v_x_1171_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 1, v___x_1195_);
lean_ctor_set(v___x_1177_, 0, v___x_1194_);
v___x_1197_ = v___x_1177_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1194_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object* v_n_1200_, lean_object* v_k_1201_, lean_object* v_v_1202_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_unsigned_to_nat(0u);
v___x_1204_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_n_1200_, v___x_1203_, v_k_1201_, v_v_1202_);
return v___x_1204_;
}
}
static uint64_t _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1205_; uint64_t v___x_1206_; 
v___x_1205_ = lean_unsigned_to_nat(1723u);
v___x_1206_ = lean_uint64_of_nat(v___x_1205_);
return v___x_1206_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_1207_; size_t v___x_1208_; size_t v___x_1209_; 
v___x_1207_ = ((size_t)5ULL);
v___x_1208_ = ((size_t)1ULL);
v___x_1209_ = lean_usize_shift_left(v___x_1208_, v___x_1207_);
return v___x_1209_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1210_; size_t v___x_1211_; size_t v___x_1212_; 
v___x_1210_ = ((size_t)1ULL);
v___x_1211_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0);
v___x_1212_ = lean_usize_sub(v___x_1211_, v___x_1210_);
return v___x_1212_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object* v_x_1214_, size_t v_x_1215_, size_t v_x_1216_, lean_object* v_x_1217_, lean_object* v_x_1218_){
_start:
{
if (lean_obj_tag(v_x_1214_) == 0)
{
lean_object* v_es_1219_; size_t v___x_1220_; size_t v___x_1221_; size_t v___x_1222_; size_t v___x_1223_; lean_object* v_j_1224_; lean_object* v___x_1225_; uint8_t v___x_1226_; 
v_es_1219_ = lean_ctor_get(v_x_1214_, 0);
v___x_1220_ = ((size_t)5ULL);
v___x_1221_ = ((size_t)1ULL);
v___x_1222_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1);
v___x_1223_ = lean_usize_land(v_x_1215_, v___x_1222_);
v_j_1224_ = lean_usize_to_nat(v___x_1223_);
v___x_1225_ = lean_array_get_size(v_es_1219_);
v___x_1226_ = lean_nat_dec_lt(v_j_1224_, v___x_1225_);
if (v___x_1226_ == 0)
{
lean_dec(v_j_1224_);
lean_dec(v_x_1218_);
lean_dec(v_x_1217_);
return v_x_1214_;
}
else
{
lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1263_; 
lean_inc_ref(v_es_1219_);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1263_ == 0)
{
lean_object* v_unused_1264_; 
v_unused_1264_ = lean_ctor_get(v_x_1214_, 0);
lean_dec(v_unused_1264_);
v___x_1228_ = v_x_1214_;
v_isShared_1229_ = v_isSharedCheck_1263_;
goto v_resetjp_1227_;
}
else
{
lean_dec(v_x_1214_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1263_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v_v_1230_; lean_object* v___x_1231_; lean_object* v_xs_x27_1232_; lean_object* v___y_1234_; 
v_v_1230_ = lean_array_fget(v_es_1219_, v_j_1224_);
v___x_1231_ = lean_box(0);
v_xs_x27_1232_ = lean_array_fset(v_es_1219_, v_j_1224_, v___x_1231_);
switch(lean_obj_tag(v_v_1230_))
{
case 0:
{
lean_object* v_key_1239_; lean_object* v_val_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1250_; 
v_key_1239_ = lean_ctor_get(v_v_1230_, 0);
v_val_1240_ = lean_ctor_get(v_v_1230_, 1);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_v_1230_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1242_ = v_v_1230_;
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_val_1240_);
lean_inc(v_key_1239_);
lean_dec(v_v_1230_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
uint8_t v___x_1244_; 
v___x_1244_ = lean_name_eq(v_x_1217_, v_key_1239_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
lean_del_object(v___x_1242_);
v___x_1245_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1239_, v_val_1240_, v_x_1217_, v_x_1218_);
v___x_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
v___y_1234_ = v___x_1246_;
goto v___jp_1233_;
}
else
{
lean_object* v___x_1248_; 
lean_dec(v_val_1240_);
lean_dec(v_key_1239_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v_x_1218_);
lean_ctor_set(v___x_1242_, 0, v_x_1217_);
v___x_1248_ = v___x_1242_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_x_1217_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_x_1218_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
v___y_1234_ = v___x_1248_;
goto v___jp_1233_;
}
}
}
}
case 1:
{
lean_object* v_node_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1261_; 
v_node_1251_ = lean_ctor_get(v_v_1230_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v_v_1230_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1253_ = v_v_1230_;
v_isShared_1254_ = v_isSharedCheck_1261_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_node_1251_);
lean_dec(v_v_1230_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1261_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
size_t v___x_1255_; size_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1255_ = lean_usize_shift_right(v_x_1215_, v___x_1220_);
v___x_1256_ = lean_usize_add(v_x_1216_, v___x_1221_);
v___x_1257_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_node_1251_, v___x_1255_, v___x_1256_, v_x_1217_, v_x_1218_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1257_);
v___x_1259_ = v___x_1253_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1257_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
v___y_1234_ = v___x_1259_;
goto v___jp_1233_;
}
}
}
default: 
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1262_, 0, v_x_1217_);
lean_ctor_set(v___x_1262_, 1, v_x_1218_);
v___y_1234_ = v___x_1262_;
goto v___jp_1233_;
}
}
v___jp_1233_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = lean_array_fset(v_xs_x27_1232_, v_j_1224_, v___y_1234_);
lean_dec(v_j_1224_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1235_);
v___x_1237_ = v___x_1228_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
}
else
{
lean_object* v_ks_1265_; lean_object* v_vs_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1286_; 
v_ks_1265_ = lean_ctor_get(v_x_1214_, 0);
v_vs_1266_ = lean_ctor_get(v_x_1214_, 1);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1268_ = v_x_1214_;
v_isShared_1269_ = v_isSharedCheck_1286_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_vs_1266_);
lean_inc(v_ks_1265_);
lean_dec(v_x_1214_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1286_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_ks_1265_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v_vs_1266_);
v___x_1271_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
lean_object* v_newNode_1272_; uint8_t v___y_1274_; size_t v___x_1280_; uint8_t v___x_1281_; 
v_newNode_1272_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v___x_1271_, v_x_1217_, v_x_1218_);
v___x_1280_ = ((size_t)7ULL);
v___x_1281_ = lean_usize_dec_le(v___x_1280_, v_x_1216_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
v___x_1282_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1272_);
v___x_1283_ = lean_unsigned_to_nat(4u);
v___x_1284_ = lean_nat_dec_lt(v___x_1282_, v___x_1283_);
lean_dec(v___x_1282_);
v___y_1274_ = v___x_1284_;
goto v___jp_1273_;
}
else
{
v___y_1274_ = v___x_1281_;
goto v___jp_1273_;
}
v___jp_1273_:
{
if (v___y_1274_ == 0)
{
lean_object* v_ks_1275_; lean_object* v_vs_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v_ks_1275_ = lean_ctor_get(v_newNode_1272_, 0);
lean_inc_ref(v_ks_1275_);
v_vs_1276_ = lean_ctor_get(v_newNode_1272_, 1);
lean_inc_ref(v_vs_1276_);
lean_dec_ref(v_newNode_1272_);
v___x_1277_ = lean_unsigned_to_nat(0u);
v___x_1278_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2);
v___x_1279_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_x_1216_, v_ks_1275_, v_vs_1276_, v___x_1277_, v___x_1278_);
lean_dec_ref(v_vs_1276_);
lean_dec_ref(v_ks_1275_);
return v___x_1279_;
}
else
{
return v_newNode_1272_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t v_depth_1287_, lean_object* v_keys_1288_, lean_object* v_vals_1289_, lean_object* v_i_1290_, lean_object* v_entries_1291_){
_start:
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = lean_array_get_size(v_keys_1288_);
v___x_1293_ = lean_nat_dec_lt(v_i_1290_, v___x_1292_);
if (v___x_1293_ == 0)
{
lean_dec(v_i_1290_);
return v_entries_1291_;
}
else
{
lean_object* v_k_1294_; lean_object* v_v_1295_; uint64_t v___y_1297_; 
v_k_1294_ = lean_array_fget_borrowed(v_keys_1288_, v_i_1290_);
v_v_1295_ = lean_array_fget_borrowed(v_vals_1289_, v_i_1290_);
if (lean_obj_tag(v_k_1294_) == 0)
{
uint64_t v___x_1308_; 
v___x_1308_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0);
v___y_1297_ = v___x_1308_;
goto v___jp_1296_;
}
else
{
uint64_t v_hash_1309_; 
v_hash_1309_ = lean_ctor_get_uint64(v_k_1294_, sizeof(void*)*2);
v___y_1297_ = v_hash_1309_;
goto v___jp_1296_;
}
v___jp_1296_:
{
size_t v_h_1298_; size_t v___x_1299_; lean_object* v___x_1300_; size_t v___x_1301_; size_t v___x_1302_; size_t v___x_1303_; size_t v_h_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_h_1298_ = lean_uint64_to_usize(v___y_1297_);
v___x_1299_ = ((size_t)5ULL);
v___x_1300_ = lean_unsigned_to_nat(1u);
v___x_1301_ = ((size_t)1ULL);
v___x_1302_ = lean_usize_sub(v_depth_1287_, v___x_1301_);
v___x_1303_ = lean_usize_mul(v___x_1299_, v___x_1302_);
v_h_1304_ = lean_usize_shift_right(v_h_1298_, v___x_1303_);
v___x_1305_ = lean_nat_add(v_i_1290_, v___x_1300_);
lean_dec(v_i_1290_);
lean_inc(v_v_1295_);
lean_inc(v_k_1294_);
v___x_1306_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_entries_1291_, v_h_1304_, v_depth_1287_, v_k_1294_, v_v_1295_);
v_i_1290_ = v___x_1305_;
v_entries_1291_ = v___x_1306_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_depth_1310_, lean_object* v_keys_1311_, lean_object* v_vals_1312_, lean_object* v_i_1313_, lean_object* v_entries_1314_){
_start:
{
size_t v_depth_boxed_1315_; lean_object* v_res_1316_; 
v_depth_boxed_1315_ = lean_unbox_usize(v_depth_1310_);
lean_dec(v_depth_1310_);
v_res_1316_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_boxed_1315_, v_keys_1311_, v_vals_1312_, v_i_1313_, v_entries_1314_);
lean_dec_ref(v_vals_1312_);
lean_dec_ref(v_keys_1311_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_1317_, lean_object* v_x_1318_, lean_object* v_x_1319_, lean_object* v_x_1320_, lean_object* v_x_1321_){
_start:
{
size_t v_x_47255__boxed_1322_; size_t v_x_47256__boxed_1323_; lean_object* v_res_1324_; 
v_x_47255__boxed_1322_ = lean_unbox_usize(v_x_1318_);
lean_dec(v_x_1318_);
v_x_47256__boxed_1323_ = lean_unbox_usize(v_x_1319_);
lean_dec(v_x_1319_);
v_res_1324_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1317_, v_x_47255__boxed_1322_, v_x_47256__boxed_1323_, v_x_1320_, v_x_1321_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object* v_x_1325_, lean_object* v_x_1326_, lean_object* v_x_1327_){
_start:
{
uint64_t v___y_1329_; 
if (lean_obj_tag(v_x_1326_) == 0)
{
uint64_t v___x_1333_; 
v___x_1333_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0);
v___y_1329_ = v___x_1333_;
goto v___jp_1328_;
}
else
{
uint64_t v_hash_1334_; 
v_hash_1334_ = lean_ctor_get_uint64(v_x_1326_, sizeof(void*)*2);
v___y_1329_ = v_hash_1334_;
goto v___jp_1328_;
}
v___jp_1328_:
{
size_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = lean_uint64_to_usize(v___y_1329_);
v___x_1331_ = ((size_t)1ULL);
v___x_1332_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1325_, v___x_1330_, v___x_1331_, v_x_1326_, v_x_1327_);
return v___x_1332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object* v_a_1335_, lean_object* v_b_1336_){
_start:
{
lean_object* v_array_1337_; lean_object* v_start_1338_; lean_object* v_stop_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1352_; 
v_array_1337_ = lean_ctor_get(v_a_1335_, 0);
v_start_1338_ = lean_ctor_get(v_a_1335_, 1);
v_stop_1339_ = lean_ctor_get(v_a_1335_, 2);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_a_1335_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1341_ = v_a_1335_;
v_isShared_1342_ = v_isSharedCheck_1352_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_stop_1339_);
lean_inc(v_start_1338_);
lean_inc(v_array_1337_);
lean_dec(v_a_1335_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1352_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
uint8_t v___x_1343_; 
v___x_1343_ = lean_nat_dec_lt(v_start_1338_, v_stop_1339_);
if (v___x_1343_ == 0)
{
lean_del_object(v___x_1341_);
lean_dec(v_stop_1339_);
lean_dec(v_start_1338_);
lean_dec_ref(v_array_1337_);
return v_b_1336_;
}
else
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1344_ = lean_unsigned_to_nat(1u);
v___x_1345_ = lean_nat_add(v_start_1338_, v___x_1344_);
lean_inc_ref(v_array_1337_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 1, v___x_1345_);
v___x_1347_ = v___x_1341_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_array_1337_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v___x_1345_);
lean_ctor_set(v_reuseFailAlloc_1351_, 2, v_stop_1339_);
v___x_1347_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = lean_array_fget(v_array_1337_, v_start_1338_);
lean_dec(v_start_1338_);
lean_dec_ref(v_array_1337_);
v___x_1349_ = lean_array_push(v_b_1336_, v___x_1348_);
v_a_1335_ = v___x_1347_;
v_b_1336_ = v___x_1349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object* v_as_1353_, size_t v_sz_1354_, size_t v_i_1355_, lean_object* v_b_1356_, lean_object* v___y_1357_){
_start:
{
uint8_t v___x_1359_; 
v___x_1359_ = lean_usize_dec_lt(v_i_1355_, v_sz_1354_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v_b_1356_);
return v___x_1360_;
}
else
{
lean_object* v_array_1361_; lean_object* v_start_1362_; lean_object* v_stop_1363_; uint8_t v___x_1364_; 
v_array_1361_ = lean_ctor_get(v_b_1356_, 0);
v_start_1362_ = lean_ctor_get(v_b_1356_, 1);
v_stop_1363_ = lean_ctor_get(v_b_1356_, 2);
v___x_1364_ = lean_nat_dec_lt(v_start_1362_, v_stop_1363_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1365_, 0, v_b_1356_);
return v___x_1365_;
}
else
{
lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1398_; 
lean_inc(v_stop_1363_);
lean_inc(v_start_1362_);
lean_inc_ref(v_array_1361_);
v_isSharedCheck_1398_ = !lean_is_exclusive(v_b_1356_);
if (v_isSharedCheck_1398_ == 0)
{
lean_object* v_unused_1399_; lean_object* v_unused_1400_; lean_object* v_unused_1401_; 
v_unused_1399_ = lean_ctor_get(v_b_1356_, 2);
lean_dec(v_unused_1399_);
v_unused_1400_ = lean_ctor_get(v_b_1356_, 1);
lean_dec(v_unused_1400_);
v_unused_1401_ = lean_ctor_get(v_b_1356_, 0);
lean_dec(v_unused_1401_);
v___x_1367_ = v_b_1356_;
v_isShared_1368_ = v_isSharedCheck_1398_;
goto v_resetjp_1366_;
}
else
{
lean_dec(v_b_1356_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1398_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1369_; lean_object* v_a_1370_; lean_object* v_fvarId_1371_; lean_object* v_subst_1372_; lean_object* v_used_1373_; lean_object* v_binderRenaming_1374_; lean_object* v_funDeclInfoMap_1375_; uint8_t v_simplified_1376_; lean_object* v_visited_1377_; lean_object* v_inline_1378_; lean_object* v_inlineLocal_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1397_; 
v___x_1369_ = lean_st_ref_take(v___y_1357_);
v_a_1370_ = lean_array_uget_borrowed(v_as_1353_, v_i_1355_);
v_fvarId_1371_ = lean_ctor_get(v_a_1370_, 0);
v_subst_1372_ = lean_ctor_get(v___x_1369_, 0);
v_used_1373_ = lean_ctor_get(v___x_1369_, 1);
v_binderRenaming_1374_ = lean_ctor_get(v___x_1369_, 2);
v_funDeclInfoMap_1375_ = lean_ctor_get(v___x_1369_, 3);
v_simplified_1376_ = lean_ctor_get_uint8(v___x_1369_, sizeof(void*)*7);
v_visited_1377_ = lean_ctor_get(v___x_1369_, 4);
v_inline_1378_ = lean_ctor_get(v___x_1369_, 5);
v_inlineLocal_1379_ = lean_ctor_get(v___x_1369_, 6);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1381_ = v___x_1369_;
v_isShared_1382_ = v_isSharedCheck_1397_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_inlineLocal_1379_);
lean_inc(v_inline_1378_);
lean_inc(v_visited_1377_);
lean_inc(v_funDeclInfoMap_1375_);
lean_inc(v_binderRenaming_1374_);
lean_inc(v_used_1373_);
lean_inc(v_subst_1372_);
lean_dec(v___x_1369_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1397_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1383_ = lean_array_fget_borrowed(v_array_1361_, v_start_1362_);
lean_inc(v___x_1383_);
lean_inc(v_fvarId_1371_);
v___x_1384_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_1372_, v_fvarId_1371_, v___x_1383_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set(v___x_1381_, 0, v___x_1384_);
v___x_1386_ = v___x_1381_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1396_, 1, v_used_1373_);
lean_ctor_set(v_reuseFailAlloc_1396_, 2, v_binderRenaming_1374_);
lean_ctor_set(v_reuseFailAlloc_1396_, 3, v_funDeclInfoMap_1375_);
lean_ctor_set(v_reuseFailAlloc_1396_, 4, v_visited_1377_);
lean_ctor_set(v_reuseFailAlloc_1396_, 5, v_inline_1378_);
lean_ctor_set(v_reuseFailAlloc_1396_, 6, v_inlineLocal_1379_);
lean_ctor_set_uint8(v_reuseFailAlloc_1396_, sizeof(void*)*7, v_simplified_1376_);
v___x_1386_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1387_ = lean_st_ref_set(v___y_1357_, v___x_1386_);
v___x_1388_ = lean_unsigned_to_nat(1u);
v___x_1389_ = lean_nat_add(v_start_1362_, v___x_1388_);
lean_dec(v_start_1362_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 1, v___x_1389_);
v___x_1391_ = v___x_1367_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_array_1361_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v___x_1389_);
lean_ctor_set(v_reuseFailAlloc_1395_, 2, v_stop_1363_);
v___x_1391_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
size_t v___x_1392_; size_t v___x_1393_; 
v___x_1392_ = ((size_t)1ULL);
v___x_1393_ = lean_usize_add(v_i_1355_, v___x_1392_);
v_i_1355_ = v___x_1393_;
v_b_1356_ = v___x_1391_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object* v_as_1402_, lean_object* v_sz_1403_, lean_object* v_i_1404_, lean_object* v_b_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
size_t v_sz_boxed_1408_; size_t v_i_boxed_1409_; lean_object* v_res_1410_; 
v_sz_boxed_1408_ = lean_unbox_usize(v_sz_1403_);
lean_dec(v_sz_1403_);
v_i_boxed_1409_ = lean_unbox_usize(v_i_1404_);
lean_dec(v_i_1404_);
v_res_1410_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_1402_, v_sz_boxed_1408_, v_i_boxed_1409_, v_b_1405_, v___y_1406_);
lean_dec(v___y_1406_);
lean_dec_ref(v_as_1402_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object* v_as_1411_, size_t v_i_1412_, size_t v_stop_1413_, lean_object* v_b_1414_, lean_object* v___y_1415_){
_start:
{
uint8_t v___x_1417_; 
v___x_1417_ = lean_usize_dec_eq(v_i_1412_, v_stop_1413_);
if (v___x_1417_ == 0)
{
uint8_t v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1418_ = 0;
v___x_1419_ = lean_array_uget_borrowed(v_as_1411_, v_i_1412_);
v___x_1420_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_1418_, v___x_1419_, v___y_1415_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; size_t v___x_1422_; size_t v___x_1423_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref(v___x_1420_);
v___x_1422_ = ((size_t)1ULL);
v___x_1423_ = lean_usize_add(v_i_1412_, v___x_1422_);
v_i_1412_ = v___x_1423_;
v_b_1414_ = v_a_1421_;
goto _start;
}
else
{
return v___x_1420_;
}
}
else
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1425_, 0, v_b_1414_);
return v___x_1425_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object* v_as_1426_, lean_object* v_i_1427_, lean_object* v_stop_1428_, lean_object* v_b_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
size_t v_i_boxed_1432_; size_t v_stop_boxed_1433_; lean_object* v_res_1434_; 
v_i_boxed_1432_ = lean_unbox_usize(v_i_1427_);
lean_dec(v_i_1427_);
v_stop_boxed_1433_ = lean_unbox_usize(v_stop_1428_);
lean_dec(v_stop_1428_);
v_res_1434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_1426_, v_i_boxed_1432_, v_stop_boxed_1433_, v_b_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v_as_1426_);
return v_res_1434_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0(void){
_start:
{
uint8_t v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = 0;
v___x_1436_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1(v___x_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object* v_msg_1437_){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0);
v___x_1439_ = lean_panic_fn_borrowed(v___x_1438_, v_msg_1437_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object* v_as_1440_, size_t v_i_1441_, size_t v_stop_1442_, lean_object* v___y_1443_){
_start:
{
uint8_t v___x_1445_; 
v___x_1445_ = lean_usize_dec_eq(v_i_1441_, v_stop_1442_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v_type_1447_; lean_object* v___x_1448_; 
v___x_1446_ = lean_array_uget_borrowed(v_as_1440_, v_i_1441_);
v_type_1447_ = lean_ctor_get(v___x_1446_, 2);
v___x_1448_ = l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(v_type_1447_, v___y_1443_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1460_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1451_ = v___x_1448_;
v_isShared_1452_ = v_isSharedCheck_1460_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1448_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1460_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
uint8_t v___x_1453_; 
v___x_1453_ = lean_unbox(v_a_1449_);
if (v___x_1453_ == 0)
{
size_t v___x_1454_; size_t v___x_1455_; 
lean_del_object(v___x_1451_);
lean_dec(v_a_1449_);
v___x_1454_ = ((size_t)1ULL);
v___x_1455_ = lean_usize_add(v_i_1441_, v___x_1454_);
v_i_1441_ = v___x_1455_;
goto _start;
}
else
{
lean_object* v___x_1458_; 
if (v_isShared_1452_ == 0)
{
v___x_1458_ = v___x_1451_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1449_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
else
{
return v___x_1448_;
}
}
else
{
uint8_t v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1461_ = 0;
v___x_1462_ = lean_box(v___x_1461_);
v___x_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1462_);
return v___x_1463_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object* v_as_1464_, lean_object* v_i_1465_, lean_object* v_stop_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
size_t v_i_boxed_1469_; size_t v_stop_boxed_1470_; lean_object* v_res_1471_; 
v_i_boxed_1469_ = lean_unbox_usize(v_i_1465_);
lean_dec(v_i_1465_);
v_stop_boxed_1470_ = lean_unbox_usize(v_stop_1466_);
lean_dec(v_stop_1466_);
v_res_1471_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_1464_, v_i_boxed_1469_, v_stop_boxed_1470_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v_as_1464_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(lean_object* v_as_1472_, size_t v_i_1473_, size_t v_stop_1474_, lean_object* v_b_1475_, lean_object* v___y_1476_){
_start:
{
uint8_t v___x_1478_; 
v___x_1478_ = lean_usize_dec_eq(v_i_1473_, v_stop_1474_);
if (v___x_1478_ == 0)
{
uint8_t v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = 0;
v___x_1480_ = lean_array_uget_borrowed(v_as_1472_, v_i_1473_);
v___x_1481_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_1479_, v___x_1480_, v___y_1476_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; size_t v___x_1483_; size_t v___x_1484_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref(v___x_1481_);
v___x_1483_ = ((size_t)1ULL);
v___x_1484_ = lean_usize_add(v_i_1473_, v___x_1483_);
v_i_1473_ = v___x_1484_;
v_b_1475_ = v_a_1482_;
goto _start;
}
else
{
return v___x_1481_;
}
}
else
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1486_, 0, v_b_1475_);
return v___x_1486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg___boxed(lean_object* v_as_1487_, lean_object* v_i_1488_, lean_object* v_stop_1489_, lean_object* v_b_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
size_t v_i_boxed_1493_; size_t v_stop_boxed_1494_; lean_object* v_res_1495_; 
v_i_boxed_1493_ = lean_unbox_usize(v_i_1488_);
lean_dec(v_i_1488_);
v_stop_boxed_1494_ = lean_unbox_usize(v_stop_1489_);
lean_dec(v_stop_1489_);
v_res_1495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v_as_1487_, v_i_boxed_1493_, v_stop_boxed_1494_, v_b_1490_, v___y_1491_);
lean_dec(v___y_1491_);
lean_dec_ref(v_as_1487_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object* v_as_1496_, size_t v_i_1497_, size_t v_stop_1498_, lean_object* v_b_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v_a_1506_; lean_object* v___y_1511_; uint8_t v___x_1513_; 
v___x_1513_ = lean_usize_dec_eq(v_i_1497_, v_stop_1498_);
if (v___x_1513_ == 0)
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = lean_array_uget_borrowed(v_as_1496_, v_i_1497_);
v___x_1516_ = l_Lean_Compiler_LCNF_Alt_getParams(v___x_1515_);
v___x_1517_ = lean_array_get_size(v___x_1516_);
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_nat_dec_lt(v___x_1514_, v___x_1517_);
if (v___x_1519_ == 0)
{
lean_dec_ref(v___x_1516_);
v_a_1506_ = v___x_1518_;
goto v___jp_1505_;
}
else
{
uint8_t v___x_1520_; 
v___x_1520_ = lean_nat_dec_le(v___x_1517_, v___x_1517_);
if (v___x_1520_ == 0)
{
if (v___x_1519_ == 0)
{
lean_dec_ref(v___x_1516_);
v_a_1506_ = v___x_1518_;
goto v___jp_1505_;
}
else
{
size_t v___x_1521_; size_t v___x_1522_; lean_object* v___x_1523_; 
v___x_1521_ = ((size_t)0ULL);
v___x_1522_ = lean_usize_of_nat(v___x_1517_);
v___x_1523_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v___x_1516_, v___x_1521_, v___x_1522_, v___x_1518_, v___y_1501_);
lean_dec_ref(v___x_1516_);
v___y_1511_ = v___x_1523_;
goto v___jp_1510_;
}
}
else
{
size_t v___x_1524_; size_t v___x_1525_; lean_object* v___x_1526_; 
v___x_1524_ = ((size_t)0ULL);
v___x_1525_ = lean_usize_of_nat(v___x_1517_);
v___x_1526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v___x_1516_, v___x_1524_, v___x_1525_, v___x_1518_, v___y_1501_);
lean_dec_ref(v___x_1516_);
v___y_1511_ = v___x_1526_;
goto v___jp_1510_;
}
}
}
else
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_b_1499_);
return v___x_1527_;
}
v___jp_1505_:
{
size_t v___x_1507_; size_t v___x_1508_; 
v___x_1507_ = ((size_t)1ULL);
v___x_1508_ = lean_usize_add(v_i_1497_, v___x_1507_);
v_i_1497_ = v___x_1508_;
v_b_1499_ = v_a_1506_;
goto _start;
}
v___jp_1510_:
{
if (lean_obj_tag(v___y_1511_) == 0)
{
lean_object* v_a_1512_; 
v_a_1512_ = lean_ctor_get(v___y_1511_, 0);
lean_inc(v_a_1512_);
lean_dec_ref(v___y_1511_);
v_a_1506_ = v_a_1512_;
goto v___jp_1505_;
}
else
{
return v___y_1511_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object* v_as_1528_, lean_object* v_i_1529_, lean_object* v_stop_1530_, lean_object* v_b_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
size_t v_i_boxed_1537_; size_t v_stop_boxed_1538_; lean_object* v_res_1539_; 
v_i_boxed_1537_ = lean_unbox_usize(v_i_1529_);
lean_dec(v_i_1529_);
v_stop_boxed_1538_ = lean_unbox_usize(v_stop_1530_);
lean_dec(v_stop_1530_);
v_res_1539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_1528_, v_i_boxed_1537_, v_stop_boxed_1538_, v_b_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec_ref(v_as_1528_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object* v_as_1540_, size_t v_i_1541_, size_t v_stop_1542_, lean_object* v___y_1543_){
_start:
{
uint8_t v___x_1545_; 
v___x_1545_ = lean_usize_dec_eq(v_i_1541_, v_stop_1542_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; lean_object* v_fvarId_1547_; lean_object* v___x_1548_; 
v___x_1546_ = lean_array_uget_borrowed(v_as_1540_, v_i_1541_);
v_fvarId_1547_ = lean_ctor_get(v___x_1546_, 0);
v___x_1548_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_1547_, v___y_1543_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1560_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1551_ = v___x_1548_;
v_isShared_1552_ = v_isSharedCheck_1560_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1548_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1560_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
uint8_t v___x_1553_; 
v___x_1553_ = lean_unbox(v_a_1549_);
if (v___x_1553_ == 0)
{
size_t v___x_1554_; size_t v___x_1555_; 
lean_del_object(v___x_1551_);
lean_dec(v_a_1549_);
v___x_1554_ = ((size_t)1ULL);
v___x_1555_ = lean_usize_add(v_i_1541_, v___x_1554_);
v_i_1541_ = v___x_1555_;
goto _start;
}
else
{
lean_object* v___x_1558_; 
if (v_isShared_1552_ == 0)
{
v___x_1558_ = v___x_1551_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1549_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
else
{
return v___x_1548_;
}
}
else
{
uint8_t v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1561_ = 0;
v___x_1562_ = lean_box(v___x_1561_);
v___x_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
return v___x_1563_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object* v_as_1564_, lean_object* v_i_1565_, lean_object* v_stop_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
size_t v_i_boxed_1569_; size_t v_stop_boxed_1570_; lean_object* v_res_1571_; 
v_i_boxed_1569_ = lean_unbox_usize(v_i_1565_);
lean_dec(v_i_1565_);
v_stop_boxed_1570_ = lean_unbox_usize(v_stop_1566_);
lean_dec(v_stop_1566_);
v_res_1571_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_1564_, v_i_boxed_1569_, v_stop_boxed_1570_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v_as_1564_);
return v_res_1571_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3(void){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1575_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__2));
v___x_1576_ = lean_unsigned_to_nat(9u);
v___x_1577_ = lean_unsigned_to_nat(640u);
v___x_1578_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__1));
v___x_1579_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__0));
v___x_1580_ = l_mkPanicMessageWithDecl(v___x_1579_, v___x_1578_, v___x_1577_, v___x_1576_, v___x_1575_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object* v___x_1584_, lean_object* v___x_1585_, lean_object* v_fvarId_1586_, lean_object* v_k_1587_, lean_object* v_args_1588_, uint8_t v___x_1589_, lean_object* v___x_1590_, lean_object* v_result_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v_lower_1601_; lean_object* v_upper_1602_; uint8_t v___x_1629_; 
v___x_1629_ = lean_nat_dec_lt(v___x_1584_, v___x_1585_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; 
lean_dec(v___x_1590_);
lean_dec_ref(v_args_1588_);
lean_dec(v___x_1585_);
lean_dec(v___x_1584_);
v___x_1630_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1586_, v_result_1591_, v___y_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v___x_1631_; 
lean_dec_ref(v___x_1630_);
lean_inc_ref(v___y_1597_);
v___x_1631_ = l_Lean_Compiler_LCNF_Simp_simp(v_k_1587_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1631_;
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_dec_ref(v_k_1587_);
v_a_1632_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1630_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1630_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
else
{
uint8_t v___x_1640_; 
v___x_1640_ = lean_nat_dec_le(v___x_1584_, v___x_1590_);
if (v___x_1640_ == 0)
{
lean_dec(v___x_1590_);
v_lower_1601_ = v___x_1584_;
v_upper_1602_ = v___x_1585_;
goto v___jp_1600_;
}
else
{
lean_dec(v___x_1584_);
v_lower_1601_ = v___x_1590_;
v_upper_1602_ = v___x_1585_;
goto v___jp_1600_;
}
}
v___jp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1603_ = l_Array_toSubarray___redArg(v_args_1588_, v_lower_1601_, v_upper_1602_);
v___x_1604_ = l_Subarray_copy___redArg(v___x_1603_);
v___x_1605_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1605_, 0, v_result_1591_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
v___x_1606_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_1607_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1589_, v___x_1605_, v___x_1606_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v_fvarId_1609_; lean_object* v___x_1610_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref(v___x_1607_);
v_fvarId_1609_ = lean_ctor_get(v_a_1608_, 0);
lean_inc(v_fvarId_1609_);
v___x_1610_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1586_, v_fvarId_1609_, v___y_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
lean_dec_ref(v___x_1610_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v_a_1608_);
lean_ctor_set(v___x_1611_, 1, v_k_1587_);
lean_inc_ref(v___y_1597_);
v___x_1612_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1611_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1612_;
}
else
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
lean_dec(v_a_1608_);
lean_dec_ref(v_k_1587_);
v_a_1613_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1610_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1610_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1628_; 
lean_dec_ref(v_k_1587_);
lean_dec(v_fvarId_1586_);
v_a_1621_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1623_ = v___x_1607_;
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1607_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1626_; 
if (v_isShared_1624_ == 0)
{
v___x_1626_ = v___x_1623_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_a_1621_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object* v___x_1641_, lean_object* v___x_1642_, lean_object* v_fvarId_1643_, lean_object* v_k_1644_, lean_object* v_args_1645_, lean_object* v___x_1646_, lean_object* v___x_1647_, lean_object* v_result_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
uint8_t v___x_47786__boxed_1657_; lean_object* v_res_1658_; 
v___x_47786__boxed_1657_ = lean_unbox(v___x_1646_);
v_res_1658_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(v___x_1641_, v___x_1642_, v_fvarId_1643_, v_k_1644_, v_args_1645_, v___x_47786__boxed_1657_, v___x_1647_, v_result_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object* v_letDecl_1659_, lean_object* v_k_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v_fvarId_1669_; lean_object* v_value_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_2008_; 
v_fvarId_1669_ = lean_ctor_get(v_letDecl_1659_, 0);
v_value_1670_ = lean_ctor_get(v_letDecl_1659_, 3);
v_isSharedCheck_2008_ = !lean_is_exclusive(v_letDecl_1659_);
if (v_isSharedCheck_2008_ == 0)
{
lean_object* v_unused_2009_; lean_object* v_unused_2010_; 
v_unused_2009_ = lean_ctor_get(v_letDecl_1659_, 2);
lean_dec(v_unused_2009_);
v_unused_2010_ = lean_ctor_get(v_letDecl_1659_, 1);
lean_dec(v_unused_2010_);
v___x_1672_ = v_letDecl_1659_;
v_isShared_1673_ = v_isSharedCheck_2008_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_value_1670_);
lean_inc(v_fvarId_1669_);
lean_dec(v_letDecl_1659_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_2008_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1674_; 
lean_inc(v_value_1670_);
v___x_1674_ = l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(v_value_1670_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1999_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1677_ = v___x_1674_;
v_isShared_1678_ = v_isSharedCheck_1999_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1674_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1999_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
if (lean_obj_tag(v_a_1675_) == 1)
{
lean_object* v_val_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1994_; 
lean_del_object(v___x_1677_);
v_val_1679_ = lean_ctor_get(v_a_1675_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_a_1675_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1681_ = v_a_1675_;
v_isShared_1682_ = v_isSharedCheck_1994_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_val_1679_);
lean_dec(v_a_1675_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1994_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v_params_1683_; lean_object* v_value_1684_; lean_object* v_fType_1685_; lean_object* v_args_1686_; uint8_t v_recursive_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; uint8_t v___x_1690_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___y_1694_; lean_object* v___y_1695_; lean_object* v___y_1696_; lean_object* v___y_1697_; uint8_t v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; 
v_params_1683_ = lean_ctor_get(v_val_1679_, 0);
v_value_1684_ = lean_ctor_get(v_val_1679_, 1);
v_fType_1685_ = lean_ctor_get(v_val_1679_, 2);
v_args_1686_ = lean_ctor_get(v_val_1679_, 3);
v_recursive_1687_ = lean_ctor_get_uint8(v_val_1679_, sizeof(void*)*4 + 2);
v___x_1688_ = lean_array_get_size(v_args_1686_);
v___x_1689_ = l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(v_val_1679_);
v___x_1690_ = lean_nat_dec_lt(v___x_1688_, v___x_1689_);
if (lean_obj_tag(v_value_1670_) == 3)
{
lean_object* v_declName_1974_; lean_object* v___x_1975_; 
v_declName_1974_ = lean_ctor_get(v_value_1670_, 0);
lean_inc_n(v_declName_1974_, 2);
lean_dec_ref(v_value_1670_);
v___x_1975_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1687_, v_declName_1974_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v_declName_1977_; lean_object* v_config_1978_; lean_object* v_inlineStack_1979_; lean_object* v_inlineStackOccs_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1984_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref(v___x_1975_);
v_declName_1977_ = lean_ctor_get(v_a_1661_, 0);
v_config_1978_ = lean_ctor_get(v_a_1661_, 1);
v_inlineStack_1979_ = lean_ctor_get(v_a_1661_, 2);
v_inlineStackOccs_1980_ = lean_ctor_get(v_a_1661_, 3);
lean_inc(v_inlineStack_1979_);
lean_inc(v_declName_1974_);
v___x_1981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1981_, 0, v_declName_1974_);
lean_ctor_set(v___x_1981_, 1, v_inlineStack_1979_);
lean_inc_ref(v_inlineStackOccs_1980_);
v___x_1982_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_inlineStackOccs_1980_, v_declName_1974_, v_a_1976_);
lean_inc_ref(v_config_1978_);
lean_inc(v_declName_1977_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 3, v___x_1982_);
lean_ctor_set(v___x_1672_, 2, v___x_1981_);
lean_ctor_set(v___x_1672_, 1, v_config_1978_);
lean_ctor_set(v___x_1672_, 0, v_declName_1977_);
v___x_1984_ = v___x_1672_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_declName_1977_);
lean_ctor_set(v_reuseFailAlloc_1985_, 1, v_config_1978_);
lean_ctor_set(v_reuseFailAlloc_1985_, 2, v___x_1981_);
lean_ctor_set(v_reuseFailAlloc_1985_, 3, v___x_1982_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
v___y_1873_ = v___x_1984_;
v___y_1874_ = v_a_1662_;
v___y_1875_ = v_a_1663_;
v___y_1876_ = v_a_1664_;
v___y_1877_ = v_a_1665_;
v___y_1878_ = v_a_1666_;
v___y_1879_ = v_a_1667_;
goto v___jp_1872_;
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec(v_declName_1974_);
lean_dec(v___x_1689_);
lean_del_object(v___x_1681_);
lean_dec(v_val_1679_);
lean_del_object(v___x_1672_);
lean_dec(v_fvarId_1669_);
lean_dec_ref(v_k_1660_);
v_a_1986_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1975_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1975_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
else
{
lean_del_object(v___x_1672_);
lean_dec(v_value_1670_);
lean_inc_ref(v_a_1661_);
v___y_1873_ = v_a_1661_;
v___y_1874_ = v_a_1662_;
v___y_1875_ = v_a_1663_;
v___y_1876_ = v_a_1664_;
v___y_1877_ = v_a_1665_;
v___y_1878_ = v_a_1666_;
v___y_1879_ = v_a_1667_;
goto v___jp_1872_;
}
v___jp_1691_:
{
lean_object* v___x_1705_; 
lean_inc_ref(v___y_1700_);
v___x_1705_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_1694_, v___y_1697_, v___y_1693_, v___y_1701_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_object* v_a_1706_; lean_object* v___x_1707_; 
v_a_1706_ = lean_ctor_get(v___x_1705_, 0);
lean_inc(v_a_1706_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1693_);
if (lean_obj_tag(v___x_1707_) == 0)
{
uint8_t v___x_1708_; 
lean_dec_ref(v___x_1707_);
v___x_1708_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_a_1706_);
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
lean_dec_ref(v___y_1696_);
v___x_1709_ = lean_mk_empty_array_with_capacity(v___y_1704_);
lean_dec(v___y_1704_);
lean_inc_ref(v___x_1709_);
v___x_1710_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v___y_1692_, v___x_1709_);
v___x_1711_ = l_Lean_Compiler_LCNF_inferAppType(v___y_1698_, v_fType_1685_, v___x_1710_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc_n(v_a_1712_, 2);
lean_dec_ref(v___x_1711_);
v___x_1713_ = l_Lean_Expr_headBeta(v_a_1712_);
v___x_1714_ = l_Lean_Expr_isForall(v___x_1713_);
lean_dec_ref(v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; 
lean_dec_ref(v___x_1709_);
v___x_1715_ = l_Lean_Compiler_LCNF_mkAuxParam(v___y_1698_, v_a_1712_, v___x_1690_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v_fvarId_1717_; lean_object* v___x_1718_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref(v___x_1715_);
v_fvarId_1717_ = lean_ctor_get(v_a_1716_, 0);
lean_inc(v___y_1699_);
lean_inc_ref(v___y_1700_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1695_);
lean_inc_ref(v___y_1701_);
lean_inc(v___y_1693_);
lean_inc(v_fvarId_1717_);
v___x_1718_ = lean_apply_9(v___y_1703_, v_fvarId_1717_, v___y_1697_, v___y_1693_, v___y_1701_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_, lean_box(0));
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v_a_1719_ = lean_ctor_get(v___x_1718_, 0);
lean_inc(v_a_1719_);
lean_dec_ref(v___x_1718_);
v___x_1720_ = lean_unsigned_to_nat(1u);
v___x_1721_ = lean_mk_empty_array_with_capacity(v___x_1720_);
v___x_1722_ = lean_array_push(v___x_1721_, v_a_1716_);
v___x_1723_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1));
v___x_1724_ = l_Lean_Compiler_LCNF_mkAuxJpDecl(v___y_1698_, v___x_1722_, v_a_1719_, v___x_1723_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___f_1726_; lean_object* v___x_1727_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc_n(v_a_1725_, 2);
lean_dec_ref(v___x_1724_);
v___f_1726_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1726_, 0, v_a_1725_);
lean_closure_set(v___f_1726_, 1, v___x_1720_);
v___x_1727_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___y_1698_, v_a_1706_, v___f_1726_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1739_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1730_ = v___x_1727_;
v_isShared_1731_ = v_isSharedCheck_1739_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1727_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1739_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1734_; 
v___x_1732_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1732_, 0, v_a_1725_);
lean_ctor_set(v___x_1732_, 1, v_a_1728_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v___x_1732_);
v___x_1734_ = v___x_1681_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1732_);
v___x_1734_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
lean_object* v___x_1736_; 
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1734_);
v___x_1736_ = v___x_1730_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_a_1725_);
lean_del_object(v___x_1681_);
v_a_1740_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1727_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1727_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
lean_dec(v_a_1706_);
lean_del_object(v___x_1681_);
v_a_1748_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1724_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1724_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
lean_dec(v_a_1716_);
lean_dec(v_a_1706_);
lean_del_object(v___x_1681_);
v_a_1756_ = lean_ctor_get(v___x_1718_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1718_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1718_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1718_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
lean_dec(v_a_1706_);
lean_dec_ref(v___y_1703_);
lean_dec_ref(v___y_1697_);
lean_del_object(v___x_1681_);
v_a_1764_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1715_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1715_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
else
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
lean_dec(v_a_1712_);
v___x_1772_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4));
v___x_1773_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v___x_1709_, v_a_1706_, v___x_1772_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1775_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref(v___x_1773_);
v___x_1775_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_1774_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v_fvarId_1777_; lean_object* v___x_1778_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_a_1776_);
lean_dec_ref(v___x_1775_);
v_fvarId_1777_ = lean_ctor_get(v_a_1776_, 0);
lean_inc(v___y_1699_);
lean_inc_ref(v___y_1700_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1695_);
lean_inc_ref(v___y_1701_);
lean_inc(v___y_1693_);
lean_inc_ref(v___y_1697_);
lean_inc(v_fvarId_1777_);
v___x_1778_ = lean_apply_9(v___y_1703_, v_fvarId_1777_, v___y_1697_, v___y_1693_, v___y_1701_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_, lean_box(0));
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
lean_inc(v_a_1779_);
lean_dec_ref(v___x_1778_);
v___x_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1780_, 0, v_a_1776_);
v___x_1781_ = lean_unsigned_to_nat(1u);
v___x_1782_ = lean_mk_empty_array_with_capacity(v___x_1781_);
v___x_1783_ = lean_array_push(v___x_1782_, v___x_1780_);
v___x_1784_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v___x_1783_, v_a_1779_, v___y_1697_, v___y_1693_, v___y_1701_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
lean_dec_ref(v___y_1697_);
lean_dec_ref(v___x_1783_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1795_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1787_ = v___x_1784_;
v_isShared_1788_ = v_isSharedCheck_1795_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1784_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1795_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v_a_1785_);
v___x_1790_ = v___x_1681_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
lean_object* v___x_1792_; 
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1790_);
v___x_1792_ = v___x_1787_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_del_object(v___x_1681_);
v_a_1796_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1784_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1784_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v_a_1776_);
lean_dec_ref(v___y_1697_);
lean_del_object(v___x_1681_);
v_a_1804_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1778_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1778_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref(v___y_1703_);
lean_dec_ref(v___y_1697_);
lean_del_object(v___x_1681_);
v_a_1812_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1775_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1775_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
lean_dec_ref(v___y_1703_);
lean_dec_ref(v___y_1697_);
lean_del_object(v___x_1681_);
v_a_1820_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1773_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1773_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
lean_dec_ref(v___x_1709_);
lean_dec(v_a_1706_);
lean_dec_ref(v___y_1703_);
lean_dec_ref(v___y_1697_);
lean_del_object(v___x_1681_);
v_a_1828_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v___x_1711_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1711_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_a_1828_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
else
{
lean_object* v___x_1836_; 
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec_ref(v___y_1697_);
lean_dec_ref(v___y_1692_);
lean_dec_ref(v_fType_1685_);
v___x_1836_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___y_1698_, v_a_1706_, v___y_1696_, v___y_1695_, v___y_1702_, v___y_1700_, v___y_1699_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1847_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1839_ = v___x_1836_;
v_isShared_1840_ = v_isSharedCheck_1847_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1836_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1847_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v_a_1837_);
v___x_1842_ = v___x_1681_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
lean_object* v___x_1844_; 
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1842_);
v___x_1844_ = v___x_1839_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
lean_del_object(v___x_1681_);
v_a_1848_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1836_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1836_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
lean_dec(v_a_1706_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec_ref(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec_ref(v___y_1692_);
lean_dec_ref(v_fType_1685_);
lean_del_object(v___x_1681_);
v_a_1856_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1707_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1707_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec_ref(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec_ref(v___y_1692_);
lean_dec_ref(v_fType_1685_);
lean_del_object(v___x_1681_);
v_a_1864_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1705_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1705_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
v___jp_1872_:
{
if (v___x_1690_ == 0)
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
lean_inc_ref_n(v_args_1686_, 2);
lean_inc_ref(v_fType_1685_);
lean_inc_ref(v_value_1684_);
lean_inc_ref(v_params_1683_);
lean_dec(v_val_1679_);
v___x_1880_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_1689_);
v___x_1881_ = l_Array_toSubarray___redArg(v_args_1686_, v___x_1880_, v___x_1689_);
lean_inc_ref(v___x_1881_);
v___x_1882_ = l_Subarray_copy___redArg(v___x_1881_);
v___x_1883_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_1683_, v_value_1684_, v___x_1882_, v___x_1690_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec_ref(v_params_1683_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; uint8_t v___x_1885_; lean_object* v___x_1886_; lean_object* v___f_1887_; lean_object* v___f_1888_; uint8_t v___x_1889_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref(v___x_1883_);
v___x_1885_ = 0;
v___x_1886_ = lean_box(v___x_1885_);
lean_inc_ref(v_k_1660_);
lean_inc(v_fvarId_1669_);
lean_inc(v___x_1689_);
v___f_1887_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed), 16, 7);
lean_closure_set(v___f_1887_, 0, v___x_1689_);
lean_closure_set(v___f_1887_, 1, v___x_1688_);
lean_closure_set(v___f_1887_, 2, v_fvarId_1669_);
lean_closure_set(v___f_1887_, 3, v_k_1660_);
lean_closure_set(v___f_1887_, 4, v_args_1686_);
lean_closure_set(v___f_1887_, 5, v___x_1886_);
lean_closure_set(v___f_1887_, 6, v___x_1880_);
lean_inc_ref(v___y_1875_);
lean_inc_ref(v___y_1873_);
lean_inc_ref(v___f_1887_);
lean_inc(v___y_1874_);
v___f_1888_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed), 10, 4);
lean_closure_set(v___f_1888_, 0, v___y_1874_);
lean_closure_set(v___f_1888_, 1, v___f_1887_);
lean_closure_set(v___f_1888_, 2, v___y_1873_);
lean_closure_set(v___f_1888_, 3, v___y_1875_);
v___x_1889_ = l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(v_k_1660_, v_fvarId_1669_);
lean_dec(v_fvarId_1669_);
lean_dec_ref(v_k_1660_);
if (v___x_1889_ == 0)
{
lean_dec(v___x_1689_);
v___y_1692_ = v___x_1881_;
v___y_1693_ = v___y_1874_;
v___y_1694_ = v_a_1884_;
v___y_1695_ = v___y_1876_;
v___y_1696_ = v___f_1888_;
v___y_1697_ = v___y_1873_;
v___y_1698_ = v___x_1885_;
v___y_1699_ = v___y_1879_;
v___y_1700_ = v___y_1878_;
v___y_1701_ = v___y_1875_;
v___y_1702_ = v___y_1877_;
v___y_1703_ = v___f_1887_;
v___y_1704_ = v___x_1880_;
goto v___jp_1691_;
}
else
{
uint8_t v___x_1890_; 
v___x_1890_ = lean_nat_dec_eq(v___x_1688_, v___x_1689_);
lean_dec(v___x_1689_);
if (v___x_1890_ == 0)
{
v___y_1692_ = v___x_1881_;
v___y_1693_ = v___y_1874_;
v___y_1694_ = v_a_1884_;
v___y_1695_ = v___y_1876_;
v___y_1696_ = v___f_1888_;
v___y_1697_ = v___y_1873_;
v___y_1698_ = v___x_1885_;
v___y_1699_ = v___y_1879_;
v___y_1700_ = v___y_1878_;
v___y_1701_ = v___y_1875_;
v___y_1702_ = v___y_1877_;
v___y_1703_ = v___f_1887_;
v___y_1704_ = v___x_1880_;
goto v___jp_1691_;
}
else
{
lean_object* v___x_1891_; 
lean_dec_ref(v___f_1888_);
lean_dec_ref(v___f_1887_);
lean_dec_ref(v___x_1881_);
lean_dec_ref(v_fType_1685_);
lean_del_object(v___x_1681_);
v___x_1891_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1874_);
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_object* v___x_1892_; 
lean_dec_ref(v___x_1891_);
lean_inc_ref(v___y_1878_);
v___x_1892_ = l_Lean_Compiler_LCNF_Simp_simp(v_a_1884_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec_ref(v___y_1873_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1901_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1895_ = v___x_1892_;
v_isShared_1896_ = v_isSharedCheck_1901_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1901_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1897_; lean_object* v___x_1899_; 
v___x_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1897_, 0, v_a_1893_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___x_1897_);
v___x_1899_ = v___x_1895_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1897_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1892_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1892_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec(v_a_1884_);
lean_dec_ref(v___y_1873_);
v_a_1910_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1891_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1891_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_dec_ref(v___x_1881_);
lean_dec_ref(v___y_1873_);
lean_dec(v___x_1689_);
lean_dec_ref(v_args_1686_);
lean_dec_ref(v_fType_1685_);
lean_del_object(v___x_1681_);
lean_dec(v_fvarId_1669_);
lean_dec_ref(v_k_1660_);
v_a_1918_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1883_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1883_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
else
{
lean_object* v___x_1926_; 
lean_dec(v___x_1689_);
lean_del_object(v___x_1681_);
v___x_1926_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_val_1679_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v_fvarId_1928_; lean_object* v___x_1929_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref(v___x_1926_);
v_fvarId_1928_ = lean_ctor_get(v_a_1927_, 0);
lean_inc(v_fvarId_1928_);
v___x_1929_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1669_, v_fvarId_1928_, v___y_1874_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v___x_1930_; 
lean_dec_ref(v___x_1929_);
v___x_1930_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1874_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
lean_dec_ref(v___x_1930_);
v___x_1931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1931_, 0, v_a_1927_);
lean_ctor_set(v___x_1931_, 1, v_k_1660_);
lean_inc_ref(v___y_1878_);
v___x_1932_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1931_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec_ref(v___y_1873_);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1941_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1935_ = v___x_1932_;
v_isShared_1936_ = v_isSharedCheck_1941_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1932_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1941_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1937_, 0, v_a_1933_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 0, v___x_1937_);
v___x_1939_ = v___x_1935_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
v_a_1942_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1932_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1932_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec(v_a_1927_);
lean_dec_ref(v___y_1873_);
lean_dec_ref(v_k_1660_);
v_a_1950_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1930_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1930_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_dec(v_a_1927_);
lean_dec_ref(v___y_1873_);
lean_dec_ref(v_k_1660_);
v_a_1958_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1929_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1929_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
else
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
lean_dec_ref(v___y_1873_);
lean_dec(v_fvarId_1669_);
lean_dec_ref(v_k_1660_);
v_a_1966_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1926_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1926_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1995_; lean_object* v___x_1997_; 
lean_dec(v_a_1675_);
lean_del_object(v___x_1672_);
lean_dec(v_value_1670_);
lean_dec(v_fvarId_1669_);
lean_dec_ref(v_k_1660_);
v___x_1995_ = lean_box(0);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 0, v___x_1995_);
v___x_1997_ = v___x_1677_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1995_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_del_object(v___x_1672_);
lean_dec(v_value_1670_);
lean_dec(v_fvarId_1669_);
lean_dec_ref(v_k_1660_);
v_a_2000_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1674_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1674_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0(void){
_start:
{
uint8_t v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = 0;
v___x_2012_ = l_Lean_Compiler_LCNF_instInhabitedParam_default(v___x_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object* v_cases_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_typeName_2025_; lean_object* v_discr_2026_; lean_object* v___x_2027_; lean_object* v_subst_2028_; uint8_t v___x_2029_; uint8_t v___x_2030_; lean_object* v___x_2031_; 
v_typeName_2025_ = lean_ctor_get(v_cases_2013_, 0);
v_discr_2026_ = lean_ctor_get(v_cases_2013_, 2);
v___x_2027_ = lean_st_ref_get(v_a_2015_);
v_subst_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc_ref(v_subst_2028_);
lean_dec(v___x_2027_);
v___x_2029_ = 0;
v___x_2030_ = 0;
lean_inc(v_discr_2026_);
v___x_2031_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_2028_, v_discr_2026_, v___x_2030_);
lean_dec_ref(v_subst_2028_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_fvarId_2032_; lean_object* v___x_2033_; 
v_fvarId_2032_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_fvarId_2032_);
lean_dec_ref(v___x_2031_);
v___x_2033_ = l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(v_fvarId_2032_, v_a_2016_, v_a_2018_, v_a_2020_);
lean_dec(v_fvarId_2032_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2263_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2036_ = v___x_2033_;
v_isShared_2037_ = v_isSharedCheck_2263_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_2033_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2263_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
if (lean_obj_tag(v_a_2034_) == 1)
{
lean_object* v_val_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2258_; 
v_val_2038_ = lean_ctor_get(v_a_2034_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v_a_2034_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2040_ = v_a_2034_;
v_isShared_2041_ = v_isSharedCheck_2258_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_val_2038_);
lean_dec(v_a_2034_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2258_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v_env_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2042_ = lean_st_ref_get(v_a_2020_);
v_env_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc_ref(v_env_2043_);
lean_dec(v___x_2042_);
v___x_2044_ = l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(v_val_2038_);
lean_inc(v___x_2044_);
v___x_2045_ = l_Lean_Environment_find_x3f(v_env_2043_, v___x_2044_, v___x_2030_);
if (lean_obj_tag(v___x_2045_) == 1)
{
lean_object* v_val_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2257_; 
v_val_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2257_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_val_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2257_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
if (lean_obj_tag(v_val_2046_) == 6)
{
lean_object* v_val_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2256_; 
v_val_2050_ = lean_ctor_get(v_val_2046_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_val_2046_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2052_ = v_val_2046_;
v_isShared_2053_ = v_isSharedCheck_2256_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_val_2050_);
lean_dec(v_val_2046_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2256_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v_induct_2054_; uint8_t v___x_2055_; 
v_induct_2054_ = lean_ctor_get(v_val_2050_, 1);
lean_inc(v_induct_2054_);
lean_dec_ref(v_val_2050_);
v___x_2055_ = lean_name_eq(v_typeName_2025_, v_induct_2054_);
lean_dec(v_induct_2054_);
if (v___x_2055_ == 0)
{
lean_object* v___x_2056_; lean_object* v___x_2058_; 
lean_del_object(v___x_2052_);
lean_del_object(v___x_2048_);
lean_dec(v___x_2044_);
lean_del_object(v___x_2040_);
lean_dec(v_val_2038_);
lean_dec_ref(v_cases_2013_);
v___x_2056_ = lean_box(0);
if (v_isShared_2037_ == 0)
{
lean_ctor_set(v___x_2036_, 0, v___x_2056_);
v___x_2058_ = v___x_2036_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
else
{
lean_object* v___x_2060_; lean_object* v_fst_2061_; lean_object* v_snd_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2255_; 
lean_del_object(v___x_2036_);
v___x_2060_ = l_Lean_Compiler_LCNF_Cases_extractAlt_x21(v___x_2029_, v_cases_2013_, v___x_2044_);
v_fst_2061_ = lean_ctor_get(v___x_2060_, 0);
v_snd_2062_ = lean_ctor_get(v___x_2060_, 1);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2064_ = v___x_2060_;
v_isShared_2065_ = v_isSharedCheck_2255_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_snd_2062_);
lean_inc(v_fst_2061_);
lean_dec(v___x_2060_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2255_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2053_ == 0)
{
lean_ctor_set_tag(v___x_2052_, 4);
lean_ctor_set(v___x_2052_, 0, v_snd_2062_);
v___x_2067_ = v___x_2052_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_snd_2062_);
v___x_2067_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2068_; 
v___x_2068_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_2029_, v___x_2067_, v_a_2018_);
lean_dec_ref(v___x_2067_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v___x_2069_; 
lean_dec_ref(v___x_2068_);
v___x_2069_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_2015_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_dec_ref(v___x_2069_);
if (lean_obj_tag(v_fst_2061_) == 0)
{
if (lean_obj_tag(v_val_2038_) == 0)
{
lean_object* v_params_2070_; lean_object* v_code_2071_; lean_object* v_val_2072_; lean_object* v_args_2073_; lean_object* v_lower_2075_; lean_object* v_upper_2076_; lean_object* v_numParams_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
lean_del_object(v___x_2064_);
lean_del_object(v___x_2040_);
v_params_2070_ = lean_ctor_get(v_fst_2061_, 1);
lean_inc_ref(v_params_2070_);
v_code_2071_ = lean_ctor_get(v_fst_2061_, 2);
lean_inc_ref(v_code_2071_);
lean_dec_ref(v_fst_2061_);
v_val_2072_ = lean_ctor_get(v_val_2038_, 0);
lean_inc_ref(v_val_2072_);
v_args_2073_ = lean_ctor_get(v_val_2038_, 1);
lean_inc_ref(v_args_2073_);
lean_dec_ref(v_val_2038_);
v_numParams_2119_ = lean_ctor_get(v_val_2072_, 3);
lean_inc(v_numParams_2119_);
lean_dec_ref(v_val_2072_);
v___x_2120_ = lean_unsigned_to_nat(0u);
v___x_2121_ = lean_array_get_size(v_args_2073_);
v___x_2122_ = lean_nat_dec_le(v_numParams_2119_, v___x_2120_);
if (v___x_2122_ == 0)
{
v_lower_2075_ = v_numParams_2119_;
v_upper_2076_ = v___x_2121_;
goto v___jp_2074_;
}
else
{
lean_dec(v_numParams_2119_);
v_lower_2075_ = v___x_2120_;
v_upper_2076_ = v___x_2121_;
goto v___jp_2074_;
}
v___jp_2074_:
{
lean_object* v___x_2077_; size_t v_sz_2078_; size_t v___x_2079_; lean_object* v___x_2080_; 
v___x_2077_ = l_Array_toSubarray___redArg(v_args_2073_, v_lower_2075_, v_upper_2076_);
v_sz_2078_ = lean_array_size(v_params_2070_);
v___x_2079_ = ((size_t)0ULL);
v___x_2080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_params_2070_, v_sz_2078_, v___x_2079_, v___x_2077_, v_a_2015_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v___x_2081_; 
lean_dec_ref(v___x_2080_);
lean_inc_ref(v_a_2019_);
v___x_2081_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2071_, v_a_2014_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2083_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
lean_inc(v_a_2082_);
lean_dec_ref(v___x_2081_);
v___x_2083_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2029_, v_params_2070_, v_a_2018_);
lean_dec_ref(v_params_2070_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2093_; 
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2093_ == 0)
{
lean_object* v_unused_2094_; 
v_unused_2094_ = lean_ctor_get(v___x_2083_, 0);
lean_dec(v_unused_2094_);
v___x_2085_ = v___x_2083_;
v_isShared_2086_ = v_isSharedCheck_2093_;
goto v_resetjp_2084_;
}
else
{
lean_dec(v___x_2083_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2093_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_a_2082_);
v___x_2088_ = v___x_2048_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2082_);
v___x_2088_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
lean_object* v___x_2090_; 
if (v_isShared_2086_ == 0)
{
lean_ctor_set(v___x_2085_, 0, v___x_2088_);
v___x_2090_ = v___x_2085_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2088_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
else
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
lean_dec(v_a_2082_);
lean_del_object(v___x_2048_);
v_a_2095_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2083_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2083_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec_ref(v_params_2070_);
lean_del_object(v___x_2048_);
v_a_2103_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2081_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2081_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
lean_dec_ref(v_code_2071_);
lean_dec_ref(v_params_2070_);
lean_del_object(v___x_2048_);
v_a_2111_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2113_ = v___x_2080_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2080_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
}
else
{
lean_object* v_params_2123_; lean_object* v_code_2124_; lean_object* v_n_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2216_; 
v_params_2123_ = lean_ctor_get(v_fst_2061_, 1);
lean_inc_ref(v_params_2123_);
v_code_2124_ = lean_ctor_get(v_fst_2061_, 2);
lean_inc_ref(v_code_2124_);
lean_dec_ref(v_fst_2061_);
v_n_2125_ = lean_ctor_get(v_val_2038_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v_val_2038_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2127_ = v_val_2038_;
v_isShared_2128_ = v_isSharedCheck_2216_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_n_2125_);
lean_dec(v_val_2038_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2216_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v_zero_2129_; uint8_t v_isZero_2130_; 
v_zero_2129_ = lean_unsigned_to_nat(0u);
v_isZero_2130_ = lean_nat_dec_eq(v_n_2125_, v_zero_2129_);
if (v_isZero_2130_ == 1)
{
lean_object* v___x_2131_; 
lean_del_object(v___x_2127_);
lean_dec(v_n_2125_);
lean_dec_ref(v_params_2123_);
lean_del_object(v___x_2064_);
lean_del_object(v___x_2040_);
lean_inc_ref(v_a_2019_);
v___x_2131_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2124_, v_a_2014_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2142_; 
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2134_ = v___x_2131_;
v_isShared_2135_ = v_isSharedCheck_2142_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2131_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2142_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_a_2132_);
v___x_2137_ = v___x_2048_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2139_; 
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 0, v___x_2137_);
v___x_2139_ = v___x_2134_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_2137_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_del_object(v___x_2048_);
v_a_2143_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2131_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2131_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
else
{
lean_object* v_one_2151_; lean_object* v_n_2152_; lean_object* v___x_2154_; 
v_one_2151_ = lean_unsigned_to_nat(1u);
v_n_2152_ = lean_nat_sub(v_n_2125_, v_one_2151_);
lean_dec(v_n_2125_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set_tag(v___x_2127_, 0);
lean_ctor_set(v___x_2127_, 0, v_n_2152_);
v___x_2154_ = v___x_2127_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_n_2152_);
v___x_2154_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
lean_object* v___x_2156_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set_tag(v___x_2040_, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2154_);
v___x_2156_ = v___x_2040_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2154_);
v___x_2156_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1));
v___x_2158_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_2029_, v___x_2156_, v___x_2157_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v_fvarId_2162_; lean_object* v_fvarId_2163_; lean_object* v___x_2164_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref(v___x_2158_);
v___x_2160_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0, &l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0);
v___x_2161_ = lean_array_get_borrowed(v___x_2160_, v_params_2123_, v_zero_2129_);
v_fvarId_2162_ = lean_ctor_get(v___x_2161_, 0);
v_fvarId_2163_ = lean_ctor_get(v_a_2159_, 0);
lean_inc(v_fvarId_2163_);
lean_inc(v_fvarId_2162_);
v___x_2164_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2162_, v_fvarId_2163_, v_a_2015_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v___x_2165_; 
lean_dec_ref(v___x_2164_);
lean_inc_ref(v_a_2019_);
v___x_2165_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2124_, v_a_2014_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v_a_2166_; lean_object* v___x_2167_; 
v_a_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_a_2166_);
lean_dec_ref(v___x_2165_);
v___x_2167_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2029_, v_params_2123_, v_a_2018_);
lean_dec_ref(v_params_2123_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2180_; 
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2180_ == 0)
{
lean_object* v_unused_2181_; 
v_unused_2181_ = lean_ctor_get(v___x_2167_, 0);
lean_dec(v_unused_2181_);
v___x_2169_ = v___x_2167_;
v_isShared_2170_ = v_isSharedCheck_2180_;
goto v_resetjp_2168_;
}
else
{
lean_dec(v___x_2167_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2180_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 1, v_a_2166_);
lean_ctor_set(v___x_2064_, 0, v_a_2159_);
v___x_2172_ = v___x_2064_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2159_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_a_2166_);
v___x_2172_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
lean_object* v___x_2174_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2172_);
v___x_2174_ = v___x_2048_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v___x_2172_);
v___x_2174_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
lean_object* v___x_2176_; 
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 0, v___x_2174_);
v___x_2176_ = v___x_2169_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec(v_a_2166_);
lean_dec(v_a_2159_);
lean_del_object(v___x_2064_);
lean_del_object(v___x_2048_);
v_a_2182_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2167_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2167_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v_a_2159_);
lean_dec_ref(v_params_2123_);
lean_del_object(v___x_2064_);
lean_del_object(v___x_2048_);
v_a_2190_ = lean_ctor_get(v___x_2165_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2165_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2165_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec(v_a_2159_);
lean_dec_ref(v_code_2124_);
lean_dec_ref(v_params_2123_);
lean_del_object(v___x_2064_);
lean_del_object(v___x_2048_);
v_a_2198_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2164_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2164_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref(v_code_2124_);
lean_dec_ref(v_params_2123_);
lean_del_object(v___x_2064_);
lean_del_object(v___x_2048_);
v_a_2206_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2158_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2158_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_code_2217_; lean_object* v___x_2218_; 
lean_del_object(v___x_2064_);
lean_del_object(v___x_2040_);
lean_dec(v_val_2038_);
v_code_2217_ = lean_ctor_get(v_fst_2061_, 0);
lean_inc_ref(v_code_2217_);
lean_dec_ref(v_fst_2061_);
lean_inc_ref(v_a_2019_);
v___x_2218_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2217_, v_a_2014_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2229_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2221_ = v___x_2218_;
v_isShared_2222_ = v_isSharedCheck_2229_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2218_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2229_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_a_2219_);
v___x_2224_ = v___x_2048_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
lean_object* v___x_2226_; 
if (v_isShared_2222_ == 0)
{
lean_ctor_set(v___x_2221_, 0, v___x_2224_);
v___x_2226_ = v___x_2221_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_del_object(v___x_2048_);
v_a_2230_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2218_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2218_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
}
else
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2245_; 
lean_del_object(v___x_2064_);
lean_dec(v_fst_2061_);
lean_del_object(v___x_2048_);
lean_del_object(v___x_2040_);
lean_dec(v_val_2038_);
v_a_2238_ = lean_ctor_get(v___x_2069_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2240_ = v___x_2069_;
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2069_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2243_; 
if (v_isShared_2241_ == 0)
{
v___x_2243_ = v___x_2240_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_a_2238_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_del_object(v___x_2064_);
lean_dec(v_fst_2061_);
lean_del_object(v___x_2048_);
lean_del_object(v___x_2040_);
lean_dec(v_val_2038_);
v_a_2246_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2068_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2068_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2048_);
lean_dec(v_val_2046_);
lean_dec(v___x_2044_);
lean_del_object(v___x_2040_);
lean_dec(v_val_2038_);
lean_del_object(v___x_2036_);
lean_dec_ref(v_cases_2013_);
goto v___jp_2022_;
}
}
}
else
{
lean_dec(v___x_2045_);
lean_dec(v___x_2044_);
lean_del_object(v___x_2040_);
lean_dec(v_val_2038_);
lean_del_object(v___x_2036_);
lean_dec_ref(v_cases_2013_);
goto v___jp_2022_;
}
}
}
else
{
lean_object* v___x_2259_; lean_object* v___x_2261_; 
lean_dec(v_a_2034_);
lean_dec_ref(v_cases_2013_);
v___x_2259_ = lean_box(0);
if (v_isShared_2037_ == 0)
{
lean_ctor_set(v___x_2036_, 0, v___x_2259_);
v___x_2261_ = v___x_2036_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v___x_2259_);
v___x_2261_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
return v___x_2261_;
}
}
}
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
lean_dec_ref(v_cases_2013_);
v_a_2264_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v___x_2033_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2033_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
else
{
lean_object* v___x_2272_; 
lean_dec_ref(v_cases_2013_);
v___x_2272_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_2029_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2281_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2275_ = v___x_2272_;
v_isShared_2276_ = v_isSharedCheck_2281_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2272_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2281_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; lean_object* v___x_2279_; 
v___x_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2277_, 0, v_a_2273_);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 0, v___x_2277_);
v___x_2279_ = v___x_2275_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v___x_2277_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
v_a_2282_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2272_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2272_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
v___jp_2022_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_box(0);
v___x_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2023_);
return v___x_2024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object* v_fvarId_2290_, lean_object* v_i_2291_, lean_object* v_as_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___x_2301_; uint8_t v___x_2302_; 
v___x_2301_ = lean_array_get_size(v_as_2292_);
v___x_2302_ = lean_nat_dec_lt(v_i_2291_, v___x_2301_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; 
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_as_2292_);
return v___x_2303_;
}
else
{
lean_object* v_a_2304_; lean_object* v_a_2306_; 
v_a_2304_ = lean_array_fget_borrowed(v_as_2292_, v_i_2291_);
if (lean_obj_tag(v_a_2304_) == 0)
{
lean_object* v_ctorName_2317_; lean_object* v_params_2318_; lean_object* v_code_2319_; uint8_t v___x_2342_; uint8_t v_a_2344_; lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
v_ctorName_2317_ = lean_ctor_get(v_a_2304_, 0);
v_params_2318_ = lean_ctor_get(v_a_2304_, 1);
v_code_2319_ = lean_ctor_get(v_a_2304_, 2);
v___x_2342_ = 0;
v___x_2375_ = lean_unsigned_to_nat(0u);
v___x_2376_ = lean_array_get_size(v_params_2318_);
v___x_2377_ = lean_nat_dec_lt(v___x_2375_, v___x_2376_);
if (v___x_2377_ == 0)
{
v_a_2344_ = v___x_2377_;
goto v___jp_2343_;
}
else
{
if (v___x_2377_ == 0)
{
v_a_2344_ = v___x_2377_;
goto v___jp_2343_;
}
else
{
size_t v___x_2378_; size_t v___x_2379_; lean_object* v___x_2380_; 
v___x_2378_ = ((size_t)0ULL);
v___x_2379_ = lean_usize_of_nat(v___x_2376_);
v___x_2380_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_params_2318_, v___x_2378_, v___x_2379_, v___y_2299_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; uint8_t v___x_2382_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
lean_inc(v_a_2381_);
lean_dec_ref(v___x_2380_);
v___x_2382_ = lean_unbox(v_a_2381_);
lean_dec(v_a_2381_);
v_a_2344_ = v___x_2382_;
goto v___jp_2343_;
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
lean_dec_ref(v_as_2292_);
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v_a_2383_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2380_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2380_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
}
v___jp_2320_:
{
lean_object* v___x_2321_; 
lean_inc_ref(v_params_2318_);
lean_inc(v_ctorName_2317_);
lean_inc(v_fvarId_2290_);
v___x_2321_ = l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(v_fvarId_2290_, v_ctorName_2317_, v_params_2318_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_object* v_a_2322_; lean_object* v___x_2323_; 
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
lean_inc(v_a_2322_);
lean_dec_ref(v___x_2321_);
lean_inc_ref(v___y_2298_);
lean_inc_ref(v_code_2319_);
v___x_2323_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2319_, v___y_2293_, v___y_2294_, v_a_2322_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
lean_dec(v_a_2322_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v___x_2325_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref(v___x_2323_);
lean_inc_ref(v_a_2304_);
v___x_2325_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2304_, v_a_2324_);
v_a_2306_ = v___x_2325_;
goto v___jp_2305_;
}
else
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
lean_dec_ref(v_as_2292_);
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v_a_2326_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2328_ = v___x_2323_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2323_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2326_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
else
{
lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2341_; 
lean_dec_ref(v_as_2292_);
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v_a_2334_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2336_ = v___x_2321_;
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2321_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2337_ == 0)
{
v___x_2339_ = v___x_2336_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_a_2334_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
}
}
v___jp_2343_:
{
if (lean_obj_tag(v_code_2319_) == 6)
{
goto v___jp_2320_;
}
else
{
if (v_a_2344_ == 0)
{
goto v___jp_2320_;
}
else
{
lean_object* v___x_2345_; 
lean_inc_ref(v_code_2319_);
v___x_2345_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_2342_, v_code_2319_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v___x_2347_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref(v___x_2345_);
v___x_2347_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_2342_, v_code_2319_, v___y_2297_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v___x_2348_; 
lean_dec_ref(v___x_2347_);
v___x_2348_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2294_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
lean_dec_ref(v___x_2348_);
v___x_2349_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2349_, 0, v_a_2346_);
lean_inc_ref(v_a_2304_);
v___x_2350_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2304_, v___x_2349_);
v_a_2306_ = v___x_2350_;
goto v___jp_2305_;
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec(v_a_2346_);
lean_dec_ref(v_as_2292_);
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v_a_2351_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2348_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2348_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
else
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2366_; 
lean_dec(v_a_2346_);
lean_dec_ref(v_as_2292_);
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v_a_2359_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2361_ = v___x_2347_;
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2347_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2362_ == 0)
{
v___x_2364_ = v___x_2361_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_a_2359_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
else
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2374_; 
lean_dec_ref(v_as_2292_);
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v_a_2367_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2369_ = v___x_2345_;
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2345_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2372_; 
if (v_isShared_2370_ == 0)
{
v___x_2372_ = v___x_2369_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_a_2367_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
}
}
}
}
else
{
lean_object* v_code_2391_; lean_object* v___x_2392_; 
v_code_2391_ = lean_ctor_get(v_a_2304_, 0);
lean_inc_ref(v___y_2298_);
lean_inc_ref(v_code_2391_);
v___x_2392_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2391_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2394_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
lean_inc(v_a_2393_);
lean_dec_ref(v___x_2392_);
lean_inc_ref(v_a_2304_);
v___x_2394_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2304_, v_a_2393_);
v_a_2306_ = v___x_2394_;
goto v___jp_2305_;
}
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_dec_ref(v_as_2292_);
lean_dec(v_i_2291_);
lean_dec(v_fvarId_2290_);
v_a_2395_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2392_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2392_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
v___jp_2305_:
{
size_t v___x_2307_; size_t v___x_2308_; uint8_t v___x_2309_; 
v___x_2307_ = lean_ptr_addr(v_a_2304_);
v___x_2308_ = lean_ptr_addr(v_a_2306_);
v___x_2309_ = lean_usize_dec_eq(v___x_2307_, v___x_2308_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2310_ = lean_unsigned_to_nat(1u);
v___x_2311_ = lean_nat_add(v_i_2291_, v___x_2310_);
v___x_2312_ = lean_array_fset(v_as_2292_, v_i_2291_, v_a_2306_);
lean_dec(v_i_2291_);
v_i_2291_ = v___x_2311_;
v_as_2292_ = v___x_2312_;
goto _start;
}
else
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
lean_dec_ref(v_a_2306_);
v___x_2314_ = lean_unsigned_to_nat(1u);
v___x_2315_ = lean_nat_add(v_i_2291_, v___x_2314_);
lean_dec(v_i_2291_);
v_i_2291_ = v___x_2315_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object* v_code_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v___y_2414_; lean_object* v___y_2415_; uint8_t v___y_2416_; lean_object* v___y_2421_; lean_object* v___y_2422_; uint8_t v___y_2423_; lean_object* v___y_2428_; lean_object* v___y_2429_; uint8_t v___y_2450_; lean_object* v___y_2451_; lean_object* v_decl_2452_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v___y_2455_; lean_object* v___y_2456_; lean_object* v___y_2457_; lean_object* v___y_2458_; lean_object* v___y_2459_; uint8_t v___y_2501_; lean_object* v___y_2502_; lean_object* v_decl_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v_decl_2522_; lean_object* v_k_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2598_; lean_object* v___y_2599_; uint8_t v___y_2600_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2791_; uint8_t v___y_2792_; lean_object* v___y_2793_; lean_object* v_decl_2794_; lean_object* v_fvarId_2795_; lean_object* v_type_2796_; lean_object* v_value_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2838_; uint8_t v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; lean_object* v___y_2848_; lean_object* v___y_2886_; lean_object* v___y_2887_; uint8_t v___y_2888_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2904_; lean_object* v___y_2905_; lean_object* v___y_2906_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; lean_object* v___y_2955_; lean_object* v___y_2956_; lean_object* v___y_2957_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; uint8_t v___y_2981_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v___y_3069_; lean_object* v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v_fileName_3290_; lean_object* v_fileMap_3291_; lean_object* v_options_3292_; lean_object* v_currRecDepth_3293_; lean_object* v_maxRecDepth_3294_; lean_object* v_ref_3295_; lean_object* v_currNamespace_3296_; lean_object* v_openDecls_3297_; lean_object* v_initHeartbeats_3298_; lean_object* v_maxHeartbeats_3299_; lean_object* v_quotContext_3300_; lean_object* v_currMacroScope_3301_; uint8_t v_diag_3302_; lean_object* v_cancelTk_x3f_3303_; uint8_t v_suppressElabErrors_3304_; lean_object* v_inheritedTraceOptions_3305_; lean_object* v___x_3335_; uint8_t v___x_3336_; 
v_fileName_3290_ = lean_ctor_get(v_a_2410_, 0);
v_fileMap_3291_ = lean_ctor_get(v_a_2410_, 1);
v_options_3292_ = lean_ctor_get(v_a_2410_, 2);
v_currRecDepth_3293_ = lean_ctor_get(v_a_2410_, 3);
v_maxRecDepth_3294_ = lean_ctor_get(v_a_2410_, 4);
v_ref_3295_ = lean_ctor_get(v_a_2410_, 5);
v_currNamespace_3296_ = lean_ctor_get(v_a_2410_, 6);
v_openDecls_3297_ = lean_ctor_get(v_a_2410_, 7);
v_initHeartbeats_3298_ = lean_ctor_get(v_a_2410_, 8);
v_maxHeartbeats_3299_ = lean_ctor_get(v_a_2410_, 9);
v_quotContext_3300_ = lean_ctor_get(v_a_2410_, 10);
v_currMacroScope_3301_ = lean_ctor_get(v_a_2410_, 11);
v_diag_3302_ = lean_ctor_get_uint8(v_a_2410_, sizeof(void*)*14);
v_cancelTk_x3f_3303_ = lean_ctor_get(v_a_2410_, 12);
v_suppressElabErrors_3304_ = lean_ctor_get_uint8(v_a_2410_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3305_ = lean_ctor_get(v_a_2410_, 13);
v___x_3335_ = lean_unsigned_to_nat(0u);
v___x_3336_ = lean_nat_dec_eq(v_maxRecDepth_3294_, v___x_3335_);
if (v___x_3336_ == 0)
{
uint8_t v___x_3337_; 
v___x_3337_ = lean_nat_dec_eq(v_currRecDepth_3293_, v_maxRecDepth_3294_);
if (v___x_3337_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_3305_);
lean_inc(v_cancelTk_x3f_3303_);
lean_inc(v_currMacroScope_3301_);
lean_inc(v_quotContext_3300_);
lean_inc(v_maxHeartbeats_3299_);
lean_inc(v_initHeartbeats_3298_);
lean_inc(v_openDecls_3297_);
lean_inc(v_currNamespace_3296_);
lean_inc(v_ref_3295_);
lean_inc(v_maxRecDepth_3294_);
lean_inc(v_currRecDepth_3293_);
lean_inc_ref(v_options_3292_);
lean_inc_ref(v_fileMap_3291_);
lean_inc_ref(v_fileName_3290_);
lean_dec_ref(v_a_2410_);
goto v___jp_3306_;
}
else
{
lean_object* v___x_3338_; 
lean_dec_ref(v_code_2404_);
v___x_3338_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_box(0), v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_);
lean_dec_ref(v_a_2410_);
return v___x_3338_;
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_3305_);
lean_inc(v_cancelTk_x3f_3303_);
lean_inc(v_currMacroScope_3301_);
lean_inc(v_quotContext_3300_);
lean_inc(v_maxHeartbeats_3299_);
lean_inc(v_initHeartbeats_3298_);
lean_inc(v_openDecls_3297_);
lean_inc(v_currNamespace_3296_);
lean_inc(v_ref_3295_);
lean_inc(v_maxRecDepth_3294_);
lean_inc(v_currRecDepth_3293_);
lean_inc_ref(v_options_3292_);
lean_inc_ref(v_fileMap_3291_);
lean_inc_ref(v_fileName_3290_);
lean_dec_ref(v_a_2410_);
goto v___jp_3306_;
}
v___jp_2413_:
{
if (v___y_2416_ == 0)
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
lean_dec_ref(v_code_2404_);
v___x_2417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___y_2415_);
lean_ctor_set(v___x_2417_, 1, v___y_2414_);
v___x_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
return v___x_2418_;
}
else
{
lean_object* v___x_2419_; 
lean_dec_ref(v___y_2415_);
lean_dec_ref(v___y_2414_);
v___x_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2419_, 0, v_code_2404_);
return v___x_2419_;
}
}
v___jp_2420_:
{
if (v___y_2423_ == 0)
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
lean_dec_ref(v_code_2404_);
v___x_2424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___y_2422_);
lean_ctor_set(v___x_2424_, 1, v___y_2421_);
v___x_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
return v___x_2425_;
}
else
{
lean_object* v___x_2426_; 
lean_dec_ref(v___y_2422_);
lean_dec_ref(v___y_2421_);
v___x_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2426_, 0, v_code_2404_);
return v___x_2426_;
}
}
v___jp_2427_:
{
switch(lean_obj_tag(v_code_2404_))
{
case 1:
{
lean_object* v_decl_2430_; lean_object* v_k_2431_; size_t v___x_2432_; size_t v___x_2433_; uint8_t v___x_2434_; 
v_decl_2430_ = lean_ctor_get(v_code_2404_, 0);
v_k_2431_ = lean_ctor_get(v_code_2404_, 1);
v___x_2432_ = lean_ptr_addr(v_k_2431_);
v___x_2433_ = lean_ptr_addr(v___y_2428_);
v___x_2434_ = lean_usize_dec_eq(v___x_2432_, v___x_2433_);
if (v___x_2434_ == 0)
{
v___y_2414_ = v___y_2428_;
v___y_2415_ = v___y_2429_;
v___y_2416_ = v___x_2434_;
goto v___jp_2413_;
}
else
{
size_t v___x_2435_; size_t v___x_2436_; uint8_t v___x_2437_; 
v___x_2435_ = lean_ptr_addr(v_decl_2430_);
v___x_2436_ = lean_ptr_addr(v___y_2429_);
v___x_2437_ = lean_usize_dec_eq(v___x_2435_, v___x_2436_);
v___y_2414_ = v___y_2428_;
v___y_2415_ = v___y_2429_;
v___y_2416_ = v___x_2437_;
goto v___jp_2413_;
}
}
case 2:
{
lean_object* v_decl_2438_; lean_object* v_k_2439_; size_t v___x_2440_; size_t v___x_2441_; uint8_t v___x_2442_; 
v_decl_2438_ = lean_ctor_get(v_code_2404_, 0);
v_k_2439_ = lean_ctor_get(v_code_2404_, 1);
v___x_2440_ = lean_ptr_addr(v_k_2439_);
v___x_2441_ = lean_ptr_addr(v___y_2428_);
v___x_2442_ = lean_usize_dec_eq(v___x_2440_, v___x_2441_);
if (v___x_2442_ == 0)
{
v___y_2421_ = v___y_2428_;
v___y_2422_ = v___y_2429_;
v___y_2423_ = v___x_2442_;
goto v___jp_2420_;
}
else
{
size_t v___x_2443_; size_t v___x_2444_; uint8_t v___x_2445_; 
v___x_2443_ = lean_ptr_addr(v_decl_2438_);
v___x_2444_ = lean_ptr_addr(v___y_2429_);
v___x_2445_ = lean_usize_dec_eq(v___x_2443_, v___x_2444_);
v___y_2421_ = v___y_2428_;
v___y_2422_ = v___y_2429_;
v___y_2423_ = v___x_2445_;
goto v___jp_2420_;
}
}
default: 
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
lean_dec_ref(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec_ref(v_code_2404_);
v___x_2446_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__3, &l_Lean_Compiler_LCNF_Simp_simp___closed__3_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3);
v___x_2447_ = l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(v___x_2446_);
v___x_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
return v___x_2448_;
}
}
}
v___jp_2449_:
{
lean_object* v___x_2460_; 
lean_inc_ref(v___y_2458_);
v___x_2460_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2451_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v_fvarId_2462_; lean_object* v___x_2463_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref(v___x_2460_);
v_fvarId_2462_ = lean_ctor_get(v_decl_2452_, 0);
v___x_2463_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2462_, v___y_2454_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; uint8_t v___x_2465_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2464_);
lean_dec_ref(v___x_2463_);
v___x_2465_ = lean_unbox(v_a_2464_);
lean_dec(v_a_2464_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; 
lean_dec_ref(v___y_2458_);
lean_dec_ref(v_code_2404_);
v___x_2466_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2452_, v___y_2454_, v___y_2457_);
lean_dec_ref(v_decl_2452_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2473_ == 0)
{
lean_object* v_unused_2474_; 
v_unused_2474_ = lean_ctor_get(v___x_2466_, 0);
lean_dec(v_unused_2474_);
v___x_2468_ = v___x_2466_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_dec(v___x_2466_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v_a_2461_);
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2461_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec(v_a_2461_);
v_a_2475_ = lean_ctor_get(v___x_2466_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2466_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2466_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
if (v___y_2450_ == 0)
{
lean_dec_ref(v___y_2458_);
v___y_2428_ = v_a_2461_;
v___y_2429_ = v_decl_2452_;
goto v___jp_2427_;
}
else
{
lean_object* v___x_2483_; 
lean_inc_ref(v_decl_2452_);
v___x_2483_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_decl_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec_ref(v___y_2458_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_dec_ref(v___x_2483_);
v___y_2428_ = v_a_2461_;
v___y_2429_ = v_decl_2452_;
goto v___jp_2427_;
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
lean_dec(v_a_2461_);
lean_dec_ref(v_decl_2452_);
lean_dec_ref(v_code_2404_);
v_a_2484_ = lean_ctor_get(v___x_2483_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2483_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2483_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
}
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_dec(v_a_2461_);
lean_dec_ref(v___y_2458_);
lean_dec_ref(v_decl_2452_);
lean_dec_ref(v_code_2404_);
v_a_2492_ = lean_ctor_get(v___x_2463_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2463_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2463_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
else
{
lean_dec_ref(v___y_2458_);
lean_dec_ref(v_decl_2452_);
lean_dec_ref(v_code_2404_);
return v___x_2460_;
}
}
v___jp_2500_:
{
lean_object* v___x_2511_; 
v___x_2511_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref(v___x_2511_);
v___y_2450_ = v___y_2501_;
v___y_2451_ = v___y_2502_;
v_decl_2452_ = v_a_2512_;
v___y_2453_ = v___y_2504_;
v___y_2454_ = v___y_2505_;
v___y_2455_ = v___y_2506_;
v___y_2456_ = v___y_2507_;
v___y_2457_ = v___y_2508_;
v___y_2458_ = v___y_2509_;
v___y_2459_ = v___y_2510_;
goto v___jp_2449_;
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
lean_dec_ref(v___y_2509_);
lean_dec_ref(v___y_2502_);
lean_dec_ref(v_code_2404_);
v_a_2513_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2511_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2511_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
v___jp_2521_:
{
lean_object* v_fvarId_2531_; lean_object* v_params_2532_; lean_object* v_type_2533_; lean_object* v___x_2534_; 
v_fvarId_2531_ = lean_ctor_get(v_decl_2522_, 0);
v_params_2532_ = lean_ctor_get(v_decl_2522_, 2);
v_type_2533_ = lean_ctor_get(v_decl_2522_, 3);
v___x_2534_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_2531_, v___y_2525_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; uint8_t v___x_2536_; uint8_t v___x_2537_; 
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref(v___x_2534_);
v___x_2536_ = 0;
v___x_2537_ = lean_unbox(v_a_2535_);
if (v___x_2537_ == 0)
{
uint8_t v___x_2538_; 
v___x_2538_ = l_Lean_Compiler_LCNF_Code_isFun___redArg(v_code_2404_);
if (v___x_2538_ == 0)
{
uint8_t v___x_2539_; 
v___x_2539_ = lean_unbox(v_a_2535_);
lean_dec(v_a_2535_);
v___y_2501_ = v___x_2539_;
v___y_2502_ = v_k_2523_;
v_decl_2503_ = v_decl_2522_;
v___y_2504_ = v___y_2524_;
v___y_2505_ = v___y_2525_;
v___y_2506_ = v___y_2526_;
v___y_2507_ = v___y_2527_;
v___y_2508_ = v___y_2528_;
v___y_2509_ = v___y_2529_;
v___y_2510_ = v___y_2530_;
goto v___jp_2500_;
}
else
{
uint8_t v___x_2540_; 
lean_inc_ref(v_type_2533_);
v___x_2540_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_2533_, v_params_2532_);
if (v___x_2540_ == 0)
{
uint8_t v___x_2541_; 
v___x_2541_ = lean_unbox(v_a_2535_);
lean_dec(v_a_2535_);
v___y_2501_ = v___x_2541_;
v___y_2502_ = v_k_2523_;
v_decl_2503_ = v_decl_2522_;
v___y_2504_ = v___y_2524_;
v___y_2505_ = v___y_2525_;
v___y_2506_ = v___y_2526_;
v___y_2507_ = v___y_2527_;
v___y_2508_ = v___y_2528_;
v___y_2509_ = v___y_2529_;
v___y_2510_ = v___y_2530_;
goto v___jp_2500_;
}
else
{
lean_object* v___x_2542_; lean_object* v_subst_2543_; uint8_t v___x_2544_; lean_object* v___x_2545_; 
v___x_2542_ = lean_st_ref_get(v___y_2525_);
v_subst_2543_ = lean_ctor_get(v___x_2542_, 0);
lean_inc_ref(v_subst_2543_);
lean_dec(v___x_2542_);
v___x_2544_ = lean_unbox(v_a_2535_);
v___x_2545_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2536_, v___x_2544_, v_decl_2522_, v_subst_2543_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
lean_dec_ref(v_subst_2543_);
if (lean_obj_tag(v___x_2545_) == 0)
{
lean_object* v_a_2546_; lean_object* v___x_2547_; 
v_a_2546_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_a_2546_);
lean_dec_ref(v___x_2545_);
v___x_2547_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_2546_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2549_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref(v___x_2547_);
v___x_2549_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2525_);
if (lean_obj_tag(v___x_2549_) == 0)
{
uint8_t v___x_2550_; 
lean_dec_ref(v___x_2549_);
v___x_2550_ = lean_unbox(v_a_2535_);
lean_dec(v_a_2535_);
v___y_2501_ = v___x_2550_;
v___y_2502_ = v_k_2523_;
v_decl_2503_ = v_a_2548_;
v___y_2504_ = v___y_2524_;
v___y_2505_ = v___y_2525_;
v___y_2506_ = v___y_2526_;
v___y_2507_ = v___y_2527_;
v___y_2508_ = v___y_2528_;
v___y_2509_ = v___y_2529_;
v___y_2510_ = v___y_2530_;
goto v___jp_2500_;
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_dec(v_a_2548_);
lean_dec(v_a_2535_);
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_k_2523_);
lean_dec_ref(v_code_2404_);
v_a_2551_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2549_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2549_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
lean_dec(v_a_2535_);
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_k_2523_);
lean_dec_ref(v_code_2404_);
v_a_2559_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2547_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2547_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v_a_2535_);
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_k_2523_);
lean_dec_ref(v_code_2404_);
v_a_2567_ = lean_ctor_get(v___x_2545_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2545_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2545_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
}
}
else
{
lean_object* v___x_2575_; lean_object* v_subst_2576_; uint8_t v___x_2577_; lean_object* v___x_2578_; 
v___x_2575_ = lean_st_ref_get(v___y_2525_);
v_subst_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc_ref(v_subst_2576_);
lean_dec(v___x_2575_);
v___x_2577_ = 0;
v___x_2578_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2536_, v___x_2577_, v_decl_2522_, v_subst_2576_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
lean_dec_ref(v_subst_2576_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; uint8_t v___x_2580_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref(v___x_2578_);
v___x_2580_ = lean_unbox(v_a_2535_);
lean_dec(v_a_2535_);
v___y_2450_ = v___x_2580_;
v___y_2451_ = v_k_2523_;
v_decl_2452_ = v_a_2579_;
v___y_2453_ = v___y_2524_;
v___y_2454_ = v___y_2525_;
v___y_2455_ = v___y_2526_;
v___y_2456_ = v___y_2527_;
v___y_2457_ = v___y_2528_;
v___y_2458_ = v___y_2529_;
v___y_2459_ = v___y_2530_;
goto v___jp_2449_;
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_dec(v_a_2535_);
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_k_2523_);
lean_dec_ref(v_code_2404_);
v_a_2581_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2578_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2578_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2596_; 
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_k_2523_);
lean_dec_ref(v_decl_2522_);
lean_dec_ref(v_code_2404_);
v_a_2589_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2591_ = v___x_2534_;
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2534_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2594_; 
if (v_isShared_2592_ == 0)
{
v___x_2594_ = v___x_2591_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v_a_2589_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
v___jp_2597_:
{
if (v___y_2600_ == 0)
{
lean_object* v___x_2601_; lean_object* v___x_2602_; 
lean_dec_ref(v_code_2404_);
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___y_2599_);
lean_ctor_set(v___x_2601_, 1, v___y_2598_);
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
return v___x_2602_;
}
else
{
lean_object* v___x_2603_; 
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
v___x_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2603_, 0, v_code_2404_);
return v___x_2603_;
}
}
v___jp_2604_:
{
lean_object* v___x_2615_; 
lean_inc_ref(v___y_2612_);
v___x_2615_ = l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(v___y_2612_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref(v___x_2615_);
if (lean_obj_tag(v_a_2616_) == 1)
{
lean_object* v_val_2617_; lean_object* v___x_2618_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v_code_2404_);
v_val_2617_ = lean_ctor_get(v_a_2616_, 0);
lean_inc(v_val_2617_);
lean_dec_ref(v_a_2616_);
v___x_2618_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2610_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v___x_2619_; 
lean_dec_ref(v___x_2618_);
lean_inc_ref(v___y_2609_);
v___x_2619_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2605_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v_a_2620_; lean_object* v___x_2621_; 
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref(v___x_2619_);
v___x_2621_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_val_2617_, v_a_2620_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
lean_dec_ref(v___y_2609_);
lean_dec(v_val_2617_);
return v___x_2621_;
}
else
{
lean_dec(v_val_2617_);
lean_dec_ref(v___y_2609_);
return v___x_2619_;
}
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
lean_dec(v_val_2617_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
v_a_2622_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2618_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2618_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2622_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
else
{
lean_object* v___x_2630_; 
lean_dec(v_a_2616_);
lean_inc_ref(v___y_2612_);
v___x_2630_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v___y_2612_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; 
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
lean_inc(v_a_2631_);
lean_dec_ref(v___x_2630_);
if (lean_obj_tag(v_a_2631_) == 1)
{
lean_object* v_val_2632_; lean_object* v___x_2633_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v_code_2404_);
v_val_2632_ = lean_ctor_get(v_a_2631_, 0);
lean_inc(v_val_2632_);
lean_dec_ref(v_a_2631_);
v___x_2633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2633_, 0, v_val_2632_);
lean_ctor_set(v___x_2633_, 1, v___y_2605_);
v_code_2404_ = v___x_2633_;
v_a_2405_ = v___y_2607_;
v_a_2406_ = v___y_2610_;
v_a_2407_ = v___y_2614_;
v_a_2408_ = v___y_2606_;
v_a_2409_ = v___y_2608_;
v_a_2410_ = v___y_2609_;
v_a_2411_ = v___y_2611_;
goto _start;
}
else
{
lean_object* v_fvarId_2635_; lean_object* v_value_2636_; lean_object* v___x_2637_; 
lean_dec(v_a_2631_);
v_fvarId_2635_ = lean_ctor_get(v___y_2612_, 0);
v_value_2636_ = lean_ctor_get(v___y_2612_, 3);
v___x_2637_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_2636_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref(v___x_2637_);
if (lean_obj_tag(v_a_2638_) == 1)
{
lean_object* v_val_2639_; lean_object* v___x_2640_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v_code_2404_);
v_val_2639_ = lean_ctor_get(v_a_2638_, 0);
lean_inc(v_val_2639_);
lean_dec_ref(v_a_2638_);
lean_inc(v_fvarId_2635_);
v___x_2640_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2635_, v_val_2639_, v___y_2610_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v___x_2641_; 
lean_dec_ref(v___x_2640_);
v___x_2641_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2612_, v___y_2610_, v___y_2608_);
lean_dec_ref(v___y_2612_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_dec_ref(v___x_2641_);
v_code_2404_ = v___y_2605_;
v_a_2405_ = v___y_2607_;
v_a_2406_ = v___y_2610_;
v_a_2407_ = v___y_2614_;
v_a_2408_ = v___y_2606_;
v_a_2409_ = v___y_2608_;
v_a_2410_ = v___y_2609_;
v_a_2411_ = v___y_2611_;
goto _start;
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
v_a_2643_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2641_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2641_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
v_a_2651_ = lean_ctor_get(v___x_2640_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2640_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2640_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
}
else
{
lean_object* v___x_2659_; 
lean_dec(v_a_2638_);
lean_inc_ref(v___y_2605_);
lean_inc_ref(v___y_2612_);
v___x_2659_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v___y_2612_, v___y_2605_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref(v___x_2659_);
if (lean_obj_tag(v_a_2660_) == 1)
{
lean_object* v_val_2661_; lean_object* v___x_2662_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_val_2661_ = lean_ctor_get(v_a_2660_, 0);
lean_inc(v_val_2661_);
lean_dec_ref(v_a_2660_);
v___x_2662_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2612_, v___y_2610_, v___y_2608_);
lean_dec_ref(v___y_2612_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2669_ == 0)
{
lean_object* v_unused_2670_; 
v_unused_2670_ = lean_ctor_get(v___x_2662_, 0);
lean_dec(v_unused_2670_);
v___x_2664_ = v___x_2662_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_dec(v___x_2662_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 0, v_val_2661_);
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_val_2661_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
else
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2678_; 
lean_dec(v_val_2661_);
v_a_2671_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2673_ = v___x_2662_;
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2662_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2676_; 
if (v_isShared_2674_ == 0)
{
v___x_2676_ = v___x_2673_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_a_2671_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
}
}
else
{
lean_object* v___x_2679_; 
lean_dec(v_a_2660_);
lean_inc(v_value_2636_);
v___x_2679_ = l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(v_value_2636_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref(v___x_2679_);
if (lean_obj_tag(v_a_2680_) == 1)
{
lean_object* v_val_2681_; lean_object* v_fst_2682_; lean_object* v_snd_2683_; lean_object* v___x_2684_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v_code_2404_);
v_val_2681_ = lean_ctor_get(v_a_2680_, 0);
lean_inc(v_val_2681_);
lean_dec_ref(v_a_2680_);
v_fst_2682_ = lean_ctor_get(v_val_2681_, 0);
lean_inc(v_fst_2682_);
v_snd_2683_ = lean_ctor_get(v_val_2681_, 1);
lean_inc(v_snd_2683_);
lean_dec(v_val_2681_);
lean_inc(v_fvarId_2635_);
v___x_2684_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2635_, v_snd_2683_, v___y_2610_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v___x_2685_; 
lean_dec_ref(v___x_2684_);
v___x_2685_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2612_, v___y_2610_, v___y_2608_);
lean_dec_ref(v___y_2612_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v___x_2686_; 
lean_dec_ref(v___x_2685_);
lean_inc_ref(v___y_2609_);
v___x_2686_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2605_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v___x_2688_; 
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref(v___x_2686_);
v___x_2688_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_fst_2682_, v_a_2687_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
lean_dec_ref(v___y_2609_);
lean_dec(v_fst_2682_);
return v___x_2688_;
}
else
{
lean_dec(v_fst_2682_);
lean_dec_ref(v___y_2609_);
return v___x_2686_;
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec(v_fst_2682_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
v_a_2689_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2685_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2685_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
lean_dec(v_fst_2682_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
v_a_2697_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2699_ = v___x_2684_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2684_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
}
else
{
lean_object* v___x_2705_; 
lean_dec(v_a_2680_);
lean_inc_ref(v___y_2609_);
lean_inc_ref(v___y_2605_);
v___x_2705_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2605_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2707_; 
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
lean_inc(v_a_2706_);
lean_dec_ref(v___x_2705_);
v___x_2707_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2635_, v___y_2610_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_a_2708_; uint8_t v___x_2709_; 
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
lean_inc(v_a_2708_);
lean_dec_ref(v___x_2707_);
v___x_2709_ = lean_unbox(v_a_2708_);
lean_dec(v_a_2708_);
if (v___x_2709_ == 0)
{
lean_object* v___x_2710_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v___x_2710_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2612_, v___y_2610_, v___y_2608_);
lean_dec_ref(v___y_2612_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2717_ == 0)
{
lean_object* v_unused_2718_; 
v_unused_2718_ = lean_ctor_get(v___x_2710_, 0);
lean_dec(v_unused_2718_);
v___x_2712_ = v___x_2710_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_dec(v___x_2710_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v_a_2706_);
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2706_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
else
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
lean_dec(v_a_2706_);
v_a_2719_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2710_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2710_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2719_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
else
{
lean_object* v___x_2727_; 
lean_inc_ref(v___y_2612_);
v___x_2727_ = l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(v___y_2612_, v___y_2607_, v___y_2610_, v___y_2614_, v___y_2606_, v___y_2608_, v___y_2609_, v___y_2611_);
lean_dec_ref(v___y_2609_);
if (lean_obj_tag(v___x_2727_) == 0)
{
size_t v___x_2728_; size_t v___x_2729_; uint8_t v___x_2730_; 
lean_dec_ref(v___x_2727_);
v___x_2728_ = lean_ptr_addr(v___y_2605_);
lean_dec_ref(v___y_2605_);
v___x_2729_ = lean_ptr_addr(v_a_2706_);
v___x_2730_ = lean_usize_dec_eq(v___x_2728_, v___x_2729_);
if (v___x_2730_ == 0)
{
lean_dec_ref(v___y_2613_);
v___y_2598_ = v_a_2706_;
v___y_2599_ = v___y_2612_;
v___y_2600_ = v___x_2730_;
goto v___jp_2597_;
}
else
{
size_t v___x_2731_; size_t v___x_2732_; uint8_t v___x_2733_; 
v___x_2731_ = lean_ptr_addr(v___y_2613_);
lean_dec_ref(v___y_2613_);
v___x_2732_ = lean_ptr_addr(v___y_2612_);
v___x_2733_ = lean_usize_dec_eq(v___x_2731_, v___x_2732_);
v___y_2598_ = v_a_2706_;
v___y_2599_ = v___y_2612_;
v___y_2600_ = v___x_2733_;
goto v___jp_2597_;
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v_a_2706_);
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_a_2734_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2727_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2727_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec(v_a_2706_);
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_a_2742_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2707_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2707_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
else
{
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
return v___x_2705_;
}
}
}
else
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_a_2750_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2752_ = v___x_2679_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2679_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_a_2750_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
}
}
else
{
lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_a_2758_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v___x_2659_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_dec(v___x_2659_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_a_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
}
}
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_a_2766_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2637_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2637_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_a_2774_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2630_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2630_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec_ref(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v___y_2605_);
lean_dec_ref(v_code_2404_);
v_a_2782_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2615_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2615_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
v___jp_2790_:
{
uint8_t v___x_2805_; 
v___x_2805_ = l_Lean_Expr_isErased(v_type_2796_);
lean_dec_ref(v_type_2796_);
if (v___x_2805_ == 0)
{
lean_dec(v_value_2797_);
lean_dec(v_fvarId_2795_);
v___y_2605_ = v___y_2791_;
v___y_2606_ = v___y_2801_;
v___y_2607_ = v___y_2798_;
v___y_2608_ = v___y_2802_;
v___y_2609_ = v___y_2803_;
v___y_2610_ = v___y_2799_;
v___y_2611_ = v___y_2804_;
v___y_2612_ = v_decl_2794_;
v___y_2613_ = v___y_2793_;
v___y_2614_ = v___y_2800_;
goto v___jp_2604_;
}
else
{
lean_object* v___x_2806_; uint8_t v___x_2807_; 
v___x_2806_ = lean_box(1);
v___x_2807_ = l_Lean_Compiler_LCNF_instBEqLetValue_beq(v___y_2792_, v_value_2797_, v___x_2806_);
lean_dec(v_value_2797_);
if (v___x_2807_ == 0)
{
if (v___x_2805_ == 0)
{
lean_dec(v_fvarId_2795_);
v___y_2605_ = v___y_2791_;
v___y_2606_ = v___y_2801_;
v___y_2607_ = v___y_2798_;
v___y_2608_ = v___y_2802_;
v___y_2609_ = v___y_2803_;
v___y_2610_ = v___y_2799_;
v___y_2611_ = v___y_2804_;
v___y_2612_ = v_decl_2794_;
v___y_2613_ = v___y_2793_;
v___y_2614_ = v___y_2800_;
goto v___jp_2604_;
}
else
{
lean_object* v___x_2808_; lean_object* v_subst_2809_; lean_object* v_used_2810_; lean_object* v_binderRenaming_2811_; lean_object* v_funDeclInfoMap_2812_; uint8_t v_simplified_2813_; lean_object* v_visited_2814_; lean_object* v_inline_2815_; lean_object* v_inlineLocal_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2836_; 
lean_dec_ref(v___y_2793_);
lean_dec_ref(v_code_2404_);
v___x_2808_ = lean_st_ref_take(v___y_2799_);
v_subst_2809_ = lean_ctor_get(v___x_2808_, 0);
v_used_2810_ = lean_ctor_get(v___x_2808_, 1);
v_binderRenaming_2811_ = lean_ctor_get(v___x_2808_, 2);
v_funDeclInfoMap_2812_ = lean_ctor_get(v___x_2808_, 3);
v_simplified_2813_ = lean_ctor_get_uint8(v___x_2808_, sizeof(void*)*7);
v_visited_2814_ = lean_ctor_get(v___x_2808_, 4);
v_inline_2815_ = lean_ctor_get(v___x_2808_, 5);
v_inlineLocal_2816_ = lean_ctor_get(v___x_2808_, 6);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2818_ = v___x_2808_;
v_isShared_2819_ = v_isSharedCheck_2836_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_inlineLocal_2816_);
lean_inc(v_inline_2815_);
lean_inc(v_visited_2814_);
lean_inc(v_funDeclInfoMap_2812_);
lean_inc(v_binderRenaming_2811_);
lean_inc(v_used_2810_);
lean_inc(v_subst_2809_);
lean_dec(v___x_2808_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2836_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2823_; 
v___x_2820_ = lean_box(0);
v___x_2821_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_2809_, v_fvarId_2795_, v___x_2820_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 0, v___x_2821_);
v___x_2823_ = v___x_2818_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v___x_2821_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_used_2810_);
lean_ctor_set(v_reuseFailAlloc_2835_, 2, v_binderRenaming_2811_);
lean_ctor_set(v_reuseFailAlloc_2835_, 3, v_funDeclInfoMap_2812_);
lean_ctor_set(v_reuseFailAlloc_2835_, 4, v_visited_2814_);
lean_ctor_set(v_reuseFailAlloc_2835_, 5, v_inline_2815_);
lean_ctor_set(v_reuseFailAlloc_2835_, 6, v_inlineLocal_2816_);
lean_ctor_set_uint8(v_reuseFailAlloc_2835_, sizeof(void*)*7, v_simplified_2813_);
v___x_2823_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = lean_st_ref_set(v___y_2799_, v___x_2823_);
v___x_2825_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2794_, v___y_2799_, v___y_2802_);
lean_dec_ref(v_decl_2794_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_dec_ref(v___x_2825_);
v_code_2404_ = v___y_2791_;
v_a_2405_ = v___y_2798_;
v_a_2406_ = v___y_2799_;
v_a_2407_ = v___y_2800_;
v_a_2408_ = v___y_2801_;
v_a_2409_ = v___y_2802_;
v_a_2410_ = v___y_2803_;
v_a_2411_ = v___y_2804_;
goto _start;
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec_ref(v___y_2803_);
lean_dec_ref(v___y_2791_);
v_a_2827_ = lean_ctor_get(v___x_2825_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2825_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2825_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_2795_);
v___y_2605_ = v___y_2791_;
v___y_2606_ = v___y_2801_;
v___y_2607_ = v___y_2798_;
v___y_2608_ = v___y_2802_;
v___y_2609_ = v___y_2803_;
v___y_2610_ = v___y_2799_;
v___y_2611_ = v___y_2804_;
v___y_2612_ = v_decl_2794_;
v___y_2613_ = v___y_2793_;
v___y_2614_ = v___y_2800_;
goto v___jp_2604_;
}
}
}
v___jp_2837_:
{
lean_object* v_fvarId_2849_; lean_object* v_type_2850_; lean_object* v_value_2851_; lean_object* v___x_2852_; 
v_fvarId_2849_ = lean_ctor_get(v___y_2840_, 0);
v_type_2850_ = lean_ctor_get(v___y_2840_, 2);
v_value_2851_ = lean_ctor_get(v___y_2840_, 3);
lean_inc(v_value_2851_);
v___x_2852_ = l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(v_value_2851_, v___y_2842_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2853_);
lean_dec_ref(v___x_2852_);
if (lean_obj_tag(v_a_2853_) == 1)
{
lean_object* v_val_2854_; lean_object* v___x_2855_; 
v_val_2854_ = lean_ctor_get(v_a_2853_, 0);
lean_inc(v_val_2854_);
lean_dec_ref(v_a_2853_);
v___x_2855_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2843_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v___x_2856_; 
lean_dec_ref(v___x_2855_);
v___x_2856_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___y_2839_, v___y_2840_, v_val_2854_, v___y_2846_);
if (lean_obj_tag(v___x_2856_) == 0)
{
lean_object* v_a_2857_; lean_object* v_fvarId_2858_; lean_object* v_type_2859_; lean_object* v_value_2860_; 
v_a_2857_ = lean_ctor_get(v___x_2856_, 0);
lean_inc(v_a_2857_);
lean_dec_ref(v___x_2856_);
v_fvarId_2858_ = lean_ctor_get(v_a_2857_, 0);
lean_inc(v_fvarId_2858_);
v_type_2859_ = lean_ctor_get(v_a_2857_, 2);
lean_inc_ref(v_type_2859_);
v_value_2860_ = lean_ctor_get(v_a_2857_, 3);
lean_inc(v_value_2860_);
v___y_2791_ = v___y_2838_;
v___y_2792_ = v___y_2839_;
v___y_2793_ = v___y_2841_;
v_decl_2794_ = v_a_2857_;
v_fvarId_2795_ = v_fvarId_2858_;
v_type_2796_ = v_type_2859_;
v_value_2797_ = v_value_2860_;
v___y_2798_ = v___y_2842_;
v___y_2799_ = v___y_2843_;
v___y_2800_ = v___y_2844_;
v___y_2801_ = v___y_2845_;
v___y_2802_ = v___y_2846_;
v___y_2803_ = v___y_2847_;
v___y_2804_ = v___y_2848_;
goto v___jp_2790_;
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
lean_dec_ref(v___y_2847_);
lean_dec_ref(v___y_2841_);
lean_dec_ref(v___y_2838_);
lean_dec_ref(v_code_2404_);
v_a_2861_ = lean_ctor_get(v___x_2856_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v___x_2856_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2856_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2861_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_dec(v_val_2854_);
lean_dec_ref(v___y_2847_);
lean_dec_ref(v___y_2841_);
lean_dec_ref(v___y_2840_);
lean_dec_ref(v___y_2838_);
lean_dec_ref(v_code_2404_);
v_a_2869_ = lean_ctor_get(v___x_2855_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2855_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2855_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2855_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
else
{
lean_inc(v_value_2851_);
lean_inc_ref(v_type_2850_);
lean_inc(v_fvarId_2849_);
lean_dec(v_a_2853_);
v___y_2791_ = v___y_2838_;
v___y_2792_ = v___y_2839_;
v___y_2793_ = v___y_2841_;
v_decl_2794_ = v___y_2840_;
v_fvarId_2795_ = v_fvarId_2849_;
v_type_2796_ = v_type_2850_;
v_value_2797_ = v_value_2851_;
v___y_2798_ = v___y_2842_;
v___y_2799_ = v___y_2843_;
v___y_2800_ = v___y_2844_;
v___y_2801_ = v___y_2845_;
v___y_2802_ = v___y_2846_;
v___y_2803_ = v___y_2847_;
v___y_2804_ = v___y_2848_;
goto v___jp_2790_;
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
lean_dec_ref(v___y_2847_);
lean_dec_ref(v___y_2841_);
lean_dec_ref(v___y_2840_);
lean_dec_ref(v___y_2838_);
lean_dec_ref(v_code_2404_);
v_a_2877_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2852_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2852_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
v___jp_2885_:
{
if (v___y_2888_ == 0)
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec_ref(v_code_2404_);
v___x_2889_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___y_2887_);
lean_ctor_set(v___x_2889_, 1, v___y_2886_);
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
return v___x_2890_;
}
else
{
lean_object* v___x_2891_; 
lean_dec(v___y_2887_);
lean_dec_ref(v___y_2886_);
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v_code_2404_);
return v___x_2891_;
}
}
v___jp_2892_:
{
uint8_t v___x_2897_; 
v___x_2897_ = l_Lean_instBEqFVarId_beq(v___y_2896_, v___y_2893_);
lean_dec(v___y_2896_);
if (v___x_2897_ == 0)
{
lean_dec_ref(v___y_2895_);
v___y_2886_ = v___y_2894_;
v___y_2887_ = v___y_2893_;
v___y_2888_ = v___x_2897_;
goto v___jp_2885_;
}
else
{
size_t v___x_2898_; size_t v___x_2899_; uint8_t v___x_2900_; 
v___x_2898_ = lean_ptr_addr(v___y_2895_);
lean_dec_ref(v___y_2895_);
v___x_2899_ = lean_ptr_addr(v___y_2894_);
v___x_2900_ = lean_usize_dec_eq(v___x_2898_, v___x_2899_);
v___y_2886_ = v___y_2894_;
v___y_2887_ = v___y_2893_;
v___y_2888_ = v___x_2900_;
goto v___jp_2885_;
}
}
v___jp_2901_:
{
if (lean_obj_tag(v___y_2906_) == 0)
{
lean_dec_ref(v___y_2906_);
v___y_2893_ = v___y_2903_;
v___y_2894_ = v___y_2902_;
v___y_2895_ = v___y_2904_;
v___y_2896_ = v___y_2905_;
goto v___jp_2892_;
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2914_; 
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
lean_dec_ref(v_code_2404_);
v_a_2907_ = lean_ctor_get(v___y_2906_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___y_2906_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2909_ = v___y_2906_;
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___y_2906_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
}
v___jp_2915_:
{
lean_object* v___x_2918_; 
v___x_2918_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2916_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2926_; 
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2926_ == 0)
{
lean_object* v_unused_2927_; 
v_unused_2927_ = lean_ctor_get(v___x_2918_, 0);
lean_dec(v_unused_2927_);
v___x_2920_ = v___x_2918_;
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
else
{
lean_dec(v___x_2918_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2922_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2922_, 0, v___y_2917_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2922_);
v___x_2924_ = v___x_2920_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
lean_dec_ref(v___y_2917_);
v_a_2928_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2930_ = v___x_2918_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2918_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
v___jp_2936_:
{
if (lean_obj_tag(v___y_2939_) == 0)
{
lean_dec_ref(v___y_2939_);
v___y_2916_ = v___y_2937_;
v___y_2917_ = v___y_2938_;
goto v___jp_2915_;
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
lean_dec_ref(v___y_2938_);
v_a_2940_ = lean_ctor_get(v___y_2939_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___y_2939_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___y_2939_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___y_2939_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
v___jp_2948_:
{
uint8_t v___x_2958_; 
v___x_2958_ = lean_nat_dec_lt(v___y_2955_, v___y_2957_);
lean_dec(v___y_2955_);
if (v___x_2958_ == 0)
{
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2950_);
lean_dec_ref(v___y_2949_);
v___y_2916_ = v___y_2951_;
v___y_2917_ = v___y_2954_;
goto v___jp_2915_;
}
else
{
lean_object* v___x_2959_; uint8_t v___x_2960_; 
v___x_2959_ = lean_box(0);
v___x_2960_ = lean_nat_dec_le(v___y_2957_, v___y_2957_);
if (v___x_2960_ == 0)
{
if (v___x_2958_ == 0)
{
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2950_);
lean_dec_ref(v___y_2949_);
v___y_2916_ = v___y_2951_;
v___y_2917_ = v___y_2954_;
goto v___jp_2915_;
}
else
{
size_t v___x_2961_; size_t v___x_2962_; lean_object* v___x_2963_; 
v___x_2961_ = ((size_t)0ULL);
v___x_2962_ = lean_usize_of_nat(v___y_2957_);
lean_dec(v___y_2957_);
v___x_2963_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v___y_2950_, v___x_2961_, v___x_2962_, v___x_2959_, v___y_2952_, v___y_2953_, v___y_2949_, v___y_2956_);
lean_dec_ref(v___y_2949_);
lean_dec_ref(v___y_2950_);
v___y_2937_ = v___y_2951_;
v___y_2938_ = v___y_2954_;
v___y_2939_ = v___x_2963_;
goto v___jp_2936_;
}
}
else
{
size_t v___x_2964_; size_t v___x_2965_; lean_object* v___x_2966_; 
v___x_2964_ = ((size_t)0ULL);
v___x_2965_ = lean_usize_of_nat(v___y_2957_);
lean_dec(v___y_2957_);
v___x_2966_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v___y_2950_, v___x_2964_, v___x_2965_, v___x_2959_, v___y_2952_, v___y_2953_, v___y_2949_, v___y_2956_);
lean_dec_ref(v___y_2949_);
lean_dec_ref(v___y_2950_);
v___y_2937_ = v___y_2951_;
v___y_2938_ = v___y_2954_;
v___y_2939_ = v___x_2966_;
goto v___jp_2936_;
}
}
}
v___jp_2967_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2972_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2972_, 0, v___y_2969_);
lean_ctor_set(v___x_2972_, 1, v___y_2970_);
lean_ctor_set(v___x_2972_, 2, v___y_2971_);
lean_ctor_set(v___x_2972_, 3, v___y_2968_);
v___x_2973_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
v___x_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
return v___x_2974_;
}
v___jp_2975_:
{
if (v___y_2981_ == 0)
{
lean_dec(v___y_2976_);
lean_dec_ref(v_code_2404_);
v___y_2968_ = v___y_2978_;
v___y_2969_ = v___y_2977_;
v___y_2970_ = v___y_2979_;
v___y_2971_ = v___y_2980_;
goto v___jp_2967_;
}
else
{
uint8_t v___x_2982_; 
v___x_2982_ = l_Lean_instBEqFVarId_beq(v___y_2976_, v___y_2980_);
lean_dec(v___y_2976_);
if (v___x_2982_ == 0)
{
lean_dec_ref(v_code_2404_);
v___y_2968_ = v___y_2978_;
v___y_2969_ = v___y_2977_;
v___y_2970_ = v___y_2979_;
v___y_2971_ = v___y_2980_;
goto v___jp_2967_;
}
else
{
lean_object* v___x_2983_; 
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec(v___y_2977_);
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v_code_2404_);
return v___x_2983_;
}
}
}
v___jp_2984_:
{
lean_object* v___x_2998_; uint8_t v___x_2999_; 
v___x_2998_ = lean_array_get_size(v___y_2988_);
v___x_2999_ = lean_nat_dec_lt(v___y_2991_, v___x_2998_);
if (v___x_2999_ == 0)
{
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec_ref(v_code_2404_);
v___y_2949_ = v___y_2996_;
v___y_2950_ = v___y_2988_;
v___y_2951_ = v___y_2993_;
v___y_2952_ = v___y_2994_;
v___y_2953_ = v___y_2995_;
v___y_2954_ = v___y_2990_;
v___y_2955_ = v___y_2991_;
v___y_2956_ = v___y_2997_;
v___y_2957_ = v___x_2998_;
goto v___jp_2948_;
}
else
{
if (v___x_2999_ == 0)
{
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec_ref(v_code_2404_);
v___y_2949_ = v___y_2996_;
v___y_2950_ = v___y_2988_;
v___y_2951_ = v___y_2993_;
v___y_2952_ = v___y_2994_;
v___y_2953_ = v___y_2995_;
v___y_2954_ = v___y_2990_;
v___y_2955_ = v___y_2991_;
v___y_2956_ = v___y_2997_;
v___y_2957_ = v___x_2998_;
goto v___jp_2948_;
}
else
{
size_t v___x_3000_; size_t v___x_3001_; uint8_t v___x_3002_; 
v___x_3000_ = ((size_t)0ULL);
v___x_3001_ = lean_usize_of_nat(v___x_2998_);
v___x_3002_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v___y_2988_, v___x_3000_, v___x_3001_);
if (v___x_3002_ == 0)
{
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec_ref(v_code_2404_);
v___y_2949_ = v___y_2996_;
v___y_2950_ = v___y_2988_;
v___y_2951_ = v___y_2993_;
v___y_2952_ = v___y_2994_;
v___y_2953_ = v___y_2995_;
v___y_2954_ = v___y_2990_;
v___y_2955_ = v___y_2991_;
v___y_2956_ = v___y_2997_;
v___y_2957_ = v___x_2998_;
goto v___jp_2948_;
}
else
{
lean_object* v___x_3003_; 
lean_dec_ref(v___y_2996_);
lean_dec(v___y_2991_);
lean_inc(v___y_2992_);
v___x_3003_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v___y_2992_, v___y_2993_);
if (lean_obj_tag(v___x_3003_) == 0)
{
size_t v___x_3004_; size_t v___x_3005_; uint8_t v___x_3006_; 
lean_dec_ref(v___x_3003_);
v___x_3004_ = lean_ptr_addr(v___y_2985_);
lean_dec_ref(v___y_2985_);
v___x_3005_ = lean_ptr_addr(v___y_2988_);
v___x_3006_ = lean_usize_dec_eq(v___x_3004_, v___x_3005_);
if (v___x_3006_ == 0)
{
lean_dec_ref(v___y_2989_);
v___y_2976_ = v___y_2986_;
v___y_2977_ = v___y_2987_;
v___y_2978_ = v___y_2988_;
v___y_2979_ = v___y_2990_;
v___y_2980_ = v___y_2992_;
v___y_2981_ = v___x_3006_;
goto v___jp_2975_;
}
else
{
size_t v___x_3007_; size_t v___x_3008_; uint8_t v___x_3009_; 
v___x_3007_ = lean_ptr_addr(v___y_2989_);
lean_dec_ref(v___y_2989_);
v___x_3008_ = lean_ptr_addr(v___y_2990_);
v___x_3009_ = lean_usize_dec_eq(v___x_3007_, v___x_3008_);
v___y_2976_ = v___y_2986_;
v___y_2977_ = v___y_2987_;
v___y_2978_ = v___y_2988_;
v___y_2979_ = v___y_2990_;
v___y_2980_ = v___y_2992_;
v___y_2981_ = v___x_3009_;
goto v___jp_2975_;
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec_ref(v_code_2404_);
v_a_3010_ = lean_ctor_get(v___x_3003_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3003_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_3003_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_3003_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
}
}
}
v___jp_3018_:
{
lean_object* v___x_3021_; 
v___x_3021_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_3019_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3028_ == 0)
{
lean_object* v_unused_3029_; 
v_unused_3029_ = lean_ctor_get(v___x_3021_, 0);
lean_dec(v_unused_3029_);
v___x_3023_ = v___x_3021_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_dec(v___x_3021_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 0, v___y_3020_);
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___y_3020_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_dec_ref(v___y_3020_);
v_a_3030_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_3021_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_3021_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
v___jp_3038_:
{
if (lean_obj_tag(v___y_3041_) == 0)
{
lean_dec_ref(v___y_3041_);
v___y_3019_ = v___y_3039_;
v___y_3020_ = v___y_3040_;
goto v___jp_3018_;
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_dec_ref(v___y_3040_);
v_a_3042_ = lean_ctor_get(v___y_3041_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___y_3041_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___y_3041_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___y_3041_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
v___jp_3050_:
{
uint8_t v___x_3057_; 
v___x_3057_ = lean_nat_dec_lt(v___y_3055_, v___y_3053_);
lean_dec(v___y_3055_);
if (v___x_3057_ == 0)
{
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3053_);
v___y_3019_ = v___y_3052_;
v___y_3020_ = v___y_3054_;
goto v___jp_3018_;
}
else
{
lean_object* v___x_3058_; uint8_t v___x_3059_; 
v___x_3058_ = lean_box(0);
v___x_3059_ = lean_nat_dec_le(v___y_3053_, v___y_3053_);
if (v___x_3059_ == 0)
{
if (v___x_3057_ == 0)
{
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3053_);
v___y_3019_ = v___y_3052_;
v___y_3020_ = v___y_3054_;
goto v___jp_3018_;
}
else
{
size_t v___x_3060_; size_t v___x_3061_; lean_object* v___x_3062_; 
v___x_3060_ = ((size_t)0ULL);
v___x_3061_ = lean_usize_of_nat(v___y_3053_);
lean_dec(v___y_3053_);
v___x_3062_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v___y_3056_, v___x_3060_, v___x_3061_, v___x_3058_, v___y_3051_);
lean_dec_ref(v___y_3056_);
v___y_3039_ = v___y_3052_;
v___y_3040_ = v___y_3054_;
v___y_3041_ = v___x_3062_;
goto v___jp_3038_;
}
}
else
{
size_t v___x_3063_; size_t v___x_3064_; lean_object* v___x_3065_; 
v___x_3063_ = ((size_t)0ULL);
v___x_3064_ = lean_usize_of_nat(v___y_3053_);
lean_dec(v___y_3053_);
v___x_3065_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v___y_3056_, v___x_3063_, v___x_3064_, v___x_3058_, v___y_3051_);
lean_dec_ref(v___y_3056_);
v___y_3039_ = v___y_3052_;
v___y_3040_ = v___y_3054_;
v___y_3041_ = v___x_3065_;
goto v___jp_3038_;
}
}
}
v___jp_3066_:
{
switch(lean_obj_tag(v_code_2404_))
{
case 0:
{
lean_object* v_decl_3074_; lean_object* v_k_3075_; uint8_t v___x_3076_; uint8_t v___x_3077_; lean_object* v___x_3078_; 
v_decl_3074_ = lean_ctor_get(v_code_2404_, 0);
v_k_3075_ = lean_ctor_get(v_code_2404_, 1);
v___x_3076_ = 0;
v___x_3077_ = 0;
lean_inc_ref(v_decl_3074_);
v___x_3078_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v___x_3076_, v___x_3077_, v_decl_3074_, v___y_3068_, v___y_3071_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; uint8_t v___x_3080_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_a_3079_);
lean_dec_ref(v___x_3078_);
v___x_3080_ = l_Lean_Compiler_LCNF_instBEqLetDecl_beq(v___x_3076_, v_decl_3074_, v_a_3079_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; 
v___x_3081_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_3068_);
if (lean_obj_tag(v___x_3081_) == 0)
{
lean_dec_ref(v___x_3081_);
lean_inc_ref(v_decl_3074_);
lean_inc_ref(v_k_3075_);
v___y_2838_ = v_k_3075_;
v___y_2839_ = v___x_3076_;
v___y_2840_ = v_a_3079_;
v___y_2841_ = v_decl_3074_;
v___y_2842_ = v___y_3067_;
v___y_2843_ = v___y_3068_;
v___y_2844_ = v___y_3069_;
v___y_2845_ = v___y_3070_;
v___y_2846_ = v___y_3071_;
v___y_2847_ = v___y_3072_;
v___y_2848_ = v___y_3073_;
goto v___jp_2837_;
}
else
{
lean_object* v_a_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3089_; 
lean_dec(v_a_3079_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3082_ = lean_ctor_get(v___x_3081_, 0);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_3081_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3084_ = v___x_3081_;
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_a_3082_);
lean_dec(v___x_3081_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3087_; 
if (v_isShared_3085_ == 0)
{
v___x_3087_ = v___x_3084_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_a_3082_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
else
{
lean_inc_ref(v_decl_3074_);
lean_inc_ref(v_k_3075_);
v___y_2838_ = v_k_3075_;
v___y_2839_ = v___x_3076_;
v___y_2840_ = v_a_3079_;
v___y_2841_ = v_decl_3074_;
v___y_2842_ = v___y_3067_;
v___y_2843_ = v___y_3068_;
v___y_2844_ = v___y_3069_;
v___y_2845_ = v___y_3070_;
v___y_2846_ = v___y_3071_;
v___y_2847_ = v___y_3072_;
v___y_2848_ = v___y_3073_;
goto v___jp_2837_;
}
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3090_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3078_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3078_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3090_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3098_; lean_object* v_args_3099_; lean_object* v___x_3100_; lean_object* v_subst_3101_; uint8_t v___x_3102_; uint8_t v___x_3103_; lean_object* v___x_3104_; 
v_fvarId_3098_ = lean_ctor_get(v_code_2404_, 0);
v_args_3099_ = lean_ctor_get(v_code_2404_, 1);
v___x_3100_ = lean_st_ref_get(v___y_3068_);
v_subst_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc_ref(v_subst_3101_);
lean_dec(v___x_3100_);
v___x_3102_ = 0;
v___x_3103_ = 0;
lean_inc(v_fvarId_3098_);
v___x_3104_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3101_, v_fvarId_3098_, v___x_3103_);
lean_dec_ref(v_subst_3101_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_fvarId_3105_; lean_object* v___x_3106_; 
v_fvarId_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_fvarId_3105_);
lean_dec_ref(v___x_3104_);
lean_inc_ref(v_args_3099_);
v___x_3106_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v___x_3102_, v___x_3103_, v_args_3099_, v___y_3068_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3108_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
lean_inc_n(v_a_3107_, 2);
lean_dec_ref(v___x_3106_);
v___x_3108_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_3105_, v_a_3107_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3109_);
lean_dec_ref(v___x_3108_);
if (lean_obj_tag(v_a_3109_) == 1)
{
lean_object* v_val_3110_; 
lean_dec(v_a_3107_);
lean_dec(v_fvarId_3105_);
lean_dec_ref(v_code_2404_);
v_val_3110_ = lean_ctor_get(v_a_3109_, 0);
lean_inc(v_val_3110_);
lean_dec_ref(v_a_3109_);
v_code_2404_ = v_val_3110_;
v_a_2405_ = v___y_3067_;
v_a_2406_ = v___y_3068_;
v_a_2407_ = v___y_3069_;
v_a_2408_ = v___y_3070_;
v_a_2409_ = v___y_3071_;
v_a_2410_ = v___y_3072_;
v_a_2411_ = v___y_3073_;
goto _start;
}
else
{
lean_object* v___x_3112_; 
lean_dec(v_a_3109_);
lean_dec_ref(v___y_3072_);
lean_inc(v_fvarId_3105_);
v___x_3112_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3105_, v___y_3068_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v___x_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; 
lean_dec_ref(v___x_3112_);
v___x_3113_ = lean_unsigned_to_nat(0u);
v___x_3114_ = lean_array_get_size(v_a_3107_);
v___x_3115_ = lean_nat_dec_lt(v___x_3113_, v___x_3114_);
if (v___x_3115_ == 0)
{
lean_inc(v_fvarId_3098_);
lean_inc_ref(v_args_3099_);
v___y_2893_ = v_fvarId_3105_;
v___y_2894_ = v_a_3107_;
v___y_2895_ = v_args_3099_;
v___y_2896_ = v_fvarId_3098_;
goto v___jp_2892_;
}
else
{
lean_object* v___x_3116_; uint8_t v___x_3117_; 
v___x_3116_ = lean_box(0);
v___x_3117_ = lean_nat_dec_le(v___x_3114_, v___x_3114_);
if (v___x_3117_ == 0)
{
if (v___x_3115_ == 0)
{
lean_inc(v_fvarId_3098_);
lean_inc_ref(v_args_3099_);
v___y_2893_ = v_fvarId_3105_;
v___y_2894_ = v_a_3107_;
v___y_2895_ = v_args_3099_;
v___y_2896_ = v_fvarId_3098_;
goto v___jp_2892_;
}
else
{
size_t v___x_3118_; size_t v___x_3119_; lean_object* v___x_3120_; 
v___x_3118_ = ((size_t)0ULL);
v___x_3119_ = lean_usize_of_nat(v___x_3114_);
v___x_3120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_a_3107_, v___x_3118_, v___x_3119_, v___x_3116_, v___y_3068_);
lean_inc(v_fvarId_3098_);
lean_inc_ref(v_args_3099_);
v___y_2902_ = v_a_3107_;
v___y_2903_ = v_fvarId_3105_;
v___y_2904_ = v_args_3099_;
v___y_2905_ = v_fvarId_3098_;
v___y_2906_ = v___x_3120_;
goto v___jp_2901_;
}
}
else
{
size_t v___x_3121_; size_t v___x_3122_; lean_object* v___x_3123_; 
v___x_3121_ = ((size_t)0ULL);
v___x_3122_ = lean_usize_of_nat(v___x_3114_);
v___x_3123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_a_3107_, v___x_3121_, v___x_3122_, v___x_3116_, v___y_3068_);
lean_inc(v_fvarId_3098_);
lean_inc_ref(v_args_3099_);
v___y_2902_ = v_a_3107_;
v___y_2903_ = v_fvarId_3105_;
v___y_2904_ = v_args_3099_;
v___y_2905_ = v_fvarId_3098_;
v___y_2906_ = v___x_3123_;
goto v___jp_2901_;
}
}
}
else
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
lean_dec(v_a_3107_);
lean_dec(v_fvarId_3105_);
lean_dec_ref(v_code_2404_);
v_a_3124_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_3112_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3112_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec(v_a_3107_);
lean_dec(v_fvarId_3105_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3132_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3108_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3108_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec(v_fvarId_3105_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3140_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3106_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3106_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
else
{
lean_object* v___x_3148_; 
lean_dec_ref(v_code_2404_);
v___x_3148_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3102_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
lean_dec_ref(v___y_3072_);
return v___x_3148_;
}
}
case 4:
{
lean_object* v_cases_3149_; lean_object* v___x_3150_; 
v_cases_3149_ = lean_ctor_get(v_code_2404_, 0);
lean_inc_ref(v_cases_3149_);
v___x_3150_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3149_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3223_; 
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3153_ = v___x_3150_;
v_isShared_3154_ = v_isSharedCheck_3223_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3150_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3223_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
if (lean_obj_tag(v_a_3151_) == 1)
{
lean_object* v_val_3155_; lean_object* v___x_3157_; 
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_val_3155_ = lean_ctor_get(v_a_3151_, 0);
lean_inc(v_val_3155_);
lean_dec_ref(v_a_3151_);
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 0, v_val_3155_);
v___x_3157_ = v___x_3153_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_val_3155_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
else
{
lean_object* v_typeName_3159_; lean_object* v_resultType_3160_; lean_object* v_discr_3161_; lean_object* v_alts_3162_; lean_object* v___x_3163_; lean_object* v_subst_3164_; uint8_t v___x_3165_; uint8_t v___x_3166_; lean_object* v___x_3167_; 
lean_del_object(v___x_3153_);
lean_dec(v_a_3151_);
v_typeName_3159_ = lean_ctor_get(v_cases_3149_, 0);
v_resultType_3160_ = lean_ctor_get(v_cases_3149_, 1);
v_discr_3161_ = lean_ctor_get(v_cases_3149_, 2);
v_alts_3162_ = lean_ctor_get(v_cases_3149_, 3);
v___x_3163_ = lean_st_ref_get(v___y_3068_);
v_subst_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc_ref(v_subst_3164_);
lean_dec(v___x_3163_);
v___x_3165_ = 0;
v___x_3166_ = 0;
lean_inc(v_discr_3161_);
v___x_3167_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3164_, v_discr_3161_, v___x_3166_);
lean_dec_ref(v_subst_3164_);
if (lean_obj_tag(v___x_3167_) == 0)
{
lean_object* v_fvarId_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v_fvarId_3168_ = lean_ctor_get(v___x_3167_, 0);
lean_inc_n(v_fvarId_3168_, 2);
lean_dec_ref(v___x_3167_);
v___x_3169_ = lean_st_ref_get(v___y_3068_);
v___x_3170_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3162_);
v___x_3171_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(v_fvarId_3168_, v___x_3170_, v_alts_3162_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; lean_object* v___x_3173_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
lean_inc(v_a_3172_);
lean_dec_ref(v___x_3171_);
v___x_3173_ = l_Lean_Compiler_LCNF_Simp_addDefaultAlt(v_a_3172_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3205_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3176_ = v___x_3173_;
v_isShared_3177_ = v_isSharedCheck_3205_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v___x_3173_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3205_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v_subst_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; uint8_t v___x_3182_; 
v_subst_3178_ = lean_ctor_get(v___x_3169_, 0);
lean_inc_ref(v_subst_3178_);
lean_dec(v___x_3169_);
lean_inc_ref(v_resultType_3160_);
v___x_3179_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3165_, v_subst_3178_, v___x_3166_, v_resultType_3160_);
lean_dec_ref(v_subst_3178_);
v___x_3180_ = lean_array_get_size(v_a_3174_);
v___x_3181_ = lean_unsigned_to_nat(1u);
v___x_3182_ = lean_nat_dec_eq(v___x_3180_, v___x_3181_);
if (v___x_3182_ == 0)
{
lean_del_object(v___x_3176_);
lean_inc_ref(v_resultType_3160_);
lean_inc(v_typeName_3159_);
lean_inc(v_discr_3161_);
lean_inc_ref(v_alts_3162_);
v___y_2985_ = v_alts_3162_;
v___y_2986_ = v_discr_3161_;
v___y_2987_ = v_typeName_3159_;
v___y_2988_ = v_a_3174_;
v___y_2989_ = v_resultType_3160_;
v___y_2990_ = v___x_3179_;
v___y_2991_ = v___x_3170_;
v___y_2992_ = v_fvarId_3168_;
v___y_2993_ = v___y_3068_;
v___y_2994_ = v___y_3070_;
v___y_2995_ = v___y_3071_;
v___y_2996_ = v___y_3072_;
v___y_2997_ = v___y_3073_;
goto v___jp_2984_;
}
else
{
lean_object* v___x_3183_; 
v___x_3183_ = lean_array_fget_borrowed(v_a_3174_, v___x_3170_);
if (lean_obj_tag(v___x_3183_) == 0)
{
lean_object* v_params_3184_; lean_object* v_code_3185_; lean_object* v___x_3186_; uint8_t v___x_3187_; 
lean_del_object(v___x_3176_);
v_params_3184_ = lean_ctor_get(v___x_3183_, 1);
v_code_3185_ = lean_ctor_get(v___x_3183_, 2);
v___x_3186_ = lean_array_get_size(v_params_3184_);
v___x_3187_ = lean_nat_dec_lt(v___x_3170_, v___x_3186_);
if (v___x_3187_ == 0)
{
lean_inc_ref(v_code_3185_);
lean_inc_ref(v_params_3184_);
lean_dec_ref(v___x_3179_);
lean_dec(v_a_3174_);
lean_dec(v_fvarId_3168_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v___y_3051_ = v___y_3071_;
v___y_3052_ = v___y_3068_;
v___y_3053_ = v___x_3186_;
v___y_3054_ = v_code_3185_;
v___y_3055_ = v___x_3170_;
v___y_3056_ = v_params_3184_;
goto v___jp_3050_;
}
else
{
if (v___x_3187_ == 0)
{
lean_inc_ref(v_code_3185_);
lean_inc_ref(v_params_3184_);
lean_dec_ref(v___x_3179_);
lean_dec(v_a_3174_);
lean_dec(v_fvarId_3168_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v___y_3051_ = v___y_3071_;
v___y_3052_ = v___y_3068_;
v___y_3053_ = v___x_3186_;
v___y_3054_ = v_code_3185_;
v___y_3055_ = v___x_3170_;
v___y_3056_ = v_params_3184_;
goto v___jp_3050_;
}
else
{
size_t v___x_3188_; size_t v___x_3189_; lean_object* v___x_3190_; 
v___x_3188_ = ((size_t)0ULL);
v___x_3189_ = lean_usize_of_nat(v___x_3186_);
v___x_3190_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_params_3184_, v___x_3188_, v___x_3189_, v___y_3068_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; uint8_t v___x_3192_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref(v___x_3190_);
v___x_3192_ = lean_unbox(v_a_3191_);
lean_dec(v_a_3191_);
if (v___x_3192_ == 0)
{
lean_inc_ref(v_code_3185_);
lean_inc_ref(v_params_3184_);
lean_dec_ref(v___x_3179_);
lean_dec(v_a_3174_);
lean_dec(v_fvarId_3168_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v___y_3051_ = v___y_3071_;
v___y_3052_ = v___y_3068_;
v___y_3053_ = v___x_3186_;
v___y_3054_ = v_code_3185_;
v___y_3055_ = v___x_3170_;
v___y_3056_ = v_params_3184_;
goto v___jp_3050_;
}
else
{
lean_inc_ref(v_resultType_3160_);
lean_inc(v_typeName_3159_);
lean_inc(v_discr_3161_);
lean_inc_ref(v_alts_3162_);
v___y_2985_ = v_alts_3162_;
v___y_2986_ = v_discr_3161_;
v___y_2987_ = v_typeName_3159_;
v___y_2988_ = v_a_3174_;
v___y_2989_ = v_resultType_3160_;
v___y_2990_ = v___x_3179_;
v___y_2991_ = v___x_3170_;
v___y_2992_ = v_fvarId_3168_;
v___y_2993_ = v___y_3068_;
v___y_2994_ = v___y_3070_;
v___y_2995_ = v___y_3071_;
v___y_2996_ = v___y_3072_;
v___y_2997_ = v___y_3073_;
goto v___jp_2984_;
}
}
else
{
lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3200_; 
lean_dec_ref(v___x_3179_);
lean_dec(v_a_3174_);
lean_dec(v_fvarId_3168_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3193_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3195_ = v___x_3190_;
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___x_3190_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3193_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
}
}
}
else
{
lean_object* v_code_3201_; lean_object* v___x_3203_; 
lean_inc_ref(v___x_3183_);
lean_dec_ref(v___x_3179_);
lean_dec(v_a_3174_);
lean_dec(v_fvarId_3168_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_code_3201_ = lean_ctor_get(v___x_3183_, 0);
lean_inc_ref(v_code_3201_);
lean_dec_ref(v___x_3183_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v_code_3201_);
v___x_3203_ = v___x_3176_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_code_3201_);
v___x_3203_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
return v___x_3203_;
}
}
}
}
}
else
{
lean_object* v_a_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3213_; 
lean_dec(v___x_3169_);
lean_dec(v_fvarId_3168_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3206_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3213_ == 0)
{
v___x_3208_ = v___x_3173_;
v_isShared_3209_ = v_isSharedCheck_3213_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_a_3206_);
lean_dec(v___x_3173_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3213_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3211_; 
if (v_isShared_3209_ == 0)
{
v___x_3211_ = v___x_3208_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v_a_3206_);
v___x_3211_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
return v___x_3211_;
}
}
}
}
else
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_dec(v___x_3169_);
lean_dec(v_fvarId_3168_);
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3214_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___x_3171_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3171_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
else
{
lean_object* v___x_3222_; 
lean_dec_ref(v_code_2404_);
v___x_3222_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3165_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
lean_dec_ref(v___y_3072_);
return v___x_3222_;
}
}
}
}
else
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3231_; 
lean_dec_ref(v_code_2404_);
lean_dec_ref(v___y_3072_);
v_a_3224_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3226_ = v___x_3150_;
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3150_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3229_; 
if (v_isShared_3227_ == 0)
{
v___x_3229_ = v___x_3226_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v_a_3224_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_3232_; lean_object* v___x_3233_; lean_object* v_subst_3234_; uint8_t v___x_3235_; lean_object* v___x_3236_; 
v_fvarId_3232_ = lean_ctor_get(v_code_2404_, 0);
v___x_3233_ = lean_st_ref_get(v___y_3068_);
v_subst_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc_ref(v_subst_3234_);
lean_dec(v___x_3233_);
v___x_3235_ = 0;
lean_inc(v_fvarId_3232_);
v___x_3236_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3234_, v_fvarId_3232_, v___x_3235_);
lean_dec_ref(v_subst_3234_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_fvarId_3237_; lean_object* v___x_3238_; 
lean_dec_ref(v___y_3072_);
v_fvarId_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc_n(v_fvarId_3237_, 2);
lean_dec_ref(v___x_3236_);
v___x_3238_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3237_, v___y_3068_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3257_; 
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3257_ == 0)
{
lean_object* v_unused_3258_; 
v_unused_3258_ = lean_ctor_get(v___x_3238_, 0);
lean_dec(v_unused_3258_);
v___x_3240_ = v___x_3238_;
v_isShared_3241_ = v_isSharedCheck_3257_;
goto v_resetjp_3239_;
}
else
{
lean_dec(v___x_3238_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3257_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
uint8_t v___x_3242_; 
v___x_3242_ = l_Lean_instBEqFVarId_beq(v_fvarId_3232_, v_fvarId_3237_);
if (v___x_3242_ == 0)
{
lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3252_; 
v_isSharedCheck_3252_ = !lean_is_exclusive(v_code_2404_);
if (v_isSharedCheck_3252_ == 0)
{
lean_object* v_unused_3253_; 
v_unused_3253_ = lean_ctor_get(v_code_2404_, 0);
lean_dec(v_unused_3253_);
v___x_3244_ = v_code_2404_;
v_isShared_3245_ = v_isSharedCheck_3252_;
goto v_resetjp_3243_;
}
else
{
lean_dec(v_code_2404_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3252_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3247_; 
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 0, v_fvarId_3237_);
v___x_3247_ = v___x_3244_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_fvarId_3237_);
v___x_3247_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
lean_object* v___x_3249_; 
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 0, v___x_3247_);
v___x_3249_ = v___x_3240_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3247_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
else
{
lean_object* v___x_3255_; 
lean_dec(v_fvarId_3237_);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 0, v_code_2404_);
v___x_3255_ = v___x_3240_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_code_2404_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
}
}
else
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
lean_dec(v_fvarId_3237_);
lean_dec_ref(v_code_2404_);
v_a_3259_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3238_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3238_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
else
{
uint8_t v___x_3267_; lean_object* v___x_3268_; 
lean_dec_ref(v_code_2404_);
v___x_3267_ = 0;
v___x_3268_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3267_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
lean_dec_ref(v___y_3072_);
return v___x_3268_;
}
}
case 6:
{
lean_object* v_type_3269_; lean_object* v___x_3270_; lean_object* v_subst_3271_; uint8_t v___x_3272_; uint8_t v___x_3273_; lean_object* v___x_3274_; size_t v___x_3275_; size_t v___x_3276_; uint8_t v___x_3277_; 
lean_dec_ref(v___y_3072_);
v_type_3269_ = lean_ctor_get(v_code_2404_, 0);
v___x_3270_ = lean_st_ref_get(v___y_3068_);
v_subst_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc_ref(v_subst_3271_);
lean_dec(v___x_3270_);
v___x_3272_ = 0;
v___x_3273_ = 0;
lean_inc_ref(v_type_3269_);
v___x_3274_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3272_, v_subst_3271_, v___x_3273_, v_type_3269_);
lean_dec_ref(v_subst_3271_);
v___x_3275_ = lean_ptr_addr(v_type_3269_);
v___x_3276_ = lean_ptr_addr(v___x_3274_);
v___x_3277_ = lean_usize_dec_eq(v___x_3275_, v___x_3276_);
if (v___x_3277_ == 0)
{
lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3285_; 
v_isSharedCheck_3285_ = !lean_is_exclusive(v_code_2404_);
if (v_isSharedCheck_3285_ == 0)
{
lean_object* v_unused_3286_; 
v_unused_3286_ = lean_ctor_get(v_code_2404_, 0);
lean_dec(v_unused_3286_);
v___x_3279_ = v_code_2404_;
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
else
{
lean_dec(v_code_2404_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 0, v___x_3274_);
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3274_);
v___x_3282_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
lean_object* v___x_3283_; 
v___x_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
}
}
else
{
lean_object* v___x_3287_; 
lean_dec_ref(v___x_3274_);
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v_code_2404_);
return v___x_3287_;
}
}
default: 
{
lean_object* v_decl_3288_; lean_object* v_k_3289_; 
v_decl_3288_ = lean_ctor_get(v_code_2404_, 0);
v_k_3289_ = lean_ctor_get(v_code_2404_, 1);
lean_inc_ref(v_k_3289_);
lean_inc_ref(v_decl_3288_);
v_decl_2522_ = v_decl_3288_;
v_k_2523_ = v_k_3289_;
v___y_2524_ = v___y_3067_;
v___y_2525_ = v___y_3068_;
v___y_2526_ = v___y_3069_;
v___y_2527_ = v___y_3070_;
v___y_2528_ = v___y_3071_;
v___y_2529_ = v___y_3072_;
v___y_2530_ = v___y_3073_;
goto v___jp_2521_;
}
}
}
v___jp_3306_:
{
lean_object* v___x_3307_; 
v___x_3307_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v_a_2406_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v___x_3308_; lean_object* v_visited_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; uint8_t v___x_3316_; 
lean_dec_ref(v___x_3307_);
v___x_3308_ = lean_st_ref_get(v_a_2406_);
v_visited_3309_ = lean_ctor_get(v___x_3308_, 4);
lean_inc(v_visited_3309_);
lean_dec(v___x_3308_);
v___x_3310_ = lean_unsigned_to_nat(1u);
v___x_3311_ = lean_nat_add(v_currRecDepth_3293_, v___x_3310_);
lean_dec(v_currRecDepth_3293_);
v___x_3312_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3312_, 0, v_fileName_3290_);
lean_ctor_set(v___x_3312_, 1, v_fileMap_3291_);
lean_ctor_set(v___x_3312_, 2, v_options_3292_);
lean_ctor_set(v___x_3312_, 3, v___x_3311_);
lean_ctor_set(v___x_3312_, 4, v_maxRecDepth_3294_);
lean_ctor_set(v___x_3312_, 5, v_ref_3295_);
lean_ctor_set(v___x_3312_, 6, v_currNamespace_3296_);
lean_ctor_set(v___x_3312_, 7, v_openDecls_3297_);
lean_ctor_set(v___x_3312_, 8, v_initHeartbeats_3298_);
lean_ctor_set(v___x_3312_, 9, v_maxHeartbeats_3299_);
lean_ctor_set(v___x_3312_, 10, v_quotContext_3300_);
lean_ctor_set(v___x_3312_, 11, v_currMacroScope_3301_);
lean_ctor_set(v___x_3312_, 12, v_cancelTk_x3f_3303_);
lean_ctor_set(v___x_3312_, 13, v_inheritedTraceOptions_3305_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*14, v_diag_3302_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*14 + 1, v_suppressElabErrors_3304_);
v___x_3313_ = lean_unsigned_to_nat(128u);
v___x_3314_ = lean_nat_mod(v_visited_3309_, v___x_3313_);
lean_dec(v_visited_3309_);
v___x_3315_ = lean_unsigned_to_nat(0u);
v___x_3316_ = lean_nat_dec_eq(v___x_3314_, v___x_3315_);
lean_dec(v___x_3314_);
if (v___x_3316_ == 0)
{
v___y_3067_ = v_a_2405_;
v___y_3068_ = v_a_2406_;
v___y_3069_ = v_a_2407_;
v___y_3070_ = v_a_2408_;
v___y_3071_ = v_a_2409_;
v___y_3072_ = v___x_3312_;
v___y_3073_ = v_a_2411_;
goto v___jp_3066_;
}
else
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3317_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simp___closed__4));
v___x_3318_ = l_Lean_Core_checkSystem(v___x_3317_, v___x_3312_, v_a_2411_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_dec_ref(v___x_3318_);
v___y_3067_ = v_a_2405_;
v___y_3068_ = v_a_2406_;
v___y_3069_ = v_a_2407_;
v___y_3070_ = v_a_2408_;
v___y_3071_ = v_a_2409_;
v___y_3072_ = v___x_3312_;
v___y_3073_ = v_a_2411_;
goto v___jp_3066_;
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_dec_ref(v___x_3312_);
lean_dec_ref(v_code_2404_);
v_a_3319_ = lean_ctor_get(v___x_3318_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3318_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3318_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_dec_ref(v_inheritedTraceOptions_3305_);
lean_dec(v_cancelTk_x3f_3303_);
lean_dec(v_currMacroScope_3301_);
lean_dec(v_quotContext_3300_);
lean_dec(v_maxHeartbeats_3299_);
lean_dec(v_initHeartbeats_3298_);
lean_dec(v_openDecls_3297_);
lean_dec(v_currNamespace_3296_);
lean_dec(v_ref_3295_);
lean_dec(v_maxRecDepth_3294_);
lean_dec(v_currRecDepth_3293_);
lean_dec_ref(v_options_3292_);
lean_dec_ref(v_fileMap_3291_);
lean_dec_ref(v_fileName_3290_);
lean_dec_ref(v_code_2404_);
v_a_3327_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3307_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3307_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object* v_decl_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_){
_start:
{
lean_object* v_params_3348_; lean_object* v_type_3349_; lean_object* v_value_3350_; lean_object* v___x_3351_; lean_object* v_subst_3352_; uint8_t v___x_3353_; uint8_t v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v_params_3348_ = lean_ctor_get(v_decl_3339_, 2);
v_type_3349_ = lean_ctor_get(v_decl_3339_, 3);
v_value_3350_ = lean_ctor_get(v_decl_3339_, 4);
v___x_3351_ = lean_st_ref_get(v_a_3341_);
v_subst_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc_ref(v_subst_3352_);
lean_dec(v___x_3351_);
v___x_3353_ = 0;
v___x_3354_ = 0;
lean_inc_ref(v_type_3349_);
v___x_3355_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3353_, v_subst_3352_, v___x_3354_, v_type_3349_);
lean_dec_ref(v_subst_3352_);
lean_inc_ref(v_params_3348_);
v___x_3356_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v___x_3353_, v___x_3354_, v_params_3348_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_, v_a_3346_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v_a_3357_; lean_object* v___x_3358_; 
v_a_3357_ = lean_ctor_get(v___x_3356_, 0);
lean_inc(v_a_3357_);
lean_dec_ref(v___x_3356_);
lean_inc_ref(v_a_3345_);
lean_inc_ref(v_value_3350_);
v___x_3358_ = l_Lean_Compiler_LCNF_Simp_simp(v_value_3350_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_, v_a_3346_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v_a_3359_; lean_object* v___x_3360_; 
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3359_);
lean_dec_ref(v___x_3358_);
v___x_3360_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3353_, v_decl_3339_, v___x_3355_, v_a_3357_, v_a_3359_, v_a_3344_);
return v___x_3360_;
}
else
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3368_; 
lean_dec(v_a_3357_);
lean_dec_ref(v___x_3355_);
lean_dec_ref(v_decl_3339_);
v_a_3361_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3363_ = v___x_3358_;
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3358_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_a_3361_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
lean_dec_ref(v___x_3355_);
lean_dec_ref(v_decl_3339_);
v_a_3369_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3356_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3356_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object* v_decl_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_3377_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_, v_a_3384_);
lean_dec(v_a_3384_);
lean_dec_ref(v_a_3383_);
lean_dec(v_a_3382_);
lean_dec_ref(v_a_3381_);
lean_dec_ref(v_a_3380_);
lean_dec(v_a_3379_);
lean_dec_ref(v_a_3378_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object* v_fvarId_3387_, lean_object* v_i_3388_, lean_object* v_as_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v_res_3398_; 
v_res_3398_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(v_fvarId_3387_, v_i_3388_, v_as_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object* v_cases_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_);
lean_dec(v_a_3406_);
lean_dec_ref(v_a_3405_);
lean_dec(v_a_3404_);
lean_dec_ref(v_a_3403_);
lean_dec_ref(v_a_3402_);
lean_dec(v_a_3401_);
lean_dec_ref(v_a_3400_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object* v_letDecl_3409_, lean_object* v_k_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v_letDecl_3409_, v_k_3410_, v_a_3411_, v_a_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_);
lean_dec(v_a_3417_);
lean_dec_ref(v_a_3416_);
lean_dec(v_a_3415_);
lean_dec_ref(v_a_3414_);
lean_dec_ref(v_a_3413_);
lean_dec(v_a_3412_);
lean_dec_ref(v_a_3411_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object* v_code_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_, lean_object* v_a_3424_, lean_object* v_a_3425_, lean_object* v_a_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_3420_, v_a_3421_, v_a_3422_, v_a_3423_, v_a_3424_, v_a_3425_, v_a_3426_, v_a_3427_);
lean_dec(v_a_3427_);
lean_dec(v_a_3425_);
lean_dec_ref(v_a_3424_);
lean_dec_ref(v_a_3423_);
lean_dec(v_a_3422_);
lean_dec_ref(v_a_3421_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t v_pu_3430_, uint8_t v_t_3431_, lean_object* v_decl_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
lean_object* v___x_3441_; 
v___x_3441_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_3430_, v_t_3431_, v_decl_3432_, v___y_3434_, v___y_3437_);
return v___x_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object* v_pu_3442_, lean_object* v_t_3443_, lean_object* v_decl_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
uint8_t v_pu_boxed_3453_; uint8_t v_t_boxed_3454_; lean_object* v_res_3455_; 
v_pu_boxed_3453_ = lean_unbox(v_pu_3442_);
v_t_boxed_3454_ = lean_unbox(v_t_3443_);
v_res_3455_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(v_pu_boxed_3453_, v_t_boxed_3454_, v_decl_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_);
lean_dec(v___y_3451_);
lean_dec_ref(v___y_3450_);
lean_dec(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec_ref(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
return v_res_3455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t v_pu_3456_, uint8_t v_t_3457_, lean_object* v_args_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_3456_, v_t_3457_, v_args_3458_, v___y_3460_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object* v_pu_3468_, lean_object* v_t_3469_, lean_object* v_args_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_){
_start:
{
uint8_t v_pu_boxed_3479_; uint8_t v_t_boxed_3480_; lean_object* v_res_3481_; 
v_pu_boxed_3479_ = lean_unbox(v_pu_3468_);
v_t_boxed_3480_ = lean_unbox(v_t_3469_);
v_res_3481_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(v_pu_boxed_3479_, v_t_boxed_3480_, v_args_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object* v_inst_3482_, lean_object* v_R_3483_, lean_object* v_a_3484_, lean_object* v_b_3485_){
_start:
{
lean_object* v___x_3486_; 
v___x_3486_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v_a_3484_, v_b_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object* v_00_u03b2_3487_, lean_object* v_x_3488_, lean_object* v_x_3489_, lean_object* v_x_3490_){
_start:
{
lean_object* v___x_3491_; 
v___x_3491_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_x_3488_, v_x_3489_, v_x_3490_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object* v_as_3492_, size_t v_i_3493_, size_t v_stop_3494_, lean_object* v_b_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_){
_start:
{
lean_object* v___x_3504_; 
v___x_3504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_3492_, v_i_3493_, v_stop_3494_, v_b_3495_, v___y_3497_);
return v___x_3504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object* v_as_3505_, lean_object* v_i_3506_, lean_object* v_stop_3507_, lean_object* v_b_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_){
_start:
{
size_t v_i_boxed_3517_; size_t v_stop_boxed_3518_; lean_object* v_res_3519_; 
v_i_boxed_3517_ = lean_unbox_usize(v_i_3506_);
lean_dec(v_i_3506_);
v_stop_boxed_3518_ = lean_unbox_usize(v_stop_3507_);
lean_dec(v_stop_3507_);
v_res_3519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(v_as_3505_, v_i_boxed_3517_, v_stop_boxed_3518_, v_b_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_);
lean_dec(v___y_3515_);
lean_dec_ref(v___y_3514_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec_ref(v___y_3511_);
lean_dec(v___y_3510_);
lean_dec_ref(v___y_3509_);
lean_dec_ref(v_as_3505_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object* v_as_3520_, size_t v_i_3521_, size_t v_stop_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_){
_start:
{
lean_object* v___x_3531_; 
v___x_3531_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_3520_, v_i_3521_, v_stop_3522_, v___y_3529_);
return v___x_3531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object* v_as_3532_, lean_object* v_i_3533_, lean_object* v_stop_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_){
_start:
{
size_t v_i_boxed_3543_; size_t v_stop_boxed_3544_; lean_object* v_res_3545_; 
v_i_boxed_3543_ = lean_unbox_usize(v_i_3533_);
lean_dec(v_i_3533_);
v_stop_boxed_3544_ = lean_unbox_usize(v_stop_3534_);
lean_dec(v_stop_3534_);
v_res_3545_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(v_as_3532_, v_i_boxed_3543_, v_stop_boxed_3544_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_);
lean_dec(v___y_3541_);
lean_dec_ref(v___y_3540_);
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec_ref(v___y_3537_);
lean_dec(v___y_3536_);
lean_dec_ref(v___y_3535_);
lean_dec_ref(v_as_3532_);
return v_res_3545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object* v_as_3546_, size_t v_i_3547_, size_t v_stop_3548_, lean_object* v_b_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v___x_3555_; 
v___x_3555_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v_as_3546_, v_i_3547_, v_stop_3548_, v_b_3549_, v___y_3551_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object* v_as_3556_, lean_object* v_i_3557_, lean_object* v_stop_3558_, lean_object* v_b_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_){
_start:
{
size_t v_i_boxed_3565_; size_t v_stop_boxed_3566_; lean_object* v_res_3567_; 
v_i_boxed_3565_ = lean_unbox_usize(v_i_3557_);
lean_dec(v_i_3557_);
v_stop_boxed_3566_ = lean_unbox_usize(v_stop_3558_);
lean_dec(v_stop_3558_);
v_res_3567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(v_as_3556_, v_i_boxed_3565_, v_stop_boxed_3566_, v_b_3559_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec(v___y_3561_);
lean_dec_ref(v___y_3560_);
lean_dec_ref(v_as_3556_);
return v_res_3567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object* v_as_3568_, size_t v_i_3569_, size_t v_stop_3570_, lean_object* v_b_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_){
_start:
{
lean_object* v___x_3580_; 
v___x_3580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_3568_, v_i_3569_, v_stop_3570_, v_b_3571_, v___y_3575_, v___y_3576_, v___y_3577_, v___y_3578_);
return v___x_3580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object* v_as_3581_, lean_object* v_i_3582_, lean_object* v_stop_3583_, lean_object* v_b_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
size_t v_i_boxed_3593_; size_t v_stop_boxed_3594_; lean_object* v_res_3595_; 
v_i_boxed_3593_ = lean_unbox_usize(v_i_3582_);
lean_dec(v_i_3582_);
v_stop_boxed_3594_ = lean_unbox_usize(v_stop_3583_);
lean_dec(v_stop_3583_);
v_res_3595_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(v_as_3581_, v_i_boxed_3593_, v_stop_boxed_3594_, v_b_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3588_);
lean_dec_ref(v___y_3587_);
lean_dec(v___y_3586_);
lean_dec_ref(v___y_3585_);
lean_dec_ref(v_as_3581_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object* v_as_3596_, size_t v_i_3597_, size_t v_stop_3598_, lean_object* v_b_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v___x_3608_; 
v___x_3608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_3596_, v_i_3597_, v_stop_3598_, v_b_3599_, v___y_3604_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object* v_as_3609_, lean_object* v_i_3610_, lean_object* v_stop_3611_, lean_object* v_b_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
size_t v_i_boxed_3621_; size_t v_stop_boxed_3622_; lean_object* v_res_3623_; 
v_i_boxed_3621_ = lean_unbox_usize(v_i_3610_);
lean_dec(v_i_3610_);
v_stop_boxed_3622_ = lean_unbox_usize(v_stop_3611_);
lean_dec(v_stop_3611_);
v_res_3623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(v_as_3609_, v_i_boxed_3621_, v_stop_boxed_3622_, v_b_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec(v___y_3617_);
lean_dec_ref(v___y_3616_);
lean_dec_ref(v___y_3615_);
lean_dec(v___y_3614_);
lean_dec_ref(v___y_3613_);
lean_dec_ref(v_as_3609_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object* v_as_3624_, size_t v_i_3625_, size_t v_stop_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v___x_3635_; 
v___x_3635_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_3624_, v_i_3625_, v_stop_3626_, v___y_3628_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object* v_as_3636_, lean_object* v_i_3637_, lean_object* v_stop_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_){
_start:
{
size_t v_i_boxed_3647_; size_t v_stop_boxed_3648_; lean_object* v_res_3649_; 
v_i_boxed_3647_ = lean_unbox_usize(v_i_3637_);
lean_dec(v_i_3637_);
v_stop_boxed_3648_ = lean_unbox_usize(v_stop_3638_);
lean_dec(v_stop_3638_);
v_res_3649_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(v_as_3636_, v_i_boxed_3647_, v_stop_boxed_3648_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
lean_dec(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec(v___y_3643_);
lean_dec_ref(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec(v___y_3640_);
lean_dec_ref(v___y_3639_);
lean_dec_ref(v_as_3636_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object* v_as_3650_, size_t v_sz_3651_, size_t v_i_3652_, lean_object* v_b_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_){
_start:
{
lean_object* v___x_3662_; 
v___x_3662_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_3650_, v_sz_3651_, v_i_3652_, v_b_3653_, v___y_3655_);
return v___x_3662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object* v_as_3663_, lean_object* v_sz_3664_, lean_object* v_i_3665_, lean_object* v_b_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
size_t v_sz_boxed_3675_; size_t v_i_boxed_3676_; lean_object* v_res_3677_; 
v_sz_boxed_3675_ = lean_unbox_usize(v_sz_3664_);
lean_dec(v_sz_3664_);
v_i_boxed_3676_ = lean_unbox_usize(v_i_3665_);
lean_dec(v_i_3665_);
v_res_3677_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(v_as_3663_, v_sz_boxed_3675_, v_i_boxed_3676_, v_b_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec_ref(v___y_3669_);
lean_dec(v___y_3668_);
lean_dec_ref(v___y_3667_);
lean_dec_ref(v_as_3663_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object* v_00_u03b2_3678_, lean_object* v_x_3679_, size_t v_x_3680_, size_t v_x_3681_, lean_object* v_x_3682_, lean_object* v_x_3683_){
_start:
{
lean_object* v___x_3684_; 
v___x_3684_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_3679_, v_x_3680_, v_x_3681_, v_x_3682_, v_x_3683_);
return v___x_3684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3685_, lean_object* v_x_3686_, lean_object* v_x_3687_, lean_object* v_x_3688_, lean_object* v_x_3689_, lean_object* v_x_3690_){
_start:
{
size_t v_x_51442__boxed_3691_; size_t v_x_51443__boxed_3692_; lean_object* v_res_3693_; 
v_x_51442__boxed_3691_ = lean_unbox_usize(v_x_3687_);
lean_dec(v_x_3687_);
v_x_51443__boxed_3692_ = lean_unbox_usize(v_x_3688_);
lean_dec(v_x_3688_);
v_res_3693_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(v_00_u03b2_3685_, v_x_3686_, v_x_51442__boxed_3691_, v_x_51443__boxed_3692_, v_x_3689_, v_x_3690_);
return v_res_3693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t v_pu_3694_, uint8_t v_t_3695_, lean_object* v_i_3696_, lean_object* v_as_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_){
_start:
{
lean_object* v___x_3706_; 
v___x_3706_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_3694_, v_t_3695_, v_i_3696_, v_as_3697_, v___y_3699_, v___y_3702_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object* v_pu_3707_, lean_object* v_t_3708_, lean_object* v_i_3709_, lean_object* v_as_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
uint8_t v_pu_boxed_3719_; uint8_t v_t_boxed_3720_; lean_object* v_res_3721_; 
v_pu_boxed_3719_ = lean_unbox(v_pu_3707_);
v_t_boxed_3720_ = lean_unbox(v_t_3708_);
v_res_3721_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(v_pu_boxed_3719_, v_t_boxed_3720_, v_i_3709_, v_as_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
lean_dec(v___y_3717_);
lean_dec_ref(v___y_3716_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec_ref(v___y_3713_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object* v_00_u03b2_3722_, lean_object* v_n_3723_, lean_object* v_k_3724_, lean_object* v_v_3725_){
_start:
{
lean_object* v___x_3726_; 
v___x_3726_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v_n_3723_, v_k_3724_, v_v_3725_);
return v___x_3726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object* v_00_u03b2_3727_, size_t v_depth_3728_, lean_object* v_keys_3729_, lean_object* v_vals_3730_, lean_object* v_heq_3731_, lean_object* v_i_3732_, lean_object* v_entries_3733_){
_start:
{
lean_object* v___x_3734_; 
v___x_3734_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_3728_, v_keys_3729_, v_vals_3730_, v_i_3732_, v_entries_3733_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b2_3735_, lean_object* v_depth_3736_, lean_object* v_keys_3737_, lean_object* v_vals_3738_, lean_object* v_heq_3739_, lean_object* v_i_3740_, lean_object* v_entries_3741_){
_start:
{
size_t v_depth_boxed_3742_; lean_object* v_res_3743_; 
v_depth_boxed_3742_ = lean_unbox_usize(v_depth_3736_);
lean_dec(v_depth_3736_);
v_res_3743_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(v_00_u03b2_3735_, v_depth_boxed_3742_, v_keys_3737_, v_vals_3738_, v_heq_3739_, v_i_3740_, v_entries_3741_);
lean_dec_ref(v_vals_3738_);
lean_dec_ref(v_keys_3737_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object* v_00_u03b2_3744_, lean_object* v_x_3745_, lean_object* v_x_3746_, lean_object* v_x_3747_, lean_object* v_x_3748_){
_start:
{
lean_object* v___x_3749_; 
v___x_3749_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_x_3745_, v_x_3746_, v_x_3747_, v_x_3748_);
return v___x_3749_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
}
#ifdef __cplusplus
}
#endif
