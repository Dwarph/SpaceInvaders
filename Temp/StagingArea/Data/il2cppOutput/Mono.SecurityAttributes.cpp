#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t417.h"
#include "t417MD.h"
#include "t409.h"
#include "t409MD.h"
#include "t412.h"
#include "t412MD.h"
#include "t408.h"
#include "t408MD.h"
#include "t885.h"
#include "t885MD.h"
#include "t411.h"
#include "t411MD.h"
#include "t415.h"
#include "t415MD.h"
#include "t83.h"
#include "t83MD.h"
#include "t754.h"
#include "t754MD.h"
#include "t888.h"
#include "t888MD.h"
#include "t889.h"
#include "t889MD.h"
#include "t884.h"
#include "t884MD.h"
extern TypeInfo* t417_TI_var;
extern TypeInfo* t409_TI_var;
extern TypeInfo* t412_TI_var;
extern TypeInfo* t408_TI_var;
extern TypeInfo* t885_TI_var;
extern TypeInfo* t411_TI_var;
extern TypeInfo* t415_TI_var;
extern TypeInfo* t83_TI_var;
extern TypeInfo* t754_TI_var;
extern TypeInfo* t888_TI_var;
extern TypeInfo* t889_TI_var;
extern TypeInfo* t884_TI_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t417_TI_var = il2cpp_codegen_type_info_from_index(369);
		t409_TI_var = il2cpp_codegen_type_info_from_index(361);
		t412_TI_var = il2cpp_codegen_type_info_from_index(364);
		t408_TI_var = il2cpp_codegen_type_info_from_index(360);
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		t411_TI_var = il2cpp_codegen_type_info_from_index(363);
		t415_TI_var = il2cpp_codegen_type_info_from_index(367);
		t83_TI_var = il2cpp_codegen_type_info_from_index(42);
		t754_TI_var = il2cpp_codegen_type_info_from_index(1060);
		t888_TI_var = il2cpp_codegen_type_info_from_index(1770);
		t889_TI_var = il2cpp_codegen_type_info_from_index(1771);
		t884_TI_var = il2cpp_codegen_type_info_from_index(1766);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t417 * tmp;
		tmp = (t417 *)il2cpp_codegen_object_new (t417_TI_var);
		m1975(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t409 * tmp;
		tmp = (t409 *)il2cpp_codegen_object_new (t409_TI_var);
		m1967(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t412 * tmp;
		tmp = (t412 *)il2cpp_codegen_object_new (t412_TI_var);
		m1970(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t408 * tmp;
		tmp = (t408 *)il2cpp_codegen_object_new (t408_TI_var);
		m1966(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t411 * tmp;
		tmp = (t411 *)il2cpp_codegen_object_new (t411_TI_var);
		m1969(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t415 * tmp;
		tmp = (t415 *)il2cpp_codegen_object_new (t415_TI_var);
		m1973(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t83 * tmp;
		tmp = (t83 *)il2cpp_codegen_object_new (t83_TI_var);
		m222(tmp, NULL);
		m223(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t754 * tmp;
		tmp = (t754 *)il2cpp_codegen_object_new (t754_TI_var);
		m3373(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t888 * tmp;
		tmp = (t888 *)il2cpp_codegen_object_new (t888_TI_var);
		m3578(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t889 * tmp;
		tmp = (t889 *)il2cpp_codegen_object_new (t889_TI_var);
		m3579(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t884 * tmp;
		tmp = (t884 *)il2cpp_codegen_object_new (t884_TI_var);
		m3574(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1158_CustomAttributesCacheGenerator_m4836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t885_TI_var;
void t1157_CustomAttributesCacheGenerator_m4783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t885_TI_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t885 * tmp;
		tmp = (t885 *)il2cpp_codegen_object_new (t885_TI_var);
		m3575(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
#include "t438.h"
#include "t438MD.h"
extern TypeInfo* t438_TI_var;
void t1087_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t438_TI_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t438 * tmp;
		tmp = (t438 *)il2cpp_codegen_object_new (t438_TI_var);
		m2062(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
#include "t85.h"
#include "t85MD.h"
extern TypeInfo* t85_TI_var;
void t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t973_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t973_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t973_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t438_TI_var;
void t1118_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t438_TI_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t438 * tmp;
		tmp = (t438 *)il2cpp_codegen_object_new (t438_TI_var);
		m2062(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
#include "t418.h"
#include "t418MD.h"
extern TypeInfo* t418_TI_var;
void t1186_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t418_TI_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (t418_TI_var);
		m1976(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t438_TI_var;
void t1090_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t438_TI_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t438 * tmp;
		tmp = (t438 *)il2cpp_codegen_object_new (t438_TI_var);
		m2062(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1090_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t438_TI_var;
void t1121_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t438_TI_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t438 * tmp;
		tmp = (t438 *)il2cpp_codegen_object_new (t438_TI_var);
		m2062(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1188_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t418_TI_var;
void t1190_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t418_TI_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (t418_TI_var);
		m1976(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t418_TI_var;
void t1192_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t418_TI_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (t418_TI_var);
		m1976(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t438_TI_var;
void t1208_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t438_TI_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t438 * tmp;
		tmp = (t438 *)il2cpp_codegen_object_new (t438_TI_var);
		m2062(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1225_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1225_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1225_CustomAttributesCacheGenerator_m5266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1225_CustomAttributesCacheGenerator_m5267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1233_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1235_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t418_TI_var;
void t1209_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t418_TI_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t418 * tmp;
		tmp = (t418 *)il2cpp_codegen_object_new (t418_TI_var);
		m1976(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* t85_TI_var;
void t1270_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t85_TI_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t85 * tmp;
		tmp = (t85 *)il2cpp_codegen_object_new (t85_TI_var);
		m225(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	t1158_CustomAttributesCacheGenerator_m4799,
	t1158_CustomAttributesCacheGenerator_m4801,
	t1158_CustomAttributesCacheGenerator_m4803,
	t1158_CustomAttributesCacheGenerator_m4810,
	t1158_CustomAttributesCacheGenerator_m4811,
	t1158_CustomAttributesCacheGenerator_m4814,
	t1158_CustomAttributesCacheGenerator_m4815,
	t1158_CustomAttributesCacheGenerator_m4825,
	t1158_CustomAttributesCacheGenerator_m4829,
	t1158_CustomAttributesCacheGenerator_m4835,
	t1158_CustomAttributesCacheGenerator_m4836,
	t1157_CustomAttributesCacheGenerator_m4783,
	t1087_CustomAttributesCacheGenerator,
	t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	t1117_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	t973_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	t973_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	t973_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	t1118_CustomAttributesCacheGenerator,
	t1186_CustomAttributesCacheGenerator,
	t1090_CustomAttributesCacheGenerator,
	t1090_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	t1121_CustomAttributesCacheGenerator,
	t1188_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	t1190_CustomAttributesCacheGenerator,
	t1192_CustomAttributesCacheGenerator,
	t1208_CustomAttributesCacheGenerator,
	t1225_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	t1225_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	t1225_CustomAttributesCacheGenerator_m5266,
	t1225_CustomAttributesCacheGenerator_m5267,
	t1233_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	t1235_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	t1209_CustomAttributesCacheGenerator,
	t1270_CustomAttributesCacheGenerator,
};
