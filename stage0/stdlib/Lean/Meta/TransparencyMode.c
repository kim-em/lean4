// Lean compiler output
// Module: Lean.Meta.TransparencyMode
// Imports: public import Init.Data.UInt.Basic public import Init.MetaTypes
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
LEAN_EXPORT uint64_t l_Lean_Meta_TransparencyMode_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_TransparencyMode_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_TransparencyMode_instHashable__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_TransparencyMode_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_TransparencyMode_instHashable__lean___closed__0 = (const lean_object*)&l_Lean_Meta_TransparencyMode_instHashable__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_TransparencyMode_instHashable__lean = (const lean_object*)&l_Lean_Meta_TransparencyMode_instHashable__lean___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_TransparencyMode_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_TransparencyMode_hash(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
uint64_t v___x_2_; 
v___x_2_ = 7ULL;
return v___x_2_;
}
case 1:
{
uint64_t v___x_3_; 
v___x_3_ = 11ULL;
return v___x_3_;
}
case 2:
{
uint64_t v___x_4_; 
v___x_4_ = 13ULL;
return v___x_4_;
}
case 3:
{
uint64_t v___x_5_; 
v___x_5_ = 17ULL;
return v___x_5_;
}
case 4:
{
uint64_t v___x_6_; 
v___x_6_ = 19ULL;
return v___x_6_;
}
default: 
{
uint64_t v___x_7_; 
v___x_7_ = 23ULL;
return v___x_7_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TransparencyMode_hash___boxed(lean_object* v_x_8_){
_start:
{
uint8_t v_x_76__boxed_9_; uint64_t v_res_10_; lean_object* v_r_11_; 
v_x_76__boxed_9_ = lean_unbox(v_x_8_);
v_res_10_ = l_Lean_Meta_TransparencyMode_hash(v_x_76__boxed_9_);
v_r_11_ = lean_box_uint64(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t v_x_14_, uint8_t v_x_15_){
_start:
{
switch(v_x_15_)
{
case 4:
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
case 2:
{
switch(v_x_14_)
{
case 4:
{
uint8_t v___x_17_; 
v___x_17_ = 1;
return v___x_17_;
}
case 2:
{
uint8_t v___x_18_; 
v___x_18_ = 0;
return v___x_18_;
}
case 3:
{
uint8_t v___x_19_; 
v___x_19_ = 0;
return v___x_19_;
}
case 5:
{
uint8_t v___x_20_; 
v___x_20_ = 0;
return v___x_20_;
}
default: 
{
uint8_t v___x_21_; 
v___x_21_ = 0;
return v___x_21_;
}
}
}
case 3:
{
switch(v_x_14_)
{
case 4:
{
uint8_t v___x_22_; 
v___x_22_ = 1;
return v___x_22_;
}
case 2:
{
uint8_t v___x_23_; 
v___x_23_ = 1;
return v___x_23_;
}
case 3:
{
uint8_t v___x_24_; 
v___x_24_ = 0;
return v___x_24_;
}
case 5:
{
uint8_t v___x_25_; 
v___x_25_ = 0;
return v___x_25_;
}
default: 
{
uint8_t v___x_26_; 
v___x_26_ = 0;
return v___x_26_;
}
}
}
case 5:
{
switch(v_x_14_)
{
case 4:
{
uint8_t v___x_27_; 
v___x_27_ = 1;
return v___x_27_;
}
case 2:
{
uint8_t v___x_28_; 
v___x_28_ = 1;
return v___x_28_;
}
case 3:
{
uint8_t v___x_29_; 
v___x_29_ = 1;
return v___x_29_;
}
case 5:
{
uint8_t v___x_30_; 
v___x_30_ = 0;
return v___x_30_;
}
default: 
{
uint8_t v___x_31_; 
v___x_31_ = 0;
return v___x_31_;
}
}
}
case 0:
{
switch(v_x_14_)
{
case 4:
{
uint8_t v___x_32_; 
v___x_32_ = 1;
return v___x_32_;
}
case 2:
{
uint8_t v___x_33_; 
v___x_33_ = 1;
return v___x_33_;
}
case 3:
{
uint8_t v___x_34_; 
v___x_34_ = 1;
return v___x_34_;
}
case 5:
{
uint8_t v___x_35_; 
v___x_35_ = 1;
return v___x_35_;
}
case 1:
{
uint8_t v___x_36_; 
v___x_36_ = 1;
return v___x_36_;
}
default: 
{
uint8_t v___x_37_; 
v___x_37_ = 0;
return v___x_37_;
}
}
}
default: 
{
switch(v_x_14_)
{
case 4:
{
uint8_t v___x_38_; 
v___x_38_ = 1;
return v___x_38_;
}
case 2:
{
uint8_t v___x_39_; 
v___x_39_ = 1;
return v___x_39_;
}
case 3:
{
uint8_t v___x_40_; 
v___x_40_ = 1;
return v___x_40_;
}
case 5:
{
uint8_t v___x_41_; 
v___x_41_ = 1;
return v___x_41_;
}
default: 
{
uint8_t v___x_42_; 
v___x_42_ = 0;
return v___x_42_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TransparencyMode_lt___boxed(lean_object* v_x_43_, lean_object* v_x_44_){
_start:
{
uint8_t v_x_137__boxed_45_; uint8_t v_x_138__boxed_46_; uint8_t v_res_47_; lean_object* v_r_48_; 
v_x_137__boxed_45_ = lean_unbox(v_x_43_);
v_x_138__boxed_46_ = lean_unbox(v_x_44_);
v_res_47_ = l_Lean_Meta_TransparencyMode_lt(v_x_137__boxed_45_, v_x_138__boxed_46_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_TransparencyMode(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_TransparencyMode(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_TransparencyMode(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_TransparencyMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_TransparencyMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_TransparencyMode(builtin);
}
#ifdef __cplusplus
}
#endif
