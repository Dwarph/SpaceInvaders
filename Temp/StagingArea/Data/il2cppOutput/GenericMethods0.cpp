#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"
#include "codegen/il2cpp-codegen.h"

#include "t52.h"
#include "t7.h"
#include "t58.h"
#include "t47.h"
#include "t711.h"
#include "t53.h"
#include "t52MD.h"
#include "t711MD.h"
struct t52;
struct t7;
struct t52;
struct t7;
extern "C" t7 * m18056_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18056(__this, p0, method) (( t7 * (*) (t52 *, int32_t, const MethodInfo*))m18056_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t7 * m18056_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t7 **)(&V_0));
		t7 * L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t61.h"
#include "t61MD.h"
struct t52;
struct t7;
extern "C" void m18057_gshared (t52 * __this, t7 * p0, const MethodInfo* method);
#define m18057(__this, p0, method) (( void (*) (t52 *, t7 *, const MethodInfo*))m18057_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18057_gshared (t52 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t54.h"
#include "t1798.h"
#include "t1330MD.h"
#include "t1798MD.h"
#include "t7MD.h"
struct t52;
struct t7;
extern "C" bool m18058_gshared (t52 * __this, t7 * p0, const MethodInfo* method);
#define m18058(__this, p0, method) (( bool (*) (t52 *, t7 *, const MethodInfo*))m18058_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18058_gshared (t52 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t7 **)(&V_2));
		t7 * L_5 = p0;
		t7 * L_6 = L_5;
		if (((t7 *)L_6))
		{
			goto IL_0041;
		}
	}
	{
		t7 * L_7 = V_2;
		t7 * L_8 = L_7;
		if (((t7 *)L_8))
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t7 * L_9 = V_2;
		t7 * L_10 = L_9;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)(*(&p0)), (t7 *)((t7 *)L_10));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_12 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
#include "t708.h"
#include "t396.h"
#include "t708MD.h"
#include "t396MD.h"
struct t52;
struct t69;
extern "C" void m18059_gshared (t52 * __this, t69* p0, int32_t p1, const MethodInfo* method);
#define m18059(__this, p0, p1, method) (( void (*) (t52 *, t69*, int32_t, const MethodInfo*))m18059_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18059_gshared (t52 * __this, t69* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t69* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t69* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t69* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t69* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t7;
extern "C" bool m18060_gshared (t52 * __this, t7 * p0, const MethodInfo* method);
#define m18060(__this, p0, method) (( bool (*) (t52 *, t7 *, const MethodInfo*))m18060_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18060_gshared (t52 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t7;
extern "C" int32_t m18061_gshared (t52 * __this, t7 * p0, const MethodInfo* method);
#define m18061(__this, p0, method) (( int32_t (*) (t52 *, t7 *, const MethodInfo*))m18061_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18061_gshared (t52 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t7 **)(&V_2));
		t7 * L_5 = p0;
		t7 * L_6 = L_5;
		if (((t7 *)L_6))
		{
			goto IL_0051;
		}
	}
	{
		t7 * L_7 = V_2;
		t7 * L_8 = L_7;
		if (((t7 *)L_8))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_9+(int32_t)L_10));
	}

IL_0047:
	{
		int32_t L_11 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_0051:
	{
		t7 * L_12 = p0;
		t7 * L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)(*(&V_2)), (t7 *)((t7 *)L_13));
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_15 = V_1;
		int32_t L_16 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_15+(int32_t)L_16));
	}

IL_0070:
	{
		int32_t L_17 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_20 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_20-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t7;
extern "C" void m18062_gshared (t52 * __this, int32_t p0, t7 * p1, const MethodInfo* method);
#define m18062(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t7 *, const MethodInfo*))m18062_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18062_gshared (t52 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t7;
struct t52;
struct t7;
extern "C" void m18064_gshared (t52 * __this, int32_t p0, t7 * p1, const MethodInfo* method);
#define m18064(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t7 *, const MethodInfo*))m18064_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18064_gshared (t52 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t7 * L_6 = p1;
		t7 * L_7 = L_6;
		ArrayElementTypeCheck (L_4, ((t7 *)L_7));
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)((t7 *)L_7);
		return;
	}

IL_0028:
	{
		int32_t L_8 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_8, (t7 **)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2353.h"
#include "t2353MD.h"
struct t52;
struct t87;
extern "C" t7* m18065_gshared (t52 * __this, const MethodInfo* method);
#define m18065(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18065_gshared)(__this, method)
extern "C" t7* m18065_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2353  L_0 = {0};
		(( void (*) (t2353 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2353  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t55.h"
#include "t347.h"
#include "t359.h"
#include "t347MD.h"
#include "t55MD.h"
struct t55;
struct t7;
extern "C" t7 * m157_gshared (t55 * __this, const MethodInfo* method);
#define m157(__this, method) (( t7 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)
extern TypeInfo* t347_TI_var;
extern "C" t7 * m157_gshared (t55 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		t55 * L_1 = m1945((t55 *)__this, (t347 *)L_0, NULL);
		return ((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t13.h"
#include "t13MD.h"
struct t13;
struct t7;
extern "C" t7 * m188_gshared (t13 * __this, const MethodInfo* method);
#define m188(__this, method) (( t7 * (*) (t13 *, const MethodInfo*))m188_gshared)(__this, method)
extern TypeInfo* t347_TI_var;
extern "C" t7 * m188_gshared (t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		t55 * L_1 = m2686((t13 *)__this, (t347 *)L_0, NULL);
		return ((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
extern "C" void m18066_gshared (t7 * __this , t69** p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18066(__this , p0, p1, p2, method) (( void (*) (t7 * , t69**, int32_t, int32_t, const MethodInfo*))m18066_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t69;
extern "C" void m18067_gshared (t7 * __this , t69** p0, int32_t p1, const MethodInfo* method);
#define m18067(__this , p0, p1, method) (( void (*) (t7 * , t69**, int32_t, const MethodInfo*))m18067_gshared)(__this , p0, p1, method)
extern "C" void m18067_gshared (t7 * __this , t69** p0, int32_t p1, const MethodInfo* method)
{
	t69** G_B2_0 = {0};
	t69** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t69** G_B3_1 = {0};
	{
		t69** L_0 = p0;
		t69** L_1 = p0;
		G_B1_0 = L_0;
		if ((*((t69**)L_1)))
		{
			G_B2_0 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		t69** L_2 = p0;
		G_B3_0 = (((int32_t)(((t52 *)(*((t69**)L_2)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		int32_t L_3 = p1;
		(( void (*) (t7 * , t69**, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69**)G_B3_1, (int32_t)G_B3_0, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t693MD.h"
extern TypeInfo* t711_TI_var;
extern "C" void m18066_gshared (t7 * __this , t69** p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		t69** L_2 = p0;
		if ((*((t69**)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t69** L_3 = p0;
		int32_t L_4 = p2;
		*((t7 **)(L_3)) = (t7 *)((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_4));
		return;
	}

IL_0017:
	{
		t69** L_5 = p0;
		int32_t L_6 = p2;
		if ((!(((uint32_t)(((int32_t)(((t52 *)(*((t69**)L_5)))->max_length)))) == ((uint32_t)L_6))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = p2;
		V_0 = (t69*)((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_7));
		t69** L_8 = p0;
		t69* L_9 = V_0;
		int32_t L_10 = p2;
		int32_t L_11 = p1;
		int32_t L_12 = m9829(NULL, (int32_t)L_10, (int32_t)L_11, NULL);
		m4651(NULL, (t52 *)(t52 *)(*((t69**)L_8)), (t52 *)(t52 *)L_9, (int32_t)L_12, NULL);
		t69** L_13 = p0;
		t69* L_14 = V_0;
		*((t7 **)(L_13)) = (t7 *)L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2364.h"
#include "t2364MD.h"
struct t52;
struct t69;
struct t7;
extern "C" int32_t m10209_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m10209(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t69*, t7 *, int32_t, int32_t, const MethodInfo*))m10209_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2364_TI_var;
extern "C" int32_t m10209_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2364 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = p2;
		t69* L_4 = p0;
		int32_t L_5 = m6350((t52 *)L_4, (int32_t)0, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p2;
		t69* L_7 = p0;
		int32_t L_8 = m6362((t52 *)L_7, (int32_t)0, NULL);
		int32_t L_9 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))) <= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t711 * L_10 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_10, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0030:
	{
		int32_t L_11 = p2;
		int32_t L_12 = p3;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12));
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_13 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (t2364 *)L_13;
		int32_t L_14 = p2;
		V_2 = (int32_t)L_14;
		goto IL_0054;
	}

IL_003e:
	{
		t2364 * L_15 = V_1;
		t69* L_16 = p0;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		t7 * L_19 = p1;
		bool L_20 = (bool)VirtFuncInvoker2< bool, t7 *, t7 * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (t2364 *)L_15, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_16, L_18)), (t7 *)L_19);
		if (!L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t3230;
extern "C" void m18068_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18068(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))m18068_gshared)(__this , p0, p1, p2, p3, p4, method)
struct t52;
struct t69;
struct t3230;
extern "C" void m18069_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method);
#define m18069(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t69*, int32_t, int32_t, t7*, const MethodInfo*))m18069_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18069_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t7* L_5 = p3;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t69*)(t69*)NULL, (int32_t)L_3, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1312.h"
#include "t65.h"
#include "t692.h"
#include "t214.h"
#include "t1098.h"
#include "t1098MD.h"
struct t52;
struct t1312;
struct t69;
extern "C" t1312 * m18070_gshared (t7 * __this , t69* p0, const MethodInfo* method);
#define m18070(__this , p0, method) (( t1312 * (*) (t7 * , t69*, const MethodInfo*))m18070_gshared)(__this , p0, method)
struct t52;
struct t69;
struct t3230;
extern "C" void m18071_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18071(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))m18071_gshared)(__this , p0, p1, p2, p3, p4, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t1840_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18068_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t1312 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t65 * V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1191, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = p3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		t711 * L_5 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_5, (t47*)(t47*) &_stringLiteral1068, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t69* L_6 = p0;
		int32_t L_7 = p2;
		int32_t L_8 = p3;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))-(int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		t69* L_9 = p1;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = p2;
		t69* L_11 = p1;
		int32_t L_12 = p3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		t396 * L_13 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_13, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0045:
	{
		int32_t L_14 = p3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		t7* L_15 = p4;
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		t69* L_16 = p1;
		if (L_16)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (t1312 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		t69* L_17 = p1;
		t1312 * L_18 = (( t1312 * (*) (t7 * , t69*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (t1312 *)L_18;
	}

IL_005c:
	{
		t69* L_19 = p0;
		if (!((t1840*)IsInst(L_19, t1840_TI_var)))
		{
			goto IL_0078;
		}
	}
	{
		t69* L_20 = p0;
		t69* L_21 = L_20;
		int32_t L_22 = p2;
		int32_t L_23 = p3;
		t1312 * L_24 = V_0;
		m6414(NULL, (t1840*)((t1840*)IsInst(((t69*)L_21), t1840_TI_var)), (int32_t)L_22, (int32_t)L_23, (t1312 *)L_24, NULL);
		return;
	}

IL_0078:
	{
		t69* L_25 = p0;
		if (!((t1018*)IsInst(L_25, t1018_TI_var)))
		{
			goto IL_0094;
		}
	}
	{
		t69* L_26 = p0;
		t69* L_27 = L_26;
		int32_t L_28 = p2;
		int32_t L_29 = p3;
		t1312 * L_30 = V_0;
		m6415(NULL, (t1018*)((t1018*)IsInst(((t69*)L_27), t1018_TI_var)), (int32_t)L_28, (int32_t)L_29, (t1312 *)L_30, NULL);
		return;
	}

IL_0094:
	{
		t69* L_31 = p0;
		if (!((t221*)IsInst(L_31, t221_TI_var)))
		{
			goto IL_00b0;
		}
	}
	{
		t69* L_32 = p0;
		t69* L_33 = L_32;
		int32_t L_34 = p2;
		int32_t L_35 = p3;
		t1312 * L_36 = V_0;
		m6416(NULL, (t221*)((t221*)IsInst(((t69*)L_33), t221_TI_var)), (int32_t)L_34, (int32_t)L_35, (t1312 *)L_36, NULL);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		int32_t L_37 = p2;
		V_1 = (int32_t)L_37;
		int32_t L_38 = p2;
		int32_t L_39 = p3;
		V_2 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38+(int32_t)L_39))-(int32_t)1));
		t69* L_40 = p0;
		t69* L_41 = p1;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		t7* L_44 = p4;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t69*)L_40, (t69*)L_41, (int32_t)L_42, (int32_t)L_43, (t7*)L_44, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		V_3 = (t65 *)((t65 *)__exception_local);
		t47* L_45 = m6526(NULL, (t47*)(t47*) &_stringLiteral1192, NULL);
		t65 * L_46 = V_3;
		t1098 * L_47 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_47, (t47*)L_45, (t65 *)L_46, NULL);
		il2cpp_codegen_raise_exception(L_47);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t226.h"
#include "t1312MD.h"
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t1312_TI_var;
extern TypeInfo* t1840_TI_var;
extern const MethodInfo* m6409_MI_var;
extern const MethodInfo* m6412_MI_var;
extern const MethodInfo* m6411_MI_var;
extern "C" t1312 * m18070_gshared (t7 * __this , t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t1312_TI_var = il2cpp_codegen_type_info_from_index(2733);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		m6409_MI_var = il2cpp_codegen_method_info_from_index(323);
		m6412_MI_var = il2cpp_codegen_method_info_from_index(324);
		m6411_MI_var = il2cpp_codegen_method_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (!((t1018*)IsInst(L_0, t1018_TI_var)))
		{
			goto IL_0015;
		}
	}
	{
		t69* L_1 = p0;
		t226 L_2 = { (void*)m6409_MI_var };
		t1312 * L_3 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_3, (t7 *)(t7 *)L_1, (t226)L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		t69* L_4 = p0;
		if (!((t1840*)IsInst(L_4, t1840_TI_var)))
		{
			goto IL_002a;
		}
	}
	{
		t69* L_5 = p0;
		t226 L_6 = { (void*)m6412_MI_var };
		t1312 * L_7 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_7, (t7 *)(t7 *)L_5, (t226)L_6, NULL);
		return L_7;
	}

IL_002a:
	{
		t69* L_8 = p0;
		t226 L_9 = { (void*)m6411_MI_var };
		t1312 * L_10 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_10, (t7 *)(t7 *)L_8, (t226)L_9, NULL);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" int32_t m18073_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18073(__this, p0, method) (( int32_t (*) (t52 *, int32_t, const MethodInfo*))m18073_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" int32_t m18073_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18074_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18074(__this, p0, method) (( void (*) (t52 *, int32_t, const MethodInfo*))m18074_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18074_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18075_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18075(__this, p0, method) (( bool (*) (t52 *, int32_t, const MethodInfo*))m18075_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18075_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int32_t*)(&V_2));
		int32_t L_5 = p0;
		int32_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1018;
extern "C" void m18076_gshared (t52 * __this, t1018* p0, int32_t p1, const MethodInfo* method);
#define m18076(__this, p0, p1, method) (( void (*) (t52 *, t1018*, int32_t, const MethodInfo*))m18076_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18076_gshared (t52 * __this, t1018* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1018* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1018* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1018* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1018* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1018* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18077_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18077(__this, p0, method) (( bool (*) (t52 *, int32_t, const MethodInfo*))m18077_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18077_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18078_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18078(__this, p0, method) (( int32_t (*) (t52 *, int32_t, const MethodInfo*))m18078_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18078_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int32_t*)(&V_2));
		int32_t L_5 = p0;
		int32_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int32_t L_14 = p0;
		int32_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18079_gshared (t52 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m18079(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int32_t, const MethodInfo*))m18079_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18079_gshared (t52 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18081_gshared (t52 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m18081(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int32_t, const MethodInfo*))m18081_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18081_gshared (t52 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (int32_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2370.h"
#include "t2370MD.h"
struct t52;
struct t2951;
extern "C" t7* m18082_gshared (t52 * __this, const MethodInfo* method);
#define m18082(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18082_gshared)(__this, method)
extern "C" t7* m18082_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2370  L_0 = {0};
		(( void (*) (t2370 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2370  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" double m18084_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18084(__this, p0, method) (( double (*) (t52 *, int32_t, const MethodInfo*))m18084_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" double m18084_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (double*)(&V_0));
		double L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18085_gshared (t52 * __this, double p0, const MethodInfo* method);
#define m18085(__this, p0, method) (( void (*) (t52 *, double, const MethodInfo*))m18085_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18085_gshared (t52 * __this, double p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18086_gshared (t52 * __this, double p0, const MethodInfo* method);
#define m18086(__this, p0, method) (( bool (*) (t52 *, double, const MethodInfo*))m18086_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18086_gshared (t52 * __this, double p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (double*)(&V_2));
		double L_5 = p0;
		double L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		double L_8 = V_2;
		double L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		double L_11 = V_2;
		double L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1840;
extern "C" void m18087_gshared (t52 * __this, t1840* p0, int32_t p1, const MethodInfo* method);
#define m18087(__this, p0, p1, method) (( void (*) (t52 *, t1840*, int32_t, const MethodInfo*))m18087_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18087_gshared (t52 * __this, t1840* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1840* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1840* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1840* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1840* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1840* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18088_gshared (t52 * __this, double p0, const MethodInfo* method);
#define m18088(__this, p0, method) (( bool (*) (t52 *, double, const MethodInfo*))m18088_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18088_gshared (t52 * __this, double p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18089_gshared (t52 * __this, double p0, const MethodInfo* method);
#define m18089(__this, p0, method) (( int32_t (*) (t52 *, double, const MethodInfo*))m18089_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18089_gshared (t52 * __this, double p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (double*)(&V_2));
		double L_5 = p0;
		double L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		double L_8 = V_2;
		double L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		double L_14 = p0;
		double L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18090_gshared (t52 * __this, int32_t p0, double p1, const MethodInfo* method);
#define m18090(__this, p0, p1, method) (( void (*) (t52 *, int32_t, double, const MethodInfo*))m18090_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18090_gshared (t52 * __this, int32_t p0, double p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18092_gshared (t52 * __this, int32_t p0, double p1, const MethodInfo* method);
#define m18092(__this, p0, p1, method) (( void (*) (t52 *, int32_t, double, const MethodInfo*))m18092_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18092_gshared (t52 * __this, int32_t p0, double p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		double L_6 = p1;
		double L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (double*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2371.h"
#include "t2371MD.h"
struct t52;
struct t3231;
extern "C" t7* m18093_gshared (t52 * __this, const MethodInfo* method);
#define m18093(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18093_gshared)(__this, method)
extern "C" t7* m18093_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2371  L_0 = {0};
		(( void (*) (t2371 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2371  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t699.h"
struct t52;
struct t52;
extern "C" uint16_t m18095_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18095(__this, p0, method) (( uint16_t (*) (t52 *, int32_t, const MethodInfo*))m18095_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" uint16_t m18095_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (uint16_t*)(&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18096_gshared (t52 * __this, uint16_t p0, const MethodInfo* method);
#define m18096(__this, p0, method) (( void (*) (t52 *, uint16_t, const MethodInfo*))m18096_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18096_gshared (t52 * __this, uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18097_gshared (t52 * __this, uint16_t p0, const MethodInfo* method);
#define m18097(__this, p0, method) (( bool (*) (t52 *, uint16_t, const MethodInfo*))m18097_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18097_gshared (t52 * __this, uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint16_t*)(&V_2));
		uint16_t L_5 = p0;
		uint16_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		uint16_t L_8 = V_2;
		uint16_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint16_t L_11 = V_2;
		uint16_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t948;
extern "C" void m18098_gshared (t52 * __this, t948* p0, int32_t p1, const MethodInfo* method);
#define m18098(__this, p0, p1, method) (( void (*) (t52 *, t948*, int32_t, const MethodInfo*))m18098_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18098_gshared (t52 * __this, t948* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t948* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t948* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t948* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t948* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t948* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18099_gshared (t52 * __this, uint16_t p0, const MethodInfo* method);
#define m18099(__this, p0, method) (( bool (*) (t52 *, uint16_t, const MethodInfo*))m18099_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18099_gshared (t52 * __this, uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18100_gshared (t52 * __this, uint16_t p0, const MethodInfo* method);
#define m18100(__this, p0, method) (( int32_t (*) (t52 *, uint16_t, const MethodInfo*))m18100_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18100_gshared (t52 * __this, uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint16_t*)(&V_2));
		uint16_t L_5 = p0;
		uint16_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint16_t L_8 = V_2;
		uint16_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		uint16_t L_14 = p0;
		uint16_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18101_gshared (t52 * __this, int32_t p0, uint16_t p1, const MethodInfo* method);
#define m18101(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint16_t, const MethodInfo*))m18101_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18101_gshared (t52 * __this, int32_t p0, uint16_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18103_gshared (t52 * __this, int32_t p0, uint16_t p1, const MethodInfo* method);
#define m18103(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint16_t, const MethodInfo*))m18103_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18103_gshared (t52 * __this, int32_t p0, uint16_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		uint16_t L_6 = p1;
		uint16_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (uint16_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2373.h"
#include "t2373MD.h"
struct t52;
struct t3232;
extern "C" t7* m18104_gshared (t52 * __this, const MethodInfo* method);
#define m18104(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18104_gshared)(__this, method)
extern "C" t7* m18104_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2373  L_0 = {0};
		(( void (*) (t2373 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2373  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t7;
struct t3230;
extern "C" int32_t m18105_gshared (t7 * __this , t7 * p0, t7 * p1, t7* p2, const MethodInfo* method);
#define m18105(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t7 *, t7 *, t7*, const MethodInfo*))m18105_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t69;
extern "C" void m18106_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18106(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t69*, t69*, int32_t, int32_t, const MethodInfo*))m18106_gshared)(__this , p0, p1, p2, p3, method)
extern "C" void m18071_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t7 * V_3 = {0};
	{
		int32_t L_0 = p2;
		int32_t L_1 = p3;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p2;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p3;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t69* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p3;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0035;
		}
	}
	{
		t69* L_13 = p0;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t7 * L_16 = V_3;
		t7* L_17 = p4;
		int32_t L_18 = (( int32_t (*) (t7 * , t7 *, t7 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_13, L_15)), (t7 *)L_16, (t7*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p2;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		t7 * L_22 = V_3;
		t69* L_23 = p0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		t7* L_26 = p4;
		int32_t L_27 = (( int32_t (*) (t7 * , t7 *, t7 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t7 *)L_22, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_23, L_25)), (t7*)L_26, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}
	{
		t69* L_30 = p0;
		t69* L_31 = p1;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t69*)L_30, (t69*)L_31, (int32_t)L_32, (int32_t)L_33, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_34 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_35-(int32_t)1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		int32_t L_36 = p2;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_007b;
		}
	}
	{
		t69* L_38 = p0;
		t69* L_39 = p1;
		int32_t L_40 = p2;
		int32_t L_41 = V_1;
		t7* L_42 = p4;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t69*)L_38, (t69*)L_39, (int32_t)L_40, (int32_t)L_41, (t7*)L_42, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = p3;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_008a;
		}
	}
	{
		t69* L_45 = p0;
		t69* L_46 = p1;
		int32_t L_47 = V_0;
		int32_t L_48 = p3;
		t7* L_49 = p4;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t69*)L_45, (t69*)L_46, (int32_t)L_47, (int32_t)L_48, (t7*)L_49, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t47MD.h"
extern TypeInfo* t91_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" int32_t m18105_gshared (t7 * __this , t7 * p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t91_TI_var = il2cpp_codegen_type_info_from_index(98);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t7* L_0 = p2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t7* L_1 = p2;
		t7 * L_2 = p0;
		t7 * L_3 = p1;
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, t7 *, t7 * >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (t7*)L_1, (t7 *)L_2, (t7 *)L_3);
		return L_4;
	}

IL_000c:
	{
		t7 * L_5 = p0;
		t7 * L_6 = L_5;
		if (((t7 *)L_6))
		{
			goto IL_0021;
		}
	}
	{
		t7 * L_7 = p1;
		t7 * L_8 = L_7;
		if (((t7 *)L_8))
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		t7 * L_9 = p1;
		t7 * L_10 = L_9;
		if (((t7 *)L_10))
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t7 * L_11 = p0;
		t7 * L_12 = L_11;
		if (!((t7*)IsInst(((t7 *)L_12), IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		t7 * L_13 = p0;
		t7 * L_14 = L_13;
		t7 * L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable`1<System.Object>::CompareTo(T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (t7*)((t7*)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (t7 *)L_15);
		return L_16;
	}

IL_004a:
	{
		t7 * L_17 = p0;
		t7 * L_18 = L_17;
		if (!((t7 *)IsInst(((t7 *)L_18), t91_TI_var)))
		{
			goto IL_006e;
		}
	}
	{
		t7 * L_19 = p0;
		t7 * L_20 = L_19;
		t7 * L_21 = p1;
		t7 * L_22 = L_21;
		int32_t L_23 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t91_TI_var, (t7 *)((t7 *)Castclass(((t7 *)L_20), t91_TI_var)), (t7 *)((t7 *)L_22));
		return L_23;
	}

IL_006e:
	{
		t47* L_24 = m6526(NULL, (t47*)(t47*) &_stringLiteral1195, NULL);
		V_0 = (t47*)L_24;
		t47* L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_26 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_27 = m1593(NULL, (t47*)L_25, (t7 *)L_26, NULL);
		t1098 * L_28 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_28, (t47*)L_27, NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18106_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	t7 * V_0 = {0};
	t7 * V_1 = {0};
	{
		t69* L_0 = p0;
		int32_t L_1 = p2;
		int32_t L_2 = L_1;
		V_0 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_0, L_2));
		t69* L_3 = p0;
		int32_t L_4 = p2;
		t69* L_5 = p0;
		int32_t L_6 = p3;
		int32_t L_7 = L_6;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_4)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_5, L_7));
		t69* L_8 = p0;
		int32_t L_9 = p3;
		t7 * L_10 = V_0;
		*((t7 **)(t7 **)SZArrayLdElema(L_8, L_9)) = (t7 *)L_10;
		t69* L_11 = p1;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		t69* L_12 = p1;
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		V_1 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_12, L_14));
		t69* L_15 = p1;
		int32_t L_16 = p2;
		t69* L_17 = p1;
		int32_t L_18 = p3;
		int32_t L_19 = L_18;
		*((t7 **)(t7 **)SZArrayLdElema(L_15, L_16)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_17, L_19));
		t69* L_20 = p1;
		int32_t L_21 = p3;
		t7 * L_22 = V_1;
		*((t7 **)(t7 **)SZArrayLdElema(L_20, L_21)) = (t7 *)L_22;
	}

IL_003f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2374.h"
struct t52;
struct t69;
struct t2374;
extern "C" void m18107_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t2374 * p3, const MethodInfo* method);
#define m18107(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t69*, int32_t, int32_t, t2374 *, const MethodInfo*))m18107_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t69;
struct t2374;
extern "C" void m18108_gshared (t7 * __this , t69* p0, int32_t p1, t2374 * p2, const MethodInfo* method);
#define m18108(__this , p0, p1, p2, method) (( void (*) (t7 * , t69*, int32_t, t2374 *, const MethodInfo*))m18108_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18108_gshared (t7 * __this , t69* p0, int32_t p1, t2374 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2374 * L_0 = p2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1193, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		t69* L_3 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = p1;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		t69* L_5 = p0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		t2374 * L_8 = p2;
		(( void (*) (t7 * , t69*, int32_t, int32_t, t2374 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_5, (int32_t)L_6, (int32_t)L_7, (t2374 *)L_8, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t47* L_9 = m6526(NULL, (t47*)(t47*) &_stringLiteral1194, NULL);
		t65 * L_10 = V_2;
		t1098 * L_11 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_11, (t47*)L_9, (t65 *)L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2374MD.h"
struct t52;
struct t69;
extern "C" void m18109_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18109(__this , p0, p1, p2, method) (( void (*) (t7 * , t69*, int32_t, int32_t, const MethodInfo*))m18109_gshared)(__this , p0, p1, p2, method)
extern "C" void m18107_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t2374 * p3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t7 * V_3 = {0};
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p1;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p2;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t69* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		t2374 * L_13 = p3;
		t69* L_14 = p0;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		t7 * L_17 = V_3;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t7 *, t7 * >::Invoke(10 /* System.Int32 System.Comparison`1<System.Object>::Invoke(T,T) */, (t2374 *)L_13, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_14, L_16)), (t7 *)L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p1;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		t2374 * L_22 = p3;
		t7 * L_23 = V_3;
		t69* L_24 = p0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, t7 *, t7 * >::Invoke(10 /* System.Int32 System.Comparison`1<System.Object>::Invoke(T,T) */, (t2374 *)L_22, (t7 *)L_23, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		t69* L_30 = p0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (t7 * , t69*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t69*)L_30, (int32_t)L_31, (int32_t)L_32, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = p1;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		t69* L_37 = p0;
		int32_t L_38 = p1;
		int32_t L_39 = V_1;
		t2374 * L_40 = p3;
		(( void (*) (t7 * , t69*, int32_t, int32_t, t2374 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t69*)L_37, (int32_t)L_38, (int32_t)L_39, (t2374 *)L_40, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = p2;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		t69* L_43 = p0;
		int32_t L_44 = V_0;
		int32_t L_45 = p2;
		t2374 * L_46 = p3;
		(( void (*) (t7 * , t69*, int32_t, int32_t, t2374 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t69*)L_43, (int32_t)L_44, (int32_t)L_45, (t2374 *)L_46, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18109_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	t7 * V_0 = {0};
	{
		t69* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		V_0 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_0, L_2));
		t69* L_3 = p0;
		int32_t L_4 = p1;
		t69* L_5 = p0;
		int32_t L_6 = p2;
		int32_t L_7 = L_6;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_4)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_5, L_7));
		t69* L_8 = p0;
		int32_t L_9 = p2;
		t7 * L_10 = V_0;
		*((t7 **)(t7 **)SZArrayLdElema(L_8, L_9)) = (t7 *)L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t337.h"
struct t55;
struct t337;
extern "C" void m1444_gshared (t55 * __this, t337 * p0, const MethodInfo* method);
#define m1444(__this, p0, method) (( void (*) (t55 *, t337 *, const MethodInfo*))m1444_gshared)(__this, p0, method)
extern TypeInfo* t347_TI_var;
extern "C" void m1444_gshared (t55 * __this, t337 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		t337 * L_1 = p0;
		m2685((t55 *)__this, (t347 *)L_0, (t7 *)L_1, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t106.h"
#include "t97.h"
#include "t338.h"
#include "t321.h"
#include "t124.h"
#include "t723.h"
#include "t106MD.h"
#include "t124MD.h"
#include "t321MD.h"
#include "t723MD.h"
#include "t65MD.h"
#include "t71MD.h"
#include "t338MD.h"
struct t106;
struct t13;
struct t450;
extern "C" void m18110_gshared (t7 * __this , t13 * p0, t7* p1, const MethodInfo* method);
#define m18110(__this , p0, p1, method) (( void (*) (t7 * , t13 *, t7*, const MethodInfo*))m18110_gshared)(__this , p0, p1, method)
struct t106;
struct t13;
struct t97;
struct t338;
extern "C" bool m1446_gshared (t7 * __this , t13 * p0, t97 * p1, t338 * p2, const MethodInfo* method);
#define m1446(__this , p0, p1, p2, method) (( bool (*) (t7 * , t13 *, t97 *, t338 *, const MethodInfo*))m1446_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t106_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern const MethodInfo* m11449_MI_var;
extern const MethodInfo* m11451_MI_var;
extern "C" bool m1446_gshared (t7 * __this , t13 * p0, t97 * p1, t338 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t106_TI_var = il2cpp_codegen_type_info_from_index(155);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		m11449_MI_var = il2cpp_codegen_method_info_from_index(2147484001);
		m11451_MI_var = il2cpp_codegen_method_info_from_index(2147484002);
		s_Il2CppMethodIntialized = true;
	}
	t321 * V_0 = {0};
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	t65 * V_3 = {0};
	t7 * V_4 = {0};
	t65 * V_5 = {0};
	int32_t V_6 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		t124 * L_0 = ((t106_SFs*)t106_TI_var->static_fields)->f17;
		t321 * L_1 = m11449((t124 *)L_0, m11449_MI_var);
		V_0 = (t321 *)L_1;
		t13 * L_2 = p0;
		t321 * L_3 = V_0;
		(( void (*) (t7 * , t13 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t13 *)L_2, (t7*)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (int32_t)0;
		goto IL_008e;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		t321 * L_4 = V_0;
		int32_t L_5 = V_1;
		t7 * L_6 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32) */, (t321 *)L_4, (int32_t)L_5);
		V_2 = (t7 *)((t7 *)Castclass(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_006f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		{
			V_3 = (t65 *)((t65 *)__exception_local);
			t321 * L_7 = V_0;
			int32_t L_8 = V_1;
			t7 * L_9 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32) */, (t321 *)L_7, (int32_t)L_8);
			V_4 = (t7 *)L_9;
			IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
			t347 * L_10 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)), NULL);
			t47* L_11 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (t723 *)L_10);
			t7 * L_12 = V_4;
			t347 * L_13 = m1520((t7 *)L_12, NULL);
			t47* L_14 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (t723 *)L_13);
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_15 = m6051(NULL, (t47*)(t47*) &_stringLiteral61, (t7 *)L_11, (t7 *)L_14, NULL);
			t65 * L_16 = V_3;
			t65 * L_17 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m3351(L_17, (t47*)L_15, (t65 *)L_16, NULL);
			m2633(NULL, (t65 *)L_17, NULL);
			goto IL_008a;
		}

IL_006a:
		{
			; // IL_006a: leave IL_006f
		}
	} // end catch (depth: 1)

IL_006f:
	try
	{ // begin try (depth: 1)
		t338 * L_18 = p2;
		t7 * L_19 = V_2;
		t97 * L_20 = p1;
		VirtActionInvoker2< t7 *, t97 * >::Invoke(10 /* System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData) */, (t338 *)L_18, (t7 *)L_19, (t97 *)L_20);
		goto IL_008a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_007c;
		throw e;
	}

CATCH_007c:
	{ // begin catch(System.Exception)
		V_5 = (t65 *)((t65 *)__exception_local);
		t65 * L_21 = V_5;
		m2633(NULL, (t65 *)L_21, NULL);
		goto IL_008a;
	} // end catch (depth: 1)

IL_008a:
	{
		int32_t L_22 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_008e:
	{
		int32_t L_23 = V_1;
		t321 * L_24 = V_0;
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count() */, (t321 *)L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0019;
		}
	}
	{
		t321 * L_26 = V_0;
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count() */, (t321 *)L_26);
		V_6 = (int32_t)L_27;
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		t124 * L_28 = ((t106_SFs*)t106_TI_var->static_fields)->f17;
		t321 * L_29 = V_0;
		m11451((t124 *)L_28, (t321 *)L_29, m11451_MI_var);
		int32_t L_30 = V_6;
		return ((((int32_t)L_30) > ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1107.h"
#include "t1107MD.h"
struct t1107;
struct t7;
extern "C" t7 * m18111_gshared (t7 * __this , const MethodInfo* method);
#define m18111(__this , method) (( t7 * (*) (t7 * , const MethodInfo*))m18111_gshared)(__this , method)
extern TypeInfo* t347_TI_var;
extern "C" t7 * m18111_gshared (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		t7 * L_1 = m9377(NULL, (t347 *)L_0, NULL);
		return ((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t332.h"
#include "t66.h"
#include "t66MD.h"
#include "t296MD.h"
#include "t332MD.h"
struct t13;
struct t332;
struct t13;
struct t337;
extern "C" void m18113_gshared (t13 * __this, t337 * p0, const MethodInfo* method);
#define m18113(__this, p0, method) (( void (*) (t13 *, t337 *, const MethodInfo*))m18113_gshared)(__this, p0, method)
#define m18112(__this, p0, method) (( void (*) (t13 *, t332 *, const MethodInfo*))m18113_gshared)(__this, p0, method)
struct t106;
struct t55;
extern "C" bool m18114_gshared (t7 * __this , t55 * p0, const MethodInfo* method);
#define m18114(__this , p0, method) (( bool (*) (t7 * , t55 *, const MethodInfo*))m18114_gshared)(__this , p0, method)
extern TypeInfo* t396_TI_var;
extern TypeInfo* t296_TI_var;
extern TypeInfo* t106_TI_var;
extern TypeInfo* t419_TI_var;
extern TypeInfo* t2922_TI_var;
extern const MethodInfo* m18112_MI_var;
extern "C" void m18110_gshared (t7 * __this , t13 * p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t296_TI_var = il2cpp_codegen_type_info_from_index(255);
		t106_TI_var = il2cpp_codegen_type_info_from_index(155);
		t419_TI_var = il2cpp_codegen_type_info_from_index(178);
		t2922_TI_var = il2cpp_codegen_type_info_from_index(5285);
		m18112_MI_var = il2cpp_codegen_method_info_from_index(2147484003);
		s_Il2CppMethodIntialized = true;
	}
	t332 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t7* L_0 = p1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_1, (t47*)(t47*) &_stringLiteral62, (t47*)(t47*) &_stringLiteral63, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t13 * L_2 = p0;
		bool L_3 = m206(NULL, (t66 *)L_2, (t66 *)NULL, NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		t13 * L_4 = p0;
		bool L_5 = m1492((t13 *)L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_002d:
	{
		return;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t296_TI_var);
		t332 * L_6 = m1423(NULL, NULL);
		V_0 = (t332 *)L_6;
		t13 * L_7 = p0;
		t332 * L_8 = V_0;
		m18112((t13 *)L_7, (t332 *)L_8, m18112_MI_var);
		V_1 = (int32_t)0;
		goto IL_006e;
	}

IL_0042:
	{
		t332 * L_9 = V_0;
		int32_t L_10 = V_1;
		t55 * L_11 = (t55 *)VirtFuncInvoker1< t55 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, (t332 *)L_9, (int32_t)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		bool L_12 = (( bool (*) (t7 * , t55 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t55 *)L_11, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_006a;
	}

IL_0058:
	{
		t7* L_13 = p1;
		t332 * L_14 = V_0;
		int32_t L_15 = V_1;
		t55 * L_16 = (t55 *)VirtFuncInvoker1< t55 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, (t332 *)L_14, (int32_t)L_15);
		InterfaceActionInvoker1< t7 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(!0) */, t2922_TI_var, (t7*)L_13, (t7 *)((t7 *)IsInst(L_16, t419_TI_var)));
	}

IL_006a:
	{
		int32_t L_17 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_18 = V_1;
		t332 * L_19 = V_0;
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, (t332 *)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0042;
		}
	}
	{
		t332 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t296_TI_var);
		m1424(NULL, (t332 *)L_21, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t347_TI_var;
extern "C" void m18113_gshared (t13 * __this, t337 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		t337 * L_1 = p0;
		m2688((t13 *)__this, (t347 *)L_0, (bool)0, (bool)0, (bool)1, (bool)0, (t7 *)L_1, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t340.h"
#include "t340MD.h"
extern TypeInfo* t340_TI_var;
extern "C" bool m18114_gshared (t7 * __this , t55 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t340_TI_var = il2cpp_codegen_type_info_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t340 * V_1 = {0};
	int32_t G_B6_0 = 0;
	{
		t55 * L_0 = p0;
		V_0 = (bool)((!(((t7*)(t7 *)((t7 *)IsInst(L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))) <= ((t7*)(t7 *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		t55 * L_2 = p0;
		V_1 = (t340 *)((t340 *)IsInst(L_2, t340_TI_var));
		t340 * L_3 = V_1;
		bool L_4 = m170(NULL, (t66 *)L_3, (t66 *)NULL, NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		t340 * L_5 = V_1;
		bool L_6 = m1490((t340 *)L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		t340 * L_7 = V_1;
		bool L_8 = m1491((t340 *)L_7, NULL);
		G_B6_0 = ((int32_t)(L_8));
		goto IL_0039;
	}

IL_0038:
	{
		G_B6_0 = 0;
	}

IL_0039:
	{
		return G_B6_0;
	}

IL_003a:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t130.h"
struct t52;
struct t52;
extern "C" t130  m18116_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18116(__this, p0, method) (( t130  (*) (t52 *, int32_t, const MethodInfo*))m18116_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t130  m18116_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t130  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t130 *)(&V_0));
		t130  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18117_gshared (t52 * __this, t130  p0, const MethodInfo* method);
#define m18117(__this, p0, method) (( void (*) (t52 *, t130 , const MethodInfo*))m18117_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18117_gshared (t52 * __this, t130  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18118_gshared (t52 * __this, t130  p0, const MethodInfo* method);
#define m18118(__this, p0, method) (( bool (*) (t52 *, t130 , const MethodInfo*))m18118_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18118_gshared (t52 * __this, t130  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t130  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t130 *)(&V_2));
		t130  L_5 = p0;
		t130  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t130  L_8 = V_2;
		t130  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t130  L_11 = V_2;
		t130  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine.UI_ArrayTypes.h"
struct t52;
struct t2396;
extern "C" void m18119_gshared (t52 * __this, t2396* p0, int32_t p1, const MethodInfo* method);
#define m18119(__this, p0, p1, method) (( void (*) (t52 *, t2396*, int32_t, const MethodInfo*))m18119_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18119_gshared (t52 * __this, t2396* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2396* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t2396* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t2396* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t2396* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t2396* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18120_gshared (t52 * __this, t130  p0, const MethodInfo* method);
#define m18120(__this, p0, method) (( bool (*) (t52 *, t130 , const MethodInfo*))m18120_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18120_gshared (t52 * __this, t130  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18121_gshared (t52 * __this, t130  p0, const MethodInfo* method);
#define m18121(__this, p0, method) (( int32_t (*) (t52 *, t130 , const MethodInfo*))m18121_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18121_gshared (t52 * __this, t130  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t130  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t130 *)(&V_2));
		t130  L_5 = p0;
		t130  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t130  L_8 = V_2;
		t130  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t130  L_14 = p0;
		t130  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18122_gshared (t52 * __this, int32_t p0, t130  p1, const MethodInfo* method);
#define m18122(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t130 , const MethodInfo*))m18122_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18122_gshared (t52 * __this, int32_t p0, t130  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18124_gshared (t52 * __this, int32_t p0, t130  p1, const MethodInfo* method);
#define m18124(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t130 , const MethodInfo*))m18124_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18124_gshared (t52 * __this, int32_t p0, t130  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t130  L_6 = p1;
		t130  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t130 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2397.h"
#include "t2397MD.h"
struct t52;
struct t2929;
extern "C" t7* m18125_gshared (t52 * __this, const MethodInfo* method);
#define m18125(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18125_gshared)(__this, method)
extern "C" t7* m18125_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2397  L_0 = {0};
		(( void (*) (t2397 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2397  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t2396;
extern "C" void m18126_gshared (t7 * __this , t2396** p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18126(__this , p0, p1, p2, method) (( void (*) (t7 * , t2396**, int32_t, int32_t, const MethodInfo*))m18126_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t2396;
extern "C" void m18127_gshared (t7 * __this , t2396** p0, int32_t p1, const MethodInfo* method);
#define m18127(__this , p0, p1, method) (( void (*) (t7 * , t2396**, int32_t, const MethodInfo*))m18127_gshared)(__this , p0, p1, method)
extern "C" void m18127_gshared (t7 * __this , t2396** p0, int32_t p1, const MethodInfo* method)
{
	t2396** G_B2_0 = {0};
	t2396** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t2396** G_B3_1 = {0};
	{
		t2396** L_0 = p0;
		t2396** L_1 = p0;
		G_B1_0 = L_0;
		if ((*((t2396**)L_1)))
		{
			G_B2_0 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		t2396** L_2 = p0;
		G_B3_0 = (((int32_t)(((t52 *)(*((t2396**)L_2)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		int32_t L_3 = p1;
		(( void (*) (t7 * , t2396**, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t2396**)G_B3_1, (int32_t)G_B3_0, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t711_TI_var;
extern "C" void m18126_gshared (t7 * __this , t2396** p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2396* V_0 = {0};
	{
		int32_t L_0 = p2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		t2396** L_2 = p0;
		if ((*((t2396**)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t2396** L_3 = p0;
		int32_t L_4 = p2;
		*((t7 **)(L_3)) = (t7 *)((t2396*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_4));
		return;
	}

IL_0017:
	{
		t2396** L_5 = p0;
		int32_t L_6 = p2;
		if ((!(((uint32_t)(((int32_t)(((t52 *)(*((t2396**)L_5)))->max_length)))) == ((uint32_t)L_6))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = p2;
		V_0 = (t2396*)((t2396*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_7));
		t2396** L_8 = p0;
		t2396* L_9 = V_0;
		int32_t L_10 = p2;
		int32_t L_11 = p1;
		int32_t L_12 = m9829(NULL, (int32_t)L_10, (int32_t)L_11, NULL);
		m4651(NULL, (t52 *)(t52 *)(*((t2396**)L_8)), (t52 *)(t52 *)L_9, (int32_t)L_12, NULL);
		t2396** L_13 = p0;
		t2396* L_14 = V_0;
		*((t7 **)(L_13)) = (t7 *)L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2402.h"
#include "t2402MD.h"
struct t52;
struct t2396;
extern "C" int32_t m18128_gshared (t7 * __this , t2396* p0, t130  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18128(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t2396*, t130 , int32_t, int32_t, const MethodInfo*))m18128_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2402_TI_var;
extern "C" int32_t m18128_gshared (t7 * __this , t2396* p0, t130  p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2402_TI_var = il2cpp_codegen_type_info_from_index(5307);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2402 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t2396* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = p2;
		t2396* L_4 = p0;
		int32_t L_5 = m6350((t52 *)L_4, (int32_t)0, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p2;
		t2396* L_7 = p0;
		int32_t L_8 = m6362((t52 *)L_7, (int32_t)0, NULL);
		int32_t L_9 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))) <= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t711 * L_10 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_10, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0030:
	{
		int32_t L_11 = p2;
		int32_t L_12 = p3;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12));
		IL2CPP_RUNTIME_CLASS_INIT(t2402_TI_var);
		t2402 * L_13 = (( t2402 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (t2402 *)L_13;
		int32_t L_14 = p2;
		V_2 = (int32_t)L_14;
		goto IL_0054;
	}

IL_003e:
	{
		t2402 * L_15 = V_1;
		t2396* L_16 = p0;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		t130  L_19 = p1;
		bool L_20 = (bool)VirtFuncInvoker2< bool, t130 , t130  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T) */, (t2402 *)L_15, (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_16, L_18)), (t130 )L_19);
		if (!L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t2396;
struct t3233;
extern "C" void m18129_gshared (t7 * __this , t2396* p0, t2396* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18129(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, t7*, const MethodInfo*))m18129_gshared)(__this , p0, p1, p2, p3, p4, method)
struct t52;
struct t2396;
struct t3233;
extern "C" void m18130_gshared (t7 * __this , t2396* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method);
#define m18130(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t2396*, int32_t, int32_t, t7*, const MethodInfo*))m18130_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18130_gshared (t7 * __this , t2396* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2396* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2396* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t7* L_5 = p3;
		(( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t2396*)L_2, (t2396*)(t2396*)NULL, (int32_t)L_3, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1312;
struct t2396;
extern "C" t1312 * m18131_gshared (t7 * __this , t2396* p0, const MethodInfo* method);
#define m18131(__this , p0, method) (( t1312 * (*) (t7 * , t2396*, const MethodInfo*))m18131_gshared)(__this , p0, method)
struct t52;
struct t2396;
struct t3233;
extern "C" void m18132_gshared (t7 * __this , t2396* p0, t2396* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18132(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, t7*, const MethodInfo*))m18132_gshared)(__this , p0, p1, p2, p3, p4, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t1840_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18129_gshared (t7 * __this , t2396* p0, t2396* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t1312 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t65 * V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2396* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1191, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = p3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		t711 * L_5 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_5, (t47*)(t47*) &_stringLiteral1068, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t2396* L_6 = p0;
		int32_t L_7 = p2;
		int32_t L_8 = p3;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))-(int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		t2396* L_9 = p1;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = p2;
		t2396* L_11 = p1;
		int32_t L_12 = p3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		t396 * L_13 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_13, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0045:
	{
		int32_t L_14 = p3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		t7* L_15 = p4;
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		t2396* L_16 = p1;
		if (L_16)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (t1312 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		t2396* L_17 = p1;
		t1312 * L_18 = (( t1312 * (*) (t7 * , t2396*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t2396*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (t1312 *)L_18;
	}

IL_005c:
	{
		t2396* L_19 = p0;
		if (!((t1840*)IsInst(L_19, t1840_TI_var)))
		{
			goto IL_0078;
		}
	}
	{
		t2396* L_20 = p0;
		t2396* L_21 = L_20;
		int32_t L_22 = p2;
		int32_t L_23 = p3;
		t1312 * L_24 = V_0;
		m6414(NULL, (t1840*)((t1840*)IsInst(((t2396*)L_21), t1840_TI_var)), (int32_t)L_22, (int32_t)L_23, (t1312 *)L_24, NULL);
		return;
	}

IL_0078:
	{
		t2396* L_25 = p0;
		if (!((t1018*)IsInst(L_25, t1018_TI_var)))
		{
			goto IL_0094;
		}
	}
	{
		t2396* L_26 = p0;
		t2396* L_27 = L_26;
		int32_t L_28 = p2;
		int32_t L_29 = p3;
		t1312 * L_30 = V_0;
		m6415(NULL, (t1018*)((t1018*)IsInst(((t2396*)L_27), t1018_TI_var)), (int32_t)L_28, (int32_t)L_29, (t1312 *)L_30, NULL);
		return;
	}

IL_0094:
	{
		t2396* L_31 = p0;
		if (!((t221*)IsInst(L_31, t221_TI_var)))
		{
			goto IL_00b0;
		}
	}
	{
		t2396* L_32 = p0;
		t2396* L_33 = L_32;
		int32_t L_34 = p2;
		int32_t L_35 = p3;
		t1312 * L_36 = V_0;
		m6416(NULL, (t221*)((t221*)IsInst(((t2396*)L_33), t221_TI_var)), (int32_t)L_34, (int32_t)L_35, (t1312 *)L_36, NULL);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		int32_t L_37 = p2;
		V_1 = (int32_t)L_37;
		int32_t L_38 = p2;
		int32_t L_39 = p3;
		V_2 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38+(int32_t)L_39))-(int32_t)1));
		t2396* L_40 = p0;
		t2396* L_41 = p1;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		t7* L_44 = p4;
		(( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t2396*)L_40, (t2396*)L_41, (int32_t)L_42, (int32_t)L_43, (t7*)L_44, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		V_3 = (t65 *)((t65 *)__exception_local);
		t47* L_45 = m6526(NULL, (t47*)(t47*) &_stringLiteral1192, NULL);
		t65 * L_46 = V_3;
		t1098 * L_47 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_47, (t47*)L_45, (t65 *)L_46, NULL);
		il2cpp_codegen_raise_exception(L_47);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t1018_TI_var;
extern TypeInfo* t1312_TI_var;
extern TypeInfo* t1840_TI_var;
extern const MethodInfo* m6409_MI_var;
extern const MethodInfo* m6412_MI_var;
extern const MethodInfo* m6411_MI_var;
extern "C" t1312 * m18131_gshared (t7 * __this , t2396* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t1312_TI_var = il2cpp_codegen_type_info_from_index(2733);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		m6409_MI_var = il2cpp_codegen_method_info_from_index(323);
		m6412_MI_var = il2cpp_codegen_method_info_from_index(324);
		m6411_MI_var = il2cpp_codegen_method_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2396* L_0 = p0;
		if (!((t1018*)IsInst(L_0, t1018_TI_var)))
		{
			goto IL_0015;
		}
	}
	{
		t2396* L_1 = p0;
		t226 L_2 = { (void*)m6409_MI_var };
		t1312 * L_3 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_3, (t7 *)(t7 *)L_1, (t226)L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		t2396* L_4 = p0;
		if (!((t1840*)IsInst(L_4, t1840_TI_var)))
		{
			goto IL_002a;
		}
	}
	{
		t2396* L_5 = p0;
		t226 L_6 = { (void*)m6412_MI_var };
		t1312 * L_7 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_7, (t7 *)(t7 *)L_5, (t226)L_6, NULL);
		return L_7;
	}

IL_002a:
	{
		t2396* L_8 = p0;
		t226 L_9 = { (void*)m6411_MI_var };
		t1312 * L_10 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_10, (t7 *)(t7 *)L_8, (t226)L_9, NULL);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3233;
extern "C" int32_t m18133_gshared (t7 * __this , t130  p0, t130  p1, t7* p2, const MethodInfo* method);
#define m18133(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t130 , t130 , t7*, const MethodInfo*))m18133_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t2396;
extern "C" void m18134_gshared (t7 * __this , t2396* p0, t2396* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18134(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, const MethodInfo*))m18134_gshared)(__this , p0, p1, p2, p3, method)
extern "C" void m18132_gshared (t7 * __this , t2396* p0, t2396* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t130  V_3 = {0};
	{
		int32_t L_0 = p2;
		int32_t L_1 = p3;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p2;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p3;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t2396* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p3;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0035;
		}
	}
	{
		t2396* L_13 = p0;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t130  L_16 = V_3;
		t7* L_17 = p4;
		int32_t L_18 = (( int32_t (*) (t7 * , t130 , t130 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_13, L_15)), (t130 )L_16, (t7*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p2;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		t130  L_22 = V_3;
		t2396* L_23 = p0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		t7* L_26 = p4;
		int32_t L_27 = (( int32_t (*) (t7 * , t130 , t130 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t130 )L_22, (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_23, L_25)), (t7*)L_26, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}
	{
		t2396* L_30 = p0;
		t2396* L_31 = p1;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		(( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t2396*)L_30, (t2396*)L_31, (int32_t)L_32, (int32_t)L_33, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_34 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_35-(int32_t)1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		int32_t L_36 = p2;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_007b;
		}
	}
	{
		t2396* L_38 = p0;
		t2396* L_39 = p1;
		int32_t L_40 = p2;
		int32_t L_41 = V_1;
		t7* L_42 = p4;
		(( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t2396*)L_38, (t2396*)L_39, (int32_t)L_40, (int32_t)L_41, (t7*)L_42, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = p3;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_008a;
		}
	}
	{
		t2396* L_45 = p0;
		t2396* L_46 = p1;
		int32_t L_47 = V_0;
		int32_t L_48 = p3;
		t7* L_49 = p4;
		(( void (*) (t7 * , t2396*, t2396*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t2396*)L_45, (t2396*)L_46, (int32_t)L_47, (int32_t)L_48, (t7*)L_49, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t91_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" int32_t m18133_gshared (t7 * __this , t130  p0, t130  p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t91_TI_var = il2cpp_codegen_type_info_from_index(98);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t7* L_0 = p2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t7* L_1 = p2;
		t130  L_2 = p0;
		t130  L_3 = p1;
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, t130 , t130  >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (t7*)L_1, (t130 )L_2, (t130 )L_3);
		return L_4;
	}

IL_000c:
	{
		t130  L_5 = p0;
		t130  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_6);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		t130  L_8 = p1;
		t130  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_9);
		if (L_10)
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		t130  L_11 = p1;
		t130  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_12);
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t130  L_14 = p0;
		t130  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_15);
		if (!((t7*)IsInst(L_16, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		t130  L_17 = p0;
		t130  L_18 = L_17;
		t7 * L_19 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_18);
		t130  L_20 = p1;
		int32_t L_21 = (int32_t)InterfaceFuncInvoker1< int32_t, t130  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (t7*)((t7*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (t130 )L_20);
		return L_21;
	}

IL_004a:
	{
		t130  L_22 = p0;
		t130  L_23 = L_22;
		t7 * L_24 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_23);
		if (!((t7 *)IsInst(L_24, t91_TI_var)))
		{
			goto IL_006e;
		}
	}
	{
		t130  L_25 = p0;
		t130  L_26 = L_25;
		t7 * L_27 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_26);
		t130  L_28 = p1;
		t130  L_29 = L_28;
		t7 * L_30 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_29);
		int32_t L_31 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t91_TI_var, (t7 *)((t7 *)Castclass(L_27, t91_TI_var)), (t7 *)L_30);
		return L_31;
	}

IL_006e:
	{
		t47* L_32 = m6526(NULL, (t47*)(t47*) &_stringLiteral1195, NULL);
		V_0 = (t47*)L_32;
		t47* L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_34 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_35 = m1593(NULL, (t47*)L_33, (t7 *)L_34, NULL);
		t1098 * L_36 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_36, (t47*)L_35, NULL);
		il2cpp_codegen_raise_exception(L_36);
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18134_gshared (t7 * __this , t2396* p0, t2396* p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	t130  V_0 = {0};
	t130  V_1 = {0};
	{
		t2396* L_0 = p0;
		int32_t L_1 = p2;
		int32_t L_2 = L_1;
		V_0 = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_0, L_2));
		t2396* L_3 = p0;
		int32_t L_4 = p2;
		t2396* L_5 = p0;
		int32_t L_6 = p3;
		int32_t L_7 = L_6;
		*((t130 *)(t130 *)SZArrayLdElema(L_3, L_4)) = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_5, L_7));
		t2396* L_8 = p0;
		int32_t L_9 = p3;
		t130  L_10 = V_0;
		*((t130 *)(t130 *)SZArrayLdElema(L_8, L_9)) = (t130 )L_10;
		t2396* L_11 = p1;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		t2396* L_12 = p1;
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		V_1 = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_12, L_14));
		t2396* L_15 = p1;
		int32_t L_16 = p2;
		t2396* L_17 = p1;
		int32_t L_18 = p3;
		int32_t L_19 = L_18;
		*((t130 *)(t130 *)SZArrayLdElema(L_15, L_16)) = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_17, L_19));
		t2396* L_20 = p1;
		int32_t L_21 = p3;
		t130  L_22 = V_1;
		*((t130 *)(t130 *)SZArrayLdElema(L_20, L_21)) = (t130 )L_22;
	}

IL_003f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t98.h"
struct t52;
struct t2396;
struct t98;
extern "C" void m18135_gshared (t7 * __this , t2396* p0, int32_t p1, int32_t p2, t98 * p3, const MethodInfo* method);
#define m18135(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t2396*, int32_t, int32_t, t98 *, const MethodInfo*))m18135_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t2396;
struct t98;
extern "C" void m18136_gshared (t7 * __this , t2396* p0, int32_t p1, t98 * p2, const MethodInfo* method);
#define m18136(__this , p0, p1, p2, method) (( void (*) (t7 * , t2396*, int32_t, t98 *, const MethodInfo*))m18136_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18136_gshared (t7 * __this , t2396* p0, int32_t p1, t98 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t98 * L_0 = p2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1193, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		t2396* L_3 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = p1;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		t2396* L_5 = p0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		t98 * L_8 = p2;
		(( void (*) (t7 * , t2396*, int32_t, int32_t, t98 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t2396*)L_5, (int32_t)L_6, (int32_t)L_7, (t98 *)L_8, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t47* L_9 = m6526(NULL, (t47*)(t47*) &_stringLiteral1194, NULL);
		t65 * L_10 = V_2;
		t1098 * L_11 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_11, (t47*)L_9, (t65 *)L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t98MD.h"
struct t52;
struct t2396;
extern "C" void m18137_gshared (t7 * __this , t2396* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18137(__this , p0, p1, p2, method) (( void (*) (t7 * , t2396*, int32_t, int32_t, const MethodInfo*))m18137_gshared)(__this , p0, p1, p2, method)
extern "C" void m18135_gshared (t7 * __this , t2396* p0, int32_t p1, int32_t p2, t98 * p3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t130  V_3 = {0};
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p1;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p2;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t2396* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		t98 * L_13 = p3;
		t2396* L_14 = p0;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		t130  L_17 = V_3;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t130 , t130  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T) */, (t98 *)L_13, (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_14, L_16)), (t130 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p1;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		t98 * L_22 = p3;
		t130  L_23 = V_3;
		t2396* L_24 = p0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, t130 , t130  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T) */, (t98 *)L_22, (t130 )L_23, (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		t2396* L_30 = p0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (t7 * , t2396*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t2396*)L_30, (int32_t)L_31, (int32_t)L_32, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = p1;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		t2396* L_37 = p0;
		int32_t L_38 = p1;
		int32_t L_39 = V_1;
		t98 * L_40 = p3;
		(( void (*) (t7 * , t2396*, int32_t, int32_t, t98 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t2396*)L_37, (int32_t)L_38, (int32_t)L_39, (t98 *)L_40, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = p2;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		t2396* L_43 = p0;
		int32_t L_44 = V_0;
		int32_t L_45 = p2;
		t98 * L_46 = p3;
		(( void (*) (t7 * , t2396*, int32_t, int32_t, t98 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t2396*)L_43, (int32_t)L_44, (int32_t)L_45, (t98 *)L_46, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18137_gshared (t7 * __this , t2396* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	t130  V_0 = {0};
	{
		t2396* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		V_0 = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_0, L_2));
		t2396* L_3 = p0;
		int32_t L_4 = p1;
		t2396* L_5 = p0;
		int32_t L_6 = p2;
		int32_t L_7 = L_6;
		*((t130 *)(t130 *)SZArrayLdElema(L_3, L_4)) = (t130 )(*(t130 *)(t130 *)SZArrayLdElema(L_5, L_7));
		t2396* L_8 = p0;
		int32_t L_9 = p2;
		t130  L_10 = V_0;
		*((t130 *)(t130 *)SZArrayLdElema(L_8, L_9)) = (t130 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t647.h"
#include "t539MD.h"
struct t647;
struct t7;
extern "C" void m18138_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18138(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18138_gshared)(__this , p0, method)
extern TypeInfo* t69_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18138_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t7 * L_1 = p0;
		if (((t7 *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		t69* L_2 = (t69*)((t69*)SZArrayNew(t69_TI_var, 2));
		t7 * L_3 = p0;
		t347 * L_4 = m1520((t7 *)L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_4;
		t69* L_5 = (t69*)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_5, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_5, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*)(t47*) &_stringLiteral356, (t69*)L_5, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_8, (t47*)L_7, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t106;
struct t7;
struct t97;
extern "C" t7 * m1464_gshared (t7 * __this , t97 * p0, const MethodInfo* method);
#define m1464(__this , p0, method) (( t7 * (*) (t7 * , t97 *, const MethodInfo*))m1464_gshared)(__this , p0, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t7 * m1464_gshared (t7 * __this , t97 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t97 * L_0 = p0;
		t97 * L_1 = L_0;
		t7 * L_2 = ((t7 *)Castclass(((t7 *)IsInst(((t97 *)L_1), IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		if (((t7 *)L_2))
		{
			goto IL_003a;
		}
	}
	{
		t97 * L_3 = p0;
		t347 * L_4 = m1520((t7 *)L_3, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = m6051(NULL, (t47*)(t47*) &_stringLiteral60, (t7 *)L_4, (t7 *)L_5, NULL);
		t396 * L_7 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_7, (t47*)L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		t97 * L_8 = p0;
		t97 * L_9 = L_8;
		return ((t7 *)Castclass(((t7 *)IsInst(((t97 *)L_9), IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t68.h"
#include "t125.h"
#include "t125MD.h"
struct t106;
struct t13;
struct t97;
struct t338;
extern "C" t13 * m1532_gshared (t7 * __this , t13 * p0, t97 * p1, t338 * p2, const MethodInfo* method);
#define m1532(__this , p0, p1, p2, method) (( t13 * (*) (t7 * , t13 *, t97 *, t338 *, const MethodInfo*))m1532_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t106_TI_var;
extern "C" t13 * m1532_gshared (t7 * __this , t13 * p0, t97 * p1, t338 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t106_TI_var = il2cpp_codegen_type_info_from_index(155);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t68 * V_1 = {0};
	{
		t13 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		t125 * L_1 = ((t106_SFs*)t106_TI_var->static_fields)->f18;
		m341(NULL, (t13 *)L_0, (t7*)L_1, NULL);
		V_0 = (int32_t)0;
		goto IL_003b;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		t125 * L_2 = ((t106_SFs*)t106_TI_var->static_fields)->f18;
		int32_t L_3 = V_0;
		t68 * L_4 = (t68 *)VirtFuncInvoker1< t68 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32) */, (t125 *)L_2, (int32_t)L_3);
		V_1 = (t68 *)L_4;
		t68 * L_5 = V_1;
		t13 * L_6 = m166((t55 *)L_5, NULL);
		t97 * L_7 = p1;
		t338 * L_8 = p2;
		bool L_9 = (( bool (*) (t7 * , t13 *, t97 *, t338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t13 *)L_6, (t97 *)L_7, (t338 *)L_8, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		t68 * L_10 = V_1;
		t13 * L_11 = m166((t55 *)L_10, NULL);
		return L_11;
	}

IL_0037:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		t125 * L_14 = ((t106_SFs*)t106_TI_var->static_fields)->f18;
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, (t125 *)L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0012;
		}
	}
	{
		return (t13 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t106;
struct t13;
extern "C" bool m18139_gshared (t7 * __this , t13 * p0, const MethodInfo* method);
#define m18139(__this , p0, method) (( bool (*) (t7 * , t13 *, const MethodInfo*))m18139_gshared)(__this , p0, method)
extern TypeInfo* t106_TI_var;
extern const MethodInfo* m11449_MI_var;
extern const MethodInfo* m11451_MI_var;
extern "C" bool m18139_gshared (t7 * __this , t13 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t106_TI_var = il2cpp_codegen_type_info_from_index(155);
		m11449_MI_var = il2cpp_codegen_method_info_from_index(2147484001);
		m11451_MI_var = il2cpp_codegen_method_info_from_index(2147484002);
		s_Il2CppMethodIntialized = true;
	}
	t321 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		t124 * L_0 = ((t106_SFs*)t106_TI_var->static_fields)->f17;
		t321 * L_1 = m11449((t124 *)L_0, m11449_MI_var);
		V_0 = (t321 *)L_1;
		t13 * L_2 = p0;
		t321 * L_3 = V_0;
		(( void (*) (t7 * , t13 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t13 *)L_2, (t7*)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		t321 * L_4 = V_0;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count() */, (t321 *)L_4);
		V_1 = (int32_t)L_5;
		t124 * L_6 = ((t106_SFs*)t106_TI_var->static_fields)->f17;
		t321 * L_7 = V_0;
		m11451((t124 *)L_6, (t321 *)L_7, m11451_MI_var);
		int32_t L_8 = V_1;
		return ((((int32_t)((((int32_t)L_8) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t68MD.h"
struct t106;
struct t13;
extern "C" t13 * m1506_gshared (t7 * __this , t13 * p0, const MethodInfo* method);
#define m1506(__this , p0, method) (( t13 * (*) (t7 * , t13 *, const MethodInfo*))m1506_gshared)(__this , p0, method)
extern TypeInfo* t106_TI_var;
extern "C" t13 * m1506_gshared (t7 * __this , t13 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t106_TI_var = il2cpp_codegen_type_info_from_index(155);
		s_Il2CppMethodIntialized = true;
	}
	t68 * V_0 = {0};
	{
		t13 * L_0 = p0;
		bool L_1 = m206(NULL, (t66 *)L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (t13 *)NULL;
	}

IL_000e:
	{
		t13 * L_2 = p0;
		t68 * L_3 = m172((t13 *)L_2, NULL);
		V_0 = (t68 *)L_3;
		goto IL_0038;
	}

IL_001a:
	{
		t68 * L_4 = V_0;
		t13 * L_5 = m166((t55 *)L_4, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t106_TI_var);
		bool L_6 = (( bool (*) (t7 * , t13 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t13 *)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		t68 * L_7 = V_0;
		t13 * L_8 = m166((t55 *)L_7, NULL);
		return L_8;
	}

IL_0031:
	{
		t68 * L_9 = V_0;
		t68 * L_10 = m1486((t68 *)L_9, NULL);
		V_0 = (t68 *)L_10;
	}

IL_0038:
	{
		t68 * L_11 = V_0;
		bool L_12 = m170(NULL, (t66 *)L_11, (t66 *)NULL, NULL);
		if (L_12)
		{
			goto IL_001a;
		}
	}
	{
		return (t13 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2438.h"
struct t52;
struct t52;
extern "C" t2438  m18141_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18141(__this, p0, method) (( t2438  (*) (t52 *, int32_t, const MethodInfo*))m18141_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2438  m18141_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2438  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2438 *)(&V_0));
		t2438  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18142_gshared (t52 * __this, t2438  p0, const MethodInfo* method);
#define m18142(__this, p0, method) (( void (*) (t52 *, t2438 , const MethodInfo*))m18142_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18142_gshared (t52 * __this, t2438  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18143_gshared (t52 * __this, t2438  p0, const MethodInfo* method);
#define m18143(__this, p0, method) (( bool (*) (t52 *, t2438 , const MethodInfo*))m18143_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18143_gshared (t52 * __this, t2438  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2438  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2438 *)(&V_2));
		t2438  L_5 = p0;
		t2438  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2438  L_8 = V_2;
		t2438  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2438  L_11 = V_2;
		t2438  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t2949;
extern "C" void m18144_gshared (t52 * __this, t2949* p0, int32_t p1, const MethodInfo* method);
#define m18144(__this, p0, p1, method) (( void (*) (t52 *, t2949*, int32_t, const MethodInfo*))m18144_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18144_gshared (t52 * __this, t2949* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2949* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t2949* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t2949* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t2949* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t2949* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18145_gshared (t52 * __this, t2438  p0, const MethodInfo* method);
#define m18145(__this, p0, method) (( bool (*) (t52 *, t2438 , const MethodInfo*))m18145_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18145_gshared (t52 * __this, t2438  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18146_gshared (t52 * __this, t2438  p0, const MethodInfo* method);
#define m18146(__this, p0, method) (( int32_t (*) (t52 *, t2438 , const MethodInfo*))m18146_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18146_gshared (t52 * __this, t2438  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2438  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2438 *)(&V_2));
		t2438  L_5 = p0;
		t2438  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2438  L_8 = V_2;
		t2438  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2438  L_14 = p0;
		t2438  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18147_gshared (t52 * __this, int32_t p0, t2438  p1, const MethodInfo* method);
#define m18147(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2438 , const MethodInfo*))m18147_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18147_gshared (t52 * __this, int32_t p0, t2438  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18149_gshared (t52 * __this, int32_t p0, t2438  p1, const MethodInfo* method);
#define m18149(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2438 , const MethodInfo*))m18149_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18149_gshared (t52 * __this, int32_t p0, t2438  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2438  L_6 = p1;
		t2438  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2438 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2439.h"
#include "t2439MD.h"
struct t52;
struct t2950;
extern "C" t7* m18150_gshared (t52 * __this, const MethodInfo* method);
#define m18150(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18150_gshared)(__this, method)
extern "C" t7* m18150_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2439  L_0 = {0};
		(( void (*) (t2439 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2439  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1403.h"
struct t52;
struct t52;
extern "C" t1403  m18152_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18152(__this, p0, method) (( t1403  (*) (t52 *, int32_t, const MethodInfo*))m18152_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t1403  m18152_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t1403  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t1403 *)(&V_0));
		t1403  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18153_gshared (t52 * __this, t1403  p0, const MethodInfo* method);
#define m18153(__this, p0, method) (( void (*) (t52 *, t1403 , const MethodInfo*))m18153_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18153_gshared (t52 * __this, t1403  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18154_gshared (t52 * __this, t1403  p0, const MethodInfo* method);
#define m18154(__this, p0, method) (( bool (*) (t52 *, t1403 , const MethodInfo*))m18154_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18154_gshared (t52 * __this, t1403  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1403  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1403 *)(&V_2));
		t1403  L_5 = p0;
		t1403  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t1403  L_8 = V_2;
		t1403  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1403  L_11 = V_2;
		t1403  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t2432;
extern "C" void m18155_gshared (t52 * __this, t2432* p0, int32_t p1, const MethodInfo* method);
#define m18155(__this, p0, p1, method) (( void (*) (t52 *, t2432*, int32_t, const MethodInfo*))m18155_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18155_gshared (t52 * __this, t2432* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2432* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t2432* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t2432* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t2432* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t2432* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18156_gshared (t52 * __this, t1403  p0, const MethodInfo* method);
#define m18156(__this, p0, method) (( bool (*) (t52 *, t1403 , const MethodInfo*))m18156_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18156_gshared (t52 * __this, t1403  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18157_gshared (t52 * __this, t1403  p0, const MethodInfo* method);
#define m18157(__this, p0, method) (( int32_t (*) (t52 *, t1403 , const MethodInfo*))m18157_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18157_gshared (t52 * __this, t1403  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1403  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1403 *)(&V_2));
		t1403  L_5 = p0;
		t1403  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t1403  L_8 = V_2;
		t1403  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t1403  L_14 = p0;
		t1403  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18158_gshared (t52 * __this, int32_t p0, t1403  p1, const MethodInfo* method);
#define m18158(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1403 , const MethodInfo*))m18158_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18158_gshared (t52 * __this, int32_t p0, t1403  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18160_gshared (t52 * __this, int32_t p0, t1403  p1, const MethodInfo* method);
#define m18160(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1403 , const MethodInfo*))m18160_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18160_gshared (t52 * __this, int32_t p0, t1403  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t1403  L_6 = p1;
		t1403  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t1403 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2440.h"
#include "t2440MD.h"
struct t52;
struct t3234;
extern "C" t7* m18161_gshared (t52 * __this, const MethodInfo* method);
#define m18161(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18161_gshared)(__this, method)
extern "C" t7* m18161_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2440  L_0 = {0};
		(( void (*) (t2440 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2440  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2436.h"
#include "t2444.h"
#include "t2436MD.h"
struct t2436;
struct t69;
struct t2444;
extern "C" void m18162_gshared (t2436 * __this, t69* p0, int32_t p1, t2444 * p2, const MethodInfo* method);
#define m18162(__this, p0, p1, p2, method) (( void (*) (t2436 *, t69*, int32_t, t2444 *, const MethodInfo*))m18162_gshared)(__this, p0, p1, p2, method)
struct t2436;
struct t52;
struct t2444;
extern "C" void m18163_gshared (t2436 * __this, t52 * p0, int32_t p1, t2444 * p2, const MethodInfo* method);
#define m18163(__this, p0, p1, p2, method) (( void (*) (t2436 *, t52 *, int32_t, t2444 *, const MethodInfo*))m18163_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18163_gshared (t2436 * __this, t52 * p0, int32_t p1, t2444 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2444 * L_14 = p2;
			(( void (*) (t2436 *, t69*, int32_t, t2444 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2436 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2444 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2444MD.h"
extern "C" void m18162_gshared (t2436 * __this, t69* p0, int32_t p1, t2444 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2444 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue) */, (t2444 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2436;
struct t1018;
struct t2444;
extern "C" void m18164_gshared (t2436 * __this, t1018* p0, int32_t p1, t2444 * p2, const MethodInfo* method);
#define m18164(__this, p0, p1, p2, method) (( void (*) (t2436 *, t1018*, int32_t, t2444 *, const MethodInfo*))m18164_gshared)(__this, p0, p1, p2, method)
extern "C" void m18164_gshared (t2436 * __this, t1018* p0, int32_t p1, t2444 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t1018* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2444 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue) */, (t2444 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5)) = (int32_t)((*(int32_t*)((int32_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2447.h"
struct t2436;
struct t69;
struct t2447;
extern "C" void m18165_gshared (t2436 * __this, t69* p0, int32_t p1, t2447 * p2, const MethodInfo* method);
#define m18165(__this, p0, p1, p2, method) (( void (*) (t2436 *, t69*, int32_t, t2447 *, const MethodInfo*))m18165_gshared)(__this, p0, p1, p2, method)
struct t2436;
struct t52;
struct t2447;
extern "C" void m18166_gshared (t2436 * __this, t52 * p0, int32_t p1, t2447 * p2, const MethodInfo* method);
#define m18166(__this, p0, p1, p2, method) (( void (*) (t2436 *, t52 *, int32_t, t2447 *, const MethodInfo*))m18166_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18166_gshared (t2436 * __this, t52 * p0, int32_t p1, t2447 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2447 * L_14 = p2;
			(( void (*) (t2436 *, t69*, int32_t, t2447 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2436 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2447 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2447MD.h"
extern "C" void m18165_gshared (t2436 * __this, t69* p0, int32_t p1, t2447 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2447 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t7 * L_13 = (t7 *)VirtFuncInvoker2< t7 *, int32_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::Invoke(TKey,TValue) */, (t2447 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t7 * L_14 = L_13;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->f8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1083.h"
struct t52;
struct t52;
extern "C" t1083  m18168_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18168(__this, p0, method) (( t1083  (*) (t52 *, int32_t, const MethodInfo*))m18168_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t1083  m18168_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t1083  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t1083 *)(&V_0));
		t1083  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18169_gshared (t52 * __this, t1083  p0, const MethodInfo* method);
#define m18169(__this, p0, method) (( void (*) (t52 *, t1083 , const MethodInfo*))m18169_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18169_gshared (t52 * __this, t1083  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18170_gshared (t52 * __this, t1083  p0, const MethodInfo* method);
#define m18170(__this, p0, method) (( bool (*) (t52 *, t1083 , const MethodInfo*))m18170_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18170_gshared (t52 * __this, t1083  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1083  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1083 *)(&V_2));
		t1083  L_5 = p0;
		t1083  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t1083  L_8 = V_2;
		t1083  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1083  L_11 = V_2;
		t1083  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3186;
extern "C" void m18171_gshared (t52 * __this, t3186* p0, int32_t p1, const MethodInfo* method);
#define m18171(__this, p0, p1, method) (( void (*) (t52 *, t3186*, int32_t, const MethodInfo*))m18171_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18171_gshared (t52 * __this, t3186* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3186* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t3186* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t3186* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t3186* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t3186* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18172_gshared (t52 * __this, t1083  p0, const MethodInfo* method);
#define m18172(__this, p0, method) (( bool (*) (t52 *, t1083 , const MethodInfo*))m18172_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18172_gshared (t52 * __this, t1083  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18173_gshared (t52 * __this, t1083  p0, const MethodInfo* method);
#define m18173(__this, p0, method) (( int32_t (*) (t52 *, t1083 , const MethodInfo*))m18173_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18173_gshared (t52 * __this, t1083  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1083  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1083 *)(&V_2));
		t1083  L_5 = p0;
		t1083  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t1083  L_8 = V_2;
		t1083  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t1083  L_14 = p0;
		t1083  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18174_gshared (t52 * __this, int32_t p0, t1083  p1, const MethodInfo* method);
#define m18174(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1083 , const MethodInfo*))m18174_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18174_gshared (t52 * __this, int32_t p0, t1083  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18176_gshared (t52 * __this, int32_t p0, t1083  p1, const MethodInfo* method);
#define m18176(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1083 , const MethodInfo*))m18176_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18176_gshared (t52 * __this, int32_t p0, t1083  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t1083  L_6 = p1;
		t1083  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t1083 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2448.h"
#include "t2448MD.h"
struct t52;
struct t3235;
extern "C" t7* m18177_gshared (t52 * __this, const MethodInfo* method);
#define m18177(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18177_gshared)(__this, method)
extern "C" t7* m18177_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2448  L_0 = {0};
		(( void (*) (t2448 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2448  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2437.h"
#include "t2437MD.h"
struct t2436;
struct t3186;
struct t2437;
extern "C" void m18178_gshared (t2436 * __this, t3186* p0, int32_t p1, t2437 * p2, const MethodInfo* method);
#define m18178(__this, p0, p1, p2, method) (( void (*) (t2436 *, t3186*, int32_t, t2437 *, const MethodInfo*))m18178_gshared)(__this, p0, p1, p2, method)
extern "C" void m18178_gshared (t2436 * __this, t3186* p0, int32_t p1, t2437 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2437 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , int32_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2437 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2449.h"
struct t2436;
struct t69;
struct t2449;
extern "C" void m18179_gshared (t2436 * __this, t69* p0, int32_t p1, t2449 * p2, const MethodInfo* method);
#define m18179(__this, p0, p1, p2, method) (( void (*) (t2436 *, t69*, int32_t, t2449 *, const MethodInfo*))m18179_gshared)(__this, p0, p1, p2, method)
struct t2436;
struct t52;
struct t2449;
extern "C" void m18180_gshared (t2436 * __this, t52 * p0, int32_t p1, t2449 * p2, const MethodInfo* method);
#define m18180(__this, p0, p1, p2, method) (( void (*) (t2436 *, t52 *, int32_t, t2449 *, const MethodInfo*))m18180_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18180_gshared (t2436 * __this, t52 * p0, int32_t p1, t2449 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2449 * L_14 = p2;
			(( void (*) (t2436 *, t69*, int32_t, t2449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2436 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2449 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2449MD.h"
extern "C" void m18179_gshared (t2436 * __this, t69* p0, int32_t p1, t2449 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2449 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2438  L_13 = (t2438 )VirtFuncInvoker2< t2438 , int32_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue) */, (t2449 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t2438  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2436;
struct t2949;
struct t2449;
extern "C" void m18181_gshared (t2436 * __this, t2949* p0, int32_t p1, t2449 * p2, const MethodInfo* method);
#define m18181(__this, p0, p1, p2, method) (( void (*) (t2436 *, t2949*, int32_t, t2449 *, const MethodInfo*))m18181_gshared)(__this, p0, p1, p2, method)
extern "C" void m18181_gshared (t2436 * __this, t2949* p0, int32_t p1, t2449 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t2949* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2449 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2438  L_13 = (t2438 )VirtFuncInvoker2< t2438 , int32_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue) */, (t2449 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t2438  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2438 *)(t2438 *)SZArrayLdElema(L_3, L_5)) = (t2438 )((*(t2438 *)((t2438 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t349.h"
struct t52;
struct t52;
extern "C" t349  m18183_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18183(__this, p0, method) (( t349  (*) (t52 *, int32_t, const MethodInfo*))m18183_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t349  m18183_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t349  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t349 *)(&V_0));
		t349  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18184_gshared (t52 * __this, t349  p0, const MethodInfo* method);
#define m18184(__this, p0, method) (( void (*) (t52 *, t349 , const MethodInfo*))m18184_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18184_gshared (t52 * __this, t349  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18185_gshared (t52 * __this, t349  p0, const MethodInfo* method);
#define m18185(__this, p0, method) (( bool (*) (t52 *, t349 , const MethodInfo*))m18185_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18185_gshared (t52 * __this, t349  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t349  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t349 *)(&V_2));
		t349  L_5 = p0;
		t349  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t349  L_8 = V_2;
		t349  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t349  L_11 = V_2;
		t349  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"
struct t52;
struct t351;
extern "C" void m18186_gshared (t52 * __this, t351* p0, int32_t p1, const MethodInfo* method);
#define m18186(__this, p0, p1, method) (( void (*) (t52 *, t351*, int32_t, const MethodInfo*))m18186_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18186_gshared (t52 * __this, t351* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t351* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t351* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t351* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t351* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t351* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18187_gshared (t52 * __this, t349  p0, const MethodInfo* method);
#define m18187(__this, p0, method) (( bool (*) (t52 *, t349 , const MethodInfo*))m18187_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18187_gshared (t52 * __this, t349  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18188_gshared (t52 * __this, t349  p0, const MethodInfo* method);
#define m18188(__this, p0, method) (( int32_t (*) (t52 *, t349 , const MethodInfo*))m18188_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18188_gshared (t52 * __this, t349  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t349  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t349 *)(&V_2));
		t349  L_5 = p0;
		t349  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t349  L_8 = V_2;
		t349  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t349  L_14 = p0;
		t349  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18189_gshared (t52 * __this, int32_t p0, t349  p1, const MethodInfo* method);
#define m18189(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t349 , const MethodInfo*))m18189_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18189_gshared (t52 * __this, int32_t p0, t349  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18191_gshared (t52 * __this, int32_t p0, t349  p1, const MethodInfo* method);
#define m18191(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t349 , const MethodInfo*))m18191_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18191_gshared (t52 * __this, int32_t p0, t349  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t349  L_6 = p1;
		t349  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t349 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2461.h"
#include "t2461MD.h"
struct t52;
struct t3236;
extern "C" t7* m18192_gshared (t52 * __this, const MethodInfo* method);
#define m18192(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18192_gshared)(__this, method)
extern "C" t7* m18192_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2461  L_0 = {0};
		(( void (*) (t2461 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2461  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t323.h"
struct t52;
struct t52;
extern "C" t323  m18194_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18194(__this, p0, method) (( t323  (*) (t52 *, int32_t, const MethodInfo*))m18194_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t323  m18194_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t323  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t323 *)(&V_0));
		t323  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18195_gshared (t52 * __this, t323  p0, const MethodInfo* method);
#define m18195(__this, p0, method) (( void (*) (t52 *, t323 , const MethodInfo*))m18195_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18195_gshared (t52 * __this, t323  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18196_gshared (t52 * __this, t323  p0, const MethodInfo* method);
#define m18196(__this, p0, method) (( bool (*) (t52 *, t323 , const MethodInfo*))m18196_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18196_gshared (t52 * __this, t323  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t323  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t323 *)(&V_2));
		t323  L_5 = p0;
		t323  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t323  L_8 = V_2;
		t323  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t323  L_11 = V_2;
		t323  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t354;
extern "C" void m18197_gshared (t52 * __this, t354* p0, int32_t p1, const MethodInfo* method);
#define m18197(__this, p0, p1, method) (( void (*) (t52 *, t354*, int32_t, const MethodInfo*))m18197_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18197_gshared (t52 * __this, t354* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t354* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t354* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t354* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t354* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t354* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18198_gshared (t52 * __this, t323  p0, const MethodInfo* method);
#define m18198(__this, p0, method) (( bool (*) (t52 *, t323 , const MethodInfo*))m18198_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18198_gshared (t52 * __this, t323  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18199_gshared (t52 * __this, t323  p0, const MethodInfo* method);
#define m18199(__this, p0, method) (( int32_t (*) (t52 *, t323 , const MethodInfo*))m18199_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18199_gshared (t52 * __this, t323  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t323  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t323 *)(&V_2));
		t323  L_5 = p0;
		t323  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t323  L_8 = V_2;
		t323  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t323  L_14 = p0;
		t323  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18200_gshared (t52 * __this, int32_t p0, t323  p1, const MethodInfo* method);
#define m18200(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t323 , const MethodInfo*))m18200_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18200_gshared (t52 * __this, int32_t p0, t323  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18202_gshared (t52 * __this, int32_t p0, t323  p1, const MethodInfo* method);
#define m18202(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t323 , const MethodInfo*))m18202_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18202_gshared (t52 * __this, int32_t p0, t323  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t323  L_6 = p1;
		t323  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t323 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2462.h"
#include "t2462MD.h"
struct t52;
struct t3237;
extern "C" t7* m18203_gshared (t52 * __this, const MethodInfo* method);
#define m18203(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18203_gshared)(__this, method)
extern "C" t7* m18203_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2462  L_0 = {0};
		(( void (*) (t2462 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2462  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t151.h"
struct t52;
struct t354;
struct t151;
extern "C" void m18204_gshared (t7 * __this , t354* p0, int32_t p1, t151 * p2, const MethodInfo* method);
#define m18204(__this , p0, p1, p2, method) (( void (*) (t7 * , t354*, int32_t, t151 *, const MethodInfo*))m18204_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t354;
struct t151;
extern "C" void m1567_gshared (t7 * __this , t354* p0, t151 * p1, const MethodInfo* method);
#define m1567(__this , p0, p1, method) (( void (*) (t7 * , t354*, t151 *, const MethodInfo*))m1567_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" void m1567_gshared (t7 * __this , t354* p0, t151 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t354* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t354* L_2 = p0;
		t354* L_3 = p0;
		t151 * L_4 = p1;
		(( void (*) (t7 * , t354*, int32_t, t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t354*)L_2, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t151 *)L_4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t354;
struct t151;
extern "C" void m18205_gshared (t7 * __this , t354* p0, int32_t p1, int32_t p2, t151 * p3, const MethodInfo* method);
#define m18205(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t354*, int32_t, int32_t, t151 *, const MethodInfo*))m18205_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18204_gshared (t7 * __this , t354* p0, int32_t p1, t151 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t151 * L_0 = p2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1193, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		t354* L_3 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = p1;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		t354* L_5 = p0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		t151 * L_8 = p2;
		(( void (*) (t7 * , t354*, int32_t, int32_t, t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t354*)L_5, (int32_t)L_6, (int32_t)L_7, (t151 *)L_8, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t47* L_9 = m6526(NULL, (t47*)(t47*) &_stringLiteral1194, NULL);
		t65 * L_10 = V_2;
		t1098 * L_11 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_11, (t47*)L_9, (t65 *)L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t151MD.h"
struct t52;
struct t354;
extern "C" void m18206_gshared (t7 * __this , t354* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18206(__this , p0, p1, p2, method) (( void (*) (t7 * , t354*, int32_t, int32_t, const MethodInfo*))m18206_gshared)(__this , p0, p1, p2, method)
extern "C" void m18205_gshared (t7 * __this , t354* p0, int32_t p1, int32_t p2, t151 * p3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t323  V_3 = {0};
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p1;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p2;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t354* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t323 )(*(t323 *)(t323 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		t151 * L_13 = p3;
		t354* L_14 = p0;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		t323  L_17 = V_3;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t323 , t323  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T) */, (t151 *)L_13, (t323 )(*(t323 *)(t323 *)SZArrayLdElema(L_14, L_16)), (t323 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p1;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		t151 * L_22 = p3;
		t323  L_23 = V_3;
		t354* L_24 = p0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, t323 , t323  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T) */, (t151 *)L_22, (t323 )L_23, (t323 )(*(t323 *)(t323 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		t354* L_30 = p0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (t7 * , t354*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t354*)L_30, (int32_t)L_31, (int32_t)L_32, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = p1;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		t354* L_37 = p0;
		int32_t L_38 = p1;
		int32_t L_39 = V_1;
		t151 * L_40 = p3;
		(( void (*) (t7 * , t354*, int32_t, int32_t, t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t354*)L_37, (int32_t)L_38, (int32_t)L_39, (t151 *)L_40, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = p2;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		t354* L_43 = p0;
		int32_t L_44 = V_0;
		int32_t L_45 = p2;
		t151 * L_46 = p3;
		(( void (*) (t7 * , t354*, int32_t, int32_t, t151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t354*)L_43, (int32_t)L_44, (int32_t)L_45, (t151 *)L_46, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18206_gshared (t7 * __this , t354* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	t323  V_0 = {0};
	{
		t354* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		V_0 = (t323 )(*(t323 *)(t323 *)SZArrayLdElema(L_0, L_2));
		t354* L_3 = p0;
		int32_t L_4 = p1;
		t354* L_5 = p0;
		int32_t L_6 = p2;
		int32_t L_7 = L_6;
		*((t323 *)(t323 *)SZArrayLdElema(L_3, L_4)) = (t323 )(*(t323 *)(t323 *)SZArrayLdElema(L_5, L_7));
		t354* L_8 = p0;
		int32_t L_9 = p2;
		t323  L_10 = V_0;
		*((t323 *)(t323 *)SZArrayLdElema(L_8, L_9)) = (t323 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t157.h"
struct t647;
struct t7;
extern "C" void m18207_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18207(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18207_gshared)(__this , p0, method)
extern TypeInfo* t69_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18207_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t7 * L_1 = p0;
		if (((t7 *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		t69* L_2 = (t69*)((t69*)SZArrayNew(t69_TI_var, 2));
		t7 * L_3 = p0;
		t347 * L_4 = m1520((t7 *)L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_4;
		t69* L_5 = (t69*)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_5, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_5, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*)(t47*) &_stringLiteral356, (t69*)L_5, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_8, (t47*)L_7, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2469.h"
struct t52;
struct t52;
extern "C" t2469  m18209_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18209(__this, p0, method) (( t2469  (*) (t52 *, int32_t, const MethodInfo*))m18209_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2469  m18209_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2469  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2469 *)(&V_0));
		t2469  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18210_gshared (t52 * __this, t2469  p0, const MethodInfo* method);
#define m18210(__this, p0, method) (( void (*) (t52 *, t2469 , const MethodInfo*))m18210_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18210_gshared (t52 * __this, t2469  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18211_gshared (t52 * __this, t2469  p0, const MethodInfo* method);
#define m18211(__this, p0, method) (( bool (*) (t52 *, t2469 , const MethodInfo*))m18211_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18211_gshared (t52 * __this, t2469  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2469  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2469 *)(&V_2));
		t2469  L_5 = p0;
		t2469  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2469  L_8 = V_2;
		t2469  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2469  L_11 = V_2;
		t2469  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t2959;
extern "C" void m18212_gshared (t52 * __this, t2959* p0, int32_t p1, const MethodInfo* method);
#define m18212(__this, p0, p1, method) (( void (*) (t52 *, t2959*, int32_t, const MethodInfo*))m18212_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18212_gshared (t52 * __this, t2959* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2959* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t2959* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t2959* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t2959* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t2959* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18213_gshared (t52 * __this, t2469  p0, const MethodInfo* method);
#define m18213(__this, p0, method) (( bool (*) (t52 *, t2469 , const MethodInfo*))m18213_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18213_gshared (t52 * __this, t2469  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18214_gshared (t52 * __this, t2469  p0, const MethodInfo* method);
#define m18214(__this, p0, method) (( int32_t (*) (t52 *, t2469 , const MethodInfo*))m18214_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18214_gshared (t52 * __this, t2469  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2469  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2469 *)(&V_2));
		t2469  L_5 = p0;
		t2469  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2469  L_8 = V_2;
		t2469  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2469  L_14 = p0;
		t2469  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18215_gshared (t52 * __this, int32_t p0, t2469  p1, const MethodInfo* method);
#define m18215(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2469 , const MethodInfo*))m18215_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18215_gshared (t52 * __this, int32_t p0, t2469  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18217_gshared (t52 * __this, int32_t p0, t2469  p1, const MethodInfo* method);
#define m18217(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2469 , const MethodInfo*))m18217_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18217_gshared (t52 * __this, int32_t p0, t2469  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2469  L_6 = p1;
		t2469  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2469 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2470.h"
#include "t2470MD.h"
struct t52;
struct t2960;
extern "C" t7* m18218_gshared (t52 * __this, const MethodInfo* method);
#define m18218(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18218_gshared)(__this, method)
extern "C" t7* m18218_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2470  L_0 = {0};
		(( void (*) (t2470 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2470  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2466.h"
#include "t2474.h"
#include "t2466MD.h"
struct t2466;
struct t69;
struct t2474;
extern "C" void m18219_gshared (t2466 * __this, t69* p0, int32_t p1, t2474 * p2, const MethodInfo* method);
#define m18219(__this, p0, p1, p2, method) (( void (*) (t2466 *, t69*, int32_t, t2474 *, const MethodInfo*))m18219_gshared)(__this, p0, p1, p2, method)
struct t2466;
struct t52;
struct t2474;
extern "C" void m18220_gshared (t2466 * __this, t52 * p0, int32_t p1, t2474 * p2, const MethodInfo* method);
#define m18220(__this, p0, p1, p2, method) (( void (*) (t2466 *, t52 *, int32_t, t2474 *, const MethodInfo*))m18220_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18220_gshared (t2466 * __this, t52 * p0, int32_t p1, t2474 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2474 * L_14 = p2;
			(( void (*) (t2466 *, t69*, int32_t, t2474 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2466 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2474 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2474MD.h"
extern "C" void m18219_gshared (t2466 * __this, t69* p0, int32_t p1, t2474 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2474 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t7 * L_13 = (t7 *)VirtFuncInvoker2< t7 *, t7 *, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue) */, (t2474 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		t7 * L_14 = L_13;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->f8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2477.h"
struct t2466;
struct t69;
struct t2477;
extern "C" void m18221_gshared (t2466 * __this, t69* p0, int32_t p1, t2477 * p2, const MethodInfo* method);
#define m18221(__this, p0, p1, p2, method) (( void (*) (t2466 *, t69*, int32_t, t2477 *, const MethodInfo*))m18221_gshared)(__this, p0, p1, p2, method)
struct t2466;
struct t52;
struct t2477;
extern "C" void m18222_gshared (t2466 * __this, t52 * p0, int32_t p1, t2477 * p2, const MethodInfo* method);
#define m18222(__this, p0, p1, p2, method) (( void (*) (t2466 *, t52 *, int32_t, t2477 *, const MethodInfo*))m18222_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18222_gshared (t2466 * __this, t52 * p0, int32_t p1, t2477 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2477 * L_14 = p2;
			(( void (*) (t2466 *, t69*, int32_t, t2477 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2466 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2477 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2477MD.h"
extern "C" void m18221_gshared (t2466 * __this, t69* p0, int32_t p1, t2477 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2477 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, t7 *, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue) */, (t2477 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2466;
struct t1018;
struct t2477;
extern "C" void m18223_gshared (t2466 * __this, t1018* p0, int32_t p1, t2477 * p2, const MethodInfo* method);
#define m18223(__this, p0, p1, p2, method) (( void (*) (t2466 *, t1018*, int32_t, t2477 *, const MethodInfo*))m18223_gshared)(__this, p0, p1, p2, method)
extern "C" void m18223_gshared (t2466 * __this, t1018* p0, int32_t p1, t2477 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t1018* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2477 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, t7 *, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue) */, (t2477 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5)) = (int32_t)((*(int32_t*)((int32_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2468.h"
#include "t2468MD.h"
struct t2466;
struct t3186;
struct t2468;
extern "C" void m18224_gshared (t2466 * __this, t3186* p0, int32_t p1, t2468 * p2, const MethodInfo* method);
#define m18224(__this, p0, p1, p2, method) (( void (*) (t2466 *, t3186*, int32_t, t2468 *, const MethodInfo*))m18224_gshared)(__this, p0, p1, p2, method)
extern "C" void m18224_gshared (t2466 * __this, t3186* p0, int32_t p1, t2468 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2468 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , t7 *, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2468 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2478.h"
struct t2466;
struct t69;
struct t2478;
extern "C" void m18225_gshared (t2466 * __this, t69* p0, int32_t p1, t2478 * p2, const MethodInfo* method);
#define m18225(__this, p0, p1, p2, method) (( void (*) (t2466 *, t69*, int32_t, t2478 *, const MethodInfo*))m18225_gshared)(__this, p0, p1, p2, method)
struct t2466;
struct t52;
struct t2478;
extern "C" void m18226_gshared (t2466 * __this, t52 * p0, int32_t p1, t2478 * p2, const MethodInfo* method);
#define m18226(__this, p0, p1, p2, method) (( void (*) (t2466 *, t52 *, int32_t, t2478 *, const MethodInfo*))m18226_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18226_gshared (t2466 * __this, t52 * p0, int32_t p1, t2478 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2478 * L_14 = p2;
			(( void (*) (t2466 *, t69*, int32_t, t2478 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2466 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2478 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2478MD.h"
extern "C" void m18225_gshared (t2466 * __this, t69* p0, int32_t p1, t2478 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2478 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2469  L_13 = (t2469 )VirtFuncInvoker2< t2469 , t7 *, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue) */, (t2478 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		t2469  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2466;
struct t2959;
struct t2478;
extern "C" void m18227_gshared (t2466 * __this, t2959* p0, int32_t p1, t2478 * p2, const MethodInfo* method);
#define m18227(__this, p0, p1, p2, method) (( void (*) (t2466 *, t2959*, int32_t, t2478 *, const MethodInfo*))m18227_gshared)(__this, p0, p1, p2, method)
extern "C" void m18227_gshared (t2466 * __this, t2959* p0, int32_t p1, t2478 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t2959* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2478 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2469  L_13 = (t2469 )VirtFuncInvoker2< t2469 , t7 *, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue) */, (t2478 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		t2469  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2469 *)(t2469 *)SZArrayLdElema(L_3, L_5)) = (t2469 )((*(t2469 *)((t2469 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2494.h"
struct t52;
struct t52;
extern "C" t2494  m18229_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18229(__this, p0, method) (( t2494  (*) (t52 *, int32_t, const MethodInfo*))m18229_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2494  m18229_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2494  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2494 *)(&V_0));
		t2494  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18230_gshared (t52 * __this, t2494  p0, const MethodInfo* method);
#define m18230(__this, p0, method) (( void (*) (t52 *, t2494 , const MethodInfo*))m18230_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18230_gshared (t52 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18231_gshared (t52 * __this, t2494  p0, const MethodInfo* method);
#define m18231(__this, p0, method) (( bool (*) (t52 *, t2494 , const MethodInfo*))m18231_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18231_gshared (t52 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2494  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2494 *)(&V_2));
		t2494  L_5 = p0;
		t2494  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2494  L_8 = V_2;
		t2494  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2494  L_11 = V_2;
		t2494  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t2749;
extern "C" void m18232_gshared (t52 * __this, t2749* p0, int32_t p1, const MethodInfo* method);
#define m18232(__this, p0, p1, method) (( void (*) (t52 *, t2749*, int32_t, const MethodInfo*))m18232_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18232_gshared (t52 * __this, t2749* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2749* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t2749* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t2749* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t2749* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t2749* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18233_gshared (t52 * __this, t2494  p0, const MethodInfo* method);
#define m18233(__this, p0, method) (( bool (*) (t52 *, t2494 , const MethodInfo*))m18233_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18233_gshared (t52 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18234_gshared (t52 * __this, t2494  p0, const MethodInfo* method);
#define m18234(__this, p0, method) (( int32_t (*) (t52 *, t2494 , const MethodInfo*))m18234_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18234_gshared (t52 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2494  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2494 *)(&V_2));
		t2494  L_5 = p0;
		t2494  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2494  L_8 = V_2;
		t2494  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2494  L_14 = p0;
		t2494  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18235_gshared (t52 * __this, int32_t p0, t2494  p1, const MethodInfo* method);
#define m18235(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2494 , const MethodInfo*))m18235_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18235_gshared (t52 * __this, int32_t p0, t2494  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18237_gshared (t52 * __this, int32_t p0, t2494  p1, const MethodInfo* method);
#define m18237(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2494 , const MethodInfo*))m18237_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18237_gshared (t52 * __this, int32_t p0, t2494  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2494  L_6 = p1;
		t2494  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2494 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2495.h"
#include "t2495MD.h"
struct t52;
struct t2975;
extern "C" t7* m18238_gshared (t52 * __this, const MethodInfo* method);
#define m18238(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18238_gshared)(__this, method)
extern "C" t7* m18238_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2495  L_0 = {0};
		(( void (*) (t2495 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2495  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2492.h"
#include "t2499.h"
#include "t2492MD.h"
struct t2492;
struct t69;
struct t2499;
extern "C" void m18239_gshared (t2492 * __this, t69* p0, int32_t p1, t2499 * p2, const MethodInfo* method);
#define m18239(__this, p0, p1, p2, method) (( void (*) (t2492 *, t69*, int32_t, t2499 *, const MethodInfo*))m18239_gshared)(__this, p0, p1, p2, method)
struct t2492;
struct t52;
struct t2499;
extern "C" void m18240_gshared (t2492 * __this, t52 * p0, int32_t p1, t2499 * p2, const MethodInfo* method);
#define m18240(__this, p0, p1, p2, method) (( void (*) (t2492 *, t52 *, int32_t, t2499 *, const MethodInfo*))m18240_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18240_gshared (t2492 * __this, t52 * p0, int32_t p1, t2499 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2499 * L_14 = p2;
			(( void (*) (t2492 *, t69*, int32_t, t2499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2492 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2499 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2499MD.h"
extern "C" void m18239_gshared (t2492 * __this, t69* p0, int32_t p1, t2499 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2499 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t7 * L_13 = (t7 *)VirtFuncInvoker2< t7 *, t7 *, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue) */, (t2499 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t7 * L_14 = L_13;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->f8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2493.h"
#include "t2493MD.h"
struct t2492;
struct t3186;
struct t2493;
extern "C" void m18241_gshared (t2492 * __this, t3186* p0, int32_t p1, t2493 * p2, const MethodInfo* method);
#define m18241(__this, p0, p1, p2, method) (( void (*) (t2492 *, t3186*, int32_t, t2493 *, const MethodInfo*))m18241_gshared)(__this, p0, p1, p2, method)
extern "C" void m18241_gshared (t2492 * __this, t3186* p0, int32_t p1, t2493 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2493 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , t7 *, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2493 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2502.h"
struct t2492;
struct t69;
struct t2502;
extern "C" void m18242_gshared (t2492 * __this, t69* p0, int32_t p1, t2502 * p2, const MethodInfo* method);
#define m18242(__this, p0, p1, p2, method) (( void (*) (t2492 *, t69*, int32_t, t2502 *, const MethodInfo*))m18242_gshared)(__this, p0, p1, p2, method)
struct t2492;
struct t52;
struct t2502;
extern "C" void m18243_gshared (t2492 * __this, t52 * p0, int32_t p1, t2502 * p2, const MethodInfo* method);
#define m18243(__this, p0, p1, p2, method) (( void (*) (t2492 *, t52 *, int32_t, t2502 *, const MethodInfo*))m18243_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18243_gshared (t2492 * __this, t52 * p0, int32_t p1, t2502 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2502 * L_14 = p2;
			(( void (*) (t2492 *, t69*, int32_t, t2502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2492 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2502 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2502MD.h"
extern "C" void m18242_gshared (t2492 * __this, t69* p0, int32_t p1, t2502 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2502 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2494  L_13 = (t2494 )VirtFuncInvoker2< t2494 , t7 *, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue) */, (t2502 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t2494  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2492;
struct t2749;
struct t2502;
extern "C" void m18244_gshared (t2492 * __this, t2749* p0, int32_t p1, t2502 * p2, const MethodInfo* method);
#define m18244(__this, p0, p1, p2, method) (( void (*) (t2492 *, t2749*, int32_t, t2502 *, const MethodInfo*))m18244_gshared)(__this, p0, p1, p2, method)
extern "C" void m18244_gshared (t2492 * __this, t2749* p0, int32_t p1, t2502 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t2749* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2502 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2494  L_13 = (t2494 )VirtFuncInvoker2< t2494 , t7 *, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue) */, (t2502 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t2494  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2494 *)(t2494 *)SZArrayLdElema(L_3, L_5)) = (t2494 )((*(t2494 *)((t2494 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t223.h"
struct t52;
struct t222;
extern "C" void m18245_gshared (t7 * __this , t222** p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18245(__this , p0, p1, p2, method) (( void (*) (t7 * , t222**, int32_t, int32_t, const MethodInfo*))m18245_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t222;
extern "C" void m18246_gshared (t7 * __this , t222** p0, int32_t p1, const MethodInfo* method);
#define m18246(__this , p0, p1, method) (( void (*) (t7 * , t222**, int32_t, const MethodInfo*))m18246_gshared)(__this , p0, p1, method)
extern "C" void m18246_gshared (t7 * __this , t222** p0, int32_t p1, const MethodInfo* method)
{
	t222** G_B2_0 = {0};
	t222** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t222** G_B3_1 = {0};
	{
		t222** L_0 = p0;
		t222** L_1 = p0;
		G_B1_0 = L_0;
		if ((*((t222**)L_1)))
		{
			G_B2_0 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		t222** L_2 = p0;
		G_B3_0 = (((int32_t)(((t52 *)(*((t222**)L_2)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		int32_t L_3 = p1;
		(( void (*) (t7 * , t222**, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t222**)G_B3_1, (int32_t)G_B3_0, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t711_TI_var;
extern "C" void m18245_gshared (t7 * __this , t222** p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t222* V_0 = {0};
	{
		int32_t L_0 = p2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		t222** L_2 = p0;
		if ((*((t222**)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t222** L_3 = p0;
		int32_t L_4 = p2;
		*((t7 **)(L_3)) = (t7 *)((t222*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_4));
		return;
	}

IL_0017:
	{
		t222** L_5 = p0;
		int32_t L_6 = p2;
		if ((!(((uint32_t)(((int32_t)(((t52 *)(*((t222**)L_5)))->max_length)))) == ((uint32_t)L_6))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = p2;
		V_0 = (t222*)((t222*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_7));
		t222** L_8 = p0;
		t222* L_9 = V_0;
		int32_t L_10 = p2;
		int32_t L_11 = p1;
		int32_t L_12 = m9829(NULL, (int32_t)L_10, (int32_t)L_11, NULL);
		m4651(NULL, (t52 *)(t52 *)(*((t222**)L_8)), (t52 *)(t52 *)L_9, (int32_t)L_12, NULL);
		t222** L_13 = p0;
		t222* L_14 = V_0;
		*((t7 **)(L_13)) = (t7 *)L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2516.h"
#include "t2516MD.h"
struct t52;
struct t222;
extern "C" int32_t m18247_gshared (t7 * __this , t222* p0, t223  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18247(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t222*, t223 , int32_t, int32_t, const MethodInfo*))m18247_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2516_TI_var;
extern "C" int32_t m18247_gshared (t7 * __this , t222* p0, t223  p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2516_TI_var = il2cpp_codegen_type_info_from_index(5467);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2516 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t222* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = p2;
		t222* L_4 = p0;
		int32_t L_5 = m6350((t52 *)L_4, (int32_t)0, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p2;
		t222* L_7 = p0;
		int32_t L_8 = m6362((t52 *)L_7, (int32_t)0, NULL);
		int32_t L_9 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))) <= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t711 * L_10 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_10, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0030:
	{
		int32_t L_11 = p2;
		int32_t L_12 = p3;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12));
		IL2CPP_RUNTIME_CLASS_INIT(t2516_TI_var);
		t2516 * L_13 = (( t2516 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (t2516 *)L_13;
		int32_t L_14 = p2;
		V_2 = (int32_t)L_14;
		goto IL_0054;
	}

IL_003e:
	{
		t2516 * L_15 = V_1;
		t222* L_16 = p0;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		t223  L_19 = p1;
		bool L_20 = (bool)VirtFuncInvoker2< bool, t223 , t223  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T) */, (t2516 *)L_15, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_16, L_18)), (t223 )L_19);
		if (!L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t222;
struct t3238;
extern "C" void m18248_gshared (t7 * __this , t222* p0, t222* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18248(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t222*, t222*, int32_t, int32_t, t7*, const MethodInfo*))m18248_gshared)(__this , p0, p1, p2, p3, p4, method)
struct t52;
struct t222;
struct t3238;
extern "C" void m18249_gshared (t7 * __this , t222* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method);
#define m18249(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t222*, int32_t, int32_t, t7*, const MethodInfo*))m18249_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18249_gshared (t7 * __this , t222* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t222* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t222* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t7* L_5 = p3;
		(( void (*) (t7 * , t222*, t222*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t222*)L_2, (t222*)(t222*)NULL, (int32_t)L_3, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1312;
struct t222;
extern "C" t1312 * m18250_gshared (t7 * __this , t222* p0, const MethodInfo* method);
#define m18250(__this , p0, method) (( t1312 * (*) (t7 * , t222*, const MethodInfo*))m18250_gshared)(__this , p0, method)
struct t52;
struct t222;
struct t3238;
extern "C" void m18251_gshared (t7 * __this , t222* p0, t222* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18251(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t222*, t222*, int32_t, int32_t, t7*, const MethodInfo*))m18251_gshared)(__this , p0, p1, p2, p3, p4, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t1840_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18248_gshared (t7 * __this , t222* p0, t222* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t1312 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t65 * V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t222* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1191, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = p3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		t711 * L_5 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_5, (t47*)(t47*) &_stringLiteral1068, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t222* L_6 = p0;
		int32_t L_7 = p2;
		int32_t L_8 = p3;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))-(int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		t222* L_9 = p1;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = p2;
		t222* L_11 = p1;
		int32_t L_12 = p3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		t396 * L_13 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_13, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0045:
	{
		int32_t L_14 = p3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		t7* L_15 = p4;
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		t222* L_16 = p1;
		if (L_16)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (t1312 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		t222* L_17 = p1;
		t1312 * L_18 = (( t1312 * (*) (t7 * , t222*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t222*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (t1312 *)L_18;
	}

IL_005c:
	{
		t222* L_19 = p0;
		if (!((t1840*)IsInst(L_19, t1840_TI_var)))
		{
			goto IL_0078;
		}
	}
	{
		t222* L_20 = p0;
		t222* L_21 = L_20;
		int32_t L_22 = p2;
		int32_t L_23 = p3;
		t1312 * L_24 = V_0;
		m6414(NULL, (t1840*)((t1840*)IsInst(((t222*)L_21), t1840_TI_var)), (int32_t)L_22, (int32_t)L_23, (t1312 *)L_24, NULL);
		return;
	}

IL_0078:
	{
		t222* L_25 = p0;
		if (!((t1018*)IsInst(L_25, t1018_TI_var)))
		{
			goto IL_0094;
		}
	}
	{
		t222* L_26 = p0;
		t222* L_27 = L_26;
		int32_t L_28 = p2;
		int32_t L_29 = p3;
		t1312 * L_30 = V_0;
		m6415(NULL, (t1018*)((t1018*)IsInst(((t222*)L_27), t1018_TI_var)), (int32_t)L_28, (int32_t)L_29, (t1312 *)L_30, NULL);
		return;
	}

IL_0094:
	{
		t222* L_31 = p0;
		if (!((t221*)IsInst(L_31, t221_TI_var)))
		{
			goto IL_00b0;
		}
	}
	{
		t222* L_32 = p0;
		t222* L_33 = L_32;
		int32_t L_34 = p2;
		int32_t L_35 = p3;
		t1312 * L_36 = V_0;
		m6416(NULL, (t221*)((t221*)IsInst(((t222*)L_33), t221_TI_var)), (int32_t)L_34, (int32_t)L_35, (t1312 *)L_36, NULL);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		int32_t L_37 = p2;
		V_1 = (int32_t)L_37;
		int32_t L_38 = p2;
		int32_t L_39 = p3;
		V_2 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38+(int32_t)L_39))-(int32_t)1));
		t222* L_40 = p0;
		t222* L_41 = p1;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		t7* L_44 = p4;
		(( void (*) (t7 * , t222*, t222*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t222*)L_40, (t222*)L_41, (int32_t)L_42, (int32_t)L_43, (t7*)L_44, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		V_3 = (t65 *)((t65 *)__exception_local);
		t47* L_45 = m6526(NULL, (t47*)(t47*) &_stringLiteral1192, NULL);
		t65 * L_46 = V_3;
		t1098 * L_47 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_47, (t47*)L_45, (t65 *)L_46, NULL);
		il2cpp_codegen_raise_exception(L_47);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t1018_TI_var;
extern TypeInfo* t1312_TI_var;
extern TypeInfo* t1840_TI_var;
extern const MethodInfo* m6409_MI_var;
extern const MethodInfo* m6412_MI_var;
extern const MethodInfo* m6411_MI_var;
extern "C" t1312 * m18250_gshared (t7 * __this , t222* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t1312_TI_var = il2cpp_codegen_type_info_from_index(2733);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		m6409_MI_var = il2cpp_codegen_method_info_from_index(323);
		m6412_MI_var = il2cpp_codegen_method_info_from_index(324);
		m6411_MI_var = il2cpp_codegen_method_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	{
		t222* L_0 = p0;
		if (!((t1018*)IsInst(L_0, t1018_TI_var)))
		{
			goto IL_0015;
		}
	}
	{
		t222* L_1 = p0;
		t226 L_2 = { (void*)m6409_MI_var };
		t1312 * L_3 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_3, (t7 *)(t7 *)L_1, (t226)L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		t222* L_4 = p0;
		if (!((t1840*)IsInst(L_4, t1840_TI_var)))
		{
			goto IL_002a;
		}
	}
	{
		t222* L_5 = p0;
		t226 L_6 = { (void*)m6412_MI_var };
		t1312 * L_7 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_7, (t7 *)(t7 *)L_5, (t226)L_6, NULL);
		return L_7;
	}

IL_002a:
	{
		t222* L_8 = p0;
		t226 L_9 = { (void*)m6411_MI_var };
		t1312 * L_10 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_10, (t7 *)(t7 *)L_8, (t226)L_9, NULL);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3238;
extern "C" int32_t m18252_gshared (t7 * __this , t223  p0, t223  p1, t7* p2, const MethodInfo* method);
#define m18252(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t223 , t223 , t7*, const MethodInfo*))m18252_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t222;
extern "C" void m18253_gshared (t7 * __this , t222* p0, t222* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18253(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t222*, t222*, int32_t, int32_t, const MethodInfo*))m18253_gshared)(__this , p0, p1, p2, p3, method)
extern "C" void m18251_gshared (t7 * __this , t222* p0, t222* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t223  V_3 = {0};
	{
		int32_t L_0 = p2;
		int32_t L_1 = p3;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p2;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p3;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t222* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p3;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0035;
		}
	}
	{
		t222* L_13 = p0;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t223  L_16 = V_3;
		t7* L_17 = p4;
		int32_t L_18 = (( int32_t (*) (t7 * , t223 , t223 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_13, L_15)), (t223 )L_16, (t7*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p2;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		t223  L_22 = V_3;
		t222* L_23 = p0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		t7* L_26 = p4;
		int32_t L_27 = (( int32_t (*) (t7 * , t223 , t223 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t223 )L_22, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_23, L_25)), (t7*)L_26, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}
	{
		t222* L_30 = p0;
		t222* L_31 = p1;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		(( void (*) (t7 * , t222*, t222*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t222*)L_30, (t222*)L_31, (int32_t)L_32, (int32_t)L_33, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_34 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_35-(int32_t)1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		int32_t L_36 = p2;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_007b;
		}
	}
	{
		t222* L_38 = p0;
		t222* L_39 = p1;
		int32_t L_40 = p2;
		int32_t L_41 = V_1;
		t7* L_42 = p4;
		(( void (*) (t7 * , t222*, t222*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t222*)L_38, (t222*)L_39, (int32_t)L_40, (int32_t)L_41, (t7*)L_42, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = p3;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_008a;
		}
	}
	{
		t222* L_45 = p0;
		t222* L_46 = p1;
		int32_t L_47 = V_0;
		int32_t L_48 = p3;
		t7* L_49 = p4;
		(( void (*) (t7 * , t222*, t222*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t222*)L_45, (t222*)L_46, (int32_t)L_47, (int32_t)L_48, (t7*)L_49, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t91_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" int32_t m18252_gshared (t7 * __this , t223  p0, t223  p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t91_TI_var = il2cpp_codegen_type_info_from_index(98);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t7* L_0 = p2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t7* L_1 = p2;
		t223  L_2 = p0;
		t223  L_3 = p1;
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, t223 , t223  >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (t7*)L_1, (t223 )L_2, (t223 )L_3);
		return L_4;
	}

IL_000c:
	{
		t223  L_5 = p0;
		t223  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_6);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		t223  L_8 = p1;
		t223  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_9);
		if (L_10)
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		t223  L_11 = p1;
		t223  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_12);
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t223  L_14 = p0;
		t223  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_15);
		if (!((t7*)IsInst(L_16, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		t223  L_17 = p0;
		t223  L_18 = L_17;
		t7 * L_19 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_18);
		t223  L_20 = p1;
		int32_t L_21 = (int32_t)InterfaceFuncInvoker1< int32_t, t223  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UIVertex>::CompareTo(T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (t7*)((t7*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (t223 )L_20);
		return L_21;
	}

IL_004a:
	{
		t223  L_22 = p0;
		t223  L_23 = L_22;
		t7 * L_24 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_23);
		if (!((t7 *)IsInst(L_24, t91_TI_var)))
		{
			goto IL_006e;
		}
	}
	{
		t223  L_25 = p0;
		t223  L_26 = L_25;
		t7 * L_27 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_26);
		t223  L_28 = p1;
		t223  L_29 = L_28;
		t7 * L_30 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_29);
		int32_t L_31 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t91_TI_var, (t7 *)((t7 *)Castclass(L_27, t91_TI_var)), (t7 *)L_30);
		return L_31;
	}

IL_006e:
	{
		t47* L_32 = m6526(NULL, (t47*)(t47*) &_stringLiteral1195, NULL);
		V_0 = (t47*)L_32;
		t47* L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_34 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_35 = m1593(NULL, (t47*)L_33, (t7 *)L_34, NULL);
		t1098 * L_36 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_36, (t47*)L_35, NULL);
		il2cpp_codegen_raise_exception(L_36);
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18253_gshared (t7 * __this , t222* p0, t222* p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	t223  V_0 = {0};
	t223  V_1 = {0};
	{
		t222* L_0 = p0;
		int32_t L_1 = p2;
		int32_t L_2 = L_1;
		V_0 = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_0, L_2));
		t222* L_3 = p0;
		int32_t L_4 = p2;
		t222* L_5 = p0;
		int32_t L_6 = p3;
		int32_t L_7 = L_6;
		*((t223 *)(t223 *)SZArrayLdElema(L_3, L_4)) = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_5, L_7));
		t222* L_8 = p0;
		int32_t L_9 = p3;
		t223  L_10 = V_0;
		*((t223 *)(t223 *)SZArrayLdElema(L_8, L_9)) = (t223 )L_10;
		t222* L_11 = p1;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		t222* L_12 = p1;
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		V_1 = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_12, L_14));
		t222* L_15 = p1;
		int32_t L_16 = p2;
		t222* L_17 = p1;
		int32_t L_18 = p3;
		int32_t L_19 = L_18;
		*((t223 *)(t223 *)SZArrayLdElema(L_15, L_16)) = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_17, L_19));
		t222* L_20 = p1;
		int32_t L_21 = p3;
		t223  L_22 = V_1;
		*((t223 *)(t223 *)SZArrayLdElema(L_20, L_21)) = (t223 )L_22;
	}

IL_003f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2513.h"
struct t52;
struct t222;
struct t2513;
extern "C" void m18254_gshared (t7 * __this , t222* p0, int32_t p1, int32_t p2, t2513 * p3, const MethodInfo* method);
#define m18254(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t222*, int32_t, int32_t, t2513 *, const MethodInfo*))m18254_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t222;
struct t2513;
extern "C" void m18255_gshared (t7 * __this , t222* p0, int32_t p1, t2513 * p2, const MethodInfo* method);
#define m18255(__this , p0, p1, p2, method) (( void (*) (t7 * , t222*, int32_t, t2513 *, const MethodInfo*))m18255_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18255_gshared (t7 * __this , t222* p0, int32_t p1, t2513 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2513 * L_0 = p2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1193, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		t222* L_3 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = p1;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		t222* L_5 = p0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		t2513 * L_8 = p2;
		(( void (*) (t7 * , t222*, int32_t, int32_t, t2513 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t222*)L_5, (int32_t)L_6, (int32_t)L_7, (t2513 *)L_8, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t47* L_9 = m6526(NULL, (t47*)(t47*) &_stringLiteral1194, NULL);
		t65 * L_10 = V_2;
		t1098 * L_11 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_11, (t47*)L_9, (t65 *)L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2513MD.h"
struct t52;
struct t222;
extern "C" void m18256_gshared (t7 * __this , t222* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18256(__this , p0, p1, p2, method) (( void (*) (t7 * , t222*, int32_t, int32_t, const MethodInfo*))m18256_gshared)(__this , p0, p1, p2, method)
extern "C" void m18254_gshared (t7 * __this , t222* p0, int32_t p1, int32_t p2, t2513 * p3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t223  V_3 = {0};
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p1;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p2;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t222* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		t2513 * L_13 = p3;
		t222* L_14 = p0;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		t223  L_17 = V_3;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t223 , t223  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T) */, (t2513 *)L_13, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_14, L_16)), (t223 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p1;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		t2513 * L_22 = p3;
		t223  L_23 = V_3;
		t222* L_24 = p0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, t223 , t223  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T) */, (t2513 *)L_22, (t223 )L_23, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		t222* L_30 = p0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (t7 * , t222*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t222*)L_30, (int32_t)L_31, (int32_t)L_32, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = p1;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		t222* L_37 = p0;
		int32_t L_38 = p1;
		int32_t L_39 = V_1;
		t2513 * L_40 = p3;
		(( void (*) (t7 * , t222*, int32_t, int32_t, t2513 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t222*)L_37, (int32_t)L_38, (int32_t)L_39, (t2513 *)L_40, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = p2;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		t222* L_43 = p0;
		int32_t L_44 = V_0;
		int32_t L_45 = p2;
		t2513 * L_46 = p3;
		(( void (*) (t7 * , t222*, int32_t, int32_t, t2513 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t222*)L_43, (int32_t)L_44, (int32_t)L_45, (t2513 *)L_46, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18256_gshared (t7 * __this , t222* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	t223  V_0 = {0};
	{
		t222* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		V_0 = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_0, L_2));
		t222* L_3 = p0;
		int32_t L_4 = p1;
		t222* L_5 = p0;
		int32_t L_6 = p2;
		int32_t L_7 = L_6;
		*((t223 *)(t223 *)SZArrayLdElema(L_3, L_4)) = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_5, L_7));
		t222* L_8 = p0;
		int32_t L_9 = p2;
		t223  L_10 = V_0;
		*((t223 *)(t223 *)SZArrayLdElema(L_8, L_9)) = (t223 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t13;
struct t337;
extern "C" void m1604_gshared (t13 * __this, bool p0, t337 * p1, const MethodInfo* method);
#define m1604(__this, p0, p1, method) (( void (*) (t13 *, bool, t337 *, const MethodInfo*))m1604_gshared)(__this, p0, p1, method)
extern TypeInfo* t347_TI_var;
extern "C" void m1604_gshared (t13 * __this, bool p0, t337 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		bool L_1 = p0;
		t337 * L_2 = p1;
		m2688((t13 *)__this, (t347 *)L_0, (bool)1, (bool)1, (bool)L_1, (bool)1, (t7 *)L_2, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t252.h"
struct t252;
struct t7;
extern "C" bool m1667_gshared (t7 * __this , t7 ** p0, t7 * p1, const MethodInfo* method);
#define m1667(__this , p0, p1, method) (( bool (*) (t7 * , t7 **, t7 *, const MethodInfo*))m1667_gshared)(__this , p0, p1, method)
extern "C" bool m1667_gshared (t7 * __this , t7 ** p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 ** L_0 = p0;
		t7 * L_1 = (*(t7 **)L_0);
		if (((t7 *)L_1))
		{
			goto IL_001b;
		}
	}
	{
		t7 * L_2 = p1;
		t7 * L_3 = L_2;
		if (!((t7 *)L_3))
		{
			goto IL_0042;
		}
	}

IL_001b:
	{
		t7 ** L_4 = p0;
		t7 * L_5 = (*(t7 **)L_4);
		if (!((t7 *)L_5))
		{
			goto IL_0044;
		}
	}
	{
		t7 ** L_6 = p0;
		t7 * L_7 = p1;
		t7 * L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)(*L_6), (t7 *)((t7 *)L_8));
		if (!L_9)
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return 0;
	}

IL_0044:
	{
		t7 ** L_10 = p0;
		t7 * L_11 = p1;
		*L_10 = L_11;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t132.h"
#include "t132MD.h"
struct t252;
extern "C" bool m1669_gshared (t7 * __this , int32_t* p0, int32_t p1, const MethodInfo* method);
#define m1669(__this , p0, p1, method) (( bool (*) (t7 * , int32_t*, int32_t, const MethodInfo*))m1669_gshared)(__this , p0, p1, method)
extern "C" bool m1669_gshared (t7 * __this , int32_t* p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_0), (t7 *)L_3);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t* L_5 = p0;
		int32_t L_6 = p1;
		*L_5 = L_6;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t356.h"
struct t252;
extern "C" bool m1671_gshared (t7 * __this , uint8_t* p0, uint8_t p1, const MethodInfo* method);
#define m1671(__this , p0, p1, method) (( bool (*) (t7 * , uint8_t*, uint8_t, const MethodInfo*))m1671_gshared)(__this , p0, p1, method)
extern "C" bool m1671_gshared (t7 * __this , uint8_t* p0, uint8_t p1, const MethodInfo* method)
{
	{
		uint8_t* L_0 = p0;
		uint8_t L_1 = p1;
		uint8_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_0), (t7 *)L_3);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		uint8_t* L_5 = p0;
		uint8_t L_6 = p1;
		*L_5 = L_6;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t60.h"
struct t252;
extern "C" bool m1673_gshared (t7 * __this , float* p0, float p1, const MethodInfo* method);
#define m1673(__this , p0, p1, method) (( bool (*) (t7 * , float*, float, const MethodInfo*))m1673_gshared)(__this , p0, p1, method)
extern "C" bool m1673_gshared (t7 * __this , float* p0, float p1, const MethodInfo* method)
{
	{
		float* L_0 = p0;
		float L_1 = p1;
		float L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_0), (t7 *)L_3);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		float* L_5 = p0;
		float L_6 = p1;
		*L_5 = L_6;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t74.h"
struct t52;
struct t52;
extern "C" t74  m18258_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18258(__this, p0, method) (( t74  (*) (t52 *, int32_t, const MethodInfo*))m18258_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t74  m18258_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t74  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t74 *)(&V_0));
		t74  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18259_gshared (t52 * __this, t74  p0, const MethodInfo* method);
#define m18259(__this, p0, method) (( void (*) (t52 *, t74 , const MethodInfo*))m18259_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18259_gshared (t52 * __this, t74  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18260_gshared (t52 * __this, t74  p0, const MethodInfo* method);
#define m18260(__this, p0, method) (( bool (*) (t52 *, t74 , const MethodInfo*))m18260_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18260_gshared (t52 * __this, t74  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t74  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t74 *)(&V_2));
		t74  L_5 = p0;
		t74  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t74  L_8 = V_2;
		t74  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t74  L_11 = V_2;
		t74  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t201;
extern "C" void m18261_gshared (t52 * __this, t201* p0, int32_t p1, const MethodInfo* method);
#define m18261(__this, p0, p1, method) (( void (*) (t52 *, t201*, int32_t, const MethodInfo*))m18261_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18261_gshared (t52 * __this, t201* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t201* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t201* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t201* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t201* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t201* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18262_gshared (t52 * __this, t74  p0, const MethodInfo* method);
#define m18262(__this, p0, method) (( bool (*) (t52 *, t74 , const MethodInfo*))m18262_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18262_gshared (t52 * __this, t74  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18263_gshared (t52 * __this, t74  p0, const MethodInfo* method);
#define m18263(__this, p0, method) (( int32_t (*) (t52 *, t74 , const MethodInfo*))m18263_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18263_gshared (t52 * __this, t74  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t74  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t74 *)(&V_2));
		t74  L_5 = p0;
		t74  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t74  L_8 = V_2;
		t74  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t74  L_14 = p0;
		t74  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18264_gshared (t52 * __this, int32_t p0, t74  p1, const MethodInfo* method);
#define m18264(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t74 , const MethodInfo*))m18264_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18264_gshared (t52 * __this, int32_t p0, t74  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18266_gshared (t52 * __this, int32_t p0, t74  p1, const MethodInfo* method);
#define m18266(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t74 , const MethodInfo*))m18266_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18266_gshared (t52 * __this, int32_t p0, t74  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t74  L_6 = p1;
		t74  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t74 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2548.h"
#include "t2548MD.h"
struct t52;
struct t3239;
extern "C" t7* m18267_gshared (t52 * __this, const MethodInfo* method);
#define m18267(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18267_gshared)(__this, method)
extern "C" t7* m18267_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2548  L_0 = {0};
		(( void (*) (t2548 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2548  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t252;
extern "C" bool m1728_gshared (t7 * __this , uint16_t* p0, uint16_t p1, const MethodInfo* method);
#define m1728(__this , p0, p1, method) (( bool (*) (t7 * , uint16_t*, uint16_t, const MethodInfo*))m1728_gshared)(__this , p0, p1, method)
extern "C" bool m1728_gshared (t7 * __this , uint16_t* p0, uint16_t p1, const MethodInfo* method)
{
	{
		uint16_t* L_0 = p0;
		uint16_t L_1 = p1;
		uint16_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_0), (t7 *)L_3);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		uint16_t* L_5 = p0;
		uint16_t L_6 = p1;
		*L_5 = L_6;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t379.h"
struct t52;
struct t52;
extern "C" t379  m18269_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18269(__this, p0, method) (( t379  (*) (t52 *, int32_t, const MethodInfo*))m18269_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t379  m18269_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t379  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t379 *)(&V_0));
		t379  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18270_gshared (t52 * __this, t379  p0, const MethodInfo* method);
#define m18270(__this, p0, method) (( void (*) (t52 *, t379 , const MethodInfo*))m18270_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18270_gshared (t52 * __this, t379  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18271_gshared (t52 * __this, t379  p0, const MethodInfo* method);
#define m18271(__this, p0, method) (( bool (*) (t52 *, t379 , const MethodInfo*))m18271_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18271_gshared (t52 * __this, t379  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t379  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t379 *)(&V_2));
		t379  L_5 = p0;
		t379  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t379  L_8 = V_2;
		t379  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t379  L_11 = V_2;
		t379  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t669;
extern "C" void m18272_gshared (t52 * __this, t669* p0, int32_t p1, const MethodInfo* method);
#define m18272(__this, p0, p1, method) (( void (*) (t52 *, t669*, int32_t, const MethodInfo*))m18272_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18272_gshared (t52 * __this, t669* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t669* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t669* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t669* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t669* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t669* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18273_gshared (t52 * __this, t379  p0, const MethodInfo* method);
#define m18273(__this, p0, method) (( bool (*) (t52 *, t379 , const MethodInfo*))m18273_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18273_gshared (t52 * __this, t379  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18274_gshared (t52 * __this, t379  p0, const MethodInfo* method);
#define m18274(__this, p0, method) (( int32_t (*) (t52 *, t379 , const MethodInfo*))m18274_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18274_gshared (t52 * __this, t379  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t379  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t379 *)(&V_2));
		t379  L_5 = p0;
		t379  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t379  L_8 = V_2;
		t379  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t379  L_14 = p0;
		t379  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18275_gshared (t52 * __this, int32_t p0, t379  p1, const MethodInfo* method);
#define m18275(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t379 , const MethodInfo*))m18275_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18275_gshared (t52 * __this, int32_t p0, t379  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18277_gshared (t52 * __this, int32_t p0, t379  p1, const MethodInfo* method);
#define m18277(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t379 , const MethodInfo*))m18277_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18277_gshared (t52 * __this, int32_t p0, t379  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t379  L_6 = p1;
		t379  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t379 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2550.h"
#include "t2550MD.h"
struct t52;
struct t3059;
extern "C" t7* m18278_gshared (t52 * __this, const MethodInfo* method);
#define m18278(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18278_gshared)(__this, method)
extern "C" t7* m18278_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2550  L_0 = {0};
		(( void (*) (t2550 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2550  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t380.h"
struct t52;
struct t52;
extern "C" t380  m18280_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18280(__this, p0, method) (( t380  (*) (t52 *, int32_t, const MethodInfo*))m18280_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t380  m18280_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t380  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t380 *)(&V_0));
		t380  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18281_gshared (t52 * __this, t380  p0, const MethodInfo* method);
#define m18281(__this, p0, method) (( void (*) (t52 *, t380 , const MethodInfo*))m18281_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18281_gshared (t52 * __this, t380  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18282_gshared (t52 * __this, t380  p0, const MethodInfo* method);
#define m18282(__this, p0, method) (( bool (*) (t52 *, t380 , const MethodInfo*))m18282_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18282_gshared (t52 * __this, t380  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t380  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t380 *)(&V_2));
		t380  L_5 = p0;
		t380  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t380  L_8 = V_2;
		t380  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t380  L_11 = V_2;
		t380  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t668;
extern "C" void m18283_gshared (t52 * __this, t668* p0, int32_t p1, const MethodInfo* method);
#define m18283(__this, p0, p1, method) (( void (*) (t52 *, t668*, int32_t, const MethodInfo*))m18283_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18283_gshared (t52 * __this, t668* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t668* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t668* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t668* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t668* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t668* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18284_gshared (t52 * __this, t380  p0, const MethodInfo* method);
#define m18284(__this, p0, method) (( bool (*) (t52 *, t380 , const MethodInfo*))m18284_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18284_gshared (t52 * __this, t380  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18285_gshared (t52 * __this, t380  p0, const MethodInfo* method);
#define m18285(__this, p0, method) (( int32_t (*) (t52 *, t380 , const MethodInfo*))m18285_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18285_gshared (t52 * __this, t380  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t380  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t380 *)(&V_2));
		t380  L_5 = p0;
		t380  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t380  L_8 = V_2;
		t380  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t380  L_14 = p0;
		t380  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18286_gshared (t52 * __this, int32_t p0, t380  p1, const MethodInfo* method);
#define m18286(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t380 , const MethodInfo*))m18286_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18286_gshared (t52 * __this, int32_t p0, t380  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18288_gshared (t52 * __this, int32_t p0, t380  p1, const MethodInfo* method);
#define m18288(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t380 , const MethodInfo*))m18288_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18288_gshared (t52 * __this, int32_t p0, t380  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t380  L_6 = p1;
		t380  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t380 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2551.h"
#include "t2551MD.h"
struct t52;
struct t3056;
extern "C" t7* m18289_gshared (t52 * __this, const MethodInfo* method);
#define m18289(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18289_gshared)(__this, method)
extern "C" t7* m18289_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2551  L_0 = {0};
		(( void (*) (t2551 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2551  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t13;
struct t7;
extern "C" t7 * m1730_gshared (t13 * __this, const MethodInfo* method);
#define m1730(__this, method) (( t7 * (*) (t13 *, const MethodInfo*))m1730_gshared)(__this, method)
extern TypeInfo* t347_TI_var;
extern "C" t7 * m1730_gshared (t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		t55 * L_1 = m2691((t13 *)__this, (t347 *)L_0, NULL);
		return ((t7 *)Castclass(((t7 *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t647;
struct t7;
extern "C" void m18290_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18290(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18290_gshared)(__this , p0, method)
extern TypeInfo* t69_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18290_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t7 * L_1 = p0;
		if (((t7 *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		t69* L_2 = (t69*)((t69*)SZArrayNew(t69_TI_var, 2));
		t7 * L_3 = p0;
		t347 * L_4 = m1520((t7 *)L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_4;
		t69* L_5 = (t69*)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_5, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_5, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*)(t47*) &_stringLiteral356, (t69*)L_5, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_8, (t47*)L_7, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t67.h"
struct t52;
struct t52;
extern "C" t67  m18292_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18292(__this, p0, method) (( t67  (*) (t52 *, int32_t, const MethodInfo*))m18292_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t67  m18292_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t67  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t67 *)(&V_0));
		t67  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18293_gshared (t52 * __this, t67  p0, const MethodInfo* method);
#define m18293(__this, p0, method) (( void (*) (t52 *, t67 , const MethodInfo*))m18293_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18293_gshared (t52 * __this, t67  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18294_gshared (t52 * __this, t67  p0, const MethodInfo* method);
#define m18294(__this, p0, method) (( bool (*) (t52 *, t67 , const MethodInfo*))m18294_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18294_gshared (t52 * __this, t67  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t67  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t67 *)(&V_2));
		t67  L_5 = p0;
		t67  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t67  L_8 = V_2;
		t67  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t67  L_11 = V_2;
		t67  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t245;
extern "C" void m18295_gshared (t52 * __this, t245* p0, int32_t p1, const MethodInfo* method);
#define m18295(__this, p0, p1, method) (( void (*) (t52 *, t245*, int32_t, const MethodInfo*))m18295_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18295_gshared (t52 * __this, t245* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t245* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t245* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t245* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t245* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t245* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18296_gshared (t52 * __this, t67  p0, const MethodInfo* method);
#define m18296(__this, p0, method) (( bool (*) (t52 *, t67 , const MethodInfo*))m18296_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18296_gshared (t52 * __this, t67  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18297_gshared (t52 * __this, t67  p0, const MethodInfo* method);
#define m18297(__this, p0, method) (( int32_t (*) (t52 *, t67 , const MethodInfo*))m18297_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18297_gshared (t52 * __this, t67  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t67  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t67 *)(&V_2));
		t67  L_5 = p0;
		t67  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t67  L_8 = V_2;
		t67  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t67  L_14 = p0;
		t67  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18298_gshared (t52 * __this, int32_t p0, t67  p1, const MethodInfo* method);
#define m18298(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t67 , const MethodInfo*))m18298_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18298_gshared (t52 * __this, int32_t p0, t67  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18300_gshared (t52 * __this, int32_t p0, t67  p1, const MethodInfo* method);
#define m18300(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t67 , const MethodInfo*))m18300_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18300_gshared (t52 * __this, int32_t p0, t67  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t67  L_6 = p1;
		t67  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t67 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2554.h"
#include "t2554MD.h"
struct t52;
struct t3240;
extern "C" t7* m18301_gshared (t52 * __this, const MethodInfo* method);
#define m18301(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18301_gshared)(__this, method)
extern "C" t7* m18301_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2554  L_0 = {0};
		(( void (*) (t2554 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2554  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t647;
struct t7;
extern "C" void m18302_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18302(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18302_gshared)(__this , p0, method)
extern TypeInfo* t69_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18302_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t7 * L_1 = p0;
		if (((t7 *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		t69* L_2 = (t69*)((t69*)SZArrayNew(t69_TI_var, 2));
		t7 * L_3 = p0;
		t347 * L_4 = m1520((t7 *)L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_4;
		t69* L_5 = (t69*)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_5, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_5, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*)(t47*) &_stringLiteral356, (t69*)L_5, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_8, (t47*)L_7, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t231.h"
struct t252;
extern "C" bool m1864_gshared (t7 * __this , t231 * p0, t231  p1, const MethodInfo* method);
#define m1864(__this , p0, p1, method) (( bool (*) (t7 * , t231 *, t231 , const MethodInfo*))m1864_gshared)(__this , p0, p1, method)
extern "C" bool m1864_gshared (t7 * __this , t231 * p0, t231  p1, const MethodInfo* method)
{
	{
		t231 * L_0 = p0;
		t231  L_1 = p1;
		t231  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_0), (t7 *)L_3);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		t231 * L_5 = p0;
		t231  L_6 = p1;
		*L_5 = L_6;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t169.h"
struct t252;
extern "C" bool m1866_gshared (t7 * __this , t169 * p0, t169  p1, const MethodInfo* method);
#define m1866(__this , p0, p1, method) (( bool (*) (t7 * , t169 *, t169 , const MethodInfo*))m1866_gshared)(__this , p0, p1, method)
extern "C" bool m1866_gshared (t7 * __this , t169 * p0, t169  p1, const MethodInfo* method)
{
	{
		t169 * L_0 = p0;
		t169  L_1 = p1;
		t169  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_0), (t7 *)L_3);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		t169 * L_5 = p0;
		t169  L_6 = p1;
		*L_5 = L_6;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t251.h"
struct t252;
extern "C" bool m1867_gshared (t7 * __this , t251 * p0, t251  p1, const MethodInfo* method);
#define m1867(__this , p0, p1, method) (( bool (*) (t7 * , t251 *, t251 , const MethodInfo*))m1867_gshared)(__this , p0, p1, method)
extern "C" bool m1867_gshared (t7 * __this , t251 * p0, t251  p1, const MethodInfo* method)
{
	{
		t251 * L_0 = p0;
		t251  L_1 = p1;
		t251  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_0), (t7 *)L_3);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		t251 * L_5 = p0;
		t251  L_6 = p1;
		*L_5 = L_6;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t647;
struct t7;
extern "C" void m18303_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18303(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18303_gshared)(__this , p0, method)
extern TypeInfo* t69_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18303_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t7 * L_1 = p0;
		if (((t7 *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		t69* L_2 = (t69*)((t69*)SZArrayNew(t69_TI_var, 2));
		t7 * L_3 = p0;
		t347 * L_4 = m1520((t7 *)L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_4;
		t69* L_5 = (t69*)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_5, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_5, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*)(t47*) &_stringLiteral356, (t69*)L_5, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_8, (t47*)L_7, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t397.h"
#include "t399.h"
#include "t881MD.h"
#include "t397MD.h"
struct t397;
struct t398;
struct t399;
extern "C" t7* m18304_gshared (t7 * __this , t7* p0, t399 * p1, const MethodInfo* method);
#define m18304(__this , p0, p1, method) (( t7* (*) (t7 * , t7*, t399 *, const MethodInfo*))m18304_gshared)(__this , p0, p1, method)
struct t397;
struct t398;
struct t399;
extern "C" t7* m1909_gshared (t7 * __this , t7* p0, t399 * p1, const MethodInfo* method);
#define m1909(__this , p0, p1, method) (( t7* (*) (t7 * , t7*, t399 *, const MethodInfo*))m1909_gshared)(__this , p0, p1, method)
extern "C" t7* m1909_gshared (t7 * __this , t7* p0, t399 * p1, const MethodInfo* method)
{
	{
		t7* L_0 = p0;
		t399 * L_1 = p1;
		m3571(NULL, (t7 *)L_0, (t7 *)L_1, NULL);
		t7* L_2 = p0;
		t399 * L_3 = p1;
		t7* L_4 = (( t7* (*) (t7 * , t7*, t399 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t7*)L_2, (t399 *)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2585.h"
#include "t2585MD.h"
extern "C" t7* m18304_gshared (t7 * __this , t7* p0, t399 * p1, const MethodInfo* method)
{
	t2585 * V_0 = {0};
	{
		t2585 * L_0 = (t2585 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (t2585 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (t2585 *)L_0;
		t2585 * L_1 = V_0;
		t7* L_2 = p0;
		L_1->f0 = L_2;
		t2585 * L_3 = V_0;
		t399 * L_4 = p1;
		L_3->f3 = L_4;
		t2585 * L_5 = V_0;
		t7* L_6 = p0;
		L_5->f6 = L_6;
		t2585 * L_7 = V_0;
		t399 * L_8 = p1;
		L_7->f7 = L_8;
		t2585 * L_9 = V_0;
		t2585 * L_10 = (t2585 *)L_9;
		L_10->f4 = ((int32_t)-2);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t280.h"
#include "t280MD.h"
struct t280;
extern "C" void m1926_gshared (t280 * __this, int32_t* p0, int32_t p1, const MethodInfo* method);
#define m1926(__this, p0, p1, method) (( void (*) (t280 *, int32_t*, int32_t, const MethodInfo*))m1926_gshared)(__this, p0, p1, method)
extern "C" void m1926_gshared (t280 * __this, int32_t* p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t* L_0 = p0;
		int32_t L_1 = (*(int32_t*)L_0);
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_4);
		if (!L_5)
		{
			goto IL_0042;
		}
	}

IL_001b:
	{
		int32_t* L_6 = p0;
		int32_t L_7 = (*(int32_t*)L_6);
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		int32_t* L_9 = p0;
		int32_t L_10 = p1;
		int32_t L_11 = L_10;
		t7 * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		bool L_13 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_9), (t7 *)L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}

IL_0042:
	{
		return;
	}

IL_0043:
	{
		int32_t* L_14 = p0;
		int32_t L_15 = p1;
		*L_14 = L_15;
		m1359((t280 *)__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t280;
extern "C" void m1928_gshared (t280 * __this, t74 * p0, t74  p1, const MethodInfo* method);
#define m1928(__this, p0, p1, method) (( void (*) (t280 *, t74 *, t74 , const MethodInfo*))m1928_gshared)(__this, p0, p1, method)
extern "C" void m1928_gshared (t280 * __this, t74 * p0, t74  p1, const MethodInfo* method)
{
	{
		t74 * L_0 = p0;
		t74  L_1 = (*(t74 *)L_0);
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		t74  L_3 = p1;
		t74  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_4);
		if (!L_5)
		{
			goto IL_0042;
		}
	}

IL_001b:
	{
		t74 * L_6 = p0;
		t74  L_7 = (*(t74 *)L_6);
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		t74 * L_9 = p0;
		t74  L_10 = p1;
		t74  L_11 = L_10;
		t7 * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		bool L_13 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_9), (t7 *)L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}

IL_0042:
	{
		return;
	}

IL_0043:
	{
		t74 * L_14 = p0;
		t74  L_15 = p1;
		*L_14 = L_15;
		m1359((t280 *)__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t280;
extern "C" void m1934_gshared (t280 * __this, float* p0, float p1, const MethodInfo* method);
#define m1934(__this, p0, p1, method) (( void (*) (t280 *, float*, float, const MethodInfo*))m1934_gshared)(__this, p0, p1, method)
extern "C" void m1934_gshared (t280 * __this, float* p0, float p1, const MethodInfo* method)
{
	{
		float* L_0 = p0;
		float L_1 = (*(float*)L_0);
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = p1;
		float L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_4);
		if (!L_5)
		{
			goto IL_0042;
		}
	}

IL_001b:
	{
		float* L_6 = p0;
		float L_7 = (*(float*)L_6);
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		float* L_9 = p0;
		float L_10 = p1;
		float L_11 = L_10;
		t7 * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		bool L_13 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_9), (t7 *)L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}

IL_0042:
	{
		return;
	}

IL_0043:
	{
		float* L_14 = p0;
		float L_15 = p1;
		*L_14 = L_15;
		m1359((t280 *)__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t280;
extern "C" void m1936_gshared (t280 * __this, uint8_t* p0, uint8_t p1, const MethodInfo* method);
#define m1936(__this, p0, p1, method) (( void (*) (t280 *, uint8_t*, uint8_t, const MethodInfo*))m1936_gshared)(__this, p0, p1, method)
extern "C" void m1936_gshared (t280 * __this, uint8_t* p0, uint8_t p1, const MethodInfo* method)
{
	{
		uint8_t* L_0 = p0;
		uint8_t L_1 = (*(uint8_t*)L_0);
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_3 = p1;
		uint8_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_4);
		if (!L_5)
		{
			goto IL_0042;
		}
	}

IL_001b:
	{
		uint8_t* L_6 = p0;
		uint8_t L_7 = (*(uint8_t*)L_6);
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		uint8_t* L_9 = p0;
		uint8_t L_10 = p1;
		uint8_t L_11 = L_10;
		t7 * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		bool L_13 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_9), (t7 *)L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}

IL_0042:
	{
		return;
	}

IL_0043:
	{
		uint8_t* L_14 = p0;
		uint8_t L_15 = p1;
		*L_14 = L_15;
		m1359((t280 *)__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t280;
struct t7;
extern "C" void m1940_gshared (t280 * __this, t7 ** p0, t7 * p1, const MethodInfo* method);
#define m1940(__this, p0, p1, method) (( void (*) (t280 *, t7 **, t7 *, const MethodInfo*))m1940_gshared)(__this, p0, p1, method)
extern "C" void m1940_gshared (t280 * __this, t7 ** p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 ** L_0 = p0;
		t7 * L_1 = (*(t7 **)L_0);
		if (((t7 *)L_1))
		{
			goto IL_001b;
		}
	}
	{
		t7 * L_2 = p1;
		t7 * L_3 = L_2;
		if (!((t7 *)L_3))
		{
			goto IL_0042;
		}
	}

IL_001b:
	{
		t7 ** L_4 = p0;
		t7 * L_5 = (*(t7 **)L_4);
		if (!((t7 *)L_5))
		{
			goto IL_0043;
		}
	}
	{
		t7 ** L_6 = p0;
		t7 * L_7 = p1;
		t7 * L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)(*L_6), (t7 *)((t7 *)L_8));
		if (!L_9)
		{
			goto IL_0043;
		}
	}

IL_0042:
	{
		return;
	}

IL_0043:
	{
		t7 ** L_10 = p0;
		t7 * L_11 = p1;
		*L_10 = L_11;
		m1359((t280 *)__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t55;
struct t337;
extern "C" void m18305_gshared (t55 * __this, bool p0, t337 * p1, const MethodInfo* method);
#define m18305(__this, p0, p1, method) (( void (*) (t55 *, bool, t337 *, const MethodInfo*))m18305_gshared)(__this, p0, p1, method)
struct t55;
struct t337;
extern "C" void m1955_gshared (t55 * __this, t337 * p0, const MethodInfo* method);
#define m1955(__this, p0, method) (( void (*) (t55 *, t337 *, const MethodInfo*))m1955_gshared)(__this, p0, method)
extern "C" void m1955_gshared (t55 * __this, t337 * p0, const MethodInfo* method)
{
	{
		t337 * L_0 = p0;
		(( void (*) (t55 *, bool, t337 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)((t55 *)__this, (bool)0, (t337 *)L_0, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t13;
struct t337;
extern "C" void m18306_gshared (t13 * __this, bool p0, t337 * p1, const MethodInfo* method);
#define m18306(__this, p0, p1, method) (( void (*) (t13 *, bool, t337 *, const MethodInfo*))m18306_gshared)(__this, p0, p1, method)
extern "C" void m18305_gshared (t55 * __this, bool p0, t337 * p1, const MethodInfo* method)
{
	{
		t13 * L_0 = m166((t55 *)__this, NULL);
		bool L_1 = p0;
		t337 * L_2 = p1;
		(( void (*) (t13 *, bool, t337 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)((t13 *)L_0, (bool)L_1, (t337 *)L_2, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t347_TI_var;
extern "C" void m18306_gshared (t13 * __this, bool p0, t337 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		bool L_1 = p0;
		t337 * L_2 = p1;
		m2688((t13 *)__this, (t347 *)L_0, (bool)1, (bool)1, (bool)L_1, (bool)0, (t7 *)L_2, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t491.h"
#include "t491MD.h"
struct t491;
struct t7;
extern "C" t7 * m18307_gshared (t7 * __this , const MethodInfo* method);
#define m18307(__this , method) (( t7 * (*) (t7 * , const MethodInfo*))m18307_gshared)(__this , method)
extern TypeInfo* t347_TI_var;
extern "C" t7 * m18307_gshared (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		t491 * L_1 = m2176(NULL, (t347 *)L_0, NULL);
		return ((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" uint8_t m18309_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18309(__this, p0, method) (( uint8_t (*) (t52 *, int32_t, const MethodInfo*))m18309_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" uint8_t m18309_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (uint8_t*)(&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18310_gshared (t52 * __this, uint8_t p0, const MethodInfo* method);
#define m18310(__this, p0, method) (( void (*) (t52 *, uint8_t, const MethodInfo*))m18310_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18310_gshared (t52 * __this, uint8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18311_gshared (t52 * __this, uint8_t p0, const MethodInfo* method);
#define m18311(__this, p0, method) (( bool (*) (t52 *, uint8_t, const MethodInfo*))m18311_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18311_gshared (t52 * __this, uint8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint8_t*)(&V_2));
		uint8_t L_5 = p0;
		uint8_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		uint8_t L_8 = V_2;
		uint8_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint8_t L_11 = V_2;
		uint8_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t536;
extern "C" void m18312_gshared (t52 * __this, t536* p0, int32_t p1, const MethodInfo* method);
#define m18312(__this, p0, p1, method) (( void (*) (t52 *, t536*, int32_t, const MethodInfo*))m18312_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18312_gshared (t52 * __this, t536* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t536* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t536* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t536* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t536* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t536* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18313_gshared (t52 * __this, uint8_t p0, const MethodInfo* method);
#define m18313(__this, p0, method) (( bool (*) (t52 *, uint8_t, const MethodInfo*))m18313_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18313_gshared (t52 * __this, uint8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18314_gshared (t52 * __this, uint8_t p0, const MethodInfo* method);
#define m18314(__this, p0, method) (( int32_t (*) (t52 *, uint8_t, const MethodInfo*))m18314_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18314_gshared (t52 * __this, uint8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint8_t*)(&V_2));
		uint8_t L_5 = p0;
		uint8_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_8 = V_2;
		uint8_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		uint8_t L_14 = p0;
		uint8_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18315_gshared (t52 * __this, int32_t p0, uint8_t p1, const MethodInfo* method);
#define m18315(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint8_t, const MethodInfo*))m18315_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18315_gshared (t52 * __this, int32_t p0, uint8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18317_gshared (t52 * __this, int32_t p0, uint8_t p1, const MethodInfo* method);
#define m18317(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint8_t, const MethodInfo*))m18317_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18317_gshared (t52 * __this, int32_t p0, uint8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		uint8_t L_6 = p1;
		uint8_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (uint8_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2622.h"
#include "t2622MD.h"
struct t52;
struct t3152;
extern "C" t7* m18318_gshared (t52 * __this, const MethodInfo* method);
#define m18318(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18318_gshared)(__this, method)
extern "C" t7* m18318_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2622  L_0 = {0};
		(( void (*) (t2622 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2622  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" t226 m18320_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18320(__this, p0, method) (( t226 (*) (t52 *, int32_t, const MethodInfo*))m18320_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t226 m18320_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t226 V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t226*)(&V_0));
		t226 L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18321_gshared (t52 * __this, t226 p0, const MethodInfo* method);
#define m18321(__this, p0, method) (( void (*) (t52 *, t226, const MethodInfo*))m18321_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18321_gshared (t52 * __this, t226 p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18322_gshared (t52 * __this, t226 p0, const MethodInfo* method);
#define m18322(__this, p0, method) (( bool (*) (t52 *, t226, const MethodInfo*))m18322_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18322_gshared (t52 * __this, t226 p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t226 V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t226*)(&V_2));
		t226 L_5 = p0;
		t226 L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t226 L_8 = V_2;
		t226 L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t226 L_11 = V_2;
		t226 L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t666;
extern "C" void m18323_gshared (t52 * __this, t666* p0, int32_t p1, const MethodInfo* method);
#define m18323(__this, p0, p1, method) (( void (*) (t52 *, t666*, int32_t, const MethodInfo*))m18323_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18323_gshared (t52 * __this, t666* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t666* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t666* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t666* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t666* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t666* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18324_gshared (t52 * __this, t226 p0, const MethodInfo* method);
#define m18324(__this, p0, method) (( bool (*) (t52 *, t226, const MethodInfo*))m18324_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18324_gshared (t52 * __this, t226 p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18325_gshared (t52 * __this, t226 p0, const MethodInfo* method);
#define m18325(__this, p0, method) (( int32_t (*) (t52 *, t226, const MethodInfo*))m18325_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18325_gshared (t52 * __this, t226 p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t226 V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t226*)(&V_2));
		t226 L_5 = p0;
		t226 L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t226 L_8 = V_2;
		t226 L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t226 L_14 = p0;
		t226 L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18326_gshared (t52 * __this, int32_t p0, t226 p1, const MethodInfo* method);
#define m18326(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t226, const MethodInfo*))m18326_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18326_gshared (t52 * __this, int32_t p0, t226 p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18328_gshared (t52 * __this, int32_t p0, t226 p1, const MethodInfo* method);
#define m18328(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t226, const MethodInfo*))m18328_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18328_gshared (t52 * __this, int32_t p0, t226 p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t226 L_6 = p1;
		t226 L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t226*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2635.h"
#include "t2635MD.h"
struct t52;
struct t3241;
extern "C" t7* m18329_gshared (t52 * __this, const MethodInfo* method);
#define m18329(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18329_gshared)(__this, method)
extern "C" t7* m18329_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2635  L_0 = {0};
		(( void (*) (t2635 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2635  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" float m18331_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18331(__this, p0, method) (( float (*) (t52 *, int32_t, const MethodInfo*))m18331_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" float m18331_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (float*)(&V_0));
		float L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18332_gshared (t52 * __this, float p0, const MethodInfo* method);
#define m18332(__this, p0, method) (( void (*) (t52 *, float, const MethodInfo*))m18332_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18332_gshared (t52 * __this, float p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18333_gshared (t52 * __this, float p0, const MethodInfo* method);
#define m18333(__this, p0, method) (( bool (*) (t52 *, float, const MethodInfo*))m18333_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18333_gshared (t52 * __this, float p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (float*)(&V_2));
		float L_5 = p0;
		float L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		float L_8 = V_2;
		float L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		float L_11 = V_2;
		float L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t553;
extern "C" void m18334_gshared (t52 * __this, t553* p0, int32_t p1, const MethodInfo* method);
#define m18334(__this, p0, p1, method) (( void (*) (t52 *, t553*, int32_t, const MethodInfo*))m18334_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18334_gshared (t52 * __this, t553* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t553* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t553* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t553* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t553* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t553* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18335_gshared (t52 * __this, float p0, const MethodInfo* method);
#define m18335(__this, p0, method) (( bool (*) (t52 *, float, const MethodInfo*))m18335_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18335_gshared (t52 * __this, float p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18336_gshared (t52 * __this, float p0, const MethodInfo* method);
#define m18336(__this, p0, method) (( int32_t (*) (t52 *, float, const MethodInfo*))m18336_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18336_gshared (t52 * __this, float p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (float*)(&V_2));
		float L_5 = p0;
		float L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		float L_8 = V_2;
		float L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		float L_14 = p0;
		float L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18337_gshared (t52 * __this, int32_t p0, float p1, const MethodInfo* method);
#define m18337(__this, p0, p1, method) (( void (*) (t52 *, int32_t, float, const MethodInfo*))m18337_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18337_gshared (t52 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18339_gshared (t52 * __this, int32_t p0, float p1, const MethodInfo* method);
#define m18339(__this, p0, p1, method) (( void (*) (t52 *, int32_t, float, const MethodInfo*))m18339_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18339_gshared (t52 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		float L_6 = p1;
		float L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (float*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2642.h"
#include "t2642MD.h"
struct t52;
struct t3242;
extern "C" t7* m18340_gshared (t52 * __this, const MethodInfo* method);
#define m18340(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18340_gshared)(__this, method)
extern "C" t7* m18340_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2642  L_0 = {0};
		(( void (*) (t2642 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2642  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t560.h"
struct t52;
struct t52;
extern "C" t560  m18342_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18342(__this, p0, method) (( t560  (*) (t52 *, int32_t, const MethodInfo*))m18342_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t560  m18342_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t560  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t560 *)(&V_0));
		t560  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18343_gshared (t52 * __this, t560  p0, const MethodInfo* method);
#define m18343(__this, p0, method) (( void (*) (t52 *, t560 , const MethodInfo*))m18343_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18343_gshared (t52 * __this, t560  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18344_gshared (t52 * __this, t560  p0, const MethodInfo* method);
#define m18344(__this, p0, method) (( bool (*) (t52 *, t560 , const MethodInfo*))m18344_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18344_gshared (t52 * __this, t560  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t560  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t560 *)(&V_2));
		t560  L_5 = p0;
		t560  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t560  L_8 = V_2;
		t560  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t560  L_11 = V_2;
		t560  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t667;
extern "C" void m18345_gshared (t52 * __this, t667* p0, int32_t p1, const MethodInfo* method);
#define m18345(__this, p0, p1, method) (( void (*) (t52 *, t667*, int32_t, const MethodInfo*))m18345_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18345_gshared (t52 * __this, t667* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t667* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t667* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t667* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t667* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t667* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18346_gshared (t52 * __this, t560  p0, const MethodInfo* method);
#define m18346(__this, p0, method) (( bool (*) (t52 *, t560 , const MethodInfo*))m18346_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18346_gshared (t52 * __this, t560  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18347_gshared (t52 * __this, t560  p0, const MethodInfo* method);
#define m18347(__this, p0, method) (( int32_t (*) (t52 *, t560 , const MethodInfo*))m18347_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18347_gshared (t52 * __this, t560  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t560  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t560 *)(&V_2));
		t560  L_5 = p0;
		t560  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t560  L_8 = V_2;
		t560  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t560  L_14 = p0;
		t560  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18348_gshared (t52 * __this, int32_t p0, t560  p1, const MethodInfo* method);
#define m18348(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t560 , const MethodInfo*))m18348_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18348_gshared (t52 * __this, int32_t p0, t560  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18350_gshared (t52 * __this, int32_t p0, t560  p1, const MethodInfo* method);
#define m18350(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t560 , const MethodInfo*))m18350_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18350_gshared (t52 * __this, int32_t p0, t560  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t560  L_6 = p1;
		t560  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t560 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2643.h"
#include "t2643MD.h"
struct t52;
struct t3243;
extern "C" t7* m18351_gshared (t52 * __this, const MethodInfo* method);
#define m18351(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18351_gshared)(__this, method)
extern "C" t7* m18351_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2643  L_0 = {0};
		(( void (*) (t2643 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2643  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t668;
extern "C" void m18352_gshared (t7 * __this , t668** p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18352(__this , p0, p1, p2, method) (( void (*) (t7 * , t668**, int32_t, int32_t, const MethodInfo*))m18352_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t668;
extern "C" void m18353_gshared (t7 * __this , t668** p0, int32_t p1, const MethodInfo* method);
#define m18353(__this , p0, p1, method) (( void (*) (t7 * , t668**, int32_t, const MethodInfo*))m18353_gshared)(__this , p0, p1, method)
extern "C" void m18353_gshared (t7 * __this , t668** p0, int32_t p1, const MethodInfo* method)
{
	t668** G_B2_0 = {0};
	t668** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t668** G_B3_1 = {0};
	{
		t668** L_0 = p0;
		t668** L_1 = p0;
		G_B1_0 = L_0;
		if ((*((t668**)L_1)))
		{
			G_B2_0 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		t668** L_2 = p0;
		G_B3_0 = (((int32_t)(((t52 *)(*((t668**)L_2)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		int32_t L_3 = p1;
		(( void (*) (t7 * , t668**, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t668**)G_B3_1, (int32_t)G_B3_0, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t711_TI_var;
extern "C" void m18352_gshared (t7 * __this , t668** p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t668* V_0 = {0};
	{
		int32_t L_0 = p2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		t668** L_2 = p0;
		if ((*((t668**)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t668** L_3 = p0;
		int32_t L_4 = p2;
		*((t7 **)(L_3)) = (t7 *)((t668*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_4));
		return;
	}

IL_0017:
	{
		t668** L_5 = p0;
		int32_t L_6 = p2;
		if ((!(((uint32_t)(((int32_t)(((t52 *)(*((t668**)L_5)))->max_length)))) == ((uint32_t)L_6))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = p2;
		V_0 = (t668*)((t668*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_7));
		t668** L_8 = p0;
		t668* L_9 = V_0;
		int32_t L_10 = p2;
		int32_t L_11 = p1;
		int32_t L_12 = m9829(NULL, (int32_t)L_10, (int32_t)L_11, NULL);
		m4651(NULL, (t52 *)(t52 *)(*((t668**)L_8)), (t52 *)(t52 *)L_9, (int32_t)L_12, NULL);
		t668** L_13 = p0;
		t668* L_14 = V_0;
		*((t7 **)(L_13)) = (t7 *)L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2647.h"
#include "t2647MD.h"
struct t52;
struct t668;
extern "C" int32_t m18354_gshared (t7 * __this , t668* p0, t380  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18354(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t668*, t380 , int32_t, int32_t, const MethodInfo*))m18354_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2647_TI_var;
extern "C" int32_t m18354_gshared (t7 * __this , t668* p0, t380  p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2647_TI_var = il2cpp_codegen_type_info_from_index(5706);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2647 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t668* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = p2;
		t668* L_4 = p0;
		int32_t L_5 = m6350((t52 *)L_4, (int32_t)0, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p2;
		t668* L_7 = p0;
		int32_t L_8 = m6362((t52 *)L_7, (int32_t)0, NULL);
		int32_t L_9 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))) <= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t711 * L_10 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_10, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0030:
	{
		int32_t L_11 = p2;
		int32_t L_12 = p3;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12));
		IL2CPP_RUNTIME_CLASS_INIT(t2647_TI_var);
		t2647 * L_13 = (( t2647 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (t2647 *)L_13;
		int32_t L_14 = p2;
		V_2 = (int32_t)L_14;
		goto IL_0054;
	}

IL_003e:
	{
		t2647 * L_15 = V_1;
		t668* L_16 = p0;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		t380  L_19 = p1;
		bool L_20 = (bool)VirtFuncInvoker2< bool, t380 , t380  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::Equals(T,T) */, (t2647 *)L_15, (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_16, L_18)), (t380 )L_19);
		if (!L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t668;
struct t3244;
extern "C" void m18355_gshared (t7 * __this , t668* p0, t668* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18355(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t668*, t668*, int32_t, int32_t, t7*, const MethodInfo*))m18355_gshared)(__this , p0, p1, p2, p3, p4, method)
struct t52;
struct t668;
struct t3244;
extern "C" void m18356_gshared (t7 * __this , t668* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method);
#define m18356(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t668*, int32_t, int32_t, t7*, const MethodInfo*))m18356_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18356_gshared (t7 * __this , t668* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t668* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t668* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t7* L_5 = p3;
		(( void (*) (t7 * , t668*, t668*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t668*)L_2, (t668*)(t668*)NULL, (int32_t)L_3, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1312;
struct t668;
extern "C" t1312 * m18357_gshared (t7 * __this , t668* p0, const MethodInfo* method);
#define m18357(__this , p0, method) (( t1312 * (*) (t7 * , t668*, const MethodInfo*))m18357_gshared)(__this , p0, method)
struct t52;
struct t668;
struct t3244;
extern "C" void m18358_gshared (t7 * __this , t668* p0, t668* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18358(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t668*, t668*, int32_t, int32_t, t7*, const MethodInfo*))m18358_gshared)(__this , p0, p1, p2, p3, p4, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t1840_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18355_gshared (t7 * __this , t668* p0, t668* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t1312 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t65 * V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t668* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1191, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = p3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		t711 * L_5 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_5, (t47*)(t47*) &_stringLiteral1068, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t668* L_6 = p0;
		int32_t L_7 = p2;
		int32_t L_8 = p3;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))-(int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		t668* L_9 = p1;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = p2;
		t668* L_11 = p1;
		int32_t L_12 = p3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		t396 * L_13 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_13, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0045:
	{
		int32_t L_14 = p3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		t7* L_15 = p4;
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		t668* L_16 = p1;
		if (L_16)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (t1312 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		t668* L_17 = p1;
		t1312 * L_18 = (( t1312 * (*) (t7 * , t668*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t668*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (t1312 *)L_18;
	}

IL_005c:
	{
		t668* L_19 = p0;
		if (!((t1840*)IsInst(L_19, t1840_TI_var)))
		{
			goto IL_0078;
		}
	}
	{
		t668* L_20 = p0;
		t668* L_21 = L_20;
		int32_t L_22 = p2;
		int32_t L_23 = p3;
		t1312 * L_24 = V_0;
		m6414(NULL, (t1840*)((t1840*)IsInst(((t668*)L_21), t1840_TI_var)), (int32_t)L_22, (int32_t)L_23, (t1312 *)L_24, NULL);
		return;
	}

IL_0078:
	{
		t668* L_25 = p0;
		if (!((t1018*)IsInst(L_25, t1018_TI_var)))
		{
			goto IL_0094;
		}
	}
	{
		t668* L_26 = p0;
		t668* L_27 = L_26;
		int32_t L_28 = p2;
		int32_t L_29 = p3;
		t1312 * L_30 = V_0;
		m6415(NULL, (t1018*)((t1018*)IsInst(((t668*)L_27), t1018_TI_var)), (int32_t)L_28, (int32_t)L_29, (t1312 *)L_30, NULL);
		return;
	}

IL_0094:
	{
		t668* L_31 = p0;
		if (!((t221*)IsInst(L_31, t221_TI_var)))
		{
			goto IL_00b0;
		}
	}
	{
		t668* L_32 = p0;
		t668* L_33 = L_32;
		int32_t L_34 = p2;
		int32_t L_35 = p3;
		t1312 * L_36 = V_0;
		m6416(NULL, (t221*)((t221*)IsInst(((t668*)L_33), t221_TI_var)), (int32_t)L_34, (int32_t)L_35, (t1312 *)L_36, NULL);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		int32_t L_37 = p2;
		V_1 = (int32_t)L_37;
		int32_t L_38 = p2;
		int32_t L_39 = p3;
		V_2 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38+(int32_t)L_39))-(int32_t)1));
		t668* L_40 = p0;
		t668* L_41 = p1;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		t7* L_44 = p4;
		(( void (*) (t7 * , t668*, t668*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t668*)L_40, (t668*)L_41, (int32_t)L_42, (int32_t)L_43, (t7*)L_44, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		V_3 = (t65 *)((t65 *)__exception_local);
		t47* L_45 = m6526(NULL, (t47*)(t47*) &_stringLiteral1192, NULL);
		t65 * L_46 = V_3;
		t1098 * L_47 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_47, (t47*)L_45, (t65 *)L_46, NULL);
		il2cpp_codegen_raise_exception(L_47);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t1018_TI_var;
extern TypeInfo* t1312_TI_var;
extern TypeInfo* t1840_TI_var;
extern const MethodInfo* m6409_MI_var;
extern const MethodInfo* m6412_MI_var;
extern const MethodInfo* m6411_MI_var;
extern "C" t1312 * m18357_gshared (t7 * __this , t668* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t1312_TI_var = il2cpp_codegen_type_info_from_index(2733);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		m6409_MI_var = il2cpp_codegen_method_info_from_index(323);
		m6412_MI_var = il2cpp_codegen_method_info_from_index(324);
		m6411_MI_var = il2cpp_codegen_method_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	{
		t668* L_0 = p0;
		if (!((t1018*)IsInst(L_0, t1018_TI_var)))
		{
			goto IL_0015;
		}
	}
	{
		t668* L_1 = p0;
		t226 L_2 = { (void*)m6409_MI_var };
		t1312 * L_3 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_3, (t7 *)(t7 *)L_1, (t226)L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		t668* L_4 = p0;
		if (!((t1840*)IsInst(L_4, t1840_TI_var)))
		{
			goto IL_002a;
		}
	}
	{
		t668* L_5 = p0;
		t226 L_6 = { (void*)m6412_MI_var };
		t1312 * L_7 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_7, (t7 *)(t7 *)L_5, (t226)L_6, NULL);
		return L_7;
	}

IL_002a:
	{
		t668* L_8 = p0;
		t226 L_9 = { (void*)m6411_MI_var };
		t1312 * L_10 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_10, (t7 *)(t7 *)L_8, (t226)L_9, NULL);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3244;
extern "C" int32_t m18359_gshared (t7 * __this , t380  p0, t380  p1, t7* p2, const MethodInfo* method);
#define m18359(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t380 , t380 , t7*, const MethodInfo*))m18359_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t668;
extern "C" void m18360_gshared (t7 * __this , t668* p0, t668* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18360(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t668*, t668*, int32_t, int32_t, const MethodInfo*))m18360_gshared)(__this , p0, p1, p2, p3, method)
extern "C" void m18358_gshared (t7 * __this , t668* p0, t668* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t380  V_3 = {0};
	{
		int32_t L_0 = p2;
		int32_t L_1 = p3;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p2;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p3;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t668* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p3;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0035;
		}
	}
	{
		t668* L_13 = p0;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t380  L_16 = V_3;
		t7* L_17 = p4;
		int32_t L_18 = (( int32_t (*) (t7 * , t380 , t380 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_13, L_15)), (t380 )L_16, (t7*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p2;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		t380  L_22 = V_3;
		t668* L_23 = p0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		t7* L_26 = p4;
		int32_t L_27 = (( int32_t (*) (t7 * , t380 , t380 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t380 )L_22, (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_23, L_25)), (t7*)L_26, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}
	{
		t668* L_30 = p0;
		t668* L_31 = p1;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		(( void (*) (t7 * , t668*, t668*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t668*)L_30, (t668*)L_31, (int32_t)L_32, (int32_t)L_33, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_34 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_35-(int32_t)1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		int32_t L_36 = p2;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_007b;
		}
	}
	{
		t668* L_38 = p0;
		t668* L_39 = p1;
		int32_t L_40 = p2;
		int32_t L_41 = V_1;
		t7* L_42 = p4;
		(( void (*) (t7 * , t668*, t668*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t668*)L_38, (t668*)L_39, (int32_t)L_40, (int32_t)L_41, (t7*)L_42, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = p3;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_008a;
		}
	}
	{
		t668* L_45 = p0;
		t668* L_46 = p1;
		int32_t L_47 = V_0;
		int32_t L_48 = p3;
		t7* L_49 = p4;
		(( void (*) (t7 * , t668*, t668*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t668*)L_45, (t668*)L_46, (int32_t)L_47, (int32_t)L_48, (t7*)L_49, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t91_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" int32_t m18359_gshared (t7 * __this , t380  p0, t380  p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t91_TI_var = il2cpp_codegen_type_info_from_index(98);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t7* L_0 = p2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t7* L_1 = p2;
		t380  L_2 = p0;
		t380  L_3 = p1;
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, t380 , t380  >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (t7*)L_1, (t380 )L_2, (t380 )L_3);
		return L_4;
	}

IL_000c:
	{
		t380  L_5 = p0;
		t380  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_6);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		t380  L_8 = p1;
		t380  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_9);
		if (L_10)
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		t380  L_11 = p1;
		t380  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_12);
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t380  L_14 = p0;
		t380  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_15);
		if (!((t7*)IsInst(L_16, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		t380  L_17 = p0;
		t380  L_18 = L_17;
		t7 * L_19 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_18);
		t380  L_20 = p1;
		int32_t L_21 = (int32_t)InterfaceFuncInvoker1< int32_t, t380  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UICharInfo>::CompareTo(T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (t7*)((t7*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (t380 )L_20);
		return L_21;
	}

IL_004a:
	{
		t380  L_22 = p0;
		t380  L_23 = L_22;
		t7 * L_24 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_23);
		if (!((t7 *)IsInst(L_24, t91_TI_var)))
		{
			goto IL_006e;
		}
	}
	{
		t380  L_25 = p0;
		t380  L_26 = L_25;
		t7 * L_27 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_26);
		t380  L_28 = p1;
		t380  L_29 = L_28;
		t7 * L_30 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_29);
		int32_t L_31 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t91_TI_var, (t7 *)((t7 *)Castclass(L_27, t91_TI_var)), (t7 *)L_30);
		return L_31;
	}

IL_006e:
	{
		t47* L_32 = m6526(NULL, (t47*)(t47*) &_stringLiteral1195, NULL);
		V_0 = (t47*)L_32;
		t47* L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_34 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_35 = m1593(NULL, (t47*)L_33, (t7 *)L_34, NULL);
		t1098 * L_36 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_36, (t47*)L_35, NULL);
		il2cpp_codegen_raise_exception(L_36);
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18360_gshared (t7 * __this , t668* p0, t668* p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	t380  V_0 = {0};
	t380  V_1 = {0};
	{
		t668* L_0 = p0;
		int32_t L_1 = p2;
		int32_t L_2 = L_1;
		V_0 = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_0, L_2));
		t668* L_3 = p0;
		int32_t L_4 = p2;
		t668* L_5 = p0;
		int32_t L_6 = p3;
		int32_t L_7 = L_6;
		*((t380 *)(t380 *)SZArrayLdElema(L_3, L_4)) = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_5, L_7));
		t668* L_8 = p0;
		int32_t L_9 = p3;
		t380  L_10 = V_0;
		*((t380 *)(t380 *)SZArrayLdElema(L_8, L_9)) = (t380 )L_10;
		t668* L_11 = p1;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		t668* L_12 = p1;
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		V_1 = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_12, L_14));
		t668* L_15 = p1;
		int32_t L_16 = p2;
		t668* L_17 = p1;
		int32_t L_18 = p3;
		int32_t L_19 = L_18;
		*((t380 *)(t380 *)SZArrayLdElema(L_15, L_16)) = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_17, L_19));
		t668* L_20 = p1;
		int32_t L_21 = p3;
		t380  L_22 = V_1;
		*((t380 *)(t380 *)SZArrayLdElema(L_20, L_21)) = (t380 )L_22;
	}

IL_003f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2652.h"
struct t52;
struct t668;
struct t2652;
extern "C" void m18361_gshared (t7 * __this , t668* p0, int32_t p1, int32_t p2, t2652 * p3, const MethodInfo* method);
#define m18361(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t668*, int32_t, int32_t, t2652 *, const MethodInfo*))m18361_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t668;
struct t2652;
extern "C" void m18362_gshared (t7 * __this , t668* p0, int32_t p1, t2652 * p2, const MethodInfo* method);
#define m18362(__this , p0, p1, p2, method) (( void (*) (t7 * , t668*, int32_t, t2652 *, const MethodInfo*))m18362_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18362_gshared (t7 * __this , t668* p0, int32_t p1, t2652 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2652 * L_0 = p2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1193, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		t668* L_3 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = p1;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		t668* L_5 = p0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		t2652 * L_8 = p2;
		(( void (*) (t7 * , t668*, int32_t, int32_t, t2652 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t668*)L_5, (int32_t)L_6, (int32_t)L_7, (t2652 *)L_8, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t47* L_9 = m6526(NULL, (t47*)(t47*) &_stringLiteral1194, NULL);
		t65 * L_10 = V_2;
		t1098 * L_11 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_11, (t47*)L_9, (t65 *)L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2652MD.h"
struct t52;
struct t668;
extern "C" void m18363_gshared (t7 * __this , t668* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18363(__this , p0, p1, p2, method) (( void (*) (t7 * , t668*, int32_t, int32_t, const MethodInfo*))m18363_gshared)(__this , p0, p1, p2, method)
extern "C" void m18361_gshared (t7 * __this , t668* p0, int32_t p1, int32_t p2, t2652 * p3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t380  V_3 = {0};
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p1;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p2;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t668* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		t2652 * L_13 = p3;
		t668* L_14 = p0;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		t380  L_17 = V_3;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t380 , t380  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T) */, (t2652 *)L_13, (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_14, L_16)), (t380 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p1;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		t2652 * L_22 = p3;
		t380  L_23 = V_3;
		t668* L_24 = p0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, t380 , t380  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T) */, (t2652 *)L_22, (t380 )L_23, (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		t668* L_30 = p0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (t7 * , t668*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t668*)L_30, (int32_t)L_31, (int32_t)L_32, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = p1;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		t668* L_37 = p0;
		int32_t L_38 = p1;
		int32_t L_39 = V_1;
		t2652 * L_40 = p3;
		(( void (*) (t7 * , t668*, int32_t, int32_t, t2652 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t668*)L_37, (int32_t)L_38, (int32_t)L_39, (t2652 *)L_40, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = p2;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		t668* L_43 = p0;
		int32_t L_44 = V_0;
		int32_t L_45 = p2;
		t2652 * L_46 = p3;
		(( void (*) (t7 * , t668*, int32_t, int32_t, t2652 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t668*)L_43, (int32_t)L_44, (int32_t)L_45, (t2652 *)L_46, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18363_gshared (t7 * __this , t668* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	t380  V_0 = {0};
	{
		t668* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		V_0 = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_0, L_2));
		t668* L_3 = p0;
		int32_t L_4 = p1;
		t668* L_5 = p0;
		int32_t L_6 = p2;
		int32_t L_7 = L_6;
		*((t380 *)(t380 *)SZArrayLdElema(L_3, L_4)) = (t380 )(*(t380 *)(t380 *)SZArrayLdElema(L_5, L_7));
		t668* L_8 = p0;
		int32_t L_9 = p2;
		t380  L_10 = V_0;
		*((t380 *)(t380 *)SZArrayLdElema(L_8, L_9)) = (t380 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t669;
extern "C" void m18364_gshared (t7 * __this , t669** p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18364(__this , p0, p1, p2, method) (( void (*) (t7 * , t669**, int32_t, int32_t, const MethodInfo*))m18364_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t669;
extern "C" void m18365_gshared (t7 * __this , t669** p0, int32_t p1, const MethodInfo* method);
#define m18365(__this , p0, p1, method) (( void (*) (t7 * , t669**, int32_t, const MethodInfo*))m18365_gshared)(__this , p0, p1, method)
extern "C" void m18365_gshared (t7 * __this , t669** p0, int32_t p1, const MethodInfo* method)
{
	t669** G_B2_0 = {0};
	t669** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t669** G_B3_1 = {0};
	{
		t669** L_0 = p0;
		t669** L_1 = p0;
		G_B1_0 = L_0;
		if ((*((t669**)L_1)))
		{
			G_B2_0 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		t669** L_2 = p0;
		G_B3_0 = (((int32_t)(((t52 *)(*((t669**)L_2)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		int32_t L_3 = p1;
		(( void (*) (t7 * , t669**, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t669**)G_B3_1, (int32_t)G_B3_0, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t711_TI_var;
extern "C" void m18364_gshared (t7 * __this , t669** p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t669* V_0 = {0};
	{
		int32_t L_0 = p2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		t669** L_2 = p0;
		if ((*((t669**)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t669** L_3 = p0;
		int32_t L_4 = p2;
		*((t7 **)(L_3)) = (t7 *)((t669*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_4));
		return;
	}

IL_0017:
	{
		t669** L_5 = p0;
		int32_t L_6 = p2;
		if ((!(((uint32_t)(((int32_t)(((t52 *)(*((t669**)L_5)))->max_length)))) == ((uint32_t)L_6))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = p2;
		V_0 = (t669*)((t669*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_7));
		t669** L_8 = p0;
		t669* L_9 = V_0;
		int32_t L_10 = p2;
		int32_t L_11 = p1;
		int32_t L_12 = m9829(NULL, (int32_t)L_10, (int32_t)L_11, NULL);
		m4651(NULL, (t52 *)(t52 *)(*((t669**)L_8)), (t52 *)(t52 *)L_9, (int32_t)L_12, NULL);
		t669** L_13 = p0;
		t669* L_14 = V_0;
		*((t7 **)(L_13)) = (t7 *)L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2656.h"
#include "t2656MD.h"
struct t52;
struct t669;
extern "C" int32_t m18366_gshared (t7 * __this , t669* p0, t379  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18366(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t669*, t379 , int32_t, int32_t, const MethodInfo*))m18366_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2656_TI_var;
extern "C" int32_t m18366_gshared (t7 * __this , t669* p0, t379  p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2656_TI_var = il2cpp_codegen_type_info_from_index(5719);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2656 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t669* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = p2;
		t669* L_4 = p0;
		int32_t L_5 = m6350((t52 *)L_4, (int32_t)0, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p2;
		t669* L_7 = p0;
		int32_t L_8 = m6362((t52 *)L_7, (int32_t)0, NULL);
		int32_t L_9 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))) <= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t711 * L_10 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_10, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0030:
	{
		int32_t L_11 = p2;
		int32_t L_12 = p3;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12));
		IL2CPP_RUNTIME_CLASS_INIT(t2656_TI_var);
		t2656 * L_13 = (( t2656 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (t2656 *)L_13;
		int32_t L_14 = p2;
		V_2 = (int32_t)L_14;
		goto IL_0054;
	}

IL_003e:
	{
		t2656 * L_15 = V_1;
		t669* L_16 = p0;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		t379  L_19 = p1;
		bool L_20 = (bool)VirtFuncInvoker2< bool, t379 , t379  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T) */, (t2656 *)L_15, (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_16, L_18)), (t379 )L_19);
		if (!L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t669;
struct t3245;
extern "C" void m18367_gshared (t7 * __this , t669* p0, t669* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18367(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t669*, t669*, int32_t, int32_t, t7*, const MethodInfo*))m18367_gshared)(__this , p0, p1, p2, p3, p4, method)
struct t52;
struct t669;
struct t3245;
extern "C" void m18368_gshared (t7 * __this , t669* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method);
#define m18368(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t669*, int32_t, int32_t, t7*, const MethodInfo*))m18368_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18368_gshared (t7 * __this , t669* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t669* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t669* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t7* L_5 = p3;
		(( void (*) (t7 * , t669*, t669*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t669*)L_2, (t669*)(t669*)NULL, (int32_t)L_3, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1312;
struct t669;
extern "C" t1312 * m18369_gshared (t7 * __this , t669* p0, const MethodInfo* method);
#define m18369(__this , p0, method) (( t1312 * (*) (t7 * , t669*, const MethodInfo*))m18369_gshared)(__this , p0, method)
struct t52;
struct t669;
struct t3245;
extern "C" void m18370_gshared (t7 * __this , t669* p0, t669* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18370(__this , p0, p1, p2, p3, p4, method) (( void (*) (t7 * , t669*, t669*, int32_t, int32_t, t7*, const MethodInfo*))m18370_gshared)(__this , p0, p1, p2, p3, p4, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t1840_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18367_gshared (t7 * __this , t669* p0, t669* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t1312 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t65 * V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t669* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1191, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = p3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		t711 * L_5 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_5, (t47*)(t47*) &_stringLiteral1068, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		t669* L_6 = p0;
		int32_t L_7 = p2;
		int32_t L_8 = p3;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))-(int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		t669* L_9 = p1;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = p2;
		t669* L_11 = p1;
		int32_t L_12 = p3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		t396 * L_13 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_13, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0045:
	{
		int32_t L_14 = p3;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		t7* L_15 = p4;
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		t669* L_16 = p1;
		if (L_16)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (t1312 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		t669* L_17 = p1;
		t1312 * L_18 = (( t1312 * (*) (t7 * , t669*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t669*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (t1312 *)L_18;
	}

IL_005c:
	{
		t669* L_19 = p0;
		if (!((t1840*)IsInst(L_19, t1840_TI_var)))
		{
			goto IL_0078;
		}
	}
	{
		t669* L_20 = p0;
		t669* L_21 = L_20;
		int32_t L_22 = p2;
		int32_t L_23 = p3;
		t1312 * L_24 = V_0;
		m6414(NULL, (t1840*)((t1840*)IsInst(((t669*)L_21), t1840_TI_var)), (int32_t)L_22, (int32_t)L_23, (t1312 *)L_24, NULL);
		return;
	}

IL_0078:
	{
		t669* L_25 = p0;
		if (!((t1018*)IsInst(L_25, t1018_TI_var)))
		{
			goto IL_0094;
		}
	}
	{
		t669* L_26 = p0;
		t669* L_27 = L_26;
		int32_t L_28 = p2;
		int32_t L_29 = p3;
		t1312 * L_30 = V_0;
		m6415(NULL, (t1018*)((t1018*)IsInst(((t669*)L_27), t1018_TI_var)), (int32_t)L_28, (int32_t)L_29, (t1312 *)L_30, NULL);
		return;
	}

IL_0094:
	{
		t669* L_31 = p0;
		if (!((t221*)IsInst(L_31, t221_TI_var)))
		{
			goto IL_00b0;
		}
	}
	{
		t669* L_32 = p0;
		t669* L_33 = L_32;
		int32_t L_34 = p2;
		int32_t L_35 = p3;
		t1312 * L_36 = V_0;
		m6416(NULL, (t221*)((t221*)IsInst(((t669*)L_33), t221_TI_var)), (int32_t)L_34, (int32_t)L_35, (t1312 *)L_36, NULL);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		int32_t L_37 = p2;
		V_1 = (int32_t)L_37;
		int32_t L_38 = p2;
		int32_t L_39 = p3;
		V_2 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38+(int32_t)L_39))-(int32_t)1));
		t669* L_40 = p0;
		t669* L_41 = p1;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		t7* L_44 = p4;
		(( void (*) (t7 * , t669*, t669*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t669*)L_40, (t669*)L_41, (int32_t)L_42, (int32_t)L_43, (t7*)L_44, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		V_3 = (t65 *)((t65 *)__exception_local);
		t47* L_45 = m6526(NULL, (t47*)(t47*) &_stringLiteral1192, NULL);
		t65 * L_46 = V_3;
		t1098 * L_47 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_47, (t47*)L_45, (t65 *)L_46, NULL);
		il2cpp_codegen_raise_exception(L_47);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t1018_TI_var;
extern TypeInfo* t1312_TI_var;
extern TypeInfo* t1840_TI_var;
extern const MethodInfo* m6409_MI_var;
extern const MethodInfo* m6412_MI_var;
extern const MethodInfo* m6411_MI_var;
extern "C" t1312 * m18369_gshared (t7 * __this , t669* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t1312_TI_var = il2cpp_codegen_type_info_from_index(2733);
		t1840_TI_var = il2cpp_codegen_type_info_from_index(2734);
		m6409_MI_var = il2cpp_codegen_method_info_from_index(323);
		m6412_MI_var = il2cpp_codegen_method_info_from_index(324);
		m6411_MI_var = il2cpp_codegen_method_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	{
		t669* L_0 = p0;
		if (!((t1018*)IsInst(L_0, t1018_TI_var)))
		{
			goto IL_0015;
		}
	}
	{
		t669* L_1 = p0;
		t226 L_2 = { (void*)m6409_MI_var };
		t1312 * L_3 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_3, (t7 *)(t7 *)L_1, (t226)L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		t669* L_4 = p0;
		if (!((t1840*)IsInst(L_4, t1840_TI_var)))
		{
			goto IL_002a;
		}
	}
	{
		t669* L_5 = p0;
		t226 L_6 = { (void*)m6412_MI_var };
		t1312 * L_7 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_7, (t7 *)(t7 *)L_5, (t226)L_6, NULL);
		return L_7;
	}

IL_002a:
	{
		t669* L_8 = p0;
		t226 L_9 = { (void*)m6411_MI_var };
		t1312 * L_10 = (t1312 *)il2cpp_codegen_object_new (t1312_TI_var);
		m6327(L_10, (t7 *)(t7 *)L_8, (t226)L_9, NULL);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3245;
extern "C" int32_t m18371_gshared (t7 * __this , t379  p0, t379  p1, t7* p2, const MethodInfo* method);
#define m18371(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t379 , t379 , t7*, const MethodInfo*))m18371_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t669;
extern "C" void m18372_gshared (t7 * __this , t669* p0, t669* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18372(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t669*, t669*, int32_t, int32_t, const MethodInfo*))m18372_gshared)(__this , p0, p1, p2, p3, method)
extern "C" void m18370_gshared (t7 * __this , t669* p0, t669* p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t379  V_3 = {0};
	{
		int32_t L_0 = p2;
		int32_t L_1 = p3;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p2;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p3;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t669* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p3;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0035;
		}
	}
	{
		t669* L_13 = p0;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t379  L_16 = V_3;
		t7* L_17 = p4;
		int32_t L_18 = (( int32_t (*) (t7 * , t379 , t379 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_13, L_15)), (t379 )L_16, (t7*)L_17, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p2;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		t379  L_22 = V_3;
		t669* L_23 = p0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		t7* L_26 = p4;
		int32_t L_27 = (( int32_t (*) (t7 * , t379 , t379 , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t379 )L_22, (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_23, L_25)), (t7*)L_26, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}
	{
		t669* L_30 = p0;
		t669* L_31 = p1;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		(( void (*) (t7 * , t669*, t669*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t669*)L_30, (t669*)L_31, (int32_t)L_32, (int32_t)L_33, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_34 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_35-(int32_t)1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		int32_t L_36 = p2;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_007b;
		}
	}
	{
		t669* L_38 = p0;
		t669* L_39 = p1;
		int32_t L_40 = p2;
		int32_t L_41 = V_1;
		t7* L_42 = p4;
		(( void (*) (t7 * , t669*, t669*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t669*)L_38, (t669*)L_39, (int32_t)L_40, (int32_t)L_41, (t7*)L_42, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = p3;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_008a;
		}
	}
	{
		t669* L_45 = p0;
		t669* L_46 = p1;
		int32_t L_47 = V_0;
		int32_t L_48 = p3;
		t7* L_49 = p4;
		(( void (*) (t7 * , t669*, t669*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t669*)L_45, (t669*)L_46, (int32_t)L_47, (int32_t)L_48, (t7*)L_49, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t91_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" int32_t m18371_gshared (t7 * __this , t379  p0, t379  p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t91_TI_var = il2cpp_codegen_type_info_from_index(98);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t7* L_0 = p2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t7* L_1 = p2;
		t379  L_2 = p0;
		t379  L_3 = p1;
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, t379 , t379  >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (t7*)L_1, (t379 )L_2, (t379 )L_3);
		return L_4;
	}

IL_000c:
	{
		t379  L_5 = p0;
		t379  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_6);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		t379  L_8 = p1;
		t379  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_9);
		if (L_10)
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		t379  L_11 = p1;
		t379  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_12);
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t379  L_14 = p0;
		t379  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_15);
		if (!((t7*)IsInst(L_16, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		t379  L_17 = p0;
		t379  L_18 = L_17;
		t7 * L_19 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_18);
		t379  L_20 = p1;
		int32_t L_21 = (int32_t)InterfaceFuncInvoker1< int32_t, t379  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (t7*)((t7*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (t379 )L_20);
		return L_21;
	}

IL_004a:
	{
		t379  L_22 = p0;
		t379  L_23 = L_22;
		t7 * L_24 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_23);
		if (!((t7 *)IsInst(L_24, t91_TI_var)))
		{
			goto IL_006e;
		}
	}
	{
		t379  L_25 = p0;
		t379  L_26 = L_25;
		t7 * L_27 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_26);
		t379  L_28 = p1;
		t379  L_29 = L_28;
		t7 * L_30 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_29);
		int32_t L_31 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t91_TI_var, (t7 *)((t7 *)Castclass(L_27, t91_TI_var)), (t7 *)L_30);
		return L_31;
	}

IL_006e:
	{
		t47* L_32 = m6526(NULL, (t47*)(t47*) &_stringLiteral1195, NULL);
		V_0 = (t47*)L_32;
		t47* L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_34 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_35 = m1593(NULL, (t47*)L_33, (t7 *)L_34, NULL);
		t1098 * L_36 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_36, (t47*)L_35, NULL);
		il2cpp_codegen_raise_exception(L_36);
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18372_gshared (t7 * __this , t669* p0, t669* p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	t379  V_0 = {0};
	t379  V_1 = {0};
	{
		t669* L_0 = p0;
		int32_t L_1 = p2;
		int32_t L_2 = L_1;
		V_0 = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_0, L_2));
		t669* L_3 = p0;
		int32_t L_4 = p2;
		t669* L_5 = p0;
		int32_t L_6 = p3;
		int32_t L_7 = L_6;
		*((t379 *)(t379 *)SZArrayLdElema(L_3, L_4)) = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_5, L_7));
		t669* L_8 = p0;
		int32_t L_9 = p3;
		t379  L_10 = V_0;
		*((t379 *)(t379 *)SZArrayLdElema(L_8, L_9)) = (t379 )L_10;
		t669* L_11 = p1;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		t669* L_12 = p1;
		int32_t L_13 = p2;
		int32_t L_14 = L_13;
		V_1 = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_12, L_14));
		t669* L_15 = p1;
		int32_t L_16 = p2;
		t669* L_17 = p1;
		int32_t L_18 = p3;
		int32_t L_19 = L_18;
		*((t379 *)(t379 *)SZArrayLdElema(L_15, L_16)) = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_17, L_19));
		t669* L_20 = p1;
		int32_t L_21 = p3;
		t379  L_22 = V_1;
		*((t379 *)(t379 *)SZArrayLdElema(L_20, L_21)) = (t379 )L_22;
	}

IL_003f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2661.h"
struct t52;
struct t669;
struct t2661;
extern "C" void m18373_gshared (t7 * __this , t669* p0, int32_t p1, int32_t p2, t2661 * p3, const MethodInfo* method);
#define m18373(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t669*, int32_t, int32_t, t2661 *, const MethodInfo*))m18373_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t669;
struct t2661;
extern "C" void m18374_gshared (t7 * __this , t669* p0, int32_t p1, t2661 * p2, const MethodInfo* method);
#define m18374(__this , p0, p1, p2, method) (( void (*) (t7 * , t669*, int32_t, t2661 *, const MethodInfo*))m18374_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m18374_gshared (t7 * __this , t669* p0, int32_t p1, t2661 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2661 * L_0 = p2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1193, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		t669* L_3 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = p1;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		t669* L_5 = p0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		t2661 * L_8 = p2;
		(( void (*) (t7 * , t669*, int32_t, int32_t, t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t669*)L_5, (int32_t)L_6, (int32_t)L_7, (t2661 *)L_8, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t47* L_9 = m6526(NULL, (t47*)(t47*) &_stringLiteral1194, NULL);
		t65 * L_10 = V_2;
		t1098 * L_11 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_11, (t47*)L_9, (t65 *)L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2661MD.h"
struct t52;
struct t669;
extern "C" void m18375_gshared (t7 * __this , t669* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m18375(__this , p0, p1, p2, method) (( void (*) (t7 * , t669*, int32_t, int32_t, const MethodInfo*))m18375_gshared)(__this , p0, p1, p2, method)
extern "C" void m18373_gshared (t7 * __this , t669* p0, int32_t p1, int32_t p2, t2661 * p3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t379  V_3 = {0};
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = p1;
		V_0 = (int32_t)L_2;
		int32_t L_3 = p2;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		t669* L_7 = p0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_3 = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = p2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		t2661 * L_13 = p3;
		t669* L_14 = p0;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		t379  L_17 = V_3;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t379 , t379  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T) */, (t2661 *)L_13, (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_14, L_16)), (t379 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = p1;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		t2661 * L_22 = p3;
		t379  L_23 = V_3;
		t669* L_24 = p0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, t379 , t379  >::Invoke(10 /* System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T) */, (t2661 *)L_22, (t379 )L_23, (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		t669* L_30 = p0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (t7 * , t669*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL, (t669*)L_30, (int32_t)L_31, (int32_t)L_32, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = p1;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		t669* L_37 = p0;
		int32_t L_38 = p1;
		int32_t L_39 = V_1;
		t2661 * L_40 = p3;
		(( void (*) (t7 * , t669*, int32_t, int32_t, t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t669*)L_37, (int32_t)L_38, (int32_t)L_39, (t2661 *)L_40, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = p2;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		t669* L_43 = p0;
		int32_t L_44 = V_0;
		int32_t L_45 = p2;
		t2661 * L_46 = p3;
		(( void (*) (t7 * , t669*, int32_t, int32_t, t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t669*)L_43, (int32_t)L_44, (int32_t)L_45, (t2661 *)L_46, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern "C" void m18375_gshared (t7 * __this , t669* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	t379  V_0 = {0};
	{
		t669* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		V_0 = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_0, L_2));
		t669* L_3 = p0;
		int32_t L_4 = p1;
		t669* L_5 = p0;
		int32_t L_6 = p2;
		int32_t L_7 = L_6;
		*((t379 *)(t379 *)SZArrayLdElema(L_3, L_4)) = (t379 )(*(t379 *)(t379 *)SZArrayLdElema(L_5, L_7));
		t669* L_8 = p0;
		int32_t L_9 = p2;
		t379  L_10 = V_0;
		*((t379 *)(t379 *)SZArrayLdElema(L_8, L_9)) = (t379 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t574.h"
#include "t2361.h"
#include "t700.h"
#include "t337MD.h"
#include "t2361MD.h"
#include "t574MD.h"
#include "t700MD.h"
struct t574;
struct t337;
struct t47;
struct t7;
struct t670;
extern "C" t337 * m3276_gshared (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method);
#define m3276(__this, p0, p1, p2, method) (( t337 * (*) (t574 *, t47*, t7 *, t7*, const MethodInfo*))m3276_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t670_TI_var;
extern TypeInfo* t337_TI_var;
extern TypeInfo* t2361_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern const MethodInfo* m11144_MI_var;
extern const MethodInfo* m11179_MI_var;
extern const MethodInfo* m11178_MI_var;
extern "C" t337 * m3276_gshared (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t337_TI_var = il2cpp_codegen_type_info_from_index(971);
		t2361_TI_var = il2cpp_codegen_type_info_from_index(5179);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		m11144_MI_var = il2cpp_codegen_method_info_from_index(2147484004);
		m11179_MI_var = il2cpp_codegen_method_info_from_index(2147484005);
		m11178_MI_var = il2cpp_codegen_method_info_from_index(2147484006);
		s_Il2CppMethodIntialized = true;
	}
	t337 * V_0 = {0};
	t337 * V_1 = {0};
	t7* V_2 = {0};
	t2361  V_3 = {0};
	t7 * V_4 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t7* L_0 = p2;
		t47* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t47*, t7 ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, t670_TI_var, (t7*)L_0, (t47*)L_1, (t7 **)(&p1));
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		t7 * L_3 = p1;
		V_0 = (t337 *)((t337 *)IsInst(L_3, t337_TI_var));
		t337 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		t337 * L_5 = (t337 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (t337 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (t337 *)L_5;
		t337 * L_6 = V_0;
		t2361  L_7 = m11144((t337 *)L_6, m11144_MI_var);
		V_3 = (t2361 )L_7;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_002d:
		{
			t7 * L_8 = m11179((t2361 *)(&V_3), m11179_MI_var);
			V_2 = (t7*)((t7*)Castclass(L_8, t670_TI_var));
			t7 * L_9 = (( t7 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_4 = (t7 *)L_9;
			t7* L_10 = V_2;
			VirtActionInvoker1< t7 * >::Invoke(4 /* System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object) */, (t574 *)(*(&V_4)), (t7 *)L_10);
			t337 * L_11 = V_1;
			t7 * L_12 = V_4;
			VirtActionInvoker1< t7 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (t337 *)L_11, (t7 *)L_12);
		}

IL_0057:
		{
			bool L_13 = m11178((t2361 *)(&V_3), m11178_MI_var);
			if (L_13)
			{
				goto IL_002d;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		t2361  L_14 = V_3;
		t2361  L_15 = L_14;
		t7 * L_16 = Box(t2361_TI_var, &L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, (t7 *)L_16);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0074:
	{
		t337 * L_17 = V_1;
		return L_17;
	}

IL_0076:
	{
		t47* L_18 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_19 = m207(NULL, (t47*)L_18, (t47*)(t47*) &_stringLiteral233, NULL);
		t700 * L_20 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_20, (t47*)L_19, NULL);
		il2cpp_codegen_raise_exception(L_20);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2665.h"
struct t52;
struct t52;
extern "C" t2665  m18377_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18377(__this, p0, method) (( t2665  (*) (t52 *, int32_t, const MethodInfo*))m18377_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2665  m18377_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2665  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2665 *)(&V_0));
		t2665  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18378_gshared (t52 * __this, t2665  p0, const MethodInfo* method);
#define m18378(__this, p0, method) (( void (*) (t52 *, t2665 , const MethodInfo*))m18378_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18378_gshared (t52 * __this, t2665  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18379_gshared (t52 * __this, t2665  p0, const MethodInfo* method);
#define m18379(__this, p0, method) (( bool (*) (t52 *, t2665 , const MethodInfo*))m18379_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18379_gshared (t52 * __this, t2665  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2665  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2665 *)(&V_2));
		t2665  L_5 = p0;
		t2665  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2665  L_8 = V_2;
		t2665  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2665  L_11 = V_2;
		t2665  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3066;
extern "C" void m18380_gshared (t52 * __this, t3066* p0, int32_t p1, const MethodInfo* method);
#define m18380(__this, p0, p1, method) (( void (*) (t52 *, t3066*, int32_t, const MethodInfo*))m18380_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18380_gshared (t52 * __this, t3066* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3066* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t3066* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t3066* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t3066* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t3066* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18381_gshared (t52 * __this, t2665  p0, const MethodInfo* method);
#define m18381(__this, p0, method) (( bool (*) (t52 *, t2665 , const MethodInfo*))m18381_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18381_gshared (t52 * __this, t2665  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18382_gshared (t52 * __this, t2665  p0, const MethodInfo* method);
#define m18382(__this, p0, method) (( int32_t (*) (t52 *, t2665 , const MethodInfo*))m18382_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18382_gshared (t52 * __this, t2665  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2665  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2665 *)(&V_2));
		t2665  L_5 = p0;
		t2665  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2665  L_8 = V_2;
		t2665  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2665  L_14 = p0;
		t2665  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18383_gshared (t52 * __this, int32_t p0, t2665  p1, const MethodInfo* method);
#define m18383(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2665 , const MethodInfo*))m18383_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18383_gshared (t52 * __this, int32_t p0, t2665  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18385_gshared (t52 * __this, int32_t p0, t2665  p1, const MethodInfo* method);
#define m18385(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2665 , const MethodInfo*))m18385_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18385_gshared (t52 * __this, int32_t p0, t2665  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2665  L_6 = p1;
		t2665  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2665 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2666.h"
#include "t2666MD.h"
struct t52;
struct t3067;
extern "C" t7* m18386_gshared (t52 * __this, const MethodInfo* method);
#define m18386(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18386_gshared)(__this, method)
extern "C" t7* m18386_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2666  L_0 = {0};
		(( void (*) (t2666 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2666  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t712.h"
struct t52;
struct t52;
extern "C" int64_t m18388_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18388(__this, p0, method) (( int64_t (*) (t52 *, int32_t, const MethodInfo*))m18388_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" int64_t m18388_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (int64_t*)(&V_0));
		int64_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18389_gshared (t52 * __this, int64_t p0, const MethodInfo* method);
#define m18389(__this, p0, method) (( void (*) (t52 *, int64_t, const MethodInfo*))m18389_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18389_gshared (t52 * __this, int64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18390_gshared (t52 * __this, int64_t p0, const MethodInfo* method);
#define m18390(__this, p0, method) (( bool (*) (t52 *, int64_t, const MethodInfo*))m18390_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18390_gshared (t52 * __this, int64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int64_t*)(&V_2));
		int64_t L_5 = p0;
		int64_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int64_t L_8 = V_2;
		int64_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int64_t L_11 = V_2;
		int64_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1839;
extern "C" void m18391_gshared (t52 * __this, t1839* p0, int32_t p1, const MethodInfo* method);
#define m18391(__this, p0, p1, method) (( void (*) (t52 *, t1839*, int32_t, const MethodInfo*))m18391_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18391_gshared (t52 * __this, t1839* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1839* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1839* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1839* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1839* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1839* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18392_gshared (t52 * __this, int64_t p0, const MethodInfo* method);
#define m18392(__this, p0, method) (( bool (*) (t52 *, int64_t, const MethodInfo*))m18392_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18392_gshared (t52 * __this, int64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18393_gshared (t52 * __this, int64_t p0, const MethodInfo* method);
#define m18393(__this, p0, method) (( int32_t (*) (t52 *, int64_t, const MethodInfo*))m18393_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18393_gshared (t52 * __this, int64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int64_t*)(&V_2));
		int64_t L_5 = p0;
		int64_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int64_t L_8 = V_2;
		int64_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int64_t L_14 = p0;
		int64_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18394_gshared (t52 * __this, int32_t p0, int64_t p1, const MethodInfo* method);
#define m18394(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int64_t, const MethodInfo*))m18394_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18394_gshared (t52 * __this, int32_t p0, int64_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18396_gshared (t52 * __this, int32_t p0, int64_t p1, const MethodInfo* method);
#define m18396(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int64_t, const MethodInfo*))m18396_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18396_gshared (t52 * __this, int32_t p0, int64_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		int64_t L_6 = p1;
		int64_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (int64_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2667.h"
#include "t2667MD.h"
struct t52;
struct t3068;
extern "C" t7* m18397_gshared (t52 * __this, const MethodInfo* method);
#define m18397(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18397_gshared)(__this, method)
extern "C" t7* m18397_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2667  L_0 = {0};
		(( void (*) (t2667 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2667  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2663.h"
#include "t2671.h"
#include "t2663MD.h"
struct t2663;
struct t69;
struct t2671;
extern "C" void m18398_gshared (t2663 * __this, t69* p0, int32_t p1, t2671 * p2, const MethodInfo* method);
#define m18398(__this, p0, p1, p2, method) (( void (*) (t2663 *, t69*, int32_t, t2671 *, const MethodInfo*))m18398_gshared)(__this, p0, p1, p2, method)
struct t2663;
struct t52;
struct t2671;
extern "C" void m18399_gshared (t2663 * __this, t52 * p0, int32_t p1, t2671 * p2, const MethodInfo* method);
#define m18399(__this, p0, p1, p2, method) (( void (*) (t2663 *, t52 *, int32_t, t2671 *, const MethodInfo*))m18399_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18399_gshared (t2663 * __this, t52 * p0, int32_t p1, t2671 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2671 * L_14 = p2;
			(( void (*) (t2663 *, t69*, int32_t, t2671 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2663 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2671 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2671MD.h"
extern "C" void m18398_gshared (t2663 * __this, t69* p0, int32_t p1, t2671 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2671 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1839* L_10 = (t1839*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t7 * L_13 = (t7 *)VirtFuncInvoker2< t7 *, t7 *, int64_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue) */, (t2671 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		t7 * L_14 = L_13;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->f8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2674.h"
struct t2663;
struct t69;
struct t2674;
extern "C" void m18400_gshared (t2663 * __this, t69* p0, int32_t p1, t2674 * p2, const MethodInfo* method);
#define m18400(__this, p0, p1, p2, method) (( void (*) (t2663 *, t69*, int32_t, t2674 *, const MethodInfo*))m18400_gshared)(__this, p0, p1, p2, method)
struct t2663;
struct t52;
struct t2674;
extern "C" void m18401_gshared (t2663 * __this, t52 * p0, int32_t p1, t2674 * p2, const MethodInfo* method);
#define m18401(__this, p0, p1, p2, method) (( void (*) (t2663 *, t52 *, int32_t, t2674 *, const MethodInfo*))m18401_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18401_gshared (t2663 * __this, t52 * p0, int32_t p1, t2674 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2674 * L_14 = p2;
			(( void (*) (t2663 *, t69*, int32_t, t2674 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2663 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2674 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2674MD.h"
extern "C" void m18400_gshared (t2663 * __this, t69* p0, int32_t p1, t2674 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2674 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1839* L_10 = (t1839*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int64_t L_13 = (int64_t)VirtFuncInvoker2< int64_t, t7 *, int64_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue) */, (t2674 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int64_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2663;
struct t1839;
struct t2674;
extern "C" void m18402_gshared (t2663 * __this, t1839* p0, int32_t p1, t2674 * p2, const MethodInfo* method);
#define m18402(__this, p0, p1, p2, method) (( void (*) (t2663 *, t1839*, int32_t, t2674 *, const MethodInfo*))m18402_gshared)(__this, p0, p1, p2, method)
extern "C" void m18402_gshared (t2663 * __this, t1839* p0, int32_t p1, t2674 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t1839* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2674 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1839* L_10 = (t1839*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int64_t L_13 = (int64_t)VirtFuncInvoker2< int64_t, t7 *, int64_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue) */, (t2674 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int64_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_3, L_5)) = (int64_t)((*(int64_t*)((int64_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2664.h"
#include "t2664MD.h"
struct t2663;
struct t3186;
struct t2664;
extern "C" void m18403_gshared (t2663 * __this, t3186* p0, int32_t p1, t2664 * p2, const MethodInfo* method);
#define m18403(__this, p0, p1, p2, method) (( void (*) (t2663 *, t3186*, int32_t, t2664 *, const MethodInfo*))m18403_gshared)(__this, p0, p1, p2, method)
extern "C" void m18403_gshared (t2663 * __this, t3186* p0, int32_t p1, t2664 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2664 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1839* L_10 = (t1839*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , t7 *, int64_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2664 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2675.h"
struct t2663;
struct t69;
struct t2675;
extern "C" void m18404_gshared (t2663 * __this, t69* p0, int32_t p1, t2675 * p2, const MethodInfo* method);
#define m18404(__this, p0, p1, p2, method) (( void (*) (t2663 *, t69*, int32_t, t2675 *, const MethodInfo*))m18404_gshared)(__this, p0, p1, p2, method)
struct t2663;
struct t52;
struct t2675;
extern "C" void m18405_gshared (t2663 * __this, t52 * p0, int32_t p1, t2675 * p2, const MethodInfo* method);
#define m18405(__this, p0, p1, p2, method) (( void (*) (t2663 *, t52 *, int32_t, t2675 *, const MethodInfo*))m18405_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18405_gshared (t2663 * __this, t52 * p0, int32_t p1, t2675 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2675 * L_14 = p2;
			(( void (*) (t2663 *, t69*, int32_t, t2675 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2663 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2675 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2675MD.h"
extern "C" void m18404_gshared (t2663 * __this, t69* p0, int32_t p1, t2675 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2675 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1839* L_10 = (t1839*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2665  L_13 = (t2665 )VirtFuncInvoker2< t2665 , t7 *, int64_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue) */, (t2675 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		t2665  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2663;
struct t3066;
struct t2675;
extern "C" void m18406_gshared (t2663 * __this, t3066* p0, int32_t p1, t2675 * p2, const MethodInfo* method);
#define m18406(__this, p0, p1, p2, method) (( void (*) (t2663 *, t3066*, int32_t, t2675 *, const MethodInfo*))m18406_gshared)(__this, p0, p1, p2, method)
extern "C" void m18406_gshared (t2663 * __this, t3066* p0, int32_t p1, t2675 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3066* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2675 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1839* L_10 = (t1839*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2665  L_13 = (t2665 )VirtFuncInvoker2< t2665 , t7 *, int64_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue) */, (t2675 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		t2665  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2665 *)(t2665 *)SZArrayLdElema(L_3, L_5)) = (t2665 )((*(t2665 *)((t2665 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2703.h"
struct t52;
struct t52;
extern "C" t2703  m18408_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18408(__this, p0, method) (( t2703  (*) (t52 *, int32_t, const MethodInfo*))m18408_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2703  m18408_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2703  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2703 *)(&V_0));
		t2703  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18409_gshared (t52 * __this, t2703  p0, const MethodInfo* method);
#define m18409(__this, p0, method) (( void (*) (t52 *, t2703 , const MethodInfo*))m18409_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18409_gshared (t52 * __this, t2703  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18410_gshared (t52 * __this, t2703  p0, const MethodInfo* method);
#define m18410(__this, p0, method) (( bool (*) (t52 *, t2703 , const MethodInfo*))m18410_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18410_gshared (t52 * __this, t2703  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2703  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2703 *)(&V_2));
		t2703  L_5 = p0;
		t2703  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2703  L_8 = V_2;
		t2703  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2703  L_11 = V_2;
		t2703  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3084;
extern "C" void m18411_gshared (t52 * __this, t3084* p0, int32_t p1, const MethodInfo* method);
#define m18411(__this, p0, p1, method) (( void (*) (t52 *, t3084*, int32_t, const MethodInfo*))m18411_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18411_gshared (t52 * __this, t3084* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3084* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t3084* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t3084* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t3084* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t3084* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18412_gshared (t52 * __this, t2703  p0, const MethodInfo* method);
#define m18412(__this, p0, method) (( bool (*) (t52 *, t2703 , const MethodInfo*))m18412_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18412_gshared (t52 * __this, t2703  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18413_gshared (t52 * __this, t2703  p0, const MethodInfo* method);
#define m18413(__this, p0, method) (( int32_t (*) (t52 *, t2703 , const MethodInfo*))m18413_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18413_gshared (t52 * __this, t2703  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2703  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2703 *)(&V_2));
		t2703  L_5 = p0;
		t2703  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2703  L_8 = V_2;
		t2703  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2703  L_14 = p0;
		t2703  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18414_gshared (t52 * __this, int32_t p0, t2703  p1, const MethodInfo* method);
#define m18414(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2703 , const MethodInfo*))m18414_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18414_gshared (t52 * __this, int32_t p0, t2703  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18416_gshared (t52 * __this, int32_t p0, t2703  p1, const MethodInfo* method);
#define m18416(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2703 , const MethodInfo*))m18416_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18416_gshared (t52 * __this, int32_t p0, t2703  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2703  L_6 = p1;
		t2703  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2703 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2704.h"
#include "t2704MD.h"
struct t52;
struct t3085;
extern "C" t7* m18417_gshared (t52 * __this, const MethodInfo* method);
#define m18417(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18417_gshared)(__this, method)
extern "C" t7* m18417_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2704  L_0 = {0};
		(( void (*) (t2704 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2704  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t701.h"
struct t52;
struct t52;
extern "C" uint64_t m18419_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18419(__this, p0, method) (( uint64_t (*) (t52 *, int32_t, const MethodInfo*))m18419_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" uint64_t m18419_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18420_gshared (t52 * __this, uint64_t p0, const MethodInfo* method);
#define m18420(__this, p0, method) (( void (*) (t52 *, uint64_t, const MethodInfo*))m18420_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18420_gshared (t52 * __this, uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18421_gshared (t52 * __this, uint64_t p0, const MethodInfo* method);
#define m18421(__this, p0, method) (( bool (*) (t52 *, uint64_t, const MethodInfo*))m18421_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18421_gshared (t52 * __this, uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint64_t*)(&V_2));
		uint64_t L_5 = p0;
		uint64_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		uint64_t L_8 = V_2;
		uint64_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint64_t L_11 = V_2;
		uint64_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1686;
extern "C" void m18422_gshared (t52 * __this, t1686* p0, int32_t p1, const MethodInfo* method);
#define m18422(__this, p0, p1, method) (( void (*) (t52 *, t1686*, int32_t, const MethodInfo*))m18422_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18422_gshared (t52 * __this, t1686* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1686* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1686* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1686* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1686* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1686* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18423_gshared (t52 * __this, uint64_t p0, const MethodInfo* method);
#define m18423(__this, p0, method) (( bool (*) (t52 *, uint64_t, const MethodInfo*))m18423_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18423_gshared (t52 * __this, uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18424_gshared (t52 * __this, uint64_t p0, const MethodInfo* method);
#define m18424(__this, p0, method) (( int32_t (*) (t52 *, uint64_t, const MethodInfo*))m18424_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18424_gshared (t52 * __this, uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint64_t*)(&V_2));
		uint64_t L_5 = p0;
		uint64_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint64_t L_8 = V_2;
		uint64_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		uint64_t L_14 = p0;
		uint64_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18425_gshared (t52 * __this, int32_t p0, uint64_t p1, const MethodInfo* method);
#define m18425(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint64_t, const MethodInfo*))m18425_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18425_gshared (t52 * __this, int32_t p0, uint64_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18427_gshared (t52 * __this, int32_t p0, uint64_t p1, const MethodInfo* method);
#define m18427(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint64_t, const MethodInfo*))m18427_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18427_gshared (t52 * __this, int32_t p0, uint64_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		uint64_t L_6 = p1;
		uint64_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (uint64_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2705.h"
#include "t2705MD.h"
struct t52;
struct t3086;
extern "C" t7* m18428_gshared (t52 * __this, const MethodInfo* method);
#define m18428(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18428_gshared)(__this, method)
extern "C" t7* m18428_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2705  L_0 = {0};
		(( void (*) (t2705 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2705  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2700.h"
#include "t2709.h"
#include "t2700MD.h"
struct t2700;
struct t69;
struct t2709;
extern "C" void m18429_gshared (t2700 * __this, t69* p0, int32_t p1, t2709 * p2, const MethodInfo* method);
#define m18429(__this, p0, p1, p2, method) (( void (*) (t2700 *, t69*, int32_t, t2709 *, const MethodInfo*))m18429_gshared)(__this, p0, p1, p2, method)
struct t2700;
struct t52;
struct t2709;
extern "C" void m18430_gshared (t2700 * __this, t52 * p0, int32_t p1, t2709 * p2, const MethodInfo* method);
#define m18430(__this, p0, p1, p2, method) (( void (*) (t2700 *, t52 *, int32_t, t2709 *, const MethodInfo*))m18430_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18430_gshared (t2700 * __this, t52 * p0, int32_t p1, t2709 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2709 * L_14 = p2;
			(( void (*) (t2700 *, t69*, int32_t, t2709 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2700 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2709 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2709MD.h"
extern "C" void m18429_gshared (t2700 * __this, t69* p0, int32_t p1, t2709 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2709 * L_6 = p2;
		t1686* L_7 = (t1686*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		uint64_t L_13 = (uint64_t)VirtFuncInvoker2< uint64_t, uint64_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue) */, (t2709 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		uint64_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2700;
struct t1686;
struct t2709;
extern "C" void m18431_gshared (t2700 * __this, t1686* p0, int32_t p1, t2709 * p2, const MethodInfo* method);
#define m18431(__this, p0, p1, p2, method) (( void (*) (t2700 *, t1686*, int32_t, t2709 *, const MethodInfo*))m18431_gshared)(__this, p0, p1, p2, method)
extern "C" void m18431_gshared (t2700 * __this, t1686* p0, int32_t p1, t2709 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t1686* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2709 * L_6 = p2;
		t1686* L_7 = (t1686*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		uint64_t L_13 = (uint64_t)VirtFuncInvoker2< uint64_t, uint64_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue) */, (t2709 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		uint64_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_3, L_5)) = (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2712.h"
struct t2700;
struct t69;
struct t2712;
extern "C" void m18432_gshared (t2700 * __this, t69* p0, int32_t p1, t2712 * p2, const MethodInfo* method);
#define m18432(__this, p0, p1, p2, method) (( void (*) (t2700 *, t69*, int32_t, t2712 *, const MethodInfo*))m18432_gshared)(__this, p0, p1, p2, method)
struct t2700;
struct t52;
struct t2712;
extern "C" void m18433_gshared (t2700 * __this, t52 * p0, int32_t p1, t2712 * p2, const MethodInfo* method);
#define m18433(__this, p0, p1, p2, method) (( void (*) (t2700 *, t52 *, int32_t, t2712 *, const MethodInfo*))m18433_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18433_gshared (t2700 * __this, t52 * p0, int32_t p1, t2712 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2712 * L_14 = p2;
			(( void (*) (t2700 *, t69*, int32_t, t2712 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2700 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2712 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2712MD.h"
extern "C" void m18432_gshared (t2700 * __this, t69* p0, int32_t p1, t2712 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2712 * L_6 = p2;
		t1686* L_7 = (t1686*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t7 * L_13 = (t7 *)VirtFuncInvoker2< t7 *, uint64_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue) */, (t2712 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t7 * L_14 = L_13;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->f8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2702.h"
#include "t2702MD.h"
struct t2700;
struct t3186;
struct t2702;
extern "C" void m18434_gshared (t2700 * __this, t3186* p0, int32_t p1, t2702 * p2, const MethodInfo* method);
#define m18434(__this, p0, p1, p2, method) (( void (*) (t2700 *, t3186*, int32_t, t2702 *, const MethodInfo*))m18434_gshared)(__this, p0, p1, p2, method)
extern "C" void m18434_gshared (t2700 * __this, t3186* p0, int32_t p1, t2702 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2702 * L_6 = p2;
		t1686* L_7 = (t1686*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , uint64_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2702 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2713.h"
struct t2700;
struct t69;
struct t2713;
extern "C" void m18435_gshared (t2700 * __this, t69* p0, int32_t p1, t2713 * p2, const MethodInfo* method);
#define m18435(__this, p0, p1, p2, method) (( void (*) (t2700 *, t69*, int32_t, t2713 *, const MethodInfo*))m18435_gshared)(__this, p0, p1, p2, method)
struct t2700;
struct t52;
struct t2713;
extern "C" void m18436_gshared (t2700 * __this, t52 * p0, int32_t p1, t2713 * p2, const MethodInfo* method);
#define m18436(__this, p0, p1, p2, method) (( void (*) (t2700 *, t52 *, int32_t, t2713 *, const MethodInfo*))m18436_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18436_gshared (t2700 * __this, t52 * p0, int32_t p1, t2713 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2713 * L_14 = p2;
			(( void (*) (t2700 *, t69*, int32_t, t2713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2700 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2713 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2713MD.h"
extern "C" void m18435_gshared (t2700 * __this, t69* p0, int32_t p1, t2713 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2713 * L_6 = p2;
		t1686* L_7 = (t1686*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2703  L_13 = (t2703 )VirtFuncInvoker2< t2703 , uint64_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue) */, (t2713 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t2703  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2700;
struct t3084;
struct t2713;
extern "C" void m18437_gshared (t2700 * __this, t3084* p0, int32_t p1, t2713 * p2, const MethodInfo* method);
#define m18437(__this, p0, p1, p2, method) (( void (*) (t2700 *, t3084*, int32_t, t2713 *, const MethodInfo*))m18437_gshared)(__this, p0, p1, p2, method)
extern "C" void m18437_gshared (t2700 * __this, t3084* p0, int32_t p1, t2713 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3084* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2713 * L_6 = p2;
		t1686* L_7 = (t1686*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t69* L_10 = (t69*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2703  L_13 = (t2703 )VirtFuncInvoker2< t2703 , uint64_t, t7 * >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue) */, (t2713 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		t2703  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2703 *)(t2703 *)SZArrayLdElema(L_3, L_5)) = (t2703 )((*(t2703 *)((t2703 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t596.h"
#include "t532.h"
#include "t704.h"
#include "t2722.h"
#include "t2722MD.h"
struct t596;
struct t50;
struct t532;
struct t704;
extern "C" t7 * m3283_gshared (t596 * __this, t532 * p0, t704 * p1, const MethodInfo* method);
#define m3283(__this, p0, p1, method) (( t7 * (*) (t596 *, t532 *, t704 *, const MethodInfo*))m3283_gshared)(__this, p0, p1, method)
extern "C" t7 * m3283_gshared (t596 * __this, t532 * p0, t704 * p1, const MethodInfo* method)
{
	t2722 * V_0 = {0};
	{
		t2722 * L_0 = (t2722 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (t2722 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (t2722 *)L_0;
		t2722 * L_1 = V_0;
		t532 * L_2 = p0;
		L_1->f0 = L_2;
		t2722 * L_3 = V_0;
		t704 * L_4 = p1;
		L_3->f5 = L_4;
		t2722 * L_5 = V_0;
		t532 * L_6 = p0;
		L_5->f8 = L_6;
		t2722 * L_7 = V_0;
		t704 * L_8 = p1;
		L_7->f9 = L_8;
		t2722 * L_9 = V_0;
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2724.h"
struct t52;
struct t52;
extern "C" t2724  m18439_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18439(__this, p0, method) (( t2724  (*) (t52 *, int32_t, const MethodInfo*))m18439_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2724  m18439_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2724  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2724 *)(&V_0));
		t2724  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18440_gshared (t52 * __this, t2724  p0, const MethodInfo* method);
#define m18440(__this, p0, method) (( void (*) (t52 *, t2724 , const MethodInfo*))m18440_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18440_gshared (t52 * __this, t2724  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18441_gshared (t52 * __this, t2724  p0, const MethodInfo* method);
#define m18441(__this, p0, method) (( bool (*) (t52 *, t2724 , const MethodInfo*))m18441_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18441_gshared (t52 * __this, t2724  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2724  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2724 *)(&V_2));
		t2724  L_5 = p0;
		t2724  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2724  L_8 = V_2;
		t2724  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2724  L_11 = V_2;
		t2724  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3122;
extern "C" void m18442_gshared (t52 * __this, t3122* p0, int32_t p1, const MethodInfo* method);
#define m18442(__this, p0, p1, method) (( void (*) (t52 *, t3122*, int32_t, const MethodInfo*))m18442_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18442_gshared (t52 * __this, t3122* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3122* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t3122* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t3122* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t3122* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t3122* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18443_gshared (t52 * __this, t2724  p0, const MethodInfo* method);
#define m18443(__this, p0, method) (( bool (*) (t52 *, t2724 , const MethodInfo*))m18443_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18443_gshared (t52 * __this, t2724  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18444_gshared (t52 * __this, t2724  p0, const MethodInfo* method);
#define m18444(__this, p0, method) (( int32_t (*) (t52 *, t2724 , const MethodInfo*))m18444_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18444_gshared (t52 * __this, t2724  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2724  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2724 *)(&V_2));
		t2724  L_5 = p0;
		t2724  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2724  L_8 = V_2;
		t2724  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2724  L_14 = p0;
		t2724  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18445_gshared (t52 * __this, int32_t p0, t2724  p1, const MethodInfo* method);
#define m18445(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2724 , const MethodInfo*))m18445_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18445_gshared (t52 * __this, int32_t p0, t2724  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18447_gshared (t52 * __this, int32_t p0, t2724  p1, const MethodInfo* method);
#define m18447(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2724 , const MethodInfo*))m18447_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18447_gshared (t52 * __this, int32_t p0, t2724  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2724  L_6 = p1;
		t2724  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2724 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2725.h"
#include "t2725MD.h"
struct t52;
struct t3123;
extern "C" t7* m18448_gshared (t52 * __this, const MethodInfo* method);
#define m18448(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18448_gshared)(__this, method)
extern "C" t7* m18448_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2725  L_0 = {0};
		(( void (*) (t2725 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2725  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2748.h"
#include "t2754.h"
#include "t2748MD.h"
struct t2748;
struct t69;
struct t2754;
extern "C" void m18449_gshared (t2748 * __this, t69* p0, int32_t p1, t2754 * p2, const MethodInfo* method);
#define m18449(__this, p0, p1, p2, method) (( void (*) (t2748 *, t69*, int32_t, t2754 *, const MethodInfo*))m18449_gshared)(__this, p0, p1, p2, method)
struct t2748;
struct t52;
struct t2754;
extern "C" void m18450_gshared (t2748 * __this, t52 * p0, int32_t p1, t2754 * p2, const MethodInfo* method);
#define m18450(__this, p0, p1, p2, method) (( void (*) (t2748 *, t52 *, int32_t, t2754 *, const MethodInfo*))m18450_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18450_gshared (t2748 * __this, t52 * p0, int32_t p1, t2754 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2754 * L_14 = p2;
			(( void (*) (t2748 *, t69*, int32_t, t2754 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2748 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2754 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2754MD.h"
extern "C" void m18449_gshared (t2748 * __this, t69* p0, int32_t p1, t2754 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2754 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t2749* L_10 = (t2749*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t7 * L_13 = (t7 *)VirtFuncInvoker2< t7 *, t7 *, t2494  >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue) */, (t2754 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_10, L_12)));
		t7 * L_14 = L_13;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->f8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2757.h"
struct t2748;
struct t69;
struct t2757;
extern "C" void m18451_gshared (t2748 * __this, t69* p0, int32_t p1, t2757 * p2, const MethodInfo* method);
#define m18451(__this, p0, p1, p2, method) (( void (*) (t2748 *, t69*, int32_t, t2757 *, const MethodInfo*))m18451_gshared)(__this, p0, p1, p2, method)
struct t2748;
struct t52;
struct t2757;
extern "C" void m18452_gshared (t2748 * __this, t52 * p0, int32_t p1, t2757 * p2, const MethodInfo* method);
#define m18452(__this, p0, p1, p2, method) (( void (*) (t2748 *, t52 *, int32_t, t2757 *, const MethodInfo*))m18452_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18452_gshared (t2748 * __this, t52 * p0, int32_t p1, t2757 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2757 * L_14 = p2;
			(( void (*) (t2748 *, t69*, int32_t, t2757 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2748 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2757 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2757MD.h"
extern "C" void m18451_gshared (t2748 * __this, t69* p0, int32_t p1, t2757 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2757 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t2749* L_10 = (t2749*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2494  L_13 = (t2494 )VirtFuncInvoker2< t2494 , t7 *, t2494  >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue) */, (t2757 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_10, L_12)));
		t2494  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2748;
struct t2749;
struct t2757;
extern "C" void m18453_gshared (t2748 * __this, t2749* p0, int32_t p1, t2757 * p2, const MethodInfo* method);
#define m18453(__this, p0, p1, p2, method) (( void (*) (t2748 *, t2749*, int32_t, t2757 *, const MethodInfo*))m18453_gshared)(__this, p0, p1, p2, method)
extern "C" void m18453_gshared (t2748 * __this, t2749* p0, int32_t p1, t2757 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t2749* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2757 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t2749* L_10 = (t2749*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2494  L_13 = (t2494 )VirtFuncInvoker2< t2494 , t7 *, t2494  >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue) */, (t2757 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_10, L_12)));
		t2494  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2494 *)(t2494 *)SZArrayLdElema(L_3, L_5)) = (t2494 )((*(t2494 *)((t2494 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2750.h"
#include "t2750MD.h"
struct t2748;
struct t3186;
struct t2750;
extern "C" void m18454_gshared (t2748 * __this, t3186* p0, int32_t p1, t2750 * p2, const MethodInfo* method);
#define m18454(__this, p0, p1, p2, method) (( void (*) (t2748 *, t3186*, int32_t, t2750 *, const MethodInfo*))m18454_gshared)(__this, p0, p1, p2, method)
extern "C" void m18454_gshared (t2748 * __this, t3186* p0, int32_t p1, t2750 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2750 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t2749* L_10 = (t2749*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , t7 *, t2494  >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2750 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2758.h"
struct t2748;
struct t69;
struct t2758;
extern "C" void m18455_gshared (t2748 * __this, t69* p0, int32_t p1, t2758 * p2, const MethodInfo* method);
#define m18455(__this, p0, p1, p2, method) (( void (*) (t2748 *, t69*, int32_t, t2758 *, const MethodInfo*))m18455_gshared)(__this, p0, p1, p2, method)
struct t2748;
struct t52;
struct t2758;
extern "C" void m18456_gshared (t2748 * __this, t52 * p0, int32_t p1, t2758 * p2, const MethodInfo* method);
#define m18456(__this, p0, p1, p2, method) (( void (*) (t2748 *, t52 *, int32_t, t2758 *, const MethodInfo*))m18456_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18456_gshared (t2748 * __this, t52 * p0, int32_t p1, t2758 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2758 * L_14 = p2;
			(( void (*) (t2748 *, t69*, int32_t, t2758 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2748 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2758 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2758MD.h"
extern "C" void m18455_gshared (t2748 * __this, t69* p0, int32_t p1, t2758 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2758 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t2749* L_10 = (t2749*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2724  L_13 = (t2724 )VirtFuncInvoker2< t2724 , t7 *, t2494  >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue) */, (t2758 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_10, L_12)));
		t2724  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2748;
struct t3122;
struct t2758;
extern "C" void m18457_gshared (t2748 * __this, t3122* p0, int32_t p1, t2758 * p2, const MethodInfo* method);
#define m18457(__this, p0, p1, p2, method) (( void (*) (t2748 *, t3122*, int32_t, t2758 *, const MethodInfo*))m18457_gshared)(__this, p0, p1, p2, method)
extern "C" void m18457_gshared (t2748 * __this, t3122* p0, int32_t p1, t2758 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3122* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2758 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t2749* L_10 = (t2749*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2724  L_13 = (t2724 )VirtFuncInvoker2< t2724 , t7 *, t2494  >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue) */, (t2758 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_10, L_12)));
		t2724  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2724 *)(t2724 *)SZArrayLdElema(L_3, L_5)) = (t2724 )((*(t2724 *)((t2724 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t743.h"
struct t52;
struct t52;
extern "C" t743  m18459_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18459(__this, p0, method) (( t743  (*) (t52 *, int32_t, const MethodInfo*))m18459_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t743  m18459_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t743  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t743 *)(&V_0));
		t743  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18460_gshared (t52 * __this, t743  p0, const MethodInfo* method);
#define m18460(__this, p0, method) (( void (*) (t52 *, t743 , const MethodInfo*))m18460_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18460_gshared (t52 * __this, t743  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18461_gshared (t52 * __this, t743  p0, const MethodInfo* method);
#define m18461(__this, p0, method) (( bool (*) (t52 *, t743 , const MethodInfo*))m18461_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18461_gshared (t52 * __this, t743  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t743  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t743 *)(&V_2));
		t743  L_5 = p0;
		t743  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t743  L_8 = V_2;
		t743  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t743  L_11 = V_2;
		t743  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t744;
extern "C" void m18462_gshared (t52 * __this, t744* p0, int32_t p1, const MethodInfo* method);
#define m18462(__this, p0, p1, method) (( void (*) (t52 *, t744*, int32_t, const MethodInfo*))m18462_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18462_gshared (t52 * __this, t744* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t744* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t744* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t744* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t744* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t744* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18463_gshared (t52 * __this, t743  p0, const MethodInfo* method);
#define m18463(__this, p0, method) (( bool (*) (t52 *, t743 , const MethodInfo*))m18463_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18463_gshared (t52 * __this, t743  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18464_gshared (t52 * __this, t743  p0, const MethodInfo* method);
#define m18464(__this, p0, method) (( int32_t (*) (t52 *, t743 , const MethodInfo*))m18464_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18464_gshared (t52 * __this, t743  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t743  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t743 *)(&V_2));
		t743  L_5 = p0;
		t743  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t743  L_8 = V_2;
		t743  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t743  L_14 = p0;
		t743  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18465_gshared (t52 * __this, int32_t p0, t743  p1, const MethodInfo* method);
#define m18465(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t743 , const MethodInfo*))m18465_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18465_gshared (t52 * __this, int32_t p0, t743  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18467_gshared (t52 * __this, int32_t p0, t743  p1, const MethodInfo* method);
#define m18467(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t743 , const MethodInfo*))m18467_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18467_gshared (t52 * __this, int32_t p0, t743  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t743  L_6 = p1;
		t743  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t743 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2779.h"
#include "t2779MD.h"
struct t52;
struct t3246;
extern "C" t7* m18468_gshared (t52 * __this, const MethodInfo* method);
#define m18468(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18468_gshared)(__this, method)
extern "C" t7* m18468_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2779  L_0 = {0};
		(( void (*) (t2779 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2779  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t633.h"
struct t52;
struct t52;
extern "C" t633  m18470_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18470(__this, p0, method) (( t633  (*) (t52 *, int32_t, const MethodInfo*))m18470_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t633  m18470_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t633  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t633 *)(&V_0));
		t633  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18471_gshared (t52 * __this, t633  p0, const MethodInfo* method);
#define m18471(__this, p0, method) (( void (*) (t52 *, t633 , const MethodInfo*))m18471_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18471_gshared (t52 * __this, t633  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18472_gshared (t52 * __this, t633  p0, const MethodInfo* method);
#define m18472(__this, p0, method) (( bool (*) (t52 *, t633 , const MethodInfo*))m18472_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18472_gshared (t52 * __this, t633  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t633  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t633 *)(&V_2));
		t633  L_5 = p0;
		t633  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t633  L_8 = V_2;
		t633  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t633  L_11 = V_2;
		t633  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t635;
extern "C" void m18473_gshared (t52 * __this, t635* p0, int32_t p1, const MethodInfo* method);
#define m18473(__this, p0, p1, method) (( void (*) (t52 *, t635*, int32_t, const MethodInfo*))m18473_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18473_gshared (t52 * __this, t635* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t635* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t635* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t635* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t635* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t635* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18474_gshared (t52 * __this, t633  p0, const MethodInfo* method);
#define m18474(__this, p0, method) (( bool (*) (t52 *, t633 , const MethodInfo*))m18474_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18474_gshared (t52 * __this, t633  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18475_gshared (t52 * __this, t633  p0, const MethodInfo* method);
#define m18475(__this, p0, method) (( int32_t (*) (t52 *, t633 , const MethodInfo*))m18475_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18475_gshared (t52 * __this, t633  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t633  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t633 *)(&V_2));
		t633  L_5 = p0;
		t633  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t633  L_8 = V_2;
		t633  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t633  L_14 = p0;
		t633  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18476_gshared (t52 * __this, int32_t p0, t633  p1, const MethodInfo* method);
#define m18476(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t633 , const MethodInfo*))m18476_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18476_gshared (t52 * __this, int32_t p0, t633  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18478_gshared (t52 * __this, int32_t p0, t633  p1, const MethodInfo* method);
#define m18478(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t633 , const MethodInfo*))m18478_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18478_gshared (t52 * __this, int32_t p0, t633  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t633  L_6 = p1;
		t633  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t633 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2780.h"
#include "t2780MD.h"
struct t52;
struct t3247;
extern "C" t7* m18479_gshared (t52 * __this, const MethodInfo* method);
#define m18479(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18479_gshared)(__this, method)
extern "C" t7* m18479_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2780  L_0 = {0};
		(( void (*) (t2780 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2780  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t647;
struct t7;
extern "C" void m18480_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18480(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18480_gshared)(__this , p0, method)
extern TypeInfo* t69_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18480_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t7 * L_1 = p0;
		if (((t7 *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		t69* L_2 = (t69*)((t69*)SZArrayNew(t69_TI_var, 2));
		t7 * L_3 = p0;
		t347 * L_4 = m1520((t7 *)L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_4;
		t69* L_5 = (t69*)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_5, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_5, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*)(t47*) &_stringLiteral356, (t69*)L_5, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_8, (t47*)L_7, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2818.h"
struct t52;
struct t52;
extern "C" t2818  m18482_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18482(__this, p0, method) (( t2818  (*) (t52 *, int32_t, const MethodInfo*))m18482_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2818  m18482_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2818  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2818 *)(&V_0));
		t2818  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18483_gshared (t52 * __this, t2818  p0, const MethodInfo* method);
#define m18483(__this, p0, method) (( void (*) (t52 *, t2818 , const MethodInfo*))m18483_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18483_gshared (t52 * __this, t2818  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18484_gshared (t52 * __this, t2818  p0, const MethodInfo* method);
#define m18484(__this, p0, method) (( bool (*) (t52 *, t2818 , const MethodInfo*))m18484_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18484_gshared (t52 * __this, t2818  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2818  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2818 *)(&V_2));
		t2818  L_5 = p0;
		t2818  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2818  L_8 = V_2;
		t2818  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2818  L_11 = V_2;
		t2818  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3150;
extern "C" void m18485_gshared (t52 * __this, t3150* p0, int32_t p1, const MethodInfo* method);
#define m18485(__this, p0, p1, method) (( void (*) (t52 *, t3150*, int32_t, const MethodInfo*))m18485_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18485_gshared (t52 * __this, t3150* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3150* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t3150* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t3150* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t3150* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t3150* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18486_gshared (t52 * __this, t2818  p0, const MethodInfo* method);
#define m18486(__this, p0, method) (( bool (*) (t52 *, t2818 , const MethodInfo*))m18486_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18486_gshared (t52 * __this, t2818  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18487_gshared (t52 * __this, t2818  p0, const MethodInfo* method);
#define m18487(__this, p0, method) (( int32_t (*) (t52 *, t2818 , const MethodInfo*))m18487_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18487_gshared (t52 * __this, t2818  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2818  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2818 *)(&V_2));
		t2818  L_5 = p0;
		t2818  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2818  L_8 = V_2;
		t2818  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2818  L_14 = p0;
		t2818  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18488_gshared (t52 * __this, int32_t p0, t2818  p1, const MethodInfo* method);
#define m18488(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2818 , const MethodInfo*))m18488_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18488_gshared (t52 * __this, int32_t p0, t2818  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18490_gshared (t52 * __this, int32_t p0, t2818  p1, const MethodInfo* method);
#define m18490(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2818 , const MethodInfo*))m18490_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18490_gshared (t52 * __this, int32_t p0, t2818  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2818  L_6 = p1;
		t2818  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2818 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2819.h"
#include "t2819MD.h"
struct t52;
struct t3151;
extern "C" t7* m18491_gshared (t52 * __this, const MethodInfo* method);
#define m18491(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18491_gshared)(__this, method)
extern "C" t7* m18491_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2819  L_0 = {0};
		(( void (*) (t2819 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2819  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2816.h"
#include "t2823.h"
#include "t2816MD.h"
struct t2816;
struct t69;
struct t2823;
extern "C" void m18492_gshared (t2816 * __this, t69* p0, int32_t p1, t2823 * p2, const MethodInfo* method);
#define m18492(__this, p0, p1, p2, method) (( void (*) (t2816 *, t69*, int32_t, t2823 *, const MethodInfo*))m18492_gshared)(__this, p0, p1, p2, method)
struct t2816;
struct t52;
struct t2823;
extern "C" void m18493_gshared (t2816 * __this, t52 * p0, int32_t p1, t2823 * p2, const MethodInfo* method);
#define m18493(__this, p0, p1, p2, method) (( void (*) (t2816 *, t52 *, int32_t, t2823 *, const MethodInfo*))m18493_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18493_gshared (t2816 * __this, t52 * p0, int32_t p1, t2823 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2823 * L_14 = p2;
			(( void (*) (t2816 *, t69*, int32_t, t2823 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2816 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2823 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2823MD.h"
extern "C" void m18492_gshared (t2816 * __this, t69* p0, int32_t p1, t2823 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2823 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t536* L_10 = (t536*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t7 * L_13 = (t7 *)VirtFuncInvoker2< t7 *, t7 *, uint8_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue) */, (t2823 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12)));
		t7 * L_14 = L_13;
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(((t7 *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->f8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2826.h"
struct t2816;
struct t69;
struct t2826;
extern "C" void m18494_gshared (t2816 * __this, t69* p0, int32_t p1, t2826 * p2, const MethodInfo* method);
#define m18494(__this, p0, p1, p2, method) (( void (*) (t2816 *, t69*, int32_t, t2826 *, const MethodInfo*))m18494_gshared)(__this, p0, p1, p2, method)
struct t2816;
struct t52;
struct t2826;
extern "C" void m18495_gshared (t2816 * __this, t52 * p0, int32_t p1, t2826 * p2, const MethodInfo* method);
#define m18495(__this, p0, p1, p2, method) (( void (*) (t2816 *, t52 *, int32_t, t2826 *, const MethodInfo*))m18495_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18495_gshared (t2816 * __this, t52 * p0, int32_t p1, t2826 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2826 * L_14 = p2;
			(( void (*) (t2816 *, t69*, int32_t, t2826 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2816 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2826 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2826MD.h"
extern "C" void m18494_gshared (t2816 * __this, t69* p0, int32_t p1, t2826 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2826 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t536* L_10 = (t536*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		uint8_t L_13 = (uint8_t)VirtFuncInvoker2< uint8_t, t7 *, uint8_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue) */, (t2826 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12)));
		uint8_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2816;
struct t536;
struct t2826;
extern "C" void m18496_gshared (t2816 * __this, t536* p0, int32_t p1, t2826 * p2, const MethodInfo* method);
#define m18496(__this, p0, p1, p2, method) (( void (*) (t2816 *, t536*, int32_t, t2826 *, const MethodInfo*))m18496_gshared)(__this, p0, p1, p2, method)
extern "C" void m18496_gshared (t2816 * __this, t536* p0, int32_t p1, t2826 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t536* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2826 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t536* L_10 = (t536*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		uint8_t L_13 = (uint8_t)VirtFuncInvoker2< uint8_t, t7 *, uint8_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue) */, (t2826 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12)));
		uint8_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5)) = (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2817.h"
#include "t2817MD.h"
struct t2816;
struct t3186;
struct t2817;
extern "C" void m18497_gshared (t2816 * __this, t3186* p0, int32_t p1, t2817 * p2, const MethodInfo* method);
#define m18497(__this, p0, p1, p2, method) (( void (*) (t2816 *, t3186*, int32_t, t2817 *, const MethodInfo*))m18497_gshared)(__this, p0, p1, p2, method)
extern "C" void m18497_gshared (t2816 * __this, t3186* p0, int32_t p1, t2817 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2817 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t536* L_10 = (t536*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , t7 *, uint8_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2817 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2827.h"
struct t2816;
struct t69;
struct t2827;
extern "C" void m18498_gshared (t2816 * __this, t69* p0, int32_t p1, t2827 * p2, const MethodInfo* method);
#define m18498(__this, p0, p1, p2, method) (( void (*) (t2816 *, t69*, int32_t, t2827 *, const MethodInfo*))m18498_gshared)(__this, p0, p1, p2, method)
struct t2816;
struct t52;
struct t2827;
extern "C" void m18499_gshared (t2816 * __this, t52 * p0, int32_t p1, t2827 * p2, const MethodInfo* method);
#define m18499(__this, p0, p1, p2, method) (( void (*) (t2816 *, t52 *, int32_t, t2827 *, const MethodInfo*))m18499_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18499_gshared (t2816 * __this, t52 * p0, int32_t p1, t2827 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2827 * L_14 = p2;
			(( void (*) (t2816 *, t69*, int32_t, t2827 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t2816 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2827 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2827MD.h"
extern "C" void m18498_gshared (t2816 * __this, t69* p0, int32_t p1, t2827 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2827 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t536* L_10 = (t536*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2818  L_13 = (t2818 )VirtFuncInvoker2< t2818 , t7 *, uint8_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue) */, (t2827 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12)));
		t2818  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t2816;
struct t3150;
struct t2827;
extern "C" void m18500_gshared (t2816 * __this, t3150* p0, int32_t p1, t2827 * p2, const MethodInfo* method);
#define m18500(__this, p0, p1, p2, method) (( void (*) (t2816 *, t3150*, int32_t, t2827 *, const MethodInfo*))m18500_gshared)(__this, p0, p1, p2, method)
extern "C" void m18500_gshared (t2816 * __this, t3150* p0, int32_t p1, t2827 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3150* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2827 * L_6 = p2;
		t69* L_7 = (t69*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t536* L_10 = (t536*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2818  L_13 = (t2818 )VirtFuncInvoker2< t2818 , t7 *, uint8_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue) */, (t2827 *)L_6, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_7, L_9)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12)));
		t2818  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2818 *)(t2818 *)SZArrayLdElema(L_3, L_5)) = (t2818 )((*(t2818 *)((t2818 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t983.h"
struct t52;
struct t52;
extern "C" t983  m18502_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18502(__this, p0, method) (( t983  (*) (t52 *, int32_t, const MethodInfo*))m18502_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t983  m18502_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t983  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t983 *)(&V_0));
		t983  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18503_gshared (t52 * __this, t983  p0, const MethodInfo* method);
#define m18503(__this, p0, method) (( void (*) (t52 *, t983 , const MethodInfo*))m18503_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18503_gshared (t52 * __this, t983  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18504_gshared (t52 * __this, t983  p0, const MethodInfo* method);
#define m18504(__this, p0, method) (( bool (*) (t52 *, t983 , const MethodInfo*))m18504_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18504_gshared (t52 * __this, t983  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t983  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t983 *)(&V_2));
		t983  L_5 = p0;
		t983  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t983  L_8 = V_2;
		t983  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t983  L_11 = V_2;
		t983  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System_ArrayTypes.h"
struct t52;
struct t982;
extern "C" void m18505_gshared (t52 * __this, t982* p0, int32_t p1, const MethodInfo* method);
#define m18505(__this, p0, p1, method) (( void (*) (t52 *, t982*, int32_t, const MethodInfo*))m18505_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18505_gshared (t52 * __this, t982* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t982* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t982* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t982* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t982* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t982* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18506_gshared (t52 * __this, t983  p0, const MethodInfo* method);
#define m18506(__this, p0, method) (( bool (*) (t52 *, t983 , const MethodInfo*))m18506_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18506_gshared (t52 * __this, t983  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18507_gshared (t52 * __this, t983  p0, const MethodInfo* method);
#define m18507(__this, p0, method) (( int32_t (*) (t52 *, t983 , const MethodInfo*))m18507_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18507_gshared (t52 * __this, t983  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t983  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t983 *)(&V_2));
		t983  L_5 = p0;
		t983  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t983  L_8 = V_2;
		t983  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t983  L_14 = p0;
		t983  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18508_gshared (t52 * __this, int32_t p0, t983  p1, const MethodInfo* method);
#define m18508(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t983 , const MethodInfo*))m18508_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18508_gshared (t52 * __this, int32_t p0, t983  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18510_gshared (t52 * __this, int32_t p0, t983  p1, const MethodInfo* method);
#define m18510(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t983 , const MethodInfo*))m18510_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18510_gshared (t52 * __this, int32_t p0, t983  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t983  L_6 = p1;
		t983  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t983 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2837.h"
#include "t2837MD.h"
struct t52;
struct t3248;
extern "C" t7* m18511_gshared (t52 * __this, const MethodInfo* method);
#define m18511(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18511_gshared)(__this, method)
extern "C" t7* m18511_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2837  L_0 = {0};
		(( void (*) (t2837 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2837  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2841.h"
struct t52;
struct t52;
extern "C" t2841  m18513_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18513(__this, p0, method) (( t2841  (*) (t52 *, int32_t, const MethodInfo*))m18513_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t2841  m18513_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t2841  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t2841 *)(&V_0));
		t2841  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18514_gshared (t52 * __this, t2841  p0, const MethodInfo* method);
#define m18514(__this, p0, method) (( void (*) (t52 *, t2841 , const MethodInfo*))m18514_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18514_gshared (t52 * __this, t2841  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18515_gshared (t52 * __this, t2841  p0, const MethodInfo* method);
#define m18515(__this, p0, method) (( bool (*) (t52 *, t2841 , const MethodInfo*))m18515_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18515_gshared (t52 * __this, t2841  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2841  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2841 *)(&V_2));
		t2841  L_5 = p0;
		t2841  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t2841  L_8 = V_2;
		t2841  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t2841  L_11 = V_2;
		t2841  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t3157;
extern "C" void m18516_gshared (t52 * __this, t3157* p0, int32_t p1, const MethodInfo* method);
#define m18516(__this, p0, p1, method) (( void (*) (t52 *, t3157*, int32_t, const MethodInfo*))m18516_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18516_gshared (t52 * __this, t3157* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3157* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t3157* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t3157* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t3157* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t3157* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18517_gshared (t52 * __this, t2841  p0, const MethodInfo* method);
#define m18517(__this, p0, method) (( bool (*) (t52 *, t2841 , const MethodInfo*))m18517_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18517_gshared (t52 * __this, t2841  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18518_gshared (t52 * __this, t2841  p0, const MethodInfo* method);
#define m18518(__this, p0, method) (( int32_t (*) (t52 *, t2841 , const MethodInfo*))m18518_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18518_gshared (t52 * __this, t2841  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2841  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t2841 *)(&V_2));
		t2841  L_5 = p0;
		t2841  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t2841  L_8 = V_2;
		t2841  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t2841  L_14 = p0;
		t2841  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18519_gshared (t52 * __this, int32_t p0, t2841  p1, const MethodInfo* method);
#define m18519(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2841 , const MethodInfo*))m18519_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18519_gshared (t52 * __this, int32_t p0, t2841  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18521_gshared (t52 * __this, int32_t p0, t2841  p1, const MethodInfo* method);
#define m18521(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t2841 , const MethodInfo*))m18521_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18521_gshared (t52 * __this, int32_t p0, t2841  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t2841  L_6 = p1;
		t2841  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t2841 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2842.h"
#include "t2842MD.h"
struct t52;
struct t3158;
extern "C" t7* m18522_gshared (t52 * __this, const MethodInfo* method);
#define m18522(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18522_gshared)(__this, method)
extern "C" t7* m18522_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2842  L_0 = {0};
		(( void (*) (t2842 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2842  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1019.h"
#include "t2846.h"
#include "t1019MD.h"
struct t1019;
struct t69;
struct t2846;
extern "C" void m18523_gshared (t1019 * __this, t69* p0, int32_t p1, t2846 * p2, const MethodInfo* method);
#define m18523(__this, p0, p1, p2, method) (( void (*) (t1019 *, t69*, int32_t, t2846 *, const MethodInfo*))m18523_gshared)(__this, p0, p1, p2, method)
struct t1019;
struct t52;
struct t2846;
extern "C" void m18524_gshared (t1019 * __this, t52 * p0, int32_t p1, t2846 * p2, const MethodInfo* method);
#define m18524(__this, p0, p1, p2, method) (( void (*) (t1019 *, t52 *, int32_t, t2846 *, const MethodInfo*))m18524_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18524_gshared (t1019 * __this, t52 * p0, int32_t p1, t2846 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2846 * L_14 = p2;
			(( void (*) (t1019 *, t69*, int32_t, t2846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t1019 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2846 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2846MD.h"
extern "C" void m18523_gshared (t1019 * __this, t69* p0, int32_t p1, t2846 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2846 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::Invoke(TKey,TValue) */, (t2846 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t1019;
struct t1018;
struct t2846;
extern "C" void m18525_gshared (t1019 * __this, t1018* p0, int32_t p1, t2846 * p2, const MethodInfo* method);
#define m18525(__this, p0, p1, p2, method) (( void (*) (t1019 *, t1018*, int32_t, t2846 *, const MethodInfo*))m18525_gshared)(__this, p0, p1, p2, method)
extern "C" void m18525_gshared (t1019 * __this, t1018* p0, int32_t p1, t2846 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t1018* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2846 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::Invoke(TKey,TValue) */, (t2846 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5)) = (int32_t)((*(int32_t*)((int32_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2840.h"
#include "t2840MD.h"
struct t1019;
struct t3186;
struct t2840;
extern "C" void m18526_gshared (t1019 * __this, t3186* p0, int32_t p1, t2840 * p2, const MethodInfo* method);
#define m18526(__this, p0, p1, p2, method) (( void (*) (t1019 *, t3186*, int32_t, t2840 *, const MethodInfo*))m18526_gshared)(__this, p0, p1, p2, method)
extern "C" void m18526_gshared (t1019 * __this, t3186* p0, int32_t p1, t2840 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3186* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2840 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t1083  L_13 = (t1083 )VirtFuncInvoker2< t1083 , int32_t, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (t2840 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		t1083  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t1083 *)(t1083 *)SZArrayLdElema(L_3, L_5)) = (t1083 )((*(t1083 *)((t1083 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2849.h"
struct t1019;
struct t69;
struct t2849;
extern "C" void m18527_gshared (t1019 * __this, t69* p0, int32_t p1, t2849 * p2, const MethodInfo* method);
#define m18527(__this, p0, p1, p2, method) (( void (*) (t1019 *, t69*, int32_t, t2849 *, const MethodInfo*))m18527_gshared)(__this, p0, p1, p2, method)
struct t1019;
struct t52;
struct t2849;
extern "C" void m18528_gshared (t1019 * __this, t52 * p0, int32_t p1, t2849 * p2, const MethodInfo* method);
#define m18528(__this, p0, p1, p2, method) (( void (*) (t1019 *, t52 *, int32_t, t2849 *, const MethodInfo*))m18528_gshared)(__this, p0, p1, p2, method)
extern TypeInfo* t347_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m18528_gshared (t1019 * __this, t52 * p0, int32_t p1, t2849 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t65 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), NULL);
		V_0 = (t347 *)L_0;
		t52 * L_1 = p0;
		t347 * L_2 = m1520((t7 *)L_1, NULL);
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, (t347 *)L_2);
		V_1 = (t347 *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			t347 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			t347 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, (t347 *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			t347 * L_8 = V_1;
			t347 * L_9 = V_0;
			bool L_10 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_8, (t347 *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			t65 * L_11 = (t65 *)il2cpp_codegen_object_new (t65_TI_var);
			m5597(L_11, NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			t52 * L_12 = p0;
			int32_t L_13 = p1;
			t2849 * L_14 = p2;
			(( void (*) (t1019 *, t69*, int32_t, t2849 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((t1019 *)__this, (t69*)((t69*)Castclass(L_12, t69_TI_var)), (int32_t)L_13, (t2849 *)L_14, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (t65 *)((t65 *)__exception_local);
		t65 * L_15 = V_2;
		t396 * L_16 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9402(L_16, (t47*)(t47*) &_stringLiteral1329, (t47*)(t47*) &_stringLiteral292, (t65 *)L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2849MD.h"
extern "C" void m18527_gshared (t1019 * __this, t69* p0, int32_t p1, t2849 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t69* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2849 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2841  L_13 = (t2841 )VirtFuncInvoker2< t2841 , int32_t, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(TKey,TValue) */, (t2849 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		t2841  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, L_5)) = (t7 *)((t7 *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t1019;
struct t3157;
struct t2849;
extern "C" void m18529_gshared (t1019 * __this, t3157* p0, int32_t p1, t2849 * p2, const MethodInfo* method);
#define m18529(__this, p0, p1, p2, method) (( void (*) (t1019 *, t3157*, int32_t, t2849 *, const MethodInfo*))m18529_gshared)(__this, p0, p1, p2, method)
extern "C" void m18529_gshared (t1019 * __this, t3157* p0, int32_t p1, t2849 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		t2432* L_0 = (t2432*)(__this->f5);
		int32_t L_1 = V_0;
		int32_t L_2 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_0, L_1))->f0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		t3157* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = (int32_t)L_4;
		p1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		t2849 * L_6 = p2;
		t1018* L_7 = (t1018*)(__this->f6);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		t1018* L_10 = (t1018*)(__this->f7);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		t2841  L_13 = (t2841 )VirtFuncInvoker2< t2841 , int32_t, int32_t >::Invoke(10 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(TKey,TValue) */, (t2849 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		t2841  L_14 = L_13;
		t7 * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		*((t2841 *)(t2841 *)SZArrayLdElema(L_3, L_5)) = (t2841 )((*(t2841 *)((t2841 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->f8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1018;
struct t2327;
extern "C" int32_t m18530_gshared (t7 * __this , t1018* p0, int32_t p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method);
#define m18530(__this , p0, p1, p2, p3, p4, method) (( int32_t (*) (t7 * , t1018*, int32_t, int32_t, int32_t, t7*, const MethodInfo*))m18530_gshared)(__this , p0, p1, p2, p3, p4, method)
struct t52;
struct t1018;
extern "C" int32_t m4639_gshared (t7 * __this , t1018* p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m4639(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t1018*, int32_t, int32_t, int32_t, const MethodInfo*))m4639_gshared)(__this , p0, p1, p2, p3, method)
extern "C" int32_t m4639_gshared (t7 * __this , t1018* p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	{
		t1018* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = (( int32_t (*) (t7 * , t1018*, int32_t, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t1018*)L_0, (int32_t)L_1, (int32_t)L_2, (int32_t)L_3, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2851.h"
#include "t2851MD.h"
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t2851_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" int32_t m18530_gshared (t7 * __this , t1018* p0, int32_t p1, int32_t p2, int32_t p3, t7* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t2851_TI_var = il2cpp_codegen_type_info_from_index(6079);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t65 * V_4 = {0};
	int32_t V_5 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1018* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1179, NULL);
		t711 * L_4 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_4, (t47*)(t47*) &_stringLiteral363, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p2;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		t47* L_6 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_7 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_7, (t47*)(t47*) &_stringLiteral1068, (t47*)L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int32_t L_8 = p1;
		t1018* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0058;
		}
	}
	{
		t47* L_11 = m6526(NULL, (t47*)(t47*) &_stringLiteral1180, NULL);
		t396 * L_12 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_12, (t47*)L_11, NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		t7* L_13 = p4;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2851_TI_var);
		t2851 * L_14 = (( t2851 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		p4 = (t7*)L_14;
	}

IL_0065:
	{
		int32_t L_15 = p1;
		V_0 = (int32_t)L_15;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17))-(int32_t)1));
		V_2 = (int32_t)0;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0071:
		{
			int32_t L_18 = V_0;
			int32_t L_19 = V_1;
			int32_t L_20 = V_0;
			V_3 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)L_20))/(int32_t)2))));
			t7* L_21 = p4;
			int32_t L_22 = p3;
			t1018* L_23 = p0;
			int32_t L_24 = V_3;
			int32_t L_25 = L_24;
			int32_t L_26 = (int32_t)InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (t7*)L_21, (int32_t)L_22, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)));
			V_2 = (int32_t)L_26;
			int32_t L_27 = V_2;
			if (L_27)
			{
				goto IL_0091;
			}
		}

IL_008c:
		{
			int32_t L_28 = V_3;
			V_5 = (int32_t)L_28;
			goto IL_00be;
		}

IL_0091:
		{
			int32_t L_29 = V_2;
			if ((((int32_t)L_29) >= ((int32_t)0)))
			{
				goto IL_009b;
			}
		}

IL_0095:
		{
			int32_t L_30 = V_3;
			V_1 = (int32_t)((int32_t)((int32_t)L_30-(int32_t)1));
			goto IL_009f;
		}

IL_009b:
		{
			int32_t L_31 = V_3;
			V_0 = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		}

IL_009f:
		{
			int32_t L_32 = V_0;
			int32_t L_33 = V_1;
			if ((((int32_t)L_32) <= ((int32_t)L_33)))
			{
				goto IL_0071;
			}
		}

IL_00a3:
		{
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_00a5;
		throw e;
	}

CATCH_00a5:
	{ // begin catch(System.Exception)
		V_4 = (t65 *)((t65 *)__exception_local);
		t47* L_34 = m6526(NULL, (t47*)(t47*) &_stringLiteral1182, NULL);
		t65 * L_35 = V_4;
		t1098 * L_36 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_36, (t47*)L_34, (t65 *)L_35, NULL);
		il2cpp_codegen_raise_exception(L_36);
		goto IL_00bb;
	} // end catch (depth: 1)

IL_00bb:
	{
		int32_t L_37 = V_0;
		return ((~L_37));
	}

IL_00be:
	{
		int32_t L_38 = V_5;
		return L_38;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1035.h"
struct t52;
struct t52;
extern "C" t1035  m18532_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18532(__this, p0, method) (( t1035  (*) (t52 *, int32_t, const MethodInfo*))m18532_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t1035  m18532_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t1035  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t1035 *)(&V_0));
		t1035  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18533_gshared (t52 * __this, t1035  p0, const MethodInfo* method);
#define m18533(__this, p0, method) (( void (*) (t52 *, t1035 , const MethodInfo*))m18533_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18533_gshared (t52 * __this, t1035  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18534_gshared (t52 * __this, t1035  p0, const MethodInfo* method);
#define m18534(__this, p0, method) (( bool (*) (t52 *, t1035 , const MethodInfo*))m18534_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18534_gshared (t52 * __this, t1035  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1035  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1035 *)(&V_2));
		t1035  L_5 = p0;
		t1035  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t1035  L_8 = V_2;
		t1035  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1035  L_11 = V_2;
		t1035  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1041;
extern "C" void m18535_gshared (t52 * __this, t1041* p0, int32_t p1, const MethodInfo* method);
#define m18535(__this, p0, p1, method) (( void (*) (t52 *, t1041*, int32_t, const MethodInfo*))m18535_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18535_gshared (t52 * __this, t1041* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1041* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1041* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1041* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1041* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1041* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18536_gshared (t52 * __this, t1035  p0, const MethodInfo* method);
#define m18536(__this, p0, method) (( bool (*) (t52 *, t1035 , const MethodInfo*))m18536_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18536_gshared (t52 * __this, t1035  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18537_gshared (t52 * __this, t1035  p0, const MethodInfo* method);
#define m18537(__this, p0, method) (( int32_t (*) (t52 *, t1035 , const MethodInfo*))m18537_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18537_gshared (t52 * __this, t1035  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1035  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1035 *)(&V_2));
		t1035  L_5 = p0;
		t1035  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t1035  L_8 = V_2;
		t1035  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t1035  L_14 = p0;
		t1035  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18538_gshared (t52 * __this, int32_t p0, t1035  p1, const MethodInfo* method);
#define m18538(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1035 , const MethodInfo*))m18538_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18538_gshared (t52 * __this, int32_t p0, t1035  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18540_gshared (t52 * __this, int32_t p0, t1035  p1, const MethodInfo* method);
#define m18540(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1035 , const MethodInfo*))m18540_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18540_gshared (t52 * __this, int32_t p0, t1035  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t1035  L_6 = p1;
		t1035  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t1035 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2854.h"
#include "t2854MD.h"
struct t52;
struct t3249;
extern "C" t7* m18541_gshared (t52 * __this, const MethodInfo* method);
#define m18541(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18541_gshared)(__this, method)
extern "C" t7* m18541_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2854  L_0 = {0};
		(( void (*) (t2854 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2854  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1071.h"
struct t52;
struct t52;
extern "C" t1071  m18543_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18543(__this, p0, method) (( t1071  (*) (t52 *, int32_t, const MethodInfo*))m18543_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t1071  m18543_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t1071  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t1071 *)(&V_0));
		t1071  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18544_gshared (t52 * __this, t1071  p0, const MethodInfo* method);
#define m18544(__this, p0, method) (( void (*) (t52 *, t1071 , const MethodInfo*))m18544_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18544_gshared (t52 * __this, t1071  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18545_gshared (t52 * __this, t1071  p0, const MethodInfo* method);
#define m18545(__this, p0, method) (( bool (*) (t52 *, t1071 , const MethodInfo*))m18545_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18545_gshared (t52 * __this, t1071  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1071  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1071 *)(&V_2));
		t1071  L_5 = p0;
		t1071  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t1071  L_8 = V_2;
		t1071  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1071  L_11 = V_2;
		t1071  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1072;
extern "C" void m18546_gshared (t52 * __this, t1072* p0, int32_t p1, const MethodInfo* method);
#define m18546(__this, p0, p1, method) (( void (*) (t52 *, t1072*, int32_t, const MethodInfo*))m18546_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18546_gshared (t52 * __this, t1072* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1072* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1072* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1072* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1072* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1072* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18547_gshared (t52 * __this, t1071  p0, const MethodInfo* method);
#define m18547(__this, p0, method) (( bool (*) (t52 *, t1071 , const MethodInfo*))m18547_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18547_gshared (t52 * __this, t1071  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18548_gshared (t52 * __this, t1071  p0, const MethodInfo* method);
#define m18548(__this, p0, method) (( int32_t (*) (t52 *, t1071 , const MethodInfo*))m18548_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18548_gshared (t52 * __this, t1071  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1071  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1071 *)(&V_2));
		t1071  L_5 = p0;
		t1071  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t1071  L_8 = V_2;
		t1071  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t1071  L_14 = p0;
		t1071  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18549_gshared (t52 * __this, int32_t p0, t1071  p1, const MethodInfo* method);
#define m18549(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1071 , const MethodInfo*))m18549_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18549_gshared (t52 * __this, int32_t p0, t1071  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18551_gshared (t52 * __this, int32_t p0, t1071  p1, const MethodInfo* method);
#define m18551(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1071 , const MethodInfo*))m18551_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18551_gshared (t52 * __this, int32_t p0, t1071  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t1071  L_6 = p1;
		t1071  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t1071 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2855.h"
#include "t2855MD.h"
struct t52;
struct t3250;
extern "C" t7* m18552_gshared (t52 * __this, const MethodInfo* method);
#define m18552(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18552_gshared)(__this, method)
extern "C" t7* m18552_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2855  L_0 = {0};
		(( void (*) (t2855 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2855  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t57.h"
struct t52;
struct t52;
extern "C" uint32_t m18554_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18554(__this, p0, method) (( uint32_t (*) (t52 *, int32_t, const MethodInfo*))m18554_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" uint32_t m18554_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (uint32_t*)(&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18555_gshared (t52 * __this, uint32_t p0, const MethodInfo* method);
#define m18555(__this, p0, method) (( void (*) (t52 *, uint32_t, const MethodInfo*))m18555_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18555_gshared (t52 * __this, uint32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18556_gshared (t52 * __this, uint32_t p0, const MethodInfo* method);
#define m18556(__this, p0, method) (( bool (*) (t52 *, uint32_t, const MethodInfo*))m18556_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18556_gshared (t52 * __this, uint32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint32_t*)(&V_2));
		uint32_t L_5 = p0;
		uint32_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_8 = V_2;
		uint32_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint32_t L_11 = V_2;
		uint32_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1160;
extern "C" void m18557_gshared (t52 * __this, t1160* p0, int32_t p1, const MethodInfo* method);
#define m18557(__this, p0, p1, method) (( void (*) (t52 *, t1160*, int32_t, const MethodInfo*))m18557_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18557_gshared (t52 * __this, t1160* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1160* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1160* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1160* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1160* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1160* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18558_gshared (t52 * __this, uint32_t p0, const MethodInfo* method);
#define m18558(__this, p0, method) (( bool (*) (t52 *, uint32_t, const MethodInfo*))m18558_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18558_gshared (t52 * __this, uint32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18559_gshared (t52 * __this, uint32_t p0, const MethodInfo* method);
#define m18559(__this, p0, method) (( int32_t (*) (t52 *, uint32_t, const MethodInfo*))m18559_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18559_gshared (t52 * __this, uint32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (uint32_t*)(&V_2));
		uint32_t L_5 = p0;
		uint32_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint32_t L_8 = V_2;
		uint32_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		uint32_t L_14 = p0;
		uint32_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18560_gshared (t52 * __this, int32_t p0, uint32_t p1, const MethodInfo* method);
#define m18560(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint32_t, const MethodInfo*))m18560_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18560_gshared (t52 * __this, int32_t p0, uint32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18562_gshared (t52 * __this, int32_t p0, uint32_t p1, const MethodInfo* method);
#define m18562(__this, p0, p1, method) (( void (*) (t52 *, int32_t, uint32_t, const MethodInfo*))m18562_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18562_gshared (t52 * __this, int32_t p0, uint32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		uint32_t L_6 = p1;
		uint32_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (uint32_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2856.h"
#include "t2856MD.h"
struct t52;
struct t3251;
extern "C" t7* m18563_gshared (t52 * __this, const MethodInfo* method);
#define m18563(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18563_gshared)(__this, method)
extern "C" t7* m18563_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2856  L_0 = {0};
		(( void (*) (t2856 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2856  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t459.h"
struct t52;
struct t52;
extern "C" int16_t m18565_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18565(__this, p0, method) (( int16_t (*) (t52 *, int32_t, const MethodInfo*))m18565_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" int16_t m18565_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	int16_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (int16_t*)(&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18566_gshared (t52 * __this, int16_t p0, const MethodInfo* method);
#define m18566(__this, p0, method) (( void (*) (t52 *, int16_t, const MethodInfo*))m18566_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18566_gshared (t52 * __this, int16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18567_gshared (t52 * __this, int16_t p0, const MethodInfo* method);
#define m18567(__this, p0, method) (( bool (*) (t52 *, int16_t, const MethodInfo*))m18567_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18567_gshared (t52 * __this, int16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int16_t*)(&V_2));
		int16_t L_5 = p0;
		int16_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int16_t L_8 = V_2;
		int16_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int16_t L_11 = V_2;
		int16_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1854;
extern "C" void m18568_gshared (t52 * __this, t1854* p0, int32_t p1, const MethodInfo* method);
#define m18568(__this, p0, p1, method) (( void (*) (t52 *, t1854*, int32_t, const MethodInfo*))m18568_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18568_gshared (t52 * __this, t1854* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1854* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1854* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1854* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1854* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1854* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18569_gshared (t52 * __this, int16_t p0, const MethodInfo* method);
#define m18569(__this, p0, method) (( bool (*) (t52 *, int16_t, const MethodInfo*))m18569_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18569_gshared (t52 * __this, int16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18570_gshared (t52 * __this, int16_t p0, const MethodInfo* method);
#define m18570(__this, p0, method) (( int32_t (*) (t52 *, int16_t, const MethodInfo*))m18570_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18570_gshared (t52 * __this, int16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int16_t*)(&V_2));
		int16_t L_5 = p0;
		int16_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int16_t L_8 = V_2;
		int16_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int16_t L_14 = p0;
		int16_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18571_gshared (t52 * __this, int32_t p0, int16_t p1, const MethodInfo* method);
#define m18571(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int16_t, const MethodInfo*))m18571_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18571_gshared (t52 * __this, int32_t p0, int16_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18573_gshared (t52 * __this, int32_t p0, int16_t p1, const MethodInfo* method);
#define m18573(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int16_t, const MethodInfo*))m18573_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18573_gshared (t52 * __this, int32_t p0, int16_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		int16_t L_6 = p1;
		int16_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (int16_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2861.h"
#include "t2861MD.h"
struct t52;
struct t3252;
extern "C" t7* m18574_gshared (t52 * __this, const MethodInfo* method);
#define m18574(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18574_gshared)(__this, method)
extern "C" t7* m18574_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2861  L_0 = {0};
		(( void (*) (t2861 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2861  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t86.h"
struct t52;
struct t52;
extern "C" int8_t m18576_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18576(__this, p0, method) (( int8_t (*) (t52 *, int32_t, const MethodInfo*))m18576_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" int8_t m18576_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (int8_t*)(&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18577_gshared (t52 * __this, int8_t p0, const MethodInfo* method);
#define m18577(__this, p0, method) (( void (*) (t52 *, int8_t, const MethodInfo*))m18577_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18577_gshared (t52 * __this, int8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18578_gshared (t52 * __this, int8_t p0, const MethodInfo* method);
#define m18578(__this, p0, method) (( bool (*) (t52 *, int8_t, const MethodInfo*))m18578_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18578_gshared (t52 * __this, int8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int8_t*)(&V_2));
		int8_t L_5 = p0;
		int8_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int8_t L_8 = V_2;
		int8_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int8_t L_11 = V_2;
		int8_t L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1729;
extern "C" void m18579_gshared (t52 * __this, t1729* p0, int32_t p1, const MethodInfo* method);
#define m18579(__this, p0, p1, method) (( void (*) (t52 *, t1729*, int32_t, const MethodInfo*))m18579_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18579_gshared (t52 * __this, t1729* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1729* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1729* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1729* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1729* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1729* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18580_gshared (t52 * __this, int8_t p0, const MethodInfo* method);
#define m18580(__this, p0, method) (( bool (*) (t52 *, int8_t, const MethodInfo*))m18580_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18580_gshared (t52 * __this, int8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18581_gshared (t52 * __this, int8_t p0, const MethodInfo* method);
#define m18581(__this, p0, method) (( int32_t (*) (t52 *, int8_t, const MethodInfo*))m18581_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18581_gshared (t52 * __this, int8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (int8_t*)(&V_2));
		int8_t L_5 = p0;
		int8_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int8_t L_8 = V_2;
		int8_t L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int8_t L_14 = p0;
		int8_t L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18582_gshared (t52 * __this, int32_t p0, int8_t p1, const MethodInfo* method);
#define m18582(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int8_t, const MethodInfo*))m18582_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18582_gshared (t52 * __this, int32_t p0, int8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18584_gshared (t52 * __this, int32_t p0, int8_t p1, const MethodInfo* method);
#define m18584(__this, p0, p1, method) (( void (*) (t52 *, int32_t, int8_t, const MethodInfo*))m18584_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18584_gshared (t52 * __this, int32_t p0, int8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		int8_t L_6 = p1;
		int8_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (int8_t*)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2862.h"
#include "t2862MD.h"
struct t52;
struct t3253;
extern "C" t7* m18585_gshared (t52 * __this, const MethodInfo* method);
#define m18585(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18585_gshared)(__this, method)
extern "C" t7* m18585_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2862  L_0 = {0};
		(( void (*) (t2862 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2862  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
extern "C" void m18586_gshared (t7 * __this , t69* p0, const MethodInfo* method);
#define m18586(__this , p0, method) (( void (*) (t7 * , t69*, const MethodInfo*))m18586_gshared)(__this , p0, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18586_gshared (t7 * __this , t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p0;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t69*)(t69*)NULL, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
extern "C" void m18587_gshared (t7 * __this , t69* p0, t69* p1, const MethodInfo* method);
#define m18587(__this , p0, p1, method) (( void (*) (t7 * , t69*, t69*, const MethodInfo*))m18587_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18587_gshared (t7 * __this , t69* p0, t69* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1191, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p1;
		t69* L_4 = p0;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t69*)L_3, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_4)->max_length))), (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t3230;
extern "C" void m18588_gshared (t7 * __this , t69* p0, t7* p1, const MethodInfo* method);
#define m18588(__this , p0, p1, method) (( void (*) (t7 * , t69*, t7*, const MethodInfo*))m18588_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18588_gshared (t7 * __this , t69* p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p0;
		t7* L_4 = p1;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t69*)(t69*)NULL, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t7*)L_4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t3230;
extern "C" void m18589_gshared (t7 * __this , t69* p0, t69* p1, t7* p2, const MethodInfo* method);
#define m18589(__this , p0, p1, p2, method) (( void (*) (t7 * , t69*, t69*, t7*, const MethodInfo*))m18589_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18589_gshared (t7 * __this , t69* p0, t69* p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1191, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p1;
		t69* L_4 = p0;
		t7* L_5 = p2;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t69*)L_3, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_4)->max_length))), (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
extern "C" void m10210_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define m10210(__this , p0, p1, p2, method) (( void (*) (t7 * , t69*, int32_t, int32_t, const MethodInfo*))m10210_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern "C" void m10210_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t69*)(t69*)NULL, (int32_t)L_3, (int32_t)L_4, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
extern "C" void m18590_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18590(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t69*, t69*, int32_t, int32_t, const MethodInfo*))m18590_gshared)(__this , p0, p1, p2, p3, method)
extern "C" void m18590_gshared (t7 * __this , t69* p0, t69* p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	{
		t69* L_0 = p0;
		t69* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		(( void (*) (t7 * , t69*, t69*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_0, (t69*)L_1, (int32_t)L_2, (int32_t)L_3, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t2374;
extern "C" void m18591_gshared (t7 * __this , t69* p0, t2374 * p1, const MethodInfo* method);
#define m18591(__this , p0, p1, method) (( void (*) (t7 * , t69*, t2374 *, const MethodInfo*))m18591_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18591_gshared (t7 * __this , t69* p0, t2374 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p0;
		t2374 * L_4 = p1;
		(( void (*) (t7 * , t69*, int32_t, t2374 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t2374 *)L_4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2367.h"
#include "t2367MD.h"
struct t52;
struct t69;
struct t2367;
extern "C" bool m18592_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method);
#define m18592(__this , p0, p1, method) (( bool (*) (t7 * , t69*, t2367 *, const MethodInfo*))m18592_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" bool m18592_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t69* V_1 = {0};
	int32_t V_2 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2367 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t69* L_4 = p0;
		V_1 = (t69*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		t69* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_0 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_5, L_7));
		t2367 * L_8 = p1;
		t7 * L_9 = V_0;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (t2367 *)L_8, (t7 *)L_9);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		t69* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t52 *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2508.h"
#include "t2508MD.h"
struct t52;
struct t69;
struct t2508;
extern "C" void m18593_gshared (t7 * __this , t69* p0, t2508 * p1, const MethodInfo* method);
#define m18593(__this , p0, p1, method) (( void (*) (t7 * , t69*, t2508 *, const MethodInfo*))m18593_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" void m18593_gshared (t7 * __this , t69* p0, t2508 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t69* V_1 = {0};
	int32_t V_2 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2508 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1197, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t69* L_4 = p0;
		V_1 = (t69*)L_4;
		V_2 = (int32_t)0;
		goto IL_0035;
	}

IL_0022:
	{
		t69* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_0 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_5, L_7));
		t2508 * L_8 = p1;
		t7 * L_9 = V_0;
		VirtActionInvoker1< t7 * >::Invoke(10 /* System.Void System.Action`1<System.Object>::Invoke(T) */, (t2508 *)L_8, (t7 *)L_9);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		t69* L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t52 *)L_12)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2863.h"
#include "t2863MD.h"
struct t52;
struct t69;
struct t2863;
extern "C" t69* m18594_gshared (t7 * __this , t69* p0, t2863 * p1, const MethodInfo* method);
#define m18594(__this , p0, p1, method) (( t69* (*) (t7 * , t69*, t2863 *, const MethodInfo*))m18594_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" t69* m18594_gshared (t7 * __this , t69* p0, t2863 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	int32_t V_1 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2863 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1198, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t69* L_4 = p0;
		V_0 = (t69*)((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((t52 *)L_4)->max_length)))));
		V_1 = (int32_t)0;
		goto IL_0041;
	}

IL_0029:
	{
		t69* L_5 = V_0;
		int32_t L_6 = V_1;
		t2863 * L_7 = p1;
		t69* L_8 = p0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		t7 * L_11 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(10 /* TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput) */, (t2863 *)L_7, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_8, L_10)));
		*((t7 **)(t7 **)SZArrayLdElema(L_5, L_6)) = (t7 *)L_11;
		int32_t L_12 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		t69* L_14 = p0;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t52 *)L_14)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		t69* L_15 = V_0;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t2367;
extern "C" int32_t m18595_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t2367 * p3, const MethodInfo* method);
#define m18595(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t2367 *, const MethodInfo*))m18595_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t69;
struct t2367;
extern "C" int32_t m18596_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method);
#define m18596(__this , p0, p1, method) (( int32_t (*) (t7 * , t69*, t2367 *, const MethodInfo*))m18596_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18596_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p0;
		t2367 * L_4 = p1;
		int32_t L_5 = (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t2367 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t2367 *)L_4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" int32_t m18595_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t2367 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2367 * L_2 = p3;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p1;
		t69* L_5 = p0;
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((t52 *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		t69* L_8 = p0;
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((t52 *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t711 * L_9 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_9, NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = p1;
		int32_t L_11 = p2;
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10+(int32_t)L_11))-(int32_t)1));
		goto IL_004d;
	}

IL_0038:
	{
		t2367 * L_12 = p3;
		t69* L_13 = p0;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		bool L_16 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (t2367 *)L_12, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_13, L_15)));
		if (!L_16)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_004d:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = p1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t2367;
extern "C" int32_t m18597_gshared (t7 * __this , t69* p0, int32_t p1, t2367 * p2, const MethodInfo* method);
#define m18597(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t69*, int32_t, t2367 *, const MethodInfo*))m18597_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18597_gshared (t7 * __this , t69* p0, int32_t p1, t2367 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m9407(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		t69* L_2 = p0;
		int32_t L_3 = p1;
		t69* L_4 = p0;
		int32_t L_5 = p1;
		t2367 * L_6 = p2;
		int32_t L_7 = (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t2367 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (int32_t)L_3, (int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_4)->max_length)))-(int32_t)L_5)), (t2367 *)L_6, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t2367;
extern "C" int32_t m18598_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t2367 * p3, const MethodInfo* method);
#define m18598(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t2367 *, const MethodInfo*))m18598_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t69;
struct t2367;
extern "C" int32_t m18599_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method);
#define m18599(__this , p0, p1, method) (( int32_t (*) (t7 * , t69*, t2367 *, const MethodInfo*))m18599_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18599_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p0;
		t2367 * L_4 = p1;
		int32_t L_5 = (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t2367 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t2367 *)L_4, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" int32_t m18598_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t2367 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2367 * L_2 = p3;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p1;
		t69* L_5 = p0;
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((t52 *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		t69* L_8 = p0;
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((t52 *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		t711 * L_9 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_9, NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = p1;
		V_0 = (int32_t)L_10;
		goto IL_0049;
	}

IL_0034:
	{
		t2367 * L_11 = p3;
		t69* L_12 = p0;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		bool L_15 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (t2367 *)L_11, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_12, L_14)));
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_0045:
	{
		int32_t L_17 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = p1;
		int32_t L_20 = p2;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20)))))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t2367;
extern "C" int32_t m18600_gshared (t7 * __this , t69* p0, int32_t p1, t2367 * p2, const MethodInfo* method);
#define m18600(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t69*, int32_t, t2367 *, const MethodInfo*))m18600_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18600_gshared (t7 * __this , t69* p0, int32_t p1, t2367 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		int32_t L_3 = p1;
		t69* L_4 = p0;
		int32_t L_5 = p1;
		t2367 * L_6 = p2;
		int32_t L_7 = (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t2367 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (int32_t)L_3, (int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_4)->max_length)))-(int32_t)L_5)), (t2367 *)L_6, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t7;
struct t3230;
extern "C" int32_t m18601_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t7 * p3, t7* p4, const MethodInfo* method);
#define m18601(__this , p0, p1, p2, p3, p4, method) (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t7 *, t7*, const MethodInfo*))m18601_gshared)(__this , p0, p1, p2, p3, p4, method)
struct t52;
struct t69;
struct t7;
extern "C" int32_t m18602_gshared (t7 * __this , t69* p0, t7 * p1, const MethodInfo* method);
#define m18602(__this , p0, p1, method) (( int32_t (*) (t7 * , t69*, t7 *, const MethodInfo*))m18602_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18602_gshared (t7 * __this , t69* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p0;
		t7 * L_4 = p1;
		int32_t L_5 = (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t7 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t7 *)L_4, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2368.h"
#include "t2368MD.h"
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t2368_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" int32_t m18601_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t7 * p3, t7* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t2368_TI_var = il2cpp_codegen_type_info_from_index(5212);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t65 * V_4 = {0};
	int32_t V_5 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1179, NULL);
		t711 * L_4 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_4, (t47*)(t47*) &_stringLiteral363, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p2;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		t47* L_6 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_7 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_7, (t47*)(t47*) &_stringLiteral1068, (t47*)L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int32_t L_8 = p1;
		t69* L_9 = p0;
		int32_t L_10 = p2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0058;
		}
	}
	{
		t47* L_11 = m6526(NULL, (t47*)(t47*) &_stringLiteral1180, NULL);
		t396 * L_12 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_12, (t47*)L_11, NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		t7* L_13 = p4;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2368_TI_var);
		t2368 * L_14 = (( t2368 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		p4 = (t7*)L_14;
	}

IL_0065:
	{
		int32_t L_15 = p1;
		V_0 = (int32_t)L_15;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17))-(int32_t)1));
		V_2 = (int32_t)0;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0071:
		{
			int32_t L_18 = V_0;
			int32_t L_19 = V_1;
			int32_t L_20 = V_0;
			V_3 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)L_20))/(int32_t)2))));
			t7* L_21 = p4;
			t7 * L_22 = p3;
			t69* L_23 = p0;
			int32_t L_24 = V_3;
			int32_t L_25 = L_24;
			int32_t L_26 = (int32_t)InterfaceFuncInvoker2< int32_t, t7 *, t7 * >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (t7*)L_21, (t7 *)L_22, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_23, L_25)));
			V_2 = (int32_t)L_26;
			int32_t L_27 = V_2;
			if (L_27)
			{
				goto IL_0091;
			}
		}

IL_008c:
		{
			int32_t L_28 = V_3;
			V_5 = (int32_t)L_28;
			goto IL_00be;
		}

IL_0091:
		{
			int32_t L_29 = V_2;
			if ((((int32_t)L_29) >= ((int32_t)0)))
			{
				goto IL_009b;
			}
		}

IL_0095:
		{
			int32_t L_30 = V_3;
			V_1 = (int32_t)((int32_t)((int32_t)L_30-(int32_t)1));
			goto IL_009f;
		}

IL_009b:
		{
			int32_t L_31 = V_3;
			V_0 = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		}

IL_009f:
		{
			int32_t L_32 = V_0;
			int32_t L_33 = V_1;
			if ((((int32_t)L_32) <= ((int32_t)L_33)))
			{
				goto IL_0071;
			}
		}

IL_00a3:
		{
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_00a5;
		throw e;
	}

CATCH_00a5:
	{ // begin catch(System.Exception)
		V_4 = (t65 *)((t65 *)__exception_local);
		t47* L_34 = m6526(NULL, (t47*)(t47*) &_stringLiteral1182, NULL);
		t65 * L_35 = V_4;
		t1098 * L_36 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m9822(L_36, (t47*)L_34, (t65 *)L_35, NULL);
		il2cpp_codegen_raise_exception(L_36);
		goto IL_00bb;
	} // end catch (depth: 1)

IL_00bb:
	{
		int32_t L_37 = V_0;
		return ((~L_37));
	}

IL_00be:
	{
		int32_t L_38 = V_5;
		return L_38;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t7;
struct t3230;
extern "C" int32_t m18603_gshared (t7 * __this , t69* p0, t7 * p1, t7* p2, const MethodInfo* method);
#define m18603(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t69*, t7 *, t7*, const MethodInfo*))m18603_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18603_gshared (t7 * __this , t69* p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t69* L_3 = p0;
		t7 * L_4 = p1;
		t7* L_5 = p2;
		int32_t L_6 = (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t7 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), (t7 *)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t7;
extern "C" int32_t m18604_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t7 * p3, const MethodInfo* method);
#define m18604(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t7 *, const MethodInfo*))m18604_gshared)(__this , p0, p1, p2, p3, method)
extern "C" int32_t m18604_gshared (t7 * __this , t69* p0, int32_t p1, int32_t p2, t7 * p3, const MethodInfo* method)
{
	{
		t69* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		t7 * L_3 = p3;
		int32_t L_4 = (( int32_t (*) (t7 * , t69*, int32_t, int32_t, t7 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_0, (int32_t)L_1, (int32_t)L_2, (t7 *)L_3, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t7;
extern "C" int32_t m10212_gshared (t7 * __this , t69* p0, t7 * p1, const MethodInfo* method);
#define m10212(__this , p0, p1, method) (( int32_t (*) (t7 * , t69*, t7 *, const MethodInfo*))m10212_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m10212_gshared (t7 * __this , t69* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t7 * L_3 = p1;
		t69* L_4 = p0;
		int32_t L_5 = (( int32_t (*) (t7 * , t69*, t7 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t7 *)L_3, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_4)->max_length))), IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t7;
extern "C" int32_t m18605_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, const MethodInfo* method);
#define m18605(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t69*, t7 *, int32_t, const MethodInfo*))m18605_gshared)(__this , p0, p1, p2, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18605_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t7 * L_3 = p1;
		int32_t L_4 = p2;
		t69* L_5 = p0;
		int32_t L_6 = p2;
		int32_t L_7 = (( int32_t (*) (t7 * , t69*, t7 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t7 *)L_3, (int32_t)L_4, (int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_5)->max_length)))-(int32_t)L_6)), IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t7;
extern "C" int32_t m18606_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, const MethodInfo* method);
#define m18606(__this , p0, p1, p2, method) (( int32_t (*) (t7 * , t69*, t7 *, int32_t, const MethodInfo*))m18606_gshared)(__this , p0, p1, p2, method)
struct t52;
struct t69;
struct t7;
extern "C" int32_t m18607_gshared (t7 * __this , t69* p0, t7 * p1, const MethodInfo* method);
#define m18607(__this , p0, p1, method) (( int32_t (*) (t7 * , t69*, t7 *, const MethodInfo*))m18607_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18607_gshared (t7 * __this , t69* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		if ((((int32_t)(((t52 *)L_2)->max_length))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		t69* L_3 = p0;
		t7 * L_4 = p1;
		t69* L_5 = p0;
		int32_t L_6 = (( int32_t (*) (t7 * , t69*, t7 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_3, (t7 *)L_4, (int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_5)->max_length)))-(int32_t)1)), IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t7;
extern "C" int32_t m18608_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18608(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t69*, t7 *, int32_t, int32_t, const MethodInfo*))m18608_gshared)(__this , p0, p1, p2, p3, method)
extern TypeInfo* t708_TI_var;
extern "C" int32_t m18606_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t7 * L_3 = p1;
		int32_t L_4 = p2;
		int32_t L_5 = p2;
		int32_t L_6 = (( int32_t (*) (t7 * , t69*, t7 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, (t69*)L_2, (t7 *)L_3, (int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5+(int32_t)1)), IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2364_TI_var;
extern "C" int32_t m18608_gshared (t7 * __this , t69* p0, t7 * p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	t2364 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = p2;
		t69* L_4 = p0;
		int32_t L_5 = m6350((t52 *)L_4, (int32_t)0, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = p2;
		t69* L_7 = p0;
		int32_t L_8 = m6362((t52 *)L_7, (int32_t)0, NULL);
		if ((((int32_t)L_6) > ((int32_t)L_8)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_9 = p2;
		int32_t L_10 = p3;
		t69* L_11 = p0;
		int32_t L_12 = m6350((t52 *)L_11, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))+(int32_t)1))) >= ((int32_t)L_12)))
		{
			goto IL_003a;
		}
	}

IL_0034:
	{
		t711 * L_13 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_13, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_14 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (t2364 *)L_14;
		int32_t L_15 = p2;
		V_1 = (int32_t)L_15;
		goto IL_005a;
	}

IL_0044:
	{
		t2364 * L_16 = V_0;
		t69* L_17 = p0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		t7 * L_20 = p1;
		bool L_21 = (bool)VirtFuncInvoker2< bool, t7 *, t7 * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (t2364 *)L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_17, L_19)), (t7 *)L_20);
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_22 = V_1;
		return L_22;
	}

IL_0056:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = p2;
		int32_t L_26 = p3;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25-(int32_t)L_26))+(int32_t)1)))))
		{
			goto IL_0044;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t2367;
extern "C" t69* m18609_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method);
#define m18609(__this , p0, p1, method) (( t69* (*) (t7 * , t69*, t2367 *, const MethodInfo*))m18609_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" t69* m18609_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t69* V_1 = {0};
	t7 * V_2 = {0};
	t69* V_3 = {0};
	int32_t V_4 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2367 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		t69* L_4 = p0;
		V_1 = (t69*)((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((t52 *)L_4)->max_length)))));
		t69* L_5 = p0;
		V_3 = (t69*)L_5;
		V_4 = (int32_t)0;
		goto IL_0052;
	}

IL_002e:
	{
		t69* L_6 = V_3;
		int32_t L_7 = V_4;
		int32_t L_8 = L_7;
		V_2 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_6, L_8));
		t2367 * L_9 = p1;
		t7 * L_10 = V_2;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (t2367 *)L_9, (t7 *)L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		t69* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (int32_t)L_13;
		V_0 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		t7 * L_15 = V_2;
		*((t7 **)(t7 **)SZArrayLdElema(L_12, L_14)) = (t7 *)L_15;
	}

IL_004c:
	{
		int32_t L_16 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_4;
		t69* L_18 = V_3;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t52 *)L_18)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_19 = V_0;
		(( void (*) (t7 * , t69**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL, (t69**)(&V_1), (int32_t)L_19, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		t69* L_20 = V_1;
		return L_20;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t69;
struct t2367;
extern "C" bool m18610_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method);
#define m18610(__this , p0, p1, method) (( bool (*) (t7 * , t69*, t2367 *, const MethodInfo*))m18610_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern "C" bool m18610_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t69* V_1 = {0};
	int32_t V_2 = 0;
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2367 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t69* L_4 = p0;
		V_1 = (t69*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		t69* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_0 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_5, L_7));
		t2367 * L_8 = p1;
		t7 * L_9 = V_0;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (t2367 *)L_8, (t7 *)L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		t69* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t52 *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2362.h"
#include "t2864.h"
#include "t2864MD.h"
#include "t2362MD.h"
struct t52;
struct t2362;
struct t69;
extern "C" t2362 * m18611_gshared (t7 * __this , t69* p0, const MethodInfo* method);
#define m18611(__this , p0, method) (( t2362 * (*) (t7 * , t69*, const MethodInfo*))m18611_gshared)(__this , p0, method)
extern TypeInfo* t708_TI_var;
extern "C" t2362 * m18611_gshared (t7 * __this , t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t69* L_2 = p0;
		t2864 * L_3 = (t2864 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (t2864 *, t69*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_3, (t69*)L_2, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2362 * L_4 = (t2362 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		(( void (*) (t2362 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->method)(L_4, (t7*)L_3, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t7;
struct t69;
struct t2367;
extern "C" t7 * m18612_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method);
#define m18612(__this , p0, p1, method) (( t7 * (*) (t7 * , t69*, t2367 *, const MethodInfo*))m18612_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t7_TI_var;
extern "C" t7 * m18612_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t69* V_1 = {0};
	int32_t V_2 = 0;
	t7 * V_3 = {0};
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2367 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t69* L_4 = p0;
		V_1 = (t69*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		t69* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_0 = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_5, L_7));
		t2367 * L_8 = p1;
		t7 * L_9 = V_0;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (t2367 *)L_8, (t7 *)L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		t7 * L_11 = V_0;
		return L_11;
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		t69* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((t52 *)L_14)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		Initobj (t7_TI_var, (&V_3));
		t7 * L_15 = V_3;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t7;
struct t69;
struct t2367;
extern "C" t7 * m18613_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method);
#define m18613(__this , p0, p1, method) (( t7 * (*) (t7 * , t69*, t2367 *, const MethodInfo*))m18613_gshared)(__this , p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t7_TI_var;
extern "C" t7 * m18613_gshared (t7 * __this , t69* p0, t2367 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t7 * V_1 = {0};
	{
		t69* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2367 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t69* L_4 = p0;
		V_0 = (int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_4)->max_length)))-(int32_t)1));
		goto IL_003f;
	}

IL_0024:
	{
		t2367 * L_5 = p1;
		t69* L_6 = p0;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (t2367 *)L_5, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_6, L_8)));
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		t69* L_10 = p0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		return (*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12));
	}

IL_003b:
	{
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Initobj (t7_TI_var, (&V_1));
		t7 * L_15 = V_1;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1336.h"
struct t52;
struct t52;
extern "C" t1336  m18615_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18615(__this, p0, method) (( t1336  (*) (t52 *, int32_t, const MethodInfo*))m18615_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t1336  m18615_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t1336  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t1336 *)(&V_0));
		t1336  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18616_gshared (t52 * __this, t1336  p0, const MethodInfo* method);
#define m18616(__this, p0, method) (( void (*) (t52 *, t1336 , const MethodInfo*))m18616_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18616_gshared (t52 * __this, t1336  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18617_gshared (t52 * __this, t1336  p0, const MethodInfo* method);
#define m18617(__this, p0, method) (( bool (*) (t52 *, t1336 , const MethodInfo*))m18617_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18617_gshared (t52 * __this, t1336  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1336  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1336 *)(&V_2));
		t1336  L_5 = p0;
		t1336  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t1336  L_8 = V_2;
		t1336  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1336  L_11 = V_2;
		t1336  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1338;
extern "C" void m18618_gshared (t52 * __this, t1338* p0, int32_t p1, const MethodInfo* method);
#define m18618(__this, p0, p1, method) (( void (*) (t52 *, t1338*, int32_t, const MethodInfo*))m18618_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18618_gshared (t52 * __this, t1338* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1338* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1338* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1338* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1338* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1338* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18619_gshared (t52 * __this, t1336  p0, const MethodInfo* method);
#define m18619(__this, p0, method) (( bool (*) (t52 *, t1336 , const MethodInfo*))m18619_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18619_gshared (t52 * __this, t1336  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18620_gshared (t52 * __this, t1336  p0, const MethodInfo* method);
#define m18620(__this, p0, method) (( int32_t (*) (t52 *, t1336 , const MethodInfo*))m18620_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18620_gshared (t52 * __this, t1336  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1336  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1336 *)(&V_2));
		t1336  L_5 = p0;
		t1336  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t1336  L_8 = V_2;
		t1336  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t1336  L_14 = p0;
		t1336  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18621_gshared (t52 * __this, int32_t p0, t1336  p1, const MethodInfo* method);
#define m18621(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1336 , const MethodInfo*))m18621_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18621_gshared (t52 * __this, int32_t p0, t1336  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18623_gshared (t52 * __this, int32_t p0, t1336  p1, const MethodInfo* method);
#define m18623(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1336 , const MethodInfo*))m18623_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18623_gshared (t52 * __this, int32_t p0, t1336  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t1336  L_6 = p1;
		t1336  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t1336 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2867.h"
#include "t2867MD.h"
struct t52;
struct t3254;
extern "C" t7* m18624_gshared (t52 * __this, const MethodInfo* method);
#define m18624(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18624_gshared)(__this, method)
extern "C" t7* m18624_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2867  L_0 = {0};
		(( void (*) (t2867 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2867  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1413.h"
struct t52;
struct t52;
extern "C" t1413  m18626_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18626(__this, p0, method) (( t1413  (*) (t52 *, int32_t, const MethodInfo*))m18626_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t1413  m18626_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t1413  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t1413 *)(&V_0));
		t1413  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18627_gshared (t52 * __this, t1413  p0, const MethodInfo* method);
#define m18627(__this, p0, method) (( void (*) (t52 *, t1413 , const MethodInfo*))m18627_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18627_gshared (t52 * __this, t1413  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18628_gshared (t52 * __this, t1413  p0, const MethodInfo* method);
#define m18628(__this, p0, method) (( bool (*) (t52 *, t1413 , const MethodInfo*))m18628_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18628_gshared (t52 * __this, t1413  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1413  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1413 *)(&V_2));
		t1413  L_5 = p0;
		t1413  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t1413  L_8 = V_2;
		t1413  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1413  L_11 = V_2;
		t1413  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1419;
extern "C" void m18629_gshared (t52 * __this, t1419* p0, int32_t p1, const MethodInfo* method);
#define m18629(__this, p0, p1, method) (( void (*) (t52 *, t1419*, int32_t, const MethodInfo*))m18629_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18629_gshared (t52 * __this, t1419* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1419* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1419* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1419* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1419* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1419* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18630_gshared (t52 * __this, t1413  p0, const MethodInfo* method);
#define m18630(__this, p0, method) (( bool (*) (t52 *, t1413 , const MethodInfo*))m18630_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18630_gshared (t52 * __this, t1413  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18631_gshared (t52 * __this, t1413  p0, const MethodInfo* method);
#define m18631(__this, p0, method) (( int32_t (*) (t52 *, t1413 , const MethodInfo*))m18631_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18631_gshared (t52 * __this, t1413  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1413  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1413 *)(&V_2));
		t1413  L_5 = p0;
		t1413  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t1413  L_8 = V_2;
		t1413  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t1413  L_14 = p0;
		t1413  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18632_gshared (t52 * __this, int32_t p0, t1413  p1, const MethodInfo* method);
#define m18632(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1413 , const MethodInfo*))m18632_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18632_gshared (t52 * __this, int32_t p0, t1413  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18634_gshared (t52 * __this, int32_t p0, t1413  p1, const MethodInfo* method);
#define m18634(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1413 , const MethodInfo*))m18634_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18634_gshared (t52 * __this, int32_t p0, t1413  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t1413  L_6 = p1;
		t1413  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t1413 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2876.h"
#include "t2876MD.h"
struct t52;
struct t3255;
extern "C" t7* m18635_gshared (t52 * __this, const MethodInfo* method);
#define m18635(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18635_gshared)(__this, method)
extern "C" t7* m18635_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2876  L_0 = {0};
		(( void (*) (t2876 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2876  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1420.h"
struct t52;
struct t52;
extern "C" t1420  m18637_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18637(__this, p0, method) (( t1420  (*) (t52 *, int32_t, const MethodInfo*))m18637_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t1420  m18637_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t1420  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t1420 *)(&V_0));
		t1420  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18638_gshared (t52 * __this, t1420  p0, const MethodInfo* method);
#define m18638(__this, p0, method) (( void (*) (t52 *, t1420 , const MethodInfo*))m18638_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18638_gshared (t52 * __this, t1420  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18639_gshared (t52 * __this, t1420  p0, const MethodInfo* method);
#define m18639(__this, p0, method) (( bool (*) (t52 *, t1420 , const MethodInfo*))m18639_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18639_gshared (t52 * __this, t1420  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1420  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1420 *)(&V_2));
		t1420  L_5 = p0;
		t1420  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t1420  L_8 = V_2;
		t1420  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t1420  L_11 = V_2;
		t1420  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1423;
extern "C" void m18640_gshared (t52 * __this, t1423* p0, int32_t p1, const MethodInfo* method);
#define m18640(__this, p0, p1, method) (( void (*) (t52 *, t1423*, int32_t, const MethodInfo*))m18640_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18640_gshared (t52 * __this, t1423* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1423* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1423* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1423* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1423* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1423* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18641_gshared (t52 * __this, t1420  p0, const MethodInfo* method);
#define m18641(__this, p0, method) (( bool (*) (t52 *, t1420 , const MethodInfo*))m18641_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18641_gshared (t52 * __this, t1420  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18642_gshared (t52 * __this, t1420  p0, const MethodInfo* method);
#define m18642(__this, p0, method) (( int32_t (*) (t52 *, t1420 , const MethodInfo*))m18642_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18642_gshared (t52 * __this, t1420  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1420  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t1420 *)(&V_2));
		t1420  L_5 = p0;
		t1420  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t1420  L_8 = V_2;
		t1420  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t1420  L_14 = p0;
		t1420  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18643_gshared (t52 * __this, int32_t p0, t1420  p1, const MethodInfo* method);
#define m18643(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1420 , const MethodInfo*))m18643_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18643_gshared (t52 * __this, int32_t p0, t1420  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18645_gshared (t52 * __this, int32_t p0, t1420  p1, const MethodInfo* method);
#define m18645(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t1420 , const MethodInfo*))m18645_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18645_gshared (t52 * __this, int32_t p0, t1420  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t1420  L_6 = p1;
		t1420  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t1420 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2877.h"
#include "t2877MD.h"
struct t52;
struct t3256;
extern "C" t7* m18646_gshared (t52 * __this, const MethodInfo* method);
#define m18646(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18646_gshared)(__this, method)
extern "C" t7* m18646_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2877  L_0 = {0};
		(( void (*) (t2877 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2877  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1529.h"
#include "t2887.h"
#include "t2887MD.h"
struct t1529;
struct t7;
struct t2887;
extern "C" t7 * m18647_gshared (t7 * __this , t2887 * p0, t7 * p1, const MethodInfo* method);
#define m18647(__this , p0, p1, method) (( t7 * (*) (t7 * , t2887 *, t7 *, const MethodInfo*))m18647_gshared)(__this , p0, p1, method)
extern "C" t7 * m18647_gshared (t7 * __this , t2887 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t2887 * L_0 = p0;
		t7 * L_1 = p1;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(10 /* R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T) */, (t2887 *)L_0, (t7 *)((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		t7 * L_3 = L_2;
		return ((t7 *)L_3);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2888.h"
#include "t2888MD.h"
struct t1529;
struct t7;
struct t2888;
extern "C" t7 * m18648_gshared (t7 * __this , t2888 * p0, t7 * p1, const MethodInfo* method);
#define m18648(__this , p0, p1, method) (( t7 * (*) (t7 * , t2888 *, t7 *, const MethodInfo*))m18648_gshared)(__this , p0, p1, method)
extern "C" t7 * m18648_gshared (t7 * __this , t2888 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t2888 * L_0 = p0;
		t7 * L_1 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(10 /* R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke() */, (t2888 *)L_0);
		t7 * L_2 = L_1;
		return ((t7 *)L_2);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t505.h"
struct t52;
struct t52;
extern "C" t505  m18650_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18650(__this, p0, method) (( t505  (*) (t52 *, int32_t, const MethodInfo*))m18650_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t505  m18650_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t505  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t505 *)(&V_0));
		t505  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18651_gshared (t52 * __this, t505  p0, const MethodInfo* method);
#define m18651(__this, p0, method) (( void (*) (t52 *, t505 , const MethodInfo*))m18651_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18651_gshared (t52 * __this, t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18652_gshared (t52 * __this, t505  p0, const MethodInfo* method);
#define m18652(__this, p0, method) (( bool (*) (t52 *, t505 , const MethodInfo*))m18652_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18652_gshared (t52 * __this, t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t505  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t505 *)(&V_2));
		t505  L_5 = p0;
		t505  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t505  L_8 = V_2;
		t505  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t505  L_11 = V_2;
		t505  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1864;
extern "C" void m18653_gshared (t52 * __this, t1864* p0, int32_t p1, const MethodInfo* method);
#define m18653(__this, p0, p1, method) (( void (*) (t52 *, t1864*, int32_t, const MethodInfo*))m18653_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18653_gshared (t52 * __this, t1864* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1864* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1864* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1864* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1864* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1864* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18654_gshared (t52 * __this, t505  p0, const MethodInfo* method);
#define m18654(__this, p0, method) (( bool (*) (t52 *, t505 , const MethodInfo*))m18654_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18654_gshared (t52 * __this, t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18655_gshared (t52 * __this, t505  p0, const MethodInfo* method);
#define m18655(__this, p0, method) (( int32_t (*) (t52 *, t505 , const MethodInfo*))m18655_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18655_gshared (t52 * __this, t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t505  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t505 *)(&V_2));
		t505  L_5 = p0;
		t505  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t505  L_8 = V_2;
		t505  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t505  L_14 = p0;
		t505  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18656_gshared (t52 * __this, int32_t p0, t505  p1, const MethodInfo* method);
#define m18656(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t505 , const MethodInfo*))m18656_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18656_gshared (t52 * __this, int32_t p0, t505  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18658_gshared (t52 * __this, int32_t p0, t505  p1, const MethodInfo* method);
#define m18658(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t505 , const MethodInfo*))m18658_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18658_gshared (t52 * __this, int32_t p0, t505  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t505  L_6 = p1;
		t505  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t505 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2892.h"
#include "t2892MD.h"
struct t52;
struct t3257;
extern "C" t7* m18659_gshared (t52 * __this, const MethodInfo* method);
#define m18659(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18659_gshared)(__this, method)
extern "C" t7* m18659_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2892  L_0 = {0};
		(( void (*) (t2892 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2892  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t713.h"
struct t52;
struct t52;
extern "C" t713  m18661_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18661(__this, p0, method) (( t713  (*) (t52 *, int32_t, const MethodInfo*))m18661_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t713  m18661_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t713  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t713 *)(&V_0));
		t713  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18662_gshared (t52 * __this, t713  p0, const MethodInfo* method);
#define m18662(__this, p0, method) (( void (*) (t52 *, t713 , const MethodInfo*))m18662_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18662_gshared (t52 * __this, t713  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18663_gshared (t52 * __this, t713  p0, const MethodInfo* method);
#define m18663(__this, p0, method) (( bool (*) (t52 *, t713 , const MethodInfo*))m18663_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18663_gshared (t52 * __this, t713  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t713  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t713 *)(&V_2));
		t713  L_5 = p0;
		t713  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t713  L_8 = V_2;
		t713  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t713  L_11 = V_2;
		t713  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1865;
extern "C" void m18664_gshared (t52 * __this, t1865* p0, int32_t p1, const MethodInfo* method);
#define m18664(__this, p0, p1, method) (( void (*) (t52 *, t1865*, int32_t, const MethodInfo*))m18664_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18664_gshared (t52 * __this, t1865* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1865* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1865* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1865* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1865* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1865* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18665_gshared (t52 * __this, t713  p0, const MethodInfo* method);
#define m18665(__this, p0, method) (( bool (*) (t52 *, t713 , const MethodInfo*))m18665_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18665_gshared (t52 * __this, t713  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18666_gshared (t52 * __this, t713  p0, const MethodInfo* method);
#define m18666(__this, p0, method) (( int32_t (*) (t52 *, t713 , const MethodInfo*))m18666_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18666_gshared (t52 * __this, t713  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t713  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t713 *)(&V_2));
		t713  L_5 = p0;
		t713  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t713  L_8 = V_2;
		t713  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t713  L_14 = p0;
		t713  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18667_gshared (t52 * __this, int32_t p0, t713  p1, const MethodInfo* method);
#define m18667(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t713 , const MethodInfo*))m18667_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18667_gshared (t52 * __this, int32_t p0, t713  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18669_gshared (t52 * __this, int32_t p0, t713  p1, const MethodInfo* method);
#define m18669(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t713 , const MethodInfo*))m18669_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18669_gshared (t52 * __this, int32_t p0, t713  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t713  L_6 = p1;
		t713  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t713 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2893.h"
#include "t2893MD.h"
struct t52;
struct t3258;
extern "C" t7* m18670_gshared (t52 * __this, const MethodInfo* method);
#define m18670(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18670_gshared)(__this, method)
extern "C" t7* m18670_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2893  L_0 = {0};
		(( void (*) (t2893 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2893  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t991.h"
struct t52;
struct t52;
extern "C" t991  m18672_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18672(__this, p0, method) (( t991  (*) (t52 *, int32_t, const MethodInfo*))m18672_gshared)(__this, p0, method)
extern TypeInfo* t711_TI_var;
extern "C" t991  m18672_gshared (t52 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_3, (t991 *)(&V_0));
		t991  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18673_gshared (t52 * __this, t991  p0, const MethodInfo* method);
#define m18673(__this, p0, method) (( void (*) (t52 *, t991 , const MethodInfo*))m18673_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18673_gshared (t52 * __this, t991  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18674_gshared (t52 * __this, t991  p0, const MethodInfo* method);
#define m18674(__this, p0, method) (( bool (*) (t52 *, t991 , const MethodInfo*))m18674_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" bool m18674_gshared (t52 * __this, t991  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t991  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t991 *)(&V_2));
		t991  L_5 = p0;
		t991  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		t991  L_8 = V_2;
		t991  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		t991  L_11 = V_2;
		t991  L_12 = L_11;
		t7 * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&p0)), (t7 *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t1866;
extern "C" void m18675_gshared (t52 * __this, t1866* p0, int32_t p1, const MethodInfo* method);
#define m18675(__this, p0, p1, method) (( void (*) (t52 *, t1866*, int32_t, const MethodInfo*))m18675_gshared)(__this, p0, p1, method)
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1798_TI_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern "C" void m18675_gshared (t52 * __this, t1866* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1866* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_4 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_4, (t47*)L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = p1;
		int32_t L_6 = m6348((t52 *)__this, (int32_t)0, NULL);
		t1866* L_7 = p0;
		int32_t L_8 = m6350((t52 *)L_7, (int32_t)0, NULL);
		t1866* L_9 = p0;
		int32_t L_10 = m6348((t52 *)L_9, (int32_t)0, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_11 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_11, (t47*)(t47*) &_stringLiteral1156, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1866* L_12 = p0;
		int32_t L_13 = m4510((t52 *)L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		t47* L_14 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_15 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_15, (t47*)L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = p1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47* L_17 = m6526(NULL, (t47*)(t47*) &_stringLiteral1157, NULL);
		t711 * L_18 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_18, (t47*)(t47*) &_stringLiteral363, (t47*)L_17, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		t1866* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = m6348((t52 *)__this, (int32_t)0, NULL);
		m6390(NULL, (t52 *)__this, (int32_t)L_19, (t52 *)(t52 *)L_20, (int32_t)L_21, (int32_t)L_22, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" bool m18676_gshared (t52 * __this, t991  p0, const MethodInfo* method);
#define m18676(__this, p0, method) (( bool (*) (t52 *, t991 , const MethodInfo*))m18676_gshared)(__this, p0, method)
extern TypeInfo* t61_TI_var;
extern "C" bool m18676_gshared (t52 * __this, t991  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" int32_t m18677_gshared (t52 * __this, t991  p0, const MethodInfo* method);
#define m18677(__this, p0, method) (( int32_t (*) (t52 *, t991 , const MethodInfo*))m18677_gshared)(__this, p0, method)
extern TypeInfo* t1798_TI_var;
extern "C" int32_t m18677_gshared (t52 * __this, t991  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1798_TI_var = il2cpp_codegen_type_info_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t991  V_2 = {0};
	{
		int32_t L_0 = m4510((t52 *)__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		t47* L_1 = m6526(NULL, (t47*)(t47*) &_stringLiteral1155, NULL);
		t1798 * L_2 = (t1798 *)il2cpp_codegen_object_new (t1798_TI_var);
		m10048(L_2, (t47*)L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = m4505((t52 *)__this, NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl ((t52 *)__this, (int32_t)L_4, (t991 *)(&V_2));
		t991  L_5 = p0;
		t991  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		t991  L_8 = V_2;
		t991  L_9 = L_8;
		t7 * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		t991  L_14 = p0;
		t991  L_15 = L_14;
		t7 * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (t7 *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = m6350((t52 *)__this, (int32_t)0, NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
extern "C" void m18678_gshared (t52 * __this, int32_t p0, t991  p1, const MethodInfo* method);
#define m18678(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t991 , const MethodInfo*))m18678_gshared)(__this, p0, p1, method)
extern TypeInfo* t61_TI_var;
extern "C" void m18678_gshared (t52 * __this, int32_t p0, t991  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral382, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct t52;
struct t52;
extern "C" void m18680_gshared (t52 * __this, int32_t p0, t991  p1, const MethodInfo* method);
#define m18680(__this, p0, p1, method) (( void (*) (t52 *, int32_t, t991 , const MethodInfo*))m18680_gshared)(__this, p0, p1, method)
extern TypeInfo* t711_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" void m18680_gshared (t52 * __this, int32_t p0, t991  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m4505((t52 *)__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_2, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (t69*)((t69*)IsInst(__this, t69_TI_var));
		t69* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t69* L_4 = V_0;
		int32_t L_5 = p0;
		t991  L_6 = p1;
		t991  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, L_5)) = (t7 *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = p0;
		ArraySetGenericValueImpl ((t52 *)__this, (int32_t)L_9, (t991 *)(&p1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#ifndef _MSC_VER
#else
#endif

#include "t2894.h"
#include "t2894MD.h"
struct t52;
struct t3259;
extern "C" t7* m18681_gshared (t52 * __this, const MethodInfo* method);
#define m18681(__this, method) (( t7* (*) (t52 *, const MethodInfo*))m18681_gshared)(__this, method)
extern "C" t7* m18681_gshared (t52 * __this, const MethodInfo* method)
{
	{
		t2894  L_0 = {0};
		(( void (*) (t2894 *, t52 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (t52 *)__this, IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		t2894  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (t7*)L_2;
	}
}
