#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1874.h"
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
#include "t1874MD.h"

#include "t53.h"
#include "t58.h"
#include "t726.h"
#include "t7.h"
#include "t54.h"
#include "t2908MD.h"
#include "t7MD.h"

#include "t52.h"

extern TypeInfo* t2908_TI_var;
extern "C" void m10217_gshared (t1874 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2908_TI_var = il2cpp_codegen_type_info_from_index(6362);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2908_TI_var);
		(( void (*) (t2908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2908 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18007_gshared (t1874 * __this, t726  p0, const MethodInfo* method)
{
	{
		t726  L_0 = p0;
		t726  L_1 = L_0;
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
extern "C" bool m18008_gshared (t1874 * __this, t726  p0, t726  p1, const MethodInfo* method)
{
	{
		t726  L_0 = p0;
		t726  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t726  L_3 = p1;
		t726  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t726  L_6 = p1;
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, t726  >::Invoke(0 /* System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t726 )L_6);
		return L_7;
	}
}
#include "t2908.h"
#ifndef _MSC_VER
#else
#endif

#include "t347.h"
#include "t359.h"
#include "mscorlib_ArrayTypes.h"
#include "t2909.h"
#include "t347MD.h"
#include "t1107MD.h"
#include "t2909MD.h"


extern "C" void m18009_gshared (t2908 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1906_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m18010_gshared (t7 * __this , const MethodInfo* method)
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
		((t2908_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2908 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2909 * L_8 = (t2909 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2909 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2908_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m18011_gshared (t2908 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t726  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T) */, (t2908 *)__this, (t726 )((*(t726 *)((t726 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m18012_gshared (t2908 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t726 , t726  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T) */, (t2908 *)__this, (t726 )((*(t726 *)((t726 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t726 )((*(t726 *)((t726 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2908 * m18013_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2908 * L_0 = ((t2908_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t2908_TI_var;
extern "C" void m18014_gshared (t2909 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2908_TI_var = il2cpp_codegen_type_info_from_index(6362);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2908_TI_var);
		(( void (*) (t2908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2908 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18015_gshared (t2909 * __this, t726  p0, const MethodInfo* method)
{
	{
		t726  L_0 = p0;
		t726  L_1 = L_0;
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
extern "C" bool m18016_gshared (t2909 * __this, t726  p0, t726  p1, const MethodInfo* method)
{
	{
		t726  L_0 = p0;
		t726  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t726  L_3 = p1;
		t726  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t726  L_6 = p1;
		t726  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t7 *)L_8);
		return L_9;
	}
}
#include "t1851.h"
#ifndef _MSC_VER
#else
#endif
#include "t1851MD.h"

#include "t991.h"
#include "t47.h"
#include "t1098.h"
#include "t132.h"
#include "t1098MD.h"
#include "t132MD.h"
#include "t47MD.h"


extern "C" void m10218_gshared (t1851 * __this, t991  p0, const MethodInfo* method)
{
	{
		__this->f1 = 1;
		t991  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" bool m10219_gshared (t1851 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->f1);
		return L_0;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" t991  m10220_gshared (t1851 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->f1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*)(t47*) &_stringLiteral1239, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t991  L_2 = (t991 )(__this->f0);
		return L_2;
	}
}
extern "C" bool m18017_gshared (t1851 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = (bool)(__this->f1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		t7 * L_2 = p0;
		if (((t7 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		t7 * L_3 = p0;
		void* L_4 = alloca(sizeof(t1851 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (t1851 *, t1851 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((t1851 *)__this, (t1851 )((*(t1851 *)((t1851 *)L_4))), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
extern "C" bool m18018_gshared (t1851 * __this, t1851  p0, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&p0)->f1);
		bool L_1 = (bool)(__this->f1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (bool)(__this->f1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		t991 * L_3 = (t991 *)&((&p0)->f0);
		t991  L_4 = (t991 )(__this->f0);
		t991  L_5 = L_4;
		t7 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (t132 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (t7 *)L_6);
		return L_7;
	}
}
extern "C" int32_t m18019_gshared (t1851 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t991 * L_1 = (t991 *)&(__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (t132 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m18020_gshared (t1851 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->f1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t991 * L_1 = (t991 *)&(__this->f0);
		t47* L_2 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.ValueType::ToString() */, (t132 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t86.h"


#ifndef _MSC_VER
#else
#endif

#include "t459.h"


#ifndef _MSC_VER
#else
#endif

#include "t712.h"


#ifndef _MSC_VER
#else
#endif

#include "t727.h"


#ifndef _MSC_VER
#else
#endif



#include "t1875.h"
#ifndef _MSC_VER
#else
#endif
#include "t1875MD.h"

#include "t2910MD.h"


extern TypeInfo* t2910_TI_var;
extern "C" void m10221_gshared (t1875 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2910_TI_var = il2cpp_codegen_type_info_from_index(6365);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2910_TI_var);
		(( void (*) (t2910 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2910 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18021_gshared (t1875 * __this, t727  p0, t727  p1, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		t727  L_0 = p0;
		t727  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		t727  L_3 = p1;
		t727  L_4 = L_3;
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
		t727  L_6 = p1;
		t727  L_7 = L_6;
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
		t727  L_9 = p1;
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t727  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Guid>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t727 )L_9);
		return L_10;
	}
}
#include "t2910.h"
#ifndef _MSC_VER
#else
#endif

#include "t2911.h"
#include "t396.h"
#include "t2911MD.h"
#include "t396MD.h"


extern "C" void m18022_gshared (t2910 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1895_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m18023_gshared (t7 * __this , const MethodInfo* method)
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
		((t2910_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2910 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2911 * L_8 = (t2911 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2911 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2910_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" int32_t m18024_gshared (t2910 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, t727 , t727  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T) */, (t2910 *)__this, (t727 )((*(t727 *)((t727 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t727 )((*(t727 *)((t727 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_8, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern "C" t2910 * m18025_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2910 * L_0 = ((t2910_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t2910_TI_var;
extern "C" void m18026_gshared (t2911 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2910_TI_var = il2cpp_codegen_type_info_from_index(6365);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2910_TI_var);
		(( void (*) (t2910 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2910 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t91_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m18027_gshared (t2911 * __this, t727  p0, t727  p1, const MethodInfo* method)
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
		t727  L_0 = p0;
		t727  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		t727  L_3 = p1;
		t727  L_4 = L_3;
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
		t727  L_6 = p1;
		t727  L_7 = L_6;
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
		t727  L_9 = p0;
		t727  L_10 = L_9;
		t7 * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((t7*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		t727  L_12 = p0;
		t727  L_13 = L_12;
		t7 * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		t727  L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t727  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Guid>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)((t7*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (t727 )L_15);
		return L_16;
	}

IL_003e:
	{
		t727  L_17 = p0;
		t727  L_18 = L_17;
		t7 * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((t7 *)IsInst(L_19, t91_TI_var)))
		{
			goto IL_0062;
		}
	}
	{
		t727  L_20 = p0;
		t727  L_21 = L_20;
		t7 * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		t727  L_23 = p1;
		t727  L_24 = L_23;
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
#include "t1876.h"
#ifndef _MSC_VER
#else
#endif
#include "t1876MD.h"

#include "t2912MD.h"


extern TypeInfo* t2912_TI_var;
extern "C" void m10222_gshared (t1876 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2912_TI_var = il2cpp_codegen_type_info_from_index(6368);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2912_TI_var);
		(( void (*) (t2912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2912 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18028_gshared (t1876 * __this, t727  p0, const MethodInfo* method)
{
	{
		t727  L_0 = p0;
		t727  L_1 = L_0;
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
extern "C" bool m18029_gshared (t1876 * __this, t727  p0, t727  p1, const MethodInfo* method)
{
	{
		t727  L_0 = p0;
		t727  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t727  L_3 = p1;
		t727  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t727  L_6 = p1;
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, t727  >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Guid>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t727 )L_6);
		return L_7;
	}
}
#include "t2912.h"
#ifndef _MSC_VER
#else
#endif

#include "t2913.h"
#include "t2913MD.h"


extern "C" void m18030_gshared (t2912 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1906_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m18031_gshared (t7 * __this , const MethodInfo* method)
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
		((t2912_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2912 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2913 * L_8 = (t2913 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2913 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2912_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m18032_gshared (t2912 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t727  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T) */, (t2912 *)__this, (t727 )((*(t727 *)((t727 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m18033_gshared (t2912 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t727 , t727  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, (t2912 *)__this, (t727 )((*(t727 *)((t727 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t727 )((*(t727 *)((t727 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2912 * m18034_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2912 * L_0 = ((t2912_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t2912_TI_var;
extern "C" void m18035_gshared (t2913 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2912_TI_var = il2cpp_codegen_type_info_from_index(6368);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2912_TI_var);
		(( void (*) (t2912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2912 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18036_gshared (t2913 * __this, t727  p0, const MethodInfo* method)
{
	{
		t727  L_0 = p0;
		t727  L_1 = L_0;
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
extern "C" bool m18037_gshared (t2913 * __this, t727  p0, t727  p1, const MethodInfo* method)
{
	{
		t727  L_0 = p0;
		t727  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t727  L_3 = p1;
		t727  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t727  L_6 = p1;
		t727  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t7 *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t1877.h"
#ifndef _MSC_VER
#else
#endif
#include "t1877MD.h"

#include "t2914MD.h"


extern TypeInfo* t2914_TI_var;
extern "C" void m10223_gshared (t1877 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2914_TI_var = il2cpp_codegen_type_info_from_index(6371);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2914_TI_var);
		(( void (*) (t2914 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2914 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18038_gshared (t1877 * __this, t991  p0, t991  p1, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		t991  L_0 = p0;
		t991  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		t991  L_3 = p1;
		t991  L_4 = L_3;
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
		t991  L_6 = p1;
		t991  L_7 = L_6;
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
		t991  L_9 = p1;
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t991  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t991 )L_9);
		return L_10;
	}
}
#include "t2914.h"
#ifndef _MSC_VER
#else
#endif

#include "t2915.h"
#include "t2915MD.h"


extern "C" void m18039_gshared (t2914 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1895_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m18040_gshared (t7 * __this , const MethodInfo* method)
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
		((t2914_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2914 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2915 * L_8 = (t2915 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2915 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2914_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" int32_t m18041_gshared (t2914 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, t991 , t991  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T) */, (t2914 *)__this, (t991 )((*(t991 *)((t991 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t991 )((*(t991 *)((t991 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		t396 * L_8 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_8, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern "C" t2914 * m18042_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2914 * L_0 = ((t2914_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t2914_TI_var;
extern "C" void m18043_gshared (t2915 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2914_TI_var = il2cpp_codegen_type_info_from_index(6371);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2914_TI_var);
		(( void (*) (t2914 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2914 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t91_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m18044_gshared (t2915 * __this, t991  p0, t991  p1, const MethodInfo* method)
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
		t991  L_0 = p0;
		t991  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		t991  L_3 = p1;
		t991  L_4 = L_3;
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
		t991  L_6 = p1;
		t991  L_7 = L_6;
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
		t991  L_9 = p0;
		t991  L_10 = L_9;
		t7 * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((t7*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		t991  L_12 = p0;
		t991  L_13 = L_12;
		t7 * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		t991  L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t991  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)((t7*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (t991 )L_15);
		return L_16;
	}

IL_003e:
	{
		t991  L_17 = p0;
		t991  L_18 = L_17;
		t7 * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((t7 *)IsInst(L_19, t91_TI_var)))
		{
			goto IL_0062;
		}
	}
	{
		t991  L_20 = p0;
		t991  L_21 = L_20;
		t7 * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		t991  L_23 = p1;
		t991  L_24 = L_23;
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
#include "t1878.h"
#ifndef _MSC_VER
#else
#endif
#include "t1878MD.h"

#include "t2916MD.h"


extern TypeInfo* t2916_TI_var;
extern "C" void m10224_gshared (t1878 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2916_TI_var = il2cpp_codegen_type_info_from_index(6374);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2916_TI_var);
		(( void (*) (t2916 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2916 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18045_gshared (t1878 * __this, t991  p0, const MethodInfo* method)
{
	{
		t991  L_0 = p0;
		t991  L_1 = L_0;
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
extern "C" bool m18046_gshared (t1878 * __this, t991  p0, t991  p1, const MethodInfo* method)
{
	{
		t991  L_0 = p0;
		t991  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t991  L_3 = p1;
		t991  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t991  L_6 = p1;
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, t991  >::Invoke(0 /* System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (t7*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t991 )L_6);
		return L_7;
	}
}
#include "t2916.h"
#ifndef _MSC_VER
#else
#endif

#include "t2917.h"
#include "t2917MD.h"


extern "C" void m18047_gshared (t2916 * __this, const MethodInfo* method)
{
	{
		m162((t7 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t1906_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t607_TI_var;
extern "C" void m18048_gshared (t7 * __this , const MethodInfo* method)
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
		((t2916_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2916 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		t2917 * L_8 = (t2917 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2917 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2916_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m18049_gshared (t2916 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t991  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T) */, (t2916 *)__this, (t991 )((*(t991 *)((t991 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m18050_gshared (t2916 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t991 , t991  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T) */, (t2916 *)__this, (t991 )((*(t991 *)((t991 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t991 )((*(t991 *)((t991 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2916 * m18051_gshared (t7 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2916 * L_0 = ((t2916_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t2916_TI_var;
extern "C" void m18052_gshared (t2917 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2916_TI_var = il2cpp_codegen_type_info_from_index(6374);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2916_TI_var);
		(( void (*) (t2916 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2916 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18053_gshared (t2917 * __this, t991  p0, const MethodInfo* method)
{
	{
		t991  L_0 = p0;
		t991  L_1 = L_0;
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
extern "C" bool m18054_gshared (t2917 * __this, t991  p0, t991  p1, const MethodInfo* method)
{
	{
		t991  L_0 = p0;
		t991  L_1 = L_0;
		t7 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t991  L_3 = p1;
		t991  L_4 = L_3;
		t7 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		t991  L_6 = p1;
		t991  L_7 = L_6;
		t7 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (t7 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), (t7 *)L_8);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
