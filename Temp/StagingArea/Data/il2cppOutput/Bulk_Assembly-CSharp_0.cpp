#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
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
#include "t0MD.h"


#include "t52.h"

#include "t1.h"
#ifndef _MSC_VER
#else
#endif
#include "t1MD.h"

#include "t53.h"
#include "t3.h"
#include "t54.h"
#include "t47.h"
#include "t13.h"
#include "t55.h"
#include "t4.h"
#include "UnityEngine_ArrayTypes.h"
#include "t56.h"
#include "t5MD.h"
#include "t55MD.h"
#include "t13MD.h"
#include "t3MD.h"
#include "t4MD.h"
struct t55;
struct t3;
struct t55;
struct t7;
extern "C" t7 * m157_gshared (t55 * __this, const MethodInfo* method);
#define m157(__this, method) (( t7 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)
#define m156(__this, method) (( t3 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)


extern "C" void m0 (t1 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t4_TI_var;
extern const MethodInfo* m156_MI_var;
extern "C" void m1 (t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t4_TI_var = il2cpp_codegen_type_info_from_index(2);
		m156_MI_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3 * L_0 = m156(__this, m156_MI_var);
		__this->f3 = L_0;
		__this->f4 = 0;
		t13 * L_1 = m159(NULL, (t47*) &_stringLiteral1, NULL);
		t55 * L_2 = m160(L_1, (t47*) &_stringLiteral2, NULL);
		__this->f5 = ((t4 *)IsInst(L_2, t4_TI_var));
		return;
	}
}
extern "C" void m2 (t1 * __this, const MethodInfo* method)
{
	{
		m4(__this, NULL);
		return;
	}
}
extern "C" void m3 (t1 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" void m4 (t1 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t3 * L_1 = (__this->f3);
		t2* L_2 = (__this->f2);
		int32_t L_3 = 0;
		m161(L_1, (*(t56 **)(t56 **)SZArrayLdElema(L_2, L_3)), NULL);
		goto IL_0036;
	}

IL_0023:
	{
		t3 * L_4 = (__this->f3);
		t2* L_5 = (__this->f2);
		int32_t L_6 = 1;
		m161(L_4, (*(t56 **)(t56 **)SZArrayLdElema(L_5, L_6)), NULL);
	}

IL_0036:
	{
		return;
	}
}
extern "C" void m5 (t1 * __this, const MethodInfo* method)
{
	{
		t4 * L_0 = (__this->f5);
		m151(L_0, NULL);
		return;
	}
}
#include "t6.h"
#ifndef _MSC_VER
#else
#endif
#include "t6MD.h"

#include "t7.h"
#include "t57.h"
#include "t58.h"
#include "t8.h"
#include "t10.h"
#include "t9.h"
#include "t59.h"
#include "t60.h"
#include "t61.h"
#include "t7MD.h"
#include "t10MD.h"
#include "t62MD.h"
#include "t9MD.h"
#include "t59MD.h"
#include "t61MD.h"


extern "C" void m6 (t6 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t7 * m7 (t6 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t7 * m8 (t6 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern TypeInfo* t59_TI_var;
extern "C" bool m9 (t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t59_TI_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		__this->f0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_0074;
	}

IL_0021:
	{
		t8 * L_2 = (__this->f2);
		t10 * L_3 = (L_2->f3);
		int32_t L_4 = m42(L_3, NULL);
		int32_t L_5 = m163(NULL, 0, L_4, NULL);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		t8 * L_6 = (__this->f2);
		t9 * L_7 = (L_6->f2);
		m46(L_7, NULL);
	}

IL_004c:
	{
		t59 * L_8 = (t59 *)il2cpp_codegen_object_new (t59_TI_var);
		m164(L_8, (0.5f), NULL);
		__this->f1 = L_8;
		__this->f0 = 1;
		goto IL_0076;
	}

IL_0068:
	{
		goto IL_0021;
	}
	// Dead block : IL_006d: ldarg.0

IL_0074:
	{
		return 0;
	}

IL_0076:
	{
		return 1;
	}
}
extern "C" void m10 (t6 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (-1);
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m11 (t6 * __this, const MethodInfo* method)
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
#include "t8MD.h"

#include "t63.h"
#include "t64.h"


extern "C" void m12 (t8 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t9_TI_var;
extern TypeInfo* t10_TI_var;
extern "C" void m13 (t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t9_TI_var = il2cpp_codegen_type_info_from_index(5);
		t10_TI_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m166(__this, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral3, NULL);
		__this->f2 = ((t9 *)IsInst(L_1, t9_TI_var));
		t13 * L_2 = m159(NULL, (t47*) &_stringLiteral4, NULL);
		t55 * L_3 = m160(L_2, (t47*) &_stringLiteral5, NULL);
		__this->f3 = ((t10 *)IsInst(L_3, t10_TI_var));
		t7 * L_4 = m14(__this, NULL);
		m167(__this, L_4, NULL);
		return;
	}
}
extern TypeInfo* t6_TI_var;
extern "C" t7 * m14 (t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t6_TI_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	t6 * V_0 = {0};
	{
		t6 * L_0 = (t6 *)il2cpp_codegen_object_new (t6_TI_var);
		m6(L_0, NULL);
		V_0 = L_0;
		t6 * L_1 = V_0;
		L_1->f2 = __this;
		t6 * L_2 = V_0;
		return L_2;
	}
}
extern TypeInfo* t10_TI_var;
extern TypeInfo* t64_TI_var;
extern "C" void m15 (t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t10_TI_var = il2cpp_codegen_type_info_from_index(6);
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	t10 * V_0 = {0};
	t64 * V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		t13 * L_0 = m159(NULL, (t47*) &_stringLiteral4, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral5, NULL);
		V_0 = ((t10 *)IsInst(L_1, t10_TI_var));
		t10 * L_2 = V_0;
		m43(L_2, (-1), NULL);
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0026;
		throw e;
	}

CATCH_0026:
	{ // begin catch(System.NullReferenceException)
		V_1 = ((t64 *)__exception_local);
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		return;
	}
}
#include "t11.h"
#ifndef _MSC_VER
#else
#endif
#include "t11MD.h"

#include "t12.h"
#include "t66.h"
#include "t66MD.h"
#include "t12MD.h"


extern "C" void m16 (t11 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t7 * m17 (t11 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t7 * m18 (t11 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f1);
		return L_0;
	}
}
extern TypeInfo* t59_TI_var;
extern "C" bool m19 (t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t59_TI_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		__this->f0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_00f4;
	}

IL_0021:
	{
		goto IL_00dd;
	}

IL_0026:
	{
		t12 * L_2 = (__this->f2);
		t12 * L_3 = (__this->f2);
		t10 * L_4 = (L_3->f14);
		int32_t L_5 = m42(L_4, NULL);
		L_2->f8 = L_5;
		t12 * L_6 = (__this->f2);
		int32_t L_7 = (L_6->f8);
		if (L_7)
		{
			goto IL_005c;
		}
	}
	{
		t12 * L_8 = (__this->f2);
		m168(NULL, L_8, NULL);
	}

IL_005c:
	{
		t12 * L_9 = (__this->f2);
		t12 * L_10 = (__this->f2);
		int32_t L_11 = (L_10->f9);
		t12 * L_12 = (__this->f2);
		int32_t L_13 = (L_12->f8);
		L_9->f10 = ((float)((float)((float)((float)(((float)((int32_t)((int32_t)((int32_t)14)-(int32_t)L_11))))*(float)(1.5f)))/(float)(((float)((int32_t)((int32_t)((int32_t)75)-(int32_t)L_13))))));
		t12 * L_14 = (__this->f2);
		m25(L_14, NULL);
		t12 * L_15 = (__this->f2);
		t12 * L_16 = (__this->f2);
		bool L_17 = (L_16->f13);
		L_15->f13 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		t12 * L_18 = (__this->f2);
		m26(L_18, NULL);
		t12 * L_19 = (__this->f2);
		float L_20 = (L_19->f10);
		t59 * L_21 = (t59 *)il2cpp_codegen_object_new (t59_TI_var);
		m164(L_21, L_20, NULL);
		__this->f1 = L_21;
		__this->f0 = 1;
		goto IL_00f6;
	}

IL_00dd:
	{
		t12 * L_22 = (__this->f2);
		int32_t L_23 = (L_22->f8);
		if (L_23)
		{
			goto IL_0026;
		}
	}
	{
		__this->f0 = (-1);
	}

IL_00f4:
	{
		return 0;
	}

IL_00f6:
	{
		return 1;
	}
	// Dead block : IL_00f8: ldloc.1
}
extern "C" void m20 (t11 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (-1);
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m21 (t11 * __this, const MethodInfo* method)
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

#include "t16.h"
#include "t22.h"
#include "t67.h"
#include "t68.h"
#include "mscorlib_ArrayTypes.h"
#include "t16MD.h"
#include "t68MD.h"
#include "t47MD.h"
struct t55;
struct t16;
#define m169(__this, method) (( t16 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)


extern "C" void m22 (t12 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t14_TI_var;
extern TypeInfo* t10_TI_var;
extern const MethodInfo* m169_MI_var;
extern "C" void m23 (t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t14_TI_var = il2cpp_codegen_type_info_from_index(10);
		t10_TI_var = il2cpp_codegen_type_info_from_index(6);
		m169_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f13 = 0;
		__this->f17 = 0;
		t16 * L_0 = m169(__this, m169_MI_var);
		__this->f16 = L_0;
		__this->f9 = 1;
		__this->f12 = 0;
		__this->f7 = 5;
		__this->f6 = ((int32_t)11);
		__this->f4 = 0;
		int32_t L_1 = (__this->f6);
		__this->f5 = ((int32_t)((int32_t)L_1-(int32_t)1));
		int32_t L_2 = (__this->f7);
		int32_t L_3 = (__this->f6);
		t14* L_4 = (t14*)GenArrayNew2(t14_TI_var, L_2, L_3);
		__this->f11 = L_4;
		t13 * L_5 = m159(NULL, (t47*) &_stringLiteral4, NULL);
		t55 * L_6 = m160(L_5, (t47*) &_stringLiteral5, NULL);
		__this->f14 = ((t10 *)IsInst(L_6, t10_TI_var));
		t10 * L_7 = (__this->f14);
		int32_t L_8 = m42(L_7, NULL);
		__this->f8 = L_8;
		m32(__this, NULL);
		t7 * L_9 = m24(__this, NULL);
		m167(__this, L_9, NULL);
		return;
	}
}
extern TypeInfo* t11_TI_var;
extern "C" t7 * m24 (t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t11_TI_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	t11 * V_0 = {0};
	{
		t11 * L_0 = (t11 *)il2cpp_codegen_object_new (t11_TI_var);
		m16(L_0, NULL);
		V_0 = L_0;
		t11 * L_1 = V_0;
		L_1->f2 = __this;
		t11 * L_2 = V_0;
		return L_2;
	}
}
extern "C" void m25 (t12 * __this, const MethodInfo* method)
{
	{
		m30(__this, 0, NULL);
		m30(__this, 1, NULL);
		bool L_0 = (__this->f12);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		t13 * L_1 = (__this->f3);
		bool L_2 = m170(NULL, L_1, (t66 *)NULL, NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		m28(__this, NULL);
	}

IL_0030:
	{
		goto IL_004c;
	}

IL_0035:
	{
		t13 * L_3 = (__this->f2);
		bool L_4 = m170(NULL, L_3, (t66 *)NULL, NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		m27(__this, NULL);
	}

IL_004c:
	{
		return;
	}
}
extern "C" void m26 (t12 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f17);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0013;
		}
	}
	{
		__this->f17 = 0;
	}

IL_0013:
	{
		t16 * L_1 = (__this->f16);
		t15* L_2 = (__this->f15);
		int32_t L_3 = (__this->f17);
		int32_t L_4 = L_3;
		m171(L_1, (*(t22 **)(t22 **)SZArrayLdElema(L_2, L_4)), (0.4f), NULL);
		int32_t L_5 = (__this->f17);
		__this->f17 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
extern "C" void m27 (t12 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t67  V_2 = {0};
	{
		t13 * L_0 = (__this->f2);
		t68 * L_1 = m172(L_0, NULL);
		t67  L_2 = m173(L_1, NULL);
		V_2 = L_2;
		float L_3 = ((&V_2)->f1);
		if ((!(((double)(((double)((float)((float)L_3-(float)(0.5f)))))) < ((double)(-170.2)))))
		{
			goto IL_0065;
		}
	}
	{
		__this->f12 = 1;
		int32_t L_4 = (__this->f4);
		V_0 = L_4;
		goto IL_0051;
	}

IL_0040:
	{
		int32_t L_5 = V_0;
		m29(__this, 0, (-2.0f), L_5, NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->f6);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		m35(__this, 1, NULL);
		return;
	}

IL_0065:
	{
		int32_t L_9 = (__this->f4);
		V_1 = L_9;
		goto IL_0082;
	}

IL_0071:
	{
		int32_t L_10 = V_1;
		m29(__this, 1, (-0.5f), L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = (__this->f6);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}
}
extern "C" void m28 (t12 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t67  V_2 = {0};
	{
		t13 * L_0 = (__this->f3);
		t68 * L_1 = m172(L_0, NULL);
		t67  L_2 = m173(L_1, NULL);
		V_2 = L_2;
		float L_3 = ((&V_2)->f1);
		if ((!(((double)(((double)((float)((float)L_3+(float)(0.5f)))))) > ((double)(-101.2)))))
		{
			goto IL_0060;
		}
	}
	{
		__this->f12 = 0;
		int32_t L_4 = (__this->f5);
		V_0 = L_4;
		goto IL_0051;
	}

IL_0040:
	{
		int32_t L_5 = V_0;
		m29(__this, 0, (-2.0f), L_5, NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6-(int32_t)1));
	}

IL_0051:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		m35(__this, 1, NULL);
		return;
	}

IL_0060:
	{
		int32_t L_8 = (__this->f5);
		V_1 = L_8;
		goto IL_007d;
	}

IL_006c:
	{
		int32_t L_9 = V_1;
		m29(__this, 1, (0.5f), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)1));
	}

IL_007d:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		return;
	}
}
extern "C" void m29 (t12 * __this, bool p0, float p1, int32_t p2, const MethodInfo* method)
{
	t67  V_0 = {0};
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0084;
	}

