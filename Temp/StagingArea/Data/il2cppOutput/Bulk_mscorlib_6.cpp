#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1786.h"
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
#include "t1786MD.h"

#include "t766.h"
#include "t58.h"
#include "t53.h"
#include "t7MD.h"

#include "t52.h"

extern "C" void m9858 (t1786 * __this, t766 * p0, int32_t p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t766 * L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern "C" t766 * m9859 (t1786 * __this, const MethodInfo* method)
{
	{
		t766 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m9860 (t1786 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1787.h"
#ifndef _MSC_VER
#else
#endif
#include "t1787MD.h"

#include "t347.h"
#include "t359.h"
#include "t1308.h"
#include "t54.h"
#include "t7.h"
#include "t1790.h"
#include "t1478.h"
#include "t1105.h"
#include "mscorlib_ArrayTypes.h"
#include "t1522.h"
#include "t616.h"
#include "t733.h"
#include "t529.h"
#include "t47.h"
#include "t1500.h"
#include "t910.h"
#include "t919.h"
#include "t708.h"
#include "t685.h"
#include "t614.h"
#include "t722.h"
#include "t723.h"
#include "t1529.h"
#include "t700.h"
#include "t347MD.h"
#include "t766MD.h"
#include "t1522MD.h"
#include "t616MD.h"
#include "t733MD.h"
#include "t52MD.h"
#include "t47MD.h"
#include "t1500MD.h"
#include "t708MD.h"
#include "t910MD.h"
#include "t919MD.h"
#include "t685MD.h"
#include "t722MD.h"
#include "t614MD.h"
#include "t723MD.h"
#include "t700MD.h"


extern const Il2CppType* t766_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t766_TI_var;
extern "C" void m9861 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t766_0_0_0_var = il2cpp_codegen_type_from_index(1072);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t766_TI_var = il2cpp_codegen_type_info_from_index(1072);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, LoadTypeToken(t766_0_0_0_var), NULL);
		((t1787_SFs*)t1787_TI_var->static_fields)->f1 = L_0;
		t766 * L_1 = (t766 *)il2cpp_codegen_object_new (t766_TI_var);
		m3430(L_1, ((int32_t)32767), NULL);
		((t1787_SFs*)t1787_TI_var->static_fields)->f2 = L_1;
		return;
	}
}
extern const Il2CppType* t58_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t1790_TI_var;
extern TypeInfo* t1478_TI_var;
extern TypeInfo* t1787_TI_var;
extern "C" bool m9862 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_0_0_0_var = il2cpp_codegen_type_from_index(14);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t1790_TI_var = il2cpp_codegen_type_info_from_index(2739);
		t1478_TI_var = il2cpp_codegen_type_info_from_index(2740);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	{
		t7 * L_0 = p0;
		V_0 = ((t347 *)IsInst(L_0, t347_TI_var));
		t347 * L_1 = V_0;
		if (((t1790 *)IsInst(L_1, t1790_TI_var)))
		{
			goto IL_0017;
		}
	}
	{
		t347 * L_2 = V_0;
		if (!((t1478 *)IsInst(L_2, t1478_TI_var)))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		t7 * L_3 = p0;
		if (!((t347 *)IsInst(L_3, t347_TI_var)))
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t1105 * L_4 = ((t1787_SFs*)t1787_TI_var->static_fields)->f0;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_5 = m1613(NULL, LoadTypeToken(t58_0_0_0_var), NULL);
		t1105 * L_6 = (t1105 *)VirtFuncInvoker0< t1105 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		((t1787_SFs*)t1787_TI_var->static_fields)->f0 = L_6;
	}

IL_003e:
	{
		t7 * L_7 = p0;
		t347 * L_8 = m1520(L_7, NULL);
		t1105 * L_9 = (t1105 *)VirtFuncInvoker0< t1105 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t1105 * L_10 = ((t1787_SFs*)t1787_TI_var->static_fields)->f0;
		return ((((int32_t)((((t7*)(t1105 *)L_9) == ((t7*)(t1105 *)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t69* m9863 (t7 * __this , t7 * p0, t347 * p1, bool p2, const MethodInfo* method)
{
	typedef t69* (*m9863_ftn) (t7 *, t347 *, bool);
	static m9863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9863_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t1522_TI_var;
extern TypeInfo* t616_TI_var;
extern TypeInfo* t733_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" t69* m9864 (t7 * __this , t7 * p0, t347 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1522_TI_var = il2cpp_codegen_type_info_from_index(3075);
		t616_TI_var = il2cpp_codegen_type_info_from_index(1010);
		t733_TI_var = il2cpp_codegen_type_info_from_index(2852);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = (t69*)NULL;
		t7 * L_0 = p0;
		if (!((t1522 *)IsInst(L_0, t1522_TI_var)))
		{
			goto IL_0018;
		}
	}
	{
		t7 * L_1 = p0;
		t69* L_2 = m8169(((t1522 *)Castclass(L_1, t1522_TI_var)), NULL);
		V_0 = L_2;
		goto IL_0058;
	}

IL_0018:
	{
		t7 * L_3 = p0;
		if (!((t616 *)IsInst(L_3, t616_TI_var)))
		{
			goto IL_002e;
		}
	}
	{
		t7 * L_4 = p0;
		t69* L_5 = m8065(((t616 *)Castclass(L_4, t616_TI_var)), NULL);
		V_0 = L_5;
		goto IL_0058;
	}

IL_002e:
	{
		t7 * L_6 = p0;
		if (!((t733 *)IsInst(L_6, t733_TI_var)))
		{
			goto IL_0044;
		}
	}
	{
		t7 * L_7 = p0;
		t69* L_8 = m8240(((t733 *)Castclass(L_7, t733_TI_var)), NULL);
		V_0 = L_8;
		goto IL_0058;
	}

IL_0044:
	{
		t7 * L_9 = p0;
		if (!((t347 *)IsInst(L_9, t347_TI_var)))
		{
			goto IL_0058;
		}
	}
	{
		t7 * L_10 = p0;
		t69* L_11 = m6491(((t347 *)Castclass(L_10, t347_TI_var)), NULL);
		V_0 = L_11;
	}

IL_0058:
	{
		t347 * L_12 = p1;
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		t69* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		V_1 = 0;
		goto IL_008b;
	}

IL_0062:
	{
		t347 * L_14 = p1;
		t69* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t347 * L_18 = m1520((*(t7 **)(t7 **)SZArrayLdElema(L_15, L_17)), NULL);
		bool L_19 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_14, L_18);
		if (!L_19)
		{
			goto IL_0087;
		}
	}
	{
		t69* L_20 = V_0;
		if ((!(((uint32_t)(((int32_t)(((t52 *)L_20)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		t69* L_21 = V_0;
		return L_21;
	}

IL_007a:
	{
		t69* L_22 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t69* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		ArrayElementTypeCheck (L_22, (*(t7 **)(t7 **)SZArrayLdElema(L_23, L_25)));
		*((t7 **)(t7 **)SZArrayLdElema(L_22, 0)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_23, L_25));
		return L_22;
	}

IL_0087:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_27 = V_1;
		t69* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t52 *)L_28)->max_length))))))
		{
			goto IL_0062;
		}
	}
	{
		return ((t69*)SZArrayNew(t69_TI_var, 0));
	}

IL_0098:
	{
		t69* L_29 = V_0;
		return L_29;
	}
}
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t1852_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" t69* m9865 (t7 * __this , t7 * p0, t347 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t1852_TI_var = il2cpp_codegen_type_info_from_index(3076);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	t69* V_1 = {0};
	t69* V_2 = {0};
	{
		t7 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		bool L_1 = m9862(NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t7 * L_2 = p0;
		t347 * L_3 = p1;
		t69* L_4 = (t69*)InterfaceFuncInvoker2< t69*, t347 *, bool >::Invoke(0 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, t1852_TI_var, L_2, L_3, 1);
		V_0 = L_4;
		goto IL_001c;
	}

IL_0013:
	{
		t7 * L_5 = p0;
		t347 * L_6 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_7 = m9863(NULL, L_5, L_6, 0, NULL);
		V_0 = L_7;
	}

IL_001c:
	{
		t7 * L_8 = p0;
		t347 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_10 = m9864(NULL, L_8, L_9, NULL);
		V_1 = L_10;
		t69* L_11 = V_1;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		t69* L_12 = V_0;
		t69* L_13 = V_1;
		V_2 = ((t69*)SZArrayNew(t69_TI_var, ((int32_t)((int32_t)(((int32_t)(((t52 *)L_12)->max_length)))+(int32_t)(((int32_t)(((t52 *)L_13)->max_length)))))));
		t69* L_14 = V_0;
		t69* L_15 = V_2;
		t69* L_16 = V_0;
		m4651(NULL, (t52 *)(t52 *)L_14, (t52 *)(t52 *)L_15, (((int32_t)(((t52 *)L_16)->max_length))), NULL);
		t69* L_17 = V_1;
		t69* L_18 = V_2;
		t69* L_19 = V_0;
		t69* L_20 = V_1;
		m6390(NULL, (t52 *)(t52 *)L_17, 0, (t52 *)(t52 *)L_18, (((int32_t)(((t52 *)L_19)->max_length))), (((int32_t)(((t52 *)L_20)->max_length))), NULL);
		t69* L_21 = V_2;
		return L_21;
	}

IL_004e:
	{
		t69* L_22 = V_0;
		return L_22;
	}
}
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1500_TI_var;
extern TypeInfo* t529_TI_var;
extern "C" t529 * m9866 (t7 * __this , t7 * p0, t347 * p1, bool p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1500_TI_var = il2cpp_codegen_type_info_from_index(2855);
		t529_TI_var = il2cpp_codegen_type_info_from_index(1254);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	t47* V_1 = {0};
	{
		t7 * L_0 = p0;
		t347 * L_1 = p1;
		bool L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_3 = m9867(NULL, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		t69* L_4 = V_0;
		if ((((int32_t)(((t52 *)L_4)->max_length))))
		{
			goto IL_0010;
		}
	}
	{
		return (t529 *)NULL;
	}

IL_0010:
	{
		t69* L_5 = V_0;
		if ((((int32_t)(((int32_t)(((t52 *)L_5)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (t47*) &_stringLiteral2352;
		t47* L_6 = V_1;
		t7 * L_7 = p0;
		t347 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_9 = m6051(NULL, L_6, L_7, L_8, NULL);
		V_1 = L_9;
		t47* L_10 = V_1;
		t1500 * L_11 = (t1500 *)il2cpp_codegen_object_new (t1500_TI_var);
		m7983(L_11, L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_002c:
	{
		t69* L_12 = V_0;
		int32_t L_13 = 0;
		return ((t529 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_12, L_13)), t529_TI_var));
	}
}
extern const Il2CppType* t1787_0_0_0_var;
extern const Il2CppType* t529_0_0_0_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t910_TI_var;
extern TypeInfo* t919_TI_var;
extern TypeInfo* t1786_TI_var;
extern "C" t69* m9867 (t7 * __this , t7 * p0, t347 * p1, bool p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1787_0_0_0_var = il2cpp_codegen_type_from_index(2704);
		t529_0_0_0_var = il2cpp_codegen_type_from_index(1254);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		t1786_TI_var = il2cpp_codegen_type_info_from_index(3077);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	t69* V_1 = {0};
	t766 * V_2 = {0};
	int32_t V_3 = 0;
	t910 * V_4 = {0};
	t919 * V_5 = {0};
	t7 * V_6 = {0};
	int32_t V_7 = 0;
	t7 * V_8 = {0};
	t69* V_9 = {0};
	int32_t V_10 = 0;
	t766 * V_11 = {0};
	t347 * V_12 = {0};
	t1786 * V_13 = {0};
	t69* V_14 = {0};
	int32_t G_B23_0 = 0;
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral1361, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t347 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*) &_stringLiteral1027, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t347 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_5 = m1613(NULL, LoadTypeToken(t1787_0_0_0_var), NULL);
		if ((!(((t7*)(t347 *)L_4) == ((t7*)(t347 *)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		p1 = (t347 *)NULL;
	}

IL_002e:
	{
		t7 * L_6 = p0;
		t347 * L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_8 = m9865(NULL, L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9 = p2;
		if (L_9)
		{
			goto IL_0092;
		}
	}
	{
		t69* L_10 = V_1;
		if ((!(((uint32_t)(((int32_t)(((t52 *)L_10)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0092;
		}
	}
	{
		t347 * L_11 = p1;
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		t347 * L_12 = p1;
		t69* L_13 = V_1;
		int32_t L_14 = 0;
		t347 * L_15 = m1520((*(t7 **)(t7 **)SZArrayLdElema(L_13, L_14)), NULL);
		bool L_16 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_12, L_15);
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		t347 * L_17 = p1;
		t52 * L_18 = m6374(NULL, L_17, 1, NULL);
		V_0 = ((t69*)Castclass(L_18, t69_TI_var));
		t69* L_19 = V_0;
		t69* L_20 = V_1;
		int32_t L_21 = 0;
		ArrayElementTypeCheck (L_19, (*(t7 **)(t7 **)SZArrayLdElema(L_20, L_21)));
		*((t7 **)(t7 **)SZArrayLdElema(L_19, 0)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_20, L_21));
		goto IL_0074;
	}

IL_0067:
	{
		t347 * L_22 = p1;
		t52 * L_23 = m6374(NULL, L_22, 0, NULL);
		V_0 = ((t69*)Castclass(L_23, t69_TI_var));
	}

IL_0074:
	{
		goto IL_0090;
	}

IL_0076:
	{
		t69* L_24 = V_1;
		int32_t L_25 = 0;
		t347 * L_26 = m1520((*(t7 **)(t7 **)SZArrayLdElema(L_24, L_25)), NULL);
		t52 * L_27 = m6374(NULL, L_26, 1, NULL);
		V_0 = ((t69*)Castclass(L_27, t69_TI_var));
		t69* L_28 = V_0;
		t69* L_29 = V_1;
		int32_t L_30 = 0;
		ArrayElementTypeCheck (L_28, (*(t7 **)(t7 **)SZArrayLdElema(L_29, L_30)));
		*((t7 **)(t7 **)SZArrayLdElema(L_28, 0)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_29, L_30));
	}

IL_0090:
	{
		t69* L_31 = V_0;
		return L_31;
	}

IL_0092:
	{
		t347 * L_32 = p1;
		if (!L_32)
		{
			goto IL_00b4;
		}
	}
	{
		t347 * L_33 = p1;
		bool L_34 = (bool)VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Type::get_IsSealed() */, L_33);
		if (!L_34)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_35 = p2;
		if (!L_35)
		{
			goto IL_00b4;
		}
	}
	{
		t347 * L_36 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t766 * L_37 = m9873(NULL, L_36, NULL);
		V_2 = L_37;
		t766 * L_38 = V_2;
		bool L_39 = m5774(L_38, NULL);
		if (L_39)
		{
			goto IL_00b4;
		}
	}
	{
		p2 = 0;
	}

IL_00b4:
	{
		t69* L_40 = V_1;
		if ((((int32_t)(((int32_t)(((t52 *)L_40)->max_length)))) >= ((int32_t)((int32_t)16))))
		{
			goto IL_00c0;
		}
	}
	{
		t69* L_41 = V_1;
		G_B23_0 = (((int32_t)(((t52 *)L_41)->max_length)));
		goto IL_00c2;
	}

IL_00c0:
	{
		G_B23_0 = ((int32_t)16);
	}

IL_00c2:
	{
		V_3 = G_B23_0;
		int32_t L_42 = V_3;
		t910 * L_43 = (t910 *)il2cpp_codegen_object_new (t910_TI_var);
		m4642(L_43, L_42, NULL);
		V_4 = L_43;
		int32_t L_44 = V_3;
		t919 * L_45 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
		m4622(L_45, L_44, NULL);
		V_5 = L_45;
		t7 * L_46 = p0;
		V_6 = L_46;
		V_7 = 0;
	}

IL_00d9:
	{
		t69* L_47 = V_1;
		V_9 = L_47;
		V_10 = 0;
		goto IL_017d;
	}

IL_00e4:
	{
		t69* L_48 = V_9;
		int32_t L_49 = V_10;
		int32_t L_50 = L_49;
		V_8 = (*(t7 **)(t7 **)SZArrayLdElema(L_48, L_50));
		t7 * L_51 = V_8;
		t347 * L_52 = m1520(L_51, NULL);
		V_12 = L_52;
		t347 * L_53 = p1;
		if (!L_53)
		{
			goto IL_0106;
		}
	}
	{
		t347 * L_54 = p1;
		t347 * L_55 = V_12;
		bool L_56 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_54, L_55);
		if (L_56)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_0177;
	}

IL_0106:
	{
		t910 * L_57 = V_4;
		t347 * L_58 = V_12;
		t7 * L_59 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_57, L_58);
		V_13 = ((t1786 *)Castclass(L_59, t1786_TI_var));
		t1786 * L_60 = V_13;
		if (!L_60)
		{
			goto IL_0125;
		}
	}
	{
		t1786 * L_61 = V_13;
		t766 * L_62 = m9859(L_61, NULL);
		V_11 = L_62;
		goto IL_012e;
	}

IL_0125:
	{
		t347 * L_63 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t766 * L_64 = m9873(NULL, L_63, NULL);
		V_11 = L_64;
	}

IL_012e:
	{
		int32_t L_65 = V_7;
		if (!L_65)
		{
			goto IL_013b;
		}
	}
	{
		t766 * L_66 = V_11;
		bool L_67 = m5774(L_66, NULL);
		if (!L_67)
		{
			goto IL_0161;
		}
	}

IL_013b:
	{
		t766 * L_68 = V_11;
		bool L_69 = m5773(L_68, NULL);
		if (L_69)
		{
			goto IL_0157;
		}
	}
	{
		t1786 * L_70 = V_13;
		if (!L_70)
		{
			goto IL_0157;
		}
	}
	{
		t1786 * L_71 = V_13;
		if (!L_71)
		{
			goto IL_0161;
		}
	}
	{
		t1786 * L_72 = V_13;
		int32_t L_73 = m9860(L_72, NULL);
		int32_t L_74 = V_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)L_74))))
		{
			goto IL_0161;
		}
	}

IL_0157:
	{
		t919 * L_75 = V_5;
		t7 * L_76 = V_8;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_75, L_76);
	}

IL_0161:
	{
		t1786 * L_77 = V_13;
		if (L_77)
		{
			goto IL_0177;
		}
	}
	{
		t910 * L_78 = V_4;
		t347 * L_79 = V_12;
		t766 * L_80 = V_11;
		int32_t L_81 = V_7;
		t1786 * L_82 = (t1786 *)il2cpp_codegen_object_new (t1786_TI_var);
		m9858(L_82, L_80, L_81, NULL);
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_78, L_79, L_82);
	}

IL_0177:
	{
		int32_t L_83 = V_10;
		V_10 = ((int32_t)((int32_t)L_83+(int32_t)1));
	}

IL_017d:
	{
		int32_t L_84 = V_10;
		t69* L_85 = V_9;
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)(((t52 *)L_85)->max_length))))))
		{
			goto IL_00e4;
		}
	}
	{
		t7 * L_86 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t7 * L_87 = m9872(NULL, L_86, NULL);
		t7 * L_88 = L_87;
		V_6 = L_88;
		if (!L_88)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_89 = V_7;
		V_7 = ((int32_t)((int32_t)L_89+(int32_t)1));
		t7 * L_90 = V_6;
		t347 * L_91 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_92 = m9865(NULL, L_90, L_91, NULL);
		V_1 = L_92;
	}

IL_01a3:
	{
		bool L_93 = p2;
		if (!L_93)
		{
			goto IL_01ad;
		}
	}
	{
		t7 * L_94 = V_6;
		if (L_94)
		{
			goto IL_00d9;
		}
	}

IL_01ad:
	{
		V_14 = (t69*)NULL;
		t347 * L_95 = p1;
		if (!L_95)
		{
			goto IL_01bb;
		}
	}
	{
		t347 * L_96 = p1;
		bool L_97 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_96);
		if (!L_97)
		{
			goto IL_01da;
		}
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_98 = m1613(NULL, LoadTypeToken(t529_0_0_0_var), NULL);
		t919 * L_99 = V_5;
		int32_t L_100 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_99);
		t52 * L_101 = m6374(NULL, L_98, L_100, NULL);
		V_14 = ((t69*)Castclass(L_101, t69_TI_var));
		goto IL_01ee;
	}

IL_01da:
	{
		t347 * L_102 = p1;
		t919 * L_103 = V_5;
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_103);
		t52 * L_105 = m6374(NULL, L_102, L_104, NULL);
		V_14 = ((t69*)IsInst(L_105, t69_TI_var));
	}

IL_01ee:
	{
		t919 * L_106 = V_5;
		t69* L_107 = V_14;
		VirtActionInvoker2< t52 *, int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_106, (t52 *)(t52 *)L_107, 0);
		t69* L_108 = V_14;
		return L_108;
	}
}
extern const Il2CppType* t1787_0_0_0_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t69* m9868 (t7 * __this , t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1787_0_0_0_var = il2cpp_codegen_type_from_index(2704);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
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
		m3299(L_1, (t47*) &_stringLiteral1361, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = p1;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		t7 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_4 = m9865(NULL, L_3, (t347 *)NULL, NULL);
		t7 * L_5 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(20 /* System.Object System.Array::Clone() */, L_4);
		return ((t69*)Castclass(L_5, t69_TI_var));
	}

IL_0023:
	{
		t7 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_7 = m1613(NULL, LoadTypeToken(t1787_0_0_0_var), NULL);
		bool L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_9 = m9867(NULL, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t1852_TI_var;
extern "C" bool m9869 (t7 * __this , t7 * p0, t347 * p1, bool p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t1852_TI_var = il2cpp_codegen_type_info_from_index(3076);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	{
		t347 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral1027, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		bool L_3 = m9862(NULL, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t7 * L_4 = p0;
		t347 * L_5 = p1;
		bool L_6 = p2;
		bool L_7 = (bool)InterfaceFuncInvoker2< bool, t347 *, bool >::Invoke(1 /* System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean) */, t1852_TI_var, L_4, L_5, L_6);
		return L_7;
	}

IL_001f:
	{
		t7 * L_8 = p0;
		t347 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		bool L_10 = m9870(NULL, L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		return 1;
	}

IL_002a:
	{
		t7 * L_11 = p0;
		t347 * L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_13 = m9864(NULL, L_11, L_12, NULL);
		V_0 = L_13;
		t69* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_0039:
	{
		t347 * L_15 = p1;
		t69* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		t347 * L_19 = m1520((*(t7 **)(t7 **)SZArrayLdElema(L_16, L_18)), NULL);
		bool L_20 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_19);
		if (!L_20)
		{
			goto IL_004b;
		}
	}
	{
		return 1;
	}

IL_004b:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_22 = V_1;
		t69* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((t52 *)L_23)->max_length))))))
		{
			goto IL_0039;
		}
	}

IL_0055:
	{
		bool L_24 = p2;
		if (!L_24)
		{
			goto IL_006b;
		}
	}
	{
		t7 * L_25 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t7 * L_26 = m9872(NULL, L_25, NULL);
		t7 * L_27 = L_26;
		V_2 = L_27;
		if (!L_27)
		{
			goto IL_006b;
		}
	}
	{
		t7 * L_28 = V_2;
		t347 * L_29 = p1;
		bool L_30 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		bool L_31 = m9869(NULL, L_28, L_29, L_30, NULL);
		return L_31;
	}

IL_006b:
	{
		return 0;
	}
}
extern "C" bool m9870 (t7 * __this , t7 * p0, t347 * p1, const MethodInfo* method)
{
	typedef bool (*m9870_ftn) (t7 *, t347 *);
	static m9870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9870_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t607_TI_var;
extern "C" t685 * m9871 (t7 * __this , t685 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		s_Il2CppMethodIntialized = true;
	}
	t614 * V_0 = {0};
	t614 * V_1 = {0};
	t736* V_2 = {0};
	t607* V_3 = {0};
	int32_t V_4 = 0;
	{
		t685 * L_0 = p0;
		t614 * L_1 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		V_0 = L_1;
		t614 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		t614 * L_3 = V_0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsVirtual() */, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_0013:
	{
		t685 * L_5 = p0;
		t614 * L_6 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_5, 1);
		V_0 = L_6;
	}

IL_001b:
	{
		t614 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		t614 * L_8 = V_0;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsVirtual() */, L_8);
		if (L_9)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return (t685 *)NULL;
	}

IL_0028:
	{
		t614 * L_10 = V_0;
		t614 * L_11 = (t614 *)VirtFuncInvoker0< t614 * >::Invoke(27 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_10);
		V_1 = L_11;
		t614 * L_12 = V_1;
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		t614 * L_13 = V_1;
		t614 * L_14 = V_0;
		if ((((t7*)(t614 *)L_13) == ((t7*)(t614 *)L_14)))
		{
			goto IL_009f;
		}
	}
	{
		t685 * L_15 = p0;
		t736* L_16 = (t736*)VirtFuncInvoker0< t736* >::Invoke(20 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		V_2 = L_16;
		t736* L_17 = V_2;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		t736* L_18 = V_2;
		if ((((int32_t)(((int32_t)(((t52 *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		t736* L_19 = V_2;
		V_3 = ((t607*)SZArrayNew(t607_TI_var, (((int32_t)(((t52 *)L_19)->max_length)))));
		V_4 = 0;
		goto IL_0067;
	}

IL_0054:
	{
		t607* L_20 = V_3;
		int32_t L_21 = V_4;
		t736* L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = L_23;
		t347 * L_25 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(t733 **)(t733 **)SZArrayLdElema(L_22, L_24)));
		ArrayElementTypeCheck (L_20, L_25);
		*((t347 **)(t347 **)SZArrayLdElema(L_20, L_21)) = (t347 *)L_25;
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0067:
	{
		int32_t L_27 = V_4;
		t607* L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t52 *)L_28)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		t614 * L_29 = V_1;
		t347 * L_30 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_29);
		t685 * L_31 = p0;
		t47* L_32 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_31);
		t685 * L_33 = p0;
		t347 * L_34 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_33);
		t607* L_35 = V_3;
		t685 * L_36 = (t685 *)VirtFuncInvoker3< t685 *, t47*, t347 *, t607* >::Invoke(55 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[]) */, L_30, L_32, L_34, L_35);
		return L_36;
	}

IL_0087:
	{
		t614 * L_37 = V_1;
		t347 * L_38 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_37);
		t685 * L_39 = p0;
		t47* L_40 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
		t685 * L_41 = p0;
		t347 * L_42 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_41);
		t685 * L_43 = (t685 *)VirtFuncInvoker2< t685 *, t47*, t347 * >::Invoke(54 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type) */, L_38, L_40, L_42);
		return L_43;
	}

IL_009f:
	{
		return (t685 *)NULL;
	}
}
extern TypeInfo* t347_TI_var;
extern TypeInfo* t1529_TI_var;
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t1522_TI_var;
extern TypeInfo* t614_TI_var;
extern "C" t7 * m9872 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t1529_TI_var = il2cpp_codegen_type_info_from_index(2887);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t1522_TI_var = il2cpp_codegen_type_info_from_index(3075);
		t614_TI_var = il2cpp_codegen_type_info_from_index(1049);
		s_Il2CppMethodIntialized = true;
	}
	t614 * V_0 = {0};
	t614 * V_1 = {0};
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (t7 *)NULL;
	}

IL_0005:
	{
		t7 * L_1 = p0;
		if (!((t347 *)IsInst(L_1, t347_TI_var)))
		{
			goto IL_0019;
		}
	}
	{
		t7 * L_2 = p0;
		t347 * L_3 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, ((t347 *)Castclass(L_2, t347_TI_var)));
		return L_3;
	}

IL_0019:
	{
		V_0 = (t614 *)NULL;
		t7 * L_4 = p0;
		if (!((t1529 *)IsInst(L_4, t1529_TI_var)))
		{
			goto IL_002f;
		}
	}
	{
		t7 * L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t685 * L_6 = m9871(NULL, ((t1529 *)Castclass(L_5, t1529_TI_var)), NULL);
		return L_6;
	}

IL_002f:
	{
		t7 * L_7 = p0;
		if (!((t1522 *)IsInst(L_7, t1522_TI_var)))
		{
			goto IL_003e;
		}
	}
	{
		t7 * L_8 = p0;
		V_0 = ((t614 *)Castclass(L_8, t614_TI_var));
	}

IL_003e:
	{
		t614 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		t614 * L_10 = V_0;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsVirtual() */, L_10);
		if (L_11)
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (t7 *)NULL;
	}

IL_004b:
	{
		t614 * L_12 = V_0;
		t614 * L_13 = (t614 *)VirtFuncInvoker0< t614 * >::Invoke(27 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_12);
		V_1 = L_13;
		t614 * L_14 = V_1;
		t614 * L_15 = V_0;
		if ((!(((t7*)(t614 *)L_14) == ((t7*)(t614 *)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		return (t7 *)NULL;
	}

IL_0058:
	{
		t614 * L_16 = V_1;
		return L_16;
	}
}
extern const Il2CppType* t766_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t766_TI_var;
extern TypeInfo* t1787_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" t766 * m9873 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t766_0_0_0_var = il2cpp_codegen_type_from_index(1072);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t766_TI_var = il2cpp_codegen_type_info_from_index(1072);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	t766 * V_0 = {0};
	t69* V_1 = {0};
	{
		t347 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_1 = m1613(NULL, LoadTypeToken(t766_0_0_0_var), NULL);
		if ((!(((t7*)(t347 *)L_0) == ((t7*)(t347 *)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t766 * L_2 = (t766 *)il2cpp_codegen_object_new (t766_TI_var);
		m3430(L_2, 4, NULL);
		return L_2;
	}

IL_0014:
	{
		V_0 = (t766 *)NULL;
		t347 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t347 * L_4 = ((t1787_SFs*)t1787_TI_var->static_fields)->f1;
		t69* L_5 = m9867(NULL, L_3, L_4, 0, NULL);
		V_1 = L_5;
		t69* L_6 = V_1;
		if ((((int32_t)(((t52 *)L_6)->max_length))))
		{
			goto IL_0047;
		}
	}
	{
		t347 * L_7 = p0;
		t347 * L_8 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		t347 * L_9 = p0;
		t347 * L_10 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t766 * L_11 = m9873(NULL, L_10, NULL);
		V_0 = L_11;
	}

IL_003c:
	{
		t766 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		t766 * L_13 = V_0;
		return L_13;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t766 * L_14 = ((t1787_SFs*)t1787_TI_var->static_fields)->f2;
		return L_14;
	}

IL_0047:
	{
		t69* L_15 = V_1;
		if ((((int32_t)(((int32_t)(((t52 *)L_15)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		t700 * L_16 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_16, (t47*) &_stringLiteral2353, NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0058:
	{
		t69* L_17 = V_1;
		int32_t L_18 = 0;
		return ((t766 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_17, L_18)), t766_TI_var));
	}
}
#include "t1788.h"
#ifndef _MSC_VER
#else
#endif
#include "t1788MD.h"



extern "C" void m9874 (t7 * __this , const MethodInfo* method)
{
	{
		return;
	}
}
#include "t1789.h"
#ifndef _MSC_VER
#else
#endif
#include "t1789MD.h"



extern "C" void m9875 (t1789 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1790MD.h"

#include "t1513.h"
#include "t1490.h"
#include "t1499.h"
#include "t612.h"
#include "t734.h"
#include "t742.h"
#include "t1481.h"
#include "t743.h"
#include "t1511.h"
#include "t709.h"
#include "t438.h"
#include "t396.h"
#include "t1784.h"
#include "t1515.h"
#include "t1492.h"
#include "t1782.h"
#include "t921.h"
#include "t1084.h"
#include "t1098.h"
#include "t742MD.h"
#include "t396MD.h"
#include "t1107MD.h"
#include "t1784MD.h"
#include "t529MD.h"
#include "t438MD.h"
#include "t1515MD.h"
#include "t1782MD.h"
#include "t1811MD.h"
#include "t1098MD.h"


extern "C" int32_t m9876 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	typedef int32_t (*m9876_ftn) (t347 *);
	static m9876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9876_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_attributes(System.Type)");
	return _il2cpp_icall_func(p0);
}
extern TypeInfo* t1789_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t612 * m9877 (t1790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1789_TI_var = il2cpp_codegen_type_info_from_index(3078);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	t612 * V_0 = {0};
	int32_t V_1 = {0};
	t612 * V_2 = {0};
	{
		V_0 = (t612 *)NULL;
		t1789 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		t1789 * L_1 = (t1789 *)il2cpp_codegen_object_new (t1789_TI_var);
		m9875(L_1, NULL);
		__this->f8 = L_1;
	}

IL_0015:
	{
		t1789 * L_2 = (__this->f8);
		t612 * L_3 = (L_2->f1);
		t612 * L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		t1789 * L_5 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t607* L_6 = ((t347_SFs*)t347_TI_var->static_fields)->f3;
		t612 * L_7 = (t612 *)VirtFuncInvoker5< t612 *, int32_t, t742 *, int32_t, t607*, t744* >::Invoke(70 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, __this, ((int32_t)52), (t742 *)NULL, 3, L_6, (t744*)(t744*)NULL);
		t612 * L_8 = L_7;
		V_2 = L_8;
		L_5->f1 = L_8;
		t612 * L_9 = V_2;
		V_0 = L_9;
	}

IL_0043:
	{
		t612 * L_10 = V_0;
		return L_10;
	}
}
extern "C" int32_t m9878 (t1790 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m9876(NULL, __this, NULL);
		return L_0;
	}
}
extern TypeInfo* t1500_TI_var;
extern TypeInfo* t612_TI_var;
extern TypeInfo* t1844_TI_var;
extern TypeInfo* t742_TI_var;
extern "C" t612 * m9879 (t1790 * __this, int32_t p0, t742 * p1, int32_t p2, t607* p3, t744* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1500_TI_var = il2cpp_codegen_type_info_from_index(2855);
		t612_TI_var = il2cpp_codegen_type_info_from_index(1020);
		t1844_TI_var = il2cpp_codegen_type_info_from_index(2856);
		t742_TI_var = il2cpp_codegen_type_info_from_index(2858);
		s_Il2CppMethodIntialized = true;
	}
	t735* V_0 = {0};
	t612 * V_1 = {0};
	t1844* V_2 = {0};
	int32_t V_3 = 0;
	t612 * V_4 = {0};
	t735* V_5 = {0};
	int32_t V_6 = 0;
	t612 * V_7 = {0};
	t735* V_8 = {0};
	int32_t V_9 = 0;
	{
		int32_t L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		p0 = ((int32_t)20);
	}

IL_0009:
	{
		int32_t L_1 = p0;
		t735* L_2 = (t735*)VirtFuncInvoker1< t735*, int32_t >::Invoke(72 /* System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags) */, __this, L_1);
		V_0 = L_2;
		V_1 = (t612 *)NULL;
		V_3 = 0;
		t735* L_3 = V_0;
		V_5 = L_3;
		V_6 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		t735* L_4 = V_5;
		int32_t L_5 = V_6;
		int32_t L_6 = L_5;
		V_4 = (*(t612 **)(t612 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = p2;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0036;
		}
	}
	{
		t612 * L_8 = V_4;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_8);
		int32_t L_10 = p2;
		int32_t L_11 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)L_10))) == ((int32_t)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_003d;
	}

IL_0036:
	{
		t612 * L_12 = V_4;
		V_1 = L_12;
		int32_t L_13 = V_3;
		V_3 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_6;
		V_6 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_15 = V_6;
		t735* L_16 = V_5;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t52 *)L_16)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_17 = V_3;
		if (L_17)
		{
			goto IL_0050;
		}
	}
	{
		return (t612 *)NULL;
	}

IL_0050:
	{
		t607* L_18 = p3;
		if (L_18)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		t1500 * L_20 = (t1500 *)il2cpp_codegen_object_new (t1500_TI_var);
		m7982(L_20, NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_005e:
	{
		t612 * L_21 = V_1;
		t722 * L_22 = m9924(__this, L_21, NULL);
		return ((t612 *)Castclass(L_22, t612_TI_var));
	}

IL_006b:
	{
		int32_t L_23 = V_3;
		V_2 = ((t1844*)SZArrayNew(t1844_TI_var, L_23));
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		t1844* L_25 = V_2;
		t612 * L_26 = V_1;
		ArrayElementTypeCheck (L_25, L_26);
		*((t722 **)(t722 **)SZArrayLdElema(L_25, 0)) = (t722 *)L_26;
		goto IL_00b6;
	}

IL_007c:
	{
		V_3 = 0;
		t735* L_27 = V_0;
		V_8 = L_27;
		V_9 = 0;
		goto IL_00ae;
	}

IL_0086:
	{
		t735* L_28 = V_8;
		int32_t L_29 = V_9;
		int32_t L_30 = L_29;
		V_7 = (*(t612 **)(t612 **)SZArrayLdElema(L_28, L_30));
		int32_t L_31 = p2;
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_009f;
		}
	}
	{
		t612 * L_32 = V_7;
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_32);
		int32_t L_34 = p2;
		int32_t L_35 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_33&(int32_t)L_34))) == ((int32_t)L_35)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_00a8;
	}

IL_009f:
	{
		t1844* L_36 = V_2;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		V_3 = ((int32_t)((int32_t)L_38+(int32_t)1));
		t612 * L_39 = V_7;
		ArrayElementTypeCheck (L_36, L_39);
		*((t722 **)(t722 **)SZArrayLdElema(L_36, L_38)) = (t722 *)L_39;
	}

IL_00a8:
	{
		int32_t L_40 = V_9;
		V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_41 = V_9;
		t735* L_42 = V_8;
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((t52 *)L_42)->max_length))))))
		{
			goto IL_0086;
		}
	}

IL_00b6:
	{
		t742 * L_43 = p1;
		if (L_43)
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t742_TI_var);
		t742 * L_44 = m8038(NULL, NULL);
		p1 = L_44;
	}

IL_00c2:
	{
		t742 * L_45 = p1;
		int32_t L_46 = p0;
		t1844* L_47 = V_2;
		t607* L_48 = p3;
		t744* L_49 = p4;
		t722 * L_50 = (t722 *)VirtFuncInvoker4< t722 *, int32_t, t1844*, t607*, t744* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_45, L_46, L_47, L_48, L_49);
		t722 * L_51 = m9924(__this, L_50, NULL);
		return ((t612 *)Castclass(L_51, t612_TI_var));
	}
}
extern "C" t735* m9880 (t1790 * __this, int32_t p0, t347 * p1, const MethodInfo* method)
{
	typedef t735* (*m9880_ftn) (t1790 *, int32_t, t347 *);
	static m9880_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9880_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t735* m9881 (t1790 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t735* L_1 = m9880(__this, L_0, __this, NULL);
		return L_1;
	}
}
extern "C" t1511 * m9882 (t1790 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	typedef t1511 * (*m9882_ftn) (t1790 *, t47*, int32_t);
	static m9882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9882_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern TypeInfo* t708_TI_var;
extern "C" t1511 * m9883 (t1790 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral257, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t47* L_2 = p0;
		int32_t L_3 = p1;
		t1511 * L_4 = m9882(__this, L_2, L_3, NULL);
		return L_4;
	}
}
extern "C" t616 * m9884 (t1790 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	typedef t616 * (*m9884_ftn) (t1790 *, t47*, int32_t);
	static m9884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9884_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetField(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t739* m9885 (t1790 * __this, int32_t p0, t347 * p1, const MethodInfo* method)
{
	typedef t739* (*m9885_ftn) (t1790 *, int32_t, t347 *);
	static m9885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9885_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t739* m9886 (t1790 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t739* L_1 = m9885(__this, L_0, __this, NULL);
		return L_1;
	}
}
extern "C" t607* m9887 (t1790 * __this, const MethodInfo* method)
{
	typedef t607* (*m9887_ftn) (t1790 *);
	static m9887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9887_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetInterfaces()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1518* m9888 (t1790 * __this, t47* p0, int32_t p1, bool p2, t347 * p3, const MethodInfo* method)
{
	typedef t1518* (*m9888_ftn) (t1790 *, t47*, int32_t, bool, t347 *);
	static m9888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9888_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern "C" t1518* m9889 (t1790 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1518* L_1 = m9888(__this, (t47*)NULL, L_0, 0, __this, NULL);
		return L_1;
	}
}
extern TypeInfo* t614_TI_var;
extern TypeInfo* t1844_TI_var;
extern TypeInfo* t742_TI_var;
extern "C" t614 * m9890 (t1790 * __this, t47* p0, int32_t p1, t742 * p2, int32_t p3, t607* p4, t744* p5, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t614_TI_var = il2cpp_codegen_type_info_from_index(1049);
		t1844_TI_var = il2cpp_codegen_type_info_from_index(2856);
		t742_TI_var = il2cpp_codegen_type_info_from_index(2858);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t1518* V_1 = {0};
	t614 * V_2 = {0};
	t1844* V_3 = {0};
	int32_t V_4 = 0;
	t614 * V_5 = {0};
	t1518* V_6 = {0};
	int32_t V_7 = 0;
	t614 * V_8 = {0};
	t1518* V_9 = {0};
	int32_t V_10 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t47* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t1518* L_4 = m9888(__this, L_1, L_2, L_3, __this, NULL);
		V_1 = L_4;
		V_2 = (t614 *)NULL;
		V_4 = 0;
		t1518* L_5 = V_1;
		V_6 = L_5;
		V_7 = 0;
		goto IL_004d;
	}

IL_0022:
	{
		t1518* L_6 = V_6;
		int32_t L_7 = V_7;
		int32_t L_8 = L_7;
		V_5 = (*(t614 **)(t614 **)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = p3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_003e;
		}
	}
	{
		t614 * L_10 = V_5;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_10);
		int32_t L_12 = p3;
		int32_t L_13 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_11&(int32_t)L_12))) == ((int32_t)L_13)))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0047;
	}

IL_003e:
	{
		t614 * L_14 = V_5;
		V_2 = L_14;
		int32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_17 = V_7;
		t1518* L_18 = V_6;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t52 *)L_18)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_19 = V_4;
		if (L_19)
		{
			goto IL_005b;
		}
	}
	{
		return (t614 *)NULL;
	}

IL_005b:
	{
		int32_t L_20 = V_4;
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		t607* L_21 = p4;
		if (L_21)
		{
			goto IL_0071;
		}
	}
	{
		t614 * L_22 = V_2;
		t722 * L_23 = m9924(__this, L_22, NULL);
		return ((t614 *)Castclass(L_23, t614_TI_var));
	}

IL_0071:
	{
		int32_t L_24 = V_4;
		V_3 = ((t1844*)SZArrayNew(t1844_TI_var, L_24));
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		t1844* L_26 = V_3;
		t614 * L_27 = V_2;
		ArrayElementTypeCheck (L_26, L_27);
		*((t722 **)(t722 **)SZArrayLdElema(L_26, 0)) = (t722 *)L_27;
		goto IL_00c4;
	}

IL_0084:
	{
		V_4 = 0;
		t1518* L_28 = V_1;
		V_9 = L_28;
		V_10 = 0;
		goto IL_00bc;
	}

IL_008f:
	{
		t1518* L_29 = V_9;
		int32_t L_30 = V_10;
		int32_t L_31 = L_30;
		V_8 = (*(t614 **)(t614 **)SZArrayLdElema(L_29, L_31));
		int32_t L_32 = p3;
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_00ab;
		}
	}
	{
		t614 * L_33 = V_8;
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_33);
		int32_t L_35 = p3;
		int32_t L_36 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_34&(int32_t)L_35))) == ((int32_t)L_36)))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00b6;
	}

IL_00ab:
	{
		t1844* L_37 = V_3;
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
		t614 * L_40 = V_8;
		ArrayElementTypeCheck (L_37, L_40);
		*((t722 **)(t722 **)SZArrayLdElema(L_37, L_39)) = (t722 *)L_40;
	}

IL_00b6:
	{
		int32_t L_41 = V_10;
		V_10 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00bc:
	{
		int32_t L_42 = V_10;
		t1518* L_43 = V_9;
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)(((t52 *)L_43)->max_length))))))
		{
			goto IL_008f;
		}
	}

IL_00c4:
	{
		t607* L_44 = p4;
		if (L_44)
		{
			goto IL_00da;
		}
	}
	{
		t1844* L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t742_TI_var);
		t722 * L_46 = m8041(NULL, L_45, NULL);
		t722 * L_47 = m9924(__this, L_46, NULL);
		return ((t614 *)Castclass(L_47, t614_TI_var));
	}

IL_00da:
	{
		t742 * L_48 = p2;
		if (L_48)
		{
			goto IL_00e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t742_TI_var);
		t742 * L_49 = m8038(NULL, NULL);
		p2 = L_49;
	}

IL_00e6:
	{
		t742 * L_50 = p2;
		int32_t L_51 = p1;
		t1844* L_52 = V_3;
		t607* L_53 = p4;
		t744* L_54 = p5;
		t722 * L_55 = (t722 *)VirtFuncInvoker4< t722 *, int32_t, t1844*, t607*, t744* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_50, L_51, L_52, L_53, L_54);
		t722 * L_56 = m9924(__this, L_55, NULL);
		return ((t614 *)Castclass(L_56, t614_TI_var));
	}
}
extern "C" t738* m9891 (t1790 * __this, t47* p0, int32_t p1, bool p2, t347 * p3, const MethodInfo* method)
{
	typedef t738* (*m9891_ftn) (t1790 *, t47*, int32_t, bool, t347 *);
	static m9891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9891_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern "C" t738* m9892 (t1790 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t738* L_1 = m9891(__this, (t47*)NULL, L_0, 0, __this, NULL);
		return L_1;
	}
}
extern TypeInfo* t742_TI_var;
extern "C" t685 * m9893 (t1790 * __this, t47* p0, int32_t p1, t742 * p2, t347 * p3, t607* p4, t744* p5, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t742_TI_var = il2cpp_codegen_type_info_from_index(2858);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t738* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t47* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t738* L_4 = m9891(__this, L_1, L_2, L_3, __this, NULL);
		V_1 = L_4;
		t738* L_5 = V_1;
		V_2 = (((int32_t)(((t52 *)L_5)->max_length)));
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		return (t685 *)NULL;
	}

IL_001e:
	{
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		t607* L_8 = p4;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		t607* L_9 = p4;
		if ((((int32_t)(((t52 *)L_9)->max_length))))
		{
			goto IL_0040;
		}
	}

IL_002c:
	{
		t347 * L_10 = p3;
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		t347 * L_11 = p3;
		t738* L_12 = V_1;
		int32_t L_13 = 0;
		t347 * L_14 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (*(t685 **)(t685 **)SZArrayLdElema(L_12, L_13)));
		if ((!(((t7*)(t347 *)L_11) == ((t7*)(t347 *)L_14))))
		{
			goto IL_0040;
		}
	}

IL_003c:
	{
		t738* L_15 = V_1;
		int32_t L_16 = 0;
		return (*(t685 **)(t685 **)SZArrayLdElema(L_15, L_16));
	}

IL_0040:
	{
		t742 * L_17 = p2;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t742_TI_var);
		t742 * L_18 = m8038(NULL, NULL);
		p2 = L_18;
	}

IL_004c:
	{
		t742 * L_19 = p2;
		int32_t L_20 = p1;
		t738* L_21 = V_1;
		t347 * L_22 = p3;
		t607* L_23 = p4;
		t744* L_24 = p5;
		t685 * L_25 = (t685 *)VirtFuncInvoker5< t685 *, int32_t, t738*, t347 *, t607*, t744* >::Invoke(8 /* System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, L_19, L_20, L_21, L_22, L_23, L_24);
		return L_25;
	}
}
extern "C" bool m9894 (t1790 * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(61 /* System.Boolean System.MonoType::IsArrayImpl() */, __this);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(62 /* System.Boolean System.MonoType::IsByRefImpl() */, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(63 /* System.Boolean System.MonoType::IsPointerImpl() */, __this);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		return G_B4_0;
	}
}
extern TypeInfo* t347_TI_var;
extern "C" bool m9895 (t1790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		bool L_0 = m6471(NULL, __this, NULL);
		return L_0;
	}
}
extern "C" bool m9896 (t1790 * __this, const MethodInfo* method)
{
	typedef bool (*m9896_ftn) (t1790 *);
	static m9896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9896_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsByRefImpl()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9897 (t1790 * __this, const MethodInfo* method)
{
	typedef bool (*m9897_ftn) (t1790 *);
	static m9897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9897_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPointerImpl()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9898 (t1790 * __this, const MethodInfo* method)
{
	typedef bool (*m9898_ftn) (t1790 *);
	static m9898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9898_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPrimitiveImpl()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t708_TI_var;
extern "C" bool m9899 (t1790 * __this, t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t347 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral1059, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t347 * L_2 = p0;
		bool L_3 = m6459(__this, L_2, NULL);
		return L_3;
	}
}
extern const Il2CppType* t438_0_0_0_var;
extern const Il2CppType* t432_0_0_0_var;
extern TypeInfo* t396_TI_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t742_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1784_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t438_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t1515_TI_var;
extern TypeInfo* t1844_TI_var;
extern TypeInfo* t1782_TI_var;
extern "C" t7 * m9900 (t1790 * __this, t47* p0, int32_t p1, t742 * p2, t7 * p3, t69* p4, t744* p5, t709 * p6, t48* p7, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t438_0_0_0_var = il2cpp_codegen_type_from_index(384);
		t432_0_0_0_var = il2cpp_codegen_type_from_index(379);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t742_TI_var = il2cpp_codegen_type_info_from_index(2858);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1784_TI_var = il2cpp_codegen_type_info_from_index(3037);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t438_TI_var = il2cpp_codegen_type_info_from_index(384);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t1515_TI_var = il2cpp_codegen_type_info_from_index(2736);
		t1844_TI_var = il2cpp_codegen_type_info_from_index(2856);
		t1782_TI_var = il2cpp_codegen_type_info_from_index(3079);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t735* V_1 = {0};
	t7 * V_2 = {0};
	t722 * V_3 = {0};
	t7 * V_4 = {0};
	t438 * V_5 = {0};
	bool V_6 = false;
	t47* V_7 = {0};
	bool V_8 = false;
	t1518* V_9 = {0};
	t7 * V_10 = {0};
	t722 * V_11 = {0};
	t736* V_12 = {0};
	int32_t V_13 = 0;
	bool V_14 = false;
	t7 * V_15 = {0};
	t616 * V_16 = {0};
	t616 * V_17 = {0};
	t738* V_18 = {0};
	t7 * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	t1844* V_22 = {0};
	t722 * V_23 = {0};
	t722 * V_24 = {0};
	t736* V_25 = {0};
	bool V_26 = false;
	t7 * V_27 = {0};
	t738* V_28 = {0};
	t7 * V_29 = {0};
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	t1844* V_32 = {0};
	t722 * V_33 = {0};
	t722 * V_34 = {0};
	t736* V_35 = {0};
	bool V_36 = false;
	t7 * V_37 = {0};
	int32_t G_B56_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B111_0 = 0;
	{
		int32_t L_0 = p1;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)512))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = p1;
		if (!((int32_t)((int32_t)L_1&(int32_t)((int32_t)13312))))
		{
			goto IL_001d;
		}
	}
	{
		t396 * L_2 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_2, (t47*) &_stringLiteral2354, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		goto IL_002d;
	}

IL_001f:
	{
		t47* L_3 = p0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		t708 * L_4 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_4, (t47*) &_stringLiteral257, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		int32_t L_5 = p1;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)1024))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_6 = p1;
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)2048))))
		{
			goto IL_004f;
		}
	}
	{
		t396 * L_7 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_7, (t47*) &_stringLiteral2355, (t47*) &_stringLiteral2354, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004f:
	{
		int32_t L_8 = p1;
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)4096))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_9 = p1;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)8192))))
		{
			goto IL_0071;
		}
	}
	{
		t396 * L_10 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_10, (t47*) &_stringLiteral2356, (t47*) &_stringLiteral2354, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0071:
	{
		int32_t L_11 = p1;
		if (!((int32_t)((int32_t)L_11&(int32_t)((int32_t)256))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_12 = p1;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)2048))))
		{
			goto IL_0093;
		}
	}
	{
		t396 * L_13 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_13, (t47*) &_stringLiteral2357, (t47*) &_stringLiteral2354, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0093:
	{
		int32_t L_14 = p1;
		if (!((int32_t)((int32_t)L_14&(int32_t)((int32_t)8192))))
		{
			goto IL_00ac;
		}
	}
	{
		t396 * L_15 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_15, (t47*) &_stringLiteral2358, (t47*) &_stringLiteral2354, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_00ac:
	{
		t48* L_16 = p7;
		if (!L_16)
		{
			goto IL_00c9;
		}
	}
	{
		t69* L_17 = p4;
		if (!L_17)
		{
			goto IL_00be;
		}
	}
	{
		t69* L_18 = p4;
		t48* L_19 = p7;
		if ((((int32_t)(((int32_t)(((t52 *)L_18)->max_length)))) >= ((int32_t)(((int32_t)(((t52 *)L_19)->max_length))))))
		{
			goto IL_00c9;
		}
	}

IL_00be:
	{
		t396 * L_20 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_20, (t47*) &_stringLiteral2359, NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_00c9:
	{
		int32_t L_21 = p1;
		if (((int32_t)((int32_t)L_21&(int32_t)((int32_t)16128))))
		{
			goto IL_00e2;
		}
	}
	{
		t396 * L_22 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_22, (t47*) &_stringLiteral2360, (t47*) &_stringLiteral2354, NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00e2:
	{
		int32_t L_23 = p1;
		if (((int32_t)((int32_t)L_23&(int32_t)((int32_t)48))))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_24 = p1;
		p1 = ((int32_t)((int32_t)L_24|(int32_t)((int32_t)16)));
	}

IL_00f0:
	{
		int32_t L_25 = p1;
		if (((int32_t)((int32_t)L_25&(int32_t)((int32_t)12))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_26 = p1;
		p1 = ((int32_t)((int32_t)L_26|(int32_t)((int32_t)12)));
	}

IL_00fe:
	{
		t742 * L_27 = p2;
		if (L_27)
		{
			goto IL_010a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t742_TI_var);
		t742 * L_28 = m8038(NULL, NULL);
		p2 = L_28;
	}

IL_010a:
	{
		int32_t L_29 = p1;
		if (!((int32_t)((int32_t)L_29&(int32_t)((int32_t)512))))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_30 = p1;
		p1 = ((int32_t)((int32_t)L_30|(int32_t)2));
		int32_t L_31 = p1;
		t735* L_32 = (t735*)VirtFuncInvoker1< t735*, int32_t >::Invoke(72 /* System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags) */, __this, L_31);
		V_1 = L_32;
		V_2 = NULL;
		t742 * L_33 = p2;
		int32_t L_34 = p1;
		t735* L_35 = V_1;
		t744* L_36 = p5;
		t709 * L_37 = p6;
		t48* L_38 = p7;
		t722 * L_39 = (t722 *)VirtFuncInvoker7< t722 *, int32_t, t1844*, t69**, t744*, t709 *, t48*, t7 ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_33, L_34, (t1844*)(t1844*)L_35, (&p4), L_36, L_37, L_38, (&V_2));
		V_3 = L_39;
		t722 * L_40 = V_3;
		if (L_40)
		{
			goto IL_0168;
		}
	}
	{
		bool L_41 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, __this);
		if (!L_41)
		{
			goto IL_014d;
		}
	}
	{
		t69* L_42 = p4;
		if (L_42)
		{
			goto IL_014d;
		}
	}
	{
		t7 * L_43 = m9383(NULL, __this, NULL);
		return L_43;
	}

IL_014d:
	{
		t47* L_44 = (t47*)VirtFuncInvoker0< t47* >::Invoke(18 /* System.String System.MonoType::get_FullName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_45 = m205(NULL, (t47*) &_stringLiteral2361, L_44, (t47*) &_stringLiteral1537, NULL);
		t1784 * L_46 = (t1784 *)il2cpp_codegen_object_new (t1784_TI_var);
		m9853(L_46, L_45, NULL);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0168:
	{
		t722 * L_47 = V_3;
		t7 * L_48 = p3;
		int32_t L_49 = p1;
		t742 * L_50 = p2;
		t69* L_51 = p4;
		t709 * L_52 = p6;
		t7 * L_53 = (t7 *)VirtFuncInvoker5< t7 *, t7 *, int32_t, t742 *, t69*, t709 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_47, L_48, L_49, L_50, L_51, L_52);
		V_4 = L_53;
		t742 * L_54 = p2;
		t7 * L_55 = V_2;
		VirtActionInvoker2< t69**, t7 * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_54, (&p4), L_55);
		t7 * L_56 = V_4;
		return L_56;
	}

IL_0184:
	{
		t47* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_58 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		bool L_59 = m185(NULL, L_57, L_58, NULL);
		if (!L_59)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_60 = m1613(NULL, LoadTypeToken(t438_0_0_0_var), NULL);
		bool L_61 = m5737(NULL, __this, L_60, NULL);
		if (!L_61)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_62 = m1613(NULL, LoadTypeToken(t438_0_0_0_var), NULL);
		t529 * L_63 = m5734(NULL, __this, L_62, NULL);
		V_5 = ((t438 *)Castclass(L_63, t438_TI_var));
		t438 * L_64 = V_5;
		t47* L_65 = m6514(L_64, NULL);
		p0 = L_65;
	}

IL_01c5:
	{
		int32_t L_66 = p1;
		V_6 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_66&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_7 = (t47*)NULL;
		V_8 = 0;
		int32_t L_67 = p1;
		if (!((int32_t)((int32_t)L_67&(int32_t)((int32_t)256))))
		{
			goto IL_02ea;
		}
	}
	{
		t47* L_68 = p0;
		int32_t L_69 = p1;
		bool L_70 = V_6;
		t1518* L_71 = m9888(__this, L_68, L_69, L_70, __this, NULL);
		V_9 = L_71;
		V_10 = NULL;
		t69* L_72 = p4;
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		p4 = ((t69*)SZArrayNew(t69_TI_var, 0));
	}

IL_0200:
	{
		t742 * L_73 = p2;
		int32_t L_74 = p1;
		t1518* L_75 = V_9;
		t744* L_76 = p5;
		t709 * L_77 = p6;
		t48* L_78 = p7;
		t722 * L_79 = (t722 *)VirtFuncInvoker7< t722 *, int32_t, t1844*, t69**, t744*, t709 *, t48*, t7 ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_73, L_74, (t1844*)(t1844*)L_75, (&p4), L_76, L_77, L_78, (&V_10));
		V_11 = L_79;
		t722 * L_80 = V_11;
		if (L_80)
		{
			goto IL_024b;
		}
	}
	{
		t1518* L_81 = V_9;
		if ((((int32_t)(((int32_t)(((t52 *)L_81)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0234;
		}
	}
	{
		t47* L_82 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_83 = m205(NULL, (t47*) &_stringLiteral2362, L_82, (t47*) &_stringLiteral2363, NULL);
		V_7 = L_83;
		goto IL_0246;
	}

IL_0234:
	{
		t47* L_84 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_85 = m205(NULL, (t47*) &_stringLiteral2364, L_84, (t47*) &_stringLiteral103, NULL);
		V_7 = L_85;
	}

IL_0246:
	{
		goto IL_02ea;
	}

IL_024b:
	{
		t722 * L_86 = V_11;
		t736* L_87 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_86);
		V_12 = L_87;
		V_13 = 0;
		goto IL_0292;
	}

IL_0259:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1515_TI_var);
		t1515 * L_88 = ((t1515_SFs*)t1515_TI_var->static_fields)->f0;
		t69* L_89 = p4;
		int32_t L_90 = V_13;
		int32_t L_91 = L_90;
		if ((!(((t7*)(t1515 *)L_88) == ((t7*)(t7 *)(*(t7 **)(t7 **)SZArrayLdElema(L_89, L_91))))))
		{
			goto IL_028c;
		}
	}
	{
		t736* L_92 = V_12;
		int32_t L_93 = V_13;
		int32_t L_94 = L_93;
		int32_t L_95 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, (*(t733 **)(t733 **)SZArrayLdElema(L_92, L_94)));
		if ((((int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)4096)))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_028c;
		}
	}
	{
		t396 * L_96 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_96, (t47*) &_stringLiteral2365, (t47*) &_stringLiteral1281, NULL);
		il2cpp_codegen_raise_exception(L_96);
	}

IL_028c:
	{
		int32_t L_97 = V_13;
		V_13 = ((int32_t)((int32_t)L_97+(int32_t)1));
	}

IL_0292:
	{
		int32_t L_98 = V_13;
		t736* L_99 = V_12;
		if ((((int32_t)L_98) < ((int32_t)(((int32_t)(((t52 *)L_99)->max_length))))))
		{
			goto IL_0259;
		}
	}
	{
		t736* L_100 = V_12;
		if ((((int32_t)(((int32_t)(((t52 *)L_100)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_02bb;
		}
	}
	{
		t736* L_101 = V_12;
		t736* L_102 = V_12;
		int32_t L_103 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_102)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_104 = m1613(NULL, LoadTypeToken(t432_0_0_0_var), NULL);
		bool L_105 = m5736(NULL, (*(t733 **)(t733 **)SZArrayLdElema(L_101, L_103)), L_104, NULL);
		G_B56_0 = ((int32_t)(L_105));
		goto IL_02bc;
	}

IL_02bb:
	{
		G_B56_0 = 0;
	}

IL_02bc:
	{
		V_14 = G_B56_0;
		bool L_106 = V_14;
		if (!L_106)
		{
			goto IL_02cc;
		}
	}
	{
		t722 * L_107 = V_11;
		m9925(__this, (&p4), L_107, NULL);
	}

IL_02cc:
	{
		t722 * L_108 = V_11;
		t7 * L_109 = p3;
		int32_t L_110 = p1;
		t742 * L_111 = p2;
		t69* L_112 = p4;
		t709 * L_113 = p6;
		t7 * L_114 = (t7 *)VirtFuncInvoker5< t7 *, t7 *, int32_t, t742 *, t69*, t709 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_108, L_109, L_110, L_111, L_112, L_113);
		V_15 = L_114;
		t742 * L_115 = p2;
		t7 * L_116 = V_10;
		VirtActionInvoker2< t69**, t7 * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_115, (&p4), L_116);
		t7 * L_117 = V_15;
		return L_117;
	}

IL_02ea:
	{
		int32_t L_118 = p1;
		if (!((int32_t)((int32_t)L_118&(int32_t)((int32_t)1024))))
		{
			goto IL_0319;
		}
	}
	{
		t47* L_119 = p0;
		int32_t L_120 = p1;
		t616 * L_121 = (t616 *)VirtFuncInvoker2< t616 *, t47*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags) */, __this, L_119, L_120);
		V_16 = L_121;
		t616 * L_122 = V_16;
		if (!L_122)
		{
			goto IL_030b;
		}
	}
	{
		t616 * L_123 = V_16;
		t7 * L_124 = p3;
		t7 * L_125 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_123, L_124);
		return L_125;
	}

IL_030b:
	{
		int32_t L_126 = p1;
		if (((int32_t)((int32_t)L_126&(int32_t)((int32_t)4096))))
		{
			goto IL_0317;
		}
	}
	{
		V_8 = 1;
	}

IL_0317:
	{
		goto IL_0375;
	}

IL_0319:
	{
		int32_t L_127 = p1;
		if (!((int32_t)((int32_t)L_127&(int32_t)((int32_t)2048))))
		{
			goto IL_0375;
		}
	}
	{
		t47* L_128 = p0;
		int32_t L_129 = p1;
		t616 * L_130 = (t616 *)VirtFuncInvoker2< t616 *, t47*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags) */, __this, L_128, L_129);
		V_17 = L_130;
		t616 * L_131 = V_17;
		if (!L_131)
		{
			goto IL_0369;
		}
	}
	{
		t69* L_132 = p4;
		if (L_132)
		{
			goto IL_033f;
		}
	}
	{
		t708 * L_133 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_133, (t47*) &_stringLiteral2366, NULL);
		il2cpp_codegen_raise_exception(L_133);
	}

IL_033f:
	{
		t69* L_134 = p4;
		if (!L_134)
		{
			goto IL_034a;
		}
	}
	{
		t69* L_135 = p4;
		if ((((int32_t)(((int32_t)(((t52 *)L_135)->max_length)))) == ((int32_t)1)))
		{
			goto IL_035a;
		}
	}

IL_034a:
	{
		t396 * L_136 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_136, (t47*) &_stringLiteral2367, (t47*) &_stringLiteral2354, NULL);
		il2cpp_codegen_raise_exception(L_136);
	}

IL_035a:
	{
		t616 * L_137 = V_17;
		t7 * L_138 = p3;
		t69* L_139 = p4;
		int32_t L_140 = 0;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_137, L_138, (*(t7 **)(t7 **)SZArrayLdElema(L_139, L_140)));
		return NULL;
	}

IL_0369:
	{
		int32_t L_141 = p1;
		if (((int32_t)((int32_t)L_141&(int32_t)((int32_t)8192))))
		{
			goto IL_0375;
		}
	}
	{
		V_8 = 1;
	}

IL_0375:
	{
		int32_t L_142 = p1;
		if (!((int32_t)((int32_t)L_142&(int32_t)((int32_t)4096))))
		{
			goto IL_0472;
		}
	}
	{
		t47* L_143 = p0;
		int32_t L_144 = p1;
		bool L_145 = V_6;
		t738* L_146 = m9891(__this, L_143, L_144, L_145, __this, NULL);
		V_18 = L_146;
		V_19 = NULL;
		V_21 = 0;
		V_20 = 0;
		goto IL_03b2;
	}

IL_0399:
	{
		t738* L_147 = V_18;
		int32_t L_148 = V_20;
		int32_t L_149 = L_148;
		t614 * L_150 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, (*(t685 **)(t685 **)SZArrayLdElema(L_147, L_149)), 1);
		if (!L_150)
		{
			goto IL_03ac;
		}
	}
	{
		int32_t L_151 = V_21;
		V_21 = ((int32_t)((int32_t)L_151+(int32_t)1));
	}

IL_03ac:
	{
		int32_t L_152 = V_20;
		V_20 = ((int32_t)((int32_t)L_152+(int32_t)1));
	}

IL_03b2:
	{
		int32_t L_153 = V_20;
		t738* L_154 = V_18;
		if ((((int32_t)L_153) < ((int32_t)(((int32_t)(((t52 *)L_154)->max_length))))))
		{
			goto IL_0399;
		}
	}
	{
		int32_t L_155 = V_21;
		V_22 = ((t1844*)SZArrayNew(t1844_TI_var, L_155));
		V_21 = 0;
		V_20 = 0;
		goto IL_03ee;
	}

IL_03cb:
	{
		t738* L_156 = V_18;
		int32_t L_157 = V_20;
		int32_t L_158 = L_157;
		t614 * L_159 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, (*(t685 **)(t685 **)SZArrayLdElema(L_156, L_158)), 1);
		V_23 = L_159;
		t722 * L_160 = V_23;
		if (!L_160)
		{
			goto IL_03e8;
		}
	}
	{
		t1844* L_161 = V_22;
		int32_t L_162 = V_21;
		int32_t L_163 = L_162;
		V_21 = ((int32_t)((int32_t)L_163+(int32_t)1));
		t722 * L_164 = V_23;
		ArrayElementTypeCheck (L_161, L_164);
		*((t722 **)(t722 **)SZArrayLdElema(L_161, L_163)) = (t722 *)L_164;
	}

IL_03e8:
	{
		int32_t L_165 = V_20;
		V_20 = ((int32_t)((int32_t)L_165+(int32_t)1));
	}

IL_03ee:
	{
		int32_t L_166 = V_20;
		t738* L_167 = V_18;
		if ((((int32_t)L_166) < ((int32_t)(((int32_t)(((t52 *)L_167)->max_length))))))
		{
			goto IL_03cb;
		}
	}
	{
		t742 * L_168 = p2;
		int32_t L_169 = p1;
		t1844* L_170 = V_22;
		t744* L_171 = p5;
		t709 * L_172 = p6;
		t48* L_173 = p7;
		t722 * L_174 = (t722 *)VirtFuncInvoker7< t722 *, int32_t, t1844*, t69**, t744*, t709 *, t48*, t7 ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_168, L_169, L_170, (&p4), L_171, L_172, L_173, (&V_19));
		V_24 = L_174;
		t722 * L_175 = V_24;
		if (L_175)
		{
			goto IL_0414;
		}
	}
	{
		V_8 = 1;
		goto IL_046d;
	}

IL_0414:
	{
		t722 * L_176 = V_24;
		t736* L_177 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_176);
		V_25 = L_177;
		t736* L_178 = V_25;
		if ((((int32_t)(((int32_t)(((t52 *)L_178)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_043e;
		}
	}
	{
		t736* L_179 = V_25;
		t736* L_180 = V_25;
		int32_t L_181 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_180)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_182 = m1613(NULL, LoadTypeToken(t432_0_0_0_var), NULL);
		bool L_183 = m5736(NULL, (*(t733 **)(t733 **)SZArrayLdElema(L_179, L_181)), L_182, NULL);
		G_B91_0 = ((int32_t)(L_183));
		goto IL_043f;
	}

IL_043e:
	{
		G_B91_0 = 0;
	}

IL_043f:
	{
		V_26 = G_B91_0;
		bool L_184 = V_26;
		if (!L_184)
		{
			goto IL_044f;
		}
	}
	{
		t722 * L_185 = V_24;
		m9925(__this, (&p4), L_185, NULL);
	}

IL_044f:
	{
		t722 * L_186 = V_24;
		t7 * L_187 = p3;
		int32_t L_188 = p1;
		t742 * L_189 = p2;
		t69* L_190 = p4;
		t709 * L_191 = p6;
		t7 * L_192 = (t7 *)VirtFuncInvoker5< t7 *, t7 *, int32_t, t742 *, t69*, t709 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_186, L_187, L_188, L_189, L_190, L_191);
		V_27 = L_192;
		t742 * L_193 = p2;
		t7 * L_194 = V_19;
		VirtActionInvoker2< t69**, t7 * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_193, (&p4), L_194);
		t7 * L_195 = V_27;
		return L_195;
	}

IL_046d:
	{
		goto IL_056a;
	}

IL_0472:
	{
		int32_t L_196 = p1;
		if (!((int32_t)((int32_t)L_196&(int32_t)((int32_t)8192))))
		{
			goto IL_056a;
		}
	}
	{
		t47* L_197 = p0;
		int32_t L_198 = p1;
		bool L_199 = V_6;
		t738* L_200 = m9891(__this, L_197, L_198, L_199, __this, NULL);
		V_28 = L_200;
		V_29 = NULL;
		V_31 = 0;
		V_30 = 0;
		goto IL_04af;
	}

IL_0496:
	{
		t738* L_201 = V_28;
		int32_t L_202 = V_30;
		int32_t L_203 = L_202;
		t614 * L_204 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, (*(t685 **)(t685 **)SZArrayLdElema(L_201, L_203)), 1);
		if (!L_204)
		{
			goto IL_04a9;
		}
	}
	{
		int32_t L_205 = V_31;
		V_31 = ((int32_t)((int32_t)L_205+(int32_t)1));
	}

IL_04a9:
	{
		int32_t L_206 = V_30;
		V_30 = ((int32_t)((int32_t)L_206+(int32_t)1));
	}

IL_04af:
	{
		int32_t L_207 = V_30;
		t738* L_208 = V_28;
		if ((((int32_t)L_207) < ((int32_t)(((int32_t)(((t52 *)L_208)->max_length))))))
		{
			goto IL_0496;
		}
	}
	{
		int32_t L_209 = V_31;
		V_32 = ((t1844*)SZArrayNew(t1844_TI_var, L_209));
		V_31 = 0;
		V_30 = 0;
		goto IL_04eb;
	}

IL_04c8:
	{
		t738* L_210 = V_28;
		int32_t L_211 = V_30;
		int32_t L_212 = L_211;
		t614 * L_213 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, (*(t685 **)(t685 **)SZArrayLdElema(L_210, L_212)), 1);
		V_33 = L_213;
		t722 * L_214 = V_33;
		if (!L_214)
		{
			goto IL_04e5;
		}
	}
	{
		t1844* L_215 = V_32;
		int32_t L_216 = V_31;
		int32_t L_217 = L_216;
		V_31 = ((int32_t)((int32_t)L_217+(int32_t)1));
		t722 * L_218 = V_33;
		ArrayElementTypeCheck (L_215, L_218);
		*((t722 **)(t722 **)SZArrayLdElema(L_215, L_217)) = (t722 *)L_218;
	}

IL_04e5:
	{
		int32_t L_219 = V_30;
		V_30 = ((int32_t)((int32_t)L_219+(int32_t)1));
	}

IL_04eb:
	{
		int32_t L_220 = V_30;
		t738* L_221 = V_28;
		if ((((int32_t)L_220) < ((int32_t)(((int32_t)(((t52 *)L_221)->max_length))))))
		{
			goto IL_04c8;
		}
	}
	{
		t742 * L_222 = p2;
		int32_t L_223 = p1;
		t1844* L_224 = V_32;
		t744* L_225 = p5;
		t709 * L_226 = p6;
		t48* L_227 = p7;
		t722 * L_228 = (t722 *)VirtFuncInvoker7< t722 *, int32_t, t1844*, t69**, t744*, t709 *, t48*, t7 ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_222, L_223, L_224, (&p4), L_225, L_226, L_227, (&V_29));
		V_34 = L_228;
		t722 * L_229 = V_34;
		if (L_229)
		{
			goto IL_0511;
		}
	}
	{
		V_8 = 1;
		goto IL_056a;
	}

IL_0511:
	{
		t722 * L_230 = V_34;
		t736* L_231 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_230);
		V_35 = L_231;
		t736* L_232 = V_35;
		if ((((int32_t)(((int32_t)(((t52 *)L_232)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_053b;
		}
	}
	{
		t736* L_233 = V_35;
		t736* L_234 = V_35;
		int32_t L_235 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_234)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_236 = m1613(NULL, LoadTypeToken(t432_0_0_0_var), NULL);
		bool L_237 = m5736(NULL, (*(t733 **)(t733 **)SZArrayLdElema(L_233, L_235)), L_236, NULL);
		G_B111_0 = ((int32_t)(L_237));
		goto IL_053c;
	}

IL_053b:
	{
		G_B111_0 = 0;
	}

IL_053c:
	{
		V_36 = G_B111_0;
		bool L_238 = V_36;
		if (!L_238)
		{
			goto IL_054c;
		}
	}
	{
		t722 * L_239 = V_34;
		m9925(__this, (&p4), L_239, NULL);
	}

IL_054c:
	{
		t722 * L_240 = V_34;
		t7 * L_241 = p3;
		int32_t L_242 = p1;
		t742 * L_243 = p2;
		t69* L_244 = p4;
		t709 * L_245 = p6;
		t7 * L_246 = (t7 *)VirtFuncInvoker5< t7 *, t7 *, int32_t, t742 *, t69*, t709 * >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_240, L_241, L_242, L_243, L_244, L_245);
		V_37 = L_246;
		t742 * L_247 = p2;
		t7 * L_248 = V_29;
		VirtActionInvoker2< t69**, t7 * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_247, (&p4), L_248);
		t7 * L_249 = V_37;
		return L_249;
	}

IL_056a:
	{
		t47* L_250 = V_7;
		if (!L_250)
		{
			goto IL_0576;
		}
	}
	{
		t47* L_251 = V_7;
		t1784 * L_252 = (t1784 *)il2cpp_codegen_object_new (t1784_TI_var);
		m9853(L_252, L_251, NULL);
		il2cpp_codegen_raise_exception(L_252);
	}

IL_0576:
	{
		bool L_253 = V_8;
		if (!L_253)
		{
			goto IL_0590;
		}
	}
	{
		t47* L_254 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_255 = m205(NULL, (t47*) &_stringLiteral2368, L_254, (t47*) &_stringLiteral103, NULL);
		t1782 * L_256 = (t1782 *)il2cpp_codegen_object_new (t1782_TI_var);
		m9843(L_256, L_255, NULL);
		il2cpp_codegen_raise_exception(L_256);
	}

IL_0590:
	{
		return NULL;
	}
}
extern "C" t347 * m9901 (t1790 * __this, const MethodInfo* method)
{
	typedef t347 * (*m9901_ftn) (t1790 *);
	static m9901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9901_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetElementType()");
	return _il2cpp_icall_func(__this);
}
extern "C" t347 * m9902 (t1790 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" t1105 * m9903 (t1790 * __this, const MethodInfo* method)
{
	typedef t1105 * (*m9903_ftn) (t1790 *);
	static m9903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9903_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Assembly()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47* m9904 (t1790 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m9905(__this, 1, 1, NULL);
		return L_0;
	}
}
extern "C" t47* m9905 (t1790 * __this, bool p0, bool p1, const MethodInfo* method)
{
	typedef t47* (*m9905_ftn) (t1790 *, bool, bool);
	static m9905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9905_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::getFullName(System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t347 * m9906 (t1790 * __this, const MethodInfo* method)
{
	typedef t347 * (*m9906_ftn) (t1790 *);
	static m9906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9906_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_BaseType()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t1789_TI_var;
extern "C" t47* m9907 (t1790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1789_TI_var = il2cpp_codegen_type_info_from_index(3078);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t47* V_1 = {0};
	{
		t1789 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1789 * L_1 = (t1789 *)il2cpp_codegen_object_new (t1789_TI_var);
		m9875(L_1, NULL);
		__this->f8 = L_1;
	}

IL_0013:
	{
		t1789 * L_2 = (__this->f8);
		t47* L_3 = (L_2->f0);
		t47* L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t1789 * L_5 = (__this->f8);
		t47* L_6 = m9905(__this, 1, 0, NULL);
		t47* L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t47* L_8 = V_1;
		V_0 = L_8;
	}

IL_0039:
	{
		t47* L_9 = V_0;
		return L_9;
	}
}
extern TypeInfo* t1787_TI_var;
extern "C" bool m9908 (t1790 * __this, t347 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		s_Il2CppMethodIntialized = true;
	}
	{
		t347 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		bool L_2 = m9869(NULL, __this, L_0, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t1787_TI_var;
extern "C" t69* m9909 (t1790 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_1 = m9868(NULL, __this, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1787_TI_var;
extern "C" t69* m9910 (t1790 * __this, t347 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1787_TI_var = il2cpp_codegen_type_info_from_index(2704);
		s_Il2CppMethodIntialized = true;
	}
	{
		t347 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral1027, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t347 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1787_TI_var);
		t69* L_4 = m9867(NULL, __this, L_2, L_3, NULL);
		return L_4;
	}
}
extern "C" int32_t m9911 (t1790 * __this, const MethodInfo* method)
{
	{
		t347 * L_0 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.MonoType::get_DeclaringType() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.MonoType::get_IsGenericParameter() */, __this);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(((int32_t)128));
	}

IL_0016:
	{
		return (int32_t)(((int32_t)32));
	}
}
extern "C" t47* m9912 (t1790 * __this, const MethodInfo* method)
{
	typedef t47* (*m9912_ftn) (t1790 *);
	static m9912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9912_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Name()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47* m9913 (t1790 * __this, const MethodInfo* method)
{
	typedef t47* (*m9913_ftn) (t1790 *);
	static m9913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9913_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Namespace()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1490 * m9914 (t1790 * __this, const MethodInfo* method)
{
	typedef t1490 * (*m9914_ftn) (t1790 *);
	static m9914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9914_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Module()");
	return _il2cpp_icall_func(__this);
}
extern "C" t347 * m9915 (t1790 * __this, const MethodInfo* method)
{
	typedef t347 * (*m9915_ftn) (t1790 *);
	static m9915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9915_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_DeclaringType()");
	return _il2cpp_icall_func(__this);
}
extern "C" t347 * m9916 (t1790 * __this, const MethodInfo* method)
{
	{
		t347 * L_0 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.MonoType::get_DeclaringType() */, __this);
		return L_0;
	}
}
extern "C" t359  m9917 (t1790 * __this, const MethodInfo* method)
{
	{
		t359  L_0 = (((t347 *)__this)->f1);
		return L_0;
	}
}
extern "C" void m9918 (t1790 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10141(NULL, __this, L_0, L_1, NULL);
		return;
	}
}
extern "C" t47* m9919 (t1790 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m9905(__this, 0, 0, NULL);
		return L_0;
	}
}
extern "C" t607* m9920 (t1790 * __this, const MethodInfo* method)
{
	typedef t607* (*m9920_ftn) (t1790 *);
	static m9920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9920_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m9921 (t1790 * __this, const MethodInfo* method)
{
	t347 * V_0 = {0};
	t607* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.MonoType::get_IsGenericParameter() */, __this);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, __this);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		t607* L_2 = (t607*)VirtFuncInvoker0< t607* >::Invoke(74 /* System.Type[] System.MonoType::GetGenericArguments() */, __this);
		V_1 = L_2;
		V_2 = 0;
		goto IL_002f;
	}

IL_001d:
	{
		t607* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t347 **)(t347 **)SZArrayLdElema(L_3, L_5));
		t347 * L_6 = V_0;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(75 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_6);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		t607* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t52 *)L_10)->max_length))))))
		{
			goto IL_001d;
		}
	}

IL_0035:
	{
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, __this);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		t347 * L_12 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.MonoType::GetElementType() */, __this);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(75 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_12);
		return L_13;
	}

IL_0049:
	{
		return 0;
	}
}
extern "C" bool m9922 (t1790 * __this, const MethodInfo* method)
{
	typedef bool (*m9922_ftn) (t1790 *);
	static m9922_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9922_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t1098_TI_var;
extern "C" t347 * m9923 (t1790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	{
		t347 * L_0 = m6484(__this, NULL);
		V_0 = L_0;
		t347 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		t1098 * L_2 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4508(L_2, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		t347 * L_3 = V_0;
		return L_3;
	}
}
extern "C" t722 * m9924 (t1790 * __this, t722 * p0, const MethodInfo* method)
{
	{
		t722 * L_0 = p0;
		return L_0;
	}
}
extern TypeInfo* t69_TI_var;
extern "C" void m9925 (t1790 * __this, t69** p0, t722 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t736* V_0 = {0};
	t69* V_1 = {0};
	t52 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t722 * L_0 = p1;
		t736* L_1 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		t736* L_2 = V_0;
		V_1 = ((t69*)SZArrayNew(t69_TI_var, (((int32_t)(((t52 *)L_2)->max_length)))));
		t736* L_3 = V_0;
		t736* L_4 = V_0;
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_4)->max_length)))-(int32_t)1));
		t347 * L_6 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(t733 **)(t733 **)SZArrayLdElema(L_3, L_5)));
		t347 * L_7 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_6);
		t69** L_8 = p0;
		t736* L_9 = V_0;
		t52 * L_10 = m6374(NULL, L_7, ((int32_t)((int32_t)(((int32_t)(((t52 *)(*((t69**)L_8)))->max_length)))-(int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_9)->max_length)))-(int32_t)1)))), NULL);
		V_2 = L_10;
		V_3 = 0;
		V_4 = 0;
		goto IL_0062;
	}

IL_0038:
	{
		int32_t L_11 = V_4;
		t736* L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_12)->max_length)))-(int32_t)1)))))
		{
			goto IL_004c;
		}
	}
	{
		t69* L_13 = V_1;
		int32_t L_14 = V_4;
		t69** L_15 = p0;
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		ArrayElementTypeCheck (L_13, (*(t7 **)(t7 **)SZArrayLdElema((*((t69**)L_15)), L_17)));
		*((t7 **)(t7 **)SZArrayLdElema(L_13, L_14)) = (t7 *)(*(t7 **)(t7 **)SZArrayLdElema((*((t69**)L_15)), L_17));
		goto IL_005c;
	}

IL_004c:
	{
		t52 * L_18 = V_2;
		t69** L_19 = p0;
		int32_t L_20 = V_4;
		int32_t L_21 = L_20;
		int32_t L_22 = V_3;
		m4506(L_18, (*(t7 **)(t7 **)SZArrayLdElema((*((t69**)L_19)), L_21)), L_22, NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_25 = V_4;
		t69** L_26 = p0;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((t52 *)(*((t69**)L_26)))->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		t69* L_27 = V_1;
		t736* L_28 = V_0;
		t52 * L_29 = V_2;
		ArrayElementTypeCheck (L_27, L_29);
		*((t7 **)(t7 **)SZArrayLdElema(L_27, ((int32_t)((int32_t)(((int32_t)(((t52 *)L_28)->max_length)))-(int32_t)1)))) = (t7 *)L_29;
		t69** L_30 = p0;
		t69* L_31 = V_1;
		*((t7 **)(L_30)) = (t7 *)L_31;
		return;
	}
}
#include "t1791.h"
#ifndef _MSC_VER
#else
#endif
#include "t1791MD.h"

#include "t1330MD.h"
#include "t1128MD.h"


extern "C" void m9926 (t1791 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2369, NULL);
		m4638(__this, L_0, NULL);
		return;
	}
}
extern "C" void m9927 (t1791 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4638(__this, L_0, NULL);
		return;
	}
}
extern "C" void m9928 (t1791 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		return;
	}
}
#include "t1792.h"
#ifndef _MSC_VER
#else
#endif
#include "t1792MD.h"



extern "C" void m9929 (t1792 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t1106.h"
#ifndef _MSC_VER
#else
#endif
#include "t1106MD.h"

#include "t65MD.h"


extern "C" void m9930 (t1106 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2370, NULL);
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2147467263), NULL);
		return;
	}
}
extern "C" void m4545 (t1106 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2147467263), NULL);
		return;
	}
}
extern "C" void m9931 (t1106 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		return;
	}
}
#include "t61.h"
#ifndef _MSC_VER
#else
#endif
#include "t61MD.h"



extern "C" void m165 (t61 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2371, NULL);
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233067), NULL);
		return;
	}
}
extern "C" void m4519 (t61 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233067), NULL);
		return;
	}
}
extern "C" void m9932 (t61 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		return;
	}
}
#include "t64.h"
#ifndef _MSC_VER
#else
#endif
#include "t64MD.h"



extern "C" void m9933 (t64 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2372, NULL);
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
extern "C" void m3222 (t64 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
extern "C" void m9934 (t64 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		return;
	}
}
#include "t1793.h"
#ifndef _MSC_VER
#else
#endif
#include "t1793MD.h"

#include "t214.h"
#include "t1436.h"
#include "t336.h"
#include "t336MD.h"
#include "t1436MD.h"


extern "C" void m9935 (t1793 * __this, const MethodInfo* method)
{
	{
		__this->f2 = (-1);
		__this->f10 = 1;
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t1018_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m9936 (t7 * __this , t47* p0, bool* p1, bool p2, int32_t* p3, int32_t* p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t1018* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		V_0 = ((t1018*)SZArrayNew(t1018_TI_var, 3));
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_007c;
	}

IL_0015:
	{
		t47* L_0 = p0;
		int32_t L_1 = V_4;
		uint16_t L_2 = m1754(L_0, L_1, NULL);
		V_5 = L_2;
		uint16_t L_3 = V_5;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		uint16_t L_5 = V_3;
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0033;
		}
	}
	{
		uint16_t L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		uint16_t L_8 = V_3;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		uint16_t L_9 = V_5;
		V_3 = L_9;
		goto IL_003d;
	}

IL_003b:
	{
		V_3 = 0;
	}

IL_003d:
	{
		goto IL_0076;
	}

IL_003f:
	{
		uint16_t L_10 = V_3;
		if (L_10)
		{
			goto IL_0076;
		}
	}
	{
		t47* L_11 = p0;
		int32_t L_12 = V_4;
		uint16_t L_13 = m1754(L_11, L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_14 = V_4;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		t47* L_15 = p0;
		int32_t L_16 = V_4;
		uint16_t L_17 = m1754(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)), NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)92))))
		{
			goto IL_0076;
		}
	}

IL_0060:
	{
		t1018* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)) = (int32_t)((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = V_4;
		V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0086;
	}

IL_0076:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_26 = V_4;
		t47* L_27 = p0;
		int32_t L_28 = m1741(L_27, NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0015;
		}
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		if (L_29)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_30 = p3;
		*((int32_t*)(L_30)) = (int32_t)0;
		int32_t* L_31 = p4;
		t47* L_32 = p0;
		int32_t L_33 = m1741(L_32, NULL);
		*((int32_t*)(L_31)) = (int32_t)L_33;
		return;
	}

IL_0096:
	{
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		bool* L_35 = p1;
		if ((*((int8_t*)L_35)))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_36 = p2;
		if (!L_36)
		{
			goto IL_00ab;
		}
	}

IL_00a1:
	{
		int32_t* L_37 = p3;
		*((int32_t*)(L_37)) = (int32_t)0;
		int32_t* L_38 = p4;
		t1018* L_39 = V_0;
		int32_t L_40 = 0;
		*((int32_t*)(L_38)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_39, L_40));
		return;
	}

IL_00ab:
	{
		t1018* L_41 = V_0;
		int32_t L_42 = 0;
		t47* L_43 = p0;
		int32_t L_44 = m1741(L_43, NULL);
		if ((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_41, L_42))+(int32_t)1))) >= ((int32_t)L_44)))
		{
			goto IL_00cf;
		}
	}
	{
		bool* L_45 = p1;
		*((int8_t*)(L_45)) = (int8_t)1;
		int32_t* L_46 = p3;
		t1018* L_47 = V_0;
		int32_t L_48 = 0;
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48))+(int32_t)1));
		int32_t* L_49 = p4;
		t47* L_50 = p0;
		int32_t L_51 = m1741(L_50, NULL);
		int32_t* L_52 = p3;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51-(int32_t)(*((int32_t*)L_52))));
		return;
	}

IL_00cf:
	{
		int32_t* L_53 = p3;
		*((int32_t*)(L_53)) = (int32_t)0;
		int32_t* L_54 = p4;
		t1018* L_55 = V_0;
		int32_t L_56 = 0;
		*((int32_t*)(L_54)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56));
		return;
	}

IL_00d9:
	{
		int32_t L_57 = V_1;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_0127;
		}
	}
	{
		bool L_58 = p2;
		if (!L_58)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t* L_59 = p3;
		t1018* L_60 = V_0;
		int32_t L_61 = 0;
		t1018* L_62 = V_0;
		int32_t L_63 = 1;
		*((int32_t*)(L_59)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_60, L_61))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_62, L_63))))+(int32_t)2));
		int32_t* L_64 = p4;
		t47* L_65 = p0;
		int32_t L_66 = m1741(L_65, NULL);
		int32_t* L_67 = p3;
		*((int32_t*)(L_64)) = (int32_t)((int32_t)((int32_t)L_66-(int32_t)(*((int32_t*)L_67))));
		return;
	}

IL_00f8:
	{
		bool* L_68 = p1;
		if (!(*((int8_t*)L_68)))
		{
			goto IL_0106;
		}
	}
	{
		int32_t* L_69 = p3;
		*((int32_t*)(L_69)) = (int32_t)0;
		int32_t* L_70 = p4;
		t1018* L_71 = V_0;
		int32_t L_72 = 0;
		*((int32_t*)(L_70)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72));
		return;
	}

IL_0106:
	{
		t1018* L_73 = V_0;
		int32_t L_74 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_73, L_74))) <= ((int32_t)0)))
		{
			goto IL_011d;
		}
	}
	{
		bool* L_75 = p1;
		*((int8_t*)(L_75)) = (int8_t)1;
		int32_t* L_76 = p3;
		t1018* L_77 = V_0;
		int32_t L_78 = 0;
		*((int32_t*)(L_76)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_77, L_78))+(int32_t)1));
		int32_t* L_79 = p4;
		t1018* L_80 = V_0;
		int32_t L_81 = 1;
		*((int32_t*)(L_79)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_80, L_81));
		return;
	}

IL_011d:
	{
		int32_t* L_82 = p3;
		*((int32_t*)(L_82)) = (int32_t)0;
		int32_t* L_83 = p4;
		t1018* L_84 = V_0;
		int32_t L_85 = 0;
		*((int32_t*)(L_83)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_84, L_85));
		return;
	}

IL_0127:
	{
		int32_t L_86 = V_1;
		if ((!(((uint32_t)L_86) == ((uint32_t)3))))
		{
			goto IL_016f;
		}
	}
	{
		bool L_87 = p2;
		if (!L_87)
		{
			goto IL_0140;
		}
	}
	{
		int32_t* L_88 = p3;
		t1018* L_89 = V_0;
		int32_t L_90 = 0;
		t1018* L_91 = V_0;
		int32_t L_92 = 1;
		*((int32_t*)(L_88)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_89, L_90))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_91, L_92))))+(int32_t)2));
		int32_t* L_93 = p4;
		t1018* L_94 = V_0;
		int32_t L_95 = 2;
		*((int32_t*)(L_93)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_94, L_95));
		return;
	}

IL_0140:
	{
		bool* L_96 = p1;
		if (!(*((int8_t*)L_96)))
		{
			goto IL_014e;
		}
	}
	{
		int32_t* L_97 = p3;
		*((int32_t*)(L_97)) = (int32_t)0;
		int32_t* L_98 = p4;
		t1018* L_99 = V_0;
		int32_t L_100 = 0;
		*((int32_t*)(L_98)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_100));
		return;
	}

IL_014e:
	{
		t1018* L_101 = V_0;
		int32_t L_102 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_101, L_102))) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		bool* L_103 = p1;
		*((int8_t*)(L_103)) = (int8_t)1;
		int32_t* L_104 = p3;
		t1018* L_105 = V_0;
		int32_t L_106 = 0;
		*((int32_t*)(L_104)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_105, L_106))+(int32_t)1));
		int32_t* L_107 = p4;
		t1018* L_108 = V_0;
		int32_t L_109 = 1;
		*((int32_t*)(L_107)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_108, L_109));
		return;
	}

IL_0165:
	{
		int32_t* L_110 = p3;
		*((int32_t*)(L_110)) = (int32_t)0;
		int32_t* L_111 = p4;
		t1018* L_112 = V_0;
		int32_t L_113 = 0;
		*((int32_t*)(L_111)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_112, L_113));
		return;
	}

IL_016f:
	{
		t396 * L_114 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_114, NULL);
		il2cpp_codegen_raise_exception(L_114);
	}
}
extern TypeInfo* t1793_TI_var;
extern "C" t1793 * m9937 (t7 * __this , t47* p0, int32_t p1, int32_t p2, t1436 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1793_TI_var = il2cpp_codegen_type_info_from_index(3080);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	t1793 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0x0;
	uint16_t V_9 = 0x0;
	uint16_t V_10 = 0x0;
	{
		V_0 = 0;
		V_1 = 1;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		t1793 * L_0 = (t1793 *)il2cpp_codegen_object_new (t1793_TI_var);
		m9935(L_0, NULL);
		V_5 = L_0;
		V_6 = 0;
		int32_t L_1 = p1;
		V_7 = L_1;
		goto IL_028d;
	}

IL_001d:
	{
		t47* L_2 = p0;
		int32_t L_3 = V_7;
		uint16_t L_4 = m1754(L_2, L_3, NULL);
		V_8 = L_4;
		uint16_t L_5 = V_8;
		uint16_t L_6 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0037;
		}
	}
	{
		uint16_t L_7 = V_8;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		V_0 = 0;
		goto IL_0287;
	}

IL_0037:
	{
		uint16_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0287;
	}

IL_003f:
	{
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_10 = V_8;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_12 = V_8;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)35))))
		{
			goto IL_006f;
		}
	}
	{
		V_3 = 0;
		t1793 * L_13 = V_5;
		int32_t L_14 = (L_13->f2);
		V_1 = ((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		V_2 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16-(int32_t)1));
		goto IL_0287;
	}

IL_006f:
	{
		uint16_t L_17 = V_8;
		V_10 = L_17;
		uint16_t L_18 = V_10;
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_00fb;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0095;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_024e;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_0095;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_00e7;
		}
	}

IL_0095:
	{
		uint16_t L_19 = V_10;
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_0270;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_00b3;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_0233;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_00b3;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_013b;
		}
	}

IL_00b3:
	{
		uint16_t L_20 = V_10;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_01be;
		}
	}
	{
		uint16_t L_21 = V_10;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)92))))
		{
			goto IL_00dc;
		}
	}
	{
		uint16_t L_22 = V_10;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_01be;
		}
	}
	{
		uint16_t L_23 = V_10;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)8240))))
		{
			goto IL_025f;
		}
	}
	{
		goto IL_0285;
	}

IL_00dc:
	{
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_0287;
	}

IL_00e7:
	{
		uint16_t L_25 = V_8;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)34))))
		{
			goto IL_00f3;
		}
	}
	{
		uint16_t L_26 = V_8;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_00f6;
		}
	}

IL_00f3:
	{
		uint16_t L_27 = V_8;
		V_0 = L_27;
	}

IL_00f6:
	{
		goto IL_0287;
	}

IL_00fb:
	{
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_0113;
		}
	}
	{
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_0113;
		}
	}
	{
		t1793 * L_30 = V_5;
		t1793 * L_31 = L_30;
		int32_t L_32 = (L_31->f5);
		L_31->f5 = ((int32_t)((int32_t)L_32+(int32_t)1));
		goto IL_0139;
	}

IL_0113:
	{
		bool L_33 = V_2;
		if (!L_33)
		{
			goto IL_0127;
		}
	}
	{
		t1793 * L_34 = V_5;
		t1793 * L_35 = L_34;
		int32_t L_36 = (L_35->f3);
		L_35->f3 = ((int32_t)((int32_t)L_36+(int32_t)1));
		goto IL_0139;
	}

IL_0127:
	{
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_0139;
		}
	}
	{
		t1793 * L_38 = V_5;
		t1793 * L_39 = L_38;
		int32_t L_40 = (L_39->f9);
		L_39->f9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_0139:
	{
		goto IL_013b;
	}

IL_013b:
	{
		uint16_t L_41 = V_8;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)35))))
		{
			goto IL_015c;
		}
	}
	{
		V_4 = 0;
		bool L_42 = V_2;
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		t1793 * L_43 = V_5;
		L_43->f3 = 0;
		goto IL_015c;
	}

IL_0151:
	{
		bool L_44 = V_3;
		if (!L_44)
		{
			goto IL_015c;
		}
	}
	{
		t1793 * L_45 = V_5;
		L_45->f9 = 0;
	}

IL_015c:
	{
		t1793 * L_46 = V_5;
		int32_t L_47 = (L_46->f6);
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_016f;
		}
	}
	{
		t1793 * L_48 = V_5;
		int32_t L_49 = V_7;
		L_48->f6 = L_49;
	}

IL_016f:
	{
		bool L_50 = V_1;
		if (!L_50)
		{
			goto IL_0193;
		}
	}
	{
		t1793 * L_51 = V_5;
		t1793 * L_52 = L_51;
		int32_t L_53 = (L_52->f4);
		L_52->f4 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_6;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		t1793 * L_55 = V_5;
		L_55->f0 = 1;
	}

IL_018e:
	{
		V_6 = 0;
		goto IL_01b9;
	}

IL_0193:
	{
		bool L_56 = V_2;
		if (!L_56)
		{
			goto IL_01a7;
		}
	}
	{
		t1793 * L_57 = V_5;
		t1793 * L_58 = L_57;
		int32_t L_59 = (L_58->f1);
		L_58->f1 = ((int32_t)((int32_t)L_59+(int32_t)1));
		goto IL_01b9;
	}

IL_01a7:
	{
		bool L_60 = V_3;
		if (!L_60)
		{
			goto IL_01b9;
		}
	}
	{
		t1793 * L_61 = V_5;
		t1793 * L_62 = L_61;
		int32_t L_63 = (L_62->f8);
		L_62->f8 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_01b9:
	{
		goto IL_0287;
	}

IL_01be:
	{
		t1793 * L_64 = V_5;
		bool L_65 = (L_64->f7);
		if (!L_65)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0287;
	}

IL_01cc:
	{
		t1793 * L_66 = V_5;
		L_66->f7 = 1;
		V_1 = 0;
		V_2 = 0;
		V_3 = 1;
		int32_t L_67 = V_7;
		int32_t L_68 = p1;
		int32_t L_69 = p2;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_67+(int32_t)1))-(int32_t)L_68))) >= ((int32_t)L_69)))
		{
			goto IL_0231;
		}
	}
	{
		t47* L_70 = p0;
		int32_t L_71 = V_7;
		uint16_t L_72 = m1754(L_70, ((int32_t)((int32_t)L_71+(int32_t)1)), NULL);
		V_9 = L_72;
		uint16_t L_73 = V_9;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_01fd;
		}
	}
	{
		t1793 * L_74 = V_5;
		L_74->f10 = 0;
	}

IL_01fd:
	{
		uint16_t L_75 = V_9;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)43))))
		{
			goto IL_0209;
		}
	}
	{
		uint16_t L_76 = V_9;
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0211;
		}
	}

IL_0209:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)((int32_t)L_77+(int32_t)1));
		goto IL_0231;
	}

IL_0211:
	{
		uint16_t L_78 = V_9;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)48))))
		{
			goto IL_0231;
		}
	}
	{
		uint16_t L_79 = V_9;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)35))))
		{
			goto IL_0231;
		}
	}
	{
		t1793 * L_80 = V_5;
		L_80->f7 = 0;
		t1793 * L_81 = V_5;
		int32_t L_82 = (L_81->f2);
		if ((((int32_t)L_82) >= ((int32_t)0)))
		{
			goto IL_0231;
		}
	}
	{
		V_1 = 1;
	}

IL_0231:
	{
		goto IL_0287;
	}

IL_0233:
	{
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		t1793 * L_83 = V_5;
		int32_t L_84 = (L_83->f2);
		if ((!(((uint32_t)L_84) == ((uint32_t)(-1)))))
		{
			goto IL_024c;
		}
	}
	{
		t1793 * L_85 = V_5;
		int32_t L_86 = V_7;
		L_85->f2 = L_86;
	}

IL_024c:
	{
		goto IL_0287;
	}

IL_024e:
	{
		t1793 * L_87 = V_5;
		t1793 * L_88 = L_87;
		int32_t L_89 = (L_88->f12);
		L_88->f12 = ((int32_t)((int32_t)L_89+(int32_t)1));
		goto IL_0287;
	}

IL_025f:
	{
		t1793 * L_90 = V_5;
		t1793 * L_91 = L_90;
		int32_t L_92 = (L_91->f13);
		L_91->f13 = ((int32_t)((int32_t)L_92+(int32_t)1));
		goto IL_0287;
	}

IL_0270:
	{
		bool L_93 = V_1;
		if (!L_93)
		{
			goto IL_0283;
		}
	}
	{
		t1793 * L_94 = V_5;
		int32_t L_95 = (L_94->f4);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_0283;
		}
	}
	{
		int32_t L_96 = V_6;
		V_6 = ((int32_t)((int32_t)L_96+(int32_t)1));
	}

IL_0283:
	{
		goto IL_0287;
	}

IL_0285:
	{
		goto IL_0287;
	}

IL_0287:
	{
		int32_t L_97 = V_7;
		V_7 = ((int32_t)((int32_t)L_97+(int32_t)1));
	}

IL_028d:
	{
		int32_t L_98 = V_7;
		int32_t L_99 = p1;
		int32_t L_100 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_98-(int32_t)L_99))) < ((int32_t)L_100)))
		{
			goto IL_001d;
		}
	}
	{
		t1793 * L_101 = V_5;
		int32_t L_102 = (L_101->f8);
		if (L_102)
		{
			goto IL_02aa;
		}
	}
	{
		t1793 * L_103 = V_5;
		L_103->f7 = 0;
		goto IL_02b2;
	}

IL_02aa:
	{
		t1793 * L_104 = V_5;
		L_104->f5 = 0;
	}

IL_02b2:
	{
		t1793 * L_105 = V_5;
		int32_t L_106 = (L_105->f1);
		if (L_106)
		{
			goto IL_02c3;
		}
	}
	{
		t1793 * L_107 = V_5;
		L_107->f2 = (-1);
	}

IL_02c3:
	{
		t1793 * L_108 = V_5;
		t1793 * L_109 = L_108;
		int32_t L_110 = (L_109->f11);
		int32_t L_111 = V_6;
		L_109->f11 = ((int32_t)((int32_t)L_110+(int32_t)((int32_t)((int32_t)L_111*(int32_t)3))));
		t1793 * L_112 = V_5;
		return L_112;
	}
}
extern TypeInfo* t336_TI_var;
extern "C" t47* m9938 (t1793 * __this, t47* p0, int32_t p1, int32_t p2, t1436 * p3, bool p4, t336 * p5, t336 * p6, t336 * p7, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1018* V_7 = {0};
	t47* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	uint16_t V_17 = 0x0;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	uint16_t V_21 = 0x0;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		t336 * L_0 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		t1436 * L_1 = p3;
		t1018* L_2 = m7431(L_1, NULL);
		V_7 = L_2;
		t1436 * L_3 = p3;
		t47* L_4 = m7430(L_3, NULL);
		V_8 = L_4;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		bool L_5 = (__this->f0);
		if (!L_5)
		{
			goto IL_00e7;
		}
	}
	{
		t1018* L_6 = V_7;
		if ((((int32_t)(((int32_t)(((t52 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00e7;
		}
	}
	{
		t336 * L_7 = p5;
		int32_t L_8 = m4625(L_7, NULL);
		V_9 = L_8;
		V_14 = 0;
		goto IL_0073;
	}

IL_0059:
	{
		int32_t L_9 = V_10;
		t1018* L_10 = V_7;
		int32_t L_11 = V_14;
		int32_t L_12 = L_11;
		V_10 = ((int32_t)((int32_t)L_9+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12))));
		int32_t L_13 = V_10;
		int32_t L_14 = V_9;
		if ((((int32_t)L_13) > ((int32_t)L_14)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_15 = V_14;
		V_11 = L_15;
	}

IL_006d:
	{
		int32_t L_16 = V_14;
		V_14 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_17 = V_14;
		t1018* L_18 = V_7;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t52 *)L_18)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		t1018* L_19 = V_7;
		int32_t L_20 = V_11;
		int32_t L_21 = L_20;
		V_13 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21));
		int32_t L_22 = V_9;
		int32_t L_23 = V_10;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_24 = V_9;
		int32_t L_25 = V_10;
		G_B10_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
		goto IL_0090;
	}

IL_008f:
	{
		G_B10_0 = 0;
	}

IL_0090:
	{
		V_15 = G_B10_0;
		int32_t L_26 = V_13;
		if (L_26)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_009e;
	}

IL_0098:
	{
		int32_t L_27 = V_11;
		V_11 = ((int32_t)((int32_t)L_27-(int32_t)1));
	}

IL_009e:
	{
		int32_t L_28 = V_11;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		t1018* L_29 = V_7;
		int32_t L_30 = V_11;
		int32_t L_31 = L_30;
		if (!(*(int32_t*)(int32_t*)SZArrayLdElema(L_29, L_31)))
		{
			goto IL_0098;
		}
	}

IL_00aa:
	{
		int32_t L_32 = V_15;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_33 = V_15;
		G_B18_0 = L_33;
		goto IL_00b8;
	}

IL_00b3:
	{
		t1018* L_34 = V_7;
		int32_t L_35 = V_11;
		int32_t L_36 = L_35;
		G_B18_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_36));
	}

IL_00b8:
	{
		V_13 = G_B18_0;
	}

IL_00ba:
	{
		int32_t L_37 = V_15;
		if (L_37)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_38 = V_13;
		V_12 = L_38;
		goto IL_00e5;
	}

IL_00c4:
	{
		int32_t L_39 = V_11;
		int32_t L_40 = V_15;
		int32_t L_41 = V_13;
		V_11 = ((int32_t)((int32_t)L_39+(int32_t)((int32_t)((int32_t)L_40/(int32_t)L_41))));
		int32_t L_42 = V_15;
		int32_t L_43 = V_13;
		V_12 = ((int32_t)((int32_t)L_42%(int32_t)L_43));
		int32_t L_44 = V_12;
		if (L_44)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_45 = V_13;
		V_12 = L_45;
		goto IL_00e5;
	}

IL_00df:
	{
		int32_t L_46 = V_11;
		V_11 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_00e5:
	{
		goto IL_00ee;
	}

IL_00e7:
	{
		__this->f0 = 0;
	}

IL_00ee:
	{
		int32_t L_47 = p1;
		V_16 = L_47;
		goto IL_03ce;
	}

IL_00f6:
	{
		t47* L_48 = p0;
		int32_t L_49 = V_16;
		uint16_t L_50 = m1754(L_48, L_49, NULL);
		V_17 = L_50;
		uint16_t L_51 = V_17;
		uint16_t L_52 = V_1;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0110;
		}
	}
	{
		uint16_t L_53 = V_17;
		if (!L_53)
		{
			goto IL_0110;
		}
	}
	{
		V_1 = 0;
		goto IL_03c8;
	}

IL_0110:
	{
		uint16_t L_54 = V_1;
		if (!L_54)
		{
			goto IL_0121;
		}
	}
	{
		t336 * L_55 = V_0;
		uint16_t L_56 = V_17;
		m1772(L_55, L_56, NULL);
		goto IL_03c8;
	}

IL_0121:
	{
		uint16_t L_57 = V_17;
		V_21 = L_57;
		uint16_t L_58 = V_21;
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_01af;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_01c3;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_039d;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_01af;
		}
	}

IL_0147:
	{
		uint16_t L_59 = V_21;
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_039b;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_0348;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_01c5;
		}
	}

IL_0165:
	{
		uint16_t L_60 = V_21;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)69))))
		{
			goto IL_0297;
		}
	}
	{
		uint16_t L_61 = V_21;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)92))))
		{
			goto IL_018e;
		}
	}
	{
		uint16_t L_62 = V_21;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)101))))
		{
			goto IL_0297;
		}
	}
	{
		uint16_t L_63 = V_21;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)8240))))
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_03bd;
	}

IL_018e:
	{
		int32_t L_64 = V_16;
		V_16 = ((int32_t)((int32_t)L_64+(int32_t)1));
		int32_t L_65 = V_16;
		int32_t L_66 = p1;
		int32_t L_67 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_65-(int32_t)L_66))) >= ((int32_t)L_67)))
		{
			goto IL_01aa;
		}
	}
	{
		t336 * L_68 = V_0;
		t47* L_69 = p0;
		int32_t L_70 = V_16;
		uint16_t L_71 = m1754(L_69, L_70, NULL);
		m1772(L_68, L_71, NULL);
	}

IL_01aa:
	{
		goto IL_03c8;
	}

IL_01af:
	{
		uint16_t L_72 = V_17;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)34))))
		{
			goto IL_01bb;
		}
	}
	{
		uint16_t L_73 = V_17;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_01be;
		}
	}

IL_01bb:
	{
		uint16_t L_74 = V_17;
		V_1 = L_74;
	}

IL_01be:
	{
		goto IL_03c8;
	}

IL_01c3:
	{
		goto IL_01c5;
	}

IL_01c5:
	{
		bool L_75 = V_2;
		if (!L_75)
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_76 = V_4;
		V_4 = ((int32_t)((int32_t)L_76+(int32_t)1));
		int32_t L_77 = (__this->f4);
		int32_t L_78 = V_4;
		t336 * L_79 = p5;
		int32_t L_80 = m4625(L_79, NULL);
		int32_t L_81 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_77-(int32_t)L_78))) < ((int32_t)((int32_t)((int32_t)L_80+(int32_t)L_81)))))
		{
			goto IL_01ef;
		}
	}
	{
		uint16_t L_82 = V_17;
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_025c;
		}
	}

IL_01ef:
	{
		goto IL_0247;
	}

IL_01f1:
	{
		t336 * L_83 = V_0;
		t336 * L_84 = p5;
		int32_t L_85 = V_5;
		int32_t L_86 = L_85;
		V_5 = ((int32_t)((int32_t)L_86+(int32_t)1));
		uint16_t L_87 = m9209(L_84, L_86, NULL);
		m1772(L_83, L_87, NULL);
		bool L_88 = (__this->f0);
		if (!L_88)
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_89 = V_9;
		int32_t L_90 = ((int32_t)((int32_t)L_89-(int32_t)1));
		V_9 = L_90;
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_91 = V_12;
		int32_t L_92 = ((int32_t)((int32_t)L_91-(int32_t)1));
		V_12 = L_92;
		if (L_92)
		{
			goto IL_0247;
		}
	}
	{
		t336 * L_93 = V_0;
		t47* L_94 = V_8;
		m3305(L_93, L_94, NULL);
		int32_t L_95 = V_11;
		int32_t L_96 = ((int32_t)((int32_t)L_95-(int32_t)1));
		V_11 = L_96;
		t1018* L_97 = V_7;
		if ((((int32_t)L_96) >= ((int32_t)(((int32_t)(((t52 *)L_97)->max_length))))))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_98 = V_11;
		if ((((int32_t)L_98) < ((int32_t)0)))
		{
			goto IL_0243;
		}
	}
	{
		t1018* L_99 = V_7;
		int32_t L_100 = V_11;
		int32_t L_101 = L_100;
		V_13 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_101));
	}

IL_0243:
	{
		int32_t L_102 = V_13;
		V_12 = L_102;
	}

IL_0247:
	{
		int32_t L_103 = (__this->f4);
		int32_t L_104 = V_4;
		int32_t L_105 = V_5;
		t336 * L_106 = p5;
		int32_t L_107 = m4625(L_106, NULL);
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_104))+(int32_t)L_105))) < ((int32_t)L_107)))
		{
			goto IL_01f1;
		}
	}

IL_025c:
	{
		goto IL_03c8;
	}

IL_0261:
	{
		bool L_108 = V_3;
		if (!L_108)
		{
			goto IL_0289;
		}
	}
	{
		int32_t L_109 = V_6;
		t336 * L_110 = p6;
		int32_t L_111 = m4625(L_110, NULL);
		if ((((int32_t)L_109) >= ((int32_t)L_111)))
		{
			goto IL_0284;
		}
	}
	{
		t336 * L_112 = V_0;
		t336 * L_113 = p6;
		int32_t L_114 = V_6;
		int32_t L_115 = L_114;
		V_6 = ((int32_t)((int32_t)L_115+(int32_t)1));
		uint16_t L_116 = m9209(L_113, L_115, NULL);
		m1772(L_112, L_116, NULL);
	}

IL_0284:
	{
		goto IL_03c8;
	}

IL_0289:
	{
		t336 * L_117 = V_0;
		uint16_t L_118 = V_17;
		m1772(L_117, L_118, NULL);
		goto IL_03c8;
	}

IL_0297:
	{
		t336 * L_119 = p7;
		if (!L_119)
		{
			goto IL_02a3;
		}
	}
	{
		bool L_120 = (__this->f7);
		if (L_120)
		{
			goto IL_02b1;
		}
	}

IL_02a3:
	{
		t336 * L_121 = V_0;
		uint16_t L_122 = V_17;
		m1772(L_121, L_122, NULL);
		goto IL_03c8;
	}

IL_02b1:
	{
		V_18 = 1;
		V_19 = 0;
		int32_t L_123 = V_16;
		V_20 = ((int32_t)((int32_t)L_123+(int32_t)1));
		goto IL_0301;
	}

IL_02bf:
	{
		t47* L_124 = p0;
		int32_t L_125 = V_20;
		uint16_t L_126 = m1754(L_124, L_125, NULL);
		if ((!(((uint32_t)L_126) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_02d0;
		}
	}
	{
		V_19 = 1;
		goto IL_02fb;
	}

IL_02d0:
	{
		int32_t L_127 = V_20;
		int32_t L_128 = V_16;
		if ((!(((uint32_t)L_127) == ((uint32_t)((int32_t)((int32_t)L_128+(int32_t)1))))))
		{
			goto IL_02f2;
		}
	}
	{
		t47* L_129 = p0;
		int32_t L_130 = V_20;
		uint16_t L_131 = m1754(L_129, L_130, NULL);
		if ((((int32_t)L_131) == ((int32_t)((int32_t)43))))
		{
			goto IL_02f0;
		}
	}
	{
		t47* L_132 = p0;
		int32_t L_133 = V_20;
		uint16_t L_134 = m1754(L_132, L_133, NULL);
		if ((!(((uint32_t)L_134) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_02f2;
		}
	}

IL_02f0:
	{
		goto IL_02fb;
	}

IL_02f2:
	{
		bool L_135 = V_19;
		if (L_135)
		{
			goto IL_02f9;
		}
	}
	{
		V_18 = 0;
	}

IL_02f9:
	{
		goto IL_0308;
	}

IL_02fb:
	{
		int32_t L_136 = V_20;
		V_20 = ((int32_t)((int32_t)L_136+(int32_t)1));
	}

IL_0301:
	{
		int32_t L_137 = V_20;
		int32_t L_138 = p1;
		int32_t L_139 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_137-(int32_t)L_138))) < ((int32_t)L_139)))
		{
			goto IL_02bf;
		}
	}

IL_0308:
	{
		bool L_140 = V_18;
		if (!L_140)
		{
			goto IL_033a;
		}
	}
	{
		int32_t L_141 = V_20;
		V_16 = ((int32_t)((int32_t)L_141-(int32_t)1));
		int32_t L_142 = (__this->f2);
		V_2 = ((((int32_t)L_142) < ((int32_t)0))? 1 : 0);
		bool L_143 = V_2;
		V_3 = ((((int32_t)L_143) == ((int32_t)0))? 1 : 0);
		t336 * L_144 = V_0;
		uint16_t L_145 = V_17;
		m1772(L_144, L_145, NULL);
		t336 * L_146 = V_0;
		t336 * L_147 = p7;
		m4521(L_146, L_147, NULL);
		p7 = (t336 *)NULL;
		goto IL_0343;
	}

IL_033a:
	{
		t336 * L_148 = V_0;
		uint16_t L_149 = V_17;
		m1772(L_148, L_149, NULL);
	}

IL_0343:
	{
		goto IL_03c8;
	}

IL_0348:
	{
		int32_t L_150 = (__this->f2);
		int32_t L_151 = V_16;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_151))))
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_152 = (__this->f1);
		if ((((int32_t)L_152) <= ((int32_t)0)))
		{
			goto IL_037d;
		}
	}
	{
		goto IL_0372;
	}

IL_035d:
	{
		t336 * L_153 = V_0;
		t336 * L_154 = p5;
		int32_t L_155 = V_5;
		int32_t L_156 = L_155;
		V_5 = ((int32_t)((int32_t)L_156+(int32_t)1));
		uint16_t L_157 = m9209(L_154, L_156, NULL);
		m1772(L_153, L_157, NULL);
	}

IL_0372:
	{
		int32_t L_158 = V_5;
		t336 * L_159 = p5;
		int32_t L_160 = m4625(L_159, NULL);
		if ((((int32_t)L_158) < ((int32_t)L_160)))
		{
			goto IL_035d;
		}
	}

IL_037d:
	{
		t336 * L_161 = p6;
		int32_t L_162 = m4625(L_161, NULL);
		if ((((int32_t)L_162) <= ((int32_t)0)))
		{
			goto IL_0395;
		}
	}
	{
		t336 * L_163 = V_0;
		t1436 * L_164 = p3;
		t47* L_165 = m7429(L_164, NULL);
		m3305(L_163, L_165, NULL);
	}

IL_0395:
	{
		V_2 = 0;
		V_3 = 1;
		goto IL_03c8;
	}

IL_039b:
	{
		goto IL_03c8;
	}

IL_039d:
	{
		t336 * L_166 = V_0;
		t1436 * L_167 = p3;
		t47* L_168 = m7440(L_167, NULL);
		m3305(L_166, L_168, NULL);
		goto IL_03c8;
	}

IL_03ad:
	{
		t336 * L_169 = V_0;
		t1436 * L_170 = p3;
		t47* L_171 = m7441(L_170, NULL);
		m3305(L_169, L_171, NULL);
		goto IL_03c8;
	}

IL_03bd:
	{
		t336 * L_172 = V_0;
		uint16_t L_173 = V_17;
		m1772(L_172, L_173, NULL);
		goto IL_03c8;
	}

IL_03c8:
	{
		int32_t L_174 = V_16;
		V_16 = ((int32_t)((int32_t)L_174+(int32_t)1));
	}

IL_03ce:
	{
		int32_t L_175 = V_16;
		int32_t L_176 = p1;
		int32_t L_177 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_175-(int32_t)L_176))) < ((int32_t)L_177)))
		{
			goto IL_00f6;
		}
	}
	{
		bool L_178 = p4;
		if (L_178)
		{
			goto IL_03eb;
		}
	}
	{
		t336 * L_179 = V_0;
		t1436 * L_180 = p3;
		t47* L_181 = m7427(L_180, NULL);
		m9219(L_179, 0, L_181, NULL);
	}

IL_03eb:
	{
		t336 * L_182 = V_0;
		t47* L_183 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_182);
		return L_183;
	}
}
#include "t1794.h"
#ifndef _MSC_VER
#else
#endif
#include "t1794MD.h"

#include "t1574.h"
#include "t701.h"
#include "t712.h"
#include "t57.h"
#include "t692.h"
#include "t713.h"
#include "t86.h"
#include "t356.h"
#include "t699.h"
#include "t459.h"
#include "t60.h"
#include "t709MD.h"
#include "t1574MD.h"
#include "t693MD.h"
#include "t1101MD.h"
#include "t713MD.h"
#include "t692MD.h"
#include "t60MD.h"
#include "t214MD.h"


extern TypeInfo* t221_TI_var;
extern "C" void m9939 (t1794 * __this, t1574 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		__this->f23 = ((t221*)SZArrayNew(t221_TI_var, 0));
		t1574 * L_0 = p0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		t1574 * L_1 = p0;
		__this->f6 = L_1;
		t1574 * L_2 = (__this->f6);
		t709 * L_3 = m9346(L_2, NULL);
		m9968(__this, L_3, NULL);
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9940 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		m9941(NULL, (&((t1794_SFs*)t1794_TI_var->static_fields)->f0), (&((t1794_SFs*)t1794_TI_var->static_fields)->f1), (&((t1794_SFs*)t1794_TI_var->static_fields)->f2), (&((t1794_SFs*)t1794_TI_var->static_fields)->f3), (&((t1794_SFs*)t1794_TI_var->static_fields)->f4), (&((t1794_SFs*)t1794_TI_var->static_fields)->f5), NULL);
		return;
	}
}
extern "C" void m9941 (t7 * __this , uint64_t** p0, int32_t** p1, uint16_t** p2, uint16_t** p3, int64_t** p4, int32_t** p5, const MethodInfo* method)
{
	typedef void (*m9941_ftn) (uint64_t**, int32_t**, uint16_t**, uint16_t**, int64_t**, int32_t**);
	static m9941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9941_ftn)il2cpp_codegen_resolve_icall ("System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern TypeInfo* t1794_TI_var;
extern "C" int64_t m9942 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int64_t* L_0 = ((t1794_SFs*)t1794_TI_var->static_fields)->f4;
		int32_t L_1 = p0;
		return (*((int64_t*)((intptr_t)((intptr_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)8))))));
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9943 (t1794 * __this, uint32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000000)))))
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_1 = p0;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000000)));
		uint32_t L_2 = p0;
		int32_t L_3 = V_0;
		p0 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)((int32_t)((int32_t)100000000)*(int32_t)L_3))));
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_5 = m9946(NULL, L_4, NULL);
		__this->f20 = L_5;
	}

IL_0029:
	{
		uint32_t L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_7 = m9947(NULL, L_6, NULL);
		__this->f19 = L_7;
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9944 (t1794 * __this, uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_005b;
		}
	}
	{
		uint64_t L_1 = p0;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_1/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_2 = p0;
		int64_t L_3 = V_0;
		p0 = ((int64_t)((int64_t)L_2-(int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)100000000)))*(int64_t)L_3))));
		int64_t L_4 = V_0;
		if ((((int64_t)L_4) < ((int64_t)(((int64_t)((int32_t)100000000))))))
		{
			goto IL_004b;
		}
	}
	{
		int64_t L_5 = V_0;
		V_1 = (((int32_t)((int64_t)((int64_t)L_5/(int64_t)(((int64_t)((int32_t)100000000)))))));
		int64_t L_6 = V_0;
		int32_t L_7 = V_1;
		V_0 = ((int64_t)((int64_t)L_6-(int64_t)((int64_t)((int64_t)(((int64_t)L_7))*(int64_t)(((int64_t)((int32_t)100000000)))))));
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_9 = m9947(NULL, L_8, NULL);
		__this->f21 = L_9;
	}

IL_004b:
	{
		int64_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		int64_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_12 = m9947(NULL, (((int32_t)L_11)), NULL);
		__this->f20 = L_12;
	}

IL_005b:
	{
		uint64_t L_13 = p0;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		uint64_t L_14 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_15 = m9947(NULL, (((int32_t)L_14)), NULL);
		__this->f19 = L_15;
	}

IL_006b:
	{
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9945 (t1794 * __this, uint32_t p0, uint64_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		uint32_t L_0 = p0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		uint64_t L_1 = p1;
		m9944(__this, L_1, NULL);
		return;
	}

IL_000b:
	{
		uint32_t L_2 = p0;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_2/(uint32_t)(int32_t)((int32_t)100000000)));
		uint32_t L_3 = p0;
		uint32_t L_4 = V_0;
		V_1 = (((uint64_t)(((uint32_t)((int32_t)((int32_t)L_3-(int32_t)((int32_t)((int32_t)L_4*(int32_t)((int32_t)100000000)))))))));
		uint64_t L_5 = p1;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_5/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_6 = p1;
		uint64_t L_7 = V_2;
		uint64_t L_8 = V_1;
		V_3 = ((int64_t)((int64_t)((int64_t)((int64_t)L_6-(int64_t)((int64_t)((int64_t)L_7*(int64_t)(((int64_t)((int32_t)100000000)))))))+(int64_t)((int64_t)((int64_t)L_8*(int64_t)(((int64_t)((int32_t)9551616)))))));
		uint32_t L_9 = V_0;
		p0 = L_9;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_1;
		p1 = ((int64_t)((int64_t)L_10+(int64_t)((int64_t)((int64_t)L_11*(int64_t)((int64_t)184467440737LL)))));
		uint64_t L_12 = V_3;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_12/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_13 = V_3;
		uint64_t L_14 = V_2;
		V_3 = ((int64_t)((int64_t)L_13-(int64_t)((int64_t)((int64_t)L_14*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_15 = p1;
		uint64_t L_16 = V_2;
		p1 = ((int64_t)((int64_t)L_15+(int64_t)L_16));
		uint64_t L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_18 = m9947(NULL, (((int32_t)L_17)), NULL);
		__this->f19 = L_18;
		uint64_t L_19 = p1;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_19/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_20 = p1;
		uint64_t L_21 = V_2;
		V_3 = ((int64_t)((int64_t)L_20-(int64_t)((int64_t)((int64_t)L_21*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_22 = V_2;
		p1 = L_22;
		uint32_t L_23 = p0;
		if (!L_23)
		{
			goto IL_00ce;
		}
	}
	{
		uint64_t L_24 = p1;
		uint32_t L_25 = p0;
		p1 = ((int64_t)((int64_t)L_24+(int64_t)((int64_t)((int64_t)(((uint64_t)L_25))*(int64_t)((int64_t)184467440737LL)))));
		uint64_t L_26 = V_3;
		uint32_t L_27 = p0;
		V_3 = ((int64_t)((int64_t)L_26+(int64_t)((int64_t)((int64_t)(((uint64_t)L_27))*(int64_t)(((int64_t)((int32_t)9551616)))))));
		uint64_t L_28 = V_3;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_28/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_29 = p1;
		uint64_t L_30 = V_2;
		p1 = ((int64_t)((int64_t)L_29+(int64_t)L_30));
		uint64_t L_31 = V_3;
		uint64_t L_32 = V_2;
		V_3 = ((int64_t)((int64_t)L_31-(int64_t)((int64_t)((int64_t)L_32*(int64_t)(((int64_t)((int32_t)100000000)))))));
	}

IL_00ce:
	{
		uint64_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_34 = m9947(NULL, (((int32_t)L_33)), NULL);
		__this->f20 = L_34;
		uint64_t L_35 = p1;
		if ((!(((uint64_t)L_35) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_0108;
		}
	}
	{
		uint64_t L_36 = p1;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_36/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_37 = p1;
		uint64_t L_38 = V_2;
		p1 = ((int64_t)((int64_t)L_37-(int64_t)((int64_t)((int64_t)L_38*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_40 = m9947(NULL, (((int32_t)L_39)), NULL);
		__this->f22 = L_40;
	}

IL_0108:
	{
		uint64_t L_41 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_42 = m9947(NULL, (((int32_t)L_41)), NULL);
		__this->f21 = L_42;
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" uint32_t m9946 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t* L_1 = ((t1794_SFs*)t1794_TI_var->static_fields)->f5;
		int32_t L_2 = p0;
		return (*((int32_t*)((intptr_t)((intptr_t)L_1+(int32_t)((int32_t)((int32_t)L_2*(int32_t)4))))));
	}

IL_0010:
	{
		int32_t L_3 = p0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t* L_4 = ((t1794_SFs*)t1794_TI_var->static_fields)->f5;
		int32_t L_5 = V_0;
		int32_t* L_6 = ((t1794_SFs*)t1794_TI_var->static_fields)->f5;
		int32_t L_7 = p0;
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))))<<(int32_t)8))|(int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_6+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)((int32_t)((int32_t)L_8*(int32_t)((int32_t)100)))))*(int32_t)4))))))));
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" uint32_t m9947 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10000))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = p0;
		V_1 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)10000)));
		int32_t L_2 = p0;
		int32_t L_3 = V_1;
		p0 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)10000)))));
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_5 = m9946(NULL, L_4, NULL);
		V_0 = ((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)));
	}

IL_0029:
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_8 = m9946(NULL, L_7, NULL);
		return ((int32_t)((int32_t)L_6|(int32_t)L_8));
	}
}
extern "C" int32_t m9948 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)16))))
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		return 2;
	}

IL_0011:
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_001b;
		}
	}
	{
		return 3;
	}

IL_001b:
	{
		return 4;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" int32_t m9949 (t7 * __this , uint32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)65536)))))
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_2 = m9948(NULL, L_1, NULL);
		return L_2;
	}

IL_000f:
	{
		uint32_t L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_4 = m9948(NULL, ((int32_t)((uint32_t)L_3>>((int32_t)16))), NULL);
		return ((int32_t)((int32_t)4+(int32_t)L_4));
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" int32_t m9950 (t1794 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = (__this->f22);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_2 = m9949(NULL, L_1, NULL);
		return ((int32_t)((int32_t)L_2+(int32_t)((int32_t)24)));
	}

IL_0017:
	{
		uint32_t L_3 = (__this->f21);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_5 = m9949(NULL, L_4, NULL);
		return ((int32_t)((int32_t)L_5+(int32_t)((int32_t)16)));
	}

IL_002e:
	{
		uint32_t L_6 = (__this->f20);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_7 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_8 = m9949(NULL, L_7, NULL);
		return ((int32_t)((int32_t)L_8+(int32_t)8));
	}

IL_0044:
	{
		uint32_t L_9 = (__this->f19);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_11 = m9949(NULL, L_10, NULL);
		return L_11;
	}

IL_0058:
	{
		return 0;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" int32_t m9951 (t7 * __this , int64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)18);
		goto IL_0016;
	}

IL_0005:
	{
		int64_t L_0 = p0;
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int64_t L_2 = m9942(NULL, L_1, NULL);
		if ((((int64_t)L_0) < ((int64_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		return ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4-(int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
extern "C" int32_t m9952 (t1794 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f13);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->f15);
		return ((int32_t)((int32_t)L_1+(int32_t)2));
	}

IL_0013:
	{
		int32_t L_2 = (__this->f14);
		int32_t L_3 = (__this->f15);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = (__this->f15);
		return L_4;
	}

IL_0028:
	{
		uint16_t L_5 = (__this->f13);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = (__this->f15);
		int32_t L_7 = (__this->f14);
		int32_t L_8 = m9829(NULL, ((int32_t)((int32_t)L_6+(int32_t)2)), L_7, NULL);
		return L_8;
	}

IL_0046:
	{
		uint16_t L_9 = (__this->f13);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = (__this->f15);
		int32_t L_11 = (__this->f14);
		int32_t L_12 = m9829(NULL, ((int32_t)((int32_t)L_10+(int32_t)2)), ((int32_t)((int32_t)L_11+(int32_t)1)), NULL);
		return L_12;
	}

IL_0066:
	{
		int32_t L_13 = (__this->f15);
		return L_13;
	}
}
extern "C" int32_t m9953 (t7 * __this , t47* p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0006:
	{
		t47* L_0 = p0;
		int32_t L_1 = V_1;
		uint16_t L_2 = m1754(L_0, L_1, NULL);
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_2;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)10)))+(int32_t)L_4));
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)9))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0029;
		}
	}

IL_0026:
	{
		return ((int32_t)-2);
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		t47* L_10 = p0;
		int32_t L_11 = m1741(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9954 (t1794 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = 0;
		V_1 = L_0;
		__this->f22 = L_0;
		uint32_t L_1 = V_1;
		uint32_t L_2 = L_1;
		V_1 = L_2;
		__this->f21 = L_2;
		uint32_t L_3 = V_1;
		uint32_t L_4 = L_3;
		V_1 = L_4;
		__this->f20 = L_4;
		uint32_t L_5 = V_1;
		__this->f19 = L_5;
		__this->f17 = 0;
		int32_t L_6 = 0;
		V_2 = L_6;
		__this->f9 = L_6;
		bool L_7 = V_2;
		__this->f8 = L_7;
		__this->f10 = 0;
		__this->f11 = 1;
		__this->f14 = (-1);
		t47* L_8 = p0;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		t47* L_9 = p0;
		int32_t L_10 = m1741(L_9, NULL);
		if (L_10)
		{
			goto IL_0062;
		}
	}

IL_0059:
	{
		__this->f13 = ((int32_t)71);
		return;
	}

IL_0062:
	{
		t47* L_11 = p0;
		uint16_t L_12 = m1754(L_11, 0, NULL);
		V_0 = L_12;
		uint16_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)97))))
		{
			goto IL_0086;
		}
	}
	{
		uint16_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)122))))
		{
			goto IL_0086;
		}
	}
	{
		uint16_t L_15 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15-(int32_t)((int32_t)97)))+(int32_t)((int32_t)65)))));
		__this->f11 = 0;
		goto IL_00a0;
	}

IL_0086:
	{
		uint16_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)65))))
		{
			goto IL_0090;
		}
	}
	{
		uint16_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)90))))
		{
			goto IL_00a0;
		}
	}

IL_0090:
	{
		__this->f10 = 1;
		__this->f13 = ((int32_t)48);
		return;
	}

IL_00a0:
	{
		uint16_t L_18 = V_0;
		__this->f13 = L_18;
		t47* L_19 = p0;
		int32_t L_20 = m1741(L_19, NULL);
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		t47* L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_22 = m9953(NULL, L_21, NULL);
		__this->f14 = L_22;
		int32_t L_23 = (__this->f14);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00dc;
		}
	}
	{
		__this->f10 = 1;
		__this->f13 = ((int32_t)48);
		__this->f14 = (-1);
	}

IL_00dc:
	{
		return;
	}
}
extern "C" void m9955 (t1794 * __this, uint64_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f15);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 0)
		{
			goto IL_0022;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 1)
		{
			goto IL_001b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 2)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_003d;
	}

IL_0022:
	{
		uint64_t L_3 = p0;
		p0 = (((uint64_t)(((uint8_t)L_3))));
		goto IL_003d;
	}

IL_002b:
	{
		uint64_t L_4 = p0;
		p0 = (((uint64_t)(((uint16_t)L_4))));
		goto IL_003d;
	}

IL_0034:
	{
		uint64_t L_5 = p0;
		p0 = (((uint64_t)(((uint32_t)L_5))));
		goto IL_003d;
	}

IL_003d:
	{
		uint64_t L_6 = p0;
		__this->f19 = (((uint32_t)L_6));
		uint64_t L_7 = p0;
		__this->f20 = (((uint32_t)((int64_t)((uint64_t)L_7>>((int32_t)32)))));
		int32_t L_8 = m9950(__this, NULL);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f16 = L_9;
		int32_t L_10 = V_0;
		__this->f18 = L_10;
		uint64_t L_11 = p0;
		if (L_11)
		{
			goto IL_006f;
		}
	}
	{
		__this->f18 = 1;
	}

IL_006f:
	{
		return;
	}
}
extern "C" void m9956 (t1794 * __this, t47* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t47* L_0 = p0;
		m9954(__this, L_0, NULL);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		int32_t L_2 = p1;
		__this->f12 = ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_3 = p1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		uint16_t L_4 = (__this->f13);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0031;
		}
	}

IL_0028:
	{
		int32_t L_5 = p1;
		m9955(__this, (((int64_t)L_5)), NULL);
		return;
	}

IL_0031:
	{
		int32_t L_6 = p1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = p1;
		p1 = ((-L_7));
	}

IL_003b:
	{
		int32_t L_8 = p1;
		m9943(__this, L_8, NULL);
		int32_t L_9 = m9950(__this, NULL);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->f16 = L_10;
		int32_t L_11 = V_0;
		__this->f18 = L_11;
		return;
	}
}
extern "C" void m9957 (t1794 * __this, t47* p0, uint32_t p1, int32_t p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t47* L_0 = p0;
		m9954(__this, L_0, NULL);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		__this->f12 = 1;
		uint32_t L_2 = p1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint16_t L_3 = (__this->f13);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		uint32_t L_4 = p1;
		m9955(__this, (((uint64_t)L_4)), NULL);
		return;
	}

IL_002b:
	{
		uint32_t L_5 = p1;
		m9943(__this, L_5, NULL);
		int32_t L_6 = m9950(__this, NULL);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f16 = L_7;
		int32_t L_8 = V_0;
		__this->f18 = L_8;
		return;
	}
}
extern "C" void m9958 (t1794 * __this, t47* p0, int64_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t47* L_0 = p0;
		m9954(__this, L_0, NULL);
		__this->f15 = ((int32_t)19);
		int64_t L_1 = p1;
		__this->f12 = ((((int32_t)((((int64_t)L_1) < ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_2 = p1;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint16_t L_3 = (__this->f13);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0032;
		}
	}

IL_002a:
	{
		int64_t L_4 = p1;
		m9955(__this, L_4, NULL);
		return;
	}

IL_0032:
	{
		int64_t L_5 = p1;
		if ((((int64_t)L_5) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_6 = p1;
		p1 = ((-L_6));
	}

IL_003d:
	{
		int64_t L_7 = p1;
		m9944(__this, L_7, NULL);
		int32_t L_8 = m9950(__this, NULL);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f16 = L_9;
		int32_t L_10 = V_0;
		__this->f18 = L_10;
		return;
	}
}
extern "C" void m9959 (t1794 * __this, t47* p0, uint64_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t47* L_0 = p0;
		m9954(__this, L_0, NULL);
		__this->f15 = ((int32_t)20);
		__this->f12 = 1;
		uint64_t L_1 = p1;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		uint16_t L_2 = (__this->f13);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_002b;
		}
	}

IL_0023:
	{
		uint64_t L_3 = p1;
		m9955(__this, L_3, NULL);
		return;
	}

IL_002b:
	{
		uint64_t L_4 = p1;
		m9944(__this, L_4, NULL);
		int32_t L_5 = m9950(__this, NULL);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->f16 = L_6;
		int32_t L_7 = V_0;
		__this->f18 = L_7;
		return;
	}
}
extern TypeInfo* t1101_TI_var;
extern TypeInfo* t1794_TI_var;
extern "C" void m9960 (t1794 * __this, t47* p0, double p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1101_TI_var = il2cpp_codegen_type_info_from_index(1834);
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	int64_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int64_t V_13 = 0;
	{
		t47* L_0 = p0;
		m9954(__this, L_0, NULL);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		double L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1101_TI_var);
		int64_t L_3 = m9421(NULL, L_2, NULL);
		V_0 = L_3;
		int64_t L_4 = V_0;
		__this->f12 = ((((int32_t)((((int64_t)L_4) < ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_5 = V_0;
		V_0 = ((int64_t)((int64_t)L_5&(int64_t)((int64_t)std::numeric_limits<int64_t>::max())));
		int64_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		__this->f18 = 1;
		__this->f16 = 0;
		__this->f12 = 1;
		return;
	}

IL_0048:
	{
		int64_t L_7 = V_0;
		V_1 = (((int32_t)((int64_t)((int64_t)L_7>>(int32_t)((int32_t)52)))));
		int64_t L_8 = V_0;
		V_2 = ((int64_t)((int64_t)L_8&(int64_t)((int64_t)4503599627370495LL)));
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2047)))))
		{
			goto IL_007c;
		}
	}
	{
		int64_t L_10 = V_2;
		__this->f8 = ((((int32_t)((((int64_t)L_10) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_11 = V_2;
		__this->f9 = ((((int64_t)L_11) == ((int64_t)(((int64_t)0))))? 1 : 0);
		return;
	}

IL_007c:
	{
		V_3 = 0;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_00a3;
		}
	}
	{
		V_1 = 1;
		int64_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_14 = m9951(NULL, L_13, NULL);
		V_4 = L_14;
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)15))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_16 = V_4;
		V_3 = ((int32_t)((int32_t)L_16-(int32_t)((int32_t)15)));
		int64_t L_17 = V_2;
		int32_t L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int64_t L_19 = m9942(NULL, ((-L_18)), NULL);
		V_2 = ((int64_t)((int64_t)L_17*(int64_t)L_19));
	}

IL_00a1:
	{
		goto IL_00b8;
	}

IL_00a3:
	{
		int64_t L_20 = V_2;
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_20+(int64_t)((int64_t)4503599627370495LL)))+(int64_t)(((int64_t)1))))*(int64_t)(((int64_t)((int32_t)10)))));
		V_3 = (-1);
	}

IL_00b8:
	{
		int64_t L_21 = V_2;
		V_5 = (((uint64_t)(((uint32_t)L_21))));
		int64_t L_22 = V_2;
		V_6 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint64_t* L_23 = ((t1794_SFs*)t1794_TI_var->static_fields)->f0;
		int32_t L_24 = V_1;
		V_7 = (*((int64_t*)((intptr_t)((intptr_t)L_23+(int32_t)((int32_t)((int32_t)L_24*(int32_t)8))))));
		uint64_t L_25 = V_7;
		V_8 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_7;
		V_7 = (((uint64_t)(((uint32_t)L_26))));
		uint64_t L_27 = V_6;
		uint64_t L_28 = V_7;
		uint64_t L_29 = V_5;
		uint64_t L_30 = V_8;
		uint64_t L_31 = V_5;
		uint64_t L_32 = V_7;
		V_9 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_27*(int64_t)L_28))+(int64_t)((int64_t)((int64_t)L_29*(int64_t)L_30))))+(int64_t)((int64_t)((uint64_t)((int64_t)((int64_t)L_31*(int64_t)L_32))>>((int32_t)32)))));
		uint64_t L_33 = V_6;
		uint64_t L_34 = V_8;
		uint64_t L_35 = V_9;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_33*(int64_t)L_34))+(int64_t)((int64_t)((uint64_t)L_35>>((int32_t)32)))));
		goto IL_011e;
	}

IL_0101:
	{
		uint64_t L_36 = V_9;
		V_9 = ((int64_t)((int64_t)((int64_t)((int64_t)L_36&(int64_t)(((uint64_t)(((uint32_t)(-1)))))))*(int64_t)(((int64_t)((int32_t)10)))));
		int64_t L_37 = V_10;
		uint64_t L_38 = V_9;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_37*(int64_t)(((int64_t)((int32_t)10)))))+(int64_t)((int64_t)((uint64_t)L_38>>((int32_t)32)))));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)((int32_t)L_39-(int32_t)1));
	}

IL_011e:
	{
		int64_t L_40 = V_10;
		if ((((int64_t)L_40) < ((int64_t)((int64_t)10000000000000000LL))))
		{
			goto IL_0101;
		}
	}
	{
		uint64_t L_41 = V_9;
		if (!((int64_t)((int64_t)L_41&(int64_t)(((uint64_t)(((uint32_t)((int32_t)-2147483648))))))))
		{
			goto IL_013d;
		}
	}
	{
		int64_t L_42 = V_10;
		V_10 = ((int64_t)((int64_t)L_42+(int64_t)(((int64_t)1))));
	}

IL_013d:
	{
		V_11 = ((int32_t)17);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t* L_43 = ((t1794_SFs*)t1794_TI_var->static_fields)->f1;
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		int32_t L_46 = V_11;
		__this->f18 = ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_43+(int32_t)((int32_t)((int32_t)L_44*(int32_t)4))))))+(int32_t)L_45))+(int32_t)L_46));
		int32_t L_47 = m9952(__this, NULL);
		V_12 = L_47;
		int32_t L_48 = V_11;
		int32_t L_49 = V_12;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_50 = V_11;
		int32_t L_51 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int64_t L_52 = m9942(NULL, ((int32_t)((int32_t)L_50-(int32_t)L_51)), NULL);
		V_13 = L_52;
		int64_t L_53 = V_10;
		int64_t L_54 = V_13;
		int64_t L_55 = V_13;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_53+(int64_t)((int64_t)((int64_t)L_54>>(int32_t)1))))/(int64_t)L_55));
		int32_t L_56 = V_12;
		V_11 = L_56;
	}

IL_0180:
	{
		int64_t L_57 = V_10;
		int32_t L_58 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int64_t L_59 = m9942(NULL, L_58, NULL);
		if ((((int64_t)L_57) < ((int64_t)L_59)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_60 = V_11;
		V_11 = ((int32_t)((int32_t)L_60+(int32_t)1));
		int32_t L_61 = (__this->f18);
		__this->f18 = ((int32_t)((int32_t)L_61+(int32_t)1));
	}

IL_019f:
	{
		int64_t L_62 = V_10;
		m9944(__this, L_62, NULL);
		int32_t L_63 = m9980(__this, NULL);
		__this->f17 = L_63;
		int32_t L_64 = V_11;
		int32_t L_65 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_64-(int32_t)L_65));
		return;
	}
}
extern TypeInfo* t713_TI_var;
extern "C" void m9961 (t1794 * __this, t47* p0, t713  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t713_TI_var = il2cpp_codegen_type_info_from_index(986);
		s_Il2CppMethodIntialized = true;
	}
	t1018* V_0 = {0};
	int32_t V_1 = 0;
	{
		t47* L_0 = p0;
		m9954(__this, L_0, NULL);
		__this->f15 = ((int32_t)100);
		t713  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t713_TI_var);
		t1018* L_2 = m6159(NULL, L_1, NULL);
		V_0 = L_2;
		t1018* L_3 = V_0;
		int32_t L_4 = 3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4))&(int32_t)((int32_t)2031616)))>>(int32_t)((int32_t)16)));
		t1018* L_5 = V_0;
		int32_t L_6 = 3;
		__this->f12 = ((((int32_t)((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1018* L_7 = V_0;
		int32_t L_8 = 0;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)))
		{
			goto IL_0058;
		}
	}
	{
		t1018* L_9 = V_0;
		int32_t L_10 = 1;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)))
		{
			goto IL_0058;
		}
	}
	{
		t1018* L_11 = V_0;
		int32_t L_12 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_13 = V_1;
		__this->f18 = ((-L_13));
		__this->f12 = 1;
		__this->f16 = 0;
		return;
	}

IL_0058:
	{
		t1018* L_14 = V_0;
		int32_t L_15 = 2;
		t1018* L_16 = V_0;
		int32_t L_17 = 1;
		t1018* L_18 = V_0;
		int32_t L_19 = 0;
		m9945(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_15)), ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_17))))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)))))))), NULL);
		int32_t L_20 = m9950(__this, NULL);
		__this->f16 = L_20;
		int32_t L_21 = (__this->f16);
		int32_t L_22 = V_1;
		__this->f18 = ((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = (__this->f14);
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_009a;
		}
	}
	{
		uint16_t L_24 = (__this->f13);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)71))))
		{
			goto IL_00b9;
		}
	}

IL_009a:
	{
		int32_t L_25 = m9980(__this, NULL);
		__this->f17 = L_25;
		int32_t L_26 = (__this->f16);
		int32_t L_27 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_26-(int32_t)L_27));
	}

IL_00b9:
	{
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" void m9962 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f24 = 0;
		t221* L_0 = (__this->f23);
		int32_t L_1 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = p0;
		__this->f23 = ((t221*)SZArrayNew(t221_TI_var, L_2));
	}

IL_001e:
	{
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" void m9963 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	t221* V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = ((t221*)SZArrayNew(t221_TI_var, L_0));
		t221* L_1 = (__this->f23);
		t221* L_2 = V_0;
		int32_t L_3 = (__this->f24);
		m4651(NULL, (t52 *)(t52 *)L_1, (t52 *)(t52 *)L_2, L_3, NULL);
		t221* L_4 = V_0;
		__this->f23 = L_4;
		return;
	}
}
extern "C" void m9964 (t1794 * __this, uint16_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		t221* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t52 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m9963(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), NULL);
	}

IL_001f:
	{
		t221* L_3 = (__this->f23);
		int32_t L_4 = (__this->f24);
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->f24 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		uint16_t L_7 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_6)) = (uint16_t)L_7;
		return;
	}
}
extern "C" void m9965 (t1794 * __this, uint16_t p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		int32_t L_1 = p1;
		t221* L_2 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))) <= ((int32_t)(((int32_t)(((t52 *)L_2)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = (__this->f24);
		int32_t L_4 = p1;
		m9963(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))+(int32_t)((int32_t)10))), NULL);
	}

IL_0023:
	{
		goto IL_003e;
	}

IL_0025:
	{
		t221* L_5 = (__this->f23);
		int32_t L_6 = (__this->f24);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f24 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		uint16_t L_9 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_8)) = (uint16_t)L_9;
	}

IL_003e:
	{
		int32_t L_10 = p1;
		int32_t L_11 = L_10;
		p1 = ((int32_t)((int32_t)L_11-(int32_t)1));
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}
}
extern "C" void m9966 (t1794 * __this, t47* p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t47* L_0 = p0;
		int32_t L_1 = m1741(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->f24);
		int32_t L_3 = V_0;
		t221* L_4 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) <= ((int32_t)(((int32_t)(((t52 *)L_4)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = (__this->f24);
		int32_t L_6 = V_0;
		m9963(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))+(int32_t)((int32_t)10))), NULL);
	}

IL_002a:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_002e:
	{
		t221* L_7 = (__this->f23);
		int32_t L_8 = (__this->f24);
		int32_t L_9 = L_8;
		V_2 = L_9;
		__this->f24 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_2;
		t47* L_11 = p0;
		int32_t L_12 = V_1;
		uint16_t L_13 = m1754(L_11, L_12, NULL);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_10)) = (uint16_t)L_13;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t1436_TI_var;
extern "C" t1436 * m9967 (t1794 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1436_TI_var = il2cpp_codegen_type_info_from_index(2706);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1436 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		t7 * L_1 = p0;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1436 * L_2 = (__this->f7);
		return L_2;
	}

IL_0012:
	{
		t7 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1436_TI_var);
		t1436 * L_4 = m7446(NULL, L_3, NULL);
		return L_4;
	}
}
extern "C" void m9968 (t1794 * __this, t709 * p0, const MethodInfo* method)
{
	{
		t709 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		t709 * L_1 = p0;
		bool L_2 = m7344(L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t709 * L_3 = p0;
		t1436 * L_4 = (t1436 *)VirtFuncInvoker0< t1436 * >::Invoke(11 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_3);
		__this->f7 = L_4;
		goto IL_0020;
	}

IL_0019:
	{
		__this->f7 = (t1436 *)NULL;
	}

IL_0020:
	{
		return;
	}
}
extern "C" int32_t m9969 (t1794 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = (__this->f18);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m9970 (t1794 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = (__this->f18);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = (__this->f16);
		int32_t L_3 = (__this->f18);
		G_B3_0 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return G_B3_0;
	}
}
extern "C" bool m9971 (t1794 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f15);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = (__this->f15);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)7))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
extern "C" bool m9972 (t1794 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9973 (t1794 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f16);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = (__this->f18);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
extern "C" void m9974 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		m9976(__this, ((int32_t)((int32_t)L_0-(int32_t)L_1)), NULL);
		return;
	}
}
extern "C" bool m9975 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = (__this->f18);
		int32_t L_2 = p0;
		bool L_3 = m9976(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), NULL);
		return L_3;
	}
}
extern "C" bool m9976 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f16);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_004e;
		}
	}
	{
		__this->f16 = 0;
		__this->f18 = 1;
		int32_t L_3 = 0;
		V_4 = L_3;
		__this->f22 = L_3;
		uint32_t L_4 = V_4;
		uint32_t L_5 = L_4;
		V_4 = L_5;
		__this->f21 = L_5;
		uint32_t L_6 = V_4;
		uint32_t L_7 = L_6;
		V_4 = L_7;
		__this->f20 = L_7;
		uint32_t L_8 = V_4;
		__this->f19 = L_8;
		__this->f12 = 1;
		return 0;
	}

IL_004e:
	{
		int32_t L_9 = p0;
		int32_t L_10 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = (__this->f16);
		int32_t L_12 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		goto IL_00af;
	}

IL_006f:
	{
		uint32_t L_13 = (__this->f20);
		__this->f19 = L_13;
		uint32_t L_14 = (__this->f21);
		__this->f20 = L_14;
		uint32_t L_15 = (__this->f22);
		__this->f21 = L_15;
		__this->f22 = 0;
		int32_t L_16 = (__this->f16);
		__this->f16 = ((int32_t)((int32_t)L_16-(int32_t)8));
		int32_t L_17 = p0;
		p0 = ((int32_t)((int32_t)L_17-(int32_t)8));
	}

IL_00af:
	{
		int32_t L_18 = p0;
		if ((((int32_t)L_18) > ((int32_t)8)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_19 = p0;
		p0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)1))<<(int32_t)2));
		uint32_t L_20 = (__this->f19);
		int32_t L_21 = p0;
		V_0 = ((int32_t)((uint32_t)L_20>>((int32_t)((int32_t)L_21&(int32_t)((int32_t)31)))));
		uint32_t L_22 = V_0;
		V_1 = ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15)));
		uint32_t L_23 = V_0;
		uint32_t L_24 = V_1;
		int32_t L_25 = p0;
		__this->f19 = ((int32_t)((int32_t)((int32_t)((int32_t)L_23^(int32_t)L_24))<<(int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)31)))));
		V_2 = 0;
		uint32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) >= ((uint32_t)5))))
		{
			goto IL_0134;
		}
	}
	{
		uint32_t L_27 = (__this->f19);
		int32_t L_28 = p0;
		__this->f19 = ((int32_t)((int32_t)L_27|(int32_t)((int32_t)((uint32_t)((int32_t)-1717986919)>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)28)-(int32_t)L_28))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		m9978(__this, NULL);
		int32_t L_29 = m9950(__this, NULL);
		V_3 = L_29;
		int32_t L_30 = V_3;
		int32_t L_31 = (__this->f16);
		V_2 = ((((int32_t)((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = (__this->f18);
		int32_t L_33 = V_3;
		int32_t L_34 = (__this->f16);
		__this->f18 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32+(int32_t)L_33))-(int32_t)L_34));
		int32_t L_35 = V_3;
		__this->f16 = L_35;
	}

IL_0134:
	{
		m9977(__this, NULL);
		bool L_36 = V_2;
		return L_36;
	}
}
extern "C" void m9977 (t1794 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m9980(__this, NULL);
		__this->f17 = L_0;
		int32_t L_1 = (__this->f16);
		int32_t L_2 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		int32_t L_3 = (__this->f16);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		__this->f17 = 0;
		__this->f18 = 1;
		__this->f12 = 1;
	}

IL_003c:
	{
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9978 (t1794 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = (__this->f19);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0075;
		}
	}
	{
		__this->f19 = 0;
		uint32_t L_1 = (__this->f20);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0062;
		}
	}
	{
		__this->f20 = 0;
		uint32_t L_2 = (__this->f21);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_004f;
		}
	}
	{
		__this->f21 = 0;
		uint32_t L_3 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_4 = m9979(NULL, L_3, NULL);
		__this->f22 = L_4;
		goto IL_0060;
	}

IL_004f:
	{
		uint32_t L_5 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_6 = m9979(NULL, L_5, NULL);
		__this->f21 = L_6;
	}

IL_0060:
	{
		goto IL_0073;
	}

IL_0062:
	{
		uint32_t L_7 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_8 = m9979(NULL, L_7, NULL);
		__this->f20 = L_8;
	}

IL_0073:
	{
		goto IL_0086;
	}

IL_0075:
	{
		uint32_t L_9 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_10 = m9979(NULL, L_9, NULL);
		__this->f19 = L_10;
	}

IL_0086:
	{
		return;
	}
}
extern "C" uint32_t m9979 (t7 * __this , uint32_t p0, const MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535)))) == ((uint32_t)((int32_t)39321)))))
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_1 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)16777215)))) == ((uint32_t)((int32_t)10066329)))))
		{
			goto IL_003a;
		}
	}
	{
		uint32_t L_2 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)268435455)))) == ((uint32_t)((int32_t)161061273)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_3 = p0;
		return ((int32_t)((int32_t)L_3+(int32_t)((int32_t)107374183)));
	}

IL_0032:
	{
		uint32_t L_4 = p0;
		return ((int32_t)((int32_t)L_4+(int32_t)((int32_t)6710887)));
	}

IL_003a:
	{
		uint32_t L_5 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)1048575)))) == ((uint32_t)((int32_t)629145)))))
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_6 = p0;
		return ((int32_t)((int32_t)L_6+(int32_t)((int32_t)419431)));
	}

IL_0050:
	{
		uint32_t L_7 = p0;
		return ((int32_t)((int32_t)L_7+(int32_t)((int32_t)26215)));
	}

IL_0058:
	{
		uint32_t L_8 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)255)))) == ((uint32_t)((int32_t)153)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_9 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)4095)))) == ((uint32_t)((int32_t)2457)))))
		{
			goto IL_007c;
		}
	}
	{
		uint32_t L_10 = p0;
		return ((int32_t)((int32_t)L_10+(int32_t)((int32_t)1639)));
	}

IL_007c:
	{
		uint32_t L_11 = p0;
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)103)));
	}

IL_0081:
	{
		uint32_t L_12 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)15)))) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_13 = p0;
		return ((int32_t)((int32_t)L_13+(int32_t)7));
	}

IL_008d:
	{
		uint32_t L_14 = p0;
		return ((int32_t)((int32_t)L_14+(int32_t)1));
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" int32_t m9980 (t1794 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = (__this->f19);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_1 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_2 = m9981(NULL, L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		uint32_t L_3 = (__this->f20);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_4 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_5 = m9981(NULL, L_4, NULL);
		return ((int32_t)((int32_t)L_5+(int32_t)8));
	}

IL_002a:
	{
		uint32_t L_6 = (__this->f21);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_7 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_8 = m9981(NULL, L_7, NULL);
		return ((int32_t)((int32_t)L_8+(int32_t)((int32_t)16)));
	}

IL_0041:
	{
		uint32_t L_9 = (__this->f22);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_11 = m9981(NULL, L_10, NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)24)));
	}

IL_0058:
	{
		int32_t L_12 = (__this->f16);
		return L_12;
	}
}
extern "C" int32_t m9981 (t7 * __this , uint32_t p0, const MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if (((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_1 = p0;
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)16777215))))
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = p0;
		if (((int32_t)((int32_t)L_2&(int32_t)((int32_t)268435455))))
		{
			goto IL_001d;
		}
	}
	{
		return 7;
	}

IL_001d:
	{
		return 6;
	}

IL_001f:
	{
		uint32_t L_3 = p0;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)1048575))))
		{
			goto IL_002a;
		}
	}
	{
		return 5;
	}

IL_002a:
	{
		return 4;
	}

IL_002c:
	{
		uint32_t L_4 = p0;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)255))))
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_5 = p0;
		if (((int32_t)((int32_t)L_5&(int32_t)((int32_t)4095))))
		{
			goto IL_0040;
		}
	}
	{
		return 3;
	}

IL_0040:
	{
		return 2;
	}

IL_0042:
	{
		uint32_t L_6 = p0;
		if (((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))))
		{
			goto IL_004a;
		}
	}
	{
		return 1;
	}

IL_004a:
	{
		return 0;
	}
}
extern TypeInfo* t1794_TI_var;
extern TypeInfo* t1574_TI_var;
extern "C" t1794 * m9982 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		t1574_TI_var = il2cpp_codegen_type_info_from_index(2708);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = ((t1794_TSFs*)il2cpp_codegen_get_thread_static_data(t1794_TI_var))->f25;
		V_0 = L_0;
		((t1794_TSFs*)il2cpp_codegen_get_thread_static_data(t1794_TI_var))->f25 = (t1794 *)NULL;
		t1794 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1574_TI_var);
		t1574 * L_2 = m9338(NULL, NULL);
		t1794 * L_3 = (t1794 *)il2cpp_codegen_object_new (t1794_TI_var);
		m9939(L_3, L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		t1794 * L_4 = V_0;
		return L_4;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9983 (t1794 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		((t1794_TSFs*)il2cpp_codegen_get_thread_static_data(t1794_TI_var))->f25 = __this;
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m9984 (t7 * __this , t709 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = ((t1794_TSFs*)il2cpp_codegen_get_thread_static_data(t1794_TI_var))->f25;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_1 = ((t1794_TSFs*)il2cpp_codegen_get_thread_static_data(t1794_TI_var))->f25;
		t709 * L_2 = p0;
		m9968(L_1, L_2, NULL);
	}

IL_0012:
	{
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9985 (t7 * __this , t47* p0, int8_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		int8_t L_3 = p1;
		m9956(L_1, L_2, (((int32_t)L_3)), 3, NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9986 (t7 * __this , t47* p0, uint8_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		uint8_t L_3 = p1;
		m9956(L_1, L_2, L_3, 3, NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9987 (t7 * __this , t47* p0, uint16_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		uint16_t L_3 = p1;
		m9956(L_1, L_2, L_3, 5, NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9988 (t7 * __this , t47* p0, int16_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		int16_t L_3 = p1;
		m9956(L_1, L_2, L_3, 5, NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9989 (t7 * __this , t47* p0, uint32_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		uint32_t L_3 = p1;
		m9957(L_1, L_2, L_3, ((int32_t)10), NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9990 (t7 * __this , t47* p0, int32_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		int32_t L_3 = p1;
		m9956(L_1, L_2, L_3, ((int32_t)10), NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9991 (t7 * __this , t47* p0, uint64_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		uint64_t L_3 = p1;
		m9959(L_1, L_2, L_3, NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9992 (t7 * __this , t47* p0, int64_t p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		int64_t L_3 = p1;
		m9958(L_1, L_2, L_3, NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t7 * L_6 = p2;
		t47* L_7 = m10003(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		t1794 * L_8 = V_0;
		m9983(L_8, NULL);
		t47* L_9 = V_1;
		return L_9;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9993 (t7 * __this , t47* p0, float p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t1436 * V_1 = {0};
	t47* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		float L_3 = p1;
		m9960(L_1, L_2, (((double)L_3)), 7, NULL);
		t1794 * L_4 = V_0;
		t7 * L_5 = p2;
		t1436 * L_6 = m9967(L_4, L_5, NULL);
		V_1 = L_6;
		t1794 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1436 * L_9 = V_1;
		t47* L_10 = m7425(L_9, NULL);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t1794 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t1794 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1436 * L_15 = V_1;
		t47* L_16 = m7442(L_15, NULL);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1436 * L_17 = V_1;
		t47* L_18 = m7426(L_17, NULL);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t1794 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t1794 * L_21 = V_0;
		float L_22 = p1;
		t1436 * L_23 = V_1;
		t47* L_24 = m10010(L_21, L_22, L_23, NULL);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t1794 * L_25 = V_0;
		t47* L_26 = p0;
		t1436 * L_27 = V_1;
		t47* L_28 = m10004(L_25, L_26, L_27, NULL);
		V_2 = L_28;
	}

IL_0069:
	{
		t1794 * L_29 = V_0;
		m9983(L_29, NULL);
		t47* L_30 = V_2;
		return L_30;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9994 (t7 * __this , t47* p0, double p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t1436 * V_1 = {0};
	t47* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		double L_3 = p1;
		m9960(L_1, L_2, L_3, ((int32_t)15), NULL);
		t1794 * L_4 = V_0;
		t7 * L_5 = p2;
		t1436 * L_6 = m9967(L_4, L_5, NULL);
		V_1 = L_6;
		t1794 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1436 * L_9 = V_1;
		t47* L_10 = m7425(L_9, NULL);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t1794 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t1794 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1436 * L_15 = V_1;
		t47* L_16 = m7442(L_15, NULL);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1436 * L_17 = V_1;
		t47* L_18 = m7426(L_17, NULL);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t1794 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t1794 * L_21 = V_0;
		double L_22 = p1;
		t1436 * L_23 = V_1;
		t47* L_24 = m10009(L_21, L_22, L_23, NULL);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t1794 * L_25 = V_0;
		t47* L_26 = p0;
		t1436 * L_27 = V_1;
		t47* L_28 = m10004(L_25, L_26, L_27, NULL);
		V_2 = L_28;
	}

IL_0069:
	{
		t1794 * L_29 = V_0;
		m9983(L_29, NULL);
		t47* L_30 = V_2;
		return L_30;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9995 (t7 * __this , t47* p0, t713  p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t47* L_2 = p0;
		t713  L_3 = p1;
		m9961(L_1, L_2, L_3, NULL);
		t1794 * L_4 = V_0;
		t47* L_5 = p0;
		t1794 * L_6 = V_0;
		t7 * L_7 = p2;
		t1436 * L_8 = m9967(L_6, L_7, NULL);
		t47* L_9 = m10004(L_4, L_5, L_8, NULL);
		V_1 = L_9;
		t1794 * L_10 = V_0;
		m9983(L_10, NULL);
		t47* L_11 = V_1;
		return L_11;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9996 (t7 * __this , uint32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000000)))))
		{
			goto IL_0011;
		}
	}
	{
		uint32_t L_1 = p0;
		t7 * L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t47* L_3 = m9989(NULL, (t47*)NULL, L_1, L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_4 = m9982(NULL, NULL);
		V_0 = L_4;
		t1794 * L_5 = V_0;
		uint32_t L_6 = p0;
		t7 * L_7 = p1;
		t47* L_8 = m10002(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		t1794 * L_9 = V_0;
		m9983(L_9, NULL);
		t47* L_10 = V_1;
		return L_10;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9997 (t7 * __this , int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100000000))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-100000000))))
		{
			goto IL_0019;
		}
	}

IL_0010:
	{
		int32_t L_2 = p0;
		t7 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t47* L_4 = m9990(NULL, (t47*)NULL, L_2, L_3, NULL);
		return L_4;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_5 = m9982(NULL, NULL);
		V_0 = L_5;
		t1794 * L_6 = V_0;
		int32_t L_7 = p0;
		t7 * L_8 = p1;
		t47* L_9 = m10002(L_6, L_7, L_8, NULL);
		V_1 = L_9;
		t1794 * L_10 = V_0;
		m9983(L_10, NULL);
		t47* L_11 = V_1;
		return L_11;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9998 (t7 * __this , uint64_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_1 = p0;
		t7 * L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t47* L_3 = m9991(NULL, (t47*)NULL, L_1, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_4 = m9982(NULL, NULL);
		V_0 = L_4;
		t1794 * L_5 = V_0;
		uint64_t L_6 = p0;
		t7 * L_7 = p1;
		t47* L_8 = m10002(L_5, (((int32_t)L_6)), L_7, NULL);
		V_1 = L_8;
		t1794 * L_9 = V_0;
		m9983(L_9, NULL);
		t47* L_10 = V_1;
		return L_10;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m9999 (t7 * __this , int64_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int32_t)100000000))))))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) > ((int64_t)(((int64_t)((int32_t)-100000000))))))
		{
			goto IL_001b;
		}
	}

IL_0012:
	{
		int64_t L_2 = p0;
		t7 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t47* L_4 = m9992(NULL, (t47*)NULL, L_2, L_3, NULL);
		return L_4;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_5 = m9982(NULL, NULL);
		V_0 = L_5;
		t1794 * L_6 = V_0;
		int64_t L_7 = p0;
		t7 * L_8 = p1;
		t47* L_9 = m10002(L_6, (((int32_t)L_7)), L_8, NULL);
		V_1 = L_9;
		t1794 * L_10 = V_0;
		m9983(L_10, NULL);
		t47* L_11 = V_1;
		return L_11;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m10000 (t7 * __this , float p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t1436 * V_1 = {0};
	t47* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		float L_2 = p0;
		m9960(L_1, (t47*)NULL, (((double)L_2)), 7, NULL);
		t1794 * L_3 = V_0;
		t7 * L_4 = p1;
		t1436 * L_5 = m9967(L_3, L_4, NULL);
		V_1 = L_5;
		t1794 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1436 * L_8 = V_1;
		t47* L_9 = m7425(L_8, NULL);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t1794 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t1794 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1436 * L_14 = V_1;
		t47* L_15 = m7442(L_14, NULL);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1436 * L_16 = V_1;
		t47* L_17 = m7426(L_16, NULL);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t1794 * L_18 = V_0;
		t1436 * L_19 = V_1;
		t47* L_20 = m10011(L_18, (-1), L_19, NULL);
		V_2 = L_20;
	}

IL_0054:
	{
		t1794 * L_21 = V_0;
		m9983(L_21, NULL);
		t47* L_22 = V_2;
		return L_22;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t47* m10001 (t7 * __this , double p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	t1794 * V_0 = {0};
	t1436 * V_1 = {0};
	t47* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		t1794 * L_0 = m9982(NULL, NULL);
		V_0 = L_0;
		t1794 * L_1 = V_0;
		t7 * L_2 = p1;
		t1436 * L_3 = m9967(L_1, L_2, NULL);
		V_1 = L_3;
		t1794 * L_4 = V_0;
		double L_5 = p0;
		m9960(L_4, (t47*)NULL, L_5, ((int32_t)15), NULL);
		t1794 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1436 * L_8 = V_1;
		t47* L_9 = m7425(L_8, NULL);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t1794 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t1794 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1436 * L_14 = V_1;
		t47* L_15 = m7442(L_14, NULL);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1436 * L_16 = V_1;
		t47* L_17 = m7426(L_16, NULL);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t1794 * L_18 = V_0;
		t1436 * L_19 = V_1;
		t47* L_20 = m10011(L_18, (-1), L_19, NULL);
		V_2 = L_20;
	}

IL_0054:
	{
		t1794 * L_21 = V_0;
		m9983(L_21, NULL);
		t47* L_22 = V_2;
		return L_22;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10002 (t1794 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		t7 * L_1 = p1;
		t1436 * L_2 = m9967(__this, L_1, NULL);
		t47* L_3 = m7427(L_2, NULL);
		V_0 = L_3;
		t47* L_4 = V_0;
		int32_t L_5 = m1741(L_4, NULL);
		m9962(__this, ((int32_t)((int32_t)8+(int32_t)L_5)), NULL);
		int32_t L_6 = p0;
		p0 = ((-L_6));
		t47* L_7 = V_0;
		m9966(__this, L_7, NULL);
		goto IL_0035;
	}

IL_002e:
	{
		m9962(__this, 8, NULL);
	}

IL_0035:
	{
		int32_t L_8 = p0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)10000))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = p0;
		V_1 = ((int32_t)((int32_t)L_9/(int32_t)((int32_t)10000)));
		int32_t L_10 = V_1;
		m10027(__this, L_10, 0, NULL);
		int32_t L_11 = p0;
		int32_t L_12 = V_1;
		m10027(__this, ((int32_t)((int32_t)L_11-(int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)10000))))), 1, NULL);
		goto IL_0067;
	}

IL_005f:
	{
		int32_t L_13 = p0;
		m10027(__this, L_13, 0, NULL);
	}

IL_0067:
	{
		t221* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		t47* L_16 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_16 = m3302(L_16, L_14, 0, L_15, NULL);
		return L_16;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" t47* m10003 (t1794 * __this, t47* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	t1436 * V_0 = {0};
	uint16_t V_1 = 0x0;
	{
		t7 * L_0 = p1;
		t1436 * L_1 = m9967(__this, L_0, NULL);
		V_0 = L_1;
		uint16_t L_2 = (__this->f13);
		V_1 = L_2;
		uint16_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 0)
		{
			goto IL_005a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 1)
		{
			goto IL_0068;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 2)
		{
			goto IL_0076;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 3)
		{
			goto IL_0084;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 4)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 5)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 6)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 7)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 8)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 9)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 10)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 11)
		{
			goto IL_00b2;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 12)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 13)
		{
			goto IL_00c0;
		}
	}

IL_0050:
	{
		uint16_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)88))))
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_00db;
	}

IL_005a:
	{
		int32_t L_5 = (__this->f14);
		t1436 * L_6 = V_0;
		t47* L_7 = m10005(__this, L_5, L_6, NULL);
		return L_7;
	}

IL_0068:
	{
		int32_t L_8 = (__this->f14);
		t1436 * L_9 = V_0;
		t47* L_10 = m10006(__this, L_8, L_9, NULL);
		return L_10;
	}

IL_0076:
	{
		int32_t L_11 = (__this->f14);
		t1436 * L_12 = V_0;
		t47* L_13 = m10014(__this, L_11, L_12, NULL);
		return L_13;
	}

IL_0084:
	{
		int32_t L_14 = (__this->f14);
		t1436 * L_15 = V_0;
		t47* L_16 = m10008(__this, L_14, L_15, NULL);
		return L_16;
	}

IL_0092:
	{
		int32_t L_17 = (__this->f14);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		t1436 * L_18 = V_0;
		t47* L_19 = m10006(__this, (-1), L_18, NULL);
		return L_19;
	}

IL_00a4:
	{
		int32_t L_20 = (__this->f14);
		t1436 * L_21 = V_0;
		t47* L_22 = m10011(__this, L_20, L_21, NULL);
		return L_22;
	}

IL_00b2:
	{
		int32_t L_23 = (__this->f14);
		t1436 * L_24 = V_0;
		t47* L_25 = m10012(__this, L_23, L_24, NULL);
		return L_25;
	}

IL_00c0:
	{
		int32_t L_26 = (__this->f14);
		t1436 * L_27 = V_0;
		t47* L_28 = m10013(__this, L_26, L_27, NULL);
		return L_28;
	}

IL_00ce:
	{
		int32_t L_29 = (__this->f14);
		t47* L_30 = m10007(__this, L_29, NULL);
		return L_30;
	}

IL_00db:
	{
		bool L_31 = (__this->f10);
		if (!L_31)
		{
			goto IL_00ec;
		}
	}
	{
		t47* L_32 = p0;
		t1436 * L_33 = V_0;
		t47* L_34 = m10016(__this, L_32, L_33, NULL);
		return L_34;
	}

IL_00ec:
	{
		t47* L_35 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_36 = m205(NULL, (t47*) &_stringLiteral2373, L_35, (t47*) &_stringLiteral2374, NULL);
		t700 * L_37 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_37, L_36, NULL);
		il2cpp_codegen_raise_exception(L_37);
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" t47* m10004 (t1794 * __this, t47* p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		uint16_t L_0 = (__this->f13);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 0)
		{
			goto IL_0040;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 1)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 2)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 3)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 4)
		{
			goto IL_006a;
		}
	}

IL_0024:
	{
		uint16_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 0)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 1)
		{
			goto IL_0039;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 2)
		{
			goto IL_0086;
		}
	}

IL_0039:
	{
		uint16_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)88))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0094;
	}

IL_0040:
	{
		int32_t L_4 = (__this->f14);
		t1436 * L_5 = p1;
		t47* L_6 = m10005(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_004e:
	{
		int32_t L_7 = (__this->f14);
		t1436 * L_8 = p1;
		t47* L_9 = m10014(__this, L_7, L_8, NULL);
		return L_9;
	}

IL_005c:
	{
		int32_t L_10 = (__this->f14);
		t1436 * L_11 = p1;
		t47* L_12 = m10008(__this, L_10, L_11, NULL);
		return L_12;
	}

IL_006a:
	{
		int32_t L_13 = (__this->f14);
		t1436 * L_14 = p1;
		t47* L_15 = m10011(__this, L_13, L_14, NULL);
		return L_15;
	}

IL_0078:
	{
		int32_t L_16 = (__this->f14);
		t1436 * L_17 = p1;
		t47* L_18 = m10012(__this, L_16, L_17, NULL);
		return L_18;
	}

IL_0086:
	{
		int32_t L_19 = (__this->f14);
		t1436 * L_20 = p1;
		t47* L_21 = m10013(__this, L_19, L_20, NULL);
		return L_21;
	}

IL_0094:
	{
		bool L_22 = (__this->f10);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		t47* L_23 = p0;
		t1436 * L_24 = p1;
		t47* L_25 = m10016(__this, L_23, L_24, NULL);
		return L_25;
	}

IL_00a5:
	{
		t47* L_26 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_27 = m205(NULL, (t47*) &_stringLiteral2373, L_26, (t47*) &_stringLiteral2374, NULL);
		t700 * L_28 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_28, L_27, NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10005 (t1794 * __this, int32_t p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = p0;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		t1436 * L_2 = p1;
		int32_t L_3 = m7416(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = p0;
		m9975(__this, L_4, NULL);
		int32_t L_5 = m9969(__this, NULL);
		int32_t L_6 = p0;
		m9962(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)((int32_t)((int32_t)L_6*(int32_t)2))))+(int32_t)((int32_t)16))), NULL);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1436 * L_8 = p1;
		int32_t L_9 = m7421(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10 == 0)
		{
			goto IL_0051;
		}
		if (L_10 == 1)
		{
			goto IL_0075;
		}
		if (L_10 == 2)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0075;
	}

IL_0051:
	{
		t1436 * L_11 = p1;
		t47* L_12 = m7422(L_11, NULL);
		m9966(__this, L_12, NULL);
		goto IL_0075;
	}

IL_005f:
	{
		t1436 * L_13 = p1;
		t47* L_14 = m7422(L_13, NULL);
		m9966(__this, L_14, NULL);
		m9964(__this, ((int32_t)32), NULL);
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_01e1;
	}

IL_007a:
	{
		t1436 * L_15 = p1;
		int32_t L_16 = m7420(L_15, NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if (L_17 == 0)
		{
			goto IL_00cc;
		}
		if (L_17 == 1)
		{
			goto IL_00e5;
		}
		if (L_17 == 2)
		{
			goto IL_0102;
		}
		if (L_17 == 3)
		{
			goto IL_011f;
		}
		if (L_17 == 4)
		{
			goto IL_0130;
		}
		if (L_17 == 5)
		{
			goto IL_013d;
		}
		if (L_17 == 6)
		{
			goto IL_01e1;
		}
		if (L_17 == 7)
		{
			goto IL_01e1;
		}
		if (L_17 == 8)
		{
			goto IL_014e;
		}
		if (L_17 == 9)
		{
			goto IL_015f;
		}
		if (L_17 == 10)
		{
			goto IL_01e1;
		}
		if (L_17 == 11)
		{
			goto IL_0181;
		}
		if (L_17 == 12)
		{
			goto IL_0197;
		}
		if (L_17 == 13)
		{
			goto IL_01e1;
		}
		if (L_17 == 14)
		{
			goto IL_01b9;
		}
		if (L_17 == 15)
		{
			goto IL_01d7;
		}
	}
	{
		goto IL_01e1;
	}

IL_00cc:
	{
		m9964(__this, ((int32_t)40), NULL);
		t1436 * L_18 = p1;
		t47* L_19 = m7422(L_18, NULL);
		m9966(__this, L_19, NULL);
		goto IL_01e1;
	}

IL_00e5:
	{
		t1436 * L_20 = p1;
		t47* L_21 = m7427(L_20, NULL);
		m9966(__this, L_21, NULL);
		t1436 * L_22 = p1;
		t47* L_23 = m7422(L_22, NULL);
		m9966(__this, L_23, NULL);
		goto IL_01e1;
	}

IL_0102:
	{
		t1436 * L_24 = p1;
		t47* L_25 = m7422(L_24, NULL);
		m9966(__this, L_25, NULL);
		t1436 * L_26 = p1;
		t47* L_27 = m7427(L_26, NULL);
		m9966(__this, L_27, NULL);
		goto IL_01e1;
	}

IL_011f:
	{
		t1436 * L_28 = p1;
		t47* L_29 = m7422(L_28, NULL);
		m9966(__this, L_29, NULL);
		goto IL_01e1;
	}

IL_0130:
	{
		m9964(__this, ((int32_t)40), NULL);
		goto IL_01e1;
	}

IL_013d:
	{
		t1436 * L_30 = p1;
		t47* L_31 = m7427(L_30, NULL);
		m9966(__this, L_31, NULL);
		goto IL_01e1;
	}

IL_014e:
	{
		t1436 * L_32 = p1;
		t47* L_33 = m7427(L_32, NULL);
		m9966(__this, L_33, NULL);
		goto IL_01e1;
	}

IL_015f:
	{
		t1436 * L_34 = p1;
		t47* L_35 = m7427(L_34, NULL);
		m9966(__this, L_35, NULL);
		t1436 * L_36 = p1;
		t47* L_37 = m7422(L_36, NULL);
		m9966(__this, L_37, NULL);
		m9964(__this, ((int32_t)32), NULL);
		goto IL_01e1;
	}

IL_0181:
	{
		t1436 * L_38 = p1;
		t47* L_39 = m7422(L_38, NULL);
		m9966(__this, L_39, NULL);
		m9964(__this, ((int32_t)32), NULL);
		goto IL_01e1;
	}

IL_0197:
	{
		t1436 * L_40 = p1;
		t47* L_41 = m7422(L_40, NULL);
		m9966(__this, L_41, NULL);
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_42 = p1;
		t47* L_43 = m7427(L_42, NULL);
		m9966(__this, L_43, NULL);
		goto IL_01e1;
	}

IL_01b9:
	{
		m9964(__this, ((int32_t)40), NULL);
		t1436 * L_44 = p1;
		t47* L_45 = m7422(L_44, NULL);
		m9966(__this, L_45, NULL);
		m9964(__this, ((int32_t)32), NULL);
		goto IL_01e1;
	}

IL_01d7:
	{
		m9964(__this, ((int32_t)40), NULL);
		goto IL_01e1;
	}

IL_01e1:
	{
		t1436 * L_46 = p1;
		t1018* L_47 = m7419(L_46, NULL);
		t1436 * L_48 = p1;
		t47* L_49 = m7418(L_48, NULL);
		m10024(__this, L_47, L_49, NULL);
		int32_t L_50 = p0;
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_020a;
		}
	}
	{
		t1436 * L_51 = p1;
		t47* L_52 = m7417(L_51, NULL);
		m9966(__this, L_52, NULL);
		int32_t L_53 = p0;
		m10023(__this, L_53, NULL);
	}

IL_020a:
	{
		bool L_54 = (__this->f12);
		if (!L_54)
		{
			goto IL_0258;
		}
	}
	{
		t1436 * L_55 = p1;
		int32_t L_56 = m7421(L_55, NULL);
		V_0 = L_56;
		int32_t L_57 = V_0;
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 0)
		{
			goto IL_022f;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 1)
		{
			goto IL_0253;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 2)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_0253;
	}

IL_022f:
	{
		t1436 * L_58 = p1;
		t47* L_59 = m7422(L_58, NULL);
		m9966(__this, L_59, NULL);
		goto IL_0253;
	}

IL_023d:
	{
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_60 = p1;
		t47* L_61 = m7422(L_60, NULL);
		m9966(__this, L_61, NULL);
		goto IL_0253;
	}

IL_0253:
	{
		goto IL_03bf;
	}

IL_0258:
	{
		t1436 * L_62 = p1;
		int32_t L_63 = m7420(L_62, NULL);
		V_0 = L_63;
		int32_t L_64 = V_0;
		if (L_64 == 0)
		{
			goto IL_02aa;
		}
		if (L_64 == 1)
		{
			goto IL_03bf;
		}
		if (L_64 == 2)
		{
			goto IL_03bf;
		}
		if (L_64 == 3)
		{
			goto IL_02b7;
		}
		if (L_64 == 4)
		{
			goto IL_02c8;
		}
		if (L_64 == 5)
		{
			goto IL_02e1;
		}
		if (L_64 == 6)
		{
			goto IL_02f2;
		}
		if (L_64 == 7)
		{
			goto IL_030f;
		}
		if (L_64 == 8)
		{
			goto IL_032c;
		}
		if (L_64 == 9)
		{
			goto IL_03bf;
		}
		if (L_64 == 10)
		{
			goto IL_0345;
		}
		if (L_64 == 11)
		{
			goto IL_0367;
		}
		if (L_64 == 12)
		{
			goto IL_03bf;
		}
		if (L_64 == 13)
		{
			goto IL_0375;
		}
		if (L_64 == 14)
		{
			goto IL_0397;
		}
		if (L_64 == 15)
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_03bf;
	}

IL_02aa:
	{
		m9964(__this, ((int32_t)41), NULL);
		goto IL_03bf;
	}

IL_02b7:
	{
		t1436 * L_65 = p1;
		t47* L_66 = m7427(L_65, NULL);
		m9966(__this, L_66, NULL);
		goto IL_03bf;
	}

IL_02c8:
	{
		t1436 * L_67 = p1;
		t47* L_68 = m7422(L_67, NULL);
		m9966(__this, L_68, NULL);
		m9964(__this, ((int32_t)41), NULL);
		goto IL_03bf;
	}

IL_02e1:
	{
		t1436 * L_69 = p1;
		t47* L_70 = m7422(L_69, NULL);
		m9966(__this, L_70, NULL);
		goto IL_03bf;
	}

IL_02f2:
	{
		t1436 * L_71 = p1;
		t47* L_72 = m7427(L_71, NULL);
		m9966(__this, L_72, NULL);
		t1436 * L_73 = p1;
		t47* L_74 = m7422(L_73, NULL);
		m9966(__this, L_74, NULL);
		goto IL_03bf;
	}

IL_030f:
	{
		t1436 * L_75 = p1;
		t47* L_76 = m7422(L_75, NULL);
		m9966(__this, L_76, NULL);
		t1436 * L_77 = p1;
		t47* L_78 = m7427(L_77, NULL);
		m9966(__this, L_78, NULL);
		goto IL_03bf;
	}

IL_032c:
	{
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_79 = p1;
		t47* L_80 = m7422(L_79, NULL);
		m9966(__this, L_80, NULL);
		goto IL_03bf;
	}

IL_0345:
	{
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_81 = p1;
		t47* L_82 = m7422(L_81, NULL);
		m9966(__this, L_82, NULL);
		t1436 * L_83 = p1;
		t47* L_84 = m7427(L_83, NULL);
		m9966(__this, L_84, NULL);
		goto IL_03bf;
	}

IL_0367:
	{
		t1436 * L_85 = p1;
		t47* L_86 = m7427(L_85, NULL);
		m9966(__this, L_86, NULL);
		goto IL_03bf;
	}

IL_0375:
	{
		t1436 * L_87 = p1;
		t47* L_88 = m7427(L_87, NULL);
		m9966(__this, L_88, NULL);
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_89 = p1;
		t47* L_90 = m7422(L_89, NULL);
		m9966(__this, L_90, NULL);
		goto IL_03bf;
	}

IL_0397:
	{
		m9964(__this, ((int32_t)41), NULL);
		goto IL_03bf;
	}

IL_03a1:
	{
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_91 = p1;
		t47* L_92 = m7422(L_91, NULL);
		m9966(__this, L_92, NULL);
		m9964(__this, ((int32_t)41), NULL);
		goto IL_03bf;
	}

IL_03bf:
	{
		t221* L_93 = (__this->f23);
		int32_t L_94 = (__this->f24);
		t47* L_95 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_95 = m3302(L_95, L_93, 0, L_94, NULL);
		return L_95;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10006 (t1794 * __this, int32_t p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f16);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = (__this->f16);
		p0 = L_2;
	}

IL_0013:
	{
		int32_t L_3 = p0;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (t47*) &_stringLiteral647;
	}

IL_001c:
	{
		int32_t L_4 = p0;
		m9962(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), NULL);
		bool L_5 = (__this->f12);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		t1436 * L_6 = p1;
		t47* L_7 = m7427(L_6, NULL);
		m9966(__this, L_7, NULL);
	}

IL_0039:
	{
		int32_t L_8 = p0;
		m10028(__this, 0, L_8, NULL);
		t221* L_9 = (__this->f23);
		int32_t L_10 = (__this->f24);
		t47* L_11 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_11 = m3302(L_11, L_9, 0, L_10, NULL);
		return L_11;
	}
}
extern TypeInfo* t1794_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m10007 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t* V_1 = {0};
	uint64_t V_2 = 0;
	uint16_t* G_B3_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f18);
		int32_t L_2 = m5611(NULL, L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = (__this->f11);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint16_t* L_4 = ((t1794_SFs*)t1794_TI_var->static_fields)->f3;
		G_B3_0 = L_4;
		goto IL_0021;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint16_t* L_5 = ((t1794_SFs*)t1794_TI_var->static_fields)->f2;
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_1 = (uint16_t*)G_B3_0;
		int32_t L_6 = V_0;
		m9962(__this, L_6, NULL);
		int32_t L_7 = V_0;
		__this->f24 = L_7;
		uint32_t L_8 = (__this->f19);
		uint32_t L_9 = (__this->f20);
		V_2 = ((int64_t)((int64_t)(((uint64_t)L_8))|(int64_t)((int64_t)((int64_t)(((uint64_t)L_9))<<(int32_t)((int32_t)32)))));
		goto IL_0061;
	}

IL_0045:
	{
		t221* L_10 = (__this->f23);
		int32_t L_11 = V_0;
		int32_t L_12 = ((int32_t)((int32_t)L_11-(int32_t)1));
		V_0 = L_12;
		uint16_t* L_13 = V_1;
		uint64_t L_14 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_12)) = (uint16_t)(*((uint16_t*)((intptr_t)((intptr_t)L_13+(intptr_t)(((uintptr_t)((int64_t)((int64_t)((int64_t)((int64_t)L_14&(int64_t)(((int64_t)((int32_t)15)))))*(int64_t)(((int64_t)2))))))))));
		uint64_t L_15 = V_2;
		V_2 = ((int64_t)((uint64_t)L_15>>4));
	}

IL_0061:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		t221* L_17 = (__this->f23);
		int32_t L_18 = (__this->f24);
		t47* L_19 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_19 = m3302(L_19, L_17, 0, L_18, NULL);
		return L_19;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10008 (t1794 * __this, int32_t p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		t1436 * L_1 = p1;
		int32_t L_2 = m7428(L_1, NULL);
		p0 = L_2;
	}

IL_000e:
	{
		int32_t L_3 = p0;
		m9975(__this, L_3, NULL);
		int32_t L_4 = m9969(__this, NULL);
		int32_t L_5 = p0;
		m9962(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)2)), NULL);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1436 * L_7 = p1;
		t47* L_8 = m7427(L_7, NULL);
		m9966(__this, L_8, NULL);
	}

IL_003a:
	{
		int32_t L_9 = m9969(__this, NULL);
		m10021(__this, L_9, NULL);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		t1436 * L_11 = p1;
		t47* L_12 = m7429(L_11, NULL);
		m9966(__this, L_12, NULL);
		int32_t L_13 = p0;
		m10023(__this, L_13, NULL);
	}

IL_005d:
	{
		t221* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		t47* L_16 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_16 = m3302(L_16, L_14, 0, L_15, NULL);
		return L_16;
	}
}
extern "C" t47* m10009 (t1794 * __this, double p0, t1436 * p1, const MethodInfo* method)
{
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		t1794 * L_0 = m10032(__this, NULL);
		V_0 = L_0;
		double L_1 = p0;
		if ((!(((double)L_1) >= ((double)(-1.79769313486231E+308)))))
		{
			goto IL_0039;
		}
	}
	{
		double L_2 = p0;
		if ((!(((double)L_2) <= ((double)(1.79769313486231E+308)))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = (__this->f15);
		t1436 * L_4 = p1;
		t47* L_5 = m10011(__this, L_3, L_4, NULL);
		V_1 = L_5;
		double L_6 = p0;
		t47* L_7 = V_1;
		t1436 * L_8 = p1;
		double L_9 = m6129(NULL, L_7, L_8, NULL);
		if ((!(((double)L_6) == ((double)L_9))))
		{
			goto IL_0039;
		}
	}
	{
		t47* L_10 = V_1;
		return L_10;
	}

IL_0039:
	{
		t1794 * L_11 = V_0;
		int32_t L_12 = (__this->f15);
		t1436 * L_13 = p1;
		t47* L_14 = m10011(L_11, ((int32_t)((int32_t)L_12+(int32_t)2)), L_13, NULL);
		return L_14;
	}
}
extern "C" t47* m10010 (t1794 * __this, float p0, t1436 * p1, const MethodInfo* method)
{
	t1794 * V_0 = {0};
	t47* V_1 = {0};
	{
		t1794 * L_0 = m10032(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->f15);
		t1436 * L_2 = p1;
		t47* L_3 = m10011(__this, L_1, L_2, NULL);
		V_1 = L_3;
		float L_4 = p0;
		t47* L_5 = V_1;
		t1436 * L_6 = p1;
		float L_7 = m6101(NULL, L_5, L_6, NULL);
		if ((!(((float)L_4) == ((float)L_7))))
		{
			goto IL_0021;
		}
	}
	{
		t47* L_8 = V_1;
		return L_8;
	}

IL_0021:
	{
		t1794 * L_9 = V_0;
		int32_t L_10 = (__this->f15);
		t1436 * L_11 = p1;
		t47* L_12 = m10011(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), L_11, NULL);
		return L_12;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10011 (t1794 * __this, int32_t p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m9971(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->f15);
		p0 = L_2;
		goto IL_002d;
	}

IL_0017:
	{
		V_0 = 1;
		int32_t L_3 = p0;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = (__this->f15);
		p0 = L_4;
	}

IL_0026:
	{
		int32_t L_5 = p0;
		m9974(__this, L_5, NULL);
	}

IL_002d:
	{
		int32_t L_6 = (__this->f18);
		V_1 = L_6;
		int32_t L_7 = (__this->f16);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		int32_t L_10 = V_1;
		int32_t L_11 = p0;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)-4))))
		{
			goto IL_0057;
		}
	}

IL_0048:
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_14 = V_2;
		t1436 * L_15 = p1;
		t47* L_16 = m10015(__this, ((int32_t)((int32_t)L_14-(int32_t)1)), L_15, 2, NULL);
		return L_16;
	}

IL_0057:
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		V_3 = 0;
	}

IL_005d:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		V_1 = 0;
	}

IL_0063:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_1;
		m9962(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20))+(int32_t)3)), NULL);
		bool L_21 = (__this->f12);
		if (L_21)
		{
			goto IL_0082;
		}
	}
	{
		t1436 * L_22 = p1;
		t47* L_23 = m7427(L_22, NULL);
		m9966(__this, L_23, NULL);
	}

IL_0082:
	{
		int32_t L_24 = V_1;
		if (L_24)
		{
			goto IL_008f;
		}
	}
	{
		m9964(__this, ((int32_t)48), NULL);
		goto IL_0099;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		m10028(__this, ((int32_t)((int32_t)L_25-(int32_t)L_26)), L_27, NULL);
	}

IL_0099:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		t1436 * L_29 = p1;
		t47* L_30 = m7429(L_29, NULL);
		m9966(__this, L_30, NULL);
		int32_t L_31 = V_3;
		m10028(__this, 0, L_31, NULL);
	}

IL_00b1:
	{
		t221* L_32 = (__this->f23);
		int32_t L_33 = (__this->f24);
		t47* L_34 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_34 = m3302(L_34, L_32, 0, L_33, NULL);
		return L_34;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10012 (t1794 * __this, int32_t p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = p0;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		t1436 * L_2 = p1;
		int32_t L_3 = m7428(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = m9969(__this, NULL);
		int32_t L_5 = p0;
		m9962(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4*(int32_t)3))+(int32_t)L_5)), NULL);
		int32_t L_6 = p0;
		m9975(__this, L_6, NULL);
		bool L_7 = (__this->f12);
		if (L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1436 * L_8 = p1;
		int32_t L_9 = m7432(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10 == 0)
		{
			goto IL_004c;
		}
		if (L_10 == 1)
		{
			goto IL_0056;
		}
		if (L_10 == 2)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_007a;
	}

IL_004c:
	{
		m9964(__this, ((int32_t)40), NULL);
		goto IL_007a;
	}

IL_0056:
	{
		t1436 * L_11 = p1;
		t47* L_12 = m7427(L_11, NULL);
		m9966(__this, L_12, NULL);
		goto IL_007a;
	}

IL_0064:
	{
		t1436 * L_13 = p1;
		t47* L_14 = m7427(L_13, NULL);
		m9966(__this, L_14, NULL);
		m9964(__this, ((int32_t)32), NULL);
		goto IL_007a;
	}

IL_007a:
	{
		t1436 * L_15 = p1;
		t1018* L_16 = m7431(L_15, NULL);
		t1436 * L_17 = p1;
		t47* L_18 = m7430(L_17, NULL);
		m10024(__this, L_16, L_18, NULL);
		int32_t L_19 = p0;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		t1436 * L_20 = p1;
		t47* L_21 = m7429(L_20, NULL);
		m9966(__this, L_21, NULL);
		int32_t L_22 = p0;
		m10023(__this, L_22, NULL);
	}

IL_00a3:
	{
		bool L_23 = (__this->f12);
		if (L_23)
		{
			goto IL_00fc;
		}
	}
	{
		t1436 * L_24 = p1;
		int32_t L_25 = m7432(L_24, NULL);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (L_26 == 0)
		{
			goto IL_00ce;
		}
		if (L_26 == 1)
		{
			goto IL_00fc;
		}
		if (L_26 == 2)
		{
			goto IL_00fc;
		}
		if (L_26 == 3)
		{
			goto IL_00d8;
		}
		if (L_26 == 4)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00fc;
	}

IL_00ce:
	{
		m9964(__this, ((int32_t)41), NULL);
		goto IL_00fc;
	}

IL_00d8:
	{
		t1436 * L_27 = p1;
		t47* L_28 = m7427(L_27, NULL);
		m9966(__this, L_28, NULL);
		goto IL_00fc;
	}

IL_00e6:
	{
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_29 = p1;
		t47* L_30 = m7427(L_29, NULL);
		m9966(__this, L_30, NULL);
		goto IL_00fc;
	}

IL_00fc:
	{
		t221* L_31 = (__this->f23);
		int32_t L_32 = (__this->f24);
		t47* L_33 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_33 = m3302(L_33, L_31, 0, L_32, NULL);
		return L_33;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10013 (t1794 * __this, int32_t p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = p0;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		t1436 * L_2 = p1;
		int32_t L_3 = m7434(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		m10030(__this, 2, NULL);
		int32_t L_4 = p0;
		m9975(__this, L_4, NULL);
		int32_t L_5 = m9969(__this, NULL);
		int32_t L_6 = p0;
		m9962(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)L_6))+(int32_t)((int32_t)16))), NULL);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		t1436 * L_8 = p1;
		int32_t L_9 = m7439(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		t1436 * L_10 = p1;
		t47* L_11 = m7440(L_10, NULL);
		m9966(__this, L_11, NULL);
	}

IL_0050:
	{
		goto IL_00a3;
	}

IL_0052:
	{
		t1436 * L_12 = p1;
		int32_t L_13 = m7438(L_12, NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14 == 0)
		{
			goto IL_006d;
		}
		if (L_14 == 1)
		{
			goto IL_007b;
		}
		if (L_14 == 2)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a3;
	}

IL_006d:
	{
		t1436 * L_15 = p1;
		t47* L_16 = m7427(L_15, NULL);
		m9966(__this, L_16, NULL);
		goto IL_00a3;
	}

IL_007b:
	{
		t1436 * L_17 = p1;
		t47* L_18 = m7427(L_17, NULL);
		m9966(__this, L_18, NULL);
		goto IL_00a3;
	}

IL_0089:
	{
		t1436 * L_19 = p1;
		t47* L_20 = m7427(L_19, NULL);
		m9966(__this, L_20, NULL);
		t1436 * L_21 = p1;
		t47* L_22 = m7440(L_21, NULL);
		m9966(__this, L_22, NULL);
		goto IL_00a3;
	}

IL_00a3:
	{
		t1436 * L_23 = p1;
		t1018* L_24 = m7437(L_23, NULL);
		t1436 * L_25 = p1;
		t47* L_26 = m7436(L_25, NULL);
		m10024(__this, L_24, L_26, NULL);
		int32_t L_27 = p0;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		t1436 * L_28 = p1;
		t47* L_29 = m7435(L_28, NULL);
		m9966(__this, L_29, NULL);
		int32_t L_30 = p0;
		m10023(__this, L_30, NULL);
	}

IL_00cc:
	{
		bool L_31 = (__this->f12);
		if (!L_31)
		{
			goto IL_010a;
		}
	}
	{
		t1436 * L_32 = p1;
		int32_t L_33 = m7439(L_32, NULL);
		V_0 = L_33;
		int32_t L_34 = V_0;
		if (!L_34)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)1)))
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0108;
	}

IL_00e4:
	{
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_36 = p1;
		t47* L_37 = m7440(L_36, NULL);
		m9966(__this, L_37, NULL);
		goto IL_0108;
	}

IL_00fa:
	{
		t1436 * L_38 = p1;
		t47* L_39 = m7440(L_38, NULL);
		m9966(__this, L_39, NULL);
		goto IL_0108;
	}

IL_0108:
	{
		goto IL_013e;
	}

IL_010a:
	{
		t1436 * L_40 = p1;
		int32_t L_41 = m7438(L_40, NULL);
		V_0 = L_41;
		int32_t L_42 = V_0;
		if (!L_42)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_0130;
		}
	}
	{
		goto IL_013e;
	}

IL_011a:
	{
		m9964(__this, ((int32_t)32), NULL);
		t1436 * L_44 = p1;
		t47* L_45 = m7440(L_44, NULL);
		m9966(__this, L_45, NULL);
		goto IL_013e;
	}

IL_0130:
	{
		t1436 * L_46 = p1;
		t47* L_47 = m7440(L_46, NULL);
		m9966(__this, L_47, NULL);
		goto IL_013e;
	}

IL_013e:
	{
		t221* L_48 = (__this->f23);
		int32_t L_49 = (__this->f24);
		t47* L_50 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_50 = m3302(L_50, L_48, 0, L_49, NULL);
		return L_50;
	}
}
extern "C" t47* m10014 (t1794 * __this, int32_t p0, t1436 * p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0009;
		}
	}
	{
		p0 = 6;
	}

IL_0009:
	{
		int32_t L_1 = p0;
		m9974(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), NULL);
		int32_t L_2 = p0;
		t1436 * L_3 = p1;
		t47* L_4 = m10015(__this, L_2, L_3, 3, NULL);
		return L_4;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10015 (t1794 * __this, int32_t p0, t1436 * p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (__this->f18);
		V_0 = L_0;
		int32_t L_1 = (__this->f16);
		V_1 = L_1;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)1));
		int32_t L_3 = 1;
		V_3 = L_3;
		__this->f18 = L_3;
		int32_t L_4 = V_3;
		V_0 = L_4;
		int32_t L_5 = p0;
		m9962(__this, ((int32_t)((int32_t)L_5+(int32_t)8)), NULL);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1436 * L_7 = p1;
		t47* L_8 = m7427(L_7, NULL);
		m9966(__this, L_8, NULL);
	}

IL_003a:
	{
		int32_t L_9 = V_1;
		m10026(__this, ((int32_t)((int32_t)L_9-(int32_t)1)), NULL);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		t1436 * L_11 = p1;
		t47* L_12 = m7429(L_11, NULL);
		m9966(__this, L_12, NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = p0;
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->f18);
		m10028(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14))-(int32_t)1)), ((int32_t)((int32_t)L_15-(int32_t)L_16)), NULL);
	}

IL_0066:
	{
		t1436 * L_17 = p1;
		int32_t L_18 = V_2;
		int32_t L_19 = p2;
		m10025(__this, L_17, L_18, L_19, NULL);
		t221* L_20 = (__this->f23);
		int32_t L_21 = (__this->f24);
		t47* L_22 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_22 = m3302(L_22, L_20, 0, L_21, NULL);
		return L_22;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t1794_TI_var;
extern "C" t47* m10016 (t1794 * __this, t47* p0, t1436 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1793 * V_3 = {0};
	t336 * V_4 = {0};
	t336 * V_5 = {0};
	t336 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t47* G_B4_0 = {0};
	t336 * G_B8_0 = {0};
	t336 * G_B21_0 = {0};
	t336 * G_B20_0 = {0};
	int32_t G_B22_0 = 0;
	t336 * G_B22_1 = {0};
	{
		bool L_0 = (__this->f12);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		t47* L_1 = p0;
		bool L_2 = m9972(__this, NULL);
		m9936(NULL, L_1, (&V_0), L_2, (&V_1), (&V_2), NULL);
		int32_t L_3 = V_2;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = (__this->f12);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_5 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B4_0 = L_5;
		goto IL_0035;
	}

IL_002f:
	{
		t1436 * L_6 = p1;
		t47* L_7 = m7427(L_6, NULL);
		G_B4_0 = L_7;
	}

IL_0035:
	{
		return G_B4_0;
	}

IL_0036:
	{
		bool L_8 = V_0;
		__this->f12 = L_8;
		t47* L_9 = p0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		t1436 * L_12 = p1;
		t1793 * L_13 = m9937(NULL, L_9, L_10, L_11, L_12, NULL);
		V_3 = L_13;
		t1793 * L_14 = V_3;
		int32_t L_15 = (L_14->f4);
		t336 * L_16 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_16, ((int32_t)((int32_t)L_15*(int32_t)2)), NULL);
		V_4 = L_16;
		t1793 * L_17 = V_3;
		int32_t L_18 = (L_17->f1);
		t336 * L_19 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_19, ((int32_t)((int32_t)L_18*(int32_t)2)), NULL);
		V_5 = L_19;
		t1793 * L_20 = V_3;
		bool L_21 = (L_20->f7);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		t1793 * L_22 = V_3;
		int32_t L_23 = (L_22->f8);
		t336 * L_24 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_24, ((int32_t)((int32_t)L_23*(int32_t)2)), NULL);
		G_B8_0 = L_24;
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = ((t336 *)(NULL));
	}

IL_007d:
	{
		V_6 = G_B8_0;
		V_7 = 0;
		t1793 * L_25 = V_3;
		int32_t L_26 = (L_25->f12);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		t1793 * L_27 = V_3;
		int32_t L_28 = (L_27->f12);
		m10030(__this, ((int32_t)((int32_t)2*(int32_t)L_28)), NULL);
	}

IL_0099:
	{
		t1793 * L_29 = V_3;
		int32_t L_30 = (L_29->f13);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		t1793 * L_31 = V_3;
		int32_t L_32 = (L_31->f13);
		m10030(__this, ((int32_t)((int32_t)3*(int32_t)L_32)), NULL);
	}

IL_00b0:
	{
		t1793 * L_33 = V_3;
		int32_t L_34 = (L_33->f11);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		t1793 * L_35 = V_3;
		int32_t L_36 = (L_35->f11);
		m10031(__this, L_36, NULL);
	}

IL_00c5:
	{
		V_8 = 1;
		t1793 * L_37 = V_3;
		bool L_38 = (L_37->f7);
		if (!L_38)
		{
			goto IL_013a;
		}
	}
	{
		t1793 * L_39 = V_3;
		int32_t L_40 = (L_39->f1);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		t1793 * L_41 = V_3;
		int32_t L_42 = (L_41->f4);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_013a;
		}
	}

IL_00e2:
	{
		bool L_43 = m9972(__this, NULL);
		if (L_43)
		{
			goto IL_011b;
		}
	}
	{
		t1793 * L_44 = V_3;
		int32_t L_45 = (L_44->f1);
		t1793 * L_46 = V_3;
		int32_t L_47 = (L_46->f4);
		m9974(__this, ((int32_t)((int32_t)L_45+(int32_t)L_47)), NULL);
		int32_t L_48 = V_7;
		int32_t L_49 = (__this->f18);
		t1793 * L_50 = V_3;
		int32_t L_51 = (L_50->f4);
		V_7 = ((int32_t)((int32_t)L_48-(int32_t)((int32_t)((int32_t)L_49-(int32_t)L_51))));
		t1793 * L_52 = V_3;
		int32_t L_53 = (L_52->f4);
		__this->f18 = L_53;
	}

IL_011b:
	{
		int32_t L_54 = V_7;
		V_8 = ((((int32_t)((((int32_t)L_54) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t336 * L_55 = V_6;
		int32_t L_56 = V_7;
		G_B20_0 = L_55;
		if ((((int32_t)L_56) >= ((int32_t)0)))
		{
			G_B21_0 = L_55;
			goto IL_0131;
		}
	}
	{
		int32_t L_57 = V_7;
		G_B22_0 = ((-L_57));
		G_B22_1 = G_B20_0;
		goto IL_0133;
	}

IL_0131:
	{
		int32_t L_58 = V_7;
		G_B22_0 = L_58;
		G_B22_1 = G_B21_0;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		m10019(NULL, G_B22_1, G_B22_0, NULL);
		goto IL_0147;
	}

IL_013a:
	{
		t1793 * L_59 = V_3;
		int32_t L_60 = (L_59->f1);
		m9975(__this, L_60, NULL);
	}

IL_0147:
	{
		t1793 * L_61 = V_3;
		int32_t L_62 = (L_61->f4);
		if (L_62)
		{
			goto IL_0157;
		}
	}
	{
		bool L_63 = m9973(__this, NULL);
		if (L_63)
		{
			goto IL_0165;
		}
	}

IL_0157:
	{
		int32_t L_64 = m9969(__this, NULL);
		t336 * L_65 = V_4;
		m10020(__this, L_64, L_65, NULL);
	}

IL_0165:
	{
		int32_t L_66 = m9970(__this, NULL);
		t336 * L_67 = V_5;
		m10022(__this, L_66, L_67, NULL);
		t1793 * L_68 = V_3;
		bool L_69 = (L_68->f7);
		if (!L_69)
		{
			goto IL_0217;
		}
	}
	{
		t1793 * L_70 = V_3;
		int32_t L_71 = (L_70->f1);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		t1793 * L_72 = V_3;
		int32_t L_73 = (L_72->f4);
		if ((((int32_t)L_73) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		__this->f12 = 1;
	}

IL_0197:
	{
		t336 * L_74 = V_4;
		int32_t L_75 = m4625(L_74, NULL);
		t1793 * L_76 = V_3;
		int32_t L_77 = (L_76->f4);
		if ((((int32_t)L_75) >= ((int32_t)L_77)))
		{
			goto IL_01c2;
		}
	}
	{
		t336 * L_78 = V_4;
		t1793 * L_79 = V_3;
		int32_t L_80 = (L_79->f4);
		t336 * L_81 = V_4;
		int32_t L_82 = m4625(L_81, NULL);
		m9221(L_78, 0, (t47*) &_stringLiteral647, ((int32_t)((int32_t)L_80-(int32_t)L_82)), NULL);
	}

IL_01c2:
	{
		goto IL_01cf;
	}

IL_01c4:
	{
		t336 * L_83 = V_6;
		m9220(L_83, 0, ((int32_t)48), NULL);
	}

IL_01cf:
	{
		t336 * L_84 = V_6;
		int32_t L_85 = m4625(L_84, NULL);
		t1793 * L_86 = V_3;
		int32_t L_87 = (L_86->f8);
		t1793 * L_88 = V_3;
		int32_t L_89 = (L_88->f9);
		if ((((int32_t)L_85) < ((int32_t)((int32_t)((int32_t)L_87-(int32_t)L_89)))))
		{
			goto IL_01c4;
		}
	}
	{
		bool L_90 = V_8;
		if (!L_90)
		{
			goto IL_0202;
		}
	}
	{
		t1793 * L_91 = V_3;
		bool L_92 = (L_91->f10);
		if (L_92)
		{
			goto IL_0202;
		}
	}
	{
		t336 * L_93 = V_6;
		t1436 * L_94 = p1;
		t47* L_95 = m7443(L_94, NULL);
		m9219(L_93, 0, L_95, NULL);
		goto IL_0215;
	}

IL_0202:
	{
		bool L_96 = V_8;
		if (L_96)
		{
			goto IL_0215;
		}
	}
	{
		t336 * L_97 = V_6;
		t1436 * L_98 = p1;
		t47* L_99 = m7427(L_98, NULL);
		m9219(L_97, 0, L_99, NULL);
	}

IL_0215:
	{
		goto IL_0277;
	}

IL_0217:
	{
		t336 * L_100 = V_4;
		int32_t L_101 = m4625(L_100, NULL);
		t1793 * L_102 = V_3;
		int32_t L_103 = (L_102->f4);
		t1793 * L_104 = V_3;
		int32_t L_105 = (L_104->f5);
		if ((((int32_t)L_101) >= ((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_105)))))
		{
			goto IL_0250;
		}
	}
	{
		t336 * L_106 = V_4;
		t1793 * L_107 = V_3;
		int32_t L_108 = (L_107->f4);
		t1793 * L_109 = V_3;
		int32_t L_110 = (L_109->f5);
		t336 * L_111 = V_4;
		int32_t L_112 = m4625(L_111, NULL);
		m9221(L_106, 0, (t47*) &_stringLiteral647, ((int32_t)((int32_t)((int32_t)((int32_t)L_108-(int32_t)L_110))-(int32_t)L_112)), NULL);
	}

IL_0250:
	{
		t1793 * L_113 = V_3;
		int32_t L_114 = (L_113->f4);
		t1793 * L_115 = V_3;
		int32_t L_116 = (L_115->f5);
		if ((!(((uint32_t)L_114) == ((uint32_t)L_116))))
		{
			goto IL_0277;
		}
	}
	{
		t336 * L_117 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		bool L_118 = m10018(NULL, L_117, NULL);
		if (!L_118)
		{
			goto IL_0277;
		}
	}
	{
		t336 * L_119 = V_4;
		t336 * L_120 = V_4;
		int32_t L_121 = m4625(L_120, NULL);
		m9213(L_119, 0, L_121, NULL);
	}

IL_0277:
	{
		t336 * L_122 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		m10017(NULL, L_122, 1, NULL);
		goto IL_028b;
	}

IL_0281:
	{
		t336 * L_123 = V_5;
		m1772(L_123, ((int32_t)48), NULL);
	}

IL_028b:
	{
		t336 * L_124 = V_5;
		int32_t L_125 = m4625(L_124, NULL);
		t1793 * L_126 = V_3;
		int32_t L_127 = (L_126->f1);
		t1793 * L_128 = V_3;
		int32_t L_129 = (L_128->f3);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)((int32_t)L_127-(int32_t)L_129)))))
		{
			goto IL_0281;
		}
	}
	{
		t336 * L_130 = V_5;
		int32_t L_131 = m4625(L_130, NULL);
		t1793 * L_132 = V_3;
		int32_t L_133 = (L_132->f1);
		if ((((int32_t)L_131) <= ((int32_t)L_133)))
		{
			goto IL_02cc;
		}
	}
	{
		t336 * L_134 = V_5;
		t1793 * L_135 = V_3;
		int32_t L_136 = (L_135->f1);
		t336 * L_137 = V_5;
		int32_t L_138 = m4625(L_137, NULL);
		t1793 * L_139 = V_3;
		int32_t L_140 = (L_139->f1);
		m9213(L_134, L_136, ((int32_t)((int32_t)L_138-(int32_t)L_140)), NULL);
	}

IL_02cc:
	{
		t1793 * L_141 = V_3;
		t47* L_142 = p0;
		int32_t L_143 = V_1;
		int32_t L_144 = V_2;
		t1436 * L_145 = p1;
		bool L_146 = (__this->f12);
		t336 * L_147 = V_4;
		t336 * L_148 = V_5;
		t336 * L_149 = V_6;
		t47* L_150 = m9938(L_141, L_142, L_143, L_144, L_145, L_146, L_147, L_148, L_149, NULL);
		return L_150;
	}
}
extern "C" void m10017 (t7 * __this , t336 * p0, bool p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	{
		V_0 = 0;
		t336 * L_0 = p0;
		int32_t L_1 = m4625(L_0, NULL);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0022;
	}

IL_000d:
	{
		t336 * L_2 = p0;
		int32_t L_3 = V_1;
		uint16_t L_4 = m9209(L_2, L_3, NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0034;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6-(int32_t)1));
	}

IL_0022:
	{
		bool L_7 = p1;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_1;
		G_B7_0 = ((((int32_t)((((int32_t)L_8) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_9 = V_1;
		G_B7_0 = ((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		if (G_B7_0)
		{
			goto IL_000d;
		}
	}

IL_0034:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		t336 * L_11 = p0;
		t336 * L_12 = p0;
		int32_t L_13 = m4625(L_12, NULL);
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		m9213(L_11, ((int32_t)((int32_t)L_13-(int32_t)L_14)), L_15, NULL);
	}

IL_0048:
	{
		return;
	}
}
extern TypeInfo* t214_TI_var;
extern "C" bool m10018 (t7 * __this , t336 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		t336 * L_0 = p0;
		int32_t L_1 = V_0;
		uint16_t L_2 = m9209(L_0, L_1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_3 = m4645(NULL, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t336 * L_4 = p0;
		int32_t L_5 = V_0;
		uint16_t L_6 = m9209(L_4, L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)48))))
		{
			goto IL_001f;
		}
	}
	{
		return 0;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_0;
		t336 * L_9 = p0;
		int32_t L_10 = m4625(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
extern TypeInfo* t396_TI_var;
extern TypeInfo* t1794_TI_var;
extern "C" void m10019 (t7 * __this , t336 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_1, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t L_3 = m9951(NULL, (((int64_t)L_2)), NULL);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)1));
	}

IL_0014:
	{
		int32_t L_4 = p1;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int64_t L_6 = m9942(NULL, L_5, NULL);
		V_1 = ((int32_t)((int32_t)L_4/(int32_t)(((int32_t)L_6))));
		t336 * L_7 = p0;
		int32_t L_8 = V_1;
		m1772(L_7, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_8)))), NULL);
		int32_t L_9 = p1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		int64_t L_12 = m9942(NULL, L_11, NULL);
		int32_t L_13 = V_1;
		p1 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)((int32_t)(((int32_t)L_12))*(int32_t)L_13))));
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
extern "C" void m10020 (t1794 * __this, int32_t p0, t336 * p1, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t336 * L_1 = p1;
		int32_t L_2 = p0;
		m9216(L_1, ((int32_t)48), L_2, NULL);
		return;
	}

IL_0014:
	{
		int32_t L_3 = (__this->f18);
		int32_t L_4 = p0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		t336 * L_5 = p1;
		int32_t L_6 = p0;
		int32_t L_7 = (__this->f18);
		m9216(L_5, ((int32_t)48), ((int32_t)((int32_t)L_6-(int32_t)L_7)), NULL);
	}

IL_002e:
	{
		int32_t L_8 = (__this->f16);
		int32_t L_9 = (__this->f18);
		int32_t L_10 = (__this->f16);
		t336 * L_11 = p1;
		m10029(__this, ((int32_t)((int32_t)L_8-(int32_t)L_9)), L_10, L_11, NULL);
		return;
	}
}
extern "C" void m10021 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = p0;
		m9965(__this, ((int32_t)48), L_1, NULL);
		return;
	}

IL_0013:
	{
		int32_t L_2 = (__this->f18);
		int32_t L_3 = p0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = p0;
		int32_t L_5 = (__this->f18);
		m9965(__this, ((int32_t)48), ((int32_t)((int32_t)L_4-(int32_t)L_5)), NULL);
	}

IL_002c:
	{
		int32_t L_6 = (__this->f16);
		int32_t L_7 = (__this->f18);
		int32_t L_8 = (__this->f16);
		m10028(__this, ((int32_t)((int32_t)L_6-(int32_t)L_7)), L_8, NULL);
		return;
	}
}
extern "C" void m10022 (t1794 * __this, int32_t p0, t336 * p1, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		t336 * L_5 = p1;
		m10029(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), L_5, NULL);
		return;
	}
}
extern "C" void m10023 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		m10028(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), NULL);
		return;
	}
}
extern "C" void m10024 (t1794 * __this, t1018* p0, t47* p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		bool L_0 = m9973(__this, NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		m9964(__this, ((int32_t)48), NULL);
		return;
	}

IL_0011:
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0032;
	}

IL_0019:
	{
		int32_t L_1 = V_0;
		t1018* L_2 = p0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4))));
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->f18);
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_2;
		V_1 = L_7;
		goto IL_002e;
	}

IL_002c:
	{
		goto IL_0038;
	}

IL_002e:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_9 = V_2;
		t1018* L_10 = p0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t52 *)L_10)->max_length))))))
		{
			goto IL_0019;
		}
	}

IL_0038:
	{
		t1018* L_11 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_11)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		t1018* L_13 = p0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15));
		int32_t L_16 = (__this->f18);
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_18 = (__this->f18);
		int32_t L_19 = V_0;
		G_B13_0 = ((int32_t)((int32_t)L_18-(int32_t)L_19));
		goto IL_0061;
	}

IL_0060:
	{
		G_B13_0 = 0;
	}

IL_0061:
	{
		V_5 = G_B13_0;
		int32_t L_20 = V_4;
		if (L_20)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_006d;
	}

IL_0069:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21-(int32_t)1));
	}

IL_006d:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		t1018* L_23 = p0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		if (!(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)))
		{
			goto IL_0069;
		}
	}

IL_0076:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_5;
		G_B21_0 = L_27;
		goto IL_0082;
	}

IL_007f:
	{
		t1018* L_28 = p0;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		G_B21_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_28, L_30));
	}

IL_0082:
	{
		V_4 = G_B21_0;
	}

IL_0084:
	{
		int32_t L_31 = V_5;
		if (L_31)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_32 = V_4;
		V_3 = L_32;
		goto IL_00a7;
	}

IL_008d:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_5;
		int32_t L_35 = V_4;
		V_1 = ((int32_t)((int32_t)L_33+(int32_t)((int32_t)((int32_t)L_34/(int32_t)L_35))));
		int32_t L_36 = V_5;
		int32_t L_37 = V_4;
		V_3 = ((int32_t)((int32_t)L_36%(int32_t)L_37));
		int32_t L_38 = V_3;
		if (L_38)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_39 = V_4;
		V_3 = L_39;
		goto IL_00a7;
	}

IL_00a3:
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00a7:
	{
		V_6 = 0;
		goto IL_0116;
	}

IL_00ac:
	{
		int32_t L_41 = (__this->f18);
		int32_t L_42 = V_6;
		int32_t L_43 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_41-(int32_t)L_42))) <= ((int32_t)L_43)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_44 = V_3;
		if (L_44)
		{
			goto IL_00d9;
		}
	}

IL_00bb:
	{
		int32_t L_45 = (__this->f16);
		int32_t L_46 = (__this->f18);
		int32_t L_47 = (__this->f16);
		int32_t L_48 = V_6;
		m10028(__this, ((int32_t)((int32_t)L_45-(int32_t)L_46)), ((int32_t)((int32_t)L_47-(int32_t)L_48)), NULL);
		goto IL_0118;
	}

IL_00d9:
	{
		int32_t L_49 = (__this->f16);
		int32_t L_50 = V_6;
		int32_t L_51 = V_3;
		int32_t L_52 = (__this->f16);
		int32_t L_53 = V_6;
		m10028(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_49-(int32_t)L_50))-(int32_t)L_51)), ((int32_t)((int32_t)L_52-(int32_t)L_53)), NULL);
		int32_t L_54 = V_6;
		int32_t L_55 = V_3;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)L_55));
		t47* L_56 = p1;
		m9966(__this, L_56, NULL);
		int32_t L_57 = V_1;
		int32_t L_58 = ((int32_t)((int32_t)L_57-(int32_t)1));
		V_1 = L_58;
		t1018* L_59 = p0;
		if ((((int32_t)L_58) >= ((int32_t)(((int32_t)(((t52 *)L_59)->max_length))))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_60 = V_1;
		if ((((int32_t)L_60) < ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		t1018* L_61 = p0;
		int32_t L_62 = V_1;
		int32_t L_63 = L_62;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_61, L_63));
	}

IL_0113:
	{
		int32_t L_64 = V_4;
		V_3 = L_64;
	}

IL_0116:
	{
		goto IL_00ac;
	}

IL_0118:
	{
		goto IL_0133;
	}

IL_011a:
	{
		int32_t L_65 = (__this->f16);
		int32_t L_66 = (__this->f18);
		int32_t L_67 = (__this->f16);
		m10028(__this, ((int32_t)((int32_t)L_65-(int32_t)L_66)), L_67, NULL);
	}

IL_0133:
	{
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m10025 (t1794 * __this, t1436 * p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		bool L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_1 = (__this->f13);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
		m9964(__this, ((int32_t)69), NULL);
		goto IL_0024;
	}

IL_001c:
	{
		m9964(__this, ((int32_t)101), NULL);
	}

IL_0024:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t1436 * L_3 = p0;
		t47* L_4 = m7443(L_3, NULL);
		m9966(__this, L_4, NULL);
		goto IL_0048;
	}

IL_0036:
	{
		t1436 * L_5 = p0;
		t47* L_6 = m7427(L_5, NULL);
		m9966(__this, L_6, NULL);
		int32_t L_7 = p1;
		p1 = ((-L_7));
	}

IL_0048:
	{
		int32_t L_8 = p1;
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_9 = p2;
		m9965(__this, ((int32_t)48), L_9, NULL);
		goto IL_00ae;
	}

IL_0056:
	{
		int32_t L_10 = p1;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_11 = p2;
		m9965(__this, ((int32_t)48), ((int32_t)((int32_t)L_11-(int32_t)1)), NULL);
		int32_t L_12 = p1;
		m9964(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_12)))), NULL);
		goto IL_00ae;
	}

IL_0073:
	{
		int32_t L_13 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		uint32_t L_14 = m9946(NULL, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = p1;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_16 = p2;
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_0090;
		}
	}

IL_0083:
	{
		uint32_t L_17 = V_0;
		m9964(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((uint32_t)L_17>>8)))))), NULL);
	}

IL_0090:
	{
		uint32_t L_18 = V_0;
		m9964(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_18>>4))&(int32_t)((int32_t)15))))))), NULL);
		uint32_t L_19 = V_0;
		m9964(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)15))))))), NULL);
	}

IL_00ae:
	{
		return;
	}
}
extern "C" void m10026 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f24);
		t221* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t52 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m9963(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), NULL);
	}

IL_001f:
	{
		int32_t L_3 = p0;
		int32_t L_4 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_3+(int32_t)L_4));
		int32_t L_5 = p0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_006c;
	}

IL_0033:
	{
		int32_t L_6 = p0;
		if ((((int32_t)L_6) >= ((int32_t)8)))
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_7 = (__this->f19);
		V_0 = L_7;
		goto IL_006c;
	}

IL_0040:
	{
		int32_t L_8 = p0;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)16))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_9 = (__this->f20);
		V_0 = L_9;
		goto IL_006c;
	}

IL_004e:
	{
		int32_t L_10 = p0;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)24))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_11 = (__this->f21);
		V_0 = L_11;
		goto IL_006c;
	}

IL_005c:
	{
		int32_t L_12 = p0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_13 = (__this->f22);
		V_0 = L_13;
		goto IL_006c;
	}

IL_006a:
	{
		V_0 = 0;
	}

IL_006c:
	{
		uint32_t L_14 = V_0;
		int32_t L_15 = p0;
		V_0 = ((int32_t)((uint32_t)L_14>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		t221* L_16 = (__this->f23);
		int32_t L_17 = (__this->f24);
		int32_t L_18 = L_17;
		V_1 = L_18;
		__this->f24 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_1;
		uint32_t L_20 = V_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_16, L_19)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)15)))))));
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" void m10027 (t1794 * __this, int32_t p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f24);
		V_0 = L_0;
		bool L_1 = p1;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)100))))
		{
			goto IL_0069;
		}
	}

IL_000f:
	{
		int32_t L_3 = p0;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t* L_4 = ((t1794_SFs*)t1794_TI_var->static_fields)->f5;
		int32_t L_5 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))));
		bool L_6 = p1;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = p0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0043;
		}
	}

IL_0030:
	{
		t221* L_8 = (__this->f23);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_11>>(int32_t)4))))));
	}

IL_0043:
	{
		t221* L_12 = (__this->f23);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, L_14)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)15)))))));
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t* L_16 = ((t1794_SFs*)t1794_TI_var->static_fields)->f5;
		int32_t L_17 = p0;
		int32_t L_18 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_16+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)100)))))*(int32_t)4))))));
		goto IL_0074;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1794_TI_var);
		int32_t* L_19 = ((t1794_SFs*)t1794_TI_var->static_fields)->f5;
		int32_t L_20 = p0;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_19+(int32_t)((int32_t)((int32_t)L_20*(int32_t)4))))));
	}

IL_0074:
	{
		bool L_21 = p1;
		if (L_21)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_22 = p0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_008f;
		}
	}

IL_007c:
	{
		t221* L_23 = (__this->f23);
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_26>>(int32_t)4))))));
	}

IL_008f:
	{
		t221* L_27 = (__this->f23);
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15)))))));
		int32_t L_31 = V_0;
		__this->f24 = L_31;
		return;
	}
}
extern "C" void m10028 (t1794 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
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
		int32_t L_2 = (__this->f24);
		int32_t L_3 = p1;
		int32_t L_4 = p0;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)((int32_t)((int32_t)L_3-(int32_t)L_4))));
		int32_t L_5 = V_0;
		t221* L_6 = (__this->f23);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((t52 *)L_6)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		m9963(__this, ((int32_t)((int32_t)L_7+(int32_t)((int32_t)10))), NULL);
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		__this->f24 = L_8;
		int32_t L_9 = p1;
		int32_t L_10 = (__this->f17);
		p1 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = p0;
		int32_t L_12 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		int32_t L_13 = p0;
		int32_t L_14 = p0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_13+(int32_t)8))-(int32_t)((int32_t)((int32_t)L_14&(int32_t)7))));
		goto IL_01a6;
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_16 = (__this->f19);
		V_2 = L_16;
		goto IL_008a;
	}

IL_005e:
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_18 = (__this->f20);
		V_2 = L_18;
		goto IL_008a;
	}

IL_006c:
	{
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_007a;
		}
	}
	{
		uint32_t L_20 = (__this->f21);
		V_2 = L_20;
		goto IL_008a;
	}

IL_007a:
	{
		int32_t L_21 = V_1;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_22 = (__this->f22);
		V_2 = L_22;
		goto IL_008a;
	}

IL_0088:
	{
		V_2 = 0;
	}

IL_008a:
	{
		uint32_t L_23 = V_2;
		int32_t L_24 = p0;
		V_2 = ((int32_t)((uint32_t)L_23>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_24&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		int32_t L_25 = V_1;
		int32_t L_26 = p1;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_27 = p1;
		V_1 = L_27;
	}

IL_009b:
	{
		t221* L_28 = (__this->f23);
		int32_t L_29 = V_0;
		int32_t L_30 = ((int32_t)((int32_t)L_29-(int32_t)1));
		V_0 = L_30;
		uint32_t L_31 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)15)))))));
		int32_t L_32 = V_1;
		int32_t L_33 = p0;
		V_3 = ((int32_t)((int32_t)L_32-(int32_t)L_33));
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 0)
		{
			goto IL_0196;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 1)
		{
			goto IL_017c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 2)
		{
			goto IL_0162;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 3)
		{
			goto IL_0148;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 4)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 5)
		{
			goto IL_0114;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 6)
		{
			goto IL_00fa;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 7)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_019d;
	}

IL_00e0:
	{
		t221* L_35 = (__this->f23);
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)((int32_t)L_36-(int32_t)1));
		V_0 = L_37;
		uint32_t L_38 = V_2;
		int32_t L_39 = ((int32_t)((uint32_t)L_38>>4));
		V_2 = L_39;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_35, L_37)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)15)))))));
		goto IL_00fa;
	}

IL_00fa:
	{
		t221* L_40 = (__this->f23);
		int32_t L_41 = V_0;
		int32_t L_42 = ((int32_t)((int32_t)L_41-(int32_t)1));
		V_0 = L_42;
		uint32_t L_43 = V_2;
		int32_t L_44 = ((int32_t)((uint32_t)L_43>>4));
		V_2 = L_44;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_40, L_42)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)15)))))));
		goto IL_0114;
	}

IL_0114:
	{
		t221* L_45 = (__this->f23);
		int32_t L_46 = V_0;
		int32_t L_47 = ((int32_t)((int32_t)L_46-(int32_t)1));
		V_0 = L_47;
		uint32_t L_48 = V_2;
		int32_t L_49 = ((int32_t)((uint32_t)L_48>>4));
		V_2 = L_49;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)15)))))));
		goto IL_012e;
	}

IL_012e:
	{
		t221* L_50 = (__this->f23);
		int32_t L_51 = V_0;
		int32_t L_52 = ((int32_t)((int32_t)L_51-(int32_t)1));
		V_0 = L_52;
		uint32_t L_53 = V_2;
		int32_t L_54 = ((int32_t)((uint32_t)L_53>>4));
		V_2 = L_54;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_50, L_52)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_54&(int32_t)((int32_t)15)))))));
		goto IL_0148;
	}

IL_0148:
	{
		t221* L_55 = (__this->f23);
		int32_t L_56 = V_0;
		int32_t L_57 = ((int32_t)((int32_t)L_56-(int32_t)1));
		V_0 = L_57;
		uint32_t L_58 = V_2;
		int32_t L_59 = ((int32_t)((uint32_t)L_58>>4));
		V_2 = L_59;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_55, L_57)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)15)))))));
		goto IL_0162;
	}

IL_0162:
	{
		t221* L_60 = (__this->f23);
		int32_t L_61 = V_0;
		int32_t L_62 = ((int32_t)((int32_t)L_61-(int32_t)1));
		V_0 = L_62;
		uint32_t L_63 = V_2;
		int32_t L_64 = ((int32_t)((uint32_t)L_63>>4));
		V_2 = L_64;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)15)))))));
		goto IL_017c;
	}

IL_017c:
	{
		t221* L_65 = (__this->f23);
		int32_t L_66 = V_0;
		int32_t L_67 = ((int32_t)((int32_t)L_66-(int32_t)1));
		V_0 = L_67;
		uint32_t L_68 = V_2;
		int32_t L_69 = ((int32_t)((uint32_t)L_68>>4));
		V_2 = L_69;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_65, L_67)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)15)))))));
		goto IL_0196;
	}

IL_0196:
	{
		int32_t L_70 = V_1;
		int32_t L_71 = p1;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_019b;
		}
	}
	{
		return;
	}

IL_019b:
	{
		goto IL_019d;
	}

IL_019d:
	{
		int32_t L_72 = V_1;
		p0 = L_72;
		int32_t L_73 = V_1;
		V_1 = ((int32_t)((int32_t)L_73+(int32_t)8));
	}

IL_01a6:
	{
		goto IL_0051;
	}
}
extern "C" void m10029 (t1794 * __this, int32_t p0, int32_t p1, t336 * p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
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
		t336 * L_2 = p2;
		int32_t L_3 = m4625(L_2, NULL);
		int32_t L_4 = p1;
		int32_t L_5 = p0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))));
		t336 * L_6 = p2;
		int32_t L_7 = V_0;
		m4664(L_6, L_7, NULL);
		int32_t L_8 = p1;
		int32_t L_9 = (__this->f17);
		p1 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		int32_t L_10 = p0;
		int32_t L_11 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_10+(int32_t)L_11));
		int32_t L_12 = p0;
		int32_t L_13 = p0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12+(int32_t)8))-(int32_t)((int32_t)((int32_t)L_13&(int32_t)7))));
		goto IL_0189;
	}

IL_003c:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_15 = (__this->f19);
		V_2 = L_15;
		goto IL_0075;
	}

IL_0049:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_17 = (__this->f20);
		V_2 = L_17;
		goto IL_0075;
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_19 = (__this->f21);
		V_2 = L_19;
		goto IL_0075;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_21 = (__this->f22);
		V_2 = L_21;
		goto IL_0075;
	}

IL_0073:
	{
		V_2 = 0;
	}

IL_0075:
	{
		uint32_t L_22 = V_2;
		int32_t L_23 = p0;
		V_2 = ((int32_t)((uint32_t)L_22>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		int32_t L_24 = V_1;
		int32_t L_25 = p1;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_26 = p1;
		V_1 = L_26;
	}

IL_0086:
	{
		t336 * L_27 = p2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((int32_t)((int32_t)L_28-(int32_t)1));
		V_0 = L_29;
		uint32_t L_30 = V_2;
		m9210(L_27, L_29, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15))))))), NULL);
		int32_t L_31 = V_1;
		int32_t L_32 = p0;
		V_3 = ((int32_t)((int32_t)L_31-(int32_t)L_32));
		int32_t L_33 = V_3;
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 0)
		{
			goto IL_0179;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 1)
		{
			goto IL_0160;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 2)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 4)
		{
			goto IL_0115;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 5)
		{
			goto IL_00fc;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 6)
		{
			goto IL_00e3;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 7)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0180;
	}

IL_00ca:
	{
		t336 * L_34 = p2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)((int32_t)L_35-(int32_t)1));
		V_0 = L_36;
		uint32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)((uint32_t)L_37>>4));
		V_2 = L_38;
		m9210(L_34, L_36, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)15))))))), NULL);
		goto IL_00e3;
	}

IL_00e3:
	{
		t336 * L_39 = p2;
		int32_t L_40 = V_0;
		int32_t L_41 = ((int32_t)((int32_t)L_40-(int32_t)1));
		V_0 = L_41;
		uint32_t L_42 = V_2;
		int32_t L_43 = ((int32_t)((uint32_t)L_42>>4));
		V_2 = L_43;
		m9210(L_39, L_41, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)15))))))), NULL);
		goto IL_00fc;
	}

IL_00fc:
	{
		t336 * L_44 = p2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((int32_t)((int32_t)L_45-(int32_t)1));
		V_0 = L_46;
		uint32_t L_47 = V_2;
		int32_t L_48 = ((int32_t)((uint32_t)L_47>>4));
		V_2 = L_48;
		m9210(L_44, L_46, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)15))))))), NULL);
		goto IL_0115;
	}

IL_0115:
	{
		t336 * L_49 = p2;
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)((int32_t)L_50-(int32_t)1));
		V_0 = L_51;
		uint32_t L_52 = V_2;
		int32_t L_53 = ((int32_t)((uint32_t)L_52>>4));
		V_2 = L_53;
		m9210(L_49, L_51, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)15))))))), NULL);
		goto IL_012e;
	}

IL_012e:
	{
		t336 * L_54 = p2;
		int32_t L_55 = V_0;
		int32_t L_56 = ((int32_t)((int32_t)L_55-(int32_t)1));
		V_0 = L_56;
		uint32_t L_57 = V_2;
		int32_t L_58 = ((int32_t)((uint32_t)L_57>>4));
		V_2 = L_58;
		m9210(L_54, L_56, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_58&(int32_t)((int32_t)15))))))), NULL);
		goto IL_0147;
	}

IL_0147:
	{
		t336 * L_59 = p2;
		int32_t L_60 = V_0;
		int32_t L_61 = ((int32_t)((int32_t)L_60-(int32_t)1));
		V_0 = L_61;
		uint32_t L_62 = V_2;
		int32_t L_63 = ((int32_t)((uint32_t)L_62>>4));
		V_2 = L_63;
		m9210(L_59, L_61, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_63&(int32_t)((int32_t)15))))))), NULL);
		goto IL_0160;
	}

IL_0160:
	{
		t336 * L_64 = p2;
		int32_t L_65 = V_0;
		int32_t L_66 = ((int32_t)((int32_t)L_65-(int32_t)1));
		V_0 = L_66;
		uint32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((uint32_t)L_67>>4));
		V_2 = L_68;
		m9210(L_64, L_66, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)15))))))), NULL);
		goto IL_0179;
	}

IL_0179:
	{
		int32_t L_69 = V_1;
		int32_t L_70 = p1;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_017e;
		}
	}
	{
		return;
	}

IL_017e:
	{
		goto IL_0180;
	}

IL_0180:
	{
		int32_t L_71 = V_1;
		p0 = L_71;
		int32_t L_72 = V_1;
		V_1 = ((int32_t)((int32_t)L_72+(int32_t)8));
	}

IL_0189:
	{
		goto IL_003c;
	}
}
extern "C" void m10030 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = (__this->f16);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = (__this->f18);
		int32_t L_3 = p0;
		__this->f18 = ((int32_t)((int32_t)L_2+(int32_t)L_3));
		return;
	}
}
extern "C" void m10031 (t1794 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = (__this->f16);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = (__this->f18);
		int32_t L_3 = p0;
		__this->f18 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		return;
	}
}
extern TypeInfo* t1794_TI_var;
extern "C" t1794 * m10032 (t1794 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1794_TI_var = il2cpp_codegen_type_info_from_index(2709);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = m5727(__this, NULL);
		return ((t1794 *)Castclass(L_0, t1794_TI_var));
	}
}
#include "t1280.h"
#ifndef _MSC_VER
#else
#endif
#include "t1280MD.h"

#include "t65.h"
#include "t921MD.h"


extern "C" void m5620 (t1280 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2375, NULL);
		m4502(__this, L_0, NULL);
		t47* L_1 = p0;
		__this->f12 = L_1;
		t47* L_2 = m6526(NULL, (t47*) &_stringLiteral2375, NULL);
		__this->f13 = L_2;
		return;
	}
}
extern "C" void m10033 (t1280 * __this, t47* p0, t47* p1, const MethodInfo* method)
{
	{
		t47* L_0 = p1;
		m4502(__this, L_0, NULL);
		t47* L_1 = p0;
		__this->f12 = L_1;
		t47* L_2 = p1;
		__this->f13 = L_2;
		return;
	}
}
extern "C" void m10034 (t1280 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m9823(__this, L_0, L_1, NULL);
		t921 * L_2 = p0;
		t47* L_3 = m4522(L_2, (t47*) &_stringLiteral2376, NULL);
		__this->f12 = L_3;
		return;
	}
}
extern "C" t47* m10035 (t1280 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f13);
		return L_0;
	}
}
extern "C" void m10036 (t1280 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m3486(__this, L_0, L_1, NULL);
		t921 * L_2 = p0;
		t47* L_3 = (__this->f12);
		m4525(L_2, (t47*) &_stringLiteral2376, L_3, NULL);
		return;
	}
}
#include "t1776.h"
#ifndef _MSC_VER
#else
#endif
#include "t1776MD.h"

#include "t1795.h"
#include "t943.h"
#include "t943MD.h"


extern TypeInfo* t47_TI_var;
extern TypeInfo* t708_TI_var;
extern "C" void m10037 (t1776 * __this, int32_t p0, t943 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f2 = L_0;
		m162(__this, NULL);
		t943 * L_1 = p1;
		bool L_2 = m10161(NULL, L_1, (t943 *)NULL, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*) &_stringLiteral423, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		int32_t L_4 = p0;
		__this->f0 = L_4;
		t943 * L_5 = p1;
		__this->f1 = L_5;
		return;
	}
}
extern "C" int32_t m10038 (t1776 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern TypeInfo* t1795_TI_var;
extern "C" void m10039 (t1776 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1795_TI_var = il2cpp_codegen_type_info_from_index(3081);
		s_Il2CppMethodIntialized = true;
	}
	{
		t921 * L_0 = p0;
		int32_t L_1 = (__this->f0);
		int32_t L_2 = L_1;
		t7 * L_3 = Box(t1795_TI_var, &L_2);
		m4525(L_0, (t47*) &_stringLiteral2377, L_3, NULL);
		t921 * L_4 = p0;
		t943 * L_5 = (__this->f1);
		m4525(L_4, (t47*) &_stringLiteral2378, L_5, NULL);
		t921 * L_6 = p0;
		t47* L_7 = (__this->f2);
		m4525(L_6, (t47*) &_stringLiteral2379, L_7, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10040 (t1776 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f0);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
		if (L_1 == 2)
		{
			goto IL_0033;
		}
		if (L_1 == 3)
		{
			goto IL_004b;
		}
		if (L_1 == 4)
		{
			goto IL_0053;
		}
		if (L_1 == 5)
		{
			goto IL_005b;
		}
		if (L_1 == 6)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)128))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_006b;
	}

IL_0033:
	{
		V_0 = (t47*) &_stringLiteral2380;
		goto IL_0078;
	}

IL_003b:
	{
		V_0 = (t47*) &_stringLiteral2381;
		goto IL_0078;
	}

IL_0043:
	{
		V_0 = (t47*) &_stringLiteral2382;
		goto IL_0078;
	}

IL_004b:
	{
		V_0 = (t47*) &_stringLiteral2383;
		goto IL_0078;
	}

IL_0053:
	{
		V_0 = (t47*) &_stringLiteral2384;
		goto IL_0078;
	}

IL_005b:
	{
		V_0 = (t47*) &_stringLiteral2385;
		goto IL_0078;
	}

IL_0063:
	{
		V_0 = (t47*) &_stringLiteral2386;
		goto IL_0078;
	}

IL_006b:
	{
		t47* L_3 = m6526(NULL, (t47*) &_stringLiteral2387, NULL);
		V_0 = L_3;
		goto IL_0078;
	}

IL_0078:
	{
		t47* L_4 = V_0;
		t943 * L_5 = (__this->f1);
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Version::ToString() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = m205(NULL, L_4, (t47*) &_stringLiteral130, L_6, NULL);
		return L_7;
	}
}
#include "t1796.h"
#ifndef _MSC_VER
#else
#endif
#include "t1796MD.h"



extern "C" void m10041 (t1796 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2388, NULL);
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2147024882), NULL);
		return;
	}
}
extern "C" void m10042 (t1796 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		return;
	}
}
#include "t1797.h"
#ifndef _MSC_VER
#else
#endif
#include "t1797MD.h"

#include "t1274MD.h"


extern "C" void m10043 (t1797 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2389, NULL);
		m5598(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233066), NULL);
		return;
	}
}
extern "C" void m10044 (t1797 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m5598(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233066), NULL);
		return;
	}
}
extern "C" void m10045 (t1797 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m9414(__this, L_0, L_1, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1795MD.h"



#include "t594.h"
#ifndef _MSC_VER
#else
#endif
#include "t594MD.h"

#include "t703MD.h"


extern "C" void m10046 (t594 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m3279(NULL, NULL);
		m3280(__this, L_0, NULL);
		return;
	}
}
extern TypeInfo* t1018_TI_var;
extern "C" void m3280 (t594 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		__this->f2 = ((t1018*)SZArrayNew(t1018_TI_var, ((int32_t)56)));
		m162(__this, NULL);
		int32_t L_0 = p0;
		int32_t L_1 = abs(L_0);
		V_1 = ((int32_t)((int32_t)((int32_t)161803398)-(int32_t)L_1));
		t1018* L_2 = (__this->f2);
		int32_t L_3 = V_1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, ((int32_t)55))) = (int32_t)L_3;
		V_2 = 1;
		V_3 = 1;
		goto IL_005e;
	}

IL_0030:
	{
		int32_t L_4 = V_3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)21)*(int32_t)L_4))%(int32_t)((int32_t)55)));
		t1018* L_5 = (__this->f2);
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6)) = (int32_t)L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)((int32_t)2147483647)));
	}

IL_0051:
	{
		t1018* L_12 = (__this->f2);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)55))))
		{
			goto IL_0030;
		}
	}
	{
		V_4 = 1;
		goto IL_00c3;
	}

IL_0068:
	{
		V_5 = 1;
		goto IL_00b7;
	}

IL_006d:
	{
		t1018* L_17 = (__this->f2);
		int32_t L_18 = V_5;
		int32_t* L_19 = ((int32_t*)(int32_t*)SZArrayLdElema(L_17, L_18));
		t1018* L_20 = (__this->f2);
		int32_t L_21 = V_5;
		int32_t L_22 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21+(int32_t)((int32_t)30)))%(int32_t)((int32_t)55)))));
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_19))-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))));
		t1018* L_23 = (__this->f2);
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25))) >= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		t1018* L_26 = (__this->f2);
		int32_t L_27 = V_5;
		int32_t* L_28 = ((int32_t*)(int32_t*)SZArrayLdElema(L_26, L_27));
		*((int32_t*)(L_28)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)((int32_t)2147483647)));
	}

IL_00b1:
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00b7:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)56))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00c3:
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)5)))
		{
			goto IL_0068;
		}
	}
	{
		__this->f0 = 0;
		__this->f1 = ((int32_t)31);
		return;
	}
}
#include "t1798.h"
#ifndef _MSC_VER
#else
#endif
#include "t1798MD.h"



extern "C" void m10047 (t1798 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2390, NULL);
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233065), NULL);
		return;
	}
}
extern "C" void m10048 (t1798 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233065), NULL);
		return;
	}
}
extern "C" void m10049 (t1798 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		return;
	}
}
#include "t1799.h"
#ifndef _MSC_VER
#else
#endif
#include "t1799MD.h"



#include "t1800.h"
#ifndef _MSC_VER
#else
#endif
#include "t1800MD.h"

#include "t226.h"
#include "t1099.h"
#include "t226MD.h"
#include "t1099MD.h"


extern "C" void m10050 (t1800 * __this, t226 p0, const MethodInfo* method)
{
	{
		t226 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern const Il2CppType* t1522_0_0_0_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t1522_TI_var;
extern TypeInfo* t226_TI_var;
extern TypeInfo* t1099_TI_var;
extern "C" void m10051 (t1800 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1522_0_0_0_var = il2cpp_codegen_type_from_index(3075);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t1522_TI_var = il2cpp_codegen_type_info_from_index(3075);
		t226_TI_var = il2cpp_codegen_type_info_from_index(429);
		t1099_TI_var = il2cpp_codegen_type_info_from_index(1817);
		s_Il2CppMethodIntialized = true;
	}
	t1522 * V_0 = {0};
	t1800  V_1 = {0};
	{
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t921 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, LoadTypeToken(t1522_0_0_0_var), NULL);
		t7 * L_4 = m4516(L_2, (t47*) &_stringLiteral2391, L_3, NULL);
		V_0 = ((t1522 *)Castclass(L_4, t1522_TI_var));
		t1522 * L_5 = V_0;
		t1800  L_6 = (t1800 )VirtFuncInvoker0< t1800  >::Invoke(17 /* System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle() */, L_5);
		V_1 = L_6;
		t226 L_7 = m10052((&V_1), NULL);
		__this->f0 = L_7;
		t226 L_8 = (__this->f0);
		t226 L_9 = ((t226_SFs*)t226_TI_var->static_fields)->f1;
		bool L_10 = m3353(NULL, L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		t47* L_11 = m6526(NULL, (t47*) &_stringLiteral1234, NULL);
		t1099 * L_12 = (t1099 *)il2cpp_codegen_object_new (t1099_TI_var);
		m4517(L_12, L_11, NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005f:
	{
		return;
	}
}
extern "C" t226 m10052 (t1800 * __this, const MethodInfo* method)
{
	{
		t226 L_0 = (__this->f0);
		return L_0;
	}
}
extern const Il2CppType* t1522_0_0_0_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t226_TI_var;
extern TypeInfo* t1099_TI_var;
extern TypeInfo* t1522_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" void m10053 (t1800 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1522_0_0_0_var = il2cpp_codegen_type_from_index(3075);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t226_TI_var = il2cpp_codegen_type_info_from_index(429);
		t1099_TI_var = il2cpp_codegen_type_info_from_index(1817);
		t1522_TI_var = il2cpp_codegen_type_info_from_index(3075);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t226 L_2 = (__this->f0);
		t226 L_3 = ((t226_SFs*)t226_TI_var->static_fields)->f1;
		bool L_4 = m3353(NULL, L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		t1099 * L_5 = (t1099 *)il2cpp_codegen_object_new (t1099_TI_var);
		m4517(L_5, (t47*) &_stringLiteral1235, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		t921 * L_6 = p0;
		t722 * L_7 = m8074(NULL, (*(t1800 *)__this), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_8 = m1613(NULL, LoadTypeToken(t1522_0_0_0_var), NULL);
		m4513(L_6, (t47*) &_stringLiteral2391, ((t1522 *)Castclass(L_7, t1522_TI_var)), L_8, NULL);
		return;
	}
}
extern TypeInfo* t1800_TI_var;
extern "C" bool m10054 (t1800 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1800_TI_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	t1800  V_0 = {0};
	{
		t7 * L_0 = p0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t1800  L_1 = (*(t1800 *)__this);
		t7 * L_2 = Box(t1800_TI_var, &L_1);
		t347 * L_3 = m1520(L_2, NULL);
		t7 * L_4 = p0;
		t347 * L_5 = m1520(L_4, NULL);
		if ((((t7*)(t347 *)L_3) == ((t7*)(t347 *)L_5)))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		t226 L_6 = (__this->f0);
		t7 * L_7 = p0;
		V_0 = ((*(t1800 *)((t1800 *)UnBox (L_7, t1800_TI_var))));
		t226 L_8 = m10052((&V_0), NULL);
		bool L_9 = m3353(NULL, L_6, L_8, NULL);
		return L_9;
	}
}
extern "C" int32_t m10055 (t1800 * __this, const MethodInfo* method)
{
	{
		t226* L_0 = &(__this->f0);
		int32_t L_1 = m6251(L_0, NULL);
		return L_1;
	}
}
#include "t688.h"
#ifndef _MSC_VER
#else
#endif
#include "t688MD.h"

#include "t1801.h"
#include "t1802.h"
#include "t1801MD.h"
#include "t1802MD.h"


extern "C" void m10056 (t688 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t709_TI_var;
extern TypeInfo* t1801_TI_var;
extern TypeInfo* t688_TI_var;
extern TypeInfo* t1802_TI_var;
extern "C" void m10057 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		t1801_TI_var = il2cpp_codegen_type_info_from_index(3083);
		t688_TI_var = il2cpp_codegen_type_info_from_index(912);
		t1802_TI_var = il2cpp_codegen_type_info_from_index(3084);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_0 = m3303(NULL, NULL);
		t1801 * L_1 = (t1801 *)il2cpp_codegen_object_new (t1801_TI_var);
		m10061(L_1, L_0, 1, NULL);
		((t688_SFs*)t688_TI_var->static_fields)->f0 = L_1;
		t709 * L_2 = m3303(NULL, NULL);
		t1801 * L_3 = (t1801 *)il2cpp_codegen_object_new (t1801_TI_var);
		m10061(L_3, L_2, 0, NULL);
		((t688_SFs*)t688_TI_var->static_fields)->f1 = L_3;
		t1802 * L_4 = (t1802 *)il2cpp_codegen_object_new (t1802_TI_var);
		m10065(L_4, 1, NULL);
		((t688_SFs*)t688_TI_var->static_fields)->f2 = L_4;
		t1802 * L_5 = (t1802 *)il2cpp_codegen_object_new (t1802_TI_var);
		m10065(L_5, 0, NULL);
		((t688_SFs*)t688_TI_var->static_fields)->f3 = L_5;
		return;
	}
}
extern TypeInfo* t688_TI_var;
extern "C" t688 * m4540 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t688_TI_var = il2cpp_codegen_type_info_from_index(912);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t688_TI_var);
		t688 * L_0 = ((t688_SFs*)t688_TI_var->static_fields)->f0;
		return L_0;
	}
}
extern TypeInfo* t688_TI_var;
extern "C" t688 * m3232 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t688_TI_var = il2cpp_codegen_type_info_from_index(912);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t688_TI_var);
		t688 * L_0 = ((t688_SFs*)t688_TI_var->static_fields)->f2;
		return L_0;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t91_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m10058 (t688 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t91_TI_var = il2cpp_codegen_type_info_from_index(98);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t47* V_1 = {0};
	t7 * V_2 = {0};
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		if ((!(((t7*)(t7 *)L_0) == ((t7*)(t7 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		t7 * L_2 = p0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		t7 * L_3 = p1;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		t7 * L_4 = p0;
		V_0 = ((t47*)IsInst(L_4, t47_TI_var));
		t47* L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		t7 * L_6 = p1;
		V_1 = ((t47*)IsInst(L_6, t47_TI_var));
		t47* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		t47* L_8 = V_0;
		t47* L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker2< int32_t, t47*, t47* >::Invoke(10 /* System.Int32 System.StringComparer::Compare(System.String,System.String) */, __this, L_8, L_9);
		return L_10;
	}

IL_002d:
	{
		t7 * L_11 = p0;
		V_2 = ((t7 *)IsInst(L_11, t91_TI_var));
		t7 * L_12 = V_2;
		if (L_12)
		{
			goto IL_003d;
		}
	}
	{
		t396 * L_13 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m9401(L_13, NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003d:
	{
		t7 * L_14 = V_2;
		t7 * L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t91_TI_var, L_14, L_15);
		return L_16;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" bool m10059 (t688 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t47* V_1 = {0};
	{
		t7 * L_0 = p0;
		t7 * L_1 = p1;
		if ((!(((t7*)(t7 *)L_0) == ((t7*)(t7 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		t7 * L_2 = p0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		t7 * L_3 = p1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return 0;
	}

IL_000e:
	{
		t7 * L_4 = p0;
		V_0 = ((t47*)IsInst(L_4, t47_TI_var));
		t47* L_5 = V_0;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		t7 * L_6 = p1;
		V_1 = ((t47*)IsInst(L_6, t47_TI_var));
		t47* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		t47* L_8 = V_0;
		t47* L_9 = V_1;
		bool L_10 = (bool)VirtFuncInvoker2< bool, t47*, t47* >::Invoke(11 /* System.Boolean System.StringComparer::Equals(System.String,System.String) */, __this, L_8, L_9);
		return L_10;
	}

IL_002b:
	{
		t7 * L_11 = p0;
		t7 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_12);
		return L_13;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" int32_t m10060 (t688 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral1361, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t7 * L_2 = p0;
		V_0 = ((t47*)IsInst(L_2, t47_TI_var));
		t47* L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B5_0 = L_5;
		goto IL_0027;
	}

IL_0020:
	{
		t47* L_6 = V_0;
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, t47* >::Invoke(12 /* System.Int32 System.StringComparer::GetHashCode(System.String) */, __this, L_6);
		G_B5_0 = L_7;
	}

IL_0027:
	{
		return G_B5_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1298.h"
#include "t1299.h"
#include "t1355.h"
#include "t1298MD.h"
#include "t1355MD.h"


extern TypeInfo* t688_TI_var;
extern "C" void m10061 (t1801 * __this, t709 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t688_TI_var = il2cpp_codegen_type_info_from_index(912);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t688_TI_var);
		m10056(__this, NULL);
		t709 * L_0 = p0;
		t1298 * L_1 = (t1298 *)VirtFuncInvoker0< t1298 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_0);
		__this->f5 = L_1;
		bool L_2 = p1;
		__this->f4 = L_2;
		return;
	}
}
extern "C" int32_t m10062 (t1801 * __this, t47* p0, t47* p1, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		t1298 * L_1 = (__this->f5);
		t47* L_2 = p0;
		t47* L_3 = p1;
		int32_t L_4 = V_0;
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t47*, t47*, int32_t >::Invoke(6 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String,System.Globalization.CompareOptions) */, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
extern "C" bool m10063 (t1801 * __this, t47* p0, t47* p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t47* L_1 = p1;
		int32_t L_2 = (int32_t)VirtFuncInvoker2< int32_t, t47*, t47* >::Invoke(10 /* System.Int32 System.CultureAwareComparer::Compare(System.String,System.String) */, __this, L_0, L_1);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
extern TypeInfo* t708_TI_var;
extern "C" int32_t m10064 (t1801 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral50, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->f4);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		V_0 = G_B5_0;
		t1298 * L_3 = (__this->f5);
		t47* L_4 = p0;
		int32_t L_5 = V_0;
		t1355 * L_6 = (t1355 *)VirtFuncInvoker2< t1355 *, t47*, int32_t >::Invoke(8 /* System.Globalization.SortKey System.Globalization.CompareInfo::GetSortKey(System.String,System.Globalization.CompareOptions) */, L_3, L_4, L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Globalization.SortKey::GetHashCode() */, L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t688_TI_var;
extern "C" void m10065 (t1802 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t688_TI_var = il2cpp_codegen_type_info_from_index(912);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t688_TI_var);
		m10056(__this, NULL);
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" int32_t m10066 (t1802 * __this, t47* p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		t47* L_1 = p0;
		t47* L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		int32_t L_3 = m6031(NULL, L_1, 0, ((int32_t)2147483647), L_2, 0, ((int32_t)2147483647), NULL);
		return L_3;
	}

IL_001c:
	{
		t47* L_4 = p0;
		t47* L_5 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		int32_t L_6 = m6030(NULL, L_4, 0, ((int32_t)2147483647), L_5, 0, ((int32_t)2147483647), NULL);
		return L_6;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" bool m10067 (t1802 * __this, t47* p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t47* L_1 = p0;
		t47* L_2 = p1;
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, t47*, t47* >::Invoke(10 /* System.Int32 System.OrdinalComparer::Compare(System.String,System.String) */, __this, L_1, L_2);
		return ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0014:
	{
		t47* L_4 = p0;
		t47* L_5 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_6 = m185(NULL, L_4, L_5, NULL);
		return L_6;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" int32_t m10068 (t1802 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral50, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->f4);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t47* L_3 = p0;
		int32_t L_4 = m6063(L_3, NULL);
		return L_4;
	}

IL_001d:
	{
		t47* L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_5);
		return L_6;
	}
}
#include "t694.h"
#ifndef _MSC_VER
#else
#endif
#include "t694MD.h"



#include "t81.h"
#ifndef _MSC_VER
#else
#endif
#include "t81MD.h"



#include "t1128.h"
#ifndef _MSC_VER
#else
#endif



extern "C" void m10069 (t1128 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2392, NULL);
		m3349(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233087), NULL);
		return;
	}
}
extern "C" void m4638 (t1128 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m3349(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233087), NULL);
		return;
	}
}
extern "C" void m10070 (t1128 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m5673(__this, L_0, L_1, NULL);
		return;
	}
}
extern "C" void m10071 (t1128 * __this, t47* p0, t65 * p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t65 * L_1 = p1;
		m3351(__this, L_0, L_1, NULL);
		m3350(__this, ((int32_t)-2146233087), NULL);
		return;
	}
}
#include "t1803.h"
#ifndef _MSC_VER
#else
#endif
#include "t1803MD.h"



extern "C" void m10072 (t1803 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t991.h"
#ifndef _MSC_VER
#else
#endif
#include "t991MD.h"

#include "t1877.h"
#include "t1878.h"
#include "t711.h"
#include "t1877MD.h"
#include "t1878MD.h"
#include "t711MD.h"
#include "t712MD.h"
#include "t58MD.h"


extern "C" void m10073 (t991 * __this, int64_t p0, const MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern TypeInfo* t991_TI_var;
extern "C" void m10074 (t991 * __this, int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		int64_t L_3 = m10077(NULL, 0, L_0, L_1, L_2, 0, NULL);
		__this->f3 = L_3;
		return;
	}
}
extern TypeInfo* t991_TI_var;
extern "C" void m10075 (t991 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		int64_t L_5 = m10077(NULL, L_0, L_1, L_2, L_3, L_4, NULL);
		__this->f3 = L_5;
		return;
	}
}
extern TypeInfo* t991_TI_var;
extern TypeInfo* t1788_TI_var;
extern TypeInfo* t1877_TI_var;
extern TypeInfo* t1878_TI_var;
extern const MethodInfo* m10223_MI_var;
extern const MethodInfo* m10224_MI_var;
extern "C" void m10076 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		t1788_TI_var = il2cpp_codegen_type_info_from_index(3058);
		t1877_TI_var = il2cpp_codegen_type_info_from_index(3085);
		t1878_TI_var = il2cpp_codegen_type_info_from_index(3086);
		m10223_MI_var = il2cpp_codegen_method_info_from_index(2147483999);
		m10224_MI_var = il2cpp_codegen_method_info_from_index(2147484000);
		s_Il2CppMethodIntialized = true;
	}
	t1877 * V_0 = {0};
	t1878 * V_1 = {0};
	{
		t991  L_0 = {0};
		m10073(&L_0, ((int64_t)std::numeric_limits<int64_t>::max()), NULL);
		((t991_SFs*)t991_TI_var->static_fields)->f0 = L_0;
		t991  L_1 = {0};
		m10073(&L_1, ((int64_t)std::numeric_limits<int64_t>::min()), NULL);
		((t991_SFs*)t991_TI_var->static_fields)->f1 = L_1;
		t991  L_2 = {0};
		m10073(&L_2, (((int64_t)0)), NULL);
		((t991_SFs*)t991_TI_var->static_fields)->f2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(t1788_TI_var);
		bool L_3 = ((t1788_SFs*)t1788_TI_var->static_fields)->f0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		t1877 * L_4 = (t1877 *)il2cpp_codegen_object_new (t1877_TI_var);
		m10223(L_4, m10223_MI_var);
		V_0 = L_4;
		t1878 * L_5 = (t1878 *)il2cpp_codegen_object_new (t1878_TI_var);
		m10224(L_5, m10224_MI_var);
		V_1 = L_5;
	}

IL_0045:
	{
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern "C" int64_t m10077 (t7 * __this , int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((int32_t)((int32_t)L_0*(int32_t)((int32_t)3600)));
		int32_t L_1 = p2;
		V_1 = ((int32_t)((int32_t)L_1*(int32_t)((int32_t)60)));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = p3;
		int32_t L_5 = p4;
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))+(int32_t)L_4))))*(int64_t)(((int64_t)((int32_t)1000)))))+(int64_t)(((int64_t)L_5))));
		int64_t L_6 = V_2;
		V_2 = ((int64_t)((int64_t)L_6*(int64_t)(((int64_t)((int32_t)10000)))));
		V_3 = 0;
		int32_t L_7 = p0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = p0;
		V_4 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)L_8))));
		int64_t L_9 = V_2;
		if ((((int64_t)L_9) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0051;
		}
	}
	{
		int64_t L_10 = V_2;
		V_5 = L_10;
		int64_t L_11 = V_2;
		int64_t L_12 = V_4;
		V_2 = ((int64_t)((int64_t)L_11+(int64_t)L_12));
		int64_t L_13 = V_5;
		int64_t L_14 = V_2;
		V_3 = ((((int64_t)L_13) > ((int64_t)L_14))? 1 : 0);
		goto IL_005c;
	}

IL_0051:
	{
		int64_t L_15 = V_2;
		int64_t L_16 = V_4;
		V_2 = ((int64_t)((int64_t)L_15+(int64_t)L_16));
		int64_t L_17 = V_2;
		V_3 = ((((int64_t)L_17) < ((int64_t)(((int64_t)0))))? 1 : 0);
	}

IL_005c:
	{
		goto IL_0090;
	}

IL_005e:
	{
		int32_t L_18 = p0;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_19 = p0;
		V_6 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)L_19))));
		int64_t L_20 = V_2;
		if ((((int64_t)L_20) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_21 = V_2;
		int64_t L_22 = V_6;
		V_2 = ((int64_t)((int64_t)L_21+(int64_t)L_22));
		int64_t L_23 = V_2;
		V_3 = ((((int64_t)L_23) > ((int64_t)(((int64_t)0))))? 1 : 0);
		goto IL_0090;
	}

IL_0082:
	{
		int64_t L_24 = V_2;
		V_7 = L_24;
		int64_t L_25 = V_2;
		int64_t L_26 = V_6;
		V_2 = ((int64_t)((int64_t)L_25+(int64_t)L_26));
		int64_t L_27 = V_2;
		int64_t L_28 = V_7;
		V_3 = ((((int64_t)L_27) > ((int64_t)L_28))? 1 : 0);
	}

IL_0090:
	{
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_00a3;
		}
	}
	{
		t47* L_30 = m6526(NULL, (t47*) &_stringLiteral2393, NULL);
		t711 * L_31 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_31, L_30, NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a3:
	{
		int64_t L_32 = V_2;
		return L_32;
	}
}
extern "C" int32_t m10078 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))));
	}
}
extern "C" int32_t m10079 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)864000000000LL)))/(int64_t)((int64_t)36000000000LL)))));
	}
}
extern "C" int32_t m10080 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)((int32_t)10000)))))));
	}
}
extern "C" int32_t m10081 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)36000000000LL)))/(int64_t)(((int64_t)((int32_t)600000000)))))));
	}
}
extern "C" int32_t m10082 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)600000000)))))/(int64_t)(((int64_t)((int32_t)10000000)))))));
	}
}
extern "C" int64_t m10083 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" double m10084 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(864000000000.0)));
	}
}
extern "C" double m10085 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(36000000000.0)));
	}
}
extern "C" double m10086 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000.0)));
	}
}
extern "C" double m10087 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(600000000.0)));
	}
}
extern "C" double m10088 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000000.0)));
	}
}
extern TypeInfo* t1797_TI_var;
extern "C" t991  m10089 (t991 * __this, t991  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1797_TI_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
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
			int64_t L_0 = (__this->f3);
			int64_t L_1 = m10083((&p0), NULL);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL - (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 < (int64_t)(int64_t)-9223372036854775808LL - (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t991  L_2 = {0};
			m10073(&L_2, ((int64_t)((int64_t)L_0+(int64_t)L_1)), NULL);
			V_0 = L_2;
			goto IL_002b;
		}

IL_0016:
		{
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t1797_TI_var, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t47* L_3 = m6526(NULL, (t47*) &_stringLiteral2394, NULL);
		t1797 * L_4 = (t1797 *)il2cpp_codegen_object_new (t1797_TI_var);
		m10044(L_4, L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t991  L_5 = V_0;
		return L_5;
	}
}
extern "C" int32_t m10090 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		if ((((int64_t)L_0) >= ((int64_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		int64_t L_2 = ((&p0)->f3);
		int64_t L_3 = ((&p1)->f3);
		if ((((int64_t)L_2) <= ((int64_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
extern TypeInfo* t991_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m10091 (t991 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		t7 * L_1 = p0;
		if (((t7 *)IsInst(L_1, t991_TI_var)))
		{
			goto IL_0022;
		}
	}
	{
		t47* L_2 = m6526(NULL, (t47*) &_stringLiteral2395, NULL);
		t396 * L_3 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_3, L_2, (t47*) &_stringLiteral563, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t7 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		int32_t L_5 = m10090(NULL, (*(t991 *)__this), ((*(t991 *)((t991 *)UnBox (L_4, t991_TI_var)))), NULL);
		return L_5;
	}
}
extern TypeInfo* t991_TI_var;
extern "C" int32_t m10092 (t991 * __this, t991  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	{
		t991  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		int32_t L_1 = m10090(NULL, (*(t991 *)__this), L_0, NULL);
		return L_1;
	}
}
extern "C" bool m10093 (t991 * __this, t991  p0, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = (__this->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern TypeInfo* t1797_TI_var;
extern "C" t991  m10094 (t991 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1797_TI_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
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
			int64_t L_0 = (__this->f3);
			int64_t L_1 = llabs(L_0);
			t991  L_2 = {0};
			m10073(&L_2, L_1, NULL);
			V_0 = L_2;
			goto IL_0028;
		}

IL_0013:
		{
			goto IL_0028;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t1797_TI_var, e.ex->object.klass))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.OverflowException)
		t47* L_3 = m6526(NULL, (t47*) &_stringLiteral2396, NULL);
		t1797 * L_4 = (t1797 *)il2cpp_codegen_object_new (t1797_TI_var);
		m10044(L_4, L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		t991  L_5 = V_0;
		return L_5;
	}
}
extern TypeInfo* t991_TI_var;
extern "C" bool m10095 (t991 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t991_TI_var)))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int64_t L_1 = (__this->f3);
		t7 * L_2 = p0;
		V_0 = ((*(t991 *)((t991 *)UnBox (L_2, t991_TI_var))));
		int64_t L_3 = ((&V_0)->f3);
		return ((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
extern TypeInfo* t991_TI_var;
extern "C" t991  m10096 (t7 * __this , double p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		t991  L_1 = m10097(NULL, L_0, (((int64_t)((int32_t)600000000))), NULL);
		return L_1;
	}
}
extern TypeInfo* t396_TI_var;
extern TypeInfo* t991_TI_var;
extern TypeInfo* t1797_TI_var;
extern "C" t991  m10097 (t7 * __this , double p0, int64_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		t1797_TI_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	t991  V_1 = {0};
	t991  V_2 = {0};
	t991  V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		double L_0 = p0;
		bool L_1 = m6126(NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		t47* L_2 = m6526(NULL, (t47*) &_stringLiteral2397, NULL);
		t396 * L_3 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_3, L_2, (t47*) &_stringLiteral563, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		double L_4 = p0;
		bool L_5 = m6127(NULL, L_4, NULL);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		double L_6 = p0;
		bool L_7 = m6128(NULL, L_6, NULL);
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		double L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		t991  L_9 = ((t991_SFs*)t991_TI_var->static_fields)->f1;
		V_1 = L_9;
		int64_t L_10 = m10083((&V_1), NULL);
		if ((((double)L_8) < ((double)(((double)L_10)))))
		{
			goto IL_004f;
		}
	}
	{
		double L_11 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		t991  L_12 = ((t991_SFs*)t991_TI_var->static_fields)->f0;
		V_2 = L_12;
		int64_t L_13 = m10083((&V_2), NULL);
		if ((!(((double)L_11) > ((double)(((double)L_13))))))
		{
			goto IL_005f;
		}
	}

IL_004f:
	{
		t47* L_14 = m6526(NULL, (t47*) &_stringLiteral2398, NULL);
		t1797 * L_15 = (t1797 *)il2cpp_codegen_object_new (t1797_TI_var);
		m10044(L_15, L_14, NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			double L_16 = p0;
			int64_t L_17 = p1;
			p0 = ((double)((double)L_16*(double)(((double)((int64_t)((int64_t)L_17/(int64_t)(((int64_t)((int32_t)10000)))))))));
			double L_18 = p0;
			double L_19 = round(L_18);
			if (L_19 > (double)(std::numeric_limits<int64_t>::max())) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			V_0 = (((int64_t)L_19));
			int64_t L_20 = V_0;
			if (il2cpp_codegen_check_mul_overflow_i64((int64_t)L_20, (int64_t)(((int64_t)((int32_t)10000))), (int64_t)-9223372036854775808LL, (int64_t)9223372036854775807LL))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t991  L_21 = {0};
			m10073(&L_21, ((int64_t)((int64_t)L_20*(int64_t)(((int64_t)((int32_t)10000))))), NULL);
			V_3 = L_21;
			goto IL_009b;
		}

IL_0086:
		{
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t1797_TI_var, e.ex->object.klass))
			goto CATCH_0088;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.OverflowException)
		t47* L_22 = m6526(NULL, (t47*) &_stringLiteral2394, NULL);
		t1797 * L_23 = (t1797 *)il2cpp_codegen_object_new (t1797_TI_var);
		m10044(L_23, L_22, NULL);
		il2cpp_codegen_raise_exception(L_23);
		goto IL_009b;
	} // end catch (depth: 1)

IL_009b:
	{
		t991  L_24 = V_3;
		return L_24;
	}
}
extern "C" int32_t m10098 (t991 * __this, const MethodInfo* method)
{
	{
		int64_t* L_0 = &(__this->f3);
		int32_t L_1 = m5792(L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t991_TI_var;
extern TypeInfo* t1797_TI_var;
extern "C" t991  m10099 (t991 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		t1797_TI_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
	{
		int64_t L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		t991  L_1 = ((t991_SFs*)t991_TI_var->static_fields)->f1;
		V_0 = L_1;
		int64_t L_2 = ((&V_0)->f3);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		t47* L_3 = m6526(NULL, (t47*) &_stringLiteral2399, NULL);
		t1797 * L_4 = (t1797 *)il2cpp_codegen_object_new (t1797_TI_var);
		m10044(L_4, L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int64_t L_5 = (__this->f3);
		t991  L_6 = {0};
		m10073(&L_6, ((-L_5)), NULL);
		return L_6;
	}
}
extern TypeInfo* t1797_TI_var;
extern "C" t991  m10100 (t991 * __this, t991  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1797_TI_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
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
			int64_t L_0 = (__this->f3);
			int64_t L_1 = m10083((&p0), NULL);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 < (int64_t)-9223372036854775808LL + (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL + (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t991  L_2 = {0};
			m10073(&L_2, ((int64_t)((int64_t)L_0-(int64_t)L_1)), NULL);
			V_0 = L_2;
			goto IL_002b;
		}

IL_0016:
		{
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t1797_TI_var, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t47* L_3 = m6526(NULL, (t47*) &_stringLiteral2394, NULL);
		t1797 * L_4 = (t1797 *)il2cpp_codegen_object_new (t1797_TI_var);
		m10044(L_4, L_3, NULL);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t991  L_5 = V_0;
		return L_5;
	}
}
extern TypeInfo* t336_TI_var;
extern "C" t47* m10101 (t991 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t336 * L_0 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_0, ((int32_t)14), NULL);
		V_0 = L_0;
		int64_t L_1 = (__this->f3);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		t336 * L_2 = V_0;
		m1772(L_2, ((int32_t)45), NULL);
	}

IL_001b:
	{
		int32_t L_3 = m10078(__this, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		t336 * L_4 = V_0;
		int32_t L_5 = m10078(__this, NULL);
		int32_t L_6 = abs(L_5);
		m4574(L_4, L_6, NULL);
		t336 * L_7 = V_0;
		m1772(L_7, ((int32_t)46), NULL);
	}

IL_003e:
	{
		t336 * L_8 = V_0;
		int32_t L_9 = m10079(__this, NULL);
		int32_t L_10 = abs(L_9);
		V_2 = L_10;
		t47* L_11 = m4635((&V_2), (t47*) &_stringLiteral2400, NULL);
		m3305(L_8, L_11, NULL);
		t336 * L_12 = V_0;
		m1772(L_12, ((int32_t)58), NULL);
		t336 * L_13 = V_0;
		int32_t L_14 = m10081(__this, NULL);
		int32_t L_15 = abs(L_14);
		V_3 = L_15;
		t47* L_16 = m4635((&V_3), (t47*) &_stringLiteral2400, NULL);
		m3305(L_13, L_16, NULL);
		t336 * L_17 = V_0;
		m1772(L_17, ((int32_t)58), NULL);
		t336 * L_18 = V_0;
		int32_t L_19 = m10082(__this, NULL);
		int32_t L_20 = abs(L_19);
		V_4 = L_20;
		t47* L_21 = m4635((&V_4), (t47*) &_stringLiteral2400, NULL);
		m3305(L_18, L_21, NULL);
		int64_t L_22 = (__this->f3);
		int64_t L_23 = llabs(((int64_t)((int64_t)L_22%(int64_t)(((int64_t)((int32_t)10000000))))));
		V_1 = (((int32_t)L_23));
		int32_t L_24 = V_1;
		if (!L_24)
		{
			goto IL_00e1;
		}
	}
	{
		t336 * L_25 = V_0;
		m1772(L_25, ((int32_t)46), NULL);
		t336 * L_26 = V_0;
		t47* L_27 = m4635((&V_1), (t47*) &_stringLiteral2401, NULL);
		m3305(L_26, L_27, NULL);
	}

IL_00e1:
	{
		t336 * L_28 = V_0;
		t47* L_29 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_28);
		return L_29;
	}
}
extern "C" t991  m10102 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		t991  L_0 = p1;
		t991  L_1 = m10089((&p0), L_0, NULL);
		return L_1;
	}
}
extern "C" bool m10103 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m10104 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m10105 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m10106 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m10107 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m10108 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t991  m10109 (t7 * __this , t991  p0, t991  p1, const MethodInfo* method)
{
	{
		t991  L_0 = p1;
		t991  L_1 = m10100((&p0), L_0, NULL);
		return L_1;
	}
}
#include "t1804.h"
#ifndef _MSC_VER
#else
#endif
#include "t1804MD.h"

#include "t1805.h"
#include "t1440.h"
#include "t505.h"
#include "t1762.h"
#include "t505MD.h"
#include "t1805MD.h"
#include "t1440MD.h"


extern "C" void m10110 (t1804 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t505_TI_var;
extern TypeInfo* t1805_TI_var;
extern TypeInfo* t1804_TI_var;
extern "C" void m10111 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t505_TI_var = il2cpp_codegen_type_info_from_index(896);
		t1805_TI_var = il2cpp_codegen_type_info_from_index(3087);
		t1804_TI_var = il2cpp_codegen_type_info_from_index(3061);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		int64_t L_0 = m9688(NULL, NULL);
		t1805 * L_1 = (t1805 *)il2cpp_codegen_object_new (t1805_TI_var);
		m10120(L_1, L_0, NULL);
		((t1804_SFs*)t1804_TI_var->static_fields)->f0 = L_1;
		return;
	}
}
extern TypeInfo* t1804_TI_var;
extern "C" t1804 * m10112 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1804_TI_var = il2cpp_codegen_type_info_from_index(3061);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1804_TI_var);
		t1804 * L_0 = ((t1804_SFs*)t1804_TI_var->static_fields)->f0;
		return L_0;
	}
}
extern TypeInfo* t1804_TI_var;
extern "C" bool m10113 (t1804 * __this, t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1804_TI_var = il2cpp_codegen_type_info_from_index(3061);
		s_Il2CppMethodIntialized = true;
	}
	{
		t505  L_0 = p0;
		int32_t L_1 = m9690((&p0), NULL);
		t1440 * L_2 = (t1440 *)VirtFuncInvoker1< t1440 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(t1804_TI_var);
		bool L_3 = m10114(NULL, L_0, L_2, NULL);
		return L_3;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" bool m10114 (t7 * __this , t505  p0, t1440 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	t505  V_0 = {0};
	t505  V_1 = {0};
	t505  V_2 = {0};
	t505  V_3 = {0};
	t505  V_4 = {0};
	t505  V_5 = {0};
	t505  V_6 = {0};
	t505  V_7 = {0};
	t505  V_8 = {0};
	t505  V_9 = {0};
	{
		t1440 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral2402, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1440 * L_2 = p1;
		t505  L_3 = m7400(L_2, NULL);
		V_0 = L_3;
		int64_t L_4 = m5659((&V_0), NULL);
		t1440 * L_5 = p1;
		t505  L_6 = m7401(L_5, NULL);
		V_1 = L_6;
		int64_t L_7 = m5659((&V_1), NULL);
		if ((!(((uint64_t)L_4) == ((uint64_t)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		return 0;
	}

IL_002e:
	{
		t1440 * L_8 = p1;
		t505  L_9 = m7400(L_8, NULL);
		V_2 = L_9;
		int64_t L_10 = m5659((&V_2), NULL);
		t1440 * L_11 = p1;
		t505  L_12 = m7401(L_11, NULL);
		V_3 = L_12;
		int64_t L_13 = m5659((&V_3), NULL);
		if ((((int64_t)L_10) >= ((int64_t)L_13)))
		{
			goto IL_0080;
		}
	}
	{
		t1440 * L_14 = p1;
		t505  L_15 = m7400(L_14, NULL);
		V_4 = L_15;
		int64_t L_16 = m5659((&V_4), NULL);
		int64_t L_17 = m5659((&p0), NULL);
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		t1440 * L_18 = p1;
		t505  L_19 = m7401(L_18, NULL);
		V_5 = L_19;
		int64_t L_20 = m5659((&V_5), NULL);
		int64_t L_21 = m5659((&p0), NULL);
		if ((((int64_t)L_20) <= ((int64_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		goto IL_00e2;
	}

IL_0080:
	{
		int32_t L_22 = m9690((&p0), NULL);
		t1440 * L_23 = p1;
		t505  L_24 = m7400(L_23, NULL);
		V_6 = L_24;
		int32_t L_25 = m9690((&V_6), NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_26 = m9690((&p0), NULL);
		t1440 * L_27 = p1;
		t505  L_28 = m7401(L_27, NULL);
		V_7 = L_28;
		int32_t L_29 = m9690((&V_7), NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_00e2;
		}
	}
	{
		int64_t L_30 = m5659((&p0), NULL);
		t1440 * L_31 = p1;
		t505  L_32 = m7401(L_31, NULL);
		V_8 = L_32;
		int64_t L_33 = m5659((&V_8), NULL);
		if ((((int64_t)L_30) < ((int64_t)L_33)))
		{
			goto IL_00e0;
		}
	}
	{
		int64_t L_34 = m5659((&p0), NULL);
		t1440 * L_35 = p1;
		t505  L_36 = m7400(L_35, NULL);
		V_9 = L_36;
		int64_t L_37 = m5659((&V_9), NULL);
		if ((((int64_t)L_34) <= ((int64_t)L_37)))
		{
			goto IL_00e2;
		}
	}

IL_00e0:
	{
		return 1;
	}

IL_00e2:
	{
		return 0;
	}
}
extern TypeInfo* t505_TI_var;
extern "C" t505  m10115 (t1804 * __this, t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t505_TI_var = il2cpp_codegen_type_info_from_index(896);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
	t505  V_1 = {0};
	t1440 * V_2 = {0};
	t991  V_3 = {0};
	t505  V_4 = {0};
	t991  V_5 = {0};
	t505  V_6 = {0};
	{
		int32_t L_0 = m9691((&p0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000c;
		}
	}
	{
		t505  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t505  L_2 = p0;
		t991  L_3 = (t991 )VirtFuncInvoker1< t991 , t505  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m10083((&V_0), NULL);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_5 = ((t505_SFs*)t505_TI_var->static_fields)->f2;
		t991  L_6 = V_0;
		t505  L_7 = m9726(NULL, L_5, L_6, NULL);
		t505  L_8 = p0;
		bool L_9 = m4602(NULL, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_10 = ((t505_SFs*)t505_TI_var->static_fields)->f2;
		t505  L_11 = m9699(NULL, L_10, 2, NULL);
		return L_11;
	}

IL_003e:
	{
		goto IL_0076;
	}

IL_0040:
	{
		int64_t L_12 = m10083((&V_0), NULL);
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_13 = m5659((&p0), NULL);
		int64_t L_14 = m10083((&V_0), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_15 = ((t505_SFs*)t505_TI_var->static_fields)->f3;
		V_4 = L_15;
		int64_t L_16 = m5659((&V_4), NULL);
		if ((((int64_t)((int64_t)((int64_t)L_13+(int64_t)L_14))) >= ((int64_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_17 = ((t505_SFs*)t505_TI_var->static_fields)->f3;
		t505  L_18 = m9699(NULL, L_17, 2, NULL);
		return L_18;
	}

IL_0076:
	{
		t991  L_19 = V_0;
		t505  L_20 = m9692((&p0), L_19, NULL);
		V_1 = L_20;
		int32_t L_21 = m9690((&p0), NULL);
		t1440 * L_22 = (t1440 *)VirtFuncInvoker1< t1440 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_21);
		V_2 = L_22;
		t1440 * L_23 = V_2;
		t991  L_24 = m7402(L_23, NULL);
		V_5 = L_24;
		int64_t L_25 = m10083((&V_5), NULL);
		if (L_25)
		{
			goto IL_00a6;
		}
	}
	{
		t505  L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_27 = m9699(NULL, L_26, 2, NULL);
		return L_27;
	}

IL_00a6:
	{
		t505  L_28 = V_1;
		t1440 * L_29 = V_2;
		t505  L_30 = m7401(L_29, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		bool L_31 = m4602(NULL, L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		t1440 * L_32 = V_2;
		t505  L_33 = m7401(L_32, NULL);
		V_6 = L_33;
		t1440 * L_34 = V_2;
		t991  L_35 = m7402(L_34, NULL);
		t505  L_36 = m9720((&V_6), L_35, NULL);
		t505  L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		bool L_38 = m4601(NULL, L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		t505  L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_40 = m9699(NULL, L_39, 2, NULL);
		return L_40;
	}

IL_00d9:
	{
		t505  L_41 = V_1;
		t991  L_42 = (t991 )VirtFuncInvoker1< t991 , t505  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_41);
		V_3 = L_42;
		t991  L_43 = V_3;
		t505  L_44 = m9692((&p0), L_43, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_45 = m9699(NULL, L_44, 2, NULL);
		return L_45;
	}
}
extern TypeInfo* t505_TI_var;
extern "C" t505  m10116 (t1804 * __this, t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t505_TI_var = il2cpp_codegen_type_info_from_index(896);
		s_Il2CppMethodIntialized = true;
	}
	t991  V_0 = {0};
	{
		int32_t L_0 = m9691((&p0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		t505  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t505  L_2 = p0;
		t991  L_3 = (t991 )VirtFuncInvoker1< t991 , t505  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m10083((&V_0), NULL);
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_5 = ((t505_SFs*)t505_TI_var->static_fields)->f2;
		t991  L_6 = V_0;
		t505  L_7 = m9723(NULL, L_5, L_6, NULL);
		t505  L_8 = p0;
		bool L_9 = m4602(NULL, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_10 = ((t505_SFs*)t505_TI_var->static_fields)->f2;
		t505  L_11 = m9699(NULL, L_10, 1, NULL);
		return L_11;
	}

IL_003e:
	{
		goto IL_006a;
	}

IL_0040:
	{
		int64_t L_12 = m10083((&V_0), NULL);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_13 = ((t505_SFs*)t505_TI_var->static_fields)->f3;
		t991  L_14 = V_0;
		t505  L_15 = m9723(NULL, L_13, L_14, NULL);
		t505  L_16 = p0;
		bool L_17 = m4603(NULL, L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_18 = ((t505_SFs*)t505_TI_var->static_fields)->f3;
		t505  L_19 = m9699(NULL, L_18, 1, NULL);
		return L_19;
	}

IL_006a:
	{
		int64_t L_20 = m5659((&p0), NULL);
		int64_t L_21 = m10083((&V_0), NULL);
		t505  L_22 = {0};
		m9659(&L_22, ((int64_t)((int64_t)L_20-(int64_t)L_21)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_23 = m9699(NULL, L_22, 1, NULL);
		return L_23;
	}
}
extern "C" t991  m10117 (t1804 * __this, t505  p0, const MethodInfo* method)
{
	{
		t505  L_0 = p0;
		t505  L_1 = p0;
		t991  L_2 = (t991 )VirtFuncInvoker1< t991 , t505  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_1);
		t991  L_3 = m10118(__this, L_0, L_2, NULL);
		return L_3;
	}
}
extern TypeInfo* t505_TI_var;
extern TypeInfo* t991_TI_var;
extern "C" t991  m10118 (t1804 * __this, t505  p0, t991  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t505_TI_var = il2cpp_codegen_type_info_from_index(896);
		t991_TI_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	t1440 * V_0 = {0};
	t505  V_1 = {0};
	t991  V_2 = {0};
	t505  V_3 = {0};
	t505  V_4 = {0};
	{
		int32_t L_0 = m9690((&p0), NULL);
		t1440 * L_1 = (t1440 *)VirtFuncInvoker1< t1440 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_0);
		V_0 = L_1;
		t1440 * L_2 = V_0;
		t991  L_3 = m7402(L_2, NULL);
		V_2 = L_3;
		int64_t L_4 = m10083((&V_2), NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		t991  L_5 = p1;
		return L_5;
	}

IL_0020:
	{
		t991  L_6 = p1;
		t505  L_7 = m9692((&p0), L_6, NULL);
		V_1 = L_7;
		t505  L_8 = V_1;
		t1440 * L_9 = V_0;
		t505  L_10 = m7401(L_9, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		bool L_11 = m4602(NULL, L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		t1440 * L_12 = V_0;
		t505  L_13 = m7401(L_12, NULL);
		V_3 = L_13;
		t1440 * L_14 = V_0;
		t991  L_15 = m7402(L_14, NULL);
		t505  L_16 = m9720((&V_3), L_15, NULL);
		t505  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		bool L_18 = m4601(NULL, L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		t991  L_19 = p1;
		return L_19;
	}

IL_0055:
	{
		t505  L_20 = V_1;
		t1440 * L_21 = V_0;
		t505  L_22 = m7400(L_21, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		bool L_23 = m4536(NULL, L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_008d;
		}
	}
	{
		t1440 * L_24 = V_0;
		t505  L_25 = m7400(L_24, NULL);
		V_4 = L_25;
		t1440 * L_26 = V_0;
		t991  L_27 = m7402(L_26, NULL);
		t505  L_28 = m9692((&V_4), L_27, NULL);
		t505  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		bool L_30 = m4603(NULL, L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_008d;
		}
	}
	{
		t991  L_31 = p1;
		t1440 * L_32 = V_0;
		t991  L_33 = m7402(L_32, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t991_TI_var);
		t991  L_34 = m10109(NULL, L_31, L_33, NULL);
		return L_34;
	}

IL_008d:
	{
		t505  L_35 = V_1;
		t991  L_36 = (t991 )VirtFuncInvoker1< t991 , t505  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_35);
		return L_36;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1100MD.h"


extern TypeInfo* t910_TI_var;
extern TypeInfo* t1804_TI_var;
extern "C" void m10119 (t1805 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t1804_TI_var = il2cpp_codegen_type_info_from_index(3061);
		s_Il2CppMethodIntialized = true;
	}
	{
		t910 * L_0 = (t910 *)il2cpp_codegen_object_new (t910_TI_var);
		m4642(L_0, 1, NULL);
		__this->f3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1804_TI_var);
		m10110(__this, NULL);
		return;
	}
}
extern TypeInfo* t910_TI_var;
extern TypeInfo* t1804_TI_var;
extern TypeInfo* t61_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" void m10120 (t1805 * __this, int64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t1804_TI_var = il2cpp_codegen_type_info_from_index(3061);
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	t1839* V_0 = {0};
	t48* V_1 = {0};
	t505  V_2 = {0};
	t1440 * V_3 = {0};
	{
		t910 * L_0 = (t910 *)il2cpp_codegen_object_new (t910_TI_var);
		m4642(L_0, 1, NULL);
		__this->f3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1804_TI_var);
		m10110(__this, NULL);
		int64_t L_1 = p0;
		m9659((&V_2), L_1, NULL);
		int32_t L_2 = m9690((&V_2), NULL);
		bool L_3 = m10122(NULL, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		t47* L_4 = m6526(NULL, (t47*) &_stringLiteral2403, NULL);
		t61 * L_5 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_5, L_4, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003c:
	{
		t48* L_6 = V_1;
		int32_t L_7 = 0;
		t47* L_8 = m6526(NULL, (*(t47**)(t47**)SZArrayLdElema(L_6, L_7)), NULL);
		__this->f1 = L_8;
		t48* L_9 = V_1;
		int32_t L_10 = 1;
		t47* L_11 = m6526(NULL, (*(t47**)(t47**)SZArrayLdElema(L_9, L_10)), NULL);
		__this->f2 = L_11;
		t1839* L_12 = V_0;
		int32_t L_13 = 2;
		__this->f4 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_12, L_13));
		t1839* L_14 = V_0;
		t1440 * L_15 = m10126(__this, L_14, NULL);
		V_3 = L_15;
		t910 * L_16 = (__this->f3);
		int32_t L_17 = m9690((&V_2), NULL);
		int32_t L_18 = L_17;
		t7 * L_19 = Box(t58_TI_var, &L_18);
		t1440 * L_20 = V_3;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_16, L_19, L_20);
		t1440 * L_21 = V_3;
		m10125(__this, L_21, NULL);
		return;
	}
}
extern "C" void m10121 (t1805 * __this, t7 * p0, const MethodInfo* method)
{
	{
		m10125(__this, (t1440 *)NULL, NULL);
		return;
	}
}
extern "C" bool m10122 (t7 * __this , int32_t p0, t1839** p1, t48** p2, const MethodInfo* method)
{
	typedef bool (*m10122_ftn) (int32_t, t1839**, t48**);
	static m10122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m10122_ftn)il2cpp_codegen_resolve_icall ("System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t1805_TI_var;
extern TypeInfo* t1440_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t1440 * m10123 (t1805 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t1805_TI_var = il2cpp_codegen_type_info_from_index(3087);
		t1440_TI_var = il2cpp_codegen_type_info_from_index(3088);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t910 * V_0 = {0};
	t1440 * V_1 = {0};
	t1839* V_2 = {0};
	t48* V_3 = {0};
	t1440 * V_4 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)9999))))
		{
			goto IL_002c;
		}
	}

IL_000c:
	{
		int32_t L_2 = p0;
		int32_t L_3 = L_2;
		t7 * L_4 = Box(t58_TI_var, &L_3);
		t47* L_5 = m6526(NULL, (t47*) &_stringLiteral2405, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = m217(NULL, L_4, L_5, NULL);
		t711 * L_7 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_7, (t47*) &_stringLiteral2404, L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002c:
	{
		int32_t L_8 = p0;
		int32_t L_9 = ((t1805_SFs*)t1805_TI_var->static_fields)->f7;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		t1440 * L_10 = ((t1805_SFs*)t1805_TI_var->static_fields)->f8;
		return L_10;
	}

IL_003a:
	{
		t910 * L_11 = (__this->f3);
		V_0 = L_11;
		t910 * L_12 = V_0;
		m4528(NULL, L_12, NULL);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			t910 * L_13 = (__this->f3);
			int32_t L_14 = p0;
			int32_t L_15 = L_14;
			t7 * L_16 = Box(t58_TI_var, &L_15);
			t7 * L_17 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, L_16);
			V_1 = ((t1440 *)Castclass(L_17, t1440_TI_var));
			t1440 * L_18 = V_1;
			if (L_18)
			{
				goto IL_00a2;
			}
		}

IL_0061:
		{
			int32_t L_19 = p0;
			bool L_20 = m10122(NULL, L_19, (&V_2), (&V_3), NULL);
			if (L_20)
			{
				goto IL_0088;
			}
		}

IL_006d:
		{
			int32_t L_21 = p0;
			int32_t L_22 = L_21;
			t7 * L_23 = Box(t58_TI_var, &L_22);
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_24 = m217(NULL, (t47*) &_stringLiteral2406, L_23, NULL);
			t47* L_25 = m6526(NULL, L_24, NULL);
			t396 * L_26 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
			m1912(L_26, L_25, NULL);
			il2cpp_codegen_raise_exception(L_26);
		}

IL_0088:
		{
			t1839* L_27 = V_2;
			t1440 * L_28 = m10126(__this, L_27, NULL);
			V_1 = L_28;
			t910 * L_29 = (__this->f3);
			int32_t L_30 = p0;
			int32_t L_31 = L_30;
			t7 * L_32 = Box(t58_TI_var, &L_31);
			t1440 * L_33 = V_1;
			VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_29, L_32, L_33);
		}

IL_00a2:
		{
			t1440 * L_34 = V_1;
			V_4 = L_34;
			IL2CPP_LEAVE(0xB0, FINALLY_00a9);
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		t910 * L_35 = V_0;
		m4529(NULL, L_35, NULL);
		IL2CPP_END_FINALLY(169)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_00b0:
	{
		t1440 * L_36 = V_4;
		return L_36;
	}
}
extern "C" t991  m10124 (t1805 * __this, t505  p0, const MethodInfo* method)
{
	{
		t505  L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t505  >::Invoke(6 /* System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime) */, __this, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		t991  L_2 = (__this->f6);
		return L_2;
	}

IL_0010:
	{
		t991  L_3 = (__this->f5);
		return L_3;
	}
}
extern TypeInfo* t505_TI_var;
extern TypeInfo* t1805_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m10125 (t1805 * __this, t1440 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t505_TI_var = il2cpp_codegen_type_info_from_index(896);
		t1805_TI_var = il2cpp_codegen_type_info_from_index(3087);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	t1839* V_0 = {0};
	t48* V_1 = {0};
	t505  V_2 = {0};
	t505  V_3 = {0};
	t991  V_4 = {0};
	{
		t1440 * L_0 = p0;
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_1 = m3226(NULL, NULL);
		V_2 = L_1;
		int32_t L_2 = m9690((&V_2), NULL);
		((t1805_SFs*)t1805_TI_var->static_fields)->f7 = L_2;
		int32_t L_3 = ((t1805_SFs*)t1805_TI_var->static_fields)->f7;
		bool L_4 = m10122(NULL, L_3, (&V_0), (&V_1), NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ((t1805_SFs*)t1805_TI_var->static_fields)->f7;
		int32_t L_6 = L_5;
		t7 * L_7 = Box(t58_TI_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_8 = m217(NULL, (t47*) &_stringLiteral2406, L_7, NULL);
		t47* L_9 = m6526(NULL, L_8, NULL);
		t396 * L_10 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_10, L_9, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		t1839* L_11 = V_0;
		t1440 * L_12 = m10126(__this, L_11, NULL);
		p0 = L_12;
		goto IL_0064;
	}

IL_0051:
	{
		t1440 * L_13 = p0;
		t505  L_14 = m7400(L_13, NULL);
		V_3 = L_14;
		int32_t L_15 = m9690((&V_3), NULL);
		((t1805_SFs*)t1805_TI_var->static_fields)->f7 = L_15;
	}

IL_0064:
	{
		int64_t L_16 = (__this->f4);
		t991  L_17 = {0};
		m10073(&L_17, L_16, NULL);
		__this->f5 = L_17;
		int64_t L_18 = (__this->f4);
		t1440 * L_19 = p0;
		t991  L_20 = m7402(L_19, NULL);
		V_4 = L_20;
		int64_t L_21 = m10083((&V_4), NULL);
		t991  L_22 = {0};
		m10073(&L_22, ((int64_t)((int64_t)L_18+(int64_t)L_21)), NULL);
		__this->f6 = L_22;
		t1440 * L_23 = p0;
		((t1805_SFs*)t1805_TI_var->static_fields)->f8 = L_23;
		return;
	}
}
extern TypeInfo* t1440_TI_var;
extern "C" t1440 * m10126 (t1805 * __this, t1839* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1440_TI_var = il2cpp_codegen_type_info_from_index(3088);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1839* L_0 = p0;
		int32_t L_1 = 0;
		t505  L_2 = {0};
		m9659(&L_2, (*(int64_t*)(int64_t*)SZArrayLdElema(L_0, L_1)), NULL);
		t1839* L_3 = p0;
		int32_t L_4 = 1;
		t505  L_5 = {0};
		m9659(&L_5, (*(int64_t*)(int64_t*)SZArrayLdElema(L_3, L_4)), NULL);
		t1839* L_6 = p0;
		int32_t L_7 = 3;
		t991  L_8 = {0};
		m10073(&L_8, (*(int64_t*)(int64_t*)SZArrayLdElema(L_6, L_7)), NULL);
		t1440 * L_9 = (t1440 *)il2cpp_codegen_object_new (t1440_TI_var);
		m7399(L_9, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
#include "t1806.h"
#ifndef _MSC_VER
#else
#endif
#include "t1806MD.h"



#include "t1807.h"
#ifndef _MSC_VER
#else
#endif
#include "t1807MD.h"



extern "C" void m10127 (t1807 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		t921 * L_2 = p0;
		t47* L_3 = m4522(L_2, (t47*) &_stringLiteral1204, NULL);
		__this->f11 = L_3;
		return;
	}
}
extern "C" void m10128 (t1807 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m3486(__this, L_0, L_1, NULL);
		t921 * L_2 = p0;
		t47* L_3 = (__this->f11);
		m4525(L_2, (t47*) &_stringLiteral1204, L_3, NULL);
		return;
	}
}
#include "t1769.h"
#ifndef _MSC_VER
#else
#endif
#include "t1769MD.h"



extern "C" void m10129 (t1769 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2409, NULL);
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233054), NULL);
		return;
	}
}
extern "C" void m10130 (t1769 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233054), NULL);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m10131 (t1769 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		t921 * L_2 = p0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0016:
	{
		t921 * L_4 = p0;
		t47* L_5 = m4522(L_4, (t47*) &_stringLiteral2410, NULL);
		__this->f12 = L_5;
		t921 * L_6 = p0;
		t47* L_7 = m4522(L_6, (t47*) &_stringLiteral2411, NULL);
		__this->f13 = L_7;
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10132 (t1769 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = (__this->f12);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		t47* L_1 = (__this->f13);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		t47* L_2 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		bool L_4 = m1753(NULL, L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t47* L_5 = (__this->f12);
		t47* L_6 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = m6051(NULL, (t47*) &_stringLiteral2407, L_5, L_6, NULL);
		return L_7;
	}

IL_0039:
	{
		t47* L_8 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_9 = m1593(NULL, (t47*) &_stringLiteral2408, L_8, NULL);
		return L_9;
	}

IL_004a:
	{
		t47* L_10 = m3488(__this, NULL);
		return L_10;
	}
}
extern const Il2CppType* t47_0_0_0_var;
extern const Il2CppType* t58_0_0_0_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" void m10133 (t1769 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_0_0_0_var = il2cpp_codegen_type_from_index(15);
		t58_0_0_0_var = il2cpp_codegen_type_from_index(14);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t921 * L_2 = p0;
		t1084  L_3 = p1;
		m3486(__this, L_2, L_3, NULL);
		t921 * L_4 = p0;
		t47* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m1613(NULL, LoadTypeToken(t47_0_0_0_var), NULL);
		m4513(L_4, (t47*) &_stringLiteral2410, L_5, L_6, NULL);
		t921 * L_7 = p0;
		t47* L_8 = (__this->f13);
		t347 * L_9 = m1613(NULL, LoadTypeToken(t47_0_0_0_var), NULL);
		m4513(L_7, (t47*) &_stringLiteral2411, L_8, L_9, NULL);
		t921 * L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_11 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		t347 * L_12 = m1613(NULL, LoadTypeToken(t47_0_0_0_var), NULL);
		m4513(L_10, (t47*) &_stringLiteral2412, L_11, L_12, NULL);
		t921 * L_13 = p0;
		int32_t L_14 = 0;
		t7 * L_15 = Box(t58_TI_var, &L_14);
		t347 * L_16 = m1613(NULL, LoadTypeToken(t58_0_0_0_var), NULL);
		m4513(L_13, (t47*) &_stringLiteral2413, L_15, L_16, NULL);
		return;
	}
}
#include "t1808.h"
#ifndef _MSC_VER
#else
#endif
#include "t1808MD.h"



extern "C" void m10134 (t1808 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m6526(NULL, (t47*) &_stringLiteral2414, NULL);
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233088), NULL);
		return;
	}
}
extern "C" void m10135 (t1808 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4638(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2146233088), NULL);
		return;
	}
}
extern "C" void m10136 (t1808 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m10070(__this, L_0, L_1, NULL);
		return;
	}
}
#include "t1809.h"
#ifndef _MSC_VER
#else
#endif
#include "t1809MD.h"

#include "t1182MD.h"


extern TypeInfo* t1182_TI_var;
extern "C" void m10137 (t1809 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1182_TI_var = il2cpp_codegen_type_info_from_index(2493);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1182_TI_var);
		m9789(__this, NULL);
		t7 * L_0 = p0;
		__this->f1 = L_0;
		bool L_1 = p1;
		__this->f2 = L_1;
		return;
	}
}
extern "C" t7 * m10138 (t1809 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" bool m10139 (t1809 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
#include "t1810.h"
#ifndef _MSC_VER
#else
#endif
#include "t1810MD.h"



#include "t1811.h"
#ifndef _MSC_VER
#else
#endif

#include "t1760.h"
#include "t1105MD.h"
#include "t1490MD.h"
#include "t1760MD.h"


extern "C" void m10140 (t1811 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t921 * L_0 = p0;
		t47* L_1 = m4522(L_0, (t47*) &_stringLiteral1229, NULL);
		__this->f0 = L_1;
		t921 * L_2 = p0;
		int32_t L_3 = m4524(L_2, (t47*) &_stringLiteral2415, NULL);
		__this->f1 = (((uint8_t)L_3));
		t921 * L_4 = p0;
		t47* L_5 = m4522(L_4, (t47*) &_stringLiteral1692, NULL);
		__this->f2 = L_5;
		return;
	}
}
extern const Il2CppType* t1811_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern "C" void m10141 (t7 * __this , t347 * p0, t921 * p1, t1084  p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1811_0_0_0_var = il2cpp_codegen_type_from_index(3089);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t921 * L_0 = p1;
		t347 * L_1 = p0;
		t47* L_2 = (t47*)VirtFuncInvoker0< t47* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		m4525(L_0, (t47*) &_stringLiteral1229, L_2, NULL);
		t921 * L_3 = p1;
		m4515(L_3, (t47*) &_stringLiteral2415, 4, NULL);
		t921 * L_4 = p1;
		t347 * L_5 = p0;
		t1105 * L_6 = (t1105 *)VirtFuncInvoker0< t1105 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		t47* L_7 = (t47*)VirtFuncInvoker0< t47* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		m4525(L_4, (t47*) &_stringLiteral1692, L_7, NULL);
		t921 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_9 = m1613(NULL, LoadTypeToken(t1811_0_0_0_var), NULL);
		m8677(L_8, L_9, NULL);
		return;
	}
}
extern const Il2CppType* t1811_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern "C" void m10142 (t7 * __this , t1760 * p0, t921 * p1, t1084  p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1811_0_0_0_var = il2cpp_codegen_type_from_index(3089);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t921 * L_0 = p1;
		m4525(L_0, (t47*) &_stringLiteral1229, NULL, NULL);
		t921 * L_1 = p1;
		m4515(L_1, (t47*) &_stringLiteral2415, 2, NULL);
		t921 * L_2 = p1;
		t1760 * L_3 = p0;
		t347 * L_4 = m1520(L_3, NULL);
		t1105 * L_5 = (t1105 *)VirtFuncInvoker0< t1105 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		m4525(L_2, (t47*) &_stringLiteral1692, L_6, NULL);
		t921 * L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_8 = m1613(NULL, LoadTypeToken(t1811_0_0_0_var), NULL);
		m8677(L_7, L_8, NULL);
		return;
	}
}
extern const Il2CppType* t1811_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern "C" void m10143 (t7 * __this , t1490 * p0, t921 * p1, t1084  p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1811_0_0_0_var = il2cpp_codegen_type_from_index(3089);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		t921 * L_0 = p1;
		t1490 * L_1 = p0;
		t47* L_2 = m8099(L_1, NULL);
		m4525(L_0, (t47*) &_stringLiteral1229, L_2, NULL);
		t921 * L_3 = p1;
		m4515(L_3, (t47*) &_stringLiteral2415, 5, NULL);
		t921 * L_4 = p1;
		t1490 * L_5 = p0;
		t1105 * L_6 = m8098(L_5, NULL);
		t47* L_7 = (t47*)VirtFuncInvoker0< t47* >::Invoke(6 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		m4525(L_4, (t47*) &_stringLiteral1692, L_7, NULL);
		t921 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_9 = m1613(NULL, LoadTypeToken(t1811_0_0_0_var), NULL);
		m8677(L_8, L_9, NULL);
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m10144 (t1811 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
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
extern TypeInfo* t1760_TI_var;
extern TypeInfo* t61_TI_var;
extern "C" t7 * m10145 (t1811 * __this, t1084  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1760_TI_var = il2cpp_codegen_type_info_from_index(3057);
		t61_TI_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	t1105 * V_0 = {0};
	t1105 * V_1 = {0};
	uint8_t V_2 = {0};
	{
		uint8_t L_0 = (__this->f1);
		V_2 = L_0;
		uint8_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0069;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0025;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 3)
		{
			goto IL_0044;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 4)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0069;
	}

IL_0025:
	{
		t47* L_2 = (__this->f2);
		t1105 * L_3 = m8001(NULL, L_2, NULL);
		V_0 = L_3;
		t1105 * L_4 = V_0;
		t47* L_5 = (__this->f0);
		t347 * L_6 = (t347 *)VirtFuncInvoker1< t347 *, t47* >::Invoke(11 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		return L_6;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1760_TI_var);
		t1760 * L_7 = ((t1760_SFs*)t1760_TI_var->static_fields)->f0;
		return L_7;
	}

IL_0044:
	{
		t47* L_8 = (__this->f2);
		t1105 * L_9 = m8001(NULL, L_8, NULL);
		V_1 = L_9;
		t1105 * L_10 = V_1;
		t47* L_11 = (__this->f0);
		t1490 * L_12 = (t1490 *)VirtFuncInvoker1< t1490 *, t47* >::Invoke(14 /* System.Reflection.Module System.Reflection.Assembly::GetModule(System.String) */, L_10, L_11);
		return L_12;
	}

IL_005d:
	{
		t47* L_13 = (__this->f0);
		t1105 * L_14 = m8001(NULL, L_13, NULL);
		return L_14;
	}

IL_0069:
	{
		t47* L_15 = m6526(NULL, (t47*) &_stringLiteral2416, NULL);
		t61 * L_16 = (t61 *)il2cpp_codegen_object_new (t61_TI_var);
		m4519(L_16, L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m10146 (t943 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m10149(__this, 2, 0, 0, (-1), (-1), NULL);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m10147 (t943 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t48* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		m162(__this, NULL);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral423, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001e:
	{
		t47* L_2 = p0;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)46);
		t48* L_4 = m3343(L_2, L_3, NULL);
		V_1 = L_4;
		t48* L_5 = V_1;
		V_0 = (((int32_t)(((t52 *)L_5)->max_length)));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)4)))
		{
			goto IL_004c;
		}
	}

IL_003c:
	{
		t47* L_8 = m6526(NULL, (t47*) &_stringLiteral2417, NULL);
		t396 * L_9 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_9, L_8, NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		t48* L_11 = V_1;
		int32_t L_12 = 0;
		int32_t L_13 = m4641(NULL, (*(t47**)(t47**)SZArrayLdElema(L_11, L_12)), NULL);
		V_2 = L_13;
	}

IL_0059:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		t48* L_15 = V_1;
		int32_t L_16 = 1;
		int32_t L_17 = m4641(NULL, (*(t47**)(t47**)SZArrayLdElema(L_15, L_16)), NULL);
		V_3 = L_17;
	}

IL_0066:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		t48* L_19 = V_1;
		int32_t L_20 = 2;
		int32_t L_21 = m4641(NULL, (*(t47**)(t47**)SZArrayLdElema(L_19, L_20)), NULL);
		V_4 = L_21;
	}

IL_0074:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)3)))
		{
			goto IL_0082;
		}
	}
	{
		t48* L_23 = V_1;
		int32_t L_24 = 3;
		int32_t L_25 = m4641(NULL, (*(t47**)(t47**)SZArrayLdElema(L_23, L_24)), NULL);
		V_5 = L_25;
	}

IL_0082:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		m10149(__this, L_26, L_27, L_28, L_29, L_30, NULL);
		return;
	}
}
extern "C" void m4527 (t943 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		m10149(__this, 2, L_0, L_1, 0, 0, NULL);
		return;
	}
}
extern "C" void m10148 (t943 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		m10149(__this, 4, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern "C" void m10149 (t943 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_1, (t47*) &_stringLiteral2418, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = p1;
		__this->f1 = L_2;
		int32_t L_3 = p2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		t711 * L_4 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_4, (t47*) &_stringLiteral2419, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int32_t L_5 = p2;
		__this->f2 = L_5;
		int32_t L_6 = p0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_003f;
		}
	}
	{
		__this->f3 = (-1);
		__this->f4 = (-1);
		return;
	}

IL_003f:
	{
		int32_t L_7 = p3;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		t711 * L_8 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_8, (t47*) &_stringLiteral2420, NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004f:
	{
		int32_t L_9 = p3;
		__this->f3 = L_9;
		int32_t L_10 = p0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0063;
		}
	}
	{
		__this->f4 = (-1);
		return;
	}

IL_0063:
	{
		int32_t L_11 = p4;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		t711 * L_12 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_12, (t47*) &_stringLiteral2421, NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0073:
	{
		int32_t L_13 = p4;
		__this->f4 = L_13;
		return;
	}
}
extern "C" int32_t m10150 (t943 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m10151 (t943 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m10152 (t943 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m10153 (t943 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern TypeInfo* t943_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m10154 (t943 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t943_TI_var = il2cpp_codegen_type_info_from_index(1830);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		t7 * L_1 = p0;
		if (((t943 *)IsInst(L_1, t943_TI_var)))
		{
			goto IL_001d;
		}
	}
	{
		t47* L_2 = m6526(NULL, (t47*) &_stringLiteral2422, NULL);
		t396 * L_3 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_3, L_2, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t7 * L_4 = p0;
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, t943 * >::Invoke(5 /* System.Int32 System.Version::CompareTo(System.Version) */, __this, ((t943 *)Castclass(L_4, t943_TI_var)));
		return L_5;
	}
}
extern TypeInfo* t943_TI_var;
extern "C" bool m10155 (t943 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t943_TI_var = il2cpp_codegen_type_info_from_index(1830);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t943 * >::Invoke(6 /* System.Boolean System.Version::Equals(System.Version) */, __this, ((t943 *)IsInst(L_0, t943_TI_var)));
		return L_1;
	}
}
extern "C" int32_t m10156 (t943 * __this, t943 * p0, const MethodInfo* method)
{
	{
		t943 * L_0 = p0;
		bool L_1 = m10161(NULL, L_0, (t943 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_2 = (__this->f1);
		t943 * L_3 = p0;
		int32_t L_4 = (L_3->f1);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		int32_t L_5 = (__this->f1);
		t943 * L_6 = p0;
		int32_t L_7 = (L_6->f1);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_002b;
		}
	}
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_8 = (__this->f2);
		t943 * L_9 = p0;
		int32_t L_10 = (L_9->f2);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_003b;
		}
	}
	{
		return 1;
	}

IL_003b:
	{
		int32_t L_11 = (__this->f2);
		t943 * L_12 = p0;
		int32_t L_13 = (L_12->f2);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_14 = (__this->f3);
		t943 * L_15 = p0;
		int32_t L_16 = (L_15->f3);
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		int32_t L_17 = (__this->f3);
		t943 * L_18 = p0;
		int32_t L_19 = (L_18->f3);
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_006b;
		}
	}
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_20 = (__this->f4);
		t943 * L_21 = p0;
		int32_t L_22 = (L_21->f4);
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_007b;
		}
	}
	{
		return 1;
	}

IL_007b:
	{
		int32_t L_23 = (__this->f4);
		t943 * L_24 = p0;
		int32_t L_25 = (L_24->f4);
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_008b;
		}
	}
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
extern "C" bool m10157 (t943 * __this, t943 * p0, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		t943 * L_0 = p0;
		bool L_1 = m10162(NULL, L_0, (t943 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		t943 * L_2 = p0;
		int32_t L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		t943 * L_5 = p0;
		int32_t L_6 = (L_5->f2);
		int32_t L_7 = (__this->f2);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		t943 * L_8 = p0;
		int32_t L_9 = (L_8->f3);
		int32_t L_10 = (__this->f3);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		t943 * L_11 = p0;
		int32_t L_12 = (L_11->f4);
		int32_t L_13 = (__this->f4);
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		return G_B6_0;
	}
}
extern "C" int32_t m10158 (t943 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f3);
		int32_t L_2 = (__this->f2);
		int32_t L_3 = (__this->f1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m10159 (t943 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	{
		int32_t* L_0 = &(__this->f1);
		t47* L_1 = m3260(L_0, NULL);
		int32_t* L_2 = &(__this->f2);
		t47* L_3 = m3260(L_2, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_4 = m205(NULL, L_1, (t47*) &_stringLiteral103, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = (__this->f3);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0041;
		}
	}
	{
		t47* L_6 = V_0;
		int32_t* L_7 = &(__this->f3);
		t47* L_8 = m3260(L_7, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_9 = m205(NULL, L_6, (t47*) &_stringLiteral103, L_8, NULL);
		V_0 = L_9;
	}

IL_0041:
	{
		int32_t L_10 = (__this->f4);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0061;
		}
	}
	{
		t47* L_11 = V_0;
		int32_t* L_12 = &(__this->f4);
		t47* L_13 = m3260(L_12, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_14 = m205(NULL, L_11, (t47*) &_stringLiteral103, L_13, NULL);
		V_0 = L_14;
	}

IL_0061:
	{
		t47* L_15 = V_0;
		return L_15;
	}
}
extern TypeInfo* t943_TI_var;
extern TypeInfo* t214_TI_var;
extern "C" t943 * m10160 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t943_TI_var = il2cpp_codegen_type_info_from_index(1830);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		t943 * L_1 = (t943 *)il2cpp_codegen_object_new (t943_TI_var);
		m10148(L_1, 0, 0, 0, 0, NULL);
		return L_1;
	}

IL_001b:
	{
		V_6 = 0;
		goto IL_00a1;
	}

IL_0023:
	{
		t47* L_2 = p0;
		int32_t L_3 = V_6;
		uint16_t L_4 = m1754(L_2, L_3, NULL);
		V_7 = L_4;
		uint16_t L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_6 = m4645(NULL, L_5, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		uint16_t L_8 = V_7;
		V_5 = ((int32_t)((int32_t)L_8-(int32_t)((int32_t)48)));
		goto IL_0051;
	}

IL_0044:
	{
		int32_t L_9 = V_5;
		uint16_t L_10 = V_7;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)10)))+(int32_t)((int32_t)((int32_t)L_10-(int32_t)((int32_t)48)))));
	}

IL_0051:
	{
		goto IL_0094;
	}

IL_0053:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_12 = V_4;
		V_8 = L_12;
		int32_t L_13 = V_8;
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 0)
		{
			goto IL_0077;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 1)
		{
			goto IL_007c;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 2)
		{
			goto IL_0081;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 3)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008b;
	}

IL_0077:
	{
		int32_t L_14 = V_5;
		V_0 = L_14;
		goto IL_008b;
	}

IL_007c:
	{
		int32_t L_15 = V_5;
		V_1 = L_15;
		goto IL_008b;
	}

IL_0081:
	{
		int32_t L_16 = V_5;
		V_2 = L_16;
		goto IL_008b;
	}

IL_0086:
	{
		int32_t L_17 = V_5;
		V_3 = L_17;
		goto IL_008b;
	}

IL_008b:
	{
		V_5 = (-1);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00ae;
	}

IL_009b:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_21 = V_6;
		t47* L_22 = p0;
		int32_t L_23 = m1741(L_22, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0023;
		}
	}

IL_00ae:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_25 = V_4;
		V_8 = L_25;
		int32_t L_26 = V_8;
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 0)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 2)
		{
			goto IL_00dc;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 3)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_00e6;
	}

IL_00d2:
	{
		int32_t L_27 = V_5;
		V_0 = L_27;
		goto IL_00e6;
	}

IL_00d7:
	{
		int32_t L_28 = V_5;
		V_1 = L_28;
		goto IL_00e6;
	}

IL_00dc:
	{
		int32_t L_29 = V_5;
		V_2 = L_29;
		goto IL_00e6;
	}

IL_00e1:
	{
		int32_t L_30 = V_5;
		V_3 = L_30;
		goto IL_00e6;
	}

IL_00e6:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		t943 * L_35 = (t943 *)il2cpp_codegen_object_new (t943_TI_var);
		m10148(L_35, L_31, L_32, L_33, L_34, NULL);
		return L_35;
	}
}
extern "C" bool m10161 (t7 * __this , t943 * p0, t943 * p1, const MethodInfo* method)
{
	{
		t943 * L_0 = p0;
		t943 * L_1 = p1;
		bool L_2 = m4665(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" bool m10162 (t7 * __this , t943 * p0, t943 * p1, const MethodInfo* method)
{
	{
		t943 * L_0 = p0;
		t943 * L_1 = p1;
		bool L_2 = m4665(NULL, L_0, L_1, NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1610.h"
#ifndef _MSC_VER
#else
#endif
#include "t1610MD.h"

#include "t1549.h"
#include "t1550.h"
#include "t1549MD.h"


extern "C" void m10163 (t1610 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" void m10164 (t1610 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		m10165(__this, L_0, 0, NULL);
		return;
	}
}
extern "C" void m10165 (t1610 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		bool L_0 = p1;
		__this->f0 = L_0;
		t7 * L_1 = p0;
		m10167(__this, L_1, NULL);
		return;
	}
}
extern const Il2CppType* t7_0_0_0_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" void m10166 (t1610 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t7_0_0_0_var = il2cpp_codegen_type_from_index(0);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	{
		m162(__this, NULL);
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t921 * L_2 = p0;
		bool L_3 = m4518(L_2, (t47*) &_stringLiteral2423, NULL);
		__this->f0 = L_3;
		t921 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_5 = m1613(NULL, LoadTypeToken(t7_0_0_0_var), NULL);
		t7 * L_6 = m4516(L_4, (t47*) &_stringLiteral2424, L_5, NULL);
		V_0 = L_6;
		t7 * L_7 = V_0;
		m10167(__this, L_7, NULL);
		return;
	}
}
extern "C" void m10167 (t1610 * __this, t7 * p0, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t7 * L_1 = p0;
		t1549  L_2 = m8271(NULL, L_1, 1, NULL);
		__this->f1 = L_2;
		goto IL_0024;
	}

IL_0017:
	{
		t7 * L_3 = p0;
		t1549  L_4 = m8271(NULL, L_3, 0, NULL);
		__this->f1 = L_4;
	}

IL_0024:
	{
		return;
	}
}
extern "C" t7 * m10168 (t1610 * __this, const MethodInfo* method)
{
	{
		t1549 * L_0 = &(__this->f1);
		t7 * L_1 = m8270(L_0, NULL);
		return L_1;
	}
}
extern "C" bool m10169 (t1610 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m10170 (t1610 * __this, const MethodInfo* method)
{
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		t1549 * L_0 = &(__this->f1);
		m8272(L_0, NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0014:
	{
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t65_TI_var;
extern "C" void m10171 (t1610 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t921 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral370, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t921 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		m4514(L_2, (t47*) &_stringLiteral2423, L_3, NULL);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		t921 * L_4 = p0;
		t7 * L_5 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, __this);
		m4525(L_4, (t47*) &_stringLiteral2424, L_5, NULL);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		t921 * L_6 = p0;
		m4525(L_6, (t47*) &_stringLiteral2424, NULL, NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		return;
	}
}
#include "t1812.h"
#ifndef _MSC_VER
#else
#endif
#include "t1812MD.h"

#include "t1363.h"
#include "t1359.h"
#include "t213.h"


extern "C" void m10172 (t1812 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" bool m10173 (t1812 * __this, t1363 * p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10173((t1812 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 *, t7 * __this, t1363 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t1363 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t7 * __this, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1812(Il2CppObject* delegate, t1363 * p0, int32_t p1)
{
	// Marshaling of parameter 'p0' to native representation
	t1363 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
extern TypeInfo* t1359_TI_var;
extern "C" t7 * m10174 (t1812 * __this, t1363 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1359_TI_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t1359_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" bool m10175 (t1812 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1313.h"
#ifndef _MSC_VER
#else
#endif
#include "t1313MD.h"



extern "C" void m10176 (t1313 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" bool m10177 (t1313 * __this, t723 * p0, t7 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10177((t1313 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 *, t7 * __this, t723 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t723 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1313(Il2CppObject* delegate, t723 * p0, t7 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t723 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
extern "C" t7 * m10178 (t1313 * __this, t723 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" bool m10179 (t1313 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1516.h"
#ifndef _MSC_VER
#else
#endif
#include "t1516MD.h"



extern "C" void m10180 (t1516 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" bool m10181 (t1516 * __this, t347 * p0, t7 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10181((t1516 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 *, t7 * __this, t347 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t347 * p0, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t7 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1516(Il2CppObject* delegate, t347 * p0, t7 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t347 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
extern "C" t7 * m10182 (t1516 * __this, t347 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" bool m10183 (t1516 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1813.h"
#ifndef _MSC_VER
#else
#endif
#include "t1813MD.h"

#include "t1587.h"


extern "C" void m10184 (t1813 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m10185 (t1813 * __this, t1814* p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10185((t1813 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t1814* p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t1814* p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * pinvoke_delegate_wrapper_t1813(Il2CppObject* delegate, t1814* p0)
{
	// Marshaling of parameter 'p0' to native representation
	t1814* _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
extern "C" t7 * m10186 (t1813 * __this, t1814* p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" t7 * m10187 (t1813 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#include "t1753.h"
#ifndef _MSC_VER
#else
#endif
#include "t1753MD.h"



extern "C" void m10188 (t1753 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10189 (t1753 * __this, t48* p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10189((t1753 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t48* p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t48* p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1753(Il2CppObject* delegate, t48* p0)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	char** _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_string_array(p0);

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation
	if (p0 != NULL) il2cpp_codegen_marshal_free_string_array((void**)_p0_marshaled, ((Il2CppCodeGenArray*)p0)->max_length);
	_p0_marshaled = NULL;

}
extern "C" t7 * m10190 (t1753 * __this, t48* p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m10191 (t1753 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1748.h"
#ifndef _MSC_VER
#else
#endif
#include "t1748MD.h"

#include "t1757.h"


extern "C" void m10192 (t1748 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10193 (t1748 * __this, t7 * p0, t1757 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10193((t1748 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t1757 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p0, t1757 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t1757 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1748(Il2CppObject* delegate, t7 * p0, t1757 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t7 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t7 * m10194 (t1748 * __this, t7 * p0, t1757 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m10195 (t1748 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1750.h"
#ifndef _MSC_VER
#else
#endif
#include "t1750MD.h"

#include "t1182.h"


extern "C" void m10196 (t1750 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10197 (t1750 * __this, t7 * p0, t1182 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10197((t1750 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t1182 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p0, t1182 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t1182 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1750(Il2CppObject* delegate, t7 * p0, t1182 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t7 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t7 * m10198 (t1750 * __this, t7 * p0, t1182 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m10199 (t1750 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1749.h"
#ifndef _MSC_VER
#else
#endif
#include "t1749MD.h"



extern "C" void m10200 (t1749 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1105 * m10201 (t1749 * __this, t7 * p0, t1799 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10201((t1749 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1105 * (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t1799 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1105 * (*FunctionPointerType) (t7 * __this, t7 * p0, t1799 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1105 * (*FunctionPointerType) (t7 * __this, t1799 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t1105 * pinvoke_delegate_wrapper_t1749(Il2CppObject* delegate, t7 * p0, t1799 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t7 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t7 * m10202 (t1749 * __this, t7 * p0, t1799 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1105 * m10203 (t1749 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t1105 *)__result;
}
#include "t1751.h"
#ifndef _MSC_VER
#else
#endif
#include "t1751MD.h"



extern "C" void m10204 (t1751 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10205 (t1751 * __this, t7 * p0, t1809 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10205((t1751 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t1809 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t7 * p0, t1809 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t1809 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1751(Il2CppObject* delegate, t7 * p0, t1809 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t7 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t7 * m10206 (t1751 * __this, t7 * p0, t1809 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m10207 (t1751 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1815.h"
#ifndef _MSC_VER
#else
#endif
#include "t1815MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t1815_marshal(const t1815& unmarshaled, t1815_marshaled& marshaled)
{
}
void t1815_marshal_back(const t1815_marshaled& marshaled, t1815& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t1815_marshal_cleanup(t1815_marshaled& marshaled)
{
}
#include "t1816.h"
#ifndef _MSC_VER
#else
#endif
#include "t1816MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t1816_marshal(const t1816& unmarshaled, t1816_marshaled& marshaled)
{
}
void t1816_marshal_back(const t1816_marshaled& marshaled, t1816& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t1816_marshal_cleanup(t1816_marshaled& marshaled)
{
}
#include "t1817.h"
#ifndef _MSC_VER
#else
#endif
#include "t1817MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t1817_marshal(const t1817& unmarshaled, t1817_marshaled& marshaled)
{
}
void t1817_marshal_back(const t1817_marshaled& marshaled, t1817& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t1817_marshal_cleanup(t1817_marshaled& marshaled)
{
}
#include "t1818.h"
#ifndef _MSC_VER
#else
#endif
#include "t1818MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t1818_marshal(const t1818& unmarshaled, t1818_marshaled& marshaled)
{
}
void t1818_marshal_back(const t1818_marshaled& marshaled, t1818& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t1818_marshal_cleanup(t1818_marshaled& marshaled)
{
}
#include "t1819.h"
#ifndef _MSC_VER
#else
#endif
#include "t1819MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t1819_marshal(const t1819& unmarshaled, t1819_marshaled& marshaled)
{
}
void t1819_marshal_back(const t1819_marshaled& marshaled, t1819& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t1819_marshal_cleanup(t1819_marshaled& marshaled)
{
}
#include "t1820.h"
#ifndef _MSC_VER
#else
#endif
#include "t1820MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t1820_marshal(const t1820& unmarshaled, t1820_marshaled& marshaled)
{
}
void t1820_marshal_back(const t1820_marshaled& marshaled, t1820& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t1820_marshal_cleanup(t1820_marshaled& marshaled)
{
}
#include "t1821.h"
#ifndef _MSC_VER
#else
#endif
#include "t1821MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t1821_marshal(const t1821& unmarshaled, t1821_marshaled& marshaled)
{
}
void t1821_marshal_back(const t1821_marshaled& marshaled, t1821& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t1821_marshal_cleanup(t1821_marshaled& marshaled)
{
}
#include "t1822.h"
#ifndef _MSC_VER
#else
#endif
#include "t1822MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t1822_marshal(const t1822& unmarshaled, t1822_marshaled& marshaled)
{
}
void t1822_marshal_back(const t1822_marshaled& marshaled, t1822& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t1822_marshal_cleanup(t1822_marshaled& marshaled)
{
}
#include "t1823.h"
#ifndef _MSC_VER
#else
#endif
#include "t1823MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t1823_marshal(const t1823& unmarshaled, t1823_marshaled& marshaled)
{
}
void t1823_marshal_back(const t1823_marshaled& marshaled, t1823& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t1823_marshal_cleanup(t1823_marshaled& marshaled)
{
}
#include "t1824.h"
#ifndef _MSC_VER
#else
#endif
#include "t1824MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1824_marshal(const t1824& unmarshaled, t1824_marshaled& marshaled)
{
}
void t1824_marshal_back(const t1824_marshaled& marshaled, t1824& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1824_marshal_cleanup(t1824_marshaled& marshaled)
{
}
#include "t1825.h"
#ifndef _MSC_VER
#else
#endif
#include "t1825MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1825_marshal(const t1825& unmarshaled, t1825_marshaled& marshaled)
{
}
void t1825_marshal_back(const t1825_marshaled& marshaled, t1825& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1825_marshal_cleanup(t1825_marshaled& marshaled)
{
}
#include "t1826.h"
#ifndef _MSC_VER
#else
#endif
#include "t1826MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t1826_marshal(const t1826& unmarshaled, t1826_marshaled& marshaled)
{
}
void t1826_marshal_back(const t1826_marshaled& marshaled, t1826& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t1826_marshal_cleanup(t1826_marshaled& marshaled)
{
}
#include "t1827.h"
#ifndef _MSC_VER
#else
#endif
#include "t1827MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t1827_marshal(const t1827& unmarshaled, t1827_marshaled& marshaled)
{
}
void t1827_marshal_back(const t1827_marshaled& marshaled, t1827& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t1827_marshal_cleanup(t1827_marshaled& marshaled)
{
}
#include "t1828.h"
#ifndef _MSC_VER
#else
#endif
#include "t1828MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t1828_marshal(const t1828& unmarshaled, t1828_marshaled& marshaled)
{
}
void t1828_marshal_back(const t1828_marshaled& marshaled, t1828& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t1828_marshal_cleanup(t1828_marshaled& marshaled)
{
}
#include "t1829.h"
#ifndef _MSC_VER
#else
#endif
#include "t1829MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t1829_marshal(const t1829& unmarshaled, t1829_marshaled& marshaled)
{
}
void t1829_marshal_back(const t1829_marshaled& marshaled, t1829& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t1829_marshal_cleanup(t1829_marshaled& marshaled)
{
}
#include "t1830.h"
#ifndef _MSC_VER
#else
#endif
#include "t1830MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t1830_marshal(const t1830& unmarshaled, t1830_marshaled& marshaled)
{
}
void t1830_marshal_back(const t1830_marshaled& marshaled, t1830& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t1830_marshal_cleanup(t1830_marshaled& marshaled)
{
}
#include "t1831.h"
#ifndef _MSC_VER
#else
#endif
#include "t1831MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t1831_marshal(const t1831& unmarshaled, t1831_marshaled& marshaled)
{
}
void t1831_marshal_back(const t1831_marshaled& marshaled, t1831& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t1831_marshal_cleanup(t1831_marshaled& marshaled)
{
}
#include "t1832.h"
#ifndef _MSC_VER
#else
#endif
#include "t1832MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t1832_marshal(const t1832& unmarshaled, t1832_marshaled& marshaled)
{
}
void t1832_marshal_back(const t1832_marshaled& marshaled, t1832& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t1832_marshal_cleanup(t1832_marshaled& marshaled)
{
}
#include "t1833.h"
#ifndef _MSC_VER
#else
#endif
#include "t1833MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t1833_marshal(const t1833& unmarshaled, t1833_marshaled& marshaled)
{
}
void t1833_marshal_back(const t1833_marshaled& marshaled, t1833& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t1833_marshal_cleanup(t1833_marshaled& marshaled)
{
}
#include "t1834.h"
#ifndef _MSC_VER
#else
#endif
#include "t1834MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t1834_marshal(const t1834& unmarshaled, t1834_marshaled& marshaled)
{
}
void t1834_marshal_back(const t1834_marshaled& marshaled, t1834& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t1834_marshal_cleanup(t1834_marshaled& marshaled)
{
}
#include "t1835.h"
#ifndef _MSC_VER
#else
#endif
#include "t1835MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
