#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2717.h"
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
#include "t2717MD.h"

#include "t53.h"
#include "t58.h"
#include "t701.h"
#include "t7.h"
#include "t54.h"
#include "t2715MD.h"
#include "t7MD.h"

#include "t52.h"

extern TypeInfo* t2715_TI_var;
extern "C" void m16030_gshared (t2717 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2715_TI_var = il2cpp_codegen_type_info_from_index(5819);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2715_TI_var);
		(( void (*) (t2715 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2715 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16031_gshared (t2717 * __this, uint64_t p0, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		uint64_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)));
		return L_3;
	}
}
extern "C" bool m16032_gshared (t2717 * __this, uint64_t p0, uint64_t p1, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		uint64_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_3 = p1;
		uint64_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint64_t L_6 = p1;
		uint64_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t7 *)L_8);
		return L_9;
	}
}
#include "t704.h"
#ifndef _MSC_VER
#else
#endif
#include "t704MD.h"

#include "t226.h"
#include "t213.h"


extern "C" void m16084_gshared (t704 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m16086_gshared (t704 * __this, t7 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m16086((t704 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m16088_gshared (t704 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m16090_gshared (t704 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2722.h"
#ifndef _MSC_VER
#else
#endif
#include "t2722MD.h"

#include "t57.h"
#include "t700.h"
#include "t532.h"
#include "t47.h"
#include "t575.h"
#include "t532MD.h"
#include "t47MD.h"
#include "t601MD.h"
#include "t1107MD.h"
#include "t575MD.h"
#include "t71MD.h"
struct t1107;
struct t7;
#include "t1107.h"
extern "C" t7 * m18111_gshared (t7 * __this , const MethodInfo* method);
#define m18111(__this , method) (( t7 * (*) (t7 * , const MethodInfo*))m18111_gshared)(__this , method)


extern "C" void m16091_gshared (t2722 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern "C" t7 * m16092_gshared (t2722 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f7);
		return L_0;
	}
}
extern "C" t7 * m16093_gshared (t2722 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f7);
		return L_0;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t670_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" bool m16094_gshared (t2722 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	t700 * V_1 = {0};
	bool V_2 = false;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->f6);
		V_0 = (uint32_t)L_0;
		__this->f6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0170;
	}

IL_0021:
	{
		t532 * L_2 = (t532 *)(__this->f0);
		__this->f7 = L_2;
		__this->f6 = 1;
		goto IL_0172;
	}

IL_0039:
	{
		__this->f1 = ((t7 *)Castclass(NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
		t532 * L_3 = (t532 *)(__this->f0);
		t47* L_4 = m2582((t532 *)L_3, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_5 = m1783(NULL, (t47*)L_4, NULL);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		t532 * L_6 = (t532 *)(__this->f0);
		t47* L_7 = m2578((t532 *)L_6, NULL);
		t7 ** L_8 = (t7 **)&(__this->f2);
		bool L_9 = m3034(NULL, (t47*)L_7, (t7 **)L_8, NULL);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		t7 * L_10 = (t7 *)(__this->f2);
		__this->f3 = ((t7*)IsInst(L_10, t670_TI_var));
		t7* L_11 = (t7*)(__this->f3);
		if (!L_11)
		{
			goto IL_00d0;
		}
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		t7 * L_12 = (( t7 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->f1 = L_12;
		t7 ** L_13 = (t7 **)&(__this->f1);
		t7 * L_14 = (t7 *)(__this->f2);
		VirtActionInvoker1< t7 * >::Invoke(4 /* System.Void UnityEngine.Networking.Match.Response::Parse(System.Object) */, (t575 *)(*L_13), (t7 *)L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t700_TI_var, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = (t700 *)((t700 *)__exception_local);
		t700 * L_15 = V_1;
		__this->f4 = L_15;
		t700 * L_16 = (t700 *)(__this->f4);
		m183(NULL, (t7 *)L_16, NULL);
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		t7 * L_17 = (t7 *)(__this->f1);
		t7 * L_18 = L_17;
		if (((t7 *)L_18))
		{
			goto IL_00ff;
		}
	}
	{
		t532 * L_19 = (t532 *)(__this->f0);
		t47* L_20 = m2578((t532 *)L_19, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_21 = m207(NULL, (t47*)(t47*) &_stringLiteral288, (t47*)L_20, NULL);
		m1452(NULL, (t7 *)L_21, NULL);
		goto IL_011f;
	}

IL_00ff:
	{
		t7 ** L_22 = (t7 **)&(__this->f1);
		t47* L_23 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String UnityEngine.Networking.Match.Response::ToString() */, (t575 *)(*L_22));
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_24 = m207(NULL, (t47*)(t47*) &_stringLiteral289, (t47*)L_23, NULL);
		m183(NULL, (t7 *)L_24, NULL);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		t532 * L_25 = (t532 *)(__this->f0);
		t47* L_26 = m2582((t532 *)L_25, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_27 = m207(NULL, (t47*)(t47*) &_stringLiteral290, (t47*)L_26, NULL);
		m1452(NULL, (t7 *)L_27, NULL);
		t532 * L_28 = (t532 *)(__this->f0);
		t47* L_29 = m2578((t532 *)L_28, NULL);
		t47* L_30 = m207(NULL, (t47*)(t47*) &_stringLiteral291, (t47*)L_29, NULL);
		m1452(NULL, (t7 *)L_30, NULL);
	}

IL_0158:
	{
		t704 * L_31 = (t704 *)(__this->f5);
		t7 * L_32 = (t7 *)(__this->f1);
		VirtActionInvoker1< t7 * >::Invoke(10 /* System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T) */, (t704 *)L_31, (t7 *)L_32);
		__this->f6 = (-1);
	}

IL_0170:
	{
		return 0;
	}

IL_0172:
	{
		return 1;
	}
	// Dead block : IL_0174: ldloc.2
}
extern "C" void m16095_gshared (t2722 * __this, const MethodInfo* method)
{
	{
		__this->f6 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2494.h"


#ifndef _MSC_VER
#else
#endif

#include "t2724.h"
#include "mscorlib_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2725.h"
#ifndef _MSC_VER
#else
#endif
#include "t2725MD.h"

#include "t1098.h"
#include "t1098MD.h"
#include "t52MD.h"
struct t52;
extern "C" t2724  m18439_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18439(__this, p0, method) (( t2724  (*) (t52 *, int32_t, const MethodInfo*))m18439_gshared)(__this, p0, method)


extern "C" void m16207_gshared (t2725 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m16208_gshared (t2725 * __this, const MethodInfo* method)
{
	{
		t2724  L_0 = (( t2724  (*) (t2725 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2725 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2724  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m16209_gshared (t2725 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m16210_gshared (t2725 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (t52 *)(__this->f0);
		int32_t L_2 = m4505((t52 *)L_1, NULL);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->f1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t2724  m16211_gshared (t2725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1199, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_3, (t47*)(t47*) &_stringLiteral1200, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t52 * L_4 = (t52 *)(__this->f0);
		t52 * L_5 = (t52 *)(__this->f0);
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		int32_t L_7 = (int32_t)(__this->f1);
		t2724  L_8 = (( t2724  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif
#include "t2724MD.h"



extern "C" void m16212_gshared (t2724 * __this, t7 * p0, t2494  p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		(( void (*) (t2724 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2724 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2494  L_1 = p1;
		(( void (*) (t2724 *, t2494 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2724 *)__this, (t2494 )L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" t7 * m16213_gshared (t2724 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f0);
		return L_0;
	}
}
extern "C" void m16214_gshared (t2724 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2494  m16215_gshared (t2724 * __this, const MethodInfo* method)
{
	{
		t2494  L_0 = (t2494 )(__this->f1);
		return L_0;
	}
}
extern "C" void m16216_gshared (t2724 * __this, t2494  p0, const MethodInfo* method)
{
	{
		t2494  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m16217_gshared (t2724 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t2494  V_1 = {0};
	int32_t G_B2_0 = 0;
	t48* G_B2_1 = {0};
	t48* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t48* G_B1_1 = {0};
	t48* G_B1_2 = {0};
	t47* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t48* G_B3_2 = {0};
	t48* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t48* G_B5_1 = {0};
	t48* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t48* G_B4_1 = {0};
	t48* G_B4_2 = {0};
	t47* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t48* G_B6_2 = {0};
	t48* G_B6_3 = {0};
	{
		t48* L_0 = (t48*)((t48*)SZArrayNew(t48_TI_var, 5));
		ArrayElementTypeCheck (L_0, (t47*) &_stringLiteral305);
		*((t47**)(t47**)SZArrayLdElema(L_0, 0)) = (t47*)(t47*) &_stringLiteral305;
		t48* L_1 = (t48*)L_0;
		t7 * L_2 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2724 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t7 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t7 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t7 * L_4 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2724 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (t7 *)L_4;
		t47* L_5 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, (t7 *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t47**)(t47**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t47*)G_B3_0;
		t48* L_7 = (t48*)G_B3_3;
		ArrayElementTypeCheck (L_7, (t47*) &_stringLiteral36);
		*((t47**)(t47**)SZArrayLdElema(L_7, 2)) = (t47*)(t47*) &_stringLiteral36;
		t48* L_8 = (t48*)L_7;
		t2494  L_9 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2724 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t2494  L_10 = L_9;
		t7 * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		t2494  L_12 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2724 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (t2494 )L_12;
		t47* L_13 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_14 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t47**)(t47**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t47*)G_B6_0;
		t48* L_15 = (t48*)G_B6_3;
		ArrayElementTypeCheck (L_15, (t47*) &_stringLiteral306);
		*((t47**)(t47**)SZArrayLdElema(L_15, 4)) = (t47*)(t47*) &_stringLiteral306;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_16 = m3262(NULL, (t48*)L_15, NULL);
		return L_16;
	}
}
#include "t2726.h"
#ifndef _MSC_VER
#else
#endif
#include "t2726MD.h"



extern "C" void m16218_gshared (t2726 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m16220_gshared (t2726 * __this, t7 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m16220((t2726 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m16222_gshared (t2726 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" t7 * m16224_gshared (t2726 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#include "t2728.h"
#ifndef _MSC_VER
#else
#endif
#include "t2728MD.h"

#include "t2492.h"
#include "t2496.h"
#include "t2500.h"
#include "t1106.h"
#include "t2498.h"
#include "t2492MD.h"
#include "t1106MD.h"
#include "t1100MD.h"


extern TypeInfo* t7_TI_var;
extern "C" void m16225_gshared (t2728 * __this, t2726 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = (t7 *)il2cpp_codegen_object_new (t7_TI_var);
		m162(L_0, NULL);
		__this->f0 = L_0;
		m162((t7 *)__this, NULL);
		t2726 * L_1 = p0;
		__this->f1 = L_1;
		return;
	}
}
extern "C" t7 * m16227_gshared (t2728 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f2);
		t2498  L_1 = (( t2498  (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2498  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (t7 *)L_3;
	}
}
extern "C" t7 * m16229_gshared (t2728 * __this, t7 * p0, const MethodInfo* method)
{
	t7 * V_0 = {0};
	{
		t2492 * L_0 = (t2492 *)(__this->f2);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t7 * L_1 = p0;
		t7 * L_2 = (( t7 * (*) (t2728 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2728 *)__this, (t7 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}

IL_0013:
	{
		t2492 * L_3 = (t2492 *)(__this->f2);
		t7 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, t7 *, t7 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (t2492 *)L_3, (t7 *)L_4, (t7 **)(&V_0));
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		t7 * L_6 = p0;
		t7 * L_7 = (( t7 * (*) (t2728 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2728 *)__this, (t7 *)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_7;
	}

IL_002e:
	{
		t7 * L_8 = V_0;
		return L_8;
	}
}
extern "C" t7 * m16231_gshared (t2728 * __this, t7 * p0, const MethodInfo* method)
{
	t7 * V_0 = {0};
	t7 * V_1 = {0};
	t7 * V_2 = {0};
	t2492 * V_3 = {0};
	t7 * V_4 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2726 * L_0 = (t2726 *)(__this->f1);
		t7 * L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(10 /* TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey) */, (t2726 *)L_0, (t7 *)L_1);
		V_0 = (t7 *)L_2;
		t7 * L_3 = (t7 *)(__this->f0);
		V_1 = (t7 *)L_3;
		t7 * L_4 = V_1;
		m4528(NULL, (t7 *)L_4, NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			t2492 * L_5 = (t2492 *)(__this->f2);
			if (L_5)
			{
				goto IL_0042;
			}
		}

IL_0025:
		{
			t2492 * L_6 = (t2492 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			__this->f2 = L_6;
			t2492 * L_7 = (t2492 *)(__this->f2);
			t7 * L_8 = p0;
			t7 * L_9 = V_0;
			VirtActionInvoker2< t7 *, t7 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (t2492 *)L_7, (t7 *)L_8, (t7 *)L_9);
			goto IL_0078;
		}

IL_0042:
		{
			t2492 * L_10 = (t2492 *)(__this->f2);
			t7 * L_11 = p0;
			bool L_12 = (bool)VirtFuncInvoker2< bool, t7 *, t7 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (t2492 *)L_10, (t7 *)L_11, (t7 **)(&V_2));
			if (!L_12)
			{
				goto IL_005d;
			}
		}

IL_0055:
		{
			t7 * L_13 = V_2;
			V_4 = (t7 *)L_13;
			IL2CPP_LEAVE(0x86, FINALLY_007d);
		}

IL_005d:
		{
			t2492 * L_14 = (t2492 *)(__this->f2);
			t2492 * L_15 = (t2492 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (t2492 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_15, (t7*)L_14, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			V_3 = (t2492 *)L_15;
			t2492 * L_16 = V_3;
			t7 * L_17 = p0;
			t7 * L_18 = V_0;
			VirtActionInvoker2< t7 *, t7 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (t2492 *)L_16, (t7 *)L_17, (t7 *)L_18);
			t2492 * L_19 = V_3;
			__this->f2 = L_19;
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x84, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		t7 * L_20 = V_1;
		m4529(NULL, (t7 *)L_20, NULL);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0084:
	{
		t7 * L_21 = V_0;
		return L_21;
	}

IL_0086:
	{
		t7 * L_22 = V_4;
		return L_22;
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" void m16233_gshared (t2728 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m16235_gshared (t2728 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f2);
		t2496 * L_1 = (( t2496 * (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_1;
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" bool m16237_gshared (t2728 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m16239_gshared (t2728 * __this, t7 * p0, t7 ** p1, const MethodInfo* method)
{
	{
		t7 ** L_0 = p1;
		t7 * L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(8 /* TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey) */, (t2728 *)__this, (t7 *)L_1);
		*L_0 = L_2;
		return 1;
	}
}
extern "C" t7* m16241_gshared (t2728 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f2);
		t2500 * L_1 = (( t2500 * (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" t7 * m16243_gshared (t2728 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2728 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2728 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" void m16245_gshared (t2728 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" void m16247_gshared (t2728 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" void m16249_gshared (t2728 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" bool m16251_gshared (t2728 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" void m16253_gshared (t2728 * __this, t2749* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" int32_t m16255_gshared (t2728 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (t2492 *)L_0);
		return L_1;
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" bool m16257_gshared (t2728 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" bool m16259_gshared (t2728 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1106_TI_var = il2cpp_codegen_type_info_from_index(1846);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1106 * L_0 = (t1106 *)il2cpp_codegen_object_new (t1106_TI_var);
		m9930(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m16261_gshared (t2728 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f2);
		t2498  L_1 = (( t2498  (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2498  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (t7*)L_3;
	}
}
#include "t2748.h"
#ifndef _MSC_VER
#else
#endif
#include "t2748MD.h"

#include "t2751.h"
#include "t2755.h"
#include "t708.h"
#include "t1403.h"
#include "t1404.h"
#include "t921.h"
#include "t1084.h"
#include "t1083.h"
#include "t2750.h"
#include "t2758.h"
#include "t2753.h"
#include "t2759.h"
#include "t711.h"
#include "t2364.h"
#include "t396.h"
#include "t2760.h"
#include "t347.h"
#include "t359.h"
#include "t708MD.h"
#include "t1404MD.h"
#include "t2751MD.h"
#include "t2755MD.h"
#include "t2750MD.h"
#include "t2758MD.h"
#include "t2753MD.h"
#include "t2759MD.h"
#include "t711MD.h"
#include "t2364MD.h"
#include "t396MD.h"
#include "t910MD.h"
#include "t2760MD.h"
#include "t921MD.h"
#include "t347MD.h"
#include "t1083MD.h"
struct t2748;
struct t3186;
struct t2750;
extern "C" void m18454_gshared (t2748 * __this, t3186* p0, int32_t p1, t2750 * p2, const MethodInfo* method);
#define m18454(__this, p0, p1, p2, method) (( void (*) (t2748 *, t3186*, int32_t, t2750 *, const MethodInfo*))m18454_gshared)(__this, p0, p1, p2, method)
struct t2748;
struct t52;
struct t2758;
extern "C" void m18456_gshared (t2748 * __this, t52 * p0, int32_t p1, t2758 * p2, const MethodInfo* method);
#define m18456(__this, p0, p1, p2, method) (( void (*) (t2748 *, t52 *, int32_t, t2758 *, const MethodInfo*))m18456_gshared)(__this, p0, p1, p2, method)
struct t2748;
struct t3122;
struct t2758;
extern "C" void m18457_gshared (t2748 * __this, t3122* p0, int32_t p1, t2758 * p2, const MethodInfo* method);
#define m18457(__this, p0, p1, p2, method) (( void (*) (t2748 *, t3122*, int32_t, t2758 *, const MethodInfo*))m18457_gshared)(__this, p0, p1, p2, method)


extern "C" void m16569_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		(( void (*) (t2748 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)__this, (int32_t)((int32_t)10), (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m16571_gshared (t2748 * __this, t7* p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		(( void (*) (t2748 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)__this, (int32_t)((int32_t)10), (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m16573_gshared (t2748 * __this, t7* p0, const MethodInfo* method)
{
	{
		t7* L_0 = p0;
		(( void (*) (t2748 *, t7*, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2748 *)__this, (t7*)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" void m16575_gshared (t2748 * __this, int32_t p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		int32_t L_0 = p0;
		(( void (*) (t2748 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)__this, (int32_t)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m16577_gshared (t2748 * __this, t7* p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2724  V_1 = {0};
	t7* V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t7* L_2 = p0;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		t7* L_5 = p1;
		(( void (*) (t2748 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)__this, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t7* L_6 = p0;
		t7* L_7 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_6);
		V_2 = (t7*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			t7* L_8 = V_2;
			t2724  L_9 = (t2724 )InterfaceFuncInvoker0< t2724  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_8);
			V_1 = (t2724 )L_9;
			t7 * L_10 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2724 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			t2494  L_11 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2724 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< t7 *, t2494  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (t2748 *)__this, (t7 *)L_10, (t2494 )L_11);
		}

IL_0047:
		{
			t7* L_12 = V_2;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, (t7 *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			t7* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			t7* L_15 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, (t7 *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_005c:
	{
		return;
	}
}
extern "C" void m16579_gshared (t2748 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t921 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern "C" t7* m16581_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2751 * L_0 = (( t2751 * (*) (t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
extern "C" t7* m16583_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2755 * L_0 = (( t2755 * (*) (t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
extern "C" t7 * m16585_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		if (!((t7 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (t2748 *)__this, (t7 *)((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_3 = p0;
		t7 * L_4 = (( t7 * (*) (t2748 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2748 *)__this, (t7 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t2494  L_5 = (t2494 )VirtFuncInvoker1< t2494 , t7 * >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey) */, (t2748 *)__this, (t7 *)L_4);
		t2494  L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
extern "C" void m16587_gshared (t2748 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2748 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2748 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		t2494  L_3 = (( t2494  (*) (t2748 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2748 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, t2494  >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue) */, (t2748 *)__this, (t7 *)L_1, (t2494 )L_3);
		return;
	}
}
extern "C" void m16589_gshared (t2748 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2748 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2748 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		t2494  L_3 = (( t2494  (*) (t2748 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2748 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, t2494  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (t2748 *)__this, (t7 *)L_1, (t2494 )L_3);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m16591_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (!((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t7 * L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (t2748 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m16593_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (!((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t7 * L_3 = p0;
		VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (t2748 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
extern "C" bool m16595_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m16597_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m16599_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m16601_gshared (t2748 * __this, t2724  p0, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2724 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2494  L_1 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2724 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, t2494  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (t2748 *)__this, (t7 *)L_0, (t2494 )L_1);
		return;
	}
}
extern "C" bool m16603_gshared (t2748 * __this, t2724  p0, const MethodInfo* method)
{
	{
		t2724  L_0 = p0;
		bool L_1 = (( bool (*) (t2748 *, t2724 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2748 *)__this, (t2724 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
extern "C" void m16605_gshared (t2748 * __this, t3122* p0, int32_t p1, const MethodInfo* method)
{
	{
		t3122* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2748 *, t3122*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2748 *)__this, (t3122*)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
extern "C" bool m16607_gshared (t2748 * __this, t2724  p0, const MethodInfo* method)
{
	{
		t2724  L_0 = p0;
		bool L_1 = (( bool (*) (t2748 *, t2724 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2748 *)__this, (t2724 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t7 * L_2 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2724 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (t2748 *)__this, (t7 *)L_2);
		return L_3;
	}
}
extern TypeInfo* t3186_TI_var;
extern "C" void m16609_gshared (t2748 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3186_TI_var = il2cpp_codegen_type_info_from_index(6377);
		s_Il2CppMethodIntialized = true;
	}
	t3122* V_0 = {0};
	t3186* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3186* G_B5_1 = {0};
	t2748 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3186* G_B4_1 = {0};
	t2748 * G_B4_2 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t3122*)((t3122*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		t3122* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t3122* L_2 = V_0;
		int32_t L_3 = p1;
		(( void (*) (t2748 *, t3122*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2748 *)__this, (t3122*)L_2, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		t52 * L_4 = p0;
		int32_t L_5 = p1;
		(( void (*) (t2748 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2748 *)__this, (t52 *)L_4, (int32_t)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t52 * L_6 = p0;
		V_1 = (t3186*)((t3186*)IsInst(L_6, t3186_TI_var));
		t3186* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		t3186* L_8 = V_1;
		int32_t L_9 = p1;
		t2750 * L_10 = ((t2748_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((t2748 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((t2748 *)(__this));
			goto IL_0040;
		}
	}
	{
		t226 L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		t2750 * L_12 = (t2750 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (t2750 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (t7 *)NULL, (t226)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((t2748_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t2748 *)(G_B4_2));
	}

IL_0040:
	{
		t2750 * L_13 = ((t2748_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		(( void (*) (t2748 *, t3186*, int32_t, t2750 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((t2748 *)G_B5_2, (t3186*)G_B5_1, (int32_t)G_B5_0, (t2750 *)L_13, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		t52 * L_14 = p0;
		int32_t L_15 = p1;
		t226 L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2758 * L_17 = (t2758 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2758 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (t7 *)NULL, (t226)L_16, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2748 *, t52 *, int32_t, t2758 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((t2748 *)__this, (t52 *)L_14, (int32_t)L_15, (t2758 *)L_17, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
extern "C" t7 * m16611_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2753  L_0 = {0};
		(( void (*) (t2753 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2753  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" t7* m16613_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2753  L_0 = {0};
		(( void (*) (t2753 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2753  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7*)L_2;
	}
}
extern "C" t7 * m16615_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2759 * L_0 = (t2759 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (t2759 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
extern "C" int32_t m16617_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f10);
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1404_TI_var;
extern "C" t2494  m16619_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1404_TI_var = il2cpp_codegen_type_info_from_index(3793);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		t1018* L_6 = (t1018*)(__this->f4);
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_14 = (t7*)(__this->f12);
		t69* L_15 = (t69*)(__this->f6);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t7 * L_18 = p0;
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_14, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_15, L_17)), (t7 *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		t2749* L_20 = (t2749*)(__this->f7);
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		return (*(t2494 *)(t2494 *)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		t2432* L_23 = (t2432*)(__this->f5);
		int32_t L_24 = V_1;
		int32_t L_25 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_23, L_24))->f1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		t1404 * L_27 = (t1404 *)il2cpp_codegen_object_new (t1404_TI_var);
		m7016(L_27, NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m16621_gshared (t2748 * __this, t7 * p0, t2494  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		t1018* L_7 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_7)->max_length)))));
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t2432* L_12 = (t2432*)(__this->f5);
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_12, L_13))->f0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		t7* L_16 = (t7*)(__this->f12);
		t69* L_17 = (t69*)(__this->f6);
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		t7 * L_20 = p0;
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_17, L_19)), (t7 *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		t2432* L_23 = (t2432*)(__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_23, L_24))->f1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->f10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->f10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->f11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		t1018* L_33 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->f9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->f8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->f8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		t2432* L_39 = (t2432*)(__this->f5);
		int32_t L_40 = V_2;
		int32_t L_41 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_39, L_40))->f1);
		__this->f9 = L_41;
	}

IL_0101:
	{
		t2432* L_42 = (t2432*)(__this->f5);
		int32_t L_43 = V_2;
		t1018* L_44 = (t1018*)(__this->f4);
		int32_t L_45 = V_1;
		int32_t L_46 = L_45;
		((t1403 *)(t1403 *)SZArrayLdElema(L_42, L_43))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		t1018* L_47 = (t1018*)(__this->f4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		t2432* L_50 = (t2432*)(__this->f5);
		int32_t L_51 = V_2;
		int32_t L_52 = V_0;
		((t1403 *)(t1403 *)SZArrayLdElema(L_50, L_51))->f0 = L_52;
		t69* L_53 = (t69*)(__this->f6);
		int32_t L_54 = V_2;
		t7 * L_55 = p0;
		*((t7 **)(t7 **)SZArrayLdElema(L_53, L_54)) = (t7 *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t2432* L_57 = (t2432*)(__this->f5);
		int32_t L_58 = V_3;
		t2432* L_59 = (t2432*)(__this->f5);
		int32_t L_60 = V_2;
		int32_t L_61 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_59, L_60))->f1);
		((t1403 *)(t1403 *)SZArrayLdElema(L_57, L_58))->f1 = L_61;
		t2432* L_62 = (t2432*)(__this->f5);
		int32_t L_63 = V_2;
		t1018* L_64 = (t1018*)(__this->f4);
		int32_t L_65 = V_1;
		int32_t L_66 = L_65;
		((t1403 *)(t1403 *)SZArrayLdElema(L_62, L_63))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		t1018* L_67 = (t1018*)(__this->f4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		t2749* L_70 = (t2749*)(__this->f7);
		int32_t L_71 = V_2;
		t2494  L_72 = p1;
		*((t2494 *)(t2494 *)SZArrayLdElema(L_70, L_71)) = (t2494 )L_72;
		int32_t L_73 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2364_TI_var;
extern "C" void m16623_gshared (t2748 * __this, int32_t p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	t2748 * G_B4_0 = {0};
	t2748 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t2748 * G_B5_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_1, (t47*)(t47*) &_stringLiteral1326, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t7* L_2 = p1;
		G_B3_0 = ((t2748 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((t2748 *)(__this));
			goto IL_0018;
		}
	}
	{
		t7* L_3 = p1;
		V_0 = (t7*)L_3;
		t7* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((t2748 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_5 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((t7*)(L_5));
		G_B5_1 = ((t2748 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		int32_t L_6 = p0;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		p0 = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = p0;
		p0 = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = p0;
		(( void (*) (t2748 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2748 *)__this, (int32_t)L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f14 = 0;
		return;
	}
}
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m16625_gshared (t2748 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t2432_TI_var = il2cpp_codegen_type_info_from_index(6378);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		__this->f4 = ((t1018*)SZArrayNew(t1018_TI_var, L_0));
		int32_t L_1 = p0;
		__this->f5 = ((t2432*)SZArrayNew(t2432_TI_var, L_1));
		__this->f9 = (-1);
		int32_t L_2 = p0;
		__this->f6 = ((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = p0;
		__this->f7 = ((t2749*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->f8 = 0;
		t1018* L_4 = (t1018*)(__this->f4);
		__this->f11 = (((int32_t)((float)((float)(((float)(((int32_t)(((t52 *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->f11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		t1018* L_6 = (t1018*)(__this->f4);
		if ((((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m16627_gshared (t2748 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t52 * L_0 = p0;
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
		int32_t L_4 = p1;
		t52 * L_5 = p0;
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		t396 * L_7 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_7, (t47*)(t47*) &_stringLiteral1327, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		t52 * L_8 = p0;
		int32_t L_9 = m4505((t52 *)L_8, NULL);
		int32_t L_10 = p1;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (t2748 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_12 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_12, (t47*)(t47*) &_stringLiteral1328, NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
extern "C" t2724  m16629_gshared (t7 * __this , t7 * p0, t2494  p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t2494  L_1 = p1;
		t2724  L_2 = {0};
		(( void (*) (t2724 *, t7 *, t2494 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (t7 *)L_0, (t2494 )L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
extern "C" t7 * m16631_gshared (t7 * __this , t7 * p0, t2494  p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		return L_0;
	}
}
extern "C" t2494  m16633_gshared (t7 * __this , t7 * p0, t2494  p1, const MethodInfo* method)
{
	{
		t2494  L_0 = p1;
		return L_0;
	}
}
extern "C" void m16635_gshared (t2748 * __this, t3122* p0, int32_t p1, const MethodInfo* method)
{
	{
		t3122* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2748 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2748 *)__this, (t52 *)(t52 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t3122* L_2 = p0;
		int32_t L_3 = p1;
		t226 L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2758 * L_5 = (t2758 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2758 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (t7 *)NULL, (t226)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2748 *, t3122*, int32_t, t2758 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((t2748 *)__this, (t3122*)L_2, (int32_t)L_3, (t2758 *)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
extern TypeInfo* t910_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m16637_gshared (t2748 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t2432_TI_var = il2cpp_codegen_type_info_from_index(6378);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1018* V_1 = {0};
	t2432* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t69* V_7 = {0};
	t2749* V_8 = {0};
	int32_t V_9 = 0;
	{
		t1018* L_0 = (t1018*)(__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t910_TI_var);
		int32_t L_1 = m7213(NULL, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (t1018*)((t1018*)SZArrayNew(t1018_TI_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (t2432*)((t2432*)SZArrayNew(t2432_TI_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		t1018* L_4 = (t1018*)(__this->f4);
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		t2432* L_7 = V_2;
		int32_t L_8 = V_4;
		t7* L_9 = (t7*)(__this->f12);
		t69* L_10 = (t69*)(__this->f6);
		int32_t L_11 = V_4;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_9, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((t1403 *)(t1403 *)SZArrayLdElema(L_7, L_8))->f0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		t2432* L_18 = V_2;
		int32_t L_19 = V_4;
		t1018* L_20 = V_1;
		int32_t L_21 = V_6;
		int32_t L_22 = L_21;
		((t1403 *)(t1403 *)SZArrayLdElema(L_18, L_19))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		t1018* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		t2432* L_26 = (t2432*)(__this->f5);
		int32_t L_27 = V_4;
		int32_t L_28 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_26, L_27))->f1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		t1018* L_32 = (t1018*)(__this->f4);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t52 *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		t1018* L_33 = V_1;
		__this->f4 = L_33;
		t2432* L_34 = V_2;
		__this->f5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (t69*)((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (t2749*)((t2749*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		t69* L_37 = (t69*)(__this->f6);
		t69* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_37, (int32_t)0, (t52 *)(t52 *)L_38, (int32_t)0, (int32_t)L_39, NULL);
		t2749* L_40 = (t2749*)(__this->f7);
		t2749* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_40, (int32_t)0, (t52 *)(t52 *)L_41, (int32_t)0, (int32_t)L_42, NULL);
		t69* L_43 = V_7;
		__this->f6 = L_43;
		t2749* L_44 = V_8;
		__this->f7 = L_44;
		int32_t L_45 = V_0;
		__this->f11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m16639_gshared (t2748 * __this, t7 * p0, t2494  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		t1018* L_7 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_7)->max_length)))));
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		t2432* L_11 = (t2432*)(__this->f5);
		int32_t L_12 = V_2;
		int32_t L_13 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_15 = (t7*)(__this->f12);
		t69* L_16 = (t69*)(__this->f6);
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		t7 * L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_15, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_16, L_18)), (t7 *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		t396 * L_21 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_21, (t47*)(t47*) &_stringLiteral1330, NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		t2432* L_22 = (t2432*)(__this->f5);
		int32_t L_23 = V_2;
		int32_t L_24 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_22, L_23))->f1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->f10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->f10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->f11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		t1018* L_31 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->f9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->f8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->f8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		t2432* L_37 = (t2432*)(__this->f5);
		int32_t L_38 = V_2;
		int32_t L_39 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_37, L_38))->f1);
		__this->f9 = L_39;
	}

IL_00f9:
	{
		t2432* L_40 = (t2432*)(__this->f5);
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		((t1403 *)(t1403 *)SZArrayLdElema(L_40, L_41))->f0 = L_42;
		t2432* L_43 = (t2432*)(__this->f5);
		int32_t L_44 = V_2;
		t1018* L_45 = (t1018*)(__this->f4);
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		((t1403 *)(t1403 *)SZArrayLdElema(L_43, L_44))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		t1018* L_48 = (t1018*)(__this->f4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		t69* L_51 = (t69*)(__this->f6);
		int32_t L_52 = V_2;
		t7 * L_53 = p0;
		*((t7 **)(t7 **)SZArrayLdElema(L_51, L_52)) = (t7 *)L_53;
		t2749* L_54 = (t2749*)(__this->f7);
		int32_t L_55 = V_2;
		t2494  L_56 = p1;
		*((t2494 *)(t2494 *)SZArrayLdElema(L_54, L_55)) = (t2494 )L_56;
		int32_t L_57 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
extern "C" void m16641_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		__this->f10 = 0;
		t1018* L_0 = (t1018*)(__this->f4);
		t1018* L_1 = (t1018*)(__this->f4);
		m5606(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_1)->max_length))), NULL);
		t69* L_2 = (t69*)(__this->f6);
		t69* L_3 = (t69*)(__this->f6);
		m5606(NULL, (t52 *)(t52 *)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), NULL);
		t2749* L_4 = (t2749*)(__this->f7);
		t2749* L_5 = (t2749*)(__this->f7);
		m5606(NULL, (t52 *)(t52 *)L_4, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_5)->max_length))), NULL);
		t2432* L_6 = (t2432*)(__this->f5);
		t2432* L_7 = (t2432*)(__this->f5);
		m5606(NULL, (t52 *)(t52 *)L_6, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_7)->max_length))), NULL);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m16643_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		t1018* L_6 = (t1018*)(__this->f4);
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		t7* L_14 = (t7*)(__this->f12);
		t69* L_15 = (t69*)(__this->f6);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t7 * L_18 = p0;
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_14, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_15, L_17)), (t7 *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t2432* L_20 = (t2432*)(__this->f5);
		int32_t L_21 = V_1;
		int32_t L_22 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_20, L_21))->f1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern TypeInfo* t2760_TI_var;
extern "C" bool m16645_gshared (t2748 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2760_TI_var = il2cpp_codegen_type_info_from_index(5882);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2760_TI_var);
		t2760 * L_0 = (( t2760 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (t7*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		t1018* L_1 = (t1018*)(__this->f4);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		t7* L_4 = V_0;
		t2749* L_5 = (t2749*)(__this->f7);
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		t2494  L_8 = p0;
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, t2494 , t2494  >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (t7*)L_4, (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_5, L_7)), (t2494 )L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_2;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		t1018* L_16 = (t1018*)(__this->f4);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t52 *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m16647_gshared (t2748 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t3122* V_0 = {0};
	{
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t921 * L_2 = p0;
		int32_t L_3 = (int32_t)(__this->f14);
		m4515((t921 *)L_2, (t47*)(t47*) &_stringLiteral372, (int32_t)L_3, NULL);
		t921 * L_4 = p0;
		t7* L_5 = (t7*)(__this->f12);
		m4525((t921 *)L_4, (t47*)(t47*) &_stringLiteral374, (t7 *)L_5, NULL);
		V_0 = (t3122*)NULL;
		int32_t L_6 = (int32_t)(__this->f10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->f10);
		V_0 = (t3122*)((t3122*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		t3122* L_8 = V_0;
		(( void (*) (t2748 *, t3122*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2748 *)__this, (t3122*)L_8, (int32_t)0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		t921 * L_9 = p0;
		t1018* L_10 = (t1018*)(__this->f4);
		m4515((t921 *)L_9, (t47*)(t47*) &_stringLiteral1331, (int32_t)(((int32_t)(((t52 *)L_10)->max_length))), NULL);
		t921 * L_11 = p0;
		t3122* L_12 = V_0;
		m4525((t921 *)L_11, (t47*)(t47*) &_stringLiteral1332, (t7 *)(t7 *)L_12, NULL);
		return;
	}
}
extern TypeInfo* t347_TI_var;
extern "C" void m16649_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t3122* V_1 = {0};
	int32_t V_2 = 0;
	{
		t921 * L_0 = (t921 *)(__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t921 * L_1 = (t921 *)(__this->f13);
		int32_t L_2 = m4524((t921 *)L_1, (t47*)(t47*) &_stringLiteral372, NULL);
		__this->f14 = L_2;
		t921 * L_3 = (t921 *)(__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_4 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), NULL);
		t7 * L_5 = m4516((t921 *)L_3, (t47*)(t47*) &_stringLiteral374, (t347 *)L_4, NULL);
		__this->f12 = ((t7*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		t921 * L_6 = (t921 *)(__this->f13);
		int32_t L_7 = m4524((t921 *)L_6, (t47*)(t47*) &_stringLiteral1331, NULL);
		V_0 = (int32_t)L_7;
		t921 * L_8 = (t921 *)(__this->f13);
		t347 * L_9 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), NULL);
		t7 * L_10 = m4516((t921 *)L_8, (t47*)(t47*) &_stringLiteral1332, (t347 *)L_9, NULL);
		V_1 = (t3122*)((t3122*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (t2748 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2748 *)__this, (int32_t)L_12, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f10 = 0;
		t3122* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		t3122* L_14 = V_1;
		int32_t L_15 = V_2;
		t7 * L_16 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2724 *)((t2724 *)(t2724 *)SZArrayLdElema(L_14, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t3122* L_17 = V_1;
		int32_t L_18 = V_2;
		t2494  L_19 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2724 *)((t2724 *)(t2724 *)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, t2494  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (t2748 *)__this, (t7 *)L_16, (t2494 )L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		t3122* L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t52 *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->f13 = (t921 *)NULL;
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t7_TI_var;
extern TypeInfo* t2494_TI_var;
extern "C" bool m16651_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		t2494_TI_var = il2cpp_codegen_type_info_from_index(5433);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t7 * V_4 = {0};
	t2494  V_5 = {0};
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		t1018* L_7 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_7)->max_length)))));
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		t2432* L_12 = (t2432*)(__this->f5);
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_12, L_13))->f0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		t7* L_16 = (t7*)(__this->f12);
		t69* L_17 = (t69*)(__this->f6);
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		t7 * L_20 = p0;
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_17, L_19)), (t7 *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		t2432* L_23 = (t2432*)(__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_23, L_24))->f1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		t1018* L_30 = (t1018*)(__this->f4);
		int32_t L_31 = V_1;
		t2432* L_32 = (t2432*)(__this->f5);
		int32_t L_33 = V_2;
		int32_t L_34 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_32, L_33))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t2432* L_35 = (t2432*)(__this->f5);
		int32_t L_36 = V_3;
		t2432* L_37 = (t2432*)(__this->f5);
		int32_t L_38 = V_2;
		int32_t L_39 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_37, L_38))->f1);
		((t1403 *)(t1403 *)SZArrayLdElema(L_35, L_36))->f1 = L_39;
	}

IL_00e9:
	{
		t2432* L_40 = (t2432*)(__this->f5);
		int32_t L_41 = V_2;
		int32_t L_42 = (int32_t)(__this->f9);
		((t1403 *)(t1403 *)SZArrayLdElema(L_40, L_41))->f1 = L_42;
		int32_t L_43 = V_2;
		__this->f9 = L_43;
		t2432* L_44 = (t2432*)(__this->f5);
		int32_t L_45 = V_2;
		((t1403 *)(t1403 *)SZArrayLdElema(L_44, L_45))->f0 = 0;
		t69* L_46 = (t69*)(__this->f6);
		int32_t L_47 = V_2;
		Initobj (t7_TI_var, (&V_4));
		t7 * L_48 = V_4;
		*((t7 **)(t7 **)SZArrayLdElema(L_46, L_47)) = (t7 *)L_48;
		t2749* L_49 = (t2749*)(__this->f7);
		int32_t L_50 = V_2;
		Initobj (t2494_TI_var, (&V_5));
		t2494  L_51 = V_5;
		*((t2494 *)(t2494 *)SZArrayLdElema(L_49, L_50)) = (t2494 )L_51;
		int32_t L_52 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t2494_TI_var;
extern "C" bool m16653_gshared (t2748 * __this, t7 * p0, t2494 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t2494_TI_var = il2cpp_codegen_type_info_from_index(5433);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t2494  V_2 = {0};
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		t1018* L_6 = (t1018*)(__this->f4);
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		t7* L_14 = (t7*)(__this->f12);
		t69* L_15 = (t69*)(__this->f6);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t7 * L_18 = p0;
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_14, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_15, L_17)), (t7 *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		t2494 * L_20 = p1;
		t2749* L_21 = (t2749*)(__this->f7);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		*L_20 = (*(t2494 *)(t2494 *)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		t2432* L_24 = (t2432*)(__this->f5);
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_24, L_25))->f1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		t2494 * L_28 = p1;
		Initobj (t2494_TI_var, (&V_2));
		t2494  L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
extern "C" t2751 * m16655_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2751 * L_0 = (t2751 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (t2751 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
extern "C" t2755 * m16657_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2755 * L_0 = (t2755 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (t2755 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t7 * m16659_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), NULL);
		t47* L_4 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Type::ToString() */, (t347 *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_5 = m207(NULL, (t47*)(t47*) &_stringLiteral1333, (t47*)L_4, NULL);
		t396 * L_6 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_6, (t47*)L_5, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		t7 * L_7 = p0;
		return ((t7 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
extern TypeInfo* t347_TI_var;
extern TypeInfo* t2494_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t2494  m16661_gshared (t2748 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t2494_TI_var = il2cpp_codegen_type_info_from_index(5433);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t2494  V_0 = {0};
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_1 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), NULL);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (t347 *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (t2494_TI_var, (&V_0));
		t2494  L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		t7 * L_4 = p0;
		if (((t7 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), NULL);
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Type::ToString() */, (t347 *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = m207(NULL, (t47*)(t47*) &_stringLiteral1333, (t47*)L_6, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_8, (t47*)L_7, (t47*)(t47*) &_stringLiteral563, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		t7 * L_9 = p0;
		return ((*(t2494 *)((t2494 *)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
extern TypeInfo* t2760_TI_var;
extern "C" bool m16663_gshared (t2748 * __this, t2724  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2760_TI_var = il2cpp_codegen_type_info_from_index(5882);
		s_Il2CppMethodIntialized = true;
	}
	t2494  V_0 = {0};
	{
		t7 * L_0 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2724 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t7 *, t2494 * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&) */, (t2748 *)__this, (t7 *)L_0, (t2494 *)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2760_TI_var);
		t2760 * L_2 = (( t2760 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		t2494  L_3 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2724 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t2494  L_4 = V_0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, t2494 , t2494  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (t2760 *)L_2, (t2494 )L_3, (t2494 )L_4);
		return L_5;
	}
}
extern "C" t2753  m16665_gshared (t2748 * __this, const MethodInfo* method)
{
	{
		t2753  L_0 = {0};
		(( void (*) (t2753 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2748 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
extern "C" t1083  m16667_gshared (t7 * __this , t7 * p0, t2494  p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		t2494  L_2 = p1;
		t2494  L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		t1083  L_5 = {0};
		m4503(&L_5, (t7 *)((t7 *)L_1), (t7 *)L_4, NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t61.h"
#include "t2752.h"
#include "t2754.h"
#include "t61MD.h"
#include "t2754MD.h"
#include "t2752MD.h"
struct t2748;
struct t52;
struct t2754;
extern "C" void m18450_gshared (t2748 * __this, t52 * p0, int32_t p1, t2754 * p2, const MethodInfo* method);
#define m18450(__this, p0, p1, p2, method) (( void (*) (t2748 *, t52 *, int32_t, t2754 *, const MethodInfo*))m18450_gshared)(__this, p0, p1, p2, method)
struct t2748;
struct t69;
struct t2754;
extern "C" void m18449_gshared (t2748 * __this, t69* p0, int32_t p1, t2754 * p2, const MethodInfo* method);
#define m18449(__this, p0, p1, p2, method) (( void (*) (t2748 *, t69*, int32_t, t2754 *, const MethodInfo*))m18449_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m16668_gshared (t2751 * __this, t2748 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2748 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2748 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m16669_gshared (t2751 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m16670_gshared (t2751 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m16671_gshared (t2751 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (t2748 *)L_0, (t7 *)L_1);
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m16672_gshared (t2751 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m16673_gshared (t2751 * __this, const MethodInfo* method)
{
	{
		t2752  L_0 = (( t2752  (*) (t2751 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2751 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2752  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m16674_gshared (t2751 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	t69* V_0 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t69*)((t69*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t69* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t69* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t69*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TKey[],System.Int32) */, (t2751 *)__this, (t69*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2748 * L_4 = (t2748 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2748 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2748 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2748 * L_7 = (t2748 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2754 * L_11 = (t2754 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2754 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2748 *, t52 *, int32_t, t2754 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2748 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2754 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m16675_gshared (t2751 * __this, const MethodInfo* method)
{
	{
		t2752  L_0 = (( t2752  (*) (t2751 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2751 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2752  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m16676_gshared (t2751 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m16677_gshared (t2751 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m16678_gshared (t2751 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m16679_gshared (t2751 * __this, t69* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t69* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2748 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2748 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2748 * L_3 = (t2748 *)(__this->f0);
		t69* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2754 * L_7 = (t2754 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2754 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2748 *, t69*, int32_t, t2754 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2748 *)L_3, (t69*)L_4, (int32_t)L_5, (t2754 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2752  m16680_gshared (t2751 * __this, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t2752  L_1 = {0};
		(( void (*) (t2752 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2748 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m16681_gshared (t2751 * __this, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (t2748 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m16682_gshared (t2752 * __this, t2748 * p0, const MethodInfo* method)
{
	{
		t2748 * L_0 = p0;
		t2753  L_1 = (( t2753  (*) (t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m16683_gshared (t2752 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		t7 * L_1 = (( t7 * (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t7 * L_2 = L_1;
		return ((t7 *)L_2);
	}
}
extern "C" void m16684_gshared (t2752 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m16685_gshared (t2752 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" t7 * m16686_gshared (t2752 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		t2724 * L_1 = (t2724 *)&(L_0->f3);
		t7 * L_2 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2724 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1280.h"
#include "t1280MD.h"


extern "C" void m16687_gshared (t2753 * __this, t2748 * p0, const MethodInfo* method)
{
	{
		t2748 * L_0 = p0;
		__this->f0 = L_0;
		t2748 * L_1 = p0;
		int32_t L_2 = (int32_t)(L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern "C" t7 * m16688_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2724  L_0 = (t2724 )(__this->f3);
		t2724  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" t1083  m16689_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2724 * L_0 = (t2724 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2724 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t7 * L_2 = L_1;
		t2724 * L_3 = (t2724 *)&(__this->f3);
		t2494  L_4 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2724 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t2494  L_5 = L_4;
		t7 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		t1083  L_7 = {0};
		m4503(&L_7, (t7 *)((t7 *)L_2), (t7 *)L_6, NULL);
		return L_7;
	}
}
extern "C" t7 * m16690_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t7 * L_1 = L_0;
		return ((t7 *)L_1);
	}
}
extern "C" t7 * m16691_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		t2494  L_0 = (( t2494  (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		t2494  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
extern "C" bool m16692_gshared (t2753 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->f1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->f1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		t2748 * L_4 = (t2748 *)(__this->f0);
		t2432* L_5 = (t2432*)(L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t2748 * L_8 = (t2748 *)(__this->f0);
		t69* L_9 = (t69*)(L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t2748 * L_12 = (t2748 *)(__this->f0);
		t2749* L_13 = (t2749*)(L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t2724  L_16 = {0};
		(( void (*) (t2724 *, t7 *, t2494 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_9, L_11)), (t2494 )(*(t2494 *)(t2494 *)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->f1);
		t2748 * L_18 = (t2748 *)(__this->f0);
		int32_t L_19 = (int32_t)(L_18->f8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern "C" t2724  m16693_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		t2724  L_0 = (t2724 )(__this->f3);
		return L_0;
	}
}
extern "C" t7 * m16694_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2724 * L_0 = (t2724 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2724 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" t2494  m16695_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2724 * L_0 = (t2724 *)&(__this->f3);
		t2494  L_1 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2724 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern TypeInfo* t1280_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m16696_gshared (t2753 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1280_TI_var = il2cpp_codegen_type_info_from_index(2363);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1280 * L_1 = (t1280 *)il2cpp_codegen_object_new (t1280_TI_var);
		m5620(L_1, (t47*)NULL, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t2748 * L_2 = (t2748 *)(__this->f0);
		int32_t L_3 = (int32_t)(L_2->f14);
		int32_t L_4 = (int32_t)(__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1098 * L_5 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_5, (t47*)(t47*) &_stringLiteral1334, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" void m16697_gshared (t2753 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2753 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1335, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
extern "C" void m16698_gshared (t2753 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (t2748 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m16699_gshared (t2754 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m16700_gshared (t2754 * __this, t7 * p0, t2494  p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m16700((t2754 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t2494_TI_var;
extern "C" t7 * m16701_gshared (t2754 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2494_TI_var = il2cpp_codegen_type_info_from_index(5433);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t2494_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t7 * m16702_gshared (t2754 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#ifndef _MSC_VER
#else
#endif

#include "t2756.h"
#include "t2757.h"
#include "t2757MD.h"
#include "t2756MD.h"
struct t2748;
struct t52;
struct t2757;
extern "C" void m18452_gshared (t2748 * __this, t52 * p0, int32_t p1, t2757 * p2, const MethodInfo* method);
#define m18452(__this, p0, p1, p2, method) (( void (*) (t2748 *, t52 *, int32_t, t2757 *, const MethodInfo*))m18452_gshared)(__this, p0, p1, p2, method)
struct t2748;
struct t2749;
struct t2757;
extern "C" void m18453_gshared (t2748 * __this, t2749* p0, int32_t p1, t2757 * p2, const MethodInfo* method);
#define m18453(__this, p0, p1, p2, method) (( void (*) (t2748 *, t2749*, int32_t, t2757 *, const MethodInfo*))m18453_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m16703_gshared (t2755 * __this, t2748 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2748 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2748 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m16704_gshared (t2755 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m16705_gshared (t2755 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m16706_gshared (t2755 * __this, t2494  p0, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t2494  L_1 = p0;
		bool L_2 = (( bool (*) (t2748 *, t2494 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)L_0, (t2494 )L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m16707_gshared (t2755 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m16708_gshared (t2755 * __this, const MethodInfo* method)
{
	{
		t2756  L_0 = (( t2756  (*) (t2755 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2755 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2756  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m16709_gshared (t2755 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	t2749* V_0 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t2749*)((t2749*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t2749* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t2749* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t2749*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32) */, (t2755 *)__this, (t2749*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2748 * L_4 = (t2748 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2748 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2748 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2748 * L_7 = (t2748 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2757 * L_11 = (t2757 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2757 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2748 *, t52 *, int32_t, t2757 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2748 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2757 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m16710_gshared (t2755 * __this, const MethodInfo* method)
{
	{
		t2756  L_0 = (( t2756  (*) (t2755 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2755 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2756  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m16711_gshared (t2755 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m16712_gshared (t2755 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m16713_gshared (t2755 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m16714_gshared (t2755 * __this, t2749* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t2749* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2748 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2748 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2748 * L_3 = (t2748 *)(__this->f0);
		t2749* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2757 * L_7 = (t2757 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2757 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2748 *, t2749*, int32_t, t2757 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2748 *)L_3, (t2749*)L_4, (int32_t)L_5, (t2757 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2756  m16715_gshared (t2755 * __this, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		t2756  L_1 = {0};
		(( void (*) (t2756 *, t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2748 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m16716_gshared (t2755 * __this, const MethodInfo* method)
{
	{
		t2748 * L_0 = (t2748 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (t2748 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m16717_gshared (t2756 * __this, t2748 * p0, const MethodInfo* method)
{
	{
		t2748 * L_0 = p0;
		t2753  L_1 = (( t2753  (*) (t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m16718_gshared (t2756 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		t2494  L_1 = (( t2494  (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2494  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
extern "C" void m16719_gshared (t2756 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		(( void (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m16720_gshared (t2756 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" t2494  m16721_gshared (t2756 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		t2724 * L_1 = (t2724 *)&(L_0->f3);
		t2494  L_2 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2724 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m16722_gshared (t2757 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t2494  m16723_gshared (t2757 * __this, t7 * p0, t2494  p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m16723((t2757 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2494  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2494  (*FunctionPointerType) (t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2494  (*FunctionPointerType) (t7 * __this, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t2494_TI_var;
extern "C" t7 * m16724_gshared (t2757 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2494_TI_var = il2cpp_codegen_type_info_from_index(5433);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t2494_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t2494  m16725_gshared (t2757 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2494 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m16726_gshared (t2750 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1083  m16727_gshared (t2750 * __this, t7 * p0, t2494  p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m16727((t2750 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t2494_TI_var;
extern "C" t7 * m16728_gshared (t2750 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2494_TI_var = il2cpp_codegen_type_info_from_index(5433);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t2494_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1083  m16729_gshared (t2750 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1083 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m16730_gshared (t2758 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t2724  m16731_gshared (t2758 * __this, t7 * p0, t2494  p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m16731((t2758 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2724  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2724  (*FunctionPointerType) (t7 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2724  (*FunctionPointerType) (t7 * __this, t2494  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t2494_TI_var;
extern "C" t7 * m16732_gshared (t2758 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2494_TI_var = il2cpp_codegen_type_info_from_index(5433);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t2494_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t2724  m16733_gshared (t2758 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2724 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m16734_gshared (t2759 * __this, t2748 * p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t2748 * L_0 = p0;
		t2753  L_1 = (( t2753  (*) (t2748 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2748 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" bool m16735_gshared (t2759 * __this, const MethodInfo* method)
{
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern TypeInfo* t1082_TI_var;
extern "C" t1083  m16736_gshared (t2759 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1082_TI_var = il2cpp_codegen_type_info_from_index(1841);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2753  L_0 = (t2753 )(__this->f0);
		t2753  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1083  L_3 = (t1083 )InterfaceFuncInvoker0< t1083  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, t1082_TI_var, (t7 *)L_2);
		return L_3;
	}
}
extern "C" t7 * m16737_gshared (t2759 * __this, const MethodInfo* method)
{
	t2724  V_0 = {0};
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		t2724  L_1 = (( t2724  (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2724 )L_1;
		t7 * L_2 = (( t7 * (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2724 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t7 * L_3 = L_2;
		return ((t7 *)L_3);
	}
}
extern "C" t7 * m16738_gshared (t2759 * __this, const MethodInfo* method)
{
	t2724  V_0 = {0};
	{
		t2753 * L_0 = (t2753 *)&(__this->f0);
		t2724  L_1 = (( t2724  (*) (t2753 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2753 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2724 )L_1;
		t2494  L_2 = (( t2494  (*) (t2724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2724 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t2494  L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
extern TypeInfo* t1083_TI_var;
extern "C" t7 * m16739_gshared (t2759 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1083_TI_var = il2cpp_codegen_type_info_from_index(1807);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1083  L_0 = (t1083 )VirtFuncInvoker0< t1083  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry() */, (t2759 *)__this);
		t1083  L_1 = L_0;
		t7 * L_2 = Box(t1083_TI_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t2761.h"
#include "t2761MD.h"


extern "C" void m16740_gshared (t2760 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1906_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m16741_gshared (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1906_0_0_0_var = il2cpp_codegen_type_from_index(3775);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t347 * L_1 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_0, (t347 *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(t1906_0_0_0_var), NULL);
		t607* L_4 = (t607*)((t607*)SZArrayNew(t607_TI_var, 1));
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t347 **)(t347 **)SZArrayLdElema(L_4, 0)) = (t347 *)L_5;
		t347 * L_6 = (t347 *)VirtFuncInvoker1< t347 *, t607* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t347 *)L_3, (t607*)L_4);
		t7 * L_7 = m9377(NULL, (t347 *)L_6, NULL);
		((t2760_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2760 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2761 * L_8 = (t2761 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2761 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2760_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m16742_gshared (t2760 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t2494  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T) */, (t2760 *)__this, (t2494 )((*(t2494 *)((t2494 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m16743_gshared (t2760 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t2494 , t2494  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (t2760 *)__this, (t2494 )((*(t2494 *)((t2494 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t2494 )((*(t2494 *)((t2494 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2760 * m16744_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2760 * L_0 = ((t2760_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t2760_TI_var;
extern "C" void m16745_gshared (t2761 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2760_TI_var = il2cpp_codegen_type_info_from_index(5882);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2760_TI_var);
		(( void (*) (t2760 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2760 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m16746_gshared (t2761 * __this, t2494  p0, const MethodInfo* method)
{
	{
		t2494  L_0 = p0;
		t2494  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)));
		return L_3;
	}
}
extern "C" bool m16747_gshared (t2761 * __this, t2494  p0, t2494  p1, const MethodInfo* method)
{
	{
		t2494  L_0 = p0;
		t2494  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t2494  L_3 = p1;
		t2494  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t2494  L_6 = p1;
		t2494  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t7 *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t743.h"


#include "t2779.h"
#ifndef _MSC_VER
#else
#endif
#include "t2779MD.h"

struct t52;
extern "C" t743  m18459_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18459(__this, p0, method) (( t743  (*) (t52 *, int32_t, const MethodInfo*))m18459_gshared)(__this, p0, method)


extern "C" void m16937_gshared (t2779 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m16938_gshared (t2779 * __this, const MethodInfo* method)
{
	{
		t743  L_0 = (( t743  (*) (t2779 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2779 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t743  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m16939_gshared (t2779 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m16940_gshared (t2779 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (t52 *)(__this->f0);
		int32_t L_2 = m4505((t52 *)L_1, NULL);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->f1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t743  m16941_gshared (t2779 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1199, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_3, (t47*)(t47*) &_stringLiteral1200, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t52 * L_4 = (t52 *)(__this->f0);
		t52 * L_5 = (t52 *)(__this->f0);
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		int32_t L_7 = (int32_t)(__this->f1);
		t743  L_8 = (( t743  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t633.h"


#include "t2780.h"
#ifndef _MSC_VER
#else
#endif
#include "t2780MD.h"

struct t52;
extern "C" t633  m18470_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18470(__this, p0, method) (( t633  (*) (t52 *, int32_t, const MethodInfo*))m18470_gshared)(__this, p0, method)


extern "C" void m16942_gshared (t2780 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m16943_gshared (t2780 * __this, const MethodInfo* method)
{
	{
		t633  L_0 = (( t633  (*) (t2780 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2780 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t633  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m16944_gshared (t2780 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m16945_gshared (t2780 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (t52 *)(__this->f0);
		int32_t L_2 = m4505((t52 *)L_1, NULL);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->f1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t633  m16946_gshared (t2780 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1199, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_3, (t47*)(t47*) &_stringLiteral1200, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t52 * L_4 = (t52 *)(__this->f0);
		t52 * L_5 = (t52 *)(__this->f0);
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		int32_t L_7 = (int32_t)(__this->f1);
		t633  L_8 = (( t633  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2789.h"
#ifndef _MSC_VER
#else
#endif
#include "t2789MD.h"

#include "t614.h"
#include "t361.h"
#include "t2790.h"
#include "t647MD.h"
#include "t361MD.h"
#include "t2790MD.h"
struct t647;
struct t7;
#include "t647.h"
extern "C" void m18138_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18138(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18138_gshared)(__this , p0, method)


extern TypeInfo* t347_TI_var;
extern "C" void m17047_gshared (t2789 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		m3176((t647 *)__this, (t7 *)L_0, (t614 *)L_1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_2 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_3 = p0;
		t614 * L_4 = p1;
		t361 * L_5 = m3357(NULL, (t347 *)L_2, (t7 *)L_3, (t614 *)L_4, NULL);
		__this->f0 = ((t2790 *)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m17048_gshared (t2789 * __this, t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_1, (t47*)(t47*) &_stringLiteral357, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t69* L_2 = p0;
		int32_t L_3 = 0;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_2, L_3)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t69* L_4 = p0;
		int32_t L_5 = 1;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_4, L_5)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2790 * L_6 = (t2790 *)(__this->f0);
		bool L_7 = m3177(NULL, (t361 *)L_6, NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		t2790 * L_8 = (t2790 *)(__this->f0);
		t69* L_9 = p0;
		int32_t L_10 = 0;
		t69* L_11 = p0;
		int32_t L_12 = 1;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1) */, (t2790 *)L_8, (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_9, L_10)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))), (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))));
	}

IL_004f:
	{
		return;
	}
}
extern "C" bool m17049_gshared (t2789 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2790 * L_0 = (t2790 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t2790 * L_3 = (t2790 *)(__this->f0);
		t614 * L_4 = m3355((t361 *)L_3, NULL);
		t614 * L_5 = p1;
		G_B3_0 = ((((t7*)(t614 *)L_4) == ((t7*)(t614 *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17050_gshared (t2790 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m17051_gshared (t2790 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17051((t2790 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m17052_gshared (t2790 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m17053_gshared (t2790 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2791.h"
#ifndef _MSC_VER
#else
#endif
#include "t2791MD.h"

#include "t2792.h"
#include "t2792MD.h"


extern TypeInfo* t347_TI_var;
extern "C" void m17054_gshared (t2791 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		m3176((t647 *)__this, (t7 *)L_0, (t614 *)L_1, NULL);
		t2792 * L_2 = (t2792 *)(__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, (t347 *)L_3, (t7 *)L_4, (t614 *)L_5, NULL);
		t361 * L_7 = m1639(NULL, (t361 *)L_2, (t361 *)((t2792 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), NULL);
		__this->f0 = ((t2792 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m17055_gshared (t2791 * __this, t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_1, (t47*)(t47*) &_stringLiteral357, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t69* L_2 = p0;
		int32_t L_3 = 0;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_2, L_3)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t69* L_4 = p0;
		int32_t L_5 = 1;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_4, L_5)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t69* L_6 = p0;
		int32_t L_7 = 2;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_6, L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t2792 * L_8 = (t2792 *)(__this->f0);
		bool L_9 = m3177(NULL, (t361 *)L_8, NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		t2792 * L_10 = (t2792 *)(__this->f0);
		t69* L_11 = p0;
		int32_t L_12 = 0;
		t69* L_13 = p0;
		int32_t L_14 = 1;
		t69* L_15 = p0;
		int32_t L_16 = 2;
		VirtActionInvoker3< t7 *, t7 *, t7 * >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2) */, (t2792 *)L_10, (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))));
	}

IL_005f:
	{
		return;
	}
}
extern "C" bool m17056_gshared (t2791 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2792 * L_0 = (t2792 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t2792 * L_3 = (t2792 *)(__this->f0);
		t614 * L_4 = m3355((t361 *)L_3, NULL);
		t614 * L_5 = p1;
		G_B3_0 = ((((t7*)(t614 *)L_4) == ((t7*)(t614 *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17057_gshared (t2792 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m17058_gshared (t2792 * __this, t7 * p0, t7 * p1, t7 * p2, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17058((t2792 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t7 * p1, t7 * p2, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p0, t7 * p1, t7 * p2, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p1, t7 * p2, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m17059_gshared (t2792 * __this, t7 * p0, t7 * p1, t7 * p2, t213 * p3, t7 * p4, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = p2;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern "C" void m17060_gshared (t2792 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2793.h"
#ifndef _MSC_VER
#else
#endif
#include "t2793MD.h"

#include "t2794.h"
#include "t2794MD.h"


extern TypeInfo* t347_TI_var;
extern "C" void m17061_gshared (t2793 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		m3176((t647 *)__this, (t7 *)L_0, (t614 *)L_1, NULL);
		t2794 * L_2 = (t2794 *)(__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, (t347 *)L_3, (t7 *)L_4, (t614 *)L_5, NULL);
		t361 * L_7 = m1639(NULL, (t361 *)L_2, (t361 *)((t2794 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), NULL);
		__this->f0 = ((t2794 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m17062_gshared (t2793 * __this, t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_1, (t47*)(t47*) &_stringLiteral357, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t69* L_2 = p0;
		int32_t L_3 = 0;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_2, L_3)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t69* L_4 = p0;
		int32_t L_5 = 1;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_4, L_5)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t69* L_6 = p0;
		int32_t L_7 = 2;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_6, L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t69* L_8 = p0;
		int32_t L_9 = 3;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_8, L_9)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2794 * L_10 = (t2794 *)(__this->f0);
		bool L_11 = m3177(NULL, (t361 *)L_10, NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		t2794 * L_12 = (t2794 *)(__this->f0);
		t69* L_13 = p0;
		int32_t L_14 = 0;
		t69* L_15 = p0;
		int32_t L_16 = 1;
		t69* L_17 = p0;
		int32_t L_18 = 2;
		t69* L_19 = p0;
		int32_t L_20 = 3;
		VirtActionInvoker4< t7 *, t7 *, t7 *, t7 * >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3) */, (t2794 *)L_12, (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))), (t7 *)((t7 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_19, L_20)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
	}

IL_006f:
	{
		return;
	}
}
extern "C" bool m17063_gshared (t2793 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2794 * L_0 = (t2794 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t2794 * L_3 = (t2794 *)(__this->f0);
		t614 * L_4 = m3355((t361 *)L_3, NULL);
		t614 * L_5 = p1;
		G_B3_0 = ((((t7*)(t614 *)L_4) == ((t7*)(t614 *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17064_gshared (t2794 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m17065_gshared (t2794 * __this, t7 * p0, t7 * p1, t7 * p2, t7 * p3, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17065((t2794 *)__this->f9,p0, p1, p2, p3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t7 * p1, t7 * p2, t7 * p3, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p0, t7 * p1, t7 * p2, t7 * p3, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p1, t7 * p2, t7 * p3, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m17066_gshared (t2794 * __this, t7 * p0, t7 * p1, t7 * p2, t7 * p3, t213 * p4, t7 * p5, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = p2;
	__d_args[3] = p3;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p4, (Il2CppObject*)p5);
}
extern "C" void m17067_gshared (t2794 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2795.h"
#ifndef _MSC_VER
#else
#endif
#include "t2795MD.h"

#include "t66.h"
#include "t2420.h"
#include "t2420MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m17068_gshared (t2795 * __this, t66 * p0, t614 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f1 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t66 * L_0 = p0;
		t614 * L_1 = p1;
		(( void (*) (t2420 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2420 *)__this, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t69* L_2 = (t69*)(__this->f1);
		t7 * L_3 = p2;
		t7 * L_4 = L_3;
		ArrayElementTypeCheck (L_2, ((t7 *)L_4));
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)((t7 *)L_4);
		return;
	}
}
extern "C" void m17069_gshared (t2795 * __this, t69* p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f1);
		(( void (*) (t2420 *, t69*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2420 *)__this, (t69*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
#include "t747.h"
#ifndef _MSC_VER
#else
#endif
#include "t747MD.h"

#include "t60.h"
#include "t2553.h"
#include "t2553MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m3358_gshared (t747 * __this, t66 * p0, t614 * p1, float p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f1 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t66 * L_0 = p0;
		t614 * L_1 = p1;
		(( void (*) (t2553 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2553 *)__this, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t69* L_2 = (t69*)(__this->f1);
		float L_3 = p2;
		float L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_5;
		return;
	}
}
extern "C" void m17070_gshared (t747 * __this, t69* p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f1);
		(( void (*) (t2553 *, t69*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2553 *)__this, (t69*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
#include "t748.h"
#ifndef _MSC_VER
#else
#endif
#include "t748MD.h"

#include "t2796.h"
#include "t2796MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m3359_gshared (t748 * __this, t66 * p0, t614 * p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f1 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t66 * L_0 = p0;
		t614 * L_1 = p1;
		(( void (*) (t2796 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2796 *)__this, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t69* L_2 = (t69*)(__this->f1);
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_5;
		return;
	}
}
extern "C" void m17071_gshared (t748 * __this, t69* p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f1);
		(( void (*) (t2796 *, t69*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2796 *)__this, (t69*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2797.h"
#include "t2797MD.h"
struct t647;
struct t7;
extern "C" void m18480_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18480(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18480_gshared)(__this , p0, method)


extern TypeInfo* t347_TI_var;
extern "C" void m17072_gshared (t2796 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		m3176((t647 *)__this, (t7 *)L_0, (t614 *)L_1, NULL);
		t2797 * L_2 = (t2797 *)(__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, (t347 *)L_3, (t7 *)L_4, (t614 *)L_5, NULL);
		t361 * L_7 = m1639(NULL, (t361 *)L_2, (t361 *)((t2797 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), NULL);
		__this->f0 = ((t2797 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern "C" void m17073_gshared (t2796 * __this, t2797 * p0, const MethodInfo* method)
{
	{
		m3175((t647 *)__this, NULL);
		t2797 * L_0 = (t2797 *)(__this->f0);
		t2797 * L_1 = p0;
		t361 * L_2 = m1639(NULL, (t361 *)L_0, (t361 *)L_1, NULL);
		__this->f0 = ((t2797 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m17074_gshared (t2796 * __this, t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_1, (t47*)(t47*) &_stringLiteral357, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t69* L_2 = p0;
		int32_t L_3 = 0;
		(( void (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_2, L_3)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t2797 * L_4 = (t2797 *)(__this->f0);
		bool L_5 = m3177(NULL, (t361 *)L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		t2797 * L_6 = (t2797 *)(__this->f0);
		t69* L_7 = p0;
		int32_t L_8 = 0;
		VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0) */, (t2797 *)L_6, (int32_t)((*(int32_t*)((int32_t*)UnBox ((*(t7 **)(t7 **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
extern "C" bool m17075_gshared (t2796 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2797 * L_0 = (t2797 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t2797 * L_3 = (t2797 *)(__this->f0);
		t614 * L_4 = m3355((t361 *)L_3, NULL);
		t614 * L_5 = p1;
		G_B3_0 = ((((t7*)(t614 *)L_4) == ((t7*)(t614 *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17076_gshared (t2797 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m17077_gshared (t2797 * __this, int32_t p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17077((t2797 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, int32_t p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, int32_t p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m17078_gshared (t2797 * __this, int32_t p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t58_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m17079_gshared (t2797 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2800.h"
#ifndef _MSC_VER
#else
#endif
#include "t2800MD.h"

#include "t356.h"
#include "t2577.h"
#include "t2577MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m17085_gshared (t2800 * __this, t66 * p0, t614 * p1, uint8_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f1 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t66 * L_0 = p0;
		t614 * L_1 = p1;
		(( void (*) (t2577 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2577 *)__this, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t69* L_2 = (t69*)(__this->f1);
		uint8_t L_3 = p2;
		uint8_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_5;
		return;
	}
}
extern "C" void m17087_gshared (t2800 * __this, t69* p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f1);
		(( void (*) (t2577 *, t69*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2577 *)__this, (t69*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
#include "t2811.h"
#ifndef _MSC_VER
#else
#endif
#include "t2811MD.h"

#include "t655MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m17270_gshared (t2811 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 2));
		m3197((t655 *)__this, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m17271_gshared (t2811 * __this, t47* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p1;
		t47* L_1 = p0;
		t607* L_2 = (t607*)((t607*)SZArrayNew(t607_TI_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t347 **)(t347 **)SZArrayLdElema(L_2, 0)) = (t347 *)L_3;
		t607* L_4 = (t607*)L_2;
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t347 **)(t347 **)SZArrayLdElema(L_4, 1)) = (t347 *)L_5;
		t614 * L_6 = m3205(NULL, (t7 *)L_0, (t47*)L_1, (t607*)L_4, NULL);
		return L_6;
	}
}
extern "C" t647 * m17272_gshared (t2811 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t2789 * L_2 = (t2789 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2789 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
#include "t2812.h"
#ifndef _MSC_VER
#else
#endif
#include "t2812MD.h"



extern TypeInfo* t69_TI_var;
extern "C" void m17273_gshared (t2812 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 3));
		m3197((t655 *)__this, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m17274_gshared (t2812 * __this, t47* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p1;
		t47* L_1 = p0;
		t607* L_2 = (t607*)((t607*)SZArrayNew(t607_TI_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t347 **)(t347 **)SZArrayLdElema(L_2, 0)) = (t347 *)L_3;
		t607* L_4 = (t607*)L_2;
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t347 **)(t347 **)SZArrayLdElema(L_4, 1)) = (t347 *)L_5;
		t607* L_6 = (t607*)L_4;
		t347 * L_7 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), NULL);
		ArrayElementTypeCheck (L_6, L_7);
		*((t347 **)(t347 **)SZArrayLdElema(L_6, 2)) = (t347 *)L_7;
		t614 * L_8 = m3205(NULL, (t7 *)L_0, (t47*)L_1, (t607*)L_6, NULL);
		return L_8;
	}
}
extern "C" t647 * m17275_gshared (t2812 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t2791 * L_2 = (t2791 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (t2791 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
#include "t2813.h"
#ifndef _MSC_VER
#else
#endif
#include "t2813MD.h"



extern TypeInfo* t69_TI_var;
extern "C" void m17276_gshared (t2813 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 4));
		m3197((t655 *)__this, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m17277_gshared (t2813 * __this, t47* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p1;
		t47* L_1 = p0;
		t607* L_2 = (t607*)((t607*)SZArrayNew(t607_TI_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t347 **)(t347 **)SZArrayLdElema(L_2, 0)) = (t347 *)L_3;
		t607* L_4 = (t607*)L_2;
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t347 **)(t347 **)SZArrayLdElema(L_4, 1)) = (t347 *)L_5;
		t607* L_6 = (t607*)L_4;
		t347 * L_7 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), NULL);
		ArrayElementTypeCheck (L_6, L_7);
		*((t347 **)(t347 **)SZArrayLdElema(L_6, 2)) = (t347 *)L_7;
		t607* L_8 = (t607*)L_6;
		t347 * L_9 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), NULL);
		ArrayElementTypeCheck (L_8, L_9);
		*((t347 **)(t347 **)SZArrayLdElema(L_8, 3)) = (t347 *)L_9;
		t614 * L_10 = m3205(NULL, (t7 *)L_0, (t47*)L_1, (t607*)L_8, NULL);
		return L_10;
	}
}
extern "C" t647 * m17278_gshared (t2813 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t2793 * L_2 = (t2793 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2793 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#include "t2814.h"
#ifndef _MSC_VER
#else
#endif
#include "t2814MD.h"



extern "C" void m17279_gshared (t2814 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m17280_gshared (t2814 * __this, t7 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17280((t2814 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m17281_gshared (t2814 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" t7 * m17282_gshared (t2814 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#include "t2816.h"
#ifndef _MSC_VER
#else
#endif
#include "t2816MD.h"

#include "t2820.h"
#include "t2824.h"
#include "t2818.h"
#include "t2817.h"
#include "t2827.h"
#include "t2822.h"
#include "t2828.h"
#include "t2829.h"
#include "t2820MD.h"
#include "t2824MD.h"
#include "t2818MD.h"
#include "t2817MD.h"
#include "t2827MD.h"
#include "t2822MD.h"
#include "t2828MD.h"
#include "t2829MD.h"
struct t2816;
struct t3186;
struct t2817;
extern "C" void m18497_gshared (t2816 * __this, t3186* p0, int32_t p1, t2817 * p2, const MethodInfo* method);
#define m18497(__this, p0, p1, p2, method) (( void (*) (t2816 *, t3186*, int32_t, t2817 *, const MethodInfo*))m18497_gshared)(__this, p0, p1, p2, method)
struct t2816;
struct t52;
struct t2827;
extern "C" void m18499_gshared (t2816 * __this, t52 * p0, int32_t p1, t2827 * p2, const MethodInfo* method);
#define m18499(__this, p0, p1, p2, method) (( void (*) (t2816 *, t52 *, int32_t, t2827 *, const MethodInfo*))m18499_gshared)(__this, p0, p1, p2, method)
struct t2816;
struct t3150;
struct t2827;
extern "C" void m18500_gshared (t2816 * __this, t3150* p0, int32_t p1, t2827 * p2, const MethodInfo* method);
#define m18500(__this, p0, p1, p2, method) (( void (*) (t2816 *, t3150*, int32_t, t2827 *, const MethodInfo*))m18500_gshared)(__this, p0, p1, p2, method)


extern "C" void m17284_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		(( void (*) (t2816 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)__this, (int32_t)((int32_t)10), (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m17285_gshared (t2816 * __this, t7* p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		(( void (*) (t2816 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)__this, (int32_t)((int32_t)10), (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m17287_gshared (t2816 * __this, t7* p0, const MethodInfo* method)
{
	{
		t7* L_0 = p0;
		(( void (*) (t2816 *, t7*, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2816 *)__this, (t7*)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" void m17289_gshared (t2816 * __this, int32_t p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		int32_t L_0 = p0;
		(( void (*) (t2816 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)__this, (int32_t)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m17291_gshared (t2816 * __this, t7* p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2818  V_1 = {0};
	t7* V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t7* L_2 = p0;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		t7* L_5 = p1;
		(( void (*) (t2816 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)__this, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t7* L_6 = p0;
		t7* L_7 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_6);
		V_2 = (t7*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			t7* L_8 = V_2;
			t2818  L_9 = (t2818 )InterfaceFuncInvoker0< t2818  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_8);
			V_1 = (t2818 )L_9;
			t7 * L_10 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2818 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			uint8_t L_11 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2818 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< t7 *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (t2816 *)__this, (t7 *)L_10, (uint8_t)L_11);
		}

IL_0047:
		{
			t7* L_12 = V_2;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, (t7 *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			t7* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			t7* L_15 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, (t7 *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_005c:
	{
		return;
	}
}
extern "C" void m17293_gshared (t2816 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t921 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern "C" t7* m17295_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2820 * L_0 = (( t2820 * (*) (t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
extern "C" t7* m17297_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2824 * L_0 = (( t2824 * (*) (t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
extern "C" t7 * m17299_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		if (!((t7 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (t2816 *)__this, (t7 *)((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_3 = p0;
		t7 * L_4 = (( t7 * (*) (t2816 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2816 *)__this, (t7 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, t7 * >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey) */, (t2816 *)__this, (t7 *)L_4);
		uint8_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
extern "C" void m17301_gshared (t2816 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2816 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2816 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		uint8_t L_3 = (( uint8_t (*) (t2816 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2816 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, uint8_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue) */, (t2816 *)__this, (t7 *)L_1, (uint8_t)L_3);
		return;
	}
}
extern "C" void m17303_gshared (t2816 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2816 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2816 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		uint8_t L_3 = (( uint8_t (*) (t2816 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2816 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (t2816 *)__this, (t7 *)L_1, (uint8_t)L_3);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m17305_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (!((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t7 * L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (t2816 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m17307_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (!((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t7 * L_3 = p0;
		VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey) */, (t2816 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
extern "C" bool m17309_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m17311_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m17313_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m17315_gshared (t2816 * __this, t2818  p0, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2818 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_1 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2818 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (t2816 *)__this, (t7 *)L_0, (uint8_t)L_1);
		return;
	}
}
extern "C" bool m17317_gshared (t2816 * __this, t2818  p0, const MethodInfo* method)
{
	{
		t2818  L_0 = p0;
		bool L_1 = (( bool (*) (t2816 *, t2818 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2816 *)__this, (t2818 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
extern "C" void m17319_gshared (t2816 * __this, t3150* p0, int32_t p1, const MethodInfo* method)
{
	{
		t3150* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2816 *, t3150*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2816 *)__this, (t3150*)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
extern "C" bool m17321_gshared (t2816 * __this, t2818  p0, const MethodInfo* method)
{
	{
		t2818  L_0 = p0;
		bool L_1 = (( bool (*) (t2816 *, t2818 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2816 *)__this, (t2818 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		t7 * L_2 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2818 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey) */, (t2816 *)__this, (t7 *)L_2);
		return L_3;
	}
}
extern TypeInfo* t3186_TI_var;
extern "C" void m17323_gshared (t2816 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3186_TI_var = il2cpp_codegen_type_info_from_index(6377);
		s_Il2CppMethodIntialized = true;
	}
	t3150* V_0 = {0};
	t3186* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3186* G_B5_1 = {0};
	t2816 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3186* G_B4_1 = {0};
	t2816 * G_B4_2 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t3150*)((t3150*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		t3150* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t3150* L_2 = V_0;
		int32_t L_3 = p1;
		(( void (*) (t2816 *, t3150*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2816 *)__this, (t3150*)L_2, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		t52 * L_4 = p0;
		int32_t L_5 = p1;
		(( void (*) (t2816 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2816 *)__this, (t52 *)L_4, (int32_t)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t52 * L_6 = p0;
		V_1 = (t3186*)((t3186*)IsInst(L_6, t3186_TI_var));
		t3186* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		t3186* L_8 = V_1;
		int32_t L_9 = p1;
		t2817 * L_10 = ((t2816_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((t2816 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((t2816 *)(__this));
			goto IL_0040;
		}
	}
	{
		t226 L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		t2817 * L_12 = (t2817 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (t2817 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (t7 *)NULL, (t226)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((t2816_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t2816 *)(G_B4_2));
	}

IL_0040:
	{
		t2817 * L_13 = ((t2816_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		(( void (*) (t2816 *, t3186*, int32_t, t2817 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((t2816 *)G_B5_2, (t3186*)G_B5_1, (int32_t)G_B5_0, (t2817 *)L_13, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		t52 * L_14 = p0;
		int32_t L_15 = p1;
		t226 L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2827 * L_17 = (t2827 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2827 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (t7 *)NULL, (t226)L_16, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2816 *, t52 *, int32_t, t2827 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((t2816 *)__this, (t52 *)L_14, (int32_t)L_15, (t2827 *)L_17, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
extern "C" t7 * m17325_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2822  L_0 = {0};
		(( void (*) (t2822 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2822  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" t7* m17327_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2822  L_0 = {0};
		(( void (*) (t2822 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2822  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7*)L_2;
	}
}
extern "C" t7 * m17329_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2828 * L_0 = (t2828 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (t2828 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
extern "C" int32_t m17331_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f10);
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1404_TI_var;
extern "C" uint8_t m17333_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1404_TI_var = il2cpp_codegen_type_info_from_index(3793);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		t1018* L_6 = (t1018*)(__this->f4);
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_14 = (t7*)(__this->f12);
		t69* L_15 = (t69*)(__this->f6);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t7 * L_18 = p0;
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_14, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_15, L_17)), (t7 *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		t536* L_20 = (t536*)(__this->f7);
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		t2432* L_23 = (t2432*)(__this->f5);
		int32_t L_24 = V_1;
		int32_t L_25 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_23, L_24))->f1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		t1404 * L_27 = (t1404 *)il2cpp_codegen_object_new (t1404_TI_var);
		m7016(L_27, NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m17335_gshared (t2816 * __this, t7 * p0, uint8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		t1018* L_7 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_7)->max_length)))));
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t2432* L_12 = (t2432*)(__this->f5);
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_12, L_13))->f0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		t7* L_16 = (t7*)(__this->f12);
		t69* L_17 = (t69*)(__this->f6);
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		t7 * L_20 = p0;
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_17, L_19)), (t7 *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		t2432* L_23 = (t2432*)(__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_23, L_24))->f1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->f10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->f10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->f11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		t1018* L_33 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->f9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->f8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->f8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		t2432* L_39 = (t2432*)(__this->f5);
		int32_t L_40 = V_2;
		int32_t L_41 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_39, L_40))->f1);
		__this->f9 = L_41;
	}

IL_0101:
	{
		t2432* L_42 = (t2432*)(__this->f5);
		int32_t L_43 = V_2;
		t1018* L_44 = (t1018*)(__this->f4);
		int32_t L_45 = V_1;
		int32_t L_46 = L_45;
		((t1403 *)(t1403 *)SZArrayLdElema(L_42, L_43))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		t1018* L_47 = (t1018*)(__this->f4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		t2432* L_50 = (t2432*)(__this->f5);
		int32_t L_51 = V_2;
		int32_t L_52 = V_0;
		((t1403 *)(t1403 *)SZArrayLdElema(L_50, L_51))->f0 = L_52;
		t69* L_53 = (t69*)(__this->f6);
		int32_t L_54 = V_2;
		t7 * L_55 = p0;
		*((t7 **)(t7 **)SZArrayLdElema(L_53, L_54)) = (t7 *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t2432* L_57 = (t2432*)(__this->f5);
		int32_t L_58 = V_3;
		t2432* L_59 = (t2432*)(__this->f5);
		int32_t L_60 = V_2;
		int32_t L_61 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_59, L_60))->f1);
		((t1403 *)(t1403 *)SZArrayLdElema(L_57, L_58))->f1 = L_61;
		t2432* L_62 = (t2432*)(__this->f5);
		int32_t L_63 = V_2;
		t1018* L_64 = (t1018*)(__this->f4);
		int32_t L_65 = V_1;
		int32_t L_66 = L_65;
		((t1403 *)(t1403 *)SZArrayLdElema(L_62, L_63))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		t1018* L_67 = (t1018*)(__this->f4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		t536* L_70 = (t536*)(__this->f7);
		int32_t L_71 = V_2;
		uint8_t L_72 = p1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_70, L_71)) = (uint8_t)L_72;
		int32_t L_73 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2364_TI_var;
extern "C" void m17337_gshared (t2816 * __this, int32_t p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	t2816 * G_B4_0 = {0};
	t2816 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t2816 * G_B5_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_1, (t47*)(t47*) &_stringLiteral1326, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t7* L_2 = p1;
		G_B3_0 = ((t2816 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((t2816 *)(__this));
			goto IL_0018;
		}
	}
	{
		t7* L_3 = p1;
		V_0 = (t7*)L_3;
		t7* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((t2816 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_5 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((t7*)(L_5));
		G_B5_1 = ((t2816 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		int32_t L_6 = p0;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		p0 = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = p0;
		p0 = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = p0;
		(( void (*) (t2816 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2816 *)__this, (int32_t)L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f14 = 0;
		return;
	}
}
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m17339_gshared (t2816 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t2432_TI_var = il2cpp_codegen_type_info_from_index(6378);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		__this->f4 = ((t1018*)SZArrayNew(t1018_TI_var, L_0));
		int32_t L_1 = p0;
		__this->f5 = ((t2432*)SZArrayNew(t2432_TI_var, L_1));
		__this->f9 = (-1);
		int32_t L_2 = p0;
		__this->f6 = ((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = p0;
		__this->f7 = ((t536*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->f8 = 0;
		t1018* L_4 = (t1018*)(__this->f4);
		__this->f11 = (((int32_t)((float)((float)(((float)(((int32_t)(((t52 *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->f11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		t1018* L_6 = (t1018*)(__this->f4);
		if ((((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m17341_gshared (t2816 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t52 * L_0 = p0;
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
		int32_t L_4 = p1;
		t52 * L_5 = p0;
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		t396 * L_7 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_7, (t47*)(t47*) &_stringLiteral1327, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		t52 * L_8 = p0;
		int32_t L_9 = m4505((t52 *)L_8, NULL);
		int32_t L_10 = p1;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (t2816 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_12 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_12, (t47*)(t47*) &_stringLiteral1328, NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
extern "C" t2818  m17343_gshared (t7 * __this , t7 * p0, uint8_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		uint8_t L_1 = p1;
		t2818  L_2 = {0};
		(( void (*) (t2818 *, t7 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (t7 *)L_0, (uint8_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
extern "C" t7 * m17345_gshared (t7 * __this , t7 * p0, uint8_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		return L_0;
	}
}
extern "C" uint8_t m17347_gshared (t7 * __this , t7 * p0, uint8_t p1, const MethodInfo* method)
{
	{
		uint8_t L_0 = p1;
		return L_0;
	}
}
extern "C" void m17349_gshared (t2816 * __this, t3150* p0, int32_t p1, const MethodInfo* method)
{
	{
		t3150* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2816 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2816 *)__this, (t52 *)(t52 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t3150* L_2 = p0;
		int32_t L_3 = p1;
		t226 L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2827 * L_5 = (t2827 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2827 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (t7 *)NULL, (t226)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2816 *, t3150*, int32_t, t2827 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((t2816 *)__this, (t3150*)L_2, (int32_t)L_3, (t2827 *)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
extern TypeInfo* t910_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m17351_gshared (t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t2432_TI_var = il2cpp_codegen_type_info_from_index(6378);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1018* V_1 = {0};
	t2432* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t69* V_7 = {0};
	t536* V_8 = {0};
	int32_t V_9 = 0;
	{
		t1018* L_0 = (t1018*)(__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t910_TI_var);
		int32_t L_1 = m7213(NULL, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (t1018*)((t1018*)SZArrayNew(t1018_TI_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (t2432*)((t2432*)SZArrayNew(t2432_TI_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		t1018* L_4 = (t1018*)(__this->f4);
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		t2432* L_7 = V_2;
		int32_t L_8 = V_4;
		t7* L_9 = (t7*)(__this->f12);
		t69* L_10 = (t69*)(__this->f6);
		int32_t L_11 = V_4;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_9, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((t1403 *)(t1403 *)SZArrayLdElema(L_7, L_8))->f0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		t2432* L_18 = V_2;
		int32_t L_19 = V_4;
		t1018* L_20 = V_1;
		int32_t L_21 = V_6;
		int32_t L_22 = L_21;
		((t1403 *)(t1403 *)SZArrayLdElema(L_18, L_19))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		t1018* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		t2432* L_26 = (t2432*)(__this->f5);
		int32_t L_27 = V_4;
		int32_t L_28 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_26, L_27))->f1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		t1018* L_32 = (t1018*)(__this->f4);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t52 *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		t1018* L_33 = V_1;
		__this->f4 = L_33;
		t2432* L_34 = V_2;
		__this->f5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (t69*)((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (t536*)((t536*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		t69* L_37 = (t69*)(__this->f6);
		t69* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_37, (int32_t)0, (t52 *)(t52 *)L_38, (int32_t)0, (int32_t)L_39, NULL);
		t536* L_40 = (t536*)(__this->f7);
		t536* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_40, (int32_t)0, (t52 *)(t52 *)L_41, (int32_t)0, (int32_t)L_42, NULL);
		t69* L_43 = V_7;
		__this->f6 = L_43;
		t536* L_44 = V_8;
		__this->f7 = L_44;
		int32_t L_45 = V_0;
		__this->f11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m17353_gshared (t2816 * __this, t7 * p0, uint8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		t1018* L_7 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_7)->max_length)))));
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		t2432* L_11 = (t2432*)(__this->f5);
		int32_t L_12 = V_2;
		int32_t L_13 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_15 = (t7*)(__this->f12);
		t69* L_16 = (t69*)(__this->f6);
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		t7 * L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_15, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_16, L_18)), (t7 *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		t396 * L_21 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_21, (t47*)(t47*) &_stringLiteral1330, NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		t2432* L_22 = (t2432*)(__this->f5);
		int32_t L_23 = V_2;
		int32_t L_24 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_22, L_23))->f1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->f10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->f10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->f11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		t1018* L_31 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->f9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->f8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->f8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		t2432* L_37 = (t2432*)(__this->f5);
		int32_t L_38 = V_2;
		int32_t L_39 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_37, L_38))->f1);
		__this->f9 = L_39;
	}

IL_00f9:
	{
		t2432* L_40 = (t2432*)(__this->f5);
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		((t1403 *)(t1403 *)SZArrayLdElema(L_40, L_41))->f0 = L_42;
		t2432* L_43 = (t2432*)(__this->f5);
		int32_t L_44 = V_2;
		t1018* L_45 = (t1018*)(__this->f4);
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		((t1403 *)(t1403 *)SZArrayLdElema(L_43, L_44))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		t1018* L_48 = (t1018*)(__this->f4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		t69* L_51 = (t69*)(__this->f6);
		int32_t L_52 = V_2;
		t7 * L_53 = p0;
		*((t7 **)(t7 **)SZArrayLdElema(L_51, L_52)) = (t7 *)L_53;
		t536* L_54 = (t536*)(__this->f7);
		int32_t L_55 = V_2;
		uint8_t L_56 = p1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)) = (uint8_t)L_56;
		int32_t L_57 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
extern "C" void m17355_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		__this->f10 = 0;
		t1018* L_0 = (t1018*)(__this->f4);
		t1018* L_1 = (t1018*)(__this->f4);
		m5606(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_1)->max_length))), NULL);
		t69* L_2 = (t69*)(__this->f6);
		t69* L_3 = (t69*)(__this->f6);
		m5606(NULL, (t52 *)(t52 *)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), NULL);
		t536* L_4 = (t536*)(__this->f7);
		t536* L_5 = (t536*)(__this->f7);
		m5606(NULL, (t52 *)(t52 *)L_4, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_5)->max_length))), NULL);
		t2432* L_6 = (t2432*)(__this->f5);
		t2432* L_7 = (t2432*)(__this->f5);
		m5606(NULL, (t52 *)(t52 *)L_6, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_7)->max_length))), NULL);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m17357_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		t1018* L_6 = (t1018*)(__this->f4);
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		t7* L_14 = (t7*)(__this->f12);
		t69* L_15 = (t69*)(__this->f6);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t7 * L_18 = p0;
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_14, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_15, L_17)), (t7 *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t2432* L_20 = (t2432*)(__this->f5);
		int32_t L_21 = V_1;
		int32_t L_22 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_20, L_21))->f1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern TypeInfo* t2829_TI_var;
extern "C" bool m17359_gshared (t2816 * __this, uint8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2829_TI_var = il2cpp_codegen_type_info_from_index(6027);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2829_TI_var);
		t2829 * L_0 = (( t2829 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (t7*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		t1018* L_1 = (t1018*)(__this->f4);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		t7* L_4 = V_0;
		t536* L_5 = (t536*)(__this->f7);
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		uint8_t L_8 = p0;
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (t7*)L_4, (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)), (uint8_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_2;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		t1018* L_16 = (t1018*)(__this->f4);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t52 *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m17361_gshared (t2816 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t3150* V_0 = {0};
	{
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t921 * L_2 = p0;
		int32_t L_3 = (int32_t)(__this->f14);
		m4515((t921 *)L_2, (t47*)(t47*) &_stringLiteral372, (int32_t)L_3, NULL);
		t921 * L_4 = p0;
		t7* L_5 = (t7*)(__this->f12);
		m4525((t921 *)L_4, (t47*)(t47*) &_stringLiteral374, (t7 *)L_5, NULL);
		V_0 = (t3150*)NULL;
		int32_t L_6 = (int32_t)(__this->f10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->f10);
		V_0 = (t3150*)((t3150*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		t3150* L_8 = V_0;
		(( void (*) (t2816 *, t3150*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2816 *)__this, (t3150*)L_8, (int32_t)0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		t921 * L_9 = p0;
		t1018* L_10 = (t1018*)(__this->f4);
		m4515((t921 *)L_9, (t47*)(t47*) &_stringLiteral1331, (int32_t)(((int32_t)(((t52 *)L_10)->max_length))), NULL);
		t921 * L_11 = p0;
		t3150* L_12 = V_0;
		m4525((t921 *)L_11, (t47*)(t47*) &_stringLiteral1332, (t7 *)(t7 *)L_12, NULL);
		return;
	}
}
extern TypeInfo* t347_TI_var;
extern "C" void m17363_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t3150* V_1 = {0};
	int32_t V_2 = 0;
	{
		t921 * L_0 = (t921 *)(__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t921 * L_1 = (t921 *)(__this->f13);
		int32_t L_2 = m4524((t921 *)L_1, (t47*)(t47*) &_stringLiteral372, NULL);
		__this->f14 = L_2;
		t921 * L_3 = (t921 *)(__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_4 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), NULL);
		t7 * L_5 = m4516((t921 *)L_3, (t47*)(t47*) &_stringLiteral374, (t347 *)L_4, NULL);
		__this->f12 = ((t7*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		t921 * L_6 = (t921 *)(__this->f13);
		int32_t L_7 = m4524((t921 *)L_6, (t47*)(t47*) &_stringLiteral1331, NULL);
		V_0 = (int32_t)L_7;
		t921 * L_8 = (t921 *)(__this->f13);
		t347 * L_9 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), NULL);
		t7 * L_10 = m4516((t921 *)L_8, (t47*)(t47*) &_stringLiteral1332, (t347 *)L_9, NULL);
		V_1 = (t3150*)((t3150*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (t2816 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2816 *)__this, (int32_t)L_12, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f10 = 0;
		t3150* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		t3150* L_14 = V_1;
		int32_t L_15 = V_2;
		t7 * L_16 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2818 *)((t2818 *)(t2818 *)SZArrayLdElema(L_14, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t3150* L_17 = V_1;
		int32_t L_18 = V_2;
		uint8_t L_19 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2818 *)((t2818 *)(t2818 *)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (t2816 *)__this, (t7 *)L_16, (uint8_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		t3150* L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t52 *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->f13 = (t921 *)NULL;
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t7_TI_var;
extern TypeInfo* t356_TI_var;
extern "C" bool m17365_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t7 * V_4 = {0};
	uint8_t V_5 = 0x0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		t1018* L_7 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_7)->max_length)))));
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		t2432* L_12 = (t2432*)(__this->f5);
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_12, L_13))->f0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		t7* L_16 = (t7*)(__this->f12);
		t69* L_17 = (t69*)(__this->f6);
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		t7 * L_20 = p0;
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_17, L_19)), (t7 *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		t2432* L_23 = (t2432*)(__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_23, L_24))->f1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		t1018* L_30 = (t1018*)(__this->f4);
		int32_t L_31 = V_1;
		t2432* L_32 = (t2432*)(__this->f5);
		int32_t L_33 = V_2;
		int32_t L_34 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_32, L_33))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t2432* L_35 = (t2432*)(__this->f5);
		int32_t L_36 = V_3;
		t2432* L_37 = (t2432*)(__this->f5);
		int32_t L_38 = V_2;
		int32_t L_39 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_37, L_38))->f1);
		((t1403 *)(t1403 *)SZArrayLdElema(L_35, L_36))->f1 = L_39;
	}

IL_00e9:
	{
		t2432* L_40 = (t2432*)(__this->f5);
		int32_t L_41 = V_2;
		int32_t L_42 = (int32_t)(__this->f9);
		((t1403 *)(t1403 *)SZArrayLdElema(L_40, L_41))->f1 = L_42;
		int32_t L_43 = V_2;
		__this->f9 = L_43;
		t2432* L_44 = (t2432*)(__this->f5);
		int32_t L_45 = V_2;
		((t1403 *)(t1403 *)SZArrayLdElema(L_44, L_45))->f0 = 0;
		t69* L_46 = (t69*)(__this->f6);
		int32_t L_47 = V_2;
		Initobj (t7_TI_var, (&V_4));
		t7 * L_48 = V_4;
		*((t7 **)(t7 **)SZArrayLdElema(L_46, L_47)) = (t7 *)L_48;
		t536* L_49 = (t536*)(__this->f7);
		int32_t L_50 = V_2;
		Initobj (t356_TI_var, (&V_5));
		uint8_t L_51 = V_5;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_50)) = (uint8_t)L_51;
		int32_t L_52 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t356_TI_var;
extern "C" bool m17367_gshared (t2816 * __this, t7 * p0, uint8_t* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		if (((t7 *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t7* L_3 = (t7*)(__this->f12);
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_3, (t7 *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		t1018* L_6 = (t1018*)(__this->f4);
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		t7* L_14 = (t7*)(__this->f12);
		t69* L_15 = (t69*)(__this->f6);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t7 * L_18 = p0;
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_14, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_15, L_17)), (t7 *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		uint8_t* L_20 = p1;
		t536* L_21 = (t536*)(__this->f7);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		*L_20 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		t2432* L_24 = (t2432*)(__this->f5);
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_24, L_25))->f1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_28 = p1;
		Initobj (t356_TI_var, (&V_2));
		uint8_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
extern "C" t2820 * m17369_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2820 * L_0 = (t2820 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (t2820 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
extern "C" t2824 * m17371_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2824 * L_0 = (t2824 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (t2824 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t7 * m17373_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), NULL);
		t47* L_4 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Type::ToString() */, (t347 *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_5 = m207(NULL, (t47*)(t47*) &_stringLiteral1333, (t47*)L_4, NULL);
		t396 * L_6 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_6, (t47*)L_5, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		t7 * L_7 = p0;
		return ((t7 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
extern TypeInfo* t347_TI_var;
extern TypeInfo* t356_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" uint8_t m17375_gshared (t2816 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_1 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), NULL);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (t347 *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (t356_TI_var, (&V_0));
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		t7 * L_4 = p0;
		if (((t7 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), NULL);
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Type::ToString() */, (t347 *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = m207(NULL, (t47*)(t47*) &_stringLiteral1333, (t47*)L_6, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_8, (t47*)L_7, (t47*)(t47*) &_stringLiteral563, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		t7 * L_9 = p0;
		return ((*(uint8_t*)((uint8_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
extern TypeInfo* t2829_TI_var;
extern "C" bool m17377_gshared (t2816 * __this, t2818  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2829_TI_var = il2cpp_codegen_type_info_from_index(6027);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		t7 * L_0 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2818 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t7 *, uint8_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&) */, (t2816 *)__this, (t7 *)L_0, (uint8_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2829_TI_var);
		t2829 * L_2 = (( t2829 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		uint8_t L_3 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2818 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_4 = V_0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, (t2829 *)L_2, (uint8_t)L_3, (uint8_t)L_4);
		return L_5;
	}
}
extern "C" t2822  m17379_gshared (t2816 * __this, const MethodInfo* method)
{
	{
		t2822  L_0 = {0};
		(( void (*) (t2822 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2816 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
extern "C" t1083  m17381_gshared (t7 * __this , t7 * p0, uint8_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		uint8_t L_2 = p1;
		uint8_t L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		t1083  L_5 = {0};
		m4503(&L_5, (t7 *)((t7 *)L_1), (t7 *)L_4, NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2819.h"
#ifndef _MSC_VER
#else
#endif
#include "t2819MD.h"

struct t52;
extern "C" t2818  m18482_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18482(__this, p0, method) (( t2818  (*) (t52 *, int32_t, const MethodInfo*))m18482_gshared)(__this, p0, method)


extern "C" void m17382_gshared (t2819 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m17383_gshared (t2819 * __this, const MethodInfo* method)
{
	{
		t2818  L_0 = (( t2818  (*) (t2819 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2819 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2818  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m17384_gshared (t2819 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m17385_gshared (t2819 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (t52 *)(__this->f0);
		int32_t L_2 = m4505((t52 *)L_1, NULL);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->f1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t2818  m17386_gshared (t2819 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1199, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_3, (t47*)(t47*) &_stringLiteral1200, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t52 * L_4 = (t52 *)(__this->f0);
		t52 * L_5 = (t52 *)(__this->f0);
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		int32_t L_7 = (int32_t)(__this->f1);
		t2818  L_8 = (( t2818  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern "C" void m17387_gshared (t2818 * __this, t7 * p0, uint8_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		(( void (*) (t2818 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2818 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = p1;
		(( void (*) (t2818 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2818 *)__this, (uint8_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" t7 * m17388_gshared (t2818 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f0);
		return L_0;
	}
}
extern "C" void m17389_gshared (t2818 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" uint8_t m17390_gshared (t2818 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)(__this->f1);
		return L_0;
	}
}
extern "C" void m17391_gshared (t2818 * __this, uint8_t p0, const MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m17392_gshared (t2818 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	uint8_t V_1 = 0x0;
	int32_t G_B2_0 = 0;
	t48* G_B2_1 = {0};
	t48* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t48* G_B1_1 = {0};
	t48* G_B1_2 = {0};
	t47* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t48* G_B3_2 = {0};
	t48* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t48* G_B5_1 = {0};
	t48* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t48* G_B4_1 = {0};
	t48* G_B4_2 = {0};
	t47* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t48* G_B6_2 = {0};
	t48* G_B6_3 = {0};
	{
		t48* L_0 = (t48*)((t48*)SZArrayNew(t48_TI_var, 5));
		ArrayElementTypeCheck (L_0, (t47*) &_stringLiteral305);
		*((t47**)(t47**)SZArrayLdElema(L_0, 0)) = (t47*)(t47*) &_stringLiteral305;
		t48* L_1 = (t48*)L_0;
		t7 * L_2 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2818 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t7 * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((t7 *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		t7 * L_4 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2818 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (t7 *)L_4;
		t47* L_5 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, (t7 *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t47**)(t47**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t47*)G_B3_0;
		t48* L_7 = (t48*)G_B3_3;
		ArrayElementTypeCheck (L_7, (t47*) &_stringLiteral36);
		*((t47**)(t47**)SZArrayLdElema(L_7, 2)) = (t47*)(t47*) &_stringLiteral36;
		t48* L_8 = (t48*)L_7;
		uint8_t L_9 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2818 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_10 = L_9;
		t7 * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		uint8_t L_12 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2818 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint8_t)L_12;
		t47* L_13 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_14 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t47**)(t47**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t47*)G_B6_0;
		t48* L_15 = (t48*)G_B6_3;
		ArrayElementTypeCheck (L_15, (t47*) &_stringLiteral306);
		*((t47**)(t47**)SZArrayLdElema(L_15, 4)) = (t47*)(t47*) &_stringLiteral306;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_16 = m3262(NULL, (t48*)L_15, NULL);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t2821.h"
#include "t2823.h"
#include "t2823MD.h"
#include "t2821MD.h"
struct t2816;
struct t52;
struct t2823;
extern "C" void m18493_gshared (t2816 * __this, t52 * p0, int32_t p1, t2823 * p2, const MethodInfo* method);
#define m18493(__this, p0, p1, p2, method) (( void (*) (t2816 *, t52 *, int32_t, t2823 *, const MethodInfo*))m18493_gshared)(__this, p0, p1, p2, method)
struct t2816;
struct t69;
struct t2823;
extern "C" void m18492_gshared (t2816 * __this, t69* p0, int32_t p1, t2823 * p2, const MethodInfo* method);
#define m18492(__this, p0, p1, p2, method) (( void (*) (t2816 *, t69*, int32_t, t2823 *, const MethodInfo*))m18492_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m17393_gshared (t2820 * __this, t2816 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2816 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2816 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17394_gshared (t2820 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17395_gshared (t2820 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m17396_gshared (t2820 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (t2816 *)L_0, (t7 *)L_1);
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m17397_gshared (t2820 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m17398_gshared (t2820 * __this, const MethodInfo* method)
{
	{
		t2821  L_0 = (( t2821  (*) (t2820 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2820 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2821  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m17399_gshared (t2820 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	t69* V_0 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t69*)((t69*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t69* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t69* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t69*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32) */, (t2820 *)__this, (t69*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2816 * L_4 = (t2816 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2816 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2816 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2816 * L_7 = (t2816 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2823 * L_11 = (t2823 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2823 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2816 *, t52 *, int32_t, t2823 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2816 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2823 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m17400_gshared (t2820 * __this, const MethodInfo* method)
{
	{
		t2821  L_0 = (( t2821  (*) (t2820 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2820 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2821  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m17401_gshared (t2820 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m17402_gshared (t2820 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m17403_gshared (t2820 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m17404_gshared (t2820 * __this, t69* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		t69* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2816 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2816 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2816 * L_3 = (t2816 *)(__this->f0);
		t69* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2823 * L_7 = (t2823 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2823 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2816 *, t69*, int32_t, t2823 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2816 *)L_3, (t69*)L_4, (int32_t)L_5, (t2823 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2821  m17405_gshared (t2820 * __this, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		t2821  L_1 = {0};
		(( void (*) (t2821 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2816 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m17406_gshared (t2820 * __this, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (t2816 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17407_gshared (t2821 * __this, t2816 * p0, const MethodInfo* method)
{
	{
		t2816 * L_0 = p0;
		t2822  L_1 = (( t2822  (*) (t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m17408_gshared (t2821 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		t7 * L_1 = (( t7 * (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t7 * L_2 = L_1;
		return ((t7 *)L_2);
	}
}
extern "C" void m17409_gshared (t2821 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m17410_gshared (t2821 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" t7 * m17411_gshared (t2821 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		t2818 * L_1 = (t2818 *)&(L_0->f3);
		t7 * L_2 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2818 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17412_gshared (t2822 * __this, t2816 * p0, const MethodInfo* method)
{
	{
		t2816 * L_0 = p0;
		__this->f0 = L_0;
		t2816 * L_1 = p0;
		int32_t L_2 = (int32_t)(L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern "C" t7 * m17413_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2818  L_0 = (t2818 )(__this->f3);
		t2818  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" t1083  m17414_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2818 * L_0 = (t2818 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2818 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t7 * L_2 = L_1;
		t2818 * L_3 = (t2818 *)&(__this->f3);
		uint8_t L_4 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2818 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_5 = L_4;
		t7 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		t1083  L_7 = {0};
		m4503(&L_7, (t7 *)((t7 *)L_2), (t7 *)L_6, NULL);
		return L_7;
	}
}
extern "C" t7 * m17415_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t7 * L_1 = L_0;
		return ((t7 *)L_1);
	}
}
extern "C" t7 * m17416_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
extern "C" bool m17417_gshared (t2822 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->f1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->f1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		t2816 * L_4 = (t2816 *)(__this->f0);
		t2432* L_5 = (t2432*)(L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t2816 * L_8 = (t2816 *)(__this->f0);
		t69* L_9 = (t69*)(L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t2816 * L_12 = (t2816 *)(__this->f0);
		t536* L_13 = (t536*)(L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t2818  L_16 = {0};
		(( void (*) (t2818 *, t7 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_9, L_11)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->f1);
		t2816 * L_18 = (t2816 *)(__this->f0);
		int32_t L_19 = (int32_t)(L_18->f8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern "C" t2818  m17418_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		t2818  L_0 = (t2818 )(__this->f3);
		return L_0;
	}
}
extern "C" t7 * m17419_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2818 * L_0 = (t2818 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2818 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" uint8_t m17420_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2818 * L_0 = (t2818 *)&(__this->f3);
		uint8_t L_1 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2818 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern TypeInfo* t1280_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m17421_gshared (t2822 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1280_TI_var = il2cpp_codegen_type_info_from_index(2363);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1280 * L_1 = (t1280 *)il2cpp_codegen_object_new (t1280_TI_var);
		m5620(L_1, (t47*)NULL, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t2816 * L_2 = (t2816 *)(__this->f0);
		int32_t L_3 = (int32_t)(L_2->f14);
		int32_t L_4 = (int32_t)(__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1098 * L_5 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_5, (t47*)(t47*) &_stringLiteral1334, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" void m17422_gshared (t2822 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2822 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1335, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
extern "C" void m17423_gshared (t2822 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (t2816 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17424_gshared (t2823 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m17425_gshared (t2823 * __this, t7 * p0, uint8_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17425((t2823 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t356_TI_var;
extern "C" t7 * m17426_gshared (t2823 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t356_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t7 * m17427_gshared (t2823 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#ifndef _MSC_VER
#else
#endif

#include "t2825.h"
#include "t2826.h"
#include "t2826MD.h"
#include "t2825MD.h"
struct t2816;
struct t52;
struct t2826;
extern "C" void m18495_gshared (t2816 * __this, t52 * p0, int32_t p1, t2826 * p2, const MethodInfo* method);
#define m18495(__this, p0, p1, p2, method) (( void (*) (t2816 *, t52 *, int32_t, t2826 *, const MethodInfo*))m18495_gshared)(__this, p0, p1, p2, method)
struct t2816;
struct t536;
struct t2826;
extern "C" void m18496_gshared (t2816 * __this, t536* p0, int32_t p1, t2826 * p2, const MethodInfo* method);
#define m18496(__this, p0, p1, p2, method) (( void (*) (t2816 *, t536*, int32_t, t2826 *, const MethodInfo*))m18496_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m17428_gshared (t2824 * __this, t2816 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2816 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2816 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17429_gshared (t2824 * __this, uint8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17430_gshared (t2824 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m17431_gshared (t2824 * __this, uint8_t p0, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		uint8_t L_1 = p0;
		bool L_2 = (( bool (*) (t2816 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)L_0, (uint8_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m17432_gshared (t2824 * __this, uint8_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m17433_gshared (t2824 * __this, const MethodInfo* method)
{
	{
		t2825  L_0 = (( t2825  (*) (t2824 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2824 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2825  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m17434_gshared (t2824 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	t536* V_0 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t536*)((t536*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t536* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t536* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t536*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32) */, (t2824 *)__this, (t536*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2816 * L_4 = (t2816 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2816 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2816 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2816 * L_7 = (t2816 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2826 * L_11 = (t2826 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2826 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2816 *, t52 *, int32_t, t2826 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2816 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2826 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m17435_gshared (t2824 * __this, const MethodInfo* method)
{
	{
		t2825  L_0 = (( t2825  (*) (t2824 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2824 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2825  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m17436_gshared (t2824 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m17437_gshared (t2824 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m17438_gshared (t2824 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m17439_gshared (t2824 * __this, t536* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		t536* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2816 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2816 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2816 * L_3 = (t2816 *)(__this->f0);
		t536* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2826 * L_7 = (t2826 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2826 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2816 *, t536*, int32_t, t2826 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2816 *)L_3, (t536*)L_4, (int32_t)L_5, (t2826 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2825  m17440_gshared (t2824 * __this, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		t2825  L_1 = {0};
		(( void (*) (t2825 *, t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2816 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m17441_gshared (t2824 * __this, const MethodInfo* method)
{
	{
		t2816 * L_0 = (t2816 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (t2816 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17442_gshared (t2825 * __this, t2816 * p0, const MethodInfo* method)
{
	{
		t2816 * L_0 = p0;
		t2822  L_1 = (( t2822  (*) (t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m17443_gshared (t2825 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		uint8_t L_1 = (( uint8_t (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
extern "C" void m17444_gshared (t2825 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		(( void (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m17445_gshared (t2825 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" uint8_t m17446_gshared (t2825 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		t2818 * L_1 = (t2818 *)&(L_0->f3);
		uint8_t L_2 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2818 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17447_gshared (t2826 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" uint8_t m17448_gshared (t2826 * __this, t7 * p0, uint8_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17448((t2826 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (t7 * __this, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t356_TI_var;
extern "C" t7 * m17449_gshared (t2826 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t356_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" uint8_t m17450_gshared (t2826 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17451_gshared (t2817 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1083  m17452_gshared (t2817 * __this, t7 * p0, uint8_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17452((t2817 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t356_TI_var;
extern "C" t7 * m17453_gshared (t2817 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t356_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1083  m17454_gshared (t2817 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1083 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17455_gshared (t2827 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t2818  m17456_gshared (t2827 * __this, t7 * p0, uint8_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17456((t2827 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2818  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2818  (*FunctionPointerType) (t7 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2818  (*FunctionPointerType) (t7 * __this, uint8_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t356_TI_var;
extern "C" t7 * m17457_gshared (t2827 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t356_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t2818  m17458_gshared (t2827 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2818 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17459_gshared (t2828 * __this, t2816 * p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t2816 * L_0 = p0;
		t2822  L_1 = (( t2822  (*) (t2816 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2816 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" bool m17460_gshared (t2828 * __this, const MethodInfo* method)
{
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern TypeInfo* t1082_TI_var;
extern "C" t1083  m17461_gshared (t2828 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1082_TI_var = il2cpp_codegen_type_info_from_index(1841);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2822  L_0 = (t2822 )(__this->f0);
		t2822  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1083  L_3 = (t1083 )InterfaceFuncInvoker0< t1083  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, t1082_TI_var, (t7 *)L_2);
		return L_3;
	}
}
extern "C" t7 * m17462_gshared (t2828 * __this, const MethodInfo* method)
{
	t2818  V_0 = {0};
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		t2818  L_1 = (( t2818  (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2818 )L_1;
		t7 * L_2 = (( t7 * (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2818 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t7 * L_3 = L_2;
		return ((t7 *)L_3);
	}
}
extern "C" t7 * m17463_gshared (t2828 * __this, const MethodInfo* method)
{
	t2818  V_0 = {0};
	{
		t2822 * L_0 = (t2822 *)&(__this->f0);
		t2818  L_1 = (( t2818  (*) (t2822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2822 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2818 )L_1;
		uint8_t L_2 = (( uint8_t (*) (t2818 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2818 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
extern TypeInfo* t1083_TI_var;
extern "C" t7 * m17464_gshared (t2828 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1083_TI_var = il2cpp_codegen_type_info_from_index(1807);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1083  L_0 = (t1083 )VirtFuncInvoker0< t1083  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry() */, (t2828 *)__this);
		t1083  L_1 = L_0;
		t7 * L_2 = Box(t1083_TI_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t2831.h"
#include "t2831MD.h"


extern "C" void m17465_gshared (t2829 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1906_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m17466_gshared (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1906_0_0_0_var = il2cpp_codegen_type_from_index(3775);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t347 * L_1 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_0, (t347 *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(t1906_0_0_0_var), NULL);
		t607* L_4 = (t607*)((t607*)SZArrayNew(t607_TI_var, 1));
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t347 **)(t347 **)SZArrayLdElema(L_4, 0)) = (t347 *)L_5;
		t347 * L_6 = (t347 *)VirtFuncInvoker1< t347 *, t607* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t347 *)L_3, (t607*)L_4);
		t7 * L_7 = m9377(NULL, (t347 *)L_6, NULL);
		((t2829_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2829 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2831 * L_8 = (t2831 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2831 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2829_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m17467_gshared (t2829 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint8_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::GetHashCode(T) */, (t2829 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m17468_gshared (t2829 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, (t2829 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2829 * m17469_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2829 * L_0 = ((t2829_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#include "t2830.h"
#ifndef _MSC_VER
#else
#endif
#include "t2830MD.h"



extern TypeInfo* t2829_TI_var;
extern "C" void m17470_gshared (t2830 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2829_TI_var = il2cpp_codegen_type_info_from_index(6027);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2829_TI_var);
		(( void (*) (t2829 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2829 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m17471_gshared (t2830 * __this, uint8_t p0, const MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)));
		return L_3;
	}
}
extern "C" bool m17472_gshared (t2830 * __this, uint8_t p0, uint8_t p1, const MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = p1;
		uint8_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = p1;
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint8_t >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Byte>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (uint8_t)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t2829_TI_var;
extern "C" void m17473_gshared (t2831 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2829_TI_var = il2cpp_codegen_type_info_from_index(6027);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2829_TI_var);
		(( void (*) (t2829 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2829 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m17474_gshared (t2831 * __this, uint8_t p0, const MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)));
		return L_3;
	}
}
extern "C" bool m17475_gshared (t2831 * __this, uint8_t p0, uint8_t p1, const MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = p1;
		uint8_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = p1;
		uint8_t L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t7 *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t983.h"


#include "t2837.h"
#ifndef _MSC_VER
#else
#endif
#include "t2837MD.h"

struct t52;
extern "C" t983  m18502_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18502(__this, p0, method) (( t983  (*) (t52 *, int32_t, const MethodInfo*))m18502_gshared)(__this, p0, method)


extern "C" void m17531_gshared (t2837 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m17532_gshared (t2837 * __this, const MethodInfo* method)
{
	{
		t983  L_0 = (( t983  (*) (t2837 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2837 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t983  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m17533_gshared (t2837 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m17534_gshared (t2837 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (t52 *)(__this->f0);
		int32_t L_2 = m4505((t52 *)L_1, NULL);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->f1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t983  m17535_gshared (t2837 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1199, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_3, (t47*)(t47*) &_stringLiteral1200, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t52 * L_4 = (t52 *)(__this->f0);
		t52 * L_5 = (t52 *)(__this->f0);
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		int32_t L_7 = (int32_t)(__this->f1);
		t983  L_8 = (( t983  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t1019.h"
#ifndef _MSC_VER
#else
#endif
#include "t1019MD.h"

#include "t2843.h"
#include "t2847.h"
#include "t2841.h"
#include "t2840.h"
#include "t2849.h"
#include "t2845.h"
#include "t2850.h"
#include "t2451.h"
#include "t2843MD.h"
#include "t2847MD.h"
#include "t2841MD.h"
#include "t2840MD.h"
#include "t2849MD.h"
#include "t2845MD.h"
#include "t2850MD.h"
#include "t2451MD.h"
struct t1019;
struct t3186;
struct t2840;
extern "C" void m18526_gshared (t1019 * __this, t3186* p0, int32_t p1, t2840 * p2, const MethodInfo* method);
#define m18526(__this, p0, p1, p2, method) (( void (*) (t1019 *, t3186*, int32_t, t2840 *, const MethodInfo*))m18526_gshared)(__this, p0, p1, p2, method)
struct t1019;
struct t52;
struct t2849;
extern "C" void m18528_gshared (t1019 * __this, t52 * p0, int32_t p1, t2849 * p2, const MethodInfo* method);
#define m18528(__this, p0, p1, p2, method) (( void (*) (t1019 *, t52 *, int32_t, t2849 *, const MethodInfo*))m18528_gshared)(__this, p0, p1, p2, method)
struct t1019;
struct t3157;
struct t2849;
extern "C" void m18529_gshared (t1019 * __this, t3157* p0, int32_t p1, t2849 * p2, const MethodInfo* method);
#define m18529(__this, p0, p1, p2, method) (( void (*) (t1019 *, t3157*, int32_t, t2849 *, const MethodInfo*))m18529_gshared)(__this, p0, p1, p2, method)


extern "C" void m17546_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		(( void (*) (t1019 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)__this, (int32_t)((int32_t)10), (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m17547_gshared (t1019 * __this, t7* p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		(( void (*) (t1019 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)__this, (int32_t)((int32_t)10), (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m17548_gshared (t1019 * __this, t7* p0, const MethodInfo* method)
{
	{
		t7* L_0 = p0;
		(( void (*) (t1019 *, t7*, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t1019 *)__this, (t7*)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" void m17549_gshared (t1019 * __this, int32_t p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		int32_t L_0 = p0;
		(( void (*) (t1019 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)__this, (int32_t)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m17550_gshared (t1019 * __this, t7* p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2841  V_1 = {0};
	t7* V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t7* L_2 = p0;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		t7* L_5 = p1;
		(( void (*) (t1019 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)__this, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t7* L_6 = p0;
		t7* L_7 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_6);
		V_2 = (t7*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			t7* L_8 = V_2;
			t2841  L_9 = (t2841 )InterfaceFuncInvoker0< t2841  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_8);
			V_1 = (t2841 )L_9;
			int32_t L_10 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2841 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2841 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (t1019 *)__this, (int32_t)L_10, (int32_t)L_11);
		}

IL_0047:
		{
			t7* L_12 = V_2;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, (t7 *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			t7* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			t7* L_15 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, (t7 *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_005c:
	{
		return;
	}
}
extern "C" void m17551_gshared (t1019 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t921 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern "C" t7* m17552_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2843 * L_0 = (( t2843 * (*) (t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
extern "C" t7* m17553_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2847 * L_0 = (( t2847 * (*) (t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
extern "C" t7 * m17554_gshared (t1019 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		if (!((t7 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, (t1019 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_3 = p0;
		int32_t L_4 = (( int32_t (*) (t1019 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t1019 *)__this, (t7 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey) */, (t1019 *)__this, (int32_t)L_4);
		int32_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
extern "C" void m17555_gshared (t1019 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (( int32_t (*) (t1019 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t1019 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		int32_t L_3 = (( int32_t (*) (t1019 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t1019 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue) */, (t1019 *)__this, (int32_t)L_1, (int32_t)L_3);
		return;
	}
}
extern "C" void m17556_gshared (t1019 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (( int32_t (*) (t1019 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t1019 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		int32_t L_3 = (( int32_t (*) (t1019 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t1019 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (t1019 *)__this, (int32_t)L_1, (int32_t)L_3);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m17557_gshared (t1019 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (!((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t7 * L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, (t1019 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m17558_gshared (t1019 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (!((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t7 * L_3 = p0;
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey) */, (t1019 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
extern "C" bool m17559_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m17560_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m17561_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m17562_gshared (t1019 * __this, t2841  p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2841 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2841 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (t1019 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
extern "C" bool m17563_gshared (t1019 * __this, t2841  p0, const MethodInfo* method)
{
	{
		t2841  L_0 = p0;
		bool L_1 = (( bool (*) (t1019 *, t2841 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t1019 *)__this, (t2841 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
extern "C" void m17564_gshared (t1019 * __this, t3157* p0, int32_t p1, const MethodInfo* method)
{
	{
		t3157* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t1019 *, t3157*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t1019 *)__this, (t3157*)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
extern "C" bool m17565_gshared (t1019 * __this, t2841  p0, const MethodInfo* method)
{
	{
		t2841  L_0 = p0;
		bool L_1 = (( bool (*) (t1019 *, t2841 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t1019 *)__this, (t2841 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int32_t L_2 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2841 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey) */, (t1019 *)__this, (int32_t)L_2);
		return L_3;
	}
}
extern TypeInfo* t3186_TI_var;
extern "C" void m17566_gshared (t1019 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3186_TI_var = il2cpp_codegen_type_info_from_index(6377);
		s_Il2CppMethodIntialized = true;
	}
	t3157* V_0 = {0};
	t3186* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3186* G_B5_1 = {0};
	t1019 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3186* G_B4_1 = {0};
	t1019 * G_B4_2 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t3157*)((t3157*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		t3157* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t3157* L_2 = V_0;
		int32_t L_3 = p1;
		(( void (*) (t1019 *, t3157*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t1019 *)__this, (t3157*)L_2, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		t52 * L_4 = p0;
		int32_t L_5 = p1;
		(( void (*) (t1019 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t1019 *)__this, (t52 *)L_4, (int32_t)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t52 * L_6 = p0;
		V_1 = (t3186*)((t3186*)IsInst(L_6, t3186_TI_var));
		t3186* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		t3186* L_8 = V_1;
		int32_t L_9 = p1;
		t2840 * L_10 = ((t1019_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((t1019 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((t1019 *)(__this));
			goto IL_0040;
		}
	}
	{
		t226 L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		t2840 * L_12 = (t2840 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (t2840 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (t7 *)NULL, (t226)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((t1019_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1019 *)(G_B4_2));
	}

IL_0040:
	{
		t2840 * L_13 = ((t1019_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		(( void (*) (t1019 *, t3186*, int32_t, t2840 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((t1019 *)G_B5_2, (t3186*)G_B5_1, (int32_t)G_B5_0, (t2840 *)L_13, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		t52 * L_14 = p0;
		int32_t L_15 = p1;
		t226 L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2849 * L_17 = (t2849 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2849 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (t7 *)NULL, (t226)L_16, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t1019 *, t52 *, int32_t, t2849 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((t1019 *)__this, (t52 *)L_14, (int32_t)L_15, (t2849 *)L_17, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
extern "C" t7 * m17567_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2845  L_0 = {0};
		(( void (*) (t2845 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2845  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" t7* m17568_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2845  L_0 = {0};
		(( void (*) (t2845 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2845  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7*)L_2;
	}
}
extern "C" t7 * m17569_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2850 * L_0 = (t2850 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (t2850 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
extern "C" int32_t m17570_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f10);
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1404_TI_var;
extern "C" int32_t m17571_gshared (t1019 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1404_TI_var = il2cpp_codegen_type_info_from_index(3793);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t7* L_4 = (t7*)(__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		t1018* L_7 = (t1018*)(__this->f4);
		int32_t L_8 = V_0;
		t1018* L_9 = (t1018*)(__this->f4);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		t2432* L_11 = (t2432*)(__this->f5);
		int32_t L_12 = V_1;
		int32_t L_13 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_15 = (t7*)(__this->f12);
		t1018* L_16 = (t1018*)(__this->f6);
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		t1018* L_21 = (t1018*)(__this->f7);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		t2432* L_24 = (t2432*)(__this->f5);
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_24, L_25))->f1);
		V_1 = (int32_t)L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		t1404 * L_28 = (t1404 *)il2cpp_codegen_object_new (t1404_TI_var);
		m7016(L_28, NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m17572_gshared (t1019 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t7* L_4 = (t7*)(__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		t1018* L_9 = (t1018*)(__this->f4);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t2432* L_13 = (t2432*)(__this->f5);
		int32_t L_14 = V_2;
		int32_t L_15 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_13, L_14))->f0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		t7* L_17 = (t7*)(__this->f12);
		t1018* L_18 = (t1018*)(__this->f6);
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		int32_t L_21 = p0;
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_17, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), (int32_t)L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		t2432* L_24 = (t2432*)(__this->f5);
		int32_t L_25 = V_2;
		int32_t L_26 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_24, L_25))->f1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (int32_t)(__this->f10);
		int32_t L_30 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = (int32_t)L_30;
		__this->f10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (int32_t)(__this->f11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		t1018* L_34 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (int32_t)(__this->f9);
		V_2 = (int32_t)L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (int32_t)(__this->f8);
		int32_t L_38 = (int32_t)L_37;
		V_4 = (int32_t)L_38;
		__this->f8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = (int32_t)L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		t2432* L_40 = (t2432*)(__this->f5);
		int32_t L_41 = V_2;
		int32_t L_42 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_40, L_41))->f1);
		__this->f9 = L_42;
	}

IL_0101:
	{
		t2432* L_43 = (t2432*)(__this->f5);
		int32_t L_44 = V_2;
		t1018* L_45 = (t1018*)(__this->f4);
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		((t1403 *)(t1403 *)SZArrayLdElema(L_43, L_44))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		t1018* L_48 = (t1018*)(__this->f4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		t2432* L_51 = (t2432*)(__this->f5);
		int32_t L_52 = V_2;
		int32_t L_53 = V_0;
		((t1403 *)(t1403 *)SZArrayLdElema(L_51, L_52))->f0 = L_53;
		t1018* L_54 = (t1018*)(__this->f6);
		int32_t L_55 = V_2;
		int32_t L_56 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t2432* L_58 = (t2432*)(__this->f5);
		int32_t L_59 = V_3;
		t2432* L_60 = (t2432*)(__this->f5);
		int32_t L_61 = V_2;
		int32_t L_62 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_60, L_61))->f1);
		((t1403 *)(t1403 *)SZArrayLdElema(L_58, L_59))->f1 = L_62;
		t2432* L_63 = (t2432*)(__this->f5);
		int32_t L_64 = V_2;
		t1018* L_65 = (t1018*)(__this->f4);
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		((t1403 *)(t1403 *)SZArrayLdElema(L_63, L_64))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		t1018* L_68 = (t1018*)(__this->f4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		t1018* L_71 = (t1018*)(__this->f7);
		int32_t L_72 = V_2;
		int32_t L_73 = p1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72)) = (int32_t)L_73;
		int32_t L_74 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2451_TI_var;
extern "C" void m17573_gshared (t1019 * __this, int32_t p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2451_TI_var = il2cpp_codegen_type_info_from_index(5374);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	t1019 * G_B4_0 = {0};
	t1019 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t1019 * G_B5_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_1, (t47*)(t47*) &_stringLiteral1326, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t7* L_2 = p1;
		G_B3_0 = ((t1019 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((t1019 *)(__this));
			goto IL_0018;
		}
	}
	{
		t7* L_3 = p1;
		V_0 = (t7*)L_3;
		t7* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((t1019 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2451_TI_var);
		t2451 * L_5 = (( t2451 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((t7*)(L_5));
		G_B5_1 = ((t1019 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		int32_t L_6 = p0;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		p0 = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = p0;
		p0 = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = p0;
		(( void (*) (t1019 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t1019 *)__this, (int32_t)L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f14 = 0;
		return;
	}
}
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m17574_gshared (t1019 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t2432_TI_var = il2cpp_codegen_type_info_from_index(6378);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		__this->f4 = ((t1018*)SZArrayNew(t1018_TI_var, L_0));
		int32_t L_1 = p0;
		__this->f5 = ((t2432*)SZArrayNew(t2432_TI_var, L_1));
		__this->f9 = (-1);
		int32_t L_2 = p0;
		__this->f6 = ((t1018*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = p0;
		__this->f7 = ((t1018*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->f8 = 0;
		t1018* L_4 = (t1018*)(__this->f4);
		__this->f11 = (((int32_t)((float)((float)(((float)(((int32_t)(((t52 *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->f11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		t1018* L_6 = (t1018*)(__this->f4);
		if ((((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m17575_gshared (t1019 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t52 * L_0 = p0;
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
		int32_t L_4 = p1;
		t52 * L_5 = p0;
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		t396 * L_7 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_7, (t47*)(t47*) &_stringLiteral1327, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		t52 * L_8 = p0;
		int32_t L_9 = m4505((t52 *)L_8, NULL);
		int32_t L_10 = p1;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count() */, (t1019 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		t396 * L_12 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_12, (t47*)(t47*) &_stringLiteral1328, NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
extern "C" t2841  m17576_gshared (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t2841  L_2 = {0};
		(( void (*) (t2841 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int32_t)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
extern "C" int32_t m17577_gshared (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return L_0;
	}
}
extern "C" int32_t m17578_gshared (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		return L_0;
	}
}
extern "C" void m17579_gshared (t1019 * __this, t3157* p0, int32_t p1, const MethodInfo* method)
{
	{
		t3157* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t1019 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t1019 *)__this, (t52 *)(t52 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t3157* L_2 = p0;
		int32_t L_3 = p1;
		t226 L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2849 * L_5 = (t2849 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2849 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (t7 *)NULL, (t226)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t1019 *, t3157*, int32_t, t2849 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((t1019 *)__this, (t3157*)L_2, (int32_t)L_3, (t2849 *)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
extern TypeInfo* t910_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m17580_gshared (t1019 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t2432_TI_var = il2cpp_codegen_type_info_from_index(6378);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1018* V_1 = {0};
	t2432* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1018* V_7 = {0};
	t1018* V_8 = {0};
	int32_t V_9 = 0;
	{
		t1018* L_0 = (t1018*)(__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t910_TI_var);
		int32_t L_1 = m7213(NULL, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (t1018*)((t1018*)SZArrayNew(t1018_TI_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (t2432*)((t2432*)SZArrayNew(t2432_TI_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		t1018* L_4 = (t1018*)(__this->f4);
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		t2432* L_7 = V_2;
		int32_t L_8 = V_4;
		t7* L_9 = (t7*)(__this->f12);
		t1018* L_10 = (t1018*)(__this->f6);
		int32_t L_11 = V_4;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_9, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((t1403 *)(t1403 *)SZArrayLdElema(L_7, L_8))->f0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		t2432* L_18 = V_2;
		int32_t L_19 = V_4;
		t1018* L_20 = V_1;
		int32_t L_21 = V_6;
		int32_t L_22 = L_21;
		((t1403 *)(t1403 *)SZArrayLdElema(L_18, L_19))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		t1018* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		t2432* L_26 = (t2432*)(__this->f5);
		int32_t L_27 = V_4;
		int32_t L_28 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_26, L_27))->f1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		t1018* L_32 = (t1018*)(__this->f4);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t52 *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		t1018* L_33 = V_1;
		__this->f4 = L_33;
		t2432* L_34 = V_2;
		__this->f5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (t1018*)((t1018*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (t1018*)((t1018*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		t1018* L_37 = (t1018*)(__this->f6);
		t1018* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_37, (int32_t)0, (t52 *)(t52 *)L_38, (int32_t)0, (int32_t)L_39, NULL);
		t1018* L_40 = (t1018*)(__this->f7);
		t1018* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_40, (int32_t)0, (t52 *)(t52 *)L_41, (int32_t)0, (int32_t)L_42, NULL);
		t1018* L_43 = V_7;
		__this->f6 = L_43;
		t1018* L_44 = V_8;
		__this->f7 = L_44;
		int32_t L_45 = V_0;
		__this->f11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m17581_gshared (t1019 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t7* L_4 = (t7*)(__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		t1018* L_9 = (t1018*)(__this->f4);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		t2432* L_12 = (t2432*)(__this->f5);
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_12, L_13))->f0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		t7* L_16 = (t7*)(__this->f12);
		t1018* L_17 = (t1018*)(__this->f6);
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		int32_t L_20 = p0;
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19)), (int32_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		t396 * L_22 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_22, (t47*)(t47*) &_stringLiteral1330, NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		t2432* L_23 = (t2432*)(__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_23, L_24))->f1);
		V_2 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->f10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = (int32_t)L_28;
		__this->f10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (int32_t)(__this->f11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		t1018* L_32 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (int32_t)(__this->f9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->f8);
		int32_t L_36 = (int32_t)L_35;
		V_3 = (int32_t)L_36;
		__this->f8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = (int32_t)L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		t2432* L_38 = (t2432*)(__this->f5);
		int32_t L_39 = V_2;
		int32_t L_40 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_38, L_39))->f1);
		__this->f9 = L_40;
	}

IL_00f9:
	{
		t2432* L_41 = (t2432*)(__this->f5);
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		((t1403 *)(t1403 *)SZArrayLdElema(L_41, L_42))->f0 = L_43;
		t2432* L_44 = (t2432*)(__this->f5);
		int32_t L_45 = V_2;
		t1018* L_46 = (t1018*)(__this->f4);
		int32_t L_47 = V_1;
		int32_t L_48 = L_47;
		((t1403 *)(t1403 *)SZArrayLdElema(L_44, L_45))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		t1018* L_49 = (t1018*)(__this->f4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		t1018* L_52 = (t1018*)(__this->f6);
		int32_t L_53 = V_2;
		int32_t L_54 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53)) = (int32_t)L_54;
		t1018* L_55 = (t1018*)(__this->f7);
		int32_t L_56 = V_2;
		int32_t L_57 = p1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56)) = (int32_t)L_57;
		int32_t L_58 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
extern "C" void m17582_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		__this->f10 = 0;
		t1018* L_0 = (t1018*)(__this->f4);
		t1018* L_1 = (t1018*)(__this->f4);
		m5606(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_1)->max_length))), NULL);
		t1018* L_2 = (t1018*)(__this->f6);
		t1018* L_3 = (t1018*)(__this->f6);
		m5606(NULL, (t52 *)(t52 *)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), NULL);
		t1018* L_4 = (t1018*)(__this->f7);
		t1018* L_5 = (t1018*)(__this->f7);
		m5606(NULL, (t52 *)(t52 *)L_4, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_5)->max_length))), NULL);
		t2432* L_6 = (t2432*)(__this->f5);
		t2432* L_7 = (t2432*)(__this->f5);
		m5606(NULL, (t52 *)(t52 *)L_6, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_7)->max_length))), NULL);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m17583_gshared (t1019 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t7* L_4 = (t7*)(__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		t1018* L_7 = (t1018*)(__this->f4);
		int32_t L_8 = V_0;
		t1018* L_9 = (t1018*)(__this->f4);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		t2432* L_11 = (t2432*)(__this->f5);
		int32_t L_12 = V_1;
		int32_t L_13 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		t7* L_15 = (t7*)(__this->f12);
		t1018* L_16 = (t1018*)(__this->f6);
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t2432* L_21 = (t2432*)(__this->f5);
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_21, L_22))->f1);
		V_1 = (int32_t)L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern TypeInfo* t2451_TI_var;
extern "C" bool m17584_gshared (t1019 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2451_TI_var = il2cpp_codegen_type_info_from_index(5374);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2451_TI_var);
		t2451 * L_0 = (( t2451 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (t7*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		t1018* L_1 = (t1018*)(__this->f4);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		t7* L_4 = V_0;
		t1018* L_5 = (t1018*)(__this->f7);
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		int32_t L_8 = p0;
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (t7*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), (int32_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t2432* L_10 = (t2432*)(__this->f5);
		int32_t L_11 = V_2;
		int32_t L_12 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_10, L_11))->f1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		t1018* L_16 = (t1018*)(__this->f4);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t52 *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m17585_gshared (t1019 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t3157* V_0 = {0};
	{
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t921 * L_2 = p0;
		int32_t L_3 = (int32_t)(__this->f14);
		m4515((t921 *)L_2, (t47*)(t47*) &_stringLiteral372, (int32_t)L_3, NULL);
		t921 * L_4 = p0;
		t7* L_5 = (t7*)(__this->f12);
		m4525((t921 *)L_4, (t47*)(t47*) &_stringLiteral374, (t7 *)L_5, NULL);
		V_0 = (t3157*)NULL;
		int32_t L_6 = (int32_t)(__this->f10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->f10);
		V_0 = (t3157*)((t3157*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		t3157* L_8 = V_0;
		(( void (*) (t1019 *, t3157*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t1019 *)__this, (t3157*)L_8, (int32_t)0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		t921 * L_9 = p0;
		t1018* L_10 = (t1018*)(__this->f4);
		m4515((t921 *)L_9, (t47*)(t47*) &_stringLiteral1331, (int32_t)(((int32_t)(((t52 *)L_10)->max_length))), NULL);
		t921 * L_11 = p0;
		t3157* L_12 = V_0;
		m4525((t921 *)L_11, (t47*)(t47*) &_stringLiteral1332, (t7 *)(t7 *)L_12, NULL);
		return;
	}
}
extern TypeInfo* t347_TI_var;
extern "C" void m17586_gshared (t1019 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t3157* V_1 = {0};
	int32_t V_2 = 0;
	{
		t921 * L_0 = (t921 *)(__this->f13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t921 * L_1 = (t921 *)(__this->f13);
		int32_t L_2 = m4524((t921 *)L_1, (t47*)(t47*) &_stringLiteral372, NULL);
		__this->f14 = L_2;
		t921 * L_3 = (t921 *)(__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_4 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), NULL);
		t7 * L_5 = m4516((t921 *)L_3, (t47*)(t47*) &_stringLiteral374, (t347 *)L_4, NULL);
		__this->f12 = ((t7*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		t921 * L_6 = (t921 *)(__this->f13);
		int32_t L_7 = m4524((t921 *)L_6, (t47*)(t47*) &_stringLiteral1331, NULL);
		V_0 = (int32_t)L_7;
		t921 * L_8 = (t921 *)(__this->f13);
		t347 * L_9 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), NULL);
		t7 * L_10 = m4516((t921 *)L_8, (t47*)(t47*) &_stringLiteral1332, (t347 *)L_9, NULL);
		V_1 = (t3157*)((t3157*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (t1019 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t1019 *)__this, (int32_t)L_12, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f10 = 0;
		t3157* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		t3157* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2841 *)((t2841 *)(t2841 *)SZArrayLdElema(L_14, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t3157* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2841 *)((t2841 *)(t2841 *)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (t1019 *)__this, (int32_t)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		t3157* L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t52 *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->f13 = (t921 *)NULL;
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" bool m17587_gshared (t1019 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t7* L_4 = (t7*)(__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		t1018* L_8 = (t1018*)(__this->f4);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_8)->max_length)))));
		t1018* L_9 = (t1018*)(__this->f4);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		t2432* L_13 = (t2432*)(__this->f5);
		int32_t L_14 = V_2;
		int32_t L_15 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_13, L_14))->f0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		t7* L_17 = (t7*)(__this->f12);
		t1018* L_18 = (t1018*)(__this->f6);
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		int32_t L_21 = p0;
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_17, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), (int32_t)L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		t2432* L_24 = (t2432*)(__this->f5);
		int32_t L_25 = V_2;
		int32_t L_26 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_24, L_25))->f1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (int32_t)(__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		t1018* L_31 = (t1018*)(__this->f4);
		int32_t L_32 = V_1;
		t2432* L_33 = (t2432*)(__this->f5);
		int32_t L_34 = V_2;
		int32_t L_35 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_33, L_34))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t2432* L_36 = (t2432*)(__this->f5);
		int32_t L_37 = V_3;
		t2432* L_38 = (t2432*)(__this->f5);
		int32_t L_39 = V_2;
		int32_t L_40 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_38, L_39))->f1);
		((t1403 *)(t1403 *)SZArrayLdElema(L_36, L_37))->f1 = L_40;
	}

IL_00e9:
	{
		t2432* L_41 = (t2432*)(__this->f5);
		int32_t L_42 = V_2;
		int32_t L_43 = (int32_t)(__this->f9);
		((t1403 *)(t1403 *)SZArrayLdElema(L_41, L_42))->f1 = L_43;
		int32_t L_44 = V_2;
		__this->f9 = L_44;
		t2432* L_45 = (t2432*)(__this->f5);
		int32_t L_46 = V_2;
		((t1403 *)(t1403 *)SZArrayLdElema(L_45, L_46))->f0 = 0;
		t1018* L_47 = (t1018*)(__this->f6);
		int32_t L_48 = V_2;
		Initobj (t58_TI_var, (&V_4));
		int32_t L_49 = V_4;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)L_49;
		t1018* L_50 = (t1018*)(__this->f7);
		int32_t L_51 = V_2;
		Initobj (t58_TI_var, (&V_5));
		int32_t L_52 = V_5;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51)) = (int32_t)L_52;
		int32_t L_53 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" bool m17588_gshared (t1019 * __this, int32_t p0, int32_t* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t7* L_4 = (t7*)(__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		t1018* L_7 = (t1018*)(__this->f4);
		int32_t L_8 = V_0;
		t1018* L_9 = (t1018*)(__this->f4);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t52 *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		t2432* L_11 = (t2432*)(__this->f5);
		int32_t L_12 = V_1;
		int32_t L_13 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		t7* L_15 = (t7*)(__this->f12);
		t1018* L_16 = (t1018*)(__this->f6);
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (t7*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_21 = p1;
		t1018* L_22 = (t1018*)(__this->f7);
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		*L_21 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		t2432* L_25 = (t2432*)(__this->f5);
		int32_t L_26 = V_1;
		int32_t L_27 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_25, L_26))->f1);
		V_1 = (int32_t)L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_29 = p1;
		Initobj (t58_TI_var, (&V_2));
		int32_t L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
extern "C" t2843 * m17589_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2843 * L_0 = (t2843 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (t2843 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
extern "C" t2847 * m17590_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2847 * L_0 = (t2847 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (t2847 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m17591_gshared (t1019 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		if (((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), NULL);
		t47* L_4 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Type::ToString() */, (t347 *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_5 = m207(NULL, (t47*)(t47*) &_stringLiteral1333, (t47*)L_4, NULL);
		t396 * L_6 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_6, (t47*)L_5, (t47*)(t47*) &_stringLiteral360, NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		t7 * L_7 = p0;
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
extern TypeInfo* t347_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m17592_gshared (t1019 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_1 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), NULL);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (t347 *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (t58_TI_var, (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		t7 * L_4 = p0;
		if (((t7 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), NULL);
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Type::ToString() */, (t347 *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = m207(NULL, (t47*)(t47*) &_stringLiteral1333, (t47*)L_6, NULL);
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_8, (t47*)L_7, (t47*)(t47*) &_stringLiteral563, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		t7 * L_9 = p0;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
extern TypeInfo* t2451_TI_var;
extern "C" bool m17593_gshared (t1019 * __this, t2841  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2451_TI_var = il2cpp_codegen_type_info_from_index(5374);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2841 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&) */, (t1019 *)__this, (int32_t)L_0, (int32_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2451_TI_var);
		t2451 * L_2 = (( t2451 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		int32_t L_3 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2841 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (t2451 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
extern "C" t2845  m17594_gshared (t1019 * __this, const MethodInfo* method)
{
	{
		t2845  L_0 = {0};
		(( void (*) (t2845 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t1019 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
extern "C" t1083  m17595_gshared (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		t1083  L_6 = {0};
		m4503(&L_6, (t7 *)L_2, (t7 *)L_5, NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2842.h"
#ifndef _MSC_VER
#else
#endif
#include "t2842MD.h"

struct t52;
extern "C" t2841  m18513_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18513(__this, p0, method) (( t2841  (*) (t52 *, int32_t, const MethodInfo*))m18513_gshared)(__this, p0, method)


extern "C" void m17596_gshared (t2842 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m17597_gshared (t2842 * __this, const MethodInfo* method)
{
	{
		t2841  L_0 = (( t2841  (*) (t2842 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2842 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2841  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m17598_gshared (t2842 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m17599_gshared (t2842 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t52 * L_1 = (t52 *)(__this->f0);
		int32_t L_2 = m4505((t52 *)L_1, NULL);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->f1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t2841  m17600_gshared (t2842 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1199, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_3, (t47*)(t47*) &_stringLiteral1200, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t52 * L_4 = (t52 *)(__this->f0);
		t52 * L_5 = (t52 *)(__this->f0);
		int32_t L_6 = m4505((t52 *)L_5, NULL);
		int32_t L_7 = (int32_t)(__this->f1);
		t2841  L_8 = (( t2841  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern "C" void m17601_gshared (t2841 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		(( void (*) (t2841 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2841 *)__this, (int32_t)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = p1;
		(( void (*) (t2841 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2841 *)__this, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" int32_t m17602_gshared (t2841 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f0);
		return L_0;
	}
}
extern "C" void m17603_gshared (t2841 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" int32_t m17604_gshared (t2841 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f1);
		return L_0;
	}
}
extern "C" void m17605_gshared (t2841 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m17606_gshared (t2841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t48* G_B2_1 = {0};
	t48* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t48* G_B1_1 = {0};
	t48* G_B1_2 = {0};
	t47* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t48* G_B3_2 = {0};
	t48* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t48* G_B5_1 = {0};
	t48* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t48* G_B4_1 = {0};
	t48* G_B4_2 = {0};
	t47* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t48* G_B6_2 = {0};
	t48* G_B6_3 = {0};
	{
		t48* L_0 = (t48*)((t48*)SZArrayNew(t48_TI_var, 5));
		ArrayElementTypeCheck (L_0, (t47*) &_stringLiteral305);
		*((t47**)(t47**)SZArrayLdElema(L_0, 0)) = (t47*)(t47*) &_stringLiteral305;
		t48* L_1 = (t48*)L_0;
		int32_t L_2 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2841 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2841 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_5;
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t47**)(t47**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t47*)G_B3_0;
		t48* L_8 = (t48*)G_B3_3;
		ArrayElementTypeCheck (L_8, (t47*) &_stringLiteral36);
		*((t47**)(t47**)SZArrayLdElema(L_8, 2)) = (t47*)(t47*) &_stringLiteral36;
		t48* L_9 = (t48*)L_8;
		int32_t L_10 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2841 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_11 = L_10;
		t7 * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2841 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_13;
		t47* L_14 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_15 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t47**)(t47**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t47*)G_B6_0;
		t48* L_16 = (t48*)G_B6_3;
		ArrayElementTypeCheck (L_16, (t47*) &_stringLiteral306);
		*((t47**)(t47**)SZArrayLdElema(L_16, 4)) = (t47*)(t47*) &_stringLiteral306;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_17 = m3262(NULL, (t48*)L_16, NULL);
		return L_17;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t2844.h"
#include "t2846.h"
#include "t2846MD.h"
#include "t2844MD.h"
struct t1019;
struct t52;
struct t2846;
extern "C" void m18524_gshared (t1019 * __this, t52 * p0, int32_t p1, t2846 * p2, const MethodInfo* method);
#define m18524(__this, p0, p1, p2, method) (( void (*) (t1019 *, t52 *, int32_t, t2846 *, const MethodInfo*))m18524_gshared)(__this, p0, p1, p2, method)
struct t1019;
struct t1018;
struct t2846;
extern "C" void m18525_gshared (t1019 * __this, t1018* p0, int32_t p1, t2846 * p2, const MethodInfo* method);
#define m18525(__this, p0, p1, p2, method) (( void (*) (t1019 *, t1018*, int32_t, t2846 *, const MethodInfo*))m18525_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m17607_gshared (t2843 * __this, t1019 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t1019 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1019 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17608_gshared (t2843 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17609_gshared (t2843 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m17610_gshared (t2843 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		int32_t L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, (t1019 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m17611_gshared (t2843 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m17612_gshared (t2843 * __this, const MethodInfo* method)
{
	{
		t2844  L_0 = (( t2844  (*) (t2843 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2843 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2844  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m17613_gshared (t2843 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	t1018* V_0 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t1018*)((t1018*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t1018* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t1018* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t1018*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::CopyTo(TKey[],System.Int32) */, (t2843 *)__this, (t1018*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t1019 * L_4 = (t1019 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t1019 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t1019 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1019 * L_7 = (t1019 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2846 * L_11 = (t2846 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2846 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1019 *, t52 *, int32_t, t2846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t1019 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2846 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m17614_gshared (t2843 * __this, const MethodInfo* method)
{
	{
		t2844  L_0 = (( t2844  (*) (t2843 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2843 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2844  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m17615_gshared (t2843 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m17616_gshared (t2843 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m17617_gshared (t2843 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m17618_gshared (t2843 * __this, t1018* p0, int32_t p1, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		t1018* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t1019 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t1019 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1019 * L_3 = (t1019 *)(__this->f0);
		t1018* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2846 * L_7 = (t2846 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2846 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1019 *, t1018*, int32_t, t2846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t1019 *)L_3, (t1018*)L_4, (int32_t)L_5, (t2846 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2844  m17619_gshared (t2843 * __this, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		t2844  L_1 = {0};
		(( void (*) (t2844 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t1019 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m17620_gshared (t2843 * __this, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count() */, (t1019 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17621_gshared (t2844 * __this, t1019 * p0, const MethodInfo* method)
{
	{
		t1019 * L_0 = p0;
		t2845  L_1 = (( t2845  (*) (t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m17622_gshared (t2844 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		int32_t L_1 = (( int32_t (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
extern "C" void m17623_gshared (t2844 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m17624_gshared (t2844 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" int32_t m17625_gshared (t2844 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		t2841 * L_1 = (t2841 *)&(L_0->f3);
		int32_t L_2 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2841 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17626_gshared (t2845 * __this, t1019 * p0, const MethodInfo* method)
{
	{
		t1019 * L_0 = p0;
		__this->f0 = L_0;
		t1019 * L_1 = p0;
		int32_t L_2 = (int32_t)(L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern "C" t7 * m17627_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2841  L_0 = (t2841 )(__this->f3);
		t2841  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" t1083  m17628_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2841 * L_0 = (t2841 *)&(__this->f3);
		int32_t L_1 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2841 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		t2841 * L_4 = (t2841 *)&(__this->f3);
		int32_t L_5 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2841 *)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		t1083  L_8 = {0};
		m4503(&L_8, (t7 *)L_3, (t7 *)L_7, NULL);
		return L_8;
	}
}
extern "C" t7 * m17629_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
extern "C" t7 * m17630_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
extern "C" bool m17631_gshared (t2845 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->f1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->f1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		t1019 * L_4 = (t1019 *)(__this->f0);
		t2432* L_5 = (t2432*)(L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1019 * L_8 = (t1019 *)(__this->f0);
		t1018* L_9 = (t1018*)(L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t1019 * L_12 = (t1019 *)(__this->f0);
		t1018* L_13 = (t1018*)(L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t2841  L_16 = {0};
		(( void (*) (t2841 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->f1);
		t1019 * L_18 = (t1019 *)(__this->f0);
		int32_t L_19 = (int32_t)(L_18->f8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern "C" t2841  m17632_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		t2841  L_0 = (t2841 )(__this->f3);
		return L_0;
	}
}
extern "C" int32_t m17633_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2841 * L_0 = (t2841 *)&(__this->f3);
		int32_t L_1 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2841 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" int32_t m17634_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2841 * L_0 = (t2841 *)&(__this->f3);
		int32_t L_1 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2841 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern TypeInfo* t1280_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m17635_gshared (t2845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1280_TI_var = il2cpp_codegen_type_info_from_index(2363);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1280 * L_1 = (t1280 *)il2cpp_codegen_object_new (t1280_TI_var);
		m5620(L_1, (t47*)NULL, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1019 * L_2 = (t1019 *)(__this->f0);
		int32_t L_3 = (int32_t)(L_2->f14);
		int32_t L_4 = (int32_t)(__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1098 * L_5 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_5, (t47*)(t47*) &_stringLiteral1334, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" void m17636_gshared (t2845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2845 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1335, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
extern "C" void m17637_gshared (t2845 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (t1019 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17638_gshared (t2846 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" int32_t m17639_gshared (t2846 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17639((t2846 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t7 *, t7 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (t7 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m17640_gshared (t2846 * __this, int32_t p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(t58_TI_var, &p0);
	__d_args[1] = Box(t58_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" int32_t m17641_gshared (t2846 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

#include "t2848.h"
#include "t2848MD.h"


extern TypeInfo* t708_TI_var;
extern "C" void m17642_gshared (t2847 * __this, t1019 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t1019 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1325, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1019 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17643_gshared (t2847 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m17644_gshared (t2847 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m17645_gshared (t2847 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		int32_t L_1 = p0;
		bool L_2 = (( bool (*) (t1019 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m17646_gshared (t2847 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral1336, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t7* m17647_gshared (t2847 * __this, const MethodInfo* method)
{
	{
		t2848  L_0 = (( t2848  (*) (t2847 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2847 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2848  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m17648_gshared (t2847 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	t1018* V_0 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t1018*)((t1018*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t1018* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t1018* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t1018*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32) */, (t2847 *)__this, (t1018*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t1019 * L_4 = (t1019 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t1019 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t1019 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1019 * L_7 = (t1019 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2846 * L_11 = (t2846 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2846 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1019 *, t52 *, int32_t, t2846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t1019 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2846 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m17649_gshared (t2847 * __this, const MethodInfo* method)
{
	{
		t2848  L_0 = (( t2848  (*) (t2847 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2847 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2848  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m17650_gshared (t2847 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m17651_gshared (t2847 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m17652_gshared (t2847 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m17653_gshared (t2847 * __this, t1018* p0, int32_t p1, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		t1018* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t1019 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t1019 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1019 * L_3 = (t1019 *)(__this->f0);
		t1018* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2846 * L_7 = (t2846 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2846 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1019 *, t1018*, int32_t, t2846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t1019 *)L_3, (t1018*)L_4, (int32_t)L_5, (t2846 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2848  m17654_gshared (t2847 * __this, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		t2848  L_1 = {0};
		(( void (*) (t2848 *, t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t1019 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m17655_gshared (t2847 * __this, const MethodInfo* method)
{
	{
		t1019 * L_0 = (t1019 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count() */, (t1019 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17656_gshared (t2848 * __this, t1019 * p0, const MethodInfo* method)
{
	{
		t1019 * L_0 = p0;
		t2845  L_1 = (( t2845  (*) (t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m17657_gshared (t2848 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		int32_t L_1 = (( int32_t (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
extern "C" void m17658_gshared (t2848 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		(( void (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m17659_gshared (t2848 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" int32_t m17660_gshared (t2848 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		t2841 * L_1 = (t2841 *)&(L_0->f3);
		int32_t L_2 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2841 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17661_gshared (t2840 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1083  m17662_gshared (t2840 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17662((t2840 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 *, t7 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m17663_gshared (t2840 * __this, int32_t p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(t58_TI_var, &p0);
	__d_args[1] = Box(t58_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1083  m17664_gshared (t2840 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1083 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17665_gshared (t2849 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t2841  m17666_gshared (t2849 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m17666((t2849 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2841  (*FunctionPointerType) (t7 *, t7 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2841  (*FunctionPointerType) (t7 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m17667_gshared (t2849 * __this, int32_t p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(t58_TI_var, &p0);
	__d_args[1] = Box(t58_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t2841  m17668_gshared (t2849 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2841 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m17669_gshared (t2850 * __this, t1019 * p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t1019 * L_0 = p0;
		t2845  L_1 = (( t2845  (*) (t1019 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t1019 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" bool m17670_gshared (t2850 * __this, const MethodInfo* method)
{
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern TypeInfo* t1082_TI_var;
extern "C" t1083  m17671_gshared (t2850 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1082_TI_var = il2cpp_codegen_type_info_from_index(1841);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2845  L_0 = (t2845 )(__this->f0);
		t2845  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1083  L_3 = (t1083 )InterfaceFuncInvoker0< t1083  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, t1082_TI_var, (t7 *)L_2);
		return L_3;
	}
}
extern "C" t7 * m17672_gshared (t2850 * __this, const MethodInfo* method)
{
	t2841  V_0 = {0};
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		t2841  L_1 = (( t2841  (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2841 )L_1;
		int32_t L_2 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2841 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
extern "C" t7 * m17673_gshared (t2850 * __this, const MethodInfo* method)
{
	t2841  V_0 = {0};
	{
		t2845 * L_0 = (t2845 *)&(__this->f0);
		t2841  L_1 = (( t2841  (*) (t2845 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2845 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2841 )L_1;
		int32_t L_2 = (( int32_t (*) (t2841 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2841 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
extern TypeInfo* t1083_TI_var;
extern "C" t7 * m17674_gshared (t2850 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1083_TI_var = il2cpp_codegen_type_info_from_index(1807);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1083  L_0 = (t1083 )VirtFuncInvoker0< t1083  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry() */, (t2850 *)__this);
		t1083  L_1 = L_0;
		t7 * L_2 = Box(t1083_TI_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



#include "t2851.h"
#ifndef _MSC_VER
#else
#endif
#include "t2851MD.h"

#include "t2853.h"
#include "t2853MD.h"


extern "C" void m17675_gshared (t2851 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1895_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m17676_gshared (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1895_0_0_0_var = il2cpp_codegen_type_from_index(3660);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t347 * L_1 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t347 *)L_0, (t347 *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(t1895_0_0_0_var), NULL);
		t607* L_4 = (t607*)((t607*)SZArrayNew(t607_TI_var, 1));
		t347 * L_5 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t347 **)(t347 **)SZArrayLdElema(L_4, 0)) = (t347 *)L_5;
		t347 * L_6 = (t347 *)VirtFuncInvoker1< t347 *, t607* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t347 *)L_3, (t607*)L_4);
		t7 * L_7 = m9377(NULL, (t347 *)L_6, NULL);
		((t2851_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2851 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2853 * L_8 = (t2853 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2853 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2851_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" int32_t m17677_gshared (t2851 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		t7 * L_1 = p1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		t7 * L_2 = p1;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		t7 * L_3 = p0;
		if (!((t7 *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		t7 * L_4 = p1;
		if (!((t7 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		t7 * L_5 = p0;
		t7 * L_6 = p1;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (t2851 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_8, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern "C" t2851 * m17678_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2851 * L_0 = ((t2851_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