IL_0007:
	{
		t14* L_0 = (__this->f11);
		int32_t L_1 = V_1;
		int32_t L_2 = p2;
		t13 * L_3 = GenArrayGet2(L_0, L_1, L_2, t13 *);;
		bool L_4 = m170(NULL, L_3, (t66 *)NULL, NULL);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		t14* L_5 = (__this->f11);
		int32_t L_6 = V_1;
		int32_t L_7 = p2;
		t13 * L_8 = GenArrayGet2(L_5, L_6, L_7, t13 *);;
		t68 * L_9 = m172(L_8, NULL);
		t67  L_10 = m173(L_9, NULL);
		V_0 = L_10;
		bool L_11 = p0;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		t67 * L_12 = (&V_0);
		float L_13 = (L_12->f1);
		float L_14 = p1;
		L_12->f1 = ((float)((float)L_13+(float)L_14));
		goto IL_0060;
	}

IL_0051:
	{
		t67 * L_15 = (&V_0);
		float L_16 = (L_15->f2);
		float L_17 = p1;
		L_15->f2 = ((float)((float)L_16+(float)L_17));
	}

IL_0060:
	{
		t14* L_18 = (__this->f11);
		int32_t L_19 = V_1;
		int32_t L_20 = p2;
		t13 * L_21 = GenArrayGet2(L_18, L_19, L_20, t13 *);;
		t68 * L_22 = m172(L_21, NULL);
		t67  L_23 = V_0;
		m174(L_22, L_23, NULL);
	}

IL_0078:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = p2;
		m36(__this, L_24, L_25, NULL);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = (__this->f7);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern "C" void m30 (t12 * __this, bool p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_1 = (__this->f5);
		V_0 = L_1;
		goto IL_002e;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = m31(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->f5 = L_4;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
	}

IL_002e:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_0035:
	{
		V_1 = 0;
		goto IL_007a;
	}

IL_003c:
	{
		t14* L_7 = (__this->f11);
		int32_t L_8 = V_1;
		int32_t L_9 = (__this->f5);
		t13 * L_10 = GenArrayGet2(L_7, L_8, L_9, t13 *);;
		bool L_11 = m170(NULL, L_10, (t66 *)NULL, NULL);
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		t14* L_12 = (__this->f11);
		int32_t L_13 = V_1;
		int32_t L_14 = (__this->f5);
		t13 * L_15 = GenArrayGet2(L_12, L_13, L_14, t13 *);;
		__this->f3 = L_15;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_007a:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = (__this->f7);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003c;
		}
	}

IL_0086:
	{
		goto IL_0110;
	}

IL_008b:
	{
		int32_t L_19 = (__this->f4);
		V_2 = L_19;
		goto IL_00b3;
	}

IL_0097:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = m31(__this, L_20, NULL);
		if (!L_21)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_22 = V_2;
		__this->f4 = L_22;
		goto IL_00bf;
	}

IL_00af:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00b3:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = (__this->f6);
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0097;
		}
	}

IL_00bf:
	{
		V_3 = 0;
		goto IL_0104;
	}

IL_00c6:
	{
		t14* L_26 = (__this->f11);
		int32_t L_27 = V_3;
		int32_t L_28 = (__this->f4);
		t13 * L_29 = GenArrayGet2(L_26, L_27, L_28, t13 *);;
		bool L_30 = m170(NULL, L_29, (t66 *)NULL, NULL);
		if (!L_30)
		{
			goto IL_0100;
		}
	}
	{
		t14* L_31 = (__this->f11);
		int32_t L_32 = V_3;
		int32_t L_33 = (__this->f4);
		t13 * L_34 = GenArrayGet2(L_31, L_32, L_33, t13 *);;
		__this->f2 = L_34;
		goto IL_0110;
	}

IL_0100:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0104:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = (__this->f7);
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00c6;
		}
	}

IL_0110:
	{
		return;
	}
}
extern "C" int32_t m31 (t12 * __this, int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0029;
	}

