#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2462.h"
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
#include "t2462MD.h"

#include "t7.h"
#include "t323.h"
#include "t58.h"
#include "t47.h"
#include "t1098.h"
#include "t53.h"
#include "t52.h"
#include "t54.h"
#include "t1098MD.h"
#include "t52MD.h"
struct t52;
extern "C" t323  m18194_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18194(__this, p0, method) (( t323  (*) (t52 *, int32_t, const MethodInfo*))m18194_gshared)(__this, p0, method)


extern "C" void m12502_gshared (t2462 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m12503_gshared (t2462 * __this, const MethodInfo* method)
{
	{
		t323  L_0 = (( t323  (*) (t2462 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2462 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t323  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m12504_gshared (t2462 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m12505_gshared (t2462 * __this, const MethodInfo* method)
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
extern "C" t323  m12506_gshared (t2462 * __this, const MethodInfo* method)
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
		t323  L_8 = (( t323  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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



#include "t155.h"
#ifndef _MSC_VER
#else
#endif
#include "t155MD.h"

#include "mscorlib_ArrayTypes.h"
#include "t324.h"
#include "t647.h"
#include "t614.h"
#include "t347.h"
#include "t359.h"
#include "t2463.h"
#include "t157.h"
#include "t655MD.h"
#include "t361MD.h"
#include "t347MD.h"
#include "t2463MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m1578_gshared (t155 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 1));
		m3197((t655 *)__this, NULL);
		return;
	}
}
extern "C" void m1581_gshared (t155 * __this, t324 * p0, const MethodInfo* method)
{
	{
		t324 * L_0 = p0;
		t647 * L_1 = (( t647 * (*) (t7 * , t324 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL, (t324 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		m3202((t655 *)__this, (t647 *)L_1, NULL);
		return;
	}
}
extern "C" void m12507_gshared (t155 * __this, t324 * p0, const MethodInfo* method)
{
	{
		t324 * L_0 = p0;
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t324 * L_2 = p0;
		t614 * L_3 = m3355((t361 *)L_2, NULL);
		m3203((t655 *)__this, (t7 *)L_1, (t614 *)L_3, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m2109_gshared (t155 * __this, t47* p0, t7 * p1, const MethodInfo* method)
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
		t607* L_2 = (t607*)((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t347 **)(t347 **)SZArrayLdElema(L_2, 0)) = (t347 *)L_3;
		t614 * L_4 = m3205(NULL, (t7 *)L_0, (t47*)L_1, (t607*)L_2, NULL);
		return L_4;
	}
}
extern "C" t647 * m2110_gshared (t155 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t2463 * L_2 = (t2463 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2463 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
extern "C" t647 * m12508_gshared (t7 * __this , t324 * p0, const MethodInfo* method)
{
	{
		t324 * L_0 = p0;
		t2463 * L_1 = (t2463 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2463 *, t324 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (t324 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" void m1580_gshared (t155 * __this, t157  p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f4);
		t157  L_1 = p0;
		t157  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = (t69*)(__this->f4);
		m3204((t655 *)__this, (t69*)L_4, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t324MD.h"

#include "t226.h"
#include "t213.h"


extern "C" void m1636_gshared (t324 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m12509_gshared (t324 * __this, t157  p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12509((t324 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t157  p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t157  p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t157_TI_var;
extern "C" t7 * m12510_gshared (t324 * __this, t157  p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t157_TI_var = il2cpp_codegen_type_info_from_index(221);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t157_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m12511_gshared (t324 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

#include "t361.h"
#include "t396.h"
#include "t647MD.h"
#include "t396MD.h"
struct t647;
struct t7;
extern "C" void m18207_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18207(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18207_gshared)(__this , p0, method)


extern TypeInfo* t347_TI_var;
extern "C" void m12512_gshared (t2463 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
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
		t324 * L_2 = (t324 *)(__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, (t347 *)L_3, (t7 *)L_4, (t614 *)L_5, NULL);
		t361 * L_7 = m1639(NULL, (t361 *)L_2, (t361 *)((t324 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), NULL);
		__this->f0 = ((t324 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern "C" void m12513_gshared (t2463 * __this, t324 * p0, const MethodInfo* method)
{
	{
		m3175((t647 *)__this, NULL);
		t324 * L_0 = (t324 *)(__this->f0);
		t324 * L_1 = p0;
		t361 * L_2 = m1639(NULL, (t361 *)L_0, (t361 *)L_1, NULL);
		__this->f0 = ((t324 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m12514_gshared (t2463 * __this, t69* p0, const MethodInfo* method)
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
		t324 * L_4 = (t324 *)(__this->f0);
		bool L_5 = m3177(NULL, (t361 *)L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		t324 * L_6 = (t324 *)(__this->f0);
		t69* L_7 = p0;
		int32_t L_8 = 0;
		VirtActionInvoker1< t157  >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0) */, (t324 *)L_6, (t157 )((*(t157 *)((t157 *)UnBox ((*(t7 **)(t7 **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
extern "C" bool m12515_gshared (t2463 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t324 * L_0 = (t324 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t324 * L_3 = (t324 *)(__this->f0);
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
#include "t2465.h"
#ifndef _MSC_VER
#else
#endif
#include "t2465MD.h"

#include "t337.h"
#include "t2466.h"
#include "t1106.h"
#include "t61.h"
#include "t2367.h"
#include "t2374.h"
#include "t337MD.h"
#include "t2466MD.h"
#include "t7MD.h"
#include "t1106MD.h"
#include "t61MD.h"
#include "t2367MD.h"


extern "C" void m12516_gshared (t2465 * __this, const MethodInfo* method)
{
	{
		t337 * L_0 = (t337 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (t337 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->f0 = L_0;
		t2466 * L_1 = (t2466 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->f1 = L_1;
		m162((t7 *)__this, NULL);
		return;
	}
}
extern "C" t7 * m12518_gshared (t2465 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)VirtFuncInvoker0< t7* >::Invoke(16 /* System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator() */, (t2465 *)__this);
		return L_0;
	}
}
extern "C" void m12520_gshared (t2465 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f1);
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (t2466 *)L_0, (t7 *)L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		t337 * L_3 = (t337 *)(__this->f0);
		t7 * L_4 = p0;
		VirtActionInvoker1< t7 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (t337 *)L_3, (t7 *)L_4);
		t2466 * L_5 = (t2466 *)(__this->f1);
		t7 * L_6 = p0;
		t337 * L_7 = (t337 *)(__this->f0);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (t337 *)L_7);
		VirtActionInvoker2< t7 *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (t2466 *)L_5, (t7 *)L_6, (int32_t)((int32_t)((int32_t)L_8-(int32_t)1)));
		return;
	}
}
extern "C" bool m12522_gshared (t2465 * __this, t7 * p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		t2466 * L_0 = (t2466 *)(__this->f1);
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t7 *, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (t2466 *)L_0, (t7 *)L_1, (int32_t*)(&V_0));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32) */, (t2465 *)__this, (int32_t)L_3);
		return 1;
	}
}
extern TypeInfo* t1106_TI_var;
extern "C" t7* m12524_gshared (t2465 * __this, const MethodInfo* method)
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
extern "C" void m12526_gshared (t2465 * __this, const MethodInfo* method)
{
	{
		t337 * L_0 = (t337 *)(__this->f0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Object>::Clear() */, (t337 *)L_0);
		t2466 * L_1 = (t2466 *)(__this->f1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear() */, (t2466 *)L_1);
		return;
	}
}
extern "C" bool m12528_gshared (t2465 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f1);
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (t2466 *)L_0, (t7 *)L_1);
		return L_2;
	}
}
extern "C" void m12530_gshared (t2465 * __this, t69* p0, int32_t p1, const MethodInfo* method)
{
	{
		t337 * L_0 = (t337 *)(__this->f0);
		t69* L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t69*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (t337 *)L_0, (t69*)L_1, (int32_t)L_2);
		return;
	}
}
extern "C" int32_t m12532_gshared (t2465 * __this, const MethodInfo* method)
{
	{
		t337 * L_0 = (t337 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (t337 *)L_0);
		return L_1;
	}
}
extern "C" bool m12534_gshared (t2465 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" int32_t m12536_gshared (t2465 * __this, t7 * p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		t2466 * L_0 = (t2466 *)(__this->f1);
		t7 * L_1 = p0;
		VirtFuncInvoker2< bool, t7 *, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (t2466 *)L_0, (t7 *)L_1, (int32_t*)(&V_0));
		int32_t L_2 = V_0;
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m12538_gshared (t2465 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_0, (t47*)(t47*) &_stringLiteral118, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" void m12540_gshared (t2465 * __this, int32_t p0, const MethodInfo* method)
{
	t7 * V_0 = {0};
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	{
		t337 * L_0 = (t337 *)(__this->f0);
		int32_t L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (t337 *)L_0, (int32_t)L_1);
		V_0 = (t7 *)L_2;
		t2466 * L_3 = (t2466 *)(__this->f1);
		t7 * L_4 = V_0;
		VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (t2466 *)L_3, (t7 *)L_4);
		int32_t L_5 = p0;
		t337 * L_6 = (t337 *)(__this->f0);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (t337 *)L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)L_7-(int32_t)1))))))
		{
			goto IL_003e;
		}
	}
	{
		t337 * L_8 = (t337 *)(__this->f0);
		int32_t L_9 = p0;
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (t337 *)L_8, (int32_t)L_9);
		goto IL_007f;
	}

IL_003e:
	{
		t337 * L_10 = (t337 *)(__this->f0);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (t337 *)L_10);
		V_1 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
		t337 * L_12 = (t337 *)(__this->f0);
		int32_t L_13 = V_1;
		t7 * L_14 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (t337 *)L_12, (int32_t)L_13);
		V_2 = (t7 *)L_14;
		t337 * L_15 = (t337 *)(__this->f0);
		int32_t L_16 = p0;
		t7 * L_17 = V_2;
		VirtActionInvoker2< int32_t, t7 * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (t337 *)L_15, (int32_t)L_16, (t7 *)L_17);
		t2466 * L_18 = (t2466 *)(__this->f1);
		t7 * L_19 = V_2;
		int32_t L_20 = p0;
		VirtActionInvoker2< t7 *, int32_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (t2466 *)L_18, (t7 *)L_19, (int32_t)L_20);
		t337 * L_21 = (t337 *)(__this->f0);
		int32_t L_22 = V_1;
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (t337 *)L_21, (int32_t)L_22);
	}

IL_007f:
	{
		return;
	}
}
extern "C" t7 * m12542_gshared (t2465 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t337 * L_0 = (t337 *)(__this->f0);
		int32_t L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (t337 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
extern "C" void m12544_gshared (t2465 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	t7 * V_0 = {0};
	{
		t337 * L_0 = (t337 *)(__this->f0);
		int32_t L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (t337 *)L_0, (int32_t)L_1);
		V_0 = (t7 *)L_2;
		t2466 * L_3 = (t2466 *)(__this->f1);
		t7 * L_4 = V_0;
		VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (t2466 *)L_3, (t7 *)L_4);
		t337 * L_5 = (t337 *)(__this->f0);
		int32_t L_6 = p0;
		t7 * L_7 = p1;
		VirtActionInvoker2< int32_t, t7 * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (t337 *)L_5, (int32_t)L_6, (t7 *)L_7);
		t2466 * L_8 = (t2466 *)(__this->f1);
		t7 * L_9 = V_0;
		int32_t L_10 = p0;
		VirtActionInvoker2< t7 *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (t2466 *)L_8, (t7 *)L_9, (int32_t)L_10);
		return;
	}
}
extern "C" void m12545_gshared (t2465 * __this, t2367 * p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	t7 * V_1 = {0};
	{
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0007:
	{
		t337 * L_0 = (t337 *)(__this->f0);
		int32_t L_1 = V_0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (t337 *)L_0, (int32_t)L_1);
		V_1 = (t7 *)L_2;
		t2367 * L_3 = p0;
		t7 * L_4 = V_1;
		bool L_5 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* System.Boolean System.Predicate`1<System.Object>::Invoke(!0) */, (t2367 *)L_3, (t7 *)L_4);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		t7 * L_6 = V_1;
		VirtFuncInvoker1< bool, t7 * >::Invoke(15 /* System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T) */, (t2465 *)__this, (t7 *)L_6);
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		t337 * L_9 = (t337 *)(__this->f0);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (t337 *)L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern "C" void m12546_gshared (t2465 * __this, t2374 * p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	t7 * V_1 = {0};
	{
		t337 * L_0 = (t337 *)(__this->f0);
		t2374 * L_1 = p0;
		(( void (*) (t337 *, t2374 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t337 *)L_0, (t2374 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0013:
	{
		t337 * L_2 = (t337 *)(__this->f0);
		int32_t L_3 = V_0;
		t7 * L_4 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (t337 *)L_2, (int32_t)L_3);
		V_1 = (t7 *)L_4;
		t2466 * L_5 = (t2466 *)(__this->f1);
		t7 * L_6 = V_1;
		int32_t L_7 = V_0;
		VirtActionInvoker2< t7 *, int32_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (t2466 *)L_5, (t7 *)L_6, (int32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		t337 * L_10 = (t337 *)(__this->f0);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (t337 *)L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2471.h"
#include "t2475.h"
#include "t708.h"
#include "t1403.h"
#include "t1404.h"
#include "t2469.h"
#include "t921.h"
#include "t1084.h"
#include "t1083.h"
#include "t2468.h"
#include "t2478.h"
#include "t2473.h"
#include "t2479.h"
#include "t711.h"
#include "t2364.h"
#include "t2451.h"
#include "t708MD.h"
#include "t1404MD.h"
#include "t2471MD.h"
#include "t2475MD.h"
#include "t2469MD.h"
#include "t2468MD.h"
#include "t2478MD.h"
#include "t2473MD.h"
#include "t2479MD.h"
#include "t711MD.h"
#include "t2364MD.h"
#include "t910MD.h"
#include "t2451MD.h"
#include "t921MD.h"
#include "t47MD.h"
#include "t1083MD.h"
struct t2466;
struct t3186;
struct t2468;
extern "C" void m18224_gshared (t2466 * __this, t3186* p0, int32_t p1, t2468 * p2, const MethodInfo* method);
#define m18224(__this, p0, p1, p2, method) (( void (*) (t2466 *, t3186*, int32_t, t2468 *, const MethodInfo*))m18224_gshared)(__this, p0, p1, p2, method)
struct t2466;
struct t52;
struct t2478;
extern "C" void m18226_gshared (t2466 * __this, t52 * p0, int32_t p1, t2478 * p2, const MethodInfo* method);
#define m18226(__this, p0, p1, p2, method) (( void (*) (t2466 *, t52 *, int32_t, t2478 *, const MethodInfo*))m18226_gshared)(__this, p0, p1, p2, method)
struct t2466;
struct t2959;
struct t2478;
extern "C" void m18227_gshared (t2466 * __this, t2959* p0, int32_t p1, t2478 * p2, const MethodInfo* method);
#define m18227(__this, p0, p1, p2, method) (( void (*) (t2466 *, t2959*, int32_t, t2478 *, const MethodInfo*))m18227_gshared)(__this, p0, p1, p2, method)


extern "C" void m12547_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		(( void (*) (t2466 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)__this, (int32_t)((int32_t)10), (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m12548_gshared (t2466 * __this, t7* p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		(( void (*) (t2466 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)__this, (int32_t)((int32_t)10), (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m12549_gshared (t2466 * __this, t7* p0, const MethodInfo* method)
{
	{
		t7* L_0 = p0;
		(( void (*) (t2466 *, t7*, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2466 *)__this, (t7*)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" void m12550_gshared (t2466 * __this, int32_t p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		int32_t L_0 = p0;
		(( void (*) (t2466 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)__this, (int32_t)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m12551_gshared (t2466 * __this, t7* p0, t7* p1, const MethodInfo* method)
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
	t2469  V_1 = {0};
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		t7* L_5 = p1;
		(( void (*) (t2466 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)__this, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t7* L_6 = p0;
		t7* L_7 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_6);
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
			t2469  L_9 = (t2469 )InterfaceFuncInvoker0< t2469  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_8);
			V_1 = (t2469 )L_9;
			t7 * L_10 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2469 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2469 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< t7 *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (t2466 *)__this, (t7 *)L_10, (int32_t)L_11);
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
extern "C" void m12552_gshared (t2466 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t921 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern "C" t7* m12553_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2471 * L_0 = (( t2471 * (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
extern "C" t7* m12554_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2475 * L_0 = (( t2475 * (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
extern "C" t7 * m12555_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (t2466 *)__this, (t7 *)((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_3 = p0;
		t7 * L_4 = (( t7 * (*) (t2466 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2466 *)__this, (t7 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, t7 * >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey) */, (t2466 *)__this, (t7 *)L_4);
		int32_t L_6 = L_5;
		t7 * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
extern "C" void m12556_gshared (t2466 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2466 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2466 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		int32_t L_3 = (( int32_t (*) (t2466 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2466 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, int32_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue) */, (t2466 *)__this, (t7 *)L_1, (int32_t)L_3);
		return;
	}
}
extern "C" void m12557_gshared (t2466 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2466 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2466 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		int32_t L_3 = (( int32_t (*) (t2466 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2466 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (t2466 *)__this, (t7 *)L_1, (int32_t)L_3);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m12558_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
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
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (t2466 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m12559_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
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
		VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey) */, (t2466 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
extern "C" bool m12560_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m12561_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m12562_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m12563_gshared (t2466 * __this, t2469  p0, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2469 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2469 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (t2466 *)__this, (t7 *)L_0, (int32_t)L_1);
		return;
	}
}
extern "C" bool m12564_gshared (t2466 * __this, t2469  p0, const MethodInfo* method)
{
	{
		t2469  L_0 = p0;
		bool L_1 = (( bool (*) (t2466 *, t2469 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2466 *)__this, (t2469 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
extern "C" void m12565_gshared (t2466 * __this, t2959* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2959* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2466 *, t2959*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2466 *)__this, (t2959*)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
extern "C" bool m12566_gshared (t2466 * __this, t2469  p0, const MethodInfo* method)
{
	{
		t2469  L_0 = p0;
		bool L_1 = (( bool (*) (t2466 *, t2469 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2466 *)__this, (t2469 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		t7 * L_2 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2469 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey) */, (t2466 *)__this, (t7 *)L_2);
		return L_3;
	}
}
extern TypeInfo* t3186_TI_var;
extern "C" void m12567_gshared (t2466 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3186_TI_var = il2cpp_codegen_type_info_from_index(6377);
		s_Il2CppMethodIntialized = true;
	}
	t2959* V_0 = {0};
	t3186* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3186* G_B5_1 = {0};
	t2466 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3186* G_B4_1 = {0};
	t2466 * G_B4_2 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t2959*)((t2959*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		t2959* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t2959* L_2 = V_0;
		int32_t L_3 = p1;
		(( void (*) (t2466 *, t2959*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2466 *)__this, (t2959*)L_2, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		t52 * L_4 = p0;
		int32_t L_5 = p1;
		(( void (*) (t2466 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2466 *)__this, (t52 *)L_4, (int32_t)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		t2468 * L_10 = ((t2466_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((t2466 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((t2466 *)(__this));
			goto IL_0040;
		}
	}
	{
		t226 L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		t2468 * L_12 = (t2468 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (t2468 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (t7 *)NULL, (t226)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((t2466_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t2466 *)(G_B4_2));
	}

IL_0040:
	{
		t2468 * L_13 = ((t2466_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		(( void (*) (t2466 *, t3186*, int32_t, t2468 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((t2466 *)G_B5_2, (t3186*)G_B5_1, (int32_t)G_B5_0, (t2468 *)L_13, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		t52 * L_14 = p0;
		int32_t L_15 = p1;
		t226 L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2478 * L_17 = (t2478 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2478 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (t7 *)NULL, (t226)L_16, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2466 *, t52 *, int32_t, t2478 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((t2466 *)__this, (t52 *)L_14, (int32_t)L_15, (t2478 *)L_17, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
extern "C" t7 * m12568_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2473  L_0 = {0};
		(( void (*) (t2473 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2473  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" t7* m12569_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2473  L_0 = {0};
		(( void (*) (t2473 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2473  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7*)L_2;
	}
}
extern "C" t7 * m12570_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2479 * L_0 = (t2479 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (t2479 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
extern "C" int32_t m12571_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f10);
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1404_TI_var;
extern "C" int32_t m12572_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
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
		t1018* L_20 = (t1018*)(__this->f7);
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22));
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
extern "C" void m12573_gshared (t2466 * __this, t7 * p0, int32_t p1, const MethodInfo* method)
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
		(( void (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		t1018* L_70 = (t1018*)(__this->f7);
		int32_t L_71 = V_2;
		int32_t L_72 = p1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_70, L_71)) = (int32_t)L_72;
		int32_t L_73 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2364_TI_var;
extern "C" void m12574_gshared (t2466 * __this, int32_t p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	t2466 * G_B4_0 = {0};
	t2466 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t2466 * G_B5_1 = {0};
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
		G_B3_0 = ((t2466 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((t2466 *)(__this));
			goto IL_0018;
		}
	}
	{
		t7* L_3 = p1;
		V_0 = (t7*)L_3;
		t7* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((t2466 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_5 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((t7*)(L_5));
		G_B5_1 = ((t2466 *)(G_B4_0));
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
		(( void (*) (t2466 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2466 *)__this, (int32_t)L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f14 = 0;
		return;
	}
}
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m12575_gshared (t2466 * __this, int32_t p0, const MethodInfo* method)
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
extern "C" void m12576_gshared (t2466 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
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
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (t2466 *)__this);
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
extern "C" t2469  m12577_gshared (t7 * __this , t7 * p0, int32_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = p1;
		t2469  L_2 = {0};
		(( void (*) (t2469 *, t7 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (t7 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
extern "C" t7 * m12578_gshared (t7 * __this , t7 * p0, int32_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		return L_0;
	}
}
extern "C" int32_t m12579_gshared (t7 * __this , t7 * p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		return L_0;
	}
}
extern "C" void m12580_gshared (t2466 * __this, t2959* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2959* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2466 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2466 *)__this, (t52 *)(t52 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t2959* L_2 = p0;
		int32_t L_3 = p1;
		t226 L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2478 * L_5 = (t2478 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2478 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (t7 *)NULL, (t226)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2466 *, t2959*, int32_t, t2478 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((t2466 *)__this, (t2959*)L_2, (int32_t)L_3, (t2478 *)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
extern TypeInfo* t910_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m12581_gshared (t2466 * __this, const MethodInfo* method)
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
		V_8 = (t1018*)((t1018*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		t69* L_37 = (t69*)(__this->f6);
		t69* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_37, (int32_t)0, (t52 *)(t52 *)L_38, (int32_t)0, (int32_t)L_39, NULL);
		t1018* L_40 = (t1018*)(__this->f7);
		t1018* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_40, (int32_t)0, (t52 *)(t52 *)L_41, (int32_t)0, (int32_t)L_42, NULL);
		t69* L_43 = V_7;
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
extern "C" void m12582_gshared (t2466 * __this, t7 * p0, int32_t p1, const MethodInfo* method)
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
		(( void (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		t1018* L_54 = (t1018*)(__this->f7);
		int32_t L_55 = V_2;
		int32_t L_56 = p1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		int32_t L_57 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
extern "C" void m12583_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		__this->f10 = 0;
		t1018* L_0 = (t1018*)(__this->f4);
		t1018* L_1 = (t1018*)(__this->f4);
		m5606(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_1)->max_length))), NULL);
		t69* L_2 = (t69*)(__this->f6);
		t69* L_3 = (t69*)(__this->f6);
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
extern "C" bool m12584_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
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
extern TypeInfo* t2451_TI_var;
extern "C" bool m12585_gshared (t2466 * __this, int32_t p0, const MethodInfo* method)
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
extern "C" void m12586_gshared (t2466 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t2959* V_0 = {0};
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
		V_0 = (t2959*)NULL;
		int32_t L_6 = (int32_t)(__this->f10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->f10);
		V_0 = (t2959*)((t2959*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		t2959* L_8 = V_0;
		(( void (*) (t2466 *, t2959*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2466 *)__this, (t2959*)L_8, (int32_t)0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		t921 * L_9 = p0;
		t1018* L_10 = (t1018*)(__this->f4);
		m4515((t921 *)L_9, (t47*)(t47*) &_stringLiteral1331, (int32_t)(((int32_t)(((t52 *)L_10)->max_length))), NULL);
		t921 * L_11 = p0;
		t2959* L_12 = V_0;
		m4525((t921 *)L_11, (t47*)(t47*) &_stringLiteral1332, (t7 *)(t7 *)L_12, NULL);
		return;
	}
}
extern TypeInfo* t347_TI_var;
extern "C" void m12587_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2959* V_1 = {0};
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
		V_1 = (t2959*)((t2959*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (t2466 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2466 *)__this, (int32_t)L_12, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f10 = 0;
		t2959* L_13 = V_1;
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
		t2959* L_14 = V_1;
		int32_t L_15 = V_2;
		t7 * L_16 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2469 *)((t2469 *)(t2469 *)SZArrayLdElema(L_14, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2959* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2469 *)((t2469 *)(t2469 *)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (t2466 *)__this, (t7 *)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		t2959* L_22 = V_1;
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
extern TypeInfo* t58_TI_var;
extern "C" bool m12588_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t7 * V_4 = {0};
	int32_t V_5 = 0;
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
		t1018* L_49 = (t1018*)(__this->f7);
		int32_t L_50 = V_2;
		Initobj (t58_TI_var, (&V_5));
		int32_t L_51 = V_5;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)L_51;
		int32_t L_52 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" bool m12589_gshared (t2466 * __this, t7 * p0, int32_t* p1, const MethodInfo* method)
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
		int32_t* L_20 = p1;
		t1018* L_21 = (t1018*)(__this->f7);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		*L_20 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
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
		int32_t* L_28 = p1;
		Initobj (t58_TI_var, (&V_2));
		int32_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
extern "C" t2471 * m12590_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2471 * L_0 = (t2471 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (t2471 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
extern "C" t2475 * m12591_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2475 * L_0 = (t2475 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (t2475 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t7 * m12592_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
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
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m12593_gshared (t2466 * __this, t7 * p0, const MethodInfo* method)
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
extern "C" bool m12594_gshared (t2466 * __this, t2469  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2451_TI_var = il2cpp_codegen_type_info_from_index(5374);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t7 * L_0 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2469 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t7 *, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, (t2466 *)__this, (t7 *)L_0, (int32_t*)(&V_0));
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
		int32_t L_3 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2469 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (t2451 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
extern "C" t2473  m12595_gshared (t2466 * __this, const MethodInfo* method)
{
	{
		t2473  L_0 = {0};
		(( void (*) (t2473 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2466 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
extern "C" t1083  m12596_gshared (t7 * __this , t7 * p0, int32_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		int32_t L_2 = p1;
		int32_t L_3 = L_2;
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



#include "t2470.h"
#ifndef _MSC_VER
#else
#endif
#include "t2470MD.h"

struct t52;
extern "C" t2469  m18209_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18209(__this, p0, method) (( t2469  (*) (t52 *, int32_t, const MethodInfo*))m18209_gshared)(__this, p0, method)


extern "C" void m12597_gshared (t2470 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m12598_gshared (t2470 * __this, const MethodInfo* method)
{
	{
		t2469  L_0 = (( t2469  (*) (t2470 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2470 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2469  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m12599_gshared (t2470 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m12600_gshared (t2470 * __this, const MethodInfo* method)
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
extern "C" t2469  m12601_gshared (t2470 * __this, const MethodInfo* method)
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
		t2469  L_8 = (( t2469  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern "C" void m12602_gshared (t2469 * __this, t7 * p0, int32_t p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		(( void (*) (t2469 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2469 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = p1;
		(( void (*) (t2469 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2469 *)__this, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" t7 * m12603_gshared (t2469 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f0);
		return L_0;
	}
}
extern "C" void m12604_gshared (t2469 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" int32_t m12605_gshared (t2469 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f1);
		return L_0;
	}
}
extern "C" void m12606_gshared (t2469 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m12607_gshared (t2469 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
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
		t7 * L_2 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2469 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		t7 * L_4 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2469 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		int32_t L_9 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2469 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_10 = L_9;
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
		int32_t L_12 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2469 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_12;
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

#include "t2472.h"
#include "t2474.h"
#include "t2474MD.h"
#include "t2472MD.h"
struct t2466;
struct t52;
struct t2474;
extern "C" void m18220_gshared (t2466 * __this, t52 * p0, int32_t p1, t2474 * p2, const MethodInfo* method);
#define m18220(__this, p0, p1, p2, method) (( void (*) (t2466 *, t52 *, int32_t, t2474 *, const MethodInfo*))m18220_gshared)(__this, p0, p1, p2, method)
struct t2466;
struct t69;
struct t2474;
extern "C" void m18219_gshared (t2466 * __this, t69* p0, int32_t p1, t2474 * p2, const MethodInfo* method);
#define m18219(__this, p0, p1, p2, method) (( void (*) (t2466 *, t69*, int32_t, t2474 *, const MethodInfo*))m18219_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m12608_gshared (t2471 * __this, t2466 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2466 * L_0 = p0;
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
		t2466 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m12609_gshared (t2471 * __this, t7 * p0, const MethodInfo* method)
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
extern "C" void m12610_gshared (t2471 * __this, const MethodInfo* method)
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
extern "C" bool m12611_gshared (t2471 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (t2466 *)L_0, (t7 *)L_1);
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m12612_gshared (t2471 * __this, t7 * p0, const MethodInfo* method)
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
extern "C" t7* m12613_gshared (t2471 * __this, const MethodInfo* method)
{
	{
		t2472  L_0 = (( t2472  (*) (t2471 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2471 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2472  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m12614_gshared (t2471 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
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
		VirtActionInvoker2< t69*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::CopyTo(TKey[],System.Int32) */, (t2471 *)__this, (t69*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2466 * L_4 = (t2466 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2466 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2466 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2466 * L_7 = (t2466 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2474 * L_11 = (t2474 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2474 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2466 *, t52 *, int32_t, t2474 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2466 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2474 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m12615_gshared (t2471 * __this, const MethodInfo* method)
{
	{
		t2472  L_0 = (( t2472  (*) (t2471 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2471 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2472  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m12616_gshared (t2471 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m12617_gshared (t2471 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m12618_gshared (t2471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m12619_gshared (t2471 * __this, t69* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		t69* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2466 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2466 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2466 * L_3 = (t2466 *)(__this->f0);
		t69* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2474 * L_7 = (t2474 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2474 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2466 *, t69*, int32_t, t2474 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2466 *)L_3, (t69*)L_4, (int32_t)L_5, (t2474 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2472  m12620_gshared (t2471 * __this, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		t2472  L_1 = {0};
		(( void (*) (t2472 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2466 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m12621_gshared (t2471 * __this, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (t2466 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12622_gshared (t2472 * __this, t2466 * p0, const MethodInfo* method)
{
	{
		t2466 * L_0 = p0;
		t2473  L_1 = (( t2473  (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m12623_gshared (t2472 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		t7 * L_1 = (( t7 * (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t7 * L_2 = L_1;
		return ((t7 *)L_2);
	}
}
extern "C" void m12624_gshared (t2472 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m12625_gshared (t2472 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" t7 * m12626_gshared (t2472 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		t2469 * L_1 = (t2469 *)&(L_0->f3);
		t7 * L_2 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2469 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1280.h"
#include "t1280MD.h"


extern "C" void m12627_gshared (t2473 * __this, t2466 * p0, const MethodInfo* method)
{
	{
		t2466 * L_0 = p0;
		__this->f0 = L_0;
		t2466 * L_1 = p0;
		int32_t L_2 = (int32_t)(L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern "C" t7 * m12628_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2469  L_0 = (t2469 )(__this->f3);
		t2469  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" t1083  m12629_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2469 * L_0 = (t2469 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2469 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t7 * L_2 = L_1;
		t2469 * L_3 = (t2469 *)&(__this->f3);
		int32_t L_4 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2469 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_5 = L_4;
		t7 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		t1083  L_7 = {0};
		m4503(&L_7, (t7 *)((t7 *)L_2), (t7 *)L_6, NULL);
		return L_7;
	}
}
extern "C" t7 * m12630_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t7 * L_1 = L_0;
		return ((t7 *)L_1);
	}
}
extern "C" t7 * m12631_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
extern "C" bool m12632_gshared (t2473 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		t2466 * L_4 = (t2466 *)(__this->f0);
		t2432* L_5 = (t2432*)(L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t2466 * L_8 = (t2466 *)(__this->f0);
		t69* L_9 = (t69*)(L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t2466 * L_12 = (t2466 *)(__this->f0);
		t1018* L_13 = (t1018*)(L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t2469  L_16 = {0};
		(( void (*) (t2469 *, t7 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_9, L_11)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->f1);
		t2466 * L_18 = (t2466 *)(__this->f0);
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
extern "C" t2469  m12633_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		t2469  L_0 = (t2469 )(__this->f3);
		return L_0;
	}
}
extern "C" t7 * m12634_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2469 * L_0 = (t2469 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2469 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" int32_t m12635_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2469 * L_0 = (t2469 *)&(__this->f3);
		int32_t L_1 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2469 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern TypeInfo* t1280_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m12636_gshared (t2473 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1280_TI_var = il2cpp_codegen_type_info_from_index(2363);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
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
		t2466 * L_2 = (t2466 *)(__this->f0);
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
extern "C" void m12637_gshared (t2473 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2473 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
extern "C" void m12638_gshared (t2473 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (t2466 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12639_gshared (t2474 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m12640_gshared (t2474 * __this, t7 * p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12640((t2474 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m12641_gshared (t2474 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t58_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t7 * m12642_gshared (t2474 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#ifndef _MSC_VER
#else
#endif

#include "t2476.h"
#include "t2477.h"
#include "t2477MD.h"
#include "t2476MD.h"
struct t2466;
struct t52;
struct t2477;
extern "C" void m18222_gshared (t2466 * __this, t52 * p0, int32_t p1, t2477 * p2, const MethodInfo* method);
#define m18222(__this, p0, p1, p2, method) (( void (*) (t2466 *, t52 *, int32_t, t2477 *, const MethodInfo*))m18222_gshared)(__this, p0, p1, p2, method)
struct t2466;
struct t1018;
struct t2477;
extern "C" void m18223_gshared (t2466 * __this, t1018* p0, int32_t p1, t2477 * p2, const MethodInfo* method);
#define m18223(__this, p0, p1, p2, method) (( void (*) (t2466 *, t1018*, int32_t, t2477 *, const MethodInfo*))m18223_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m12643_gshared (t2475 * __this, t2466 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2466 * L_0 = p0;
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
		t2466 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m12644_gshared (t2475 * __this, int32_t p0, const MethodInfo* method)
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
extern "C" void m12645_gshared (t2475 * __this, const MethodInfo* method)
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
extern "C" bool m12646_gshared (t2475 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		int32_t L_1 = p0;
		bool L_2 = (( bool (*) (t2466 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m12647_gshared (t2475 * __this, int32_t p0, const MethodInfo* method)
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
extern "C" t7* m12648_gshared (t2475 * __this, const MethodInfo* method)
{
	{
		t2476  L_0 = (( t2476  (*) (t2475 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2475 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2476  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m12649_gshared (t2475 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
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
		VirtActionInvoker2< t1018*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32) */, (t2475 *)__this, (t1018*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2466 * L_4 = (t2466 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2466 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2466 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2466 * L_7 = (t2466 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2477 * L_11 = (t2477 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2477 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2466 *, t52 *, int32_t, t2477 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2466 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2477 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m12650_gshared (t2475 * __this, const MethodInfo* method)
{
	{
		t2476  L_0 = (( t2476  (*) (t2475 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2475 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2476  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m12651_gshared (t2475 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m12652_gshared (t2475 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m12653_gshared (t2475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m12654_gshared (t2475 * __this, t1018* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		t1018* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2466 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2466 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2466 * L_3 = (t2466 *)(__this->f0);
		t1018* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2477 * L_7 = (t2477 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2477 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2466 *, t1018*, int32_t, t2477 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2466 *)L_3, (t1018*)L_4, (int32_t)L_5, (t2477 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2476  m12655_gshared (t2475 * __this, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		t2476  L_1 = {0};
		(( void (*) (t2476 *, t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2466 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m12656_gshared (t2475 * __this, const MethodInfo* method)
{
	{
		t2466 * L_0 = (t2466 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (t2466 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12657_gshared (t2476 * __this, t2466 * p0, const MethodInfo* method)
{
	{
		t2466 * L_0 = p0;
		t2473  L_1 = (( t2473  (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m12658_gshared (t2476 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		int32_t L_1 = (( int32_t (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
extern "C" void m12659_gshared (t2476 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		(( void (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m12660_gshared (t2476 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" int32_t m12661_gshared (t2476 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		t2469 * L_1 = (t2469 *)&(L_0->f3);
		int32_t L_2 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2469 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12662_gshared (t2477 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" int32_t m12663_gshared (t2477 * __this, t7 * p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12663((t2477 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (t7 * __this, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m12664_gshared (t2477 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t58_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" int32_t m12665_gshared (t2477 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12666_gshared (t2468 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1083  m12667_gshared (t2468 * __this, t7 * p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12667((t2468 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m12668_gshared (t2468 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t58_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1083  m12669_gshared (t2468 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1083 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12670_gshared (t2478 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t2469  m12671_gshared (t2478 * __this, t7 * p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12671((t2478 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2469  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2469  (*FunctionPointerType) (t7 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2469  (*FunctionPointerType) (t7 * __this, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m12672_gshared (t2478 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t58_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t2469  m12673_gshared (t2478 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2469 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12674_gshared (t2479 * __this, t2466 * p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t2466 * L_0 = p0;
		t2473  L_1 = (( t2473  (*) (t2466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2466 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" bool m12675_gshared (t2479 * __this, const MethodInfo* method)
{
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern TypeInfo* t1082_TI_var;
extern "C" t1083  m12676_gshared (t2479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1082_TI_var = il2cpp_codegen_type_info_from_index(1841);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2473  L_0 = (t2473 )(__this->f0);
		t2473  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1083  L_3 = (t1083 )InterfaceFuncInvoker0< t1083  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, t1082_TI_var, (t7 *)L_2);
		return L_3;
	}
}
extern "C" t7 * m12677_gshared (t2479 * __this, const MethodInfo* method)
{
	t2469  V_0 = {0};
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		t2469  L_1 = (( t2469  (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2469 )L_1;
		t7 * L_2 = (( t7 * (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2469 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t7 * L_3 = L_2;
		return ((t7 *)L_3);
	}
}
extern "C" t7 * m12678_gshared (t2479 * __this, const MethodInfo* method)
{
	t2469  V_0 = {0};
	{
		t2473 * L_0 = (t2473 *)&(__this->f0);
		t2469  L_1 = (( t2469  (*) (t2473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2473 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2469 )L_1;
		int32_t L_2 = (( int32_t (*) (t2469 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2469 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
extern TypeInfo* t1083_TI_var;
extern "C" t7 * m12679_gshared (t2479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1083_TI_var = il2cpp_codegen_type_info_from_index(1807);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1083  L_0 = (t1083 )VirtFuncInvoker0< t1083  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry() */, (t2479 *)__this);
		t1083  L_1 = L_0;
		t7 * L_2 = Box(t1083_TI_var, &L_1);
		return L_2;
	}
}
#include "t2492.h"
#ifndef _MSC_VER
#else
#endif
#include "t2492MD.h"

#include "t2496.h"
#include "t2500.h"
#include "t2494.h"
#include "t2493.h"
#include "t2502.h"
#include "t2498.h"
#include "t2503.h"
#include "t2496MD.h"
#include "t2500MD.h"
#include "t2494MD.h"
#include "t2493MD.h"
#include "t2502MD.h"
#include "t2498MD.h"
#include "t2503MD.h"
struct t2492;
struct t3186;
struct t2493;
extern "C" void m18241_gshared (t2492 * __this, t3186* p0, int32_t p1, t2493 * p2, const MethodInfo* method);
#define m18241(__this, p0, p1, p2, method) (( void (*) (t2492 *, t3186*, int32_t, t2493 *, const MethodInfo*))m18241_gshared)(__this, p0, p1, p2, method)
struct t2492;
struct t52;
struct t2502;
extern "C" void m18243_gshared (t2492 * __this, t52 * p0, int32_t p1, t2502 * p2, const MethodInfo* method);
#define m18243(__this, p0, p1, p2, method) (( void (*) (t2492 *, t52 *, int32_t, t2502 *, const MethodInfo*))m18243_gshared)(__this, p0, p1, p2, method)
struct t2492;
struct t2749;
struct t2502;
extern "C" void m18244_gshared (t2492 * __this, t2749* p0, int32_t p1, t2502 * p2, const MethodInfo* method);
#define m18244(__this, p0, p1, p2, method) (( void (*) (t2492 *, t2749*, int32_t, t2502 *, const MethodInfo*))m18244_gshared)(__this, p0, p1, p2, method)


extern "C" void m12785_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		(( void (*) (t2492 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)__this, (int32_t)((int32_t)10), (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m12787_gshared (t2492 * __this, t7* p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t7* L_0 = p0;
		(( void (*) (t2492 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)__this, (int32_t)((int32_t)10), (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m12789_gshared (t2492 * __this, t7* p0, const MethodInfo* method)
{
	{
		t7* L_0 = p0;
		(( void (*) (t2492 *, t7*, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2492 *)__this, (t7*)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" void m12791_gshared (t2492 * __this, int32_t p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		int32_t L_0 = p0;
		(( void (*) (t2492 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)__this, (int32_t)L_0, (t7*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m12793_gshared (t2492 * __this, t7* p0, t7* p1, const MethodInfo* method)
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
	t2494  V_1 = {0};
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		t7* L_5 = p1;
		(( void (*) (t2492 *, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)__this, (int32_t)L_4, (t7*)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t7* L_6 = p0;
		t7* L_7 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_6);
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
			t2494  L_9 = (t2494 )InterfaceFuncInvoker0< t2494  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_8);
			V_1 = (t2494 )L_9;
			t7 * L_10 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2494 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			t7 * L_11 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2494 *)(&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< t7 *, t7 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (t2492 *)__this, (t7 *)L_10, (t7 *)L_11);
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
extern "C" void m12795_gshared (t2492 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t921 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern "C" t7* m12797_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2496 * L_0 = (( t2496 * (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
extern "C" t7* m12799_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2500 * L_0 = (( t2500 * (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
extern "C" t7 * m12801_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (t2492 *)__this, (t7 *)((t7 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t7 * L_3 = p0;
		t7 * L_4 = (( t7 * (*) (t2492 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2492 *)__this, (t7 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_5 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey) */, (t2492 *)__this, (t7 *)L_4);
		t7 * L_6 = L_5;
		return ((t7 *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
extern "C" void m12803_gshared (t2492 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2492 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2492 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		t7 * L_3 = (( t7 * (*) (t2492 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2492 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, t7 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, (t2492 *)__this, (t7 *)L_1, (t7 *)L_3);
		return;
	}
}
extern "C" void m12805_gshared (t2492 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = (( t7 * (*) (t2492 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((t2492 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t7 * L_2 = p1;
		t7 * L_3 = (( t7 * (*) (t2492 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t2492 *)__this, (t7 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< t7 *, t7 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (t2492 *)__this, (t7 *)L_1, (t7 *)L_3);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m12807_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
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
		bool L_4 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (t2492 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m12809_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
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
		VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (t2492 *)__this, (t7 *)((t7 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
extern "C" bool m12811_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m12813_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m12815_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m12817_gshared (t2492 * __this, t2494  p0, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2494 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t7 * L_1 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2494 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, t7 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (t2492 *)__this, (t7 *)L_0, (t7 *)L_1);
		return;
	}
}
extern "C" bool m12819_gshared (t2492 * __this, t2494  p0, const MethodInfo* method)
{
	{
		t2494  L_0 = p0;
		bool L_1 = (( bool (*) (t2492 *, t2494 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2492 *)__this, (t2494 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
extern "C" void m12821_gshared (t2492 * __this, t2749* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2749* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2492 *, t2749*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2492 *)__this, (t2749*)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
extern "C" bool m12823_gshared (t2492 * __this, t2494  p0, const MethodInfo* method)
{
	{
		t2494  L_0 = p0;
		bool L_1 = (( bool (*) (t2492 *, t2494 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((t2492 *)__this, (t2494 )L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		t7 * L_2 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2494 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (t2492 *)__this, (t7 *)L_2);
		return L_3;
	}
}
extern TypeInfo* t3186_TI_var;
extern "C" void m12825_gshared (t2492 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3186_TI_var = il2cpp_codegen_type_info_from_index(6377);
		s_Il2CppMethodIntialized = true;
	}
	t2749* V_0 = {0};
	t3186* V_1 = {0};
	int32_t G_B5_0 = 0;
	t3186* G_B5_1 = {0};
	t2492 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t3186* G_B4_1 = {0};
	t2492 * G_B4_2 = {0};
	{
		t52 * L_0 = p0;
		V_0 = (t2749*)((t2749*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		t2749* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t2749* L_2 = V_0;
		int32_t L_3 = p1;
		(( void (*) (t2492 *, t2749*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2492 *)__this, (t2749*)L_2, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		t52 * L_4 = p0;
		int32_t L_5 = p1;
		(( void (*) (t2492 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2492 *)__this, (t52 *)L_4, (int32_t)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		t2493 * L_10 = ((t2492_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((t2492 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((t2492 *)(__this));
			goto IL_0040;
		}
	}
	{
		t226 L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		t2493 * L_12 = (t2493 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (t2493 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (t7 *)NULL, (t226)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((t2492_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t2492 *)(G_B4_2));
	}

IL_0040:
	{
		t2493 * L_13 = ((t2492_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		(( void (*) (t2492 *, t3186*, int32_t, t2493 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((t2492 *)G_B5_2, (t3186*)G_B5_1, (int32_t)G_B5_0, (t2493 *)L_13, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		t52 * L_14 = p0;
		int32_t L_15 = p1;
		t226 L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2502 * L_17 = (t2502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2502 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (t7 *)NULL, (t226)L_16, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2492 *, t52 *, int32_t, t2502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((t2492 *)__this, (t52 *)L_14, (int32_t)L_15, (t2502 *)L_17, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
extern "C" t7 * m12827_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2498  L_0 = {0};
		(( void (*) (t2498 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2498  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" t7* m12829_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2498  L_0 = {0};
		(( void (*) (t2498 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t2498  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t7*)L_2;
	}
}
extern "C" t7 * m12831_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2503 * L_0 = (t2503 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (t2503 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
extern "C" int32_t m12833_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f10);
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1404_TI_var;
extern "C" t7 * m12835_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
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
		t69* L_20 = (t69*)(__this->f7);
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		return (*(t7 **)(t7 **)SZArrayLdElema(L_20, L_22));
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
extern "C" void m12837_gshared (t2492 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
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
		(( void (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		t69* L_70 = (t69*)(__this->f7);
		int32_t L_71 = V_2;
		t7 * L_72 = p1;
		*((t7 **)(t7 **)SZArrayLdElema(L_70, L_71)) = (t7 *)L_72;
		int32_t L_73 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern TypeInfo* t2364_TI_var;
extern "C" void m12839_gshared (t2492 * __this, int32_t p0, t7* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	t2492 * G_B4_0 = {0};
	t2492 * G_B3_0 = {0};
	t7* G_B5_0 = {0};
	t2492 * G_B5_1 = {0};
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
		G_B3_0 = ((t2492 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((t2492 *)(__this));
			goto IL_0018;
		}
	}
	{
		t7* L_3 = p1;
		V_0 = (t7*)L_3;
		t7* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((t2492 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_5 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((t7*)(L_5));
		G_B5_1 = ((t2492 *)(G_B4_0));
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
		(( void (*) (t2492 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2492 *)__this, (int32_t)L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f14 = 0;
		return;
	}
}
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m12841_gshared (t2492 * __this, int32_t p0, const MethodInfo* method)
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
		__this->f7 = ((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
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
extern "C" void m12843_gshared (t2492 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
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
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (t2492 *)__this);
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
extern "C" t2494  m12845_gshared (t7 * __this , t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		t2494  L_2 = {0};
		(( void (*) (t2494 *, t7 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (t7 *)L_0, (t7 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
extern "C" t7 * m12847_gshared (t7 * __this , t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		return L_0;
	}
}
extern "C" t7 * m12849_gshared (t7 * __this , t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p1;
		return L_0;
	}
}
extern "C" void m12851_gshared (t2492 * __this, t2749* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2749* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t2492 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t2492 *)__this, (t52 *)(t52 *)L_0, (int32_t)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t2749* L_2 = p0;
		int32_t L_3 = p1;
		t226 L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t2502 * L_5 = (t2502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t2502 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (t7 *)NULL, (t226)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t2492 *, t2749*, int32_t, t2502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((t2492 *)__this, (t2749*)L_2, (int32_t)L_3, (t2502 *)L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
extern TypeInfo* t910_TI_var;
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t2432_TI_var;
extern "C" void m12853_gshared (t2492 * __this, const MethodInfo* method)
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
	t69* V_8 = {0};
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
		V_8 = (t69*)((t69*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		t69* L_37 = (t69*)(__this->f6);
		t69* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_37, (int32_t)0, (t52 *)(t52 *)L_38, (int32_t)0, (int32_t)L_39, NULL);
		t69* L_40 = (t69*)(__this->f7);
		t69* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->f8);
		m6390(NULL, (t52 *)(t52 *)L_40, (int32_t)0, (t52 *)(t52 *)L_41, (int32_t)0, (int32_t)L_42, NULL);
		t69* L_43 = V_7;
		__this->f6 = L_43;
		t69* L_44 = V_8;
		__this->f7 = L_44;
		int32_t L_45 = V_0;
		__this->f11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m12855_gshared (t2492 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
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
		(( void (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
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
		t69* L_54 = (t69*)(__this->f7);
		int32_t L_55 = V_2;
		t7 * L_56 = p1;
		*((t7 **)(t7 **)SZArrayLdElema(L_54, L_55)) = (t7 *)L_56;
		int32_t L_57 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
extern "C" void m12857_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		__this->f10 = 0;
		t1018* L_0 = (t1018*)(__this->f4);
		t1018* L_1 = (t1018*)(__this->f4);
		m5606(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_1)->max_length))), NULL);
		t69* L_2 = (t69*)(__this->f6);
		t69* L_3 = (t69*)(__this->f6);
		m5606(NULL, (t52 *)(t52 *)L_2, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_3)->max_length))), NULL);
		t69* L_4 = (t69*)(__this->f7);
		t69* L_5 = (t69*)(__this->f7);
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
extern "C" bool m12859_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
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
extern TypeInfo* t2364_TI_var;
extern "C" bool m12861_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_0 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
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
		t69* L_5 = (t69*)(__this->f7);
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		t7 * L_8 = p0;
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (t7*)L_4, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_5, L_7)), (t7 *)L_8);
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
extern "C" void m12863_gshared (t2492 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t2749* V_0 = {0};
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
		V_0 = (t2749*)NULL;
		int32_t L_6 = (int32_t)(__this->f10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->f10);
		V_0 = (t2749*)((t2749*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		t2749* L_8 = V_0;
		(( void (*) (t2492 *, t2749*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t2492 *)__this, (t2749*)L_8, (int32_t)0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		t921 * L_9 = p0;
		t1018* L_10 = (t1018*)(__this->f4);
		m4515((t921 *)L_9, (t47*)(t47*) &_stringLiteral1331, (int32_t)(((int32_t)(((t52 *)L_10)->max_length))), NULL);
		t921 * L_11 = p0;
		t2749* L_12 = V_0;
		m4525((t921 *)L_11, (t47*)(t47*) &_stringLiteral1332, (t7 *)(t7 *)L_12, NULL);
		return;
	}
}
extern TypeInfo* t347_TI_var;
extern "C" void m12865_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t2749* V_1 = {0};
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
		V_1 = (t2749*)((t2749*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (t2492 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((t2492 *)__this, (int32_t)L_12, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->f10 = 0;
		t2749* L_13 = V_1;
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
		t2749* L_14 = V_1;
		int32_t L_15 = V_2;
		t7 * L_16 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2494 *)((t2494 *)(t2494 *)SZArrayLdElema(L_14, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2749* L_17 = V_1;
		int32_t L_18 = V_2;
		t7 * L_19 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2494 *)((t2494 *)(t2494 *)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< t7 *, t7 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (t2492 *)__this, (t7 *)L_16, (t7 *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		t2749* L_22 = V_1;
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
extern "C" bool m12867_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t7 * V_4 = {0};
	t7 * V_5 = {0};
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
		t69* L_49 = (t69*)(__this->f7);
		int32_t L_50 = V_2;
		Initobj (t7_TI_var, (&V_5));
		t7 * L_51 = V_5;
		*((t7 **)(t7 **)SZArrayLdElema(L_49, L_50)) = (t7 *)L_51;
		int32_t L_52 = (int32_t)(__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t7_TI_var;
extern "C" bool m12869_gshared (t2492 * __this, t7 * p0, t7 ** p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t7 * V_2 = {0};
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
		t7 ** L_20 = p1;
		t69* L_21 = (t69*)(__this->f7);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		*L_20 = (*(t7 **)(t7 **)SZArrayLdElema(L_21, L_23));
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
		t7 ** L_28 = p1;
		Initobj (t7_TI_var, (&V_2));
		t7 * L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
extern "C" t2496 * m12871_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2496 * L_0 = (t2496 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (t2496 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
extern "C" t2500 * m12873_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2500 * L_0 = (t2500 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (t2500 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t7 * m12875_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
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
extern TypeInfo* t7_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t7 * m12877_gshared (t2492 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
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
		Initobj (t7_TI_var, (&V_0));
		t7 * L_3 = V_0;
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
		return ((t7 *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
extern TypeInfo* t2364_TI_var;
extern "C" bool m12879_gshared (t2492 * __this, t2494  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2364_TI_var = il2cpp_codegen_type_info_from_index(5182);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	{
		t7 * L_0 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2494 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t7 *, t7 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (t2492 *)__this, (t7 *)L_0, (t7 **)(&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(t2364_TI_var);
		t2364 * L_2 = (( t2364 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		t7 * L_3 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2494 *)(&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t7 * L_4 = V_0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, t7 *, t7 * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (t2364 *)L_2, (t7 *)L_3, (t7 *)L_4);
		return L_5;
	}
}
extern "C" t2498  m12881_gshared (t2492 * __this, const MethodInfo* method)
{
	{
		t2498  L_0 = {0};
		(( void (*) (t2498 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (t2492 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
extern "C" t1083  m12883_gshared (t7 * __this , t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = L_0;
		t7 * L_2 = p1;
		t7 * L_3 = L_2;
		t1083  L_4 = {0};
		m4503(&L_4, (t7 *)((t7 *)L_1), (t7 *)((t7 *)L_3), NULL);
		return L_4;
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



#include "t2495.h"
#ifndef _MSC_VER
#else
#endif
#include "t2495MD.h"

struct t52;
extern "C" t2494  m18229_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18229(__this, p0, method) (( t2494  (*) (t52 *, int32_t, const MethodInfo*))m18229_gshared)(__this, p0, method)


extern "C" void m12928_gshared (t2495 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m12929_gshared (t2495 * __this, const MethodInfo* method)
{
	{
		t2494  L_0 = (( t2494  (*) (t2495 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2495 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2494  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m12930_gshared (t2495 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m12931_gshared (t2495 * __this, const MethodInfo* method)
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
extern "C" t2494  m12932_gshared (t2495 * __this, const MethodInfo* method)
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
		t2494  L_8 = (( t2494  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern "C" void m12933_gshared (t2494 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		(( void (*) (t2494 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2494 *)__this, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t7 * L_1 = p1;
		(( void (*) (t2494 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2494 *)__this, (t7 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" t7 * m12934_gshared (t2494 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f0);
		return L_0;
	}
}
extern "C" void m12935_gshared (t2494 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t7 * m12936_gshared (t2494 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f1);
		return L_0;
	}
}
extern "C" void m12937_gshared (t2494 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m12938_gshared (t2494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t7 * V_1 = {0};
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
		t7 * L_2 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2494 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		t7 * L_4 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2494 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		t7 * L_9 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2494 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t7 * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((t7 *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		t7 * L_11 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2494 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (t7 *)L_11;
		t47* L_12 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, (t7 *)(*(&V_1)));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_13 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t47**)(t47**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t47*)G_B6_0;
		t48* L_14 = (t48*)G_B6_3;
		ArrayElementTypeCheck (L_14, (t47*) &_stringLiteral306);
		*((t47**)(t47**)SZArrayLdElema(L_14, 4)) = (t47*)(t47*) &_stringLiteral306;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_15 = m3262(NULL, (t48*)L_14, NULL);
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t2497.h"
#include "t2499.h"
#include "t2499MD.h"
#include "t2497MD.h"
struct t2492;
struct t52;
struct t2499;
extern "C" void m18240_gshared (t2492 * __this, t52 * p0, int32_t p1, t2499 * p2, const MethodInfo* method);
#define m18240(__this, p0, p1, p2, method) (( void (*) (t2492 *, t52 *, int32_t, t2499 *, const MethodInfo*))m18240_gshared)(__this, p0, p1, p2, method)
struct t2492;
struct t69;
struct t2499;
extern "C" void m18239_gshared (t2492 * __this, t69* p0, int32_t p1, t2499 * p2, const MethodInfo* method);
#define m18239(__this, p0, p1, p2, method) (( void (*) (t2492 *, t69*, int32_t, t2499 *, const MethodInfo*))m18239_gshared)(__this, p0, p1, p2, method)


extern TypeInfo* t708_TI_var;
extern "C" void m12939_gshared (t2496 * __this, t2492 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2492 * L_0 = p0;
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
		t2492 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m12940_gshared (t2496 * __this, t7 * p0, const MethodInfo* method)
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
extern "C" void m12941_gshared (t2496 * __this, const MethodInfo* method)
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
extern "C" bool m12942_gshared (t2496 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t7 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (t2492 *)L_0, (t7 *)L_1);
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m12943_gshared (t2496 * __this, t7 * p0, const MethodInfo* method)
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
extern "C" t7* m12944_gshared (t2496 * __this, const MethodInfo* method)
{
	{
		t2497  L_0 = (( t2497  (*) (t2496 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2496 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2497  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m12945_gshared (t2496 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
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
		VirtActionInvoker2< t69*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32) */, (t2496 *)__this, (t69*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2492 * L_4 = (t2492 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2492 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2492 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2492 * L_7 = (t2492 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2499 * L_11 = (t2499 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2499 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2492 *, t52 *, int32_t, t2499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2492 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2499 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m12946_gshared (t2496 * __this, const MethodInfo* method)
{
	{
		t2497  L_0 = (( t2497  (*) (t2496 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2496 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2497  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m12947_gshared (t2496 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m12948_gshared (t2496 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m12949_gshared (t2496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m12950_gshared (t2496 * __this, t69* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t69* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2492 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2492 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2492 * L_3 = (t2492 *)(__this->f0);
		t69* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2499 * L_7 = (t2499 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2499 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2492 *, t69*, int32_t, t2499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2492 *)L_3, (t69*)L_4, (int32_t)L_5, (t2499 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2497  m12951_gshared (t2496 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t2497  L_1 = {0};
		(( void (*) (t2497 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m12952_gshared (t2496 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (t2492 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12953_gshared (t2497 * __this, t2492 * p0, const MethodInfo* method)
{
	{
		t2492 * L_0 = p0;
		t2498  L_1 = (( t2498  (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m12954_gshared (t2497 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		t7 * L_1 = (( t7 * (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t7 * L_2 = L_1;
		return ((t7 *)L_2);
	}
}
extern "C" void m12955_gshared (t2497 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m12956_gshared (t2497 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" t7 * m12957_gshared (t2497 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		t2494 * L_1 = (t2494 *)&(L_0->f3);
		t7 * L_2 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2494 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12958_gshared (t2498 * __this, t2492 * p0, const MethodInfo* method)
{
	{
		t2492 * L_0 = p0;
		__this->f0 = L_0;
		t2492 * L_1 = p0;
		int32_t L_2 = (int32_t)(L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern "C" t7 * m12959_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2494  L_0 = (t2494 )(__this->f3);
		t2494  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" t1083  m12960_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2494 * L_0 = (t2494 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2494 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t7 * L_2 = L_1;
		t2494 * L_3 = (t2494 *)&(__this->f3);
		t7 * L_4 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2494 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t7 * L_5 = L_4;
		t1083  L_6 = {0};
		m4503(&L_6, (t7 *)((t7 *)L_2), (t7 *)((t7 *)L_5), NULL);
		return L_6;
	}
}
extern "C" t7 * m12961_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t7 * L_1 = L_0;
		return ((t7 *)L_1);
	}
}
extern "C" t7 * m12962_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (( t7 * (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		t7 * L_1 = L_0;
		return ((t7 *)L_1);
	}
}
extern "C" bool m12963_gshared (t2498 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		t2492 * L_4 = (t2492 *)(__this->f0);
		t2432* L_5 = (t2432*)(L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (int32_t)(((t1403 *)(t1403 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t2492 * L_8 = (t2492 *)(__this->f0);
		t69* L_9 = (t69*)(L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t2492 * L_12 = (t2492 *)(__this->f0);
		t69* L_13 = (t69*)(L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t2494  L_16 = {0};
		(( void (*) (t2494 *, t7 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_9, L_11)), (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->f1);
		t2492 * L_18 = (t2492 *)(__this->f0);
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
extern "C" t2494  m12964_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		t2494  L_0 = (t2494 )(__this->f3);
		return L_0;
	}
}
extern "C" t7 * m12965_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2494 * L_0 = (t2494 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t2494 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" t7 * m12966_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2494 * L_0 = (t2494 *)&(__this->f3);
		t7 * L_1 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2494 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern TypeInfo* t1280_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m12967_gshared (t2498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1280_TI_var = il2cpp_codegen_type_info_from_index(2363);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
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
		t2492 * L_2 = (t2492 *)(__this->f0);
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
extern "C" void m12968_gshared (t2498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t2498 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
extern "C" void m12969_gshared (t2498 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (t2492 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12970_gshared (t2499 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m12971_gshared (t2499 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12971((t2499 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m12972_gshared (t2499 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t7 * m12973_gshared (t2499 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#ifndef _MSC_VER
#else
#endif

#include "t2501.h"
#include "t2501MD.h"


extern TypeInfo* t708_TI_var;
extern "C" void m12974_gshared (t2500 * __this, t2492 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		t2492 * L_0 = p0;
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
		t2492 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m12975_gshared (t2500 * __this, t7 * p0, const MethodInfo* method)
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
extern "C" void m12976_gshared (t2500 * __this, const MethodInfo* method)
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
extern "C" bool m12977_gshared (t2500 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t7 * L_1 = p0;
		bool L_2 = (( bool (*) (t2492 *, t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)L_0, (t7 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m12978_gshared (t2500 * __this, t7 * p0, const MethodInfo* method)
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
extern "C" t7* m12979_gshared (t2500 * __this, const MethodInfo* method)
{
	{
		t2501  L_0 = (( t2501  (*) (t2500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2500 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2501  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m12980_gshared (t2500 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
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
		VirtActionInvoker2< t69*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32) */, (t2500 *)__this, (t69*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		t2492 * L_4 = (t2492 *)(__this->f0);
		t52 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t2492 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2492 *)L_4, (t52 *)L_5, (int32_t)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2492 * L_7 = (t2492 *)(__this->f0);
		t52 * L_8 = p0;
		int32_t L_9 = p1;
		t226 L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2499 * L_11 = (t2499 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2499 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (t7 *)NULL, (t226)L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2492 *, t52 *, int32_t, t2499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((t2492 *)L_7, (t52 *)L_8, (int32_t)L_9, (t2499 *)L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern "C" t7 * m12981_gshared (t2500 * __this, const MethodInfo* method)
{
	{
		t2501  L_0 = (( t2501  (*) (t2500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2500 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t2501  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t7 *)L_2;
	}
}
extern "C" bool m12982_gshared (t2500 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m12983_gshared (t2500 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" t7 * m12984_gshared (t2500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern "C" void m12985_gshared (t2500 * __this, t69* p0, int32_t p1, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t69* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t2492 *, t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2492 *)L_0, (t52 *)(t52 *)L_1, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t2492 * L_3 = (t2492 *)(__this->f0);
		t69* L_4 = p0;
		int32_t L_5 = p1;
		t226 L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t2499 * L_7 = (t2499 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t2499 *, t7 *, t226, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (t7 *)NULL, (t226)L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t2492 *, t69*, int32_t, t2499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((t2492 *)L_3, (t69*)L_4, (int32_t)L_5, (t2499 *)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t2501  m12986_gshared (t2500 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		t2501  L_1 = {0};
		(( void (*) (t2501 *, t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern "C" int32_t m12987_gshared (t2500 * __this, const MethodInfo* method)
{
	{
		t2492 * L_0 = (t2492 *)(__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (t2492 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12988_gshared (t2501 * __this, t2492 * p0, const MethodInfo* method)
{
	{
		t2492 * L_0 = p0;
		t2498  L_1 = (( t2498  (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" t7 * m12989_gshared (t2501 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		t7 * L_1 = (( t7 * (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t7 * L_2 = L_1;
		return ((t7 *)L_2);
	}
}
extern "C" void m12990_gshared (t2501 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		(( void (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern "C" bool m12991_gshared (t2501 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" t7 * m12992_gshared (t2501 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		t2494 * L_1 = (t2494 *)&(L_0->f3);
		t7 * L_2 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((t2494 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12993_gshared (t2493 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1083  m12994_gshared (t2493 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12994((t2493 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1083  (*FunctionPointerType) (t7 * __this, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m12995_gshared (t2493 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1083  m12996_gshared (t2493 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1083 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m12997_gshared (t2502 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t2494  m12998_gshared (t2502 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m12998((t2502 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2494  (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t2494  (*FunctionPointerType) (t7 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t2494  (*FunctionPointerType) (t7 * __this, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m12999_gshared (t2502 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t2494  m13000_gshared (t2502 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2494 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m13001_gshared (t2503 * __this, t2492 * p0, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		t2492 * L_0 = p0;
		t2498  L_1 = (( t2498  (*) (t2492 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2492 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern "C" bool m13002_gshared (t2503 * __this, const MethodInfo* method)
{
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		bool L_1 = (( bool (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern TypeInfo* t1082_TI_var;
extern "C" t1083  m13003_gshared (t2503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1082_TI_var = il2cpp_codegen_type_info_from_index(1841);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2498  L_0 = (t2498 )(__this->f0);
		t2498  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1083  L_3 = (t1083 )InterfaceFuncInvoker0< t1083  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, t1082_TI_var, (t7 *)L_2);
		return L_3;
	}
}
extern "C" t7 * m13004_gshared (t2503 * __this, const MethodInfo* method)
{
	t2494  V_0 = {0};
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		t2494  L_1 = (( t2494  (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2494 )L_1;
		t7 * L_2 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((t2494 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		t7 * L_3 = L_2;
		return ((t7 *)L_3);
	}
}
extern "C" t7 * m13005_gshared (t2503 * __this, const MethodInfo* method)
{
	t2494  V_0 = {0};
	{
		t2498 * L_0 = (t2498 *)&(__this->f0);
		t2494  L_1 = (( t2494  (*) (t2498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((t2498 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2494 )L_1;
		t7 * L_2 = (( t7 * (*) (t2494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((t2494 *)(&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t7 * L_3 = L_2;
		return ((t7 *)L_3);
	}
}
extern TypeInfo* t1083_TI_var;
extern "C" t7 * m13006_gshared (t2503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1083_TI_var = il2cpp_codegen_type_info_from_index(1807);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1083  L_0 = (t1083 )VirtFuncInvoker0< t1083  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry() */, (t2503 *)__this);
		t1083  L_1 = L_0;
		t7 * L_2 = Box(t1083_TI_var, &L_1);
		return L_2;
	}
}
#include "t2508.h"
#ifndef _MSC_VER
#else
#endif
#include "t2508MD.h"



extern "C" void m13105_gshared (t2508 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m13107_gshared (t2508 * __this, t7 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13107((t2508 *)__this->f9,p0, method);
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
extern "C" t7 * m13109_gshared (t2508 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m13111_gshared (t2508 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t225.h"
#ifndef _MSC_VER
#else
#endif
#include "t225MD.h"

#include "t223.h"
#include "t2512.h"
#include "t2510.h"
#include "t2511.h"
#include "t2518.h"
#include "t2513.h"
#include "t693MD.h"
#include "t2510MD.h"
#include "t2511MD.h"
#include "t2512MD.h"
#include "t2518MD.h"
struct t52;
struct t222;
extern "C" void m18246_gshared (t7 * __this , t222** p0, int32_t p1, const MethodInfo* method);
#define m18246(__this , p0, p1, method) (( void (*) (t7 * , t222**, int32_t, const MethodInfo*))m18246_gshared)(__this , p0, p1, method)
struct t52;
struct t222;
extern "C" int32_t m18247_gshared (t7 * __this , t222* p0, t223  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define m18247(__this , p0, p1, p2, p3, method) (( int32_t (*) (t7 * , t222*, t223 , int32_t, int32_t, const MethodInfo*))m18247_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t222;
struct t3238;
extern "C" void m18249_gshared (t7 * __this , t222* p0, int32_t p1, int32_t p2, t7* p3, const MethodInfo* method);
#define m18249(__this , p0, p1, p2, p3, method) (( void (*) (t7 * , t222*, int32_t, int32_t, t7*, const MethodInfo*))m18249_gshared)(__this , p0, p1, p2, p3, method)
struct t52;
struct t222;
struct t2513;
extern "C" void m18255_gshared (t7 * __this , t222* p0, int32_t p1, t2513 * p2, const MethodInfo* method);
#define m18255(__this , p0, p1, p2, method) (( void (*) (t7 * , t222*, int32_t, t2513 *, const MethodInfo*))m18255_gshared)(__this , p0, p1, p2, method)


extern "C" void m1734_gshared (t225 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t222* L_0 = ((t225_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->f4;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern "C" void m3266_gshared (t225 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162((t7 *)__this, NULL);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_1, (t47*)(t47*) &_stringLiteral1326, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = p0;
		__this->f1 = ((t222*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
extern "C" void m13171_gshared (t7 * __this , const MethodInfo* method)
{
	{
		((t225_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->f4 = ((t222*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
extern "C" t7* m13172_gshared (t225 * __this, const MethodInfo* method)
{
	{
		t2512  L_0 = (( t2512  (*) (t225 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t225 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t2512  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (t7*)L_2;
	}
}
extern "C" void m13173_gshared (t225 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		t52 * L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = (int32_t)(__this->f2);
		m6390(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (t52 *)L_1, (int32_t)L_2, (int32_t)L_3, NULL);
		return;
	}
}
extern "C" t7 * m13174_gshared (t225 * __this, const MethodInfo* method)
{
	{
		t2512  L_0 = (( t2512  (*) (t225 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t225 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		t2512  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (t7 *)L_2;
	}
}
extern TypeInfo* t64_TI_var;
extern TypeInfo* t1780_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m13175_gshared (t225 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		t1780_TI_var = il2cpp_codegen_type_info_from_index(2710);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t7 * L_0 = p0;
			VirtActionInvoker1< t223  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (t225 *)__this, (t223 )((*(t223 *)((t223 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			int32_t L_1 = (int32_t)(__this->f2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (t1780_TI_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		t396 * L_2 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_2, (t47*)(t47*) &_stringLiteral1338, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
extern TypeInfo* t64_TI_var;
extern TypeInfo* t1780_TI_var;
extern "C" bool m13176_gshared (t225 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		t1780_TI_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t7 * L_0 = p0;
			bool L_1 = (bool)VirtFuncInvoker1< bool, t223  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T) */, (t225 *)__this, (t223 )((*(t223 *)((t223 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (t1780_TI_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern TypeInfo* t64_TI_var;
extern TypeInfo* t1780_TI_var;
extern "C" int32_t m13177_gshared (t225 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		t1780_TI_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t7 * L_0 = p0;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t223  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (t225 *)__this, (t223 )((*(t223 *)((t223 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (t1780_TI_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
extern TypeInfo* t64_TI_var;
extern TypeInfo* t1780_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m13178_gshared (t225 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		t1780_TI_var = il2cpp_codegen_type_info_from_index(2710);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = p0;
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t225 *)__this, (int32_t)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = p0;
			t7 * L_2 = p1;
			VirtActionInvoker2< int32_t, t223  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, (t225 *)__this, (int32_t)L_1, (t223 )((*(t223 *)((t223 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (t1780_TI_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		t396 * L_3 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_3, (t47*)(t47*) &_stringLiteral1338, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
extern TypeInfo* t64_TI_var;
extern TypeInfo* t1780_TI_var;
extern "C" void m13179_gshared (t225 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		t1780_TI_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t7 * L_0 = p0;
			VirtFuncInvoker1< bool, t223  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T) */, (t225 *)__this, (t223 )((*(t223 *)((t223 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (t1780_TI_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
extern "C" bool m13180_gshared (t225 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m13181_gshared (t225 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m13182_gshared (t225 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m13183_gshared (t225 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m13184_gshared (t225 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m13185_gshared (t225 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t223  L_1 = (t223 )VirtFuncInvoker1< t223 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (t225 *)__this, (int32_t)L_0);
		t223  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
extern TypeInfo* t64_TI_var;
extern TypeInfo* t1780_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m13186_gshared (t225 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		t1780_TI_var = il2cpp_codegen_type_info_from_index(2710);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = p0;
			t7 * L_1 = p1;
			VirtActionInvoker2< int32_t, t223  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, (t225 *)__this, (int32_t)L_0, (t223 )((*(t223 *)((t223 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (t1780_TI_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		t396 * L_2 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_2, (t47*)(t47*) &_stringLiteral563, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
extern "C" void m13187_gshared (t225 * __this, t223  p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f2);
		t222* L_1 = (t222*)(__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t52 *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((t225 *)__this, (int32_t)1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0017:
	{
		t222* L_2 = (t222*)(__this->f1);
		int32_t L_3 = (int32_t)(__this->f2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->f2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		t223  L_6 = p0;
		*((t223 *)(t223 *)SZArrayLdElema(L_2, L_5)) = (t223 )L_6;
		int32_t L_7 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
extern "C" void m13188_gshared (t225 * __this, int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->f2);
		int32_t L_1 = p0;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		t222* L_3 = (t222*)(__this->f1);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((t52 *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (t225 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((t225 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = m5611(NULL, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = m5611(NULL, (int32_t)L_5, (int32_t)L_6, NULL);
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t225 *)__this, (int32_t)L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_002e:
	{
		return;
	}
}
extern "C" void m13189_gshared (t225 * __this, t7* p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t7* L_0 = p0;
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), (t7*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((t225 *)__this, (int32_t)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		t7* L_4 = p0;
		t222* L_5 = (t222*)(__this->f1);
		int32_t L_6 = (int32_t)(__this->f2);
		InterfaceActionInvoker2< t222*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), (t7*)L_4, (t222*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->f2);
		int32_t L_8 = V_0;
		__this->f2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m13190_gshared (t225 * __this, t7* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t223  V_0 = {0};
	t7* V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t7* L_0 = p0;
		t7* L_1 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), (t7*)L_0);
		V_1 = (t7*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			t7* L_2 = V_1;
			t223  L_3 = (t223 )InterfaceFuncInvoker0< t223  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), (t7*)L_2);
			V_0 = (t223 )L_3;
			t223  L_4 = V_0;
			VirtActionInvoker1< t223  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (t225 *)__this, (t223 )L_4);
		}

IL_0017:
		{
			t7* L_5 = V_1;
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, (t7 *)L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			t7* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			t7* L_8 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, (t7 *)L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_002c:
	{
		return;
	}
}
extern "C" void m13191_gshared (t225 * __this, t7* p0, const MethodInfo* method)
{
	t7* V_0 = {0};
	{
		t7* L_0 = p0;
		(( void (*) (t225 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((t225 *)__this, (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		t7* L_1 = p0;
		V_0 = (t7*)((t7*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)));
		t7* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		t7* L_3 = V_0;
		(( void (*) (t225 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((t225 *)__this, (t7*)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		goto IL_0021;
	}

IL_001a:
	{
		t7* L_4 = p0;
		(( void (*) (t225 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((t225 *)__this, (t7*)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
extern "C" t2510 * m13192_gshared (t225 * __this, const MethodInfo* method)
{
	{
		t2510 * L_0 = (t2510 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (t2510 *, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (t7*)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
extern "C" void m13193_gshared (t225 * __this, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		t222* L_1 = (t222*)(__this->f1);
		m5606(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (int32_t)(((int32_t)(((t52 *)L_1)->max_length))), NULL);
		__this->f2 = 0;
		int32_t L_2 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern "C" bool m13194_gshared (t225 * __this, t223  p0, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		t223  L_1 = p0;
		int32_t L_2 = (int32_t)(__this->f2);
		int32_t L_3 = (( int32_t (*) (t7 * , t222*, t223 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL, (t222*)L_0, (t223 )L_1, (int32_t)0, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" void m13195_gshared (t225 * __this, t222* p0, int32_t p1, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		t222* L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = (int32_t)(__this->f2);
		m6390(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (t52 *)(t52 *)L_1, (int32_t)L_2, (int32_t)L_3, NULL);
		return;
	}
}
extern TypeInfo* t225_TI_var;
extern TypeInfo* t223_TI_var;
extern "C" t223  m13196_gshared (t225 * __this, t2511 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t225_TI_var = il2cpp_codegen_type_info_from_index(243);
		t223_TI_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t223  V_1 = {0};
	t223  G_B3_0 = {0};
	{
		t2511 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t225_TI_var);
		(( void (*) (t7 * , t2511 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL, (t2511 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->f2);
		t2511 * L_2 = p0;
		int32_t L_3 = (( int32_t (*) (t225 *, int32_t, int32_t, t2511 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((t225 *)__this, (int32_t)0, (int32_t)L_1, (t2511 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		t222* L_5 = (t222*)(__this->f1);
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		G_B3_0 = (*(t223 *)(t223 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (t223_TI_var, (&V_1));
		t223  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m13197_gshared (t7 * __this , t2511 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2511 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1196, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern "C" int32_t m13198_gshared (t225 * __this, int32_t p0, int32_t p1, t2511 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = p0;
		V_1 = (int32_t)L_2;
		goto IL_0022;
	}

IL_0008:
	{
		t2511 * L_3 = p2;
		t222* L_4 = (t222*)(__this->f1);
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker1< bool, t223  >::Invoke(10 /* System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T) */, (t2511 *)L_3, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
extern "C" t2512  m13199_gshared (t225 * __this, const MethodInfo* method)
{
	{
		t2512  L_0 = {0};
		(( void (*) (t2512 *, t225 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (t225 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
extern "C" int32_t m13200_gshared (t225 * __this, t223  p0, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		t223  L_1 = p0;
		int32_t L_2 = (int32_t)(__this->f2);
		int32_t L_3 = (( int32_t (*) (t7 * , t222*, t223 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL, (t222*)L_0, (t223 )L_1, (int32_t)0, (int32_t)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
extern "C" void m13201_gshared (t225 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		p0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = p0;
		int32_t L_4 = (int32_t)(__this->f2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		t222* L_5 = (t222*)(__this->f1);
		int32_t L_6 = p0;
		t222* L_7 = (t222*)(__this->f1);
		int32_t L_8 = p0;
		int32_t L_9 = p1;
		int32_t L_10 = (int32_t)(__this->f2);
		int32_t L_11 = p0;
		m6390(NULL, (t52 *)(t52 *)L_5, (int32_t)L_6, (t52 *)(t52 *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->f2);
		int32_t L_13 = p1;
		__this->f2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = p1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t222* L_15 = (t222*)(__this->f1);
		int32_t L_16 = (int32_t)(__this->f2);
		int32_t L_17 = p1;
		m5606(NULL, (t52 *)(t52 *)L_15, (int32_t)L_16, (int32_t)((-L_17)), NULL);
	}

IL_0056:
	{
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern "C" void m13202_gshared (t225 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (int32_t)(__this->f2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
extern "C" void m13203_gshared (t225 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t225 *)__this, (int32_t)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (int32_t)(__this->f2);
		t222* L_2 = (t222*)(__this->f1);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((t52 *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((t225 *)__this, (int32_t)1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001e:
	{
		int32_t L_3 = p0;
		(( void (*) (t225 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((t225 *)__this, (int32_t)L_3, (int32_t)1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		t222* L_4 = (t222*)(__this->f1);
		int32_t L_5 = p0;
		t223  L_6 = p1;
		*((t223 *)(t223 *)SZArrayLdElema(L_4, L_5)) = (t223 )L_6;
		int32_t L_7 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m13204_gshared (t225 * __this, t7* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*)(t47*) &_stringLiteral1339, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern "C" bool m13205_gshared (t225 * __this, t223  p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t223  L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t223  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (t225 *)__this, (t223 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, (t225 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern TypeInfo* t225_TI_var;
extern "C" int32_t m13206_gshared (t225 * __this, t2511 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t225_TI_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2511 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t225_TI_var);
		(( void (*) (t7 * , t2511 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL, (t2511 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		t2511 * L_1 = p0;
		t222* L_2 = (t222*)(__this->f1);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		bool L_5 = (bool)VirtFuncInvoker1< bool, t223  >::Invoke(10 /* System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T) */, (t2511 *)L_1, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->f2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->f2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		t2511 * L_13 = p0;
		t222* L_14 = (t222*)(__this->f1);
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		bool L_17 = (bool)VirtFuncInvoker1< bool, t223  >::Invoke(10 /* System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T) */, (t2511 *)L_13, (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		t222* L_18 = (t222*)(__this->f1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		t222* L_21 = (t222*)(__this->f1);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		*((t223 *)(t223 *)SZArrayLdElema(L_18, L_20)) = (t223 )(*(t223 *)(t223 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->f2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		t222* L_29 = (t222*)(__this->f1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		m5606(NULL, (t52 *)(t52 *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), NULL);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->f2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
extern TypeInfo* t711_TI_var;
extern "C" void m13207_gshared (t225 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (int32_t)(__this->f2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = p0;
		(( void (*) (t225 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((t225 *)__this, (int32_t)L_4, (int32_t)(-1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		t222* L_5 = (t222*)(__this->f1);
		int32_t L_6 = (int32_t)(__this->f2);
		m5606(NULL, (t52 *)(t52 *)L_5, (int32_t)L_6, (int32_t)1, NULL);
		int32_t L_7 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
extern "C" void m13208_gshared (t225 * __this, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		int32_t L_1 = (int32_t)(__this->f2);
		m5630(NULL, (t52 *)(t52 *)L_0, (int32_t)0, (int32_t)L_1, NULL);
		int32_t L_2 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern TypeInfo* t2518_TI_var;
extern "C" void m13209_gshared (t225 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2518_TI_var = il2cpp_codegen_type_info_from_index(5471);
		s_Il2CppMethodIntialized = true;
	}
	{
		t222* L_0 = (t222*)(__this->f1);
		int32_t L_1 = (int32_t)(__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t2518_TI_var);
		t2518 * L_2 = (( t2518 * (*) (t7 * , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (t7 * , t222*, int32_t, int32_t, t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(NULL, (t222*)L_0, (int32_t)0, (int32_t)L_1, (t7*)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		int32_t L_3 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
extern "C" void m13210_gshared (t225 * __this, t2513 * p0, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		int32_t L_1 = (int32_t)(__this->f2);
		t2513 * L_2 = p0;
		(( void (*) (t7 * , t222*, int32_t, t2513 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL, (t222*)L_0, (int32_t)L_1, (t2513 *)L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
extern "C" t222* m1793_gshared (t225 * __this, const MethodInfo* method)
{
	t222* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->f2);
		V_0 = (t222*)((t222*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		t222* L_1 = (t222*)(__this->f1);
		t222* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->f2);
		m4651(NULL, (t52 *)(t52 *)L_1, (t52 *)(t52 *)L_2, (int32_t)L_3, NULL);
		t222* L_4 = V_0;
		return L_4;
	}
}
extern "C" void m13211_gshared (t225 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f2);
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((t225 *)__this, (int32_t)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
extern "C" int32_t m1641_gshared (t225 * __this, const MethodInfo* method)
{
	{
		t222* L_0 = (t222*)(__this->f1);
		return (((int32_t)(((t52 *)L_0)->max_length)));
	}
}
extern TypeInfo* t711_TI_var;
extern "C" void m1642_gshared (t225 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = (int32_t)(__this->f2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4636(L_2, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		t222** L_3 = (t222**)&(__this->f1);
		int32_t L_4 = p0;
		(( void (*) (t7 * , t222**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL, (t222**)L_3, (int32_t)L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return;
	}
}
extern "C" int32_t m13212_gshared (t225 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->f2);
		return L_0;
	}
}
extern TypeInfo* t711_TI_var;
extern "C" t223  m13213_gshared (t225 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = (int32_t)(__this->f2);
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
		t222* L_3 = (t222*)(__this->f1);
		int32_t L_4 = p0;
		int32_t L_5 = L_4;
		return (*(t223 *)(t223 *)SZArrayLdElema(L_3, L_5));
	}
}
extern TypeInfo* t711_TI_var;
extern "C" void m13214_gshared (t225 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		(( void (*) (t225 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((t225 *)__this, (int32_t)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = p0;
		int32_t L_2 = (int32_t)(__this->f2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		t711 * L_3 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_3, (t47*)(t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		t222* L_4 = (t222*)(__this->f1);
		int32_t L_5 = p0;
		t223  L_6 = p1;
		*((t223 *)(t223 *)SZArrayLdElema(L_4, L_5)) = (t223 )L_6;
		return;
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



#ifndef _MSC_VER
#else
#endif



extern "C" void m13150_gshared (t2512 * __this, t225 * p0, const MethodInfo* method)
{
	{
		t225 * L_0 = p0;
		__this->f0 = L_0;
		t225 * L_1 = p0;
		int32_t L_2 = (int32_t)(L_1->f3);
		__this->f2 = L_2;
		return;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t7 * m13151_gshared (t2512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (t2512 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2512 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4508(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		t223  L_2 = (t223 )(__this->f3);
		t223  L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
extern "C" void m13152_gshared (t2512 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (t225 *)NULL;
		return;
	}
}
extern TypeInfo* t1280_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" void m13153_gshared (t2512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1280_TI_var = il2cpp_codegen_type_info_from_index(2363);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		t225 * L_0 = (t225 *)(__this->f0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2512  L_1 = (*(t2512 *)__this);
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t347 * L_3 = m1520((t7 *)L_2, NULL);
		t47* L_4 = (t47*)VirtFuncInvoker0< t47* >::Invoke(18 /* System.String System.Type::get_FullName() */, (t347 *)L_3);
		t1280 * L_5 = (t1280 *)il2cpp_codegen_object_new (t1280_TI_var);
		m5620(L_5, (t47*)L_4, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->f2);
		t225 * L_7 = (t225 *)(__this->f0);
		int32_t L_8 = (int32_t)(L_7->f3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		t1098 * L_9 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_9, (t47*)(t47*) &_stringLiteral1340, NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
extern "C" bool m13154_gshared (t2512 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (t2512 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2512 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		int32_t L_1 = (int32_t)(__this->f1);
		t225 * L_2 = (t225 *)(__this->f0);
		int32_t L_3 = (int32_t)(L_2->f2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		t225 * L_4 = (t225 *)(__this->f0);
		t222* L_5 = (t222*)(L_4->f1);
		int32_t L_6 = (int32_t)(__this->f1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->f1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		__this->f3 = (*(t223 *)(t223 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern "C" t223  m13155_gshared (t2512 * __this, const MethodInfo* method)
{
	{
		t223  L_0 = (t223 )(__this->f3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2515MD.h"


extern TypeInfo* t708_TI_var;
extern "C" void m13116_gshared (t2510 * __this, t7* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
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
		m3299(L_1, (t47*)(t47*) &_stringLiteral1341, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t7* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13117_gshared (t2510 * __this, t223  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13118_gshared (t2510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13119_gshared (t2510 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" bool m13120_gshared (t2510 * __this, t223  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13121_gshared (t2510 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t223  m13122_gshared (t2510 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t223  L_1 = (t223 )VirtFuncInvoker1< t223 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (t2510 *)__this, (int32_t)L_0);
		return L_1;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13123_gshared (t2510 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m13124_gshared (t2510 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" void m13125_gshared (t2510 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = (t7*)(__this->f0);
		t52 * L_1 = p0;
		int32_t L_2 = p1;
		InterfaceActionInvoker2< t52 *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, t816_TI_var, (t7 *)((t7 *)Castclass(L_0, t816_TI_var)), (t52 *)L_1, (int32_t)L_2);
		return;
	}
}
extern TypeInfo* t475_TI_var;
extern "C" t7 * m13126_gshared (t2510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t475_TI_var = il2cpp_codegen_type_info_from_index(864);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = (t7*)(__this->f0);
		t7 * L_1 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, t475_TI_var, (t7 *)L_0);
		return L_1;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" int32_t m13127_gshared (t2510 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13128_gshared (t2510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m13129_gshared (t2510 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		bool L_1 = (( bool (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		t7* L_2 = (t7*)(__this->f0);
		t7 * L_3 = p0;
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t223  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_2, (t223 )((*(t223 *)((t223 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
extern "C" int32_t m13130_gshared (t2510 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		bool L_1 = (( bool (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		t7* L_2 = (t7*)(__this->f0);
		t7 * L_3 = p0;
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, t223  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_2, (t223 )((*(t223 *)((t223 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13131_gshared (t2510 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13132_gshared (t2510 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13133_gshared (t2510 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m13134_gshared (t2510 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m13135_gshared (t2510 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m13136_gshared (t2510 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m13137_gshared (t2510 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" t7 * m13138_gshared (t2510 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = p0;
		t223  L_2 = (t223 )InterfaceFuncInvoker1< t223 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_0, (int32_t)L_1);
		t223  L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13139_gshared (t2510 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" bool m13140_gshared (t2510 * __this, t223  p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t223  L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t223  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_0, (t223 )L_1);
		return L_2;
	}
}
extern "C" void m13141_gshared (t2510 * __this, t222* p0, int32_t p1, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t222* L_1 = p0;
		int32_t L_2 = p1;
		InterfaceActionInvoker2< t222*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_0, (t222*)L_1, (int32_t)L_2);
		return;
	}
}
extern "C" t7* m13142_gshared (t2510 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t7* L_1 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (t7*)L_0);
		return L_1;
	}
}
extern "C" int32_t m13143_gshared (t2510 * __this, t223  p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t223  L_1 = p0;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t223  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_0, (t223 )L_1);
		return L_2;
	}
}
extern "C" int32_t m13144_gshared (t2510 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_0);
		return L_1;
	}
}
extern "C" t223  m13145_gshared (t2510 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = p0;
		t223  L_2 = (t223 )InterfaceFuncInvoker1< t223 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_0, (int32_t)L_1);
		return L_2;
	}
}
#include "t2515.h"
#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t816_TI_var;
extern "C" void m13218_gshared (t2515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	t225 * V_0 = {0};
	t7 * V_1 = {0};
	{
		m162((t7 *)__this, NULL);
		t225 * L_0 = (t225 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (t225 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (t225 *)L_0;
		t225 * L_1 = V_0;
		V_1 = (t7 *)L_1;
		t7 * L_2 = V_1;
		t7 * L_3 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, t816_TI_var, (t7 *)L_2);
		__this->f1 = L_3;
		t225 * L_4 = V_0;
		__this->f0 = L_4;
		return;
	}
}
extern "C" bool m13219_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0);
		return L_1;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" void m13220_gshared (t2515 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = (t7*)(__this->f0);
		t52 * L_1 = p0;
		int32_t L_2 = p1;
		InterfaceActionInvoker2< t52 *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, t816_TI_var, (t7 *)((t7 *)Castclass(L_0, t816_TI_var)), (t52 *)L_1, (int32_t)L_2);
		return;
	}
}
extern "C" t7 * m13221_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t7* L_1 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_0);
		return L_1;
	}
}
extern "C" int32_t m13222_gshared (t2515 * __this, t7 * p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		t7 * L_3 = p0;
		t223  L_4 = (( t223  (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL, (t7 *)L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		VirtActionInvoker2< int32_t, t223  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (t2515 *)__this, (int32_t)L_2, (t223 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
extern "C" bool m13223_gshared (t2515 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		bool L_1 = (( bool (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		t7* L_2 = (t7*)(__this->f0);
		t7 * L_3 = p0;
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, t223  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_2, (t223 )((*(t223 *)((t223 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
extern "C" int32_t m13224_gshared (t2515 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		bool L_1 = (( bool (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		t7* L_2 = (t7*)(__this->f0);
		t7 * L_3 = p0;
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, t223  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (t7*)L_2, (t223 )((*(t223 *)((t223 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
extern "C" void m13225_gshared (t2515 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t7 * L_1 = p1;
		t223  L_2 = (( t223  (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL, (t7 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		VirtActionInvoker2< int32_t, t223  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (t2515 *)__this, (int32_t)L_0, (t223 )L_2);
		return;
	}
}
extern "C" void m13226_gshared (t2515 * __this, t7 * p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t7* L_0 = (t7*)(__this->f0);
		(( void (*) (t7 * , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL, (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		t7 * L_1 = p0;
		t223  L_2 = (( t223  (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL, (t7 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, t223  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (t2515 *)__this, (t223 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (t2515 *)__this, (int32_t)L_4);
		return;
	}
}
extern "C" bool m13227_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		bool L_1 = (( bool (*) (t7 * , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL, (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
extern "C" t7 * m13228_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f1);
		return L_0;
	}
}
extern "C" bool m13229_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		bool L_1 = (( bool (*) (t7 * , t7*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL, (t7*)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
extern "C" bool m13230_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0);
		return L_1;
	}
}
extern "C" t7 * m13231_gshared (t2515 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = p0;
		t223  L_2 = (t223 )InterfaceFuncInvoker1< t223 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (t7*)L_0, (int32_t)L_1);
		t223  L_3 = L_2;
		t7 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
extern "C" void m13232_gshared (t2515 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t7 * L_1 = p1;
		t223  L_2 = (( t223  (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL, (t7 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		VirtActionInvoker2< int32_t, t223  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (t2515 *)__this, (int32_t)L_0, (t223 )L_2);
		return;
	}
}
extern "C" void m13233_gshared (t2515 * __this, t223  p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		t223  L_3 = p0;
		VirtActionInvoker2< int32_t, t223  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (t2515 *)__this, (int32_t)L_2, (t223 )L_3);
		return;
	}
}
extern "C" void m13234_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ClearItems() */, (t2515 *)__this);
		return;
	}
}
extern "C" void m13235_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0);
		return;
	}
}
extern "C" bool m13236_gshared (t2515 * __this, t223  p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t223  L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, t223  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0, (t223 )L_1);
		return L_2;
	}
}
extern "C" void m13237_gshared (t2515 * __this, t222* p0, int32_t p1, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t222* L_1 = p0;
		int32_t L_2 = p1;
		InterfaceActionInvoker2< t222*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0, (t222*)L_1, (int32_t)L_2);
		return;
	}
}
extern "C" t7* m13238_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t7* L_1 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t7*)L_0);
		return L_1;
	}
}
extern "C" int32_t m13239_gshared (t2515 * __this, t223  p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		t223  L_1 = p0;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, t223  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (t7*)L_0, (t223 )L_1);
		return L_2;
	}
}
extern "C" void m13240_gshared (t2515 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t223  L_1 = p1;
		VirtActionInvoker2< int32_t, t223  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (t2515 *)__this, (int32_t)L_0, (t223 )L_1);
		return;
	}
}
extern "C" void m13241_gshared (t2515 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = p0;
		t223  L_2 = p1;
		InterfaceActionInvoker2< int32_t, t223  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (t7*)L_0, (int32_t)L_1, (t223 )L_2);
		return;
	}
}
extern "C" bool m13242_gshared (t2515 * __this, t223  p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t223  L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t223  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (t2515 *)__this, (t223 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (t2515 *)__this, (int32_t)L_3);
		return 1;
	}
}
extern "C" void m13243_gshared (t2515 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (t2515 *)__this, (int32_t)L_0);
		return;
	}
}
extern "C" void m13244_gshared (t2515 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = p0;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (t7*)L_0, (int32_t)L_1);
		return;
	}
}
extern "C" int32_t m13245_gshared (t2515 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0);
		return L_1;
	}
}
extern "C" t223  m13246_gshared (t2515 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = p0;
		t223  L_2 = (t223 )InterfaceFuncInvoker1< t223 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (t7*)L_0, (int32_t)L_1);
		return L_2;
	}
}
extern "C" void m13247_gshared (t2515 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t223  L_1 = p1;
		VirtActionInvoker2< int32_t, t223  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (t2515 *)__this, (int32_t)L_0, (t223 )L_1);
		return;
	}
}
extern "C" void m13248_gshared (t2515 * __this, int32_t p0, t223  p1, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)(__this->f0);
		int32_t L_1 = p0;
		t223  L_2 = p1;
		InterfaceActionInvoker2< int32_t, t223  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (t7*)L_0, (int32_t)L_1, (t223 )L_2);
		return;
	}
}
extern TypeInfo* t347_TI_var;
extern "C" bool m13249_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))
		{
			goto IL_0022;
		}
	}
	{
		t7 * L_1 = p0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_2 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), NULL);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (t347 *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" t223  m13250_gshared (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		bool L_1 = (( bool (*) (t7 * , t7 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL, (t7 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		t7 * L_2 = p0;
		return ((*(t223 *)((t223 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		t396 * L_3 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_3, (t47*)(t47*) &_stringLiteral1338, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13251_gshared (t7 * __this , t7* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = p0;
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		t61 * L_2 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_2, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
extern TypeInfo* t816_TI_var;
extern "C" bool m13252_gshared (t7 * __this , t7* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		t7* L_0 = p0;
		V_0 = (t7 *)((t7 *)IsInst(L_0, t816_TI_var));
		t7 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		t7 * L_2 = V_0;
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, t816_TI_var, (t7 *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t817_TI_var;
extern "C" bool m13253_gshared (t7 * __this , t7* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t817_TI_var = il2cpp_codegen_type_info_from_index(1527);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		t7* L_0 = p0;
		V_0 = (t7 *)((t7 *)IsInst(L_0, t817_TI_var));
		t7 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		t7 * L_2 = V_0;
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, t817_TI_var, (t7 *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#include "t2516.h"
#ifndef _MSC_VER
#else
#endif
#include "t2516MD.h"

#include "t2517.h"
#include "t1107MD.h"
#include "t2517MD.h"


extern "C" void m13254_gshared (t2516 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1906_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m13255_gshared (t7 * __this , const MethodInfo* method)
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
		((t2516_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2516 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2517 * L_8 = (t2517 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2517 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2516_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m13256_gshared (t2516 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t223  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T) */, (t2516 *)__this, (t223 )((*(t223 *)((t223 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m13257_gshared (t2516 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t223 , t223  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T) */, (t2516 *)__this, (t223 )((*(t223 *)((t223 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t223 )((*(t223 *)((t223 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2516 * m13258_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2516 * L_0 = ((t2516_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
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



extern TypeInfo* t2516_TI_var;
extern "C" void m13259_gshared (t2517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2516_TI_var = il2cpp_codegen_type_info_from_index(5467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2516_TI_var);
		(( void (*) (t2516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2516 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m13260_gshared (t2517 * __this, t223  p0, const MethodInfo* method)
{
	{
		t223  L_0 = p0;
		t223  L_1 = L_0;
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
extern "C" bool m13261_gshared (t2517 * __this, t223  p0, t223  p1, const MethodInfo* method)
{
	{
		t223  L_0 = p0;
		t223  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t223  L_3 = p1;
		t223  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t223  L_6 = p1;
		t223  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t7 *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m13146_gshared (t2511 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" bool m13147_gshared (t2511 * __this, t223  p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13147((t2511 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 *, t7 * __this, t223  p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t223  p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t223_TI_var;
extern "C" t7 * m13148_gshared (t2511 * __this, t223  p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t223_TI_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t223_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" bool m13149_gshared (t2511 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

#include "t2519.h"
#include "t2519MD.h"


extern "C" void m13262_gshared (t2518 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1895_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m13263_gshared (t7 * __this , const MethodInfo* method)
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
		((t2518_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2518 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2519 * L_8 = (t2519 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2518_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" int32_t m13264_gshared (t2518 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, t223 , t223  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::Compare(T,T) */, (t2518 *)__this, (t223 )((*(t223 *)((t223 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t223 )((*(t223 *)((t223 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_8, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern "C" t2518 * m13265_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2518 * L_0 = ((t2518_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
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



extern TypeInfo* t2518_TI_var;
extern "C" void m13266_gshared (t2519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2518_TI_var = il2cpp_codegen_type_info_from_index(5471);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2518_TI_var);
		(( void (*) (t2518 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2518 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t91_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m13267_gshared (t2519 * __this, t223  p0, t223  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t91_TI_var = il2cpp_codegen_type_info_from_index(98);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t223  L_0 = p0;
		t223  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		t223  L_3 = p1;
		t223  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t223  L_6 = p1;
		t223  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t223  L_9 = p0;
		t223  L_10 = L_9;
		t7 * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((t7*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		t223  L_12 = p0;
		t223  L_13 = L_12;
		t7 * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		t223  L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t223  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UIVertex>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)((t7*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (t223 )L_15);
		return L_16;
	}

IL_003e:
	{
		t223  L_17 = p0;
		t223  L_18 = L_17;
		t7 * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((t7 *)IsInst(L_19, t91_TI_var)))
		{
			goto IL_0062;
		}
	}
	{
		t223  L_20 = p0;
		t223  L_21 = L_20;
		t7 * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		t223  L_23 = p1;
		t223  L_24 = L_23;
		t7 * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t91_TI_var, (t7 *)((t7 *)Castclass(L_22, t91_TI_var)), (t7 *)L_25);
		return L_26;
	}

IL_0062:
	{
		t396 * L_27 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_27, (t47*)(t47*) &_stringLiteral1324, NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t2513MD.h"



extern "C" void m13156_gshared (t2513 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" int32_t m13157_gshared (t2513 * __this, t223  p0, t223  p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13157((t2513 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t7 *, t7 * __this, t223  p0, t223  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (t7 * __this, t223  p0, t223  p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t223_TI_var;
extern "C" t7 * m13158_gshared (t2513 * __this, t223  p0, t223  p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t223_TI_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(t223_TI_var, &p0);
	__d_args[1] = Box(t223_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" int32_t m13159_gshared (t2513 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t186.h"
#ifndef _MSC_VER
#else
#endif
#include "t186MD.h"

#include "t156.h"
#include "t2520.h"
#include "t5.h"
#include "t66.h"
#include "t13.h"
#include "t60.h"
#include "t63.h"
#include "t2520MD.h"
#include "t66MD.h"
#include "t71MD.h"
#include "t5MD.h"
#include "t55MD.h"
#include "t13MD.h"


extern "C" void m1607_gshared (t186 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern "C" t7 * m13268_gshared (t7 * __this , t156  p0, const MethodInfo* method)
{
	t2520 * V_0 = {0};
	{
		t2520 * L_0 = (t2520 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (t2520 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (t2520 *)L_0;
		t2520 * L_1 = V_0;
		t156  L_2 = p0;
		L_1->f0 = L_2;
		t2520 * L_3 = V_0;
		t156  L_4 = p0;
		L_3->f5 = L_4;
		t2520 * L_5 = V_0;
		return L_5;
	}
}
extern "C" void m1608_gshared (t186 * __this, t5 * p0, const MethodInfo* method)
{
	{
		t5 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t426_TI_var;
extern "C" void m1637_gshared (t186 * __this, t156  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t426_TI_var = il2cpp_codegen_type_info_from_index(530);
		s_Il2CppMethodIntialized = true;
	}
	{
		t5 * L_0 = (t5 *)(__this->f0);
		bool L_1 = m206(NULL, (t66 *)L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		m2634(NULL, (t7 *)(t47*) &_stringLiteral93, NULL);
		return;
	}

IL_001c:
	{
		t7 * L_2 = (t7 *)(__this->f1);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t5 * L_3 = (t5 *)(__this->f0);
		t7 * L_4 = (t7 *)(__this->f1);
		m2668((t5 *)L_3, (t7 *)L_4, NULL);
		__this->f1 = (t7 *)NULL;
	}

IL_003f:
	{
		t5 * L_5 = (t5 *)(__this->f0);
		t13 * L_6 = m166((t55 *)L_5, NULL);
		bool L_7 = m1492((t13 *)L_6, NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.UI.CoroutineTween.ITweenValue::TweenValue(System.Single) */, t426_TI_var, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&p0)), (float)(1.0f));
		return;
	}

IL_0067:
	{
		t156  L_8 = p0;
		t7 * L_9 = (( t7 * (*) (t7 * , t156 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL, (t156 )L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->f1 = L_9;
		t5 * L_10 = (t5 *)(__this->f0);
		t7 * L_11 = (t7 *)(__this->f1);
		m167((t5 *)L_10, (t7 *)L_11, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t57.h"
#include "t80MD.h"
#include "t341MD.h"


extern "C" void m13269_gshared (t2520 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern "C" t7 * m13270_gshared (t2520 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f4);
		return L_0;
	}
}
extern "C" t7 * m13271_gshared (t2520 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f4);
		return L_0;
	}
}
extern TypeInfo* t426_TI_var;
extern TypeInfo* t341_TI_var;
extern "C" bool m13272_gshared (t2520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t426_TI_var = il2cpp_codegen_type_info_from_index(530);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	t2520 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	t2520 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	t2520 * G_B8_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->f3);
		V_0 = (uint32_t)L_0;
		__this->f3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		t156 * L_2 = (t156 *)&(__this->f0);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.UI.CoroutineTween.ITweenValue::ValidTarget() */, t426_TI_var, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_2));
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->f1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_4 = (float)(__this->f1);
		t156 * L_5 = (t156 *)&(__this->f0);
		bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.UI.CoroutineTween.ITweenValue::get_ignoreTimeScale() */, t426_TI_var, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_5));
		G_B6_0 = L_4;
		G_B6_1 = ((t2520 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((t2520 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_7 = m1583(NULL, NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((t2520 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_8 = m2712(NULL, NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((t2520 *)(G_B7_1));
	}

IL_0078:
	{
		G_B8_2->f1 = ((float)((float)G_B8_1+(float)G_B8_0));
		float L_9 = (float)(__this->f1);
		t156 * L_10 = (t156 *)&(__this->f0);
		float L_11 = (float)InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.CoroutineTween.ITweenValue::get_duration() */, t426_TI_var, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_10));
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_12 = m1674(NULL, (float)((float)((float)L_9/(float)L_11)), NULL);
		__this->f2 = L_12;
		t156 * L_13 = (t156 *)&(__this->f0);
		float L_14 = (float)(__this->f2);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.UI.CoroutineTween.ITweenValue::TweenValue(System.Single) */, t426_TI_var, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_13), (float)L_14);
		__this->f4 = NULL;
		__this->f3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_15 = (float)(__this->f1);
		t156 * L_16 = (t156 *)&(__this->f0);
		float L_17 = (float)InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.CoroutineTween.ITweenValue::get_duration() */, t426_TI_var, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_16));
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_004c;
		}
	}
	{
		t156 * L_18 = (t156 *)&(__this->f0);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.UI.CoroutineTween.ITweenValue::TweenValue(System.Single) */, t426_TI_var, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_18), (float)(1.0f));
		__this->f3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
extern "C" void m13273_gshared (t2520 * __this, const MethodInfo* method)
{
	{
		__this->f3 = (-1);
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m13274_gshared (t2520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		t61 * L_0 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m165(L_0, NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t74.h"


#include "t2548.h"
#ifndef _MSC_VER
#else
#endif
#include "t2548MD.h"

struct t52;
extern "C" t74  m18258_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18258(__this, p0, method) (( t74  (*) (t52 *, int32_t, const MethodInfo*))m18258_gshared)(__this, p0, method)


extern "C" void m13723_gshared (t2548 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m13724_gshared (t2548 * __this, const MethodInfo* method)
{
	{
		t74  L_0 = (( t74  (*) (t2548 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2548 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t74  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m13725_gshared (t2548 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m13726_gshared (t2548 * __this, const MethodInfo* method)
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
extern "C" t74  m13727_gshared (t2548 * __this, const MethodInfo* method)
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
		t74  L_8 = (( t74  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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

#include "t379.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2550.h"
#ifndef _MSC_VER
#else
#endif
#include "t2550MD.h"

struct t52;
extern "C" t379  m18269_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18269(__this, p0, method) (( t379  (*) (t52 *, int32_t, const MethodInfo*))m18269_gshared)(__this, p0, method)


extern "C" void m13733_gshared (t2550 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m13734_gshared (t2550 * __this, const MethodInfo* method)
{
	{
		t379  L_0 = (( t379  (*) (t2550 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2550 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t379  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m13735_gshared (t2550 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m13736_gshared (t2550 * __this, const MethodInfo* method)
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
extern "C" t379  m13737_gshared (t2550 * __this, const MethodInfo* method)
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
		t379  L_8 = (( t379  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t380.h"


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2551.h"
#ifndef _MSC_VER
#else
#endif
#include "t2551MD.h"

struct t52;
extern "C" t380  m18280_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18280(__this, p0, method) (( t380  (*) (t52 *, int32_t, const MethodInfo*))m18280_gshared)(__this, p0, method)


extern "C" void m13738_gshared (t2551 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m13739_gshared (t2551 * __this, const MethodInfo* method)
{
	{
		t380  L_0 = (( t380  (*) (t2551 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2551 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t380  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m13740_gshared (t2551 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m13741_gshared (t2551 * __this, const MethodInfo* method)
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
extern "C" t380  m13742_gshared (t2551 * __this, const MethodInfo* method)
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
		t380  L_8 = (( t380  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#include "t236.h"
#ifndef _MSC_VER
#else
#endif
#include "t236MD.h"

#include "t391.h"
#include "t2553.h"
#include "t2553MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m1828_gshared (t236 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 1));
		m3197((t655 *)__this, NULL);
		return;
	}
}
extern "C" void m1842_gshared (t236 * __this, t391 * p0, const MethodInfo* method)
{
	{
		t391 * L_0 = p0;
		t647 * L_1 = (( t647 * (*) (t7 * , t391 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL, (t391 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		m3202((t655 *)__this, (t647 *)L_1, NULL);
		return;
	}
}
extern "C" void m1841_gshared (t236 * __this, t391 * p0, const MethodInfo* method)
{
	{
		t391 * L_0 = p0;
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t391 * L_2 = p0;
		t614 * L_3 = m3355((t361 *)L_2, NULL);
		m3203((t655 *)__this, (t7 *)L_1, (t614 *)L_3, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m2118_gshared (t236 * __this, t47* p0, t7 * p1, const MethodInfo* method)
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
		t607* L_2 = (t607*)((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t347 **)(t347 **)SZArrayLdElema(L_2, 0)) = (t347 *)L_3;
		t614 * L_4 = m3205(NULL, (t7 *)L_0, (t47*)L_1, (t607*)L_2, NULL);
		return L_4;
	}
}
extern "C" t647 * m2119_gshared (t236 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t2553 * L_2 = (t2553 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2553 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
extern "C" t647 * m13750_gshared (t7 * __this , t391 * p0, const MethodInfo* method)
{
	{
		t391 * L_0 = p0;
		t2553 * L_1 = (t2553 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2553 *, t391 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (t391 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" void m1834_gshared (t236 * __this, float p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f4);
		float L_1 = p0;
		float L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = (t69*)(__this->f4);
		m3204((t655 *)__this, (t69*)L_4, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t391MD.h"



extern "C" void m1840_gshared (t391 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m13751_gshared (t391 * __this, float p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13751((t391 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, float p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, float p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t60_TI_var;
extern "C" t7 * m13752_gshared (t391 * __this, float p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t60_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m13753_gshared (t391 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

struct t647;
struct t7;
extern "C" void m18290_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18290(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18290_gshared)(__this , p0, method)


extern TypeInfo* t347_TI_var;
extern "C" void m13754_gshared (t2553 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
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
		t391 * L_2 = (t391 *)(__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, (t347 *)L_3, (t7 *)L_4, (t614 *)L_5, NULL);
		t361 * L_7 = m1639(NULL, (t361 *)L_2, (t361 *)((t391 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), NULL);
		__this->f0 = ((t391 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern "C" void m13755_gshared (t2553 * __this, t391 * p0, const MethodInfo* method)
{
	{
		m3175((t647 *)__this, NULL);
		t391 * L_0 = (t391 *)(__this->f0);
		t391 * L_1 = p0;
		t361 * L_2 = m1639(NULL, (t361 *)L_0, (t361 *)L_1, NULL);
		__this->f0 = ((t391 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m13756_gshared (t2553 * __this, t69* p0, const MethodInfo* method)
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
		t391 * L_4 = (t391 *)(__this->f0);
		bool L_5 = m3177(NULL, (t361 *)L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		t391 * L_6 = (t391 *)(__this->f0);
		t69* L_7 = p0;
		int32_t L_8 = 0;
		VirtActionInvoker1< float >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0) */, (t391 *)L_6, (float)((*(float*)((float*)UnBox ((*(t7 **)(t7 **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
extern "C" bool m13757_gshared (t2553 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t391 * L_0 = (t391 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t391 * L_3 = (t391 *)(__this->f0);
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

#include "t67.h"


#include "t2554.h"
#ifndef _MSC_VER
#else
#endif
#include "t2554MD.h"

struct t52;
extern "C" t67  m18292_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18292(__this, p0, method) (( t67  (*) (t52 *, int32_t, const MethodInfo*))m18292_gshared)(__this, p0, method)


extern "C" void m13758_gshared (t2554 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m13759_gshared (t2554 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (( t67  (*) (t2554 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2554 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t67  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m13760_gshared (t2554 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m13761_gshared (t2554 * __this, const MethodInfo* method)
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
extern "C" t67  m13762_gshared (t2554 * __this, const MethodInfo* method)
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
		t67  L_8 = (( t67  (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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



#include "t243.h"
#ifndef _MSC_VER
#else
#endif
#include "t243MD.h"

#include "t2555.h"
#include "t2556.h"
#include "t2556MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m1839_gshared (t243 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 1));
		m3197((t655 *)__this, NULL);
		return;
	}
}
extern "C" void m13763_gshared (t243 * __this, t2555 * p0, const MethodInfo* method)
{
	{
		t2555 * L_0 = p0;
		t647 * L_1 = (( t647 * (*) (t7 * , t2555 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL, (t2555 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		m3202((t655 *)__this, (t647 *)L_1, NULL);
		return;
	}
}
extern "C" void m13764_gshared (t243 * __this, t2555 * p0, const MethodInfo* method)
{
	{
		t2555 * L_0 = p0;
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t2555 * L_2 = p0;
		t614 * L_3 = m3355((t361 *)L_2, NULL);
		m3203((t655 *)__this, (t7 *)L_1, (t614 *)L_3, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m2120_gshared (t243 * __this, t47* p0, t7 * p1, const MethodInfo* method)
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
		t607* L_2 = (t607*)((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t347 **)(t347 **)SZArrayLdElema(L_2, 0)) = (t347 *)L_3;
		t614 * L_4 = m3205(NULL, (t7 *)L_0, (t47*)L_1, (t607*)L_2, NULL);
		return L_4;
	}
}
extern "C" t647 * m2121_gshared (t243 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t2556 * L_2 = (t2556 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2556 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
extern "C" t647 * m13765_gshared (t7 * __this , t2555 * p0, const MethodInfo* method)
{
	{
		t2555 * L_0 = p0;
		t2556 * L_1 = (t2556 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2556 *, t2555 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (t2555 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" void m1848_gshared (t243 * __this, t74  p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f4);
		t74  L_1 = p0;
		t74  L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = (t69*)(__this->f4);
		m3204((t655 *)__this, (t69*)L_4, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t2555MD.h"



extern "C" void m13766_gshared (t2555 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m13767_gshared (t2555 * __this, t74  p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m13767((t2555 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t74  p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t74  p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t74_TI_var;
extern "C" t7 * m13768_gshared (t2555 * __this, t74  p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t74_TI_var = il2cpp_codegen_type_info_from_index(208);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t74_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m13769_gshared (t2555 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

struct t647;
struct t7;
extern "C" void m18302_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18302(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18302_gshared)(__this , p0, method)


extern TypeInfo* t347_TI_var;
extern "C" void m13770_gshared (t2556 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
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
		t2555 * L_2 = (t2555 *)(__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, (t347 *)L_3, (t7 *)L_4, (t614 *)L_5, NULL);
		t361 * L_7 = m1639(NULL, (t361 *)L_2, (t361 *)((t2555 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), NULL);
		__this->f0 = ((t2555 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern "C" void m13771_gshared (t2556 * __this, t2555 * p0, const MethodInfo* method)
{
	{
		m3175((t647 *)__this, NULL);
		t2555 * L_0 = (t2555 *)(__this->f0);
		t2555 * L_1 = p0;
		t361 * L_2 = m1639(NULL, (t361 *)L_0, (t361 *)L_1, NULL);
		__this->f0 = ((t2555 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m13772_gshared (t2556 * __this, t69* p0, const MethodInfo* method)
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
		t2555 * L_4 = (t2555 *)(__this->f0);
		bool L_5 = m3177(NULL, (t361 *)L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		t2555 * L_6 = (t2555 *)(__this->f0);
		t69* L_7 = p0;
		int32_t L_8 = 0;
		VirtActionInvoker1< t74  >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0) */, (t2555 *)L_6, (t74 )((*(t74 *)((t74 *)UnBox ((*(t7 **)(t7 **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
extern "C" bool m13773_gshared (t2556 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2555 * L_0 = (t2555 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t2555 * L_3 = (t2555 *)(__this->f0);
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
#include "t2575.h"
#ifndef _MSC_VER
#else
#endif
#include "t2575MD.h"

#include "t2576.h"
#include "t2577.h"
#include "t356.h"
#include "t2577MD.h"


extern TypeInfo* t69_TI_var;
extern "C" void m14050_gshared (t2575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 1));
		m3197((t655 *)__this, NULL);
		return;
	}
}
extern "C" void m14052_gshared (t2575 * __this, t2576 * p0, const MethodInfo* method)
{
	{
		t2576 * L_0 = p0;
		t647 * L_1 = (( t647 * (*) (t7 * , t2576 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL, (t2576 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		m3202((t655 *)__this, (t647 *)L_1, NULL);
		return;
	}
}
extern "C" void m14054_gshared (t2575 * __this, t2576 * p0, const MethodInfo* method)
{
	{
		t2576 * L_0 = p0;
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t2576 * L_2 = p0;
		t614 * L_3 = m3355((t361 *)L_2, NULL);
		m3203((t655 *)__this, (t7 *)L_1, (t614 *)L_3, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m14055_gshared (t2575 * __this, t47* p0, t7 * p1, const MethodInfo* method)
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
		t607* L_2 = (t607*)((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t347 **)(t347 **)SZArrayLdElema(L_2, 0)) = (t347 *)L_3;
		t614 * L_4 = m3205(NULL, (t7 *)L_0, (t47*)L_1, (t607*)L_2, NULL);
		return L_4;
	}
}
extern "C" t647 * m14056_gshared (t2575 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t2577 * L_2 = (t2577 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2577 *, t7 *, t614 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (t7 *)L_0, (t614 *)L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
extern "C" t647 * m14058_gshared (t7 * __this , t2576 * p0, const MethodInfo* method)
{
	{
		t2576 * L_0 = p0;
		t2577 * L_1 = (t2577 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2577 *, t2576 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (t2576 *)L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" void m14059_gshared (t2575 * __this, uint8_t p0, const MethodInfo* method)
{
	{
		t69* L_0 = (t69*)(__this->f4);
		uint8_t L_1 = p0;
		uint8_t L_2 = L_1;
		t7 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = (t69*)(__this->f4);
		m3204((t655 *)__this, (t69*)L_4, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t2576MD.h"



extern "C" void m14060_gshared (t2576 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m14061_gshared (t2576 * __this, uint8_t p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m14061((t2576 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, uint8_t p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, uint8_t p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo* t356_TI_var;
extern "C" t7 * m14062_gshared (t2576 * __this, uint8_t p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t356_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m14063_gshared (t2576 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

struct t647;
struct t7;
extern "C" void m18303_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m18303(__this , p0, method) (( void (*) (t7 * , t7 *, const MethodInfo*))m18303_gshared)(__this , p0, method)


extern TypeInfo* t347_TI_var;
extern "C" void m14064_gshared (t2577 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
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
		t2576 * L_2 = (t2576 *)(__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, (t359 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, (t347 *)L_3, (t7 *)L_4, (t614 *)L_5, NULL);
		t361 * L_7 = m1639(NULL, (t361 *)L_2, (t361 *)((t2576 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), NULL);
		__this->f0 = ((t2576 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern "C" void m14065_gshared (t2577 * __this, t2576 * p0, const MethodInfo* method)
{
	{
		m3175((t647 *)__this, NULL);
		t2576 * L_0 = (t2576 *)(__this->f0);
		t2576 * L_1 = p0;
		t361 * L_2 = m1639(NULL, (t361 *)L_0, (t361 *)L_1, NULL);
		__this->f0 = ((t2576 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m14066_gshared (t2577 * __this, t69* p0, const MethodInfo* method)
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
		t2576 * L_4 = (t2576 *)(__this->f0);
		bool L_5 = m3177(NULL, (t361 *)L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		t2576 * L_6 = (t2576 *)(__this->f0);
		t69* L_7 = p0;
		int32_t L_8 = 0;
		VirtActionInvoker1< uint8_t >::Invoke(10 /* System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0) */, (t2576 *)L_6, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox ((*(t7 **)(t7 **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
extern "C" bool m14067_gshared (t2577 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2576 * L_0 = (t2576 *)(__this->f0);
		t7 * L_1 = m3356((t361 *)L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t2576 * L_3 = (t2576 *)(__this->f0);
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
#include "t2584.h"
#ifndef _MSC_VER
#else
#endif
#include "t2584MD.h"



extern "C" void m14162_gshared (t2584 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" uint8_t m14164_gshared (t2584 * __this, t7 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m14164((t2584 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m14166_gshared (t2584 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" uint8_t m14168_gshared (t2584 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t2585.h"
#ifndef _MSC_VER
#else
#endif
#include "t2585MD.h"

#include "t399.h"
#include "t1735MD.h"
#include "t399MD.h"


extern "C" void m14173_gshared (t2585 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern "C" t7 * m14174_gshared (t2585 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f5);
		return L_0;
	}
}
extern "C" t7 * m14175_gshared (t2585 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (t7 *)(__this->f5);
		t7 * L_1 = L_0;
		return ((t7 *)L_1);
	}
}
extern "C" t7 * m14176_gshared (t2585 * __this, const MethodInfo* method)
{
	{
		t7* L_0 = (t7*)VirtFuncInvoker0< t7* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (t2585 *)__this);
		return L_0;
	}
}
extern "C" t7* m14177_gshared (t2585 * __this, const MethodInfo* method)
{
	t2585 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->f4);
		int32_t L_1 = m9324(NULL, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		t2585 * L_2 = (t2585 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (t2585 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (t2585 *)L_2;
		t2585 * L_3 = V_0;
		t7* L_4 = (t7*)(__this->f6);
		L_3->f0 = L_4;
		t2585 * L_5 = V_0;
		t399 * L_6 = (t399 *)(__this->f7);
		L_5->f3 = L_6;
		t2585 * L_7 = V_0;
		return L_7;
	}
}
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" bool m14178_gshared (t2585 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->f4);
		V_0 = (uint32_t)L_0;
		__this->f4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		t7* L_2 = (t7*)(__this->f0);
		t7* L_3 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (t7*)L_2);
		__this->f1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			t7* L_5 = (t7*)(__this->f1);
			t7 * L_6 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (t7*)L_5);
			__this->f2 = L_6;
			t399 * L_7 = (t399 *)(__this->f3);
			t7 * L_8 = (t7 *)(__this->f2);
			bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(10 /* TResult System.Func`2<System.Object,System.Boolean>::Invoke(T) */, (t399 *)L_7, (t7 *)L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			t7 * L_10 = (t7 *)(__this->f2);
			__this->f5 = L_10;
			__this->f4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			t7* L_11 = (t7*)(__this->f1);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, (t7 *)L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			t7* L_14 = (t7*)(__this->f1);
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			t7* L_15 = (t7*)(__this->f1);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, (t7 *)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_00b7:
	{
		__this->f4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
extern TypeInfo* t88_TI_var;
extern "C" void m14179_gshared (t2585 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->f4);
		V_0 = (uint32_t)L_0;
		__this->f4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			t7* L_2 = (t7*)(__this->f1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			t7* L_3 = (t7*)(__this->f1);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, (t7 *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_003b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t286.h"


#include "t2592.h"
#ifndef _MSC_VER
#else
#endif
#include "t2592MD.h"



extern "C" void m14275_gshared (t2592 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" float m14277_gshared (t2592 * __this, t7 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m14277((t2592 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (t7 * __this, t7 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef float (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * m14279_gshared (t2592 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" float m14281_gshared (t2592 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



#include "t2622.h"
#ifndef _MSC_VER
#else
#endif
#include "t2622MD.h"

struct t52;
extern "C" uint8_t m18309_gshared (t52 * __this, int32_t p0, const MethodInfo* method);
#define m18309(__this, p0, method) (( uint8_t (*) (t52 *, int32_t, const MethodInfo*))m18309_gshared)(__this, p0, method)


extern "C" void m14811_gshared (t2622 * __this, t52 * p0, const MethodInfo* method)
{
	{
		t52 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" t7 * m14812_gshared (t2622 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (t2622 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2622 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern "C" void m14813_gshared (t2622 * __this, const MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern "C" bool m14814_gshared (t2622 * __this, const MethodInfo* method)
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
extern "C" uint8_t m14815_gshared (t2622 * __this, const MethodInfo* method)
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
		uint8_t L_8 = (( uint8_t (*) (t52 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((t52 *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