IL_0009:
	{
		t14* L_0 = (__this->f11);
		int32_t L_1 = V_1;
		int32_t L_2 = p0;
		t13 * L_3 = GenArrayGet2(L_0, L_1, L_2, t13 *);;
		bool L_4 = m170(NULL, L_3, (t66 *)NULL, NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->f7);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" void m32 (t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0061;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_000e:
	{
		t14* L_0 = (__this->f11);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		t69* L_3 = ((t69*)SZArrayNew(t69_TI_var, 4));
		ArrayElementTypeCheck (L_3, (t47*) &_stringLiteral6);
		*((t7 **)(t7 **)SZArrayLdElema(L_3, 0)) = (t7 *)(t47*) &_stringLiteral6;
		t69* L_4 = L_3;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		t7 * L_7 = Box(t58_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		ArrayElementTypeCheck (L_8, (t47*) &_stringLiteral7);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)(t47*) &_stringLiteral7;
		t69* L_9 = L_8;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		t7 * L_12 = Box(t58_TI_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((t7 **)(t7 **)SZArrayLdElema(L_9, 3)) = (t7 *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_13 = m175(NULL, L_9, NULL);
		t13 * L_14 = m159(NULL, L_13, NULL);
		GenArraySet2(L_0, L_1, L_2, L_14, t13 *);;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = (__this->f6);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (__this->f7);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern "C" t13 * m33 (t12 * __this, const MethodInfo* method)
{
	{
		t13 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t13 * m34 (t12 * __this, const MethodInfo* method)
{
	{
		t13 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m35 (t12 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f9);
		int32_t L_1 = p0;
		__this->f9 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		return;
	}
}
extern TypeInfo* t1_TI_var;
extern "C" void m36 (t12 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1_TI_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		t14* L_0 = (__this->f11);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		t13 * L_3 = GenArrayGet2(L_0, L_1, L_2, t13 *);;
		bool L_4 = m170(NULL, L_3, (t66 *)NULL, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		t14* L_5 = (__this->f11);
		int32_t L_6 = p0;
		int32_t L_7 = p1;
		t13 * L_8 = GenArrayGet2(L_5, L_6, L_7, t13 *);;
		t55 * L_9 = m160(L_8, (t47*) &_stringLiteral8, NULL);
		__this->f18 = ((t1 *)IsInst(L_9, t1_TI_var));
		t1 * L_10 = (__this->f18);
		bool L_11 = (__this->f13);
		m3(L_10, L_11, NULL);
	}

IL_004b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t20.h"
#include "t18.h"
#include "t19.h"
#include "t70.h"
#include "t45.h"
#include "t18MD.h"
#include "t20MD.h"
#include "t45MD.h"
#include "t19MD.h"


extern "C" void m37 (t10 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t20_TI_var;
extern TypeInfo* t14_TI_var;
extern TypeInfo* t18_TI_var;
extern TypeInfo* t19_TI_var;
extern "C" void m38 (t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t20_TI_var = il2cpp_codegen_type_info_from_index(17);
		t14_TI_var = il2cpp_codegen_type_info_from_index(10);
		t18_TI_var = il2cpp_codegen_type_info_from_index(18);
		t19_TI_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m159(NULL, (t47*) &_stringLiteral4, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral9, NULL);
		__this->f10 = ((t20 *)IsInst(L_1, t20_TI_var));
		__this->f7 = 3;
		__this->f6 = 0;
		__this->f5 = 5;
		__this->f4 = ((int32_t)11);
		int32_t L_2 = (__this->f5);
		int32_t L_3 = (__this->f4);
		t14* L_4 = (t14*)GenArrayNew2(t14_TI_var, L_2, L_3);
		__this->f3 = L_4;
		t13 * L_5 = m159(NULL, (t47*) &_stringLiteral10, NULL);
		t55 * L_6 = m160(L_5, (t47*) &_stringLiteral11, NULL);
		__this->f8 = ((t18 *)IsInst(L_6, t18_TI_var));
		t13 * L_7 = m159(NULL, (t47*) &_stringLiteral12, NULL);
		t55 * L_8 = m160(L_7, (t47*) &_stringLiteral12, NULL);
		__this->f9 = ((t19 *)IsInst(L_8, t19_TI_var));
		m40(__this, NULL);
		return;
	}
}
extern "C" void m39 (t10 * __this, const MethodInfo* method)
{
	{
		t18 * L_0 = (__this->f8);
		int32_t L_1 = m82(L_0, NULL);
		__this->f7 = L_1;
		int32_t L_2 = (__this->f7);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		t20 * L_3 = (__this->f10);
		t7 * L_4 = m122(L_3, (0.1f), NULL);
		m167(__this, L_4, NULL);
		m41(__this, 1, 0, NULL);
	}

IL_003b:
	{
		return;
	}
}
extern TypeInfo* t13_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" void m40 (t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t13_TI_var = il2cpp_codegen_type_info_from_index(11);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t13 * V_0 = {0};
	t67  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t67  V_5 = {0};
	{
		t68 * L_0 = m176(__this, NULL);
		t67  L_1 = m173(L_0, NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0187;
	}

IL_0013:
	{
		V_3 = 0;
		goto IL_0148;
	}

IL_001a:
	{
		int32_t L_2 = V_2;
		V_4 = L_2;
		int32_t L_3 = V_4;
		if (L_3 == 0)
		{
			goto IL_003d;
		}
		if (L_3 == 1)
		{
			goto IL_0061;
		}
		if (L_3 == 2)
		{
			goto IL_0061;
		}
		if (L_3 == 3)
		{
			goto IL_0085;
		}
		if (L_3 == 4)
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00a9;
	}

IL_003d:
	{
		t17* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t67  L_6 = V_1;
		t68 * L_7 = m176(__this, NULL);
		t70  L_8 = m177(L_7, NULL);
		t66 * L_9 = m178(NULL, (*(t13 **)(t13 **)SZArrayLdElema(L_4, L_5)), L_6, L_8, NULL);
		V_0 = ((t13 *)IsInst(L_9, t13_TI_var));
		goto IL_00cd;
	}

IL_0061:
	{
		t17* L_10 = (__this->f2);
		int32_t L_11 = 1;
		t67  L_12 = V_1;
		t68 * L_13 = m176(__this, NULL);
		t70  L_14 = m177(L_13, NULL);
		t66 * L_15 = m178(NULL, (*(t13 **)(t13 **)SZArrayLdElema(L_10, L_11)), L_12, L_14, NULL);
		V_0 = ((t13 *)IsInst(L_15, t13_TI_var));
		goto IL_00cd;
	}

IL_0085:
	{
		t17* L_16 = (__this->f2);
		int32_t L_17 = 0;
		t67  L_18 = V_1;
		t68 * L_19 = m176(__this, NULL);
		t70  L_20 = m177(L_19, NULL);
		t66 * L_21 = m178(NULL, (*(t13 **)(t13 **)SZArrayLdElema(L_16, L_17)), L_18, L_20, NULL);
		V_0 = ((t13 *)IsInst(L_21, t13_TI_var));
		goto IL_00cd;
	}

IL_00a9:
	{
		t17* L_22 = (__this->f2);
		int32_t L_23 = 0;
		t67  L_24 = V_1;
		t68 * L_25 = m176(__this, NULL);
		t70  L_26 = m177(L_25, NULL);
		t66 * L_27 = m178(NULL, (*(t13 **)(t13 **)SZArrayLdElema(L_22, L_23)), L_24, L_26, NULL);
		V_0 = ((t13 *)IsInst(L_27, t13_TI_var));
		goto IL_00cd;
	}

IL_00cd:
	{
		t13 * L_28 = V_0;
		t13 * L_29 = m179(L_28, NULL);
		t69* L_30 = ((t69*)SZArrayNew(t69_TI_var, 4));
		ArrayElementTypeCheck (L_30, (t47*) &_stringLiteral6);
		*((t7 **)(t7 **)SZArrayLdElema(L_30, 0)) = (t7 *)(t47*) &_stringLiteral6;
		t69* L_31 = L_30;
		int32_t L_32 = V_2;
		int32_t L_33 = L_32;
		t7 * L_34 = Box(t58_TI_var, &L_33);
		ArrayElementTypeCheck (L_31, L_34);
		*((t7 **)(t7 **)SZArrayLdElema(L_31, 1)) = (t7 *)L_34;
		t69* L_35 = L_31;
		ArrayElementTypeCheck (L_35, (t47*) &_stringLiteral7);
		*((t7 **)(t7 **)SZArrayLdElema(L_35, 2)) = (t7 *)(t47*) &_stringLiteral7;
		t69* L_36 = L_35;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		t7 * L_39 = Box(t58_TI_var, &L_38);
		ArrayElementTypeCheck (L_36, L_39);
		*((t7 **)(t7 **)SZArrayLdElema(L_36, 3)) = (t7 *)L_39;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_40 = m175(NULL, L_36, NULL);
		m180(L_29, L_40, NULL);
		t13 * L_41 = V_0;
		t68 * L_42 = m172(L_41, NULL);
		t13 * L_43 = m166(__this, NULL);
		t68 * L_44 = m172(L_43, NULL);
		m181(L_42, L_44, NULL);
		m43(__this, 1, NULL);
		t14* L_45 = (__this->f3);
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		t13 * L_48 = V_0;
		GenArraySet2(L_45, L_46, L_47, L_48, t13 *);;
		float L_49 = ((&V_1)->f1);
		(&V_1)->f1 = ((float)((float)L_49+(float)(5.0f)));
		int32_t L_50 = V_3;
		V_3 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0148:
	{
		int32_t L_51 = V_3;
		int32_t L_52 = (__this->f4);
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_001a;
		}
	}
	{
		t68 * L_53 = m176(__this, NULL);
		t67  L_54 = m173(L_53, NULL);
		V_5 = L_54;
		float L_55 = ((&V_5)->f1);
		(&V_1)->f1 = L_55;
		float L_56 = ((&V_1)->f2);
		(&V_1)->f2 = ((float)((float)L_56-(float)(3.5f)));
		int32_t L_57 = V_2;
		V_2 = ((int32_t)((int32_t)L_57+(int32_t)1));
	}

IL_0187:
	{
		int32_t L_58 = V_2;
		int32_t L_59 = (__this->f5);
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t45_TI_var;
extern "C" void m41 (t10 * __this, bool p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t45_TI_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	t17* V_0 = {0};
	t13 * V_1 = {0};
	t17* V_2 = {0};
	int32_t V_3 = 0;
	t13 * V_4 = {0};
	t17* V_5 = {0};
	int32_t V_6 = 0;
	t45 * V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		t17* L_0 = m182(NULL, (t47*) &_stringLiteral13, NULL);
		V_0 = L_0;
		t17* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0022;
	}

IL_0014:
	{
		t17* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		V_1 = (*(t13 **)(t13 **)SZArrayLdElema(L_2, L_4));
		t13 * L_5 = V_1;
		m168(NULL, L_5, NULL);
		int32_t L_6 = V_3;
		V_3 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_7 = V_3;
		t17* L_8 = V_2;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t52 *)L_8)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		t17* L_9 = m182(NULL, (t47*) &_stringLiteral14, NULL);
		V_0 = L_9;
		t17* L_10 = V_0;
		V_5 = L_10;
		V_6 = 0;
		goto IL_0055;
	}

IL_0041:
	{
		t17* L_11 = V_5;
		int32_t L_12 = V_6;
		int32_t L_13 = L_12;
		V_4 = (*(t13 **)(t13 **)SZArrayLdElema(L_11, L_13));
		t13 * L_14 = V_4;
		m168(NULL, L_14, NULL);
		int32_t L_15 = V_6;
		V_6 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_16 = V_6;
		t17* L_17 = V_5;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((t52 *)L_17)->max_length))))))
		{
			goto IL_0041;
		}
	}
	{
		V_8 = 0;
		goto IL_00e5;
	}

IL_0068:
	{
		V_9 = 0;
		goto IL_00d2;
	}

IL_0070:
	{
		t14* L_18 = (__this->f3);
		int32_t L_19 = V_8;
		int32_t L_20 = V_9;
		t13 * L_21 = GenArrayGet2(L_18, L_19, L_20, t13 *);;
		bool L_22 = m170(NULL, L_21, (t66 *)NULL, NULL);
		if (!L_22)
		{
			goto IL_00cc;
		}
	}
	{
		t14* L_23 = (__this->f3);
		int32_t L_24 = V_8;
		int32_t L_25 = V_9;
		t13 * L_26 = GenArrayGet2(L_23, L_24, L_25, t13 *);;
		t55 * L_27 = m160(L_26, (t47*) &_stringLiteral15, NULL);
		V_7 = ((t45 *)IsInst(L_27, t45_TI_var));
		t45 * L_28 = V_7;
		m143(L_28, 0, NULL);
		t14* L_29 = (__this->f3);
		int32_t L_30 = V_8;
		int32_t L_31 = V_9;
		t13 * L_32 = GenArrayGet2(L_29, L_30, L_31, t13 *);;
		m168(NULL, L_32, NULL);
		m168(NULL, __this, NULL);
	}

IL_00cc:
	{
		int32_t L_33 = V_9;
		V_9 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00d2:
	{
		int32_t L_34 = V_9;
		int32_t L_35 = (__this->f4);
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_36 = V_8;
		V_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00e5:
	{
		int32_t L_37 = V_8;
		int32_t L_38 = (__this->f5);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0068;
		}
	}
	{
		t19 * L_39 = (__this->f9);
		bool L_40 = p0;
		bool L_41 = p1;
		m139(L_39, 1, L_40, L_41, NULL);
		return;
	}
}
extern "C" int32_t m42 (t10 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m43 (t10 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		int32_t L_1 = p0;
		__this->f6 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = (__this->f6);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		t19 * L_3 = (__this->f9);
		m139(L_3, 1, 1, 1, NULL);
	}

IL_0027:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t27.h"
#include "t28.h"
#include "t24.h"
#include "t23.h"
#include "t28MD.h"
#include "t24MD.h"
#include "t23MD.h"
#include "t71MD.h"


extern "C" void m44 (t9 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern const MethodInfo* m169_MI_var;
extern "C" void m45 (t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m169_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		t16 * L_0 = m169(__this, m169_MI_var);
		__this->f4 = L_0;
		return;
	}
}
extern TypeInfo* t27_TI_var;
extern TypeInfo* t13_TI_var;
extern TypeInfo* t24_TI_var;
extern TypeInfo* t23_TI_var;
extern TypeInfo* t64_TI_var;
extern "C" void m46 (t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t27_TI_var = il2cpp_codegen_type_info_from_index(21);
		t13_TI_var = il2cpp_codegen_type_info_from_index(11);
		t24_TI_var = il2cpp_codegen_type_info_from_index(22);
		t23_TI_var = il2cpp_codegen_type_info_from_index(23);
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	t13 * V_0 = {0};
	t67  V_1 = {0};
	t64 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t68 * L_0 = m176(__this, NULL);
		t67  L_1 = m173(L_0, NULL);
		V_1 = L_1;
		int32_t L_2 = m47(__this, NULL);
		int32_t L_3 = L_2;
		t7 * L_4 = Box(t27_TI_var, &L_3);
		int32_t L_5 = 2;
		t7 * L_6 = Box(t27_TI_var, &L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Enum::Equals(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		t67 * L_8 = (&V_1);
		float L_9 = (L_8->f2);
		L_8->f2 = ((float)((float)L_9+(float)(2.5f)));
		goto IL_0052;
	}

IL_003f:
	{
		t67 * L_10 = (&V_1);
		float L_11 = (L_10->f2);
		L_10->f2 = ((float)((float)L_11-(float)(2.5f)));
	}

IL_0052:
	{
		t13 * L_12 = (__this->f2);
		t67  L_13 = V_1;
		t68 * L_14 = m176(__this, NULL);
		t70  L_15 = m177(L_14, NULL);
		t66 * L_16 = m178(NULL, L_12, L_13, L_15, NULL);
		V_0 = ((t13 *)IsInst(L_16, t13_TI_var));
		t13 * L_17 = V_0;
		t55 * L_18 = m160(L_17, (t47*) &_stringLiteral16, NULL);
		__this->f6 = ((t24 *)IsInst(L_18, t24_TI_var));
		t13 * L_19 = V_0;
		t55 * L_20 = m160(L_19, (t47*) &_stringLiteral17, NULL);
		__this->f5 = ((t23 *)IsInst(L_20, t23_TI_var));
		t24 * L_21 = (__this->f6);
		int32_t L_22 = m47(__this, NULL);
		m55(L_21, L_22, NULL);
		t23 * L_23 = (__this->f5);
		t24 * L_24 = (__this->f6);
		int32_t L_25 = m56(L_24, NULL);
		m53(L_23, L_25, NULL);
	}

IL_00c2:
	try
	{ // begin try (depth: 1)
		t16 * L_26 = (__this->f4);
		t22 * L_27 = (__this->f3);
		m171(L_26, L_27, (0.3f), NULL);
		goto IL_00ed;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_00dd;
		throw e;
	}

CATCH_00dd:
	{ // begin catch(System.NullReferenceException)
		V_2 = ((t64 *)__exception_local);
		m183(NULL, (t47*) &_stringLiteral18, NULL);
		goto IL_00ed;
	} // end catch (depth: 1)

IL_00ed:
	{
		t23 * L_28 = (__this->f5);
		m51(L_28, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" int32_t m47 (t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m166(__this, NULL);
		t47* L_1 = m184(L_0, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_2 = m185(NULL, L_1, (t47*) &_stringLiteral19, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001c:
	{
		t13 * L_3 = m166(__this, NULL);
		t47* L_4 = m184(L_3, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_5 = m185(NULL, L_4, (t47*) &_stringLiteral10, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0038:
	{
		t13 * L_6 = m166(__this, NULL);
		t47* L_7 = m184(L_6, NULL);
		bool L_8 = m186(L_7, (t47*) &_stringLiteral6, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0054:
	{
		return (int32_t)(3);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t72.h"
#include "t51.h"
#include "t73.h"
#include "t74.h"
#include "t25.h"
#include "t75MD.h"
#include "t74MD.h"
#include "t73MD.h"
#include "t67MD.h"
#include "t25MD.h"
struct t13;
struct t72;
struct t13;
struct t7;
extern "C" t7 * m188_gshared (t13 * __this, const MethodInfo* method);
#define m188(__this, method) (( t7 * (*) (t13 *, const MethodInfo*))m188_gshared)(__this, method)
#define m187(__this, method) (( t72 * (*) (t13 *, const MethodInfo*))m188_gshared)(__this, method)
struct t55;
struct t73;
#define m189(__this, method) (( t73 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)
struct t13;
struct t51;
#define m190(__this, method) (( t51 * (*) (t13 *, const MethodInfo*))m188_gshared)(__this, method)


extern "C" void m48 (t23 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern "C" void m49 (t23 * __this, const MethodInfo* method)
{
	{
		m50(__this, NULL);
		return;
	}
}
extern TypeInfo* t75_TI_var;
extern const MethodInfo* m187_MI_var;
extern "C" void m50 (t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		m187_MI_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	t13 * V_0 = {0};
	{
		t13 * L_0 = m166(__this, NULL);
		t47* L_1 = m184(L_0, NULL);
		bool L_2 = m186(L_1, (t47*) &_stringLiteral13, NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		t13 * L_3 = m191(NULL, (t47*) &_stringLiteral14, NULL);
		V_0 = L_3;
		t13 * L_4 = V_0;
		bool L_5 = m170(NULL, L_4, (t66 *)NULL, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		t13 * L_6 = V_0;
		t72 * L_7 = m187(L_6, m187_MI_var);
		t13 * L_8 = m166(__this, NULL);
		t72 * L_9 = m187(L_8, m187_MI_var);
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		m192(NULL, L_7, L_9, 1, NULL);
	}

IL_0048:
	{
		return;
	}
}
extern const MethodInfo* m189_MI_var;
extern "C" void m51 (t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m189_MI_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->f6);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_002d;
		}
	}
	{
		t73 * L_1 = m189(__this, m189_MI_var);
		t74  L_2 = m193(NULL, NULL);
		int32_t L_3 = (__this->f3);
		t74  L_4 = m194(NULL, L_2, (((float)L_3)), NULL);
		m195(L_1, L_4, NULL);
		goto IL_0049;
	}

IL_002d:
	{
		t73 * L_5 = m189(__this, m189_MI_var);
		t74  L_6 = m196(NULL, NULL);
		int32_t L_7 = (__this->f2);
		t74  L_8 = m194(NULL, L_6, (((float)L_7)), NULL);
		m195(L_5, L_8, NULL);
	}

IL_0049:
	{
		return;
	}
}
extern TypeInfo* t75_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t25_TI_var;
extern const MethodInfo* m190_MI_var;
extern const MethodInfo* m189_MI_var;
extern "C" void m52 (t23 * __this, t51 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t25_TI_var = il2cpp_codegen_type_info_from_index(28);
		m190_MI_var = il2cpp_codegen_method_info_from_index(2147483653);
		m189_MI_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		t51 * L_0 = p0;
		t13 * L_1 = m166(L_0, NULL);
		t47* L_2 = m184(L_1, NULL);
		bool L_3 = (bool)VirtFuncInvoker1< bool, t47* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_2, (t47*) &_stringLiteral10);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_4 = (__this->f6);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		t51 * L_5 = p0;
		t13 * L_6 = m166(L_5, NULL);
		t51 * L_7 = m190(L_6, m190_MI_var);
		t13 * L_8 = m166(__this, NULL);
		t51 * L_9 = m190(L_8, m190_MI_var);
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		m197(NULL, L_7, L_9, NULL);
		goto IL_0121;
	}

IL_0046:
	{
		t51 * L_10 = p0;
		t13 * L_11 = m166(L_10, NULL);
		t47* L_12 = m184(L_11, NULL);
		bool L_13 = m186(L_12, (t47*) &_stringLiteral6, NULL);
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_14 = (__this->f6);
		if (L_14)
		{
			goto IL_008b;
		}
	}
	{
		t51 * L_15 = p0;
		t13 * L_16 = m166(L_15, NULL);
		t51 * L_17 = m190(L_16, m190_MI_var);
		t13 * L_18 = m166(__this, NULL);
		t51 * L_19 = m190(L_18, m190_MI_var);
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		m197(NULL, L_17, L_19, NULL);
		goto IL_0121;
	}

IL_008b:
	{
		t51 * L_20 = p0;
		t13 * L_21 = m166(L_20, NULL);
		t47* L_22 = m184(L_21, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_23 = m185(NULL, L_22, (t47*) &_stringLiteral20, NULL);
		if (!L_23)
		{
			goto IL_00c5;
		}
	}
	{
		t51 * L_24 = p0;
		t13 * L_25 = m166(L_24, NULL);
		t51 * L_26 = m190(L_25, m190_MI_var);
		t13 * L_27 = m166(__this, NULL);
		t51 * L_28 = m190(L_27, m190_MI_var);
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		m197(NULL, L_26, L_28, NULL);
		goto IL_0121;
	}

IL_00c5:
	{
		t73 * L_29 = m189(__this, m189_MI_var);
		t67  L_30 = m198(NULL, NULL);
		t74  L_31 = m199(NULL, L_30, NULL);
		m200(L_29, L_31, NULL);
		t13 * L_32 = m166(__this, NULL);
		m201(NULL, L_32, (0.08f), NULL);
		int32_t L_33 = (__this->f6);
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_0121;
		}
	}
	{
		t13 * L_34 = m159(NULL, (t47*) &_stringLiteral10, NULL);
		t55 * L_35 = m160(L_34, (t47*) &_stringLiteral21, NULL);
		__this->f4 = ((t25 *)IsInst(L_35, t25_TI_var));
		t25 * L_36 = (__this->f4);
		m127(L_36, 0, NULL);
	}

IL_0121:
	{
		return;
	}
}
extern "C" void m53 (t23 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t27MD.h"



#ifndef _MSC_VER
#else
#endif



extern "C" void m54 (t24 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern "C" void m55 (t24 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m56 (t24 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#include "t29.h"
#ifndef _MSC_VER
#else
#endif
#include "t29MD.h"

#include "UnityEngine.UI_ArrayTypes.h"
#include "t76.h"


extern "C" void m57 (t29 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t18_TI_var;
extern "C" void m58 (t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t18_TI_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	{
		t55 * L_0 = m202(__this, (t47*) &_stringLiteral11, NULL);
		__this->f2 = ((t18 *)IsInst(L_0, t18_TI_var));
		return;
	}
}
extern "C" void m59 (t29 * __this, const MethodInfo* method)
{
	{
		m60(__this, NULL);
		return;
	}
}
extern "C" void m60 (t29 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t18 * L_0 = (__this->f2);
		int32_t L_1 = m82(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_0047;
		}
		if (L_2 == 1)
		{
			goto IL_0035;
		}
		if (L_2 == 2)
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0059;
	}

IL_0023:
	{
		t30* L_3 = (__this->f3);
		int32_t L_4 = 2;
		m168(NULL, (*(t76 **)(t76 **)SZArrayLdElema(L_3, L_4)), NULL);
		goto IL_0059;
	}

IL_0035:
	{
		t30* L_5 = (__this->f3);
		int32_t L_6 = 1;
		m168(NULL, (*(t76 **)(t76 **)SZArrayLdElema(L_5, L_6)), NULL);
		goto IL_0059;
	}

IL_0047:
	{
		t30* L_7 = (__this->f3);
		int32_t L_8 = 0;
		m168(NULL, (*(t76 **)(t76 **)SZArrayLdElema(L_7, L_8)), NULL);
		goto IL_0059;
	}

IL_0059:
	{
		return;
	}
}
extern "C" void m61 (t29 * __this, const MethodInfo* method)
{
	{
		t30* L_0 = (__this->f3);
		int32_t L_1 = 0;
		m168(NULL, (*(t76 **)(t76 **)SZArrayLdElema(L_0, L_1)), NULL);
		return;
	}
}
#include "t26.h"
#ifndef _MSC_VER
#else
#endif
#include "t26MD.h"



extern "C" void m62 (t26 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t9_TI_var;
extern "C" void m63 (t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t9_TI_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m166(__this, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral3, NULL);
		__this->f2 = ((t9 *)IsInst(L_1, t9_TI_var));
		return;
	}
}
extern "C" void m64 (t26 * __this, const MethodInfo* method)
{
	{
		m65(__this, NULL);
		return;
	}
}
extern "C" void m65 (t26 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		t9 * L_1 = (__this->f2);
		m46(L_1, NULL);
		m66(__this, 1, NULL);
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m66 (t26 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
#include "t31.h"
#ifndef _MSC_VER
#else
#endif
#include "t31MD.h"



extern "C" void m67 (t31 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t12_TI_var;
extern "C" void m68 (t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m159(NULL, (t47*) &_stringLiteral4, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral22, NULL);
		__this->f5 = ((t12 *)IsInst(L_1, t12_TI_var));
		__this->f2 = 1;
		return;
	}
}
extern "C" void m69 (t31 * __this, const MethodInfo* method)
{
	{
		t12 * L_0 = (__this->f5);
		t13 * L_1 = m33(L_0, NULL);
		__this->f3 = L_1;
		t12 * L_2 = (__this->f5);
		t13 * L_3 = m34(L_2, NULL);
		__this->f4 = L_3;
		t13 * L_4 = (__this->f3);
		bool L_5 = m170(NULL, L_4, (t66 *)NULL, NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		t13 * L_6 = (__this->f4);
		bool L_7 = m170(NULL, L_6, (t66 *)NULL, NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		m70(__this, NULL);
	}

IL_004a:
	{
		return;
	}
}
extern "C" void m70 (t31 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	t67  V_1 = {0};
	t67  V_2 = {0};
	t67  V_3 = {0};
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		t68 * L_1 = m176(__this, NULL);
		t67  L_2 = m173(L_1, NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->f1);
		t13 * L_4 = (__this->f3);
		t68 * L_5 = m172(L_4, NULL);
		t67  L_6 = m173(L_5, NULL);
		V_1 = L_6;
		float L_7 = ((&V_1)->f1);
		if ((!(((float)L_3) < ((float)L_7))))
		{
			goto IL_0042;
		}
	}
	{
		__this->f2 = 0;
	}

IL_0042:
	{
		goto IL_007e;
	}

IL_0047:
	{
		t68 * L_8 = m176(__this, NULL);
		t67  L_9 = m173(L_8, NULL);
		V_2 = L_9;
		float L_10 = ((&V_2)->f1);
		t13 * L_11 = (__this->f4);
		t68 * L_12 = m172(L_11, NULL);
		t67  L_13 = m173(L_12, NULL);
		V_3 = L_13;
		float L_14 = ((&V_3)->f1);
		if ((!(((float)L_10) > ((float)L_14))))
		{
			goto IL_007e;
		}
	}
	{
		__this->f2 = 1;
	}

IL_007e:
	{
		m71(__this, NULL);
		return;
	}
}
extern "C" void m71 (t31 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		t68 * L_0 = m176(__this, NULL);
		t67  L_1 = m173(L_0, NULL);
		V_0 = L_1;
		bool L_2 = (__this->f2);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t67 * L_3 = (&V_0);
		float L_4 = (L_3->f1);
		L_3->f1 = ((float)((float)L_4-(float)(0.1f)));
		goto IL_0042;
	}

IL_002f:
	{
		t67 * L_5 = (&V_0);
		float L_6 = (L_5->f1);
		L_5->f1 = ((float)((float)L_6+(float)(0.1f)));
	}

IL_0042:
	{
		t68 * L_7 = m176(__this, NULL);
		t67  L_8 = V_0;
		m174(L_7, L_8, NULL);
		return;
	}
}
#include "t32.h"
#ifndef _MSC_VER
#else
#endif
#include "t32MD.h"

#include "t33.h"
#include "t77.h"
#include "t33MD.h"
#include "t78MD.h"


extern "C" void m72 (t32 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t33_TI_var;
extern "C" void m73 (t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t33_TI_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m166(__this, NULL);
		t47* L_1 = m184(L_0, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_2 = m185(NULL, L_1, (t47*) &_stringLiteral23, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		__this->f5 = 1;
		goto IL_002d;
	}

IL_0026:
	{
		__this->f5 = 0;
	}

IL_002d:
	{
		__this->f3 = 0;
		t13 * L_3 = m159(NULL, (t47*) &_stringLiteral10, NULL);
		t55 * L_4 = m160(L_3, (t47*) &_stringLiteral24, NULL);
		__this->f2 = ((t33 *)IsInst(L_4, t33_TI_var));
		return;
	}
}
extern "C" void m74 (t32 * __this, const MethodInfo* method)
{
	{
		m75(__this, NULL);
		return;
	}
}
extern "C" void m75 (t32 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		m77(__this, NULL);
		goto IL_001c;
	}

IL_0016:
	{
		m78(__this, NULL);
	}

IL_001c:
	{
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" void m76 (t32 * __this, t51 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t51 * L_0 = p0;
		t13 * L_1 = m166(L_0, NULL);
		t47* L_2 = m184(L_1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_3 = m185(NULL, L_2, (t47*) &_stringLiteral10, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		__this->f4 = 1;
		t33 * L_4 = (__this->f2);
		m133(L_4, 0, NULL);
	}

IL_002d:
	{
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern "C" void m77 (t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_1 = m203(NULL, ((int32_t)97), NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		t33 * L_2 = (__this->f2);
		m133(L_2, 1, NULL);
		__this->f4 = 0;
	}

IL_002a:
	{
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern "C" void m78 (t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_1 = m203(NULL, ((int32_t)100), NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		t33 * L_2 = (__this->f2);
		m133(L_2, 1, NULL);
		__this->f4 = 0;
	}

IL_002a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t34.h"
#include "t35.h"
#include "t35MD.h"
#include "t34MD.h"


extern "C" void m79 (t18 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t34_TI_var;
extern const MethodInfo* m169_MI_var;
extern "C" void m80 (t18 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t34_TI_var = il2cpp_codegen_type_info_from_index(32);
		m169_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		t16 * L_0 = m169(__this, m169_MI_var);
		__this->f4 = L_0;
		t13 * L_1 = m159(NULL, (t47*) &_stringLiteral4, NULL);
		t55 * L_2 = m160(L_1, (t47*) &_stringLiteral25, NULL);
		__this->f2 = ((t34 *)IsInst(L_2, t34_TI_var));
		return;
	}
}
extern "C" void m81 (t18 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		int32_t L_1 = p0;
		__this->f5 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		int32_t L_2 = (__this->f5);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		t13 * L_3 = m166(__this, NULL);
		float L_4 = (__this->f6);
		m201(NULL, L_3, L_4, NULL);
	}

IL_002b:
	{
		return;
	}
}
extern "C" int32_t m82 (t18 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern TypeInfo* t24_TI_var;
extern TypeInfo* t35_TI_var;
extern TypeInfo* t27_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" void m83 (t18 * __this, t51 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t24_TI_var = il2cpp_codegen_type_info_from_index(22);
		t35_TI_var = il2cpp_codegen_type_info_from_index(33);
		t27_TI_var = il2cpp_codegen_type_info_from_index(21);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t24 * V_0 = {0};
	{
		t51 * L_0 = p0;
		t13 * L_1 = m166(L_0, NULL);
		t47* L_2 = m184(L_1, NULL);
		bool L_3 = m204(L_2, (t47*) &_stringLiteral26, NULL);
		if (!L_3)
		{
			goto IL_018d;
		}
	}
	{
		t51 * L_4 = p0;
		t55 * L_5 = m202(L_4, (t47*) &_stringLiteral16, NULL);
		V_0 = ((t24 *)IsInst(L_5, t24_TI_var));
		t13 * L_6 = m166(__this, NULL);
		t47* L_7 = m184(L_6, NULL);
		bool L_8 = m186(L_7, (t47*) &_stringLiteral6, NULL);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		t13 * L_9 = m166(__this, NULL);
		t47* L_10 = m184(L_9, NULL);
		bool L_11 = (bool)VirtFuncInvoker1< bool, t47* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_10, (t47*) &_stringLiteral19);
		if (!L_11)
		{
			goto IL_00d1;
		}
	}

IL_005f:
	{
		t24 * L_12 = V_0;
		int32_t L_13 = m56(L_12, NULL);
		if (!L_13)
		{
			goto IL_00cc;
		}
	}
	{
		t24 * L_14 = V_0;
		int32_t L_15 = m56(L_14, NULL);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_00cc;
		}
	}
	{
		t51 * L_16 = p0;
		t13 * L_17 = m166(L_16, NULL);
		t55 * L_18 = m160(L_17, (t47*) &_stringLiteral27, NULL);
		__this->f7 = ((t35 *)IsInst(L_18, t35_TI_var));
		t13 * L_19 = m166(__this, NULL);
		t47* L_20 = m184(L_19, NULL);
		t24 * L_21 = V_0;
		int32_t L_22 = m56(L_21, NULL);
		int32_t L_23 = L_22;
		t7 * L_24 = Box(t27_TI_var, &L_23);
		t47* L_25 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_26 = m205(NULL, L_20, (t47*) &_stringLiteral28, L_25, NULL);
		m183(NULL, L_26, NULL);
		t35 * L_27 = (__this->f7);
		int32_t L_28 = m85(L_27, NULL);
		m81(__this, L_28, NULL);
	}

IL_00cc:
	{
		goto IL_018d;
	}

IL_00d1:
	{
		t13 * L_29 = m166(__this, NULL);
		t47* L_30 = m184(L_29, NULL);
		bool L_31 = (bool)VirtFuncInvoker1< bool, t47* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_30, (t47*) &_stringLiteral10);
		if (!L_31)
		{
			goto IL_0161;
		}
	}
	{
		t24 * L_32 = V_0;
		int32_t L_33 = m56(L_32, NULL);
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			goto IL_015c;
		}
	}
	{
		t51 * L_34 = p0;
		t13 * L_35 = m166(L_34, NULL);
		t55 * L_36 = m160(L_35, (t47*) &_stringLiteral27, NULL);
		__this->f7 = ((t35 *)IsInst(L_36, t35_TI_var));
		t16 * L_37 = (__this->f4);
		t22 * L_38 = (__this->f3);
		m171(L_37, L_38, (0.35f), NULL);
		t35 * L_39 = (__this->f7);
		int32_t L_40 = m85(L_39, NULL);
		m81(__this, L_40, NULL);
		t51 * L_41 = p0;
		t13 * L_42 = m166(L_41, NULL);
		m168(NULL, L_42, NULL);
		t34 * L_43 = (__this->f2);
		t7 * L_44 = m111(L_43, (1.0f), 1, NULL);
		m167(__this, L_44, NULL);
	}

IL_015c:
	{
		goto IL_018d;
	}

IL_0161:
	{
		t51 * L_45 = p0;
		t13 * L_46 = m166(L_45, NULL);
		t55 * L_47 = m160(L_46, (t47*) &_stringLiteral27, NULL);
		__this->f7 = ((t35 *)IsInst(L_47, t35_TI_var));
		t35 * L_48 = (__this->f7);
		int32_t L_49 = m85(L_48, NULL);
		m81(__this, L_49, NULL);
	}

IL_018d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m84 (t35 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern "C" int32_t m85 (t35 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#include "t36.h"
#ifndef _MSC_VER
#else
#endif
#include "t36MD.h"



extern "C" void m86 (t36 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern "C" void m87 (t36 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m88 (t36 * __this, const MethodInfo* method)
{
	{
		m89(__this, NULL);
		return;
	}
}
extern "C" void m89 (t36 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	t67  V_1 = {0};
	{
		t13 * L_0 = m166(__this, NULL);
		t68 * L_1 = m172(L_0, NULL);
		t67  L_2 = m173(L_1, NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->f2);
		t13 * L_4 = m159(NULL, (t47*) &_stringLiteral29, NULL);
		t68 * L_5 = m172(L_4, NULL);
		t67  L_6 = m173(L_5, NULL);
		V_1 = L_6;
		float L_7 = ((&V_1)->f2);
		if ((!(((float)L_3) < ((float)L_7))))
		{
			goto IL_0049;
		}
	}
	{
		t13 * L_8 = m166(__this, NULL);
		m201(NULL, L_8, (0.0f), NULL);
	}

IL_0049:
	{
		return;
	}
}
#include "t37.h"
#ifndef _MSC_VER
#else
#endif
#include "t37MD.h"



extern "C" void m90 (t37 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern "C" void m91 (t37 * __this, const MethodInfo* method)
{
	{
		t13 * L_0 = m159(NULL, (t47*) &_stringLiteral19, NULL);
		__this->f2 = L_0;
		return;
	}
}
extern "C" void m92 (t37 * __this, const MethodInfo* method)
{
	{
		t13 * L_0 = m159(NULL, (t47*) &_stringLiteral10, NULL);
		bool L_1 = m206(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		m93(__this, NULL);
	}

IL_001b:
	{
		return;
	}
}
extern "C" void m93 (t37 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	t67  V_1 = {0};
	{
		t68 * L_0 = m176(__this, NULL);
		t67  L_1 = m173(L_0, NULL);
		V_0 = L_1;
		t13 * L_2 = (__this->f2);
		t68 * L_3 = m172(L_2, NULL);
		t67  L_4 = m173(L_3, NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->f1);
		(&V_0)->f1 = L_5;
		t68 * L_6 = m176(__this, NULL);
		t67  L_7 = V_0;
		m174(L_6, L_7, NULL);
		return;
	}
}
#include "t38.h"
#ifndef _MSC_VER
#else
#endif
#include "t38MD.h"



extern "C" void m94 (t38 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t18_TI_var;
extern const MethodInfo* m156_MI_var;
extern "C" void m95 (t38 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t18_TI_var = il2cpp_codegen_type_info_from_index(18);
		m156_MI_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3 * L_0 = m156(__this, m156_MI_var);
		__this->f4 = L_0;
		t55 * L_1 = m202(__this, (t47*) &_stringLiteral11, NULL);
		__this->f2 = ((t18 *)IsInst(L_1, t18_TI_var));
		return;
	}
}
extern "C" void m96 (t38 * __this, const MethodInfo* method)
{
	{
		m97(__this, NULL);
		return;
	}
}
extern "C" void m97 (t38 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t18 * L_0 = (__this->f2);
		int32_t L_1 = m82(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 0)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 1)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 2)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_006d;
	}

IL_0025:
	{
		t3 * L_3 = (__this->f4);
		t2* L_4 = (__this->f3);
		int32_t L_5 = 0;
		m161(L_3, (*(t56 **)(t56 **)SZArrayLdElema(L_4, L_5)), NULL);
		goto IL_006d;
	}

IL_003d:
	{
		t3 * L_6 = (__this->f4);
		t2* L_7 = (__this->f3);
		int32_t L_8 = 1;
		m161(L_6, (*(t56 **)(t56 **)SZArrayLdElema(L_7, L_8)), NULL);
		goto IL_006d;
	}

IL_0055:
	{
		t3 * L_9 = (__this->f4);
		t2* L_10 = (__this->f3);
		int32_t L_11 = 2;
		m161(L_9, (*(t56 **)(t56 **)SZArrayLdElema(L_10, L_11)), NULL);
		goto IL_006d;
	}

IL_006d:
	{
		return;
	}
}
#include "t39.h"
#ifndef _MSC_VER
#else
#endif
#include "t39MD.h"



extern "C" void m98 (t39 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t10_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t64_TI_var;
extern "C" void m99 (t39 * __this, t51 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t10_TI_var = il2cpp_codegen_type_info_from_index(6);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	t10 * V_0 = {0};
	t64 * V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t51 * L_0 = p0;
		t13 * L_1 = m166(L_0, NULL);
		t47* L_2 = m184(L_1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = m207(NULL, (t47*) &_stringLiteral30, L_2, NULL);
		m183(NULL, L_3, NULL);
		t51 * L_4 = p0;
		t13 * L_5 = m166(L_4, NULL);
		t47* L_6 = m184(L_5, NULL);
		bool L_7 = m186(L_6, (t47*) &_stringLiteral6, NULL);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		m183(NULL, (t47*) &_stringLiteral31, NULL);
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		t13 * L_8 = m159(NULL, (t47*) &_stringLiteral4, NULL);
		t55 * L_9 = m160(L_8, (t47*) &_stringLiteral5, NULL);
		V_0 = ((t10 *)IsInst(L_9, t10_TI_var));
		t10 * L_10 = V_0;
		t10 * L_11 = V_0;
		int32_t L_12 = m42(L_11, NULL);
		m43(L_10, ((-L_12)), NULL);
		t10 * L_13 = V_0;
		m41(L_13, 1, 0, NULL);
		t10 * L_14 = V_0;
		int32_t L_15 = m42(L_14, NULL);
		int32_t L_16 = L_15;
		t7 * L_17 = Box(t58_TI_var, &L_16);
		m183(NULL, L_17, NULL);
		goto IL_0088;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t64_TI_var, e.ex->object.klass))
			goto CATCH_0082;
		throw e;
	}

CATCH_0082:
	{ // begin catch(System.NullReferenceException)
		V_1 = ((t64 *)__exception_local);
		goto IL_0088;
	} // end catch (depth: 1)

IL_0088:
	{
		return;
	}
}
#include "t40.h"
#ifndef _MSC_VER
#else
#endif
#include "t40MD.h"

#include "t79MD.h"


extern "C" void m100 (t40 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern "C" void m101 (t40 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_0 = m203(NULL, ((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		m208(NULL, (t47*) &_stringLiteral32, NULL);
	}

IL_0016:
	{
		return;
	}
}
#include "t41.h"
#ifndef _MSC_VER
#else
#endif
#include "t41MD.h"

#include "t80MD.h"


extern "C" void m102 (t41 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t7 * m103 (t41 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t7 * m104 (t41 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f5);
		return L_0;
	}
}
extern TypeInfo* t58_TI_var;
extern "C" bool m105 (t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f4);
		V_0 = L_0;
		__this->f4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_0189;
	}

IL_0021:
	{
		bool L_2 = (__this->f0);
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		t34 * L_3 = (__this->f8);
		t3 * L_4 = (L_3->f4);
		t34 * L_5 = (__this->f8);
		t2* L_6 = (L_5->f3);
		int32_t L_7 = 0;
		m161(L_4, (*(t56 **)(t56 **)SZArrayLdElema(L_6, L_7)), NULL);
		t34 * L_8 = (__this->f8);
		t13 * L_9 = (L_8->f2);
		t68 * L_10 = m172(L_9, NULL);
		t67  L_11 = {0};
		m209(&L_11, (31.0f), (31.0f), (1.0f), NULL);
		m210(L_10, L_11, NULL);
		t34 * L_12 = (__this->f8);
		t33 * L_13 = (L_12->f5);
		m132(L_13, (0.9f), 0, NULL);
	}

IL_0088:
	{
		m183(NULL, (t47*) &_stringLiteral33, NULL);
		t34 * L_14 = (__this->f8);
		t33 * L_15 = (L_14->f5);
		float L_16 = (L_15->f2);
		__this->f1 = L_16;
		t34 * L_17 = (__this->f8);
		t33 * L_18 = (L_17->f5);
		L_18->f2 = (0.0f);
		m211(NULL, (0.0f), NULL);
		float L_19 = m212(NULL, NULL);
		float L_20 = (__this->f2);
		__this->f3 = ((float)((float)L_19+(float)L_20));
		goto IL_00f6;
	}

IL_00de:
	{
		int32_t L_21 = 0;
		t7 * L_22 = Box(t58_TI_var, &L_21);
		__this->f5 = L_22;
		__this->f4 = 1;
		goto IL_018b;
	}

IL_00f6:
	{
		float L_23 = m212(NULL, NULL);
		float L_24 = (__this->f3);
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_00de;
		}
	}
	{
		t34 * L_25 = (__this->f8);
		t33 * L_26 = (L_25->f5);
		float L_27 = (__this->f1);
		L_26->f2 = L_27;
		m211(NULL, (1.0f), NULL);
		bool L_28 = (__this->f0);
		if (!L_28)
		{
			goto IL_0182;
		}
	}
	{
		t34 * L_29 = (__this->f8);
		m112(L_29, NULL);
		t34 * L_30 = (__this->f8);
		t3 * L_31 = (L_30->f4);
		t34 * L_32 = (__this->f8);
		t2* L_33 = (L_32->f3);
		int32_t L_34 = 1;
		m161(L_31, (*(t56 **)(t56 **)SZArrayLdElema(L_33, L_34)), NULL);
		t34 * L_35 = (__this->f8);
		t13 * L_36 = (L_35->f2);
		t68 * L_37 = m172(L_36, NULL);
		t67  L_38 = {0};
		m209(&L_38, (10.0f), (10.0f), (1.0f), NULL);
		m210(L_37, L_38, NULL);
	}

IL_0182:
	{
		__this->f4 = (-1);
	}

IL_0189:
	{
		return 0;
	}

IL_018b:
	{
		return 1;
	}
	// Dead block : IL_018d: ldloc.1
}
extern "C" void m106 (t41 * __this, const MethodInfo* method)
{
	{
		__this->f4 = (-1);
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m107 (t41 * __this, const MethodInfo* method)
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

struct t13;
struct t3;
#define m213(__this, method) (( t3 * (*) (t13 *, const MethodInfo*))m188_gshared)(__this, method)


extern "C" void m108 (t34 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t33_TI_var;
extern const MethodInfo* m213_MI_var;
extern "C" void m109 (t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t33_TI_var = il2cpp_codegen_type_info_from_index(30);
		m213_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m159(NULL, (t47*) &_stringLiteral10, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral24, NULL);
		__this->f5 = ((t33 *)IsInst(L_1, t33_TI_var));
		t13 * L_2 = m159(NULL, (t47*) &_stringLiteral10, NULL);
		__this->f2 = L_2;
		t13 * L_3 = (__this->f2);
		t3 * L_4 = m213(L_3, m213_MI_var);
		__this->f4 = L_4;
		return;
	}
}
extern "C" void m110 (t34 * __this, bool p0, const MethodInfo* method)
{
	{
		t33 * L_0 = (__this->f5);
		m133(L_0, 0, NULL);
		return;
	}
}
extern TypeInfo* t41_TI_var;
extern "C" t7 * m111 (t34 * __this, float p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t41_TI_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	t41 * V_0 = {0};
	{
		t41 * L_0 = (t41 *)il2cpp_codegen_object_new (t41_TI_var);
		m102(L_0, NULL);
		V_0 = L_0;
		t41 * L_1 = V_0;
		bool L_2 = p1;
		L_1->f0 = L_2;
		t41 * L_3 = V_0;
		float L_4 = p0;
		L_3->f2 = L_4;
		t41 * L_5 = V_0;
		bool L_6 = p1;
		L_5->f6 = L_6;
		t41 * L_7 = V_0;
		float L_8 = p0;
		L_7->f7 = L_8;
		t41 * L_9 = V_0;
		L_9->f8 = __this;
		t41 * L_10 = V_0;
		return L_10;
	}
}
extern "C" void m112 (t34 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		t13 * L_0 = (__this->f2);
		t68 * L_1 = m172(L_0, NULL);
		t67  L_2 = m173(L_1, NULL);
		V_0 = L_2;
		(&V_0)->f1 = (-160.4f);
		(&V_0)->f2 = (1.598f);
		t13 * L_3 = (__this->f2);
		t68 * L_4 = m172(L_3, NULL);
		t67  L_5 = V_0;
		m174(L_4, L_5, NULL);
		return;
	}
}
#include "t42.h"
#ifndef _MSC_VER
#else
#endif
#include "t42MD.h"



extern "C" void m113 (t42 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t7 * m114 (t42 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t7 * m115 (t42 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f2);
		return L_0;
	}
}
extern TypeInfo* t59_TI_var;
extern "C" bool m116 (t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t59_TI_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0045;
	}

IL_0021:
	{
		float L_2 = (__this->f0);
		t59 * L_3 = (t59 *)il2cpp_codegen_object_new (t59_TI_var);
		m164(L_3, L_2, NULL);
		__this->f2 = L_3;
		__this->f1 = 1;
		goto IL_0047;
	}

IL_003e:
	{
		__this->f1 = (-1);
	}

IL_0045:
	{
		return 0;
	}

IL_0047:
	{
		return 1;
	}
	// Dead block : IL_0049: ldloc.1
}
extern "C" void m117 (t42 * __this, const MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
extern TypeInfo* t61_TI_var;
extern "C" void m118 (t42 * __this, const MethodInfo* method)
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



extern "C" void m119 (t20 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern "C" void m120 (t20 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m121 (t20 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern TypeInfo* t42_TI_var;
extern "C" t7 * m122 (t20 * __this, float p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t42_TI_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	t42 * V_0 = {0};
	{
		t42 * L_0 = (t42 *)il2cpp_codegen_object_new (t42_TI_var);
		m113(L_0, NULL);
		V_0 = L_0;
		t42 * L_1 = V_0;
		float L_2 = p0;
		L_1->f0 = L_2;
		t42 * L_3 = V_0;
		float L_4 = p0;
		L_3->f3 = L_4;
		t42 * L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m123 (t25 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t9_TI_var;
extern "C" void m124 (t25 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t9_TI_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m166(__this, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral3, NULL);
		__this->f2 = ((t9 *)IsInst(L_1, t9_TI_var));
		m127(__this, 0, NULL);
		return;
	}
}
extern "C" void m125 (t25 * __this, const MethodInfo* method)
{
	{
		m126(__this, NULL);
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern "C" void m126 (t25 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_0 = m214(NULL, (t47*) &_stringLiteral34, NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		bool L_1 = (__this->f3);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		t9 * L_2 = (__this->f2);
		m46(L_2, NULL);
		m127(__this, 1, NULL);
	}

IL_002c:
	{
		return;
	}
}
extern "C" void m127 (t25 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m128 (t33 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" void m129 (t33 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t67  V_0 = {0};
	t67  V_1 = {0};
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		ArrayElementTypeCheck (L_0, (t47*) &_stringLiteral35);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)(t47*) &_stringLiteral35;
		t69* L_1 = L_0;
		t68 * L_2 = m176(__this, NULL);
		t67  L_3 = m173(L_2, NULL);
		V_0 = L_3;
		float L_4 = ((&V_0)->f1);
		float L_5 = L_4;
		t7 * L_6 = Box(t60_TI_var, &L_5);
		ArrayElementTypeCheck (L_1, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_1, 1)) = (t7 *)L_6;
		t69* L_7 = L_1;
		ArrayElementTypeCheck (L_7, (t47*) &_stringLiteral36);
		*((t7 **)(t7 **)SZArrayLdElema(L_7, 2)) = (t7 *)(t47*) &_stringLiteral36;
		t69* L_8 = L_7;
		t68 * L_9 = m176(__this, NULL);
		t67  L_10 = m173(L_9, NULL);
		V_1 = L_10;
		float L_11 = ((&V_1)->f2);
		float L_12 = L_11;
		t7 * L_13 = Box(t60_TI_var, &L_12);
		ArrayElementTypeCheck (L_8, L_13);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 3)) = (t7 *)L_13;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_14 = m175(NULL, L_8, NULL);
		m183(NULL, L_14, NULL);
		__this->f3 = 1;
		return;
	}
}
extern "C" void m130 (t33 * __this, const MethodInfo* method)
{
	{
		m131(__this, NULL);
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern "C" void m131 (t33 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_1 = m214(NULL, (t47*) &_stringLiteral37, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		float L_2 = (__this->f2);
		m132(__this, ((-L_2)), 1, NULL);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_3 = m214(NULL, (t47*) &_stringLiteral38, NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		float L_4 = (__this->f2);
		m132(__this, L_4, 1, NULL);
	}

IL_0044:
	{
		return;
	}
}
extern "C" void m132 (t33 * __this, float p0, bool p1, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		t68 * L_0 = m176(__this, NULL);
		t67  L_1 = m173(L_0, NULL);
		V_0 = L_1;
		bool L_2 = p1;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		float L_3 = ((&V_0)->f1);
		float L_4 = p0;
		(&V_0)->f1 = ((float)((float)L_3+(float)L_4));
		goto IL_0037;
	}

IL_0027:
	{
		float L_5 = ((&V_0)->f2);
		float L_6 = p0;
		(&V_0)->f2 = ((float)((float)L_5+(float)L_6));
	}

IL_0037:
	{
		t68 * L_7 = m176(__this, NULL);
		t67  L_8 = V_0;
		m174(L_7, L_8, NULL);
		return;
	}
}
extern "C" void m133 (t33 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" bool m134 (t33 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t43.h"
#include "t44.h"
#include "t43MD.h"
#include "t44MD.h"
struct t55;
struct t44;
#define m215(__this, method) (( t44 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)
struct t13;
struct t44;
#define m216(__this, method) (( t44 * (*) (t13 *, const MethodInfo*))m188_gshared)(__this, method)


extern "C" void m135 (t19 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t43_TI_var;
extern const MethodInfo* m169_MI_var;
extern const MethodInfo* m215_MI_var;
extern const MethodInfo* m216_MI_var;
extern "C" void m136 (t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t43_TI_var = il2cpp_codegen_type_info_from_index(38);
		m169_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		m215_MI_var = il2cpp_codegen_method_info_from_index(2147483655);
		m216_MI_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	{
		t16 * L_0 = m169(__this, m169_MI_var);
		__this->f6 = L_0;
		__this->f3 = 0;
		t13 * L_1 = m159(NULL, (t47*) &_stringLiteral39, NULL);
		t55 * L_2 = m160(L_1, (t47*) &_stringLiteral40, NULL);
		__this->f4 = ((t43 *)IsInst(L_2, t43_TI_var));
		t44 * L_3 = m215(__this, m215_MI_var);
		__this->f8 = L_3;
		t13 * L_4 = m159(NULL, (t47*) &_stringLiteral41, NULL);
		t44 * L_5 = m216(L_4, m216_MI_var);
		__this->f9 = L_5;
		t13 * L_6 = m159(NULL, (t47*) &_stringLiteral42, NULL);
		t44 * L_7 = m216(L_6, m216_MI_var);
		__this->f10 = L_7;
		return;
	}
}
extern "C" void m137 (t19 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		m138(__this, NULL);
		m140(__this, NULL);
	}

IL_0017:
	{
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" void m138 (t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	{
		t43 * L_0 = (__this->f4);
		int32_t L_1 = m155(L_0, NULL);
		__this->f2 = L_1;
		bool L_2 = (__this->f7);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		V_0 = (t47*) &_stringLiteral43;
		goto IL_002d;
	}

IL_0027:
	{
		V_0 = (t47*) &_stringLiteral44;
	}

IL_002d:
	{
		t44 * L_3 = (__this->f10);
		VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, (t47*) &_stringLiteral45);
		t44 * L_4 = (__this->f8);
		t47* L_5 = V_0;
		VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		t44 * L_6 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		int32_t L_8 = (__this->f2);
		int32_t L_9 = L_8;
		t7 * L_10 = Box(t58_TI_var, &L_9);
		t47* L_11 = m217(NULL, L_7, L_10, NULL);
		VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		return;
	}
}
extern "C" void m139 (t19 * __this, bool p0, bool p1, bool p2, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f3 = L_0;
		bool L_1 = p2;
		__this->f7 = L_1;
		bool L_2 = p1;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		t16 * L_3 = (__this->f6);
		t22 * L_4 = (__this->f5);
		m171(L_3, L_4, (0.35f), NULL);
	}

IL_002a:
	{
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern "C" void m140 (t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_0 = m214(NULL, (t47*) &_stringLiteral46, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		m211(NULL, (1.0f), NULL);
		int32_t L_1 = m218(NULL, NULL);
		m219(NULL, L_1, NULL);
	}

IL_0023:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m141 (t45 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t43_TI_var;
extern "C" void m142 (t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t43_TI_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	{
		t13 * L_0 = m159(NULL, (t47*) &_stringLiteral39, NULL);
		t55 * L_1 = m160(L_0, (t47*) &_stringLiteral40, NULL);
		__this->f3 = ((t43 *)IsInst(L_1, t43_TI_var));
		__this->f4 = 1;
		return;
	}
}
extern "C" void m143 (t45 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" void m144 (t45 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		t43 * L_1 = (__this->f3);
		int32_t L_2 = (__this->f2);
		m154(L_1, L_2, NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t46.h"
#include "t81.h"
#include "t82.h"
#include "t46MD.h"


extern "C" void m145 (t4 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern TypeInfo* t49_TI_var;
extern const MethodInfo* m216_MI_var;
extern const MethodInfo* m215_MI_var;
extern "C" void m146 (t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t49_TI_var = il2cpp_codegen_type_info_from_index(40);
		m216_MI_var = il2cpp_codegen_method_info_from_index(2147483656);
		m215_MI_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	{
		t48* L_0 = ((t48*)SZArrayNew(t48_TI_var, 4));
		ArrayElementTypeCheck (L_0, (t47*) &_stringLiteral47);
		*((t47**)(t47**)SZArrayLdElema(L_0, 0)) = (t47*)(t47*) &_stringLiteral47;
		t48* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t47*) &_stringLiteral48);
		*((t47**)(t47**)SZArrayLdElema(L_1, 1)) = (t47*)(t47*) &_stringLiteral48;
		t48* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t47*) &_stringLiteral49);
		*((t47**)(t47**)SZArrayLdElema(L_2, 2)) = (t47*)(t47*) &_stringLiteral49;
		t48* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t47*) &_stringLiteral50);
		*((t47**)(t47**)SZArrayLdElema(L_3, 3)) = (t47*)(t47*) &_stringLiteral50;
		__this->f5 = L_3;
		__this->f6 = 0;
		m147(__this, NULL);
		__this->f7 = ((t49*)SZArrayNew(t49_TI_var, 5));
		t49* L_4 = (__this->f7);
		t13 * L_5 = m159(NULL, (t47*) &_stringLiteral51, NULL);
		t44 * L_6 = m216(L_5, m216_MI_var);
		ArrayElementTypeCheck (L_4, L_6);
		*((t44 **)(t44 **)SZArrayLdElema(L_4, 0)) = (t44 *)L_6;
		t49* L_7 = (__this->f7);
		t44 * L_8 = m215(__this, m215_MI_var);
		ArrayElementTypeCheck (L_7, L_8);
		*((t44 **)(t44 **)SZArrayLdElema(L_7, 1)) = (t44 *)L_8;
		t49* L_9 = (__this->f7);
		t13 * L_10 = m159(NULL, (t47*) &_stringLiteral52, NULL);
		t44 * L_11 = m216(L_10, m216_MI_var);
		ArrayElementTypeCheck (L_9, L_11);
		*((t44 **)(t44 **)SZArrayLdElema(L_9, 2)) = (t44 *)L_11;
		t49* L_12 = (__this->f7);
		t13 * L_13 = m159(NULL, (t47*) &_stringLiteral53, NULL);
		t44 * L_14 = m216(L_13, m216_MI_var);
		ArrayElementTypeCheck (L_12, L_14);
		*((t44 **)(t44 **)SZArrayLdElema(L_12, 3)) = (t44 *)L_14;
		t49* L_15 = (__this->f7);
		t13 * L_16 = m159(NULL, (t47*) &_stringLiteral54, NULL);
		t44 * L_17 = m216(L_16, m216_MI_var);
		ArrayElementTypeCheck (L_15, L_17);
		*((t44 **)(t44 **)SZArrayLdElema(L_15, 4)) = (t44 *)L_17;
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern "C" void m147 (t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		t46 * L_0 = (__this->f2);
		t47* L_1 = m220(L_0, NULL);
		t48* L_2 = ((t48*)SZArrayNew(t48_TI_var, 1));
		ArrayElementTypeCheck (L_2, (t47*) &_stringLiteral55);
		*((t47**)(t47**)SZArrayLdElema(L_2, 0)) = (t47*)(t47*) &_stringLiteral55;
		t48* L_3 = m221(L_1, L_2, 0, NULL);
		__this->f4 = L_3;
		return;
	}
}
extern "C" int32_t m148 (t4 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = m163(NULL, 0, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t82_TI_var;
extern "C" void m149 (t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t82_TI_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t82 * V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t48* L_0 = (__this->f4);
		t48* L_1 = (__this->f4);
		int32_t L_2 = m148(__this, (((int32_t)(((t52 *)L_1)->max_length))), NULL);
		int32_t L_3 = L_2;
		V_0 = (*(t47**)(t47**)SZArrayLdElema(L_0, L_3));
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_4 = (__this->f6);
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_0045;
			}
		}

IL_0022:
		{
			t49* L_5 = (__this->f7);
			int32_t L_6 = 0;
			t48* L_7 = (__this->f5);
			int32_t L_8 = 0;
			VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, (*(t44 **)(t44 **)SZArrayLdElema(L_5, L_6)), (*(t47**)(t47**)SZArrayLdElema(L_7, L_8)));
			t49* L_9 = (__this->f7);
			int32_t L_10 = 1;
			t47* L_11 = V_0;
			VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, (*(t44 **)(t44 **)SZArrayLdElema(L_9, L_10)), L_11);
		}

IL_0045:
		{
			goto IL_0050;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t82_TI_var, e.ex->object.klass))
			goto CATCH_004a;
		throw e;
	}

CATCH_004a:
	{ // begin catch(UnityEngine.MissingReferenceException)
		V_1 = ((t82 *)__exception_local);
		goto IL_0050;
	} // end catch (depth: 1)

IL_0050:
	{
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t82_TI_var;
extern "C" void m150 (t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t82_TI_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t82 * V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = m148(__this, ((int32_t)11), NULL);
		V_0 = L_0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->f6);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_0015:
		{
			t49* L_2 = (__this->f7);
			int32_t L_3 = 2;
			t48* L_4 = (__this->f5);
			int32_t L_5 = 1;
			VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, (*(t44 **)(t44 **)SZArrayLdElema(L_2, L_3)), (*(t47**)(t47**)SZArrayLdElema(L_4, L_5)));
			t49* L_6 = (__this->f7);
			int32_t L_7 = 3;
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_8 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
			int32_t L_9 = V_0;
			int32_t L_10 = L_9;
			t7 * L_11 = Box(t58_TI_var, &L_10);
			t47* L_12 = m217(NULL, L_8, L_11, NULL);
			VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, (*(t44 **)(t44 **)SZArrayLdElema(L_6, L_7)), L_12);
			int32_t L_13 = V_0;
			if ((((int32_t)L_13) == ((int32_t)1)))
			{
				goto IL_0075;
			}
		}

IL_004e:
		{
			t49* L_14 = (__this->f7);
			int32_t L_15 = 4;
			t48* L_16 = (__this->f5);
			int32_t L_17 = 2;
			t48* L_18 = (__this->f5);
			int32_t L_19 = 3;
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_20 = m207(NULL, (*(t47**)(t47**)SZArrayLdElema(L_16, L_17)), (*(t47**)(t47**)SZArrayLdElema(L_18, L_19)), NULL);
			VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, (*(t44 **)(t44 **)SZArrayLdElema(L_14, L_15)), L_20);
			goto IL_008a;
		}

IL_0075:
		{
			t49* L_21 = (__this->f7);
			int32_t L_22 = 4;
			t48* L_23 = (__this->f5);
			int32_t L_24 = 2;
			VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, (*(t44 **)(t44 **)SZArrayLdElema(L_21, L_22)), (*(t47**)(t47**)SZArrayLdElema(L_23, L_24)));
		}

IL_008a:
		{
			goto IL_0095;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t82_TI_var, e.ex->object.klass))
			goto CATCH_008f;
		throw e;
	}

CATCH_008f:
	{ // begin catch(UnityEngine.MissingReferenceException)
		V_1 = ((t82 *)__exception_local);
		goto IL_0095;
	} // end catch (depth: 1)

IL_0095:
	{
		return;
	}
}
extern "C" void m151 (t4 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		__this->f6 = ((int32_t)((int32_t)L_0+(int32_t)1));
		m149(__this, NULL);
		m150(__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m152 (t43 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t58_TI_var;
extern const MethodInfo* m215_MI_var;
extern "C" void m153 (t43 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		m215_MI_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f2 = 0;
		t44 * L_0 = m215(__this, m215_MI_var);
		__this->f3 = L_0;
		t44 * L_1 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		t7 * L_5 = Box(t58_TI_var, &L_4);
		t47* L_6 = m217(NULL, L_2, L_5, NULL);
		VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_6);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t82_TI_var;
extern "C" void m154 (t43 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t82_TI_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	t82 * V_0 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = p0;
		__this->f2 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		t44 * L_2 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		int32_t L_4 = (__this->f2);
		int32_t L_5 = L_4;
		t7 * L_6 = Box(t58_TI_var, &L_5);
		t47* L_7 = m217(NULL, L_3, L_6, NULL);
		VirtActionInvoker1< t47* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
		goto IL_0039;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t82_TI_var, e.ex->object.klass))
			goto CATCH_0033;
		throw e;
	}

CATCH_0033:
	{ // begin catch(UnityEngine.MissingReferenceException)
		V_0 = ((t82 *)__exception_local);
		goto IL_0039;
	} // end catch (depth: 1)

IL_0039:
	{
		return;
	}
}
extern "C" int32_t m155 (t43 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
