#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t628.h"
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
#include "t628MD.h"

#include "t53.h"
#include "t529MD.h"

#include "t52.h"

extern "C" void m3115 (t628 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t629.h"
#ifndef _MSC_VER
#else
#endif
#include "t629MD.h"

#include "t58.h"
#include "t47.h"
#include "mscorlib_ArrayTypes.h"
#include "t7.h"
#include "t539MD.h"


extern "C" int32_t m3116 (t629 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3117 (t629 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" int32_t m3118 (t629 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3119 (t629 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" int32_t m3120 (t629 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3121 (t629 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" t47* m3122 (t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 3));
		int32_t L_1 = (__this->f0);
		int32_t L_2 = L_1;
		t7 * L_3 = Box(t58_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		int32_t L_5 = (__this->f1);
		int32_t L_6 = L_5;
		t7 * L_7 = Box(t58_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		int32_t L_9 = (__this->f2);
		int32_t L_10 = L_9;
		t7 * L_11 = Box(t58_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t47* L_12 = m2600(NULL, (t47*) &_stringLiteral319, L_8, NULL);
		return L_12;
	}
}
#include "t630.h"
#ifndef _MSC_VER
#else
#endif
#include "t630MD.h"



#include "t631.h"
#ifndef _MSC_VER
#else
#endif
#include "t631MD.h"



#include "t632.h"
#ifndef _MSC_VER
#else
#endif
#include "t632MD.h"



#include "t633.h"
#ifndef _MSC_VER
#else
#endif
#include "t633MD.h"

#include "t13.h"
#include "t486.h"
#include "t54.h"
#include "t66.h"
#include "t150.h"
#include "t13MD.h"
#include "t66MD.h"


extern "C" void m3123 (t633 * __this, t47* p0, const MethodInfo* method)
{
	{
		t13 * L_0 = (__this->f0);
		t47* L_1 = p0;
		m2689(L_0, L_1, NULL, 1, NULL);
		return;
	}
}
extern "C" bool m3124 (t7 * __this , t633  p0, t633  p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t13 * L_0 = ((&p0)->f0);
		t13 * L_1 = ((&p1)->f0);
		bool L_2 = m206(NULL, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		t150 * L_3 = ((&p0)->f1);
		t150 * L_4 = ((&p1)->f1);
		bool L_5 = m206(NULL, L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
extern "C" bool m3125 (t7 * __this , t633  p0, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t13 * L_0 = ((&p0)->f0);
		bool L_1 = m170(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t150 * L_2 = ((&p0)->f1);
		bool L_3 = m170(NULL, L_2, (t66 *)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
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
#include "t634.h"
#ifndef _MSC_VER
#else
#endif
#include "t634MD.h"

#include "UnityEngine_ArrayTypes.h"
#include "t67.h"
#include "t219.h"
#include "t496.h"
#include "t495.h"
#include "t348.h"
#include "t60.h"
#include "t493.h"
#include "t78MD.h"
#include "t150MD.h"
#include "t219MD.h"
#include "t55MD.h"
#include "t496MD.h"
#include "t348MD.h"
#include "t341MD.h"
struct t55;
struct t496;
#include "t55.h"
struct t55;
struct t7;
extern "C" t7 * m157_gshared (t55 * __this, const MethodInfo* method);
#define m157(__this, method) (( t7 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)
#define m3340(__this, method) (( t496 * (*) (t55 *, const MethodInfo*))m157_gshared)(__this, method)


extern TypeInfo* t635_TI_var;
extern TypeInfo* t633_TI_var;
extern TypeInfo* t634_TI_var;
extern "C" void m3126 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t635_TI_var = il2cpp_codegen_type_info_from_index(1033);
		t633_TI_var = il2cpp_codegen_type_info_from_index(1034);
		t634_TI_var = il2cpp_codegen_type_info_from_index(1035);
		s_Il2CppMethodIntialized = true;
	}
	t633  V_0 = {0};
	t633  V_1 = {0};
	t633  V_2 = {0};
	t633  V_3 = {0};
	t633  V_4 = {0};
	t633  V_5 = {0};
	t633  V_6 = {0};
	t633  V_7 = {0};
	t633  V_8 = {0};
	{
		t635* L_0 = ((t635*)SZArrayNew(t635_TI_var, 3));
		Initobj (t633_TI_var, (&V_0));
		t633  L_1 = V_0;
		*((t633 *)(t633 *)SZArrayLdElema(L_0, 0)) = L_1;
		t635* L_2 = L_0;
		Initobj (t633_TI_var, (&V_1));
		t633  L_3 = V_1;
		*((t633 *)(t633 *)SZArrayLdElema(L_2, 1)) = L_3;
		t635* L_4 = L_2;
		Initobj (t633_TI_var, (&V_2));
		t633  L_5 = V_2;
		*((t633 *)(t633 *)SZArrayLdElema(L_4, 2)) = L_5;
		((t634_SFs*)t634_TI_var->static_fields)->f3 = L_4;
		t635* L_6 = ((t635*)SZArrayNew(t635_TI_var, 3));
		Initobj (t633_TI_var, (&V_3));
		t633  L_7 = V_3;
		*((t633 *)(t633 *)SZArrayLdElema(L_6, 0)) = L_7;
		t635* L_8 = L_6;
		Initobj (t633_TI_var, (&V_4));
		t633  L_9 = V_4;
		*((t633 *)(t633 *)SZArrayLdElema(L_8, 1)) = L_9;
		t635* L_10 = L_8;
		Initobj (t633_TI_var, (&V_5));
		t633  L_11 = V_5;
		*((t633 *)(t633 *)SZArrayLdElema(L_10, 2)) = L_11;
		((t634_SFs*)t634_TI_var->static_fields)->f4 = L_10;
		t635* L_12 = ((t635*)SZArrayNew(t635_TI_var, 3));
		Initobj (t633_TI_var, (&V_6));
		t633  L_13 = V_6;
		*((t633 *)(t633 *)SZArrayLdElema(L_12, 0)) = L_13;
		t635* L_14 = L_12;
		Initobj (t633_TI_var, (&V_7));
		t633  L_15 = V_7;
		*((t633 *)(t633 *)SZArrayLdElema(L_14, 1)) = L_15;
		t635* L_16 = L_14;
		Initobj (t633_TI_var, (&V_8));
		t633  L_17 = V_8;
		*((t633 *)(t633 *)SZArrayLdElema(L_16, 2)) = L_17;
		((t634_SFs*)t634_TI_var->static_fields)->f5 = L_16;
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern TypeInfo* t634_TI_var;
extern TypeInfo* t636_TI_var;
extern TypeInfo* t633_TI_var;
extern TypeInfo* t341_TI_var;
extern const MethodInfo* m3340_MI_var;
extern "C" void m3127 (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		t634_TI_var = il2cpp_codegen_type_info_from_index(1035);
		t636_TI_var = il2cpp_codegen_type_info_from_index(1037);
		t633_TI_var = il2cpp_codegen_type_info_from_index(1034);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		m3340_MI_var = il2cpp_codegen_method_info_from_index(2147483942);
		s_Il2CppMethodIntialized = true;
	}
	t67  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t150 * V_3 = {0};
	t636* V_4 = {0};
	int32_t V_5 = 0;
	t219  V_6 = {0};
	t496 * V_7 = {0};
	t495 * V_8 = {0};
	t348  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	t13 * V_12 = {0};
	t13 * V_13 = {0};
	int32_t V_14 = 0;
	t633  V_15 = {0};
	t67  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		t67  L_0 = m1514(NULL, NULL);
		V_0 = L_0;
		int32_t L_1 = m2622(NULL, NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t636* L_2 = ((t634_SFs*)t634_TI_var->static_fields)->f6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t636* L_3 = ((t634_SFs*)t634_TI_var->static_fields)->f6;
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		((t634_SFs*)t634_TI_var->static_fields)->f6 = ((t636*)SZArrayNew(t636_TI_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t636* L_6 = ((t634_SFs*)t634_TI_var->static_fields)->f6;
		m2623(NULL, L_6, NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_7 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		int32_t L_8 = V_2;
		Initobj (t633_TI_var, (&V_15));
		t633  L_9 = V_15;
		*((t633 *)(t633 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_12 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t52 *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = p0;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t636* L_14 = ((t634_SFs*)t634_TI_var->static_fields)->f6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		t636* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_3 = (*(t150 **)(t150 **)SZArrayLdElema(L_15, L_17));
		t150 * L_18 = V_3;
		bool L_19 = m206(NULL, L_18, (t66 *)NULL, NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = p1;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		t150 * L_21 = V_3;
		t493 * L_22 = m2618(L_21, NULL);
		bool L_23 = m170(NULL, L_22, (t66 *)NULL, NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		t150 * L_24 = V_3;
		t219  L_25 = m2617(L_24, NULL);
		V_6 = L_25;
		t67  L_26 = V_0;
		bool L_27 = m2436((&V_6), L_26, NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		t150 * L_28 = V_3;
		t496 * L_29 = m3340(L_28, m3340_MI_var);
		V_7 = L_29;
		t496 * L_30 = V_7;
		bool L_31 = m1450(NULL, L_30, NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		t496 * L_32 = V_7;
		t67  L_33 = V_0;
		t495 * L_34 = m2206(L_32, L_33, NULL);
		V_8 = L_34;
		t495 * L_35 = V_8;
		bool L_36 = m1450(NULL, L_35, NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_37 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		t495 * L_38 = V_8;
		t13 * L_39 = m166(L_38, NULL);
		((t633 *)(t633 *)SZArrayLdElema(L_37, 0))->f0 = L_39;
		t635* L_40 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		t150 * L_41 = V_3;
		((t633 *)(t633 *)SZArrayLdElema(L_40, 0))->f1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_42 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		((t633 *)(t633 *)SZArrayLdElema(L_42, 0))->f0 = (t13 *)NULL;
		t635* L_43 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		((t633 *)(t633 *)SZArrayLdElema(L_43, 0))->f1 = (t150 *)NULL;
	}

IL_0141:
	{
		t150 * L_44 = V_3;
		int32_t L_45 = m2615(L_44, NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		t150 * L_46 = V_3;
		t67  L_47 = V_0;
		t348  L_48 = m1554(L_46, L_47, NULL);
		V_9 = L_48;
		t67  L_49 = m1558((&V_9), NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->f3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		bool L_52 = m1544(NULL, (0.0f), L_51, NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		t150 * L_53 = V_3;
		float L_54 = m1555(L_53, NULL);
		t150 * L_55 = V_3;
		float L_56 = m1556(L_55, NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		t150 * L_59 = V_3;
		t348  L_60 = V_9;
		float L_61 = V_11;
		t150 * L_62 = V_3;
		int32_t L_63 = m1570(L_62, NULL);
		t150 * L_64 = V_3;
		int32_t L_65 = m2615(L_64, NULL);
		t13 * L_66 = m2627(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), NULL);
		V_12 = L_66;
		t13 * L_67 = V_12;
		bool L_68 = m170(NULL, L_67, (t66 *)NULL, NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_69 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		t13 * L_70 = V_12;
		((t633 *)(t633 *)SZArrayLdElema(L_69, 1))->f0 = L_70;
		t635* L_71 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		t150 * L_72 = V_3;
		((t633 *)(t633 *)SZArrayLdElema(L_71, 1))->f1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		t150 * L_73 = V_3;
		int32_t L_74 = m2619(L_73, NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		t150 * L_75 = V_3;
		int32_t L_76 = m2619(L_75, NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_77 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		((t633 *)(t633 *)SZArrayLdElema(L_77, 1))->f0 = (t13 *)NULL;
		t635* L_78 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		((t633 *)(t633 *)SZArrayLdElema(L_78, 1))->f1 = (t150 *)NULL;
	}

IL_0226:
	{
		t150 * L_79 = V_3;
		t348  L_80 = V_9;
		float L_81 = V_11;
		t150 * L_82 = V_3;
		int32_t L_83 = m1570(L_82, NULL);
		t150 * L_84 = V_3;
		int32_t L_85 = m2615(L_84, NULL);
		t13 * L_86 = m2629(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), NULL);
		V_13 = L_86;
		t13 * L_87 = V_13;
		bool L_88 = m170(NULL, L_87, (t66 *)NULL, NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_89 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		t13 * L_90 = V_13;
		((t633 *)(t633 *)SZArrayLdElema(L_89, 2))->f0 = L_90;
		t635* L_91 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		t150 * L_92 = V_3;
		((t633 *)(t633 *)SZArrayLdElema(L_91, 2))->f1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		t150 * L_93 = V_3;
		int32_t L_94 = m2619(L_93, NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		t150 * L_95 = V_3;
		int32_t L_96 = m2619(L_95, NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_97 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		((t633 *)(t633 *)SZArrayLdElema(L_97, 2))->f0 = (t13 *)NULL;
		t635* L_98 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		((t633 *)(t633 *)SZArrayLdElema(L_98, 2))->f1 = (t150 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		t636* L_101 = V_4;
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((t52 *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_103 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		int32_t L_104 = V_14;
		m3128(NULL, L_102, (*(t633 *)((t633 *)(t633 *)SZArrayLdElema(L_103, L_104))), NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_107 = ((t634_SFs*)t634_TI_var->static_fields)->f5;
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((t52 *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t78_TI_var;
extern TypeInfo* t634_TI_var;
extern TypeInfo* t633_TI_var;
extern "C" void m3128 (t7 * __this , int32_t p0, t633  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		t634_TI_var = il2cpp_codegen_type_info_from_index(1035);
		t633_TI_var = il2cpp_codegen_type_info_from_index(1034);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	t633  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_0 = m1512(NULL, 0, NULL);
		V_0 = L_0;
		bool L_1 = m1551(NULL, 0, NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		t633  L_3 = p1;
		bool L_4 = m3125(NULL, L_3, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_5 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_6 = p0;
		t633  L_7 = p1;
		*((t633 *)(t633 *)SZArrayLdElema(L_5, L_6)) = L_7;
		t635* L_8 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_9 = p0;
		m3123(((t633 *)(t633 *)SZArrayLdElema(L_8, L_9)), (t47*) &_stringLiteral320, NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_11 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_12 = p0;
		bool L_13 = m3125(NULL, (*(t633 *)((t633 *)(t633 *)SZArrayLdElema(L_11, L_12))), NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		t633  L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_15 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_16 = p0;
		bool L_17 = m3124(NULL, L_14, (*(t633 *)((t633 *)(t633 *)SZArrayLdElema(L_15, L_16))), NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_18 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_19 = p0;
		m3123(((t633 *)(t633 *)SZArrayLdElema(L_18, L_19)), (t47*) &_stringLiteral321, NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_20 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_21 = p0;
		m3123(((t633 *)(t633 *)SZArrayLdElema(L_20, L_21)), (t47*) &_stringLiteral322, NULL);
		t635* L_22 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_23 = p0;
		Initobj (t633_TI_var, (&V_2));
		t633  L_24 = V_2;
		*((t633 *)(t633 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_25 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_26 = p0;
		bool L_27 = m3125(NULL, (*(t633 *)((t633 *)(t633 *)SZArrayLdElema(L_25, L_26))), NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_28 = ((t634_SFs*)t634_TI_var->static_fields)->f4;
		int32_t L_29 = p0;
		m3123(((t633 *)(t633 *)SZArrayLdElema(L_28, L_29)), (t47*) &_stringLiteral323, NULL);
	}

IL_00fc:
	{
		t633  L_30 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_31 = ((t634_SFs*)t634_TI_var->static_fields)->f3;
		int32_t L_32 = p0;
		bool L_33 = m3124(NULL, L_30, (*(t633 *)((t633 *)(t633 *)SZArrayLdElema(L_31, L_32))), NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		t633  L_34 = p1;
		bool L_35 = m3125(NULL, L_34, NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		m3123((&p1), (t47*) &_stringLiteral324, NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_36 = ((t634_SFs*)t634_TI_var->static_fields)->f3;
		int32_t L_37 = p0;
		bool L_38 = m3125(NULL, (*(t633 *)((t633 *)(t633 *)SZArrayLdElema(L_36, L_37))), NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_39 = ((t634_SFs*)t634_TI_var->static_fields)->f3;
		int32_t L_40 = p0;
		m3123(((t633 *)(t633 *)SZArrayLdElema(L_39, L_40)), (t47*) &_stringLiteral325, NULL);
	}

IL_0162:
	{
		t633  L_41 = p1;
		bool L_42 = m3125(NULL, L_41, NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		m3123((&p1), (t47*) &_stringLiteral326, NULL);
		m3123((&p1), (t47*) &_stringLiteral324, NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t634_TI_var);
		t635* L_43 = ((t634_SFs*)t634_TI_var->static_fields)->f3;
		int32_t L_44 = p0;
		t633  L_45 = p1;
		*((t633 *)(t633 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#include "t637.h"
#ifndef _MSC_VER
#else
#endif
#include "t637MD.h"



extern "C" void m3129 (t637 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t435.h"
#ifndef _MSC_VER
#else
#endif
#include "t435MD.h"



extern "C" void m2041 (t435 * __this, t47* p0, const MethodInfo* method)
{
	{
		m3129(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t433.h"
#ifndef _MSC_VER
#else
#endif
#include "t433MD.h"



extern "C" void m2039 (t433 * __this, float p0, const MethodInfo* method)
{
	{
		m3129(__this, NULL);
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t429.h"
#ifndef _MSC_VER
#else
#endif
#include "t429MD.h"



extern "C" void m2032 (t429 * __this, float p0, float p1, const MethodInfo* method)
{
	{
		m3129(__this, NULL);
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t436.h"
#ifndef _MSC_VER
#else
#endif
#include "t436MD.h"



extern "C" void m2044 (t436 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		m3129(__this, NULL);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t434.h"
#ifndef _MSC_VER
#else
#endif
#include "t434MD.h"



extern "C" void m2040 (t434 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t638.h"
#ifndef _MSC_VER
#else
#endif
#include "t638MD.h"

#include "t7MD.h"


extern "C" void m3130 (t638 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
#include "t639.h"
#ifndef _MSC_VER
#else
#endif
#include "t639MD.h"

#include "t686.h"
#include "t65.h"
#include "t336.h"
#include "t396.h"
#include "t347.h"
#include "t723.h"
#include "t214.h"
#include "t745.h"
#include "t722.h"
#include "t733.h"
#include "t47MD.h"
#include "t686MD.h"
#include "t396MD.h"
#include "t65MD.h"
#include "t336MD.h"
#include "t723MD.h"
#include "t745MD.h"
#include "t347MD.h"
#include "t722MD.h"
#include "t733MD.h"
#include "t58MD.h"


extern "C" void m3131 (t639 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t639_TI_var;
extern "C" void m3132 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t639_TI_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		((t639_SFs*)t639_TI_var->static_fields)->f0 = L_0;
		return;
	}
}
extern TypeInfo* t639_TI_var;
extern "C" void m3133 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t639_TI_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		((t639_SFs*)t639_TI_var->static_fields)->f0 = L_0;
		return;
	}
}
extern TypeInfo* t686_TI_var;
extern TypeInfo* t639_TI_var;
extern "C" t47* m3134 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t686_TI_var = il2cpp_codegen_type_info_from_index(1039);
		t639_TI_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	t686 * V_0 = {0};
	t47* V_1 = {0};
	{
		t686 * L_0 = (t686 *)il2cpp_codegen_object_new (t686_TI_var);
		m3341(L_0, 1, 1, NULL);
		V_0 = L_0;
		t686 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		t47* L_2 = m3139(NULL, L_1, NULL);
		t47* L_3 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.String::ToString() */, L_2);
		V_1 = L_3;
		t47* L_4 = V_1;
		return L_4;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" bool m3135 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		t7 * L_0 = p0;
		V_0 = ((t47*)Castclass(L_0, t47_TI_var));
		t47* L_1 = V_0;
		bool L_2 = m186(L_1, (t47*) &_stringLiteral327, NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		t47* L_3 = V_0;
		bool L_4 = m186(L_3, (t47*) &_stringLiteral328, NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		t47* L_5 = V_0;
		bool L_6 = m186(L_5, (t47*) &_stringLiteral329, NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		t47* L_7 = V_0;
		bool L_8 = m186(L_7, (t47*) &_stringLiteral330, NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		t47* L_9 = V_0;
		bool L_10 = m186(L_9, (t47*) &_stringLiteral331, NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		t47* L_11 = V_0;
		bool L_12 = m186(L_11, (t47*) &_stringLiteral332, NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t639_TI_var;
extern "C" t47* m3136 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t639_TI_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t47* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_0 = L_0;
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_1 = L_1;
		t7 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		m3137(NULL, L_2, (&V_0), (&V_1), NULL);
		t47* L_3 = V_0;
		t47* L_4 = V_1;
		t47* L_5 = m205(NULL, L_3, (t47*) &_stringLiteral55, L_4, NULL);
		return L_5;
	}
}
extern TypeInfo* t396_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t686_TI_var;
extern TypeInfo* t639_TI_var;
extern "C" void m3137 (t7 * __this , t7 * p0, t47** p1, t47** p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t686_TI_var = il2cpp_codegen_type_info_from_index(1039);
		t639_TI_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	t65 * V_0 = {0};
	t336 * V_1 = {0};
	t47* V_2 = {0};
	t47* V_3 = {0};
	t47* V_4 = {0};
	t686 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_1, (t47*) &_stringLiteral333, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t7 * L_2 = p0;
		V_0 = ((t65 *)IsInst(L_2, t65_TI_var));
		t65 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		t396 * L_4 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_4, (t47*) &_stringLiteral334, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		t65 * L_5 = V_0;
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		t65 * L_7 = V_0;
		t47* L_8 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		int32_t L_9 = m1741(L_8, NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		t336 * L_10 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_10, G_B7_0, NULL);
		V_1 = L_10;
		t47** L_11 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_12 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		*((t7 **)(L_11)) = (t7 *)L_12;
		t47* L_13 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		t47* L_14 = V_2;
		int32_t L_15 = m1741(L_14, NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		t65 * L_16 = V_0;
		t47* L_17 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		t65 * L_18 = V_0;
		t47* L_19 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		t47* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_21 = m205(NULL, L_19, (t47*) &_stringLiteral55, L_20, NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		t65 * L_22 = V_0;
		t347 * L_23 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		t47* L_24 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_25 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_4 = L_25;
		t65 * L_26 = V_0;
		t47* L_27 = (t47*)VirtFuncInvoker0< t47* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		t65 * L_28 = V_0;
		t47* L_29 = (t47*)VirtFuncInvoker0< t47* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		t47* L_30 = V_4;
		t47* L_31 = m3245(L_30, NULL);
		int32_t L_32 = m1741(L_31, NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		t47* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_34 = m207(NULL, L_33, (t47*) &_stringLiteral202, NULL);
		V_3 = L_34;
		t47* L_35 = V_3;
		t47* L_36 = V_4;
		t47* L_37 = m207(NULL, L_35, L_36, NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		t47** L_38 = p1;
		t47* L_39 = V_3;
		*((t7 **)(L_38)) = (t7 *)L_39;
		t65 * L_40 = V_0;
		t65 * L_41 = (t65 *)VirtFuncInvoker0< t65 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		t47* L_42 = V_3;
		t47* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_44 = m3342(NULL, (t47*) &_stringLiteral335, L_42, (t47*) &_stringLiteral55, L_43, NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		t65 * L_45 = V_0;
		t65 * L_46 = (t65 *)VirtFuncInvoker0< t65 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		t65 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		t336 * L_48 = V_1;
		t47* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_50 = m207(NULL, L_49, (t47*) &_stringLiteral55, NULL);
		m3305(L_48, L_50, NULL);
		t686 * L_51 = (t686 *)il2cpp_codegen_object_new (t686_TI_var);
		m3341(L_51, 1, 1, NULL);
		V_5 = L_51;
		t336 * L_52 = V_1;
		t686 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		t47* L_54 = m3139(NULL, L_53, NULL);
		m3305(L_52, L_54, NULL);
		t47** L_55 = p2;
		t336 * L_56 = V_1;
		t47* L_57 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_56);
		*((t7 **)(L_55)) = (t7 *)L_57;
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t639_TI_var;
extern "C" t47* m3138 (t7 * __this , t47* p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t639_TI_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	t48* V_0 = {0};
	t336 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t47* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		return L_1;
	}

IL_000c:
	{
		t47* L_2 = p0;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		t48* L_4 = m3343(L_2, L_3, NULL);
		V_0 = L_4;
		t47* L_5 = p0;
		int32_t L_6 = m1741(L_5, NULL);
		t336 * L_7 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_7, L_6, NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		t48* L_8 = V_0;
		int32_t L_9 = V_2;
		t48* L_10 = V_0;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		t47* L_13 = m3245((*(t47**)(t47**)SZArrayLdElema(L_10, L_12)), NULL);
		ArrayElementTypeCheck (L_8, L_13);
		*((t47**)(t47**)SZArrayLdElema(L_8, L_9)) = (t47*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		t48* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t52 *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		t48* L_17 = V_0;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		V_4 = (*(t47**)(t47**)SZArrayLdElema(L_17, L_19));
		t47* L_20 = V_4;
		int32_t L_21 = m1741(L_20, NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		t47* L_22 = V_4;
		uint16_t L_23 = m1754(L_22, 0, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		t47* L_24 = V_4;
		bool L_25 = m186(L_24, (t47*) &_stringLiteral336, NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = p1;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		t47* L_27 = V_4;
		bool L_28 = m186(L_27, (t47*) &_stringLiteral337, NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = p1;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		t48* L_31 = V_0;
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		t47* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		bool L_33 = m3135(NULL, L_32, NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		t48* L_34 = V_0;
		int32_t L_35 = V_3;
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		bool L_37 = m3135(NULL, (*(t47**)(t47**)SZArrayLdElema(L_34, L_36)), NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		t47* L_38 = V_4;
		int32_t L_39 = m3256(L_38, (t47*) &_stringLiteral338, NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		t47* L_41 = V_4;
		int32_t L_42 = V_5;
		t47* L_43 = m1755(L_41, 0, L_42, NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		t47* L_44 = V_4;
		int32_t L_45 = m3256(L_44, (t47*) &_stringLiteral339, NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		t47* L_46 = V_4;
		int32_t L_47 = m3256(L_46, (t47*) &_stringLiteral340, NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		t47* L_48 = V_4;
		int32_t L_49 = m3256(L_48, (t47*) &_stringLiteral341, NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = p1;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		t47* L_51 = V_4;
		bool L_52 = m186(L_51, (t47*) &_stringLiteral305, NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		t47* L_53 = V_4;
		bool L_54 = m3344(L_53, (t47*) &_stringLiteral306, NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		t47* L_55 = V_4;
		bool L_56 = m186(L_55, (t47*) &_stringLiteral342, NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		t47* L_57 = V_4;
		t47* L_58 = m1777(L_57, 0, 3, NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		t47* L_59 = V_4;
		int32_t L_60 = m3256(L_59, (t47*) &_stringLiteral343, NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		t47* L_62 = V_4;
		int32_t L_63 = V_6;
		int32_t L_64 = m3345(L_62, (t47*) &_stringLiteral306, L_63, NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		t47* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		t47* L_72 = m1777(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		t47* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_74 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		t47* L_75 = m3346(L_73, (t47*) &_stringLiteral344, L_74, NULL);
		V_4 = L_75;
		t47* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		t47* L_77 = ((t639_SFs*)t639_TI_var->static_fields)->f0;
		t47* L_78 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		t47* L_79 = m3346(L_76, L_77, L_78, NULL);
		V_4 = L_79;
		t47* L_80 = V_4;
		t47* L_81 = m3347(L_80, ((int32_t)92), ((int32_t)47), NULL);
		V_4 = L_81;
		t47* L_82 = V_4;
		int32_t L_83 = m3348(L_82, (t47*) &_stringLiteral345, NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		t47* L_85 = V_4;
		int32_t L_86 = V_8;
		t47* L_87 = m1777(L_85, L_86, 5, NULL);
		V_4 = L_87;
		t47* L_88 = V_4;
		int32_t L_89 = V_8;
		t47* L_90 = m1779(L_88, L_89, (t47*) &_stringLiteral346, NULL);
		V_4 = L_90;
		t47* L_91 = V_4;
		t47* L_92 = V_4;
		int32_t L_93 = m1741(L_92, NULL);
		t47* L_94 = m1779(L_91, L_93, (t47*) &_stringLiteral111, NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		t336 * L_95 = V_1;
		t47* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_97 = m207(NULL, L_96, (t47*) &_stringLiteral55, NULL);
		m3305(L_95, L_97, NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		t48* L_100 = V_0;
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((t52 *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		t336 * L_101 = V_1;
		t47* L_102 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_101);
		return L_102;
	}
}
extern TypeInfo* t336_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t639_TI_var;
extern "C" t47* m3139 (t7 * __this , t686 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t639_TI_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	int32_t V_1 = 0;
	t745 * V_2 = {0};
	t722 * V_3 = {0};
	t347 * V_4 = {0};
	t47* V_5 = {0};
	int32_t V_6 = 0;
	t736* V_7 = {0};
	bool V_8 = false;
	t47* V_9 = {0};
	int32_t V_10 = 0;
	{
		t336 * L_0 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_0, ((int32_t)255), NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		t686 * L_1 = p0;
		int32_t L_2 = V_1;
		t745 * L_3 = (t745 *)VirtFuncInvoker1< t745 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		t745 * L_4 = V_2;
		t722 * L_5 = (t722 *)VirtFuncInvoker0< t722 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		t722 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		t722 * L_7 = V_3;
		t347 * L_8 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		t347 * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		t347 * L_10 = V_4;
		t47* L_11 = (t47*)VirtFuncInvoker0< t47* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		t47* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		t47* L_13 = V_5;
		int32_t L_14 = m1741(L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		t336 * L_15 = V_0;
		t47* L_16 = V_5;
		m3305(L_15, L_16, NULL);
		t336 * L_17 = V_0;
		m3305(L_17, (t47*) &_stringLiteral103, NULL);
	}

IL_0071:
	{
		t336 * L_18 = V_0;
		t347 * L_19 = V_4;
		t47* L_20 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		m3305(L_18, L_20, NULL);
		t336 * L_21 = V_0;
		m3305(L_21, (t47*) &_stringLiteral304, NULL);
		t336 * L_22 = V_0;
		t722 * L_23 = V_3;
		t47* L_24 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		m3305(L_22, L_24, NULL);
		t336 * L_25 = V_0;
		m3305(L_25, (t47*) &_stringLiteral347, NULL);
		V_6 = 0;
		t722 * L_26 = V_3;
		t736* L_27 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		t336 * L_29 = V_0;
		m3305(L_29, (t47*) &_stringLiteral36, NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		t336 * L_30 = V_0;
		t736* L_31 = V_7;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		t347 * L_34 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(t733 **)(t733 **)SZArrayLdElema(L_31, L_33)));
		t47* L_35 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		m3305(L_30, L_35, NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		t736* L_38 = V_7;
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((t52 *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		t336 * L_39 = V_0;
		m3305(L_39, (t47*) &_stringLiteral111, NULL);
		t745 * L_40 = V_2;
		t47* L_41 = (t47*)VirtFuncInvoker0< t47* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		t47* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		t347 * L_43 = V_4;
		t47* L_44 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_45 = m185(NULL, L_44, (t47*) &_stringLiteral348, NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		t347 * L_46 = V_4;
		t47* L_47 = (t47*)VirtFuncInvoker0< t47* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_48 = m185(NULL, L_47, (t47*) &_stringLiteral349, NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		t336 * L_49 = V_0;
		m3305(L_49, (t47*) &_stringLiteral346, NULL);
		t47* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		t47* L_51 = ((t639_SFs*)t639_TI_var->static_fields)->f0;
		bool L_52 = m186(L_50, L_51, NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		t47* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(t639_TI_var);
		t47* L_54 = ((t639_SFs*)t639_TI_var->static_fields)->f0;
		int32_t L_55 = m1741(L_54, NULL);
		t47* L_56 = V_9;
		int32_t L_57 = m1741(L_56, NULL);
		t47* L_58 = ((t639_SFs*)t639_TI_var->static_fields)->f0;
		int32_t L_59 = m1741(L_58, NULL);
		t47* L_60 = m1755(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		t336 * L_61 = V_0;
		t47* L_62 = V_9;
		m3305(L_61, L_62, NULL);
		t336 * L_63 = V_0;
		m3305(L_63, (t47*) &_stringLiteral304, NULL);
		t336 * L_64 = V_0;
		t745 * L_65 = V_2;
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		t47* L_67 = m3260((&V_10), NULL);
		m3305(L_64, L_67, NULL);
		t336 * L_68 = V_0;
		m3305(L_68, (t47*) &_stringLiteral111, NULL);
	}

IL_01b9:
	{
		t336 * L_69 = V_0;
		m3305(L_69, (t47*) &_stringLiteral55, NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		t686 * L_72 = p0;
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		t336 * L_74 = V_0;
		t47* L_75 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_74);
		return L_75;
	}
}
#include "t373.h"
#ifndef _MSC_VER
#else
#endif
#include "t373MD.h"



extern "C" void m3140 (t373 * __this, const MethodInfo* method)
{
	{
		m3349(__this, (t47*) &_stringLiteral350, NULL);
		m3350(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
extern "C" void m3141 (t373 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m3349(__this, L_0, NULL);
		m3350(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
extern "C" void m3142 (t373 * __this, t47* p0, t65 * p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t65 * L_1 = p1;
		m3351(__this, L_0, L_1, NULL);
		m3350(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
#include "t82.h"
#ifndef _MSC_VER
#else
#endif
#include "t82MD.h"



extern "C" void m3143 (t82 * __this, const MethodInfo* method)
{
	{
		m3349(__this, (t47*) &_stringLiteral350, NULL);
		m3350(__this, ((int32_t)-2147467261), NULL);
		return;
	}
}
#include "t640.h"
#ifndef _MSC_VER
#else
#endif
#include "t640MD.h"



extern "C" void m3144 (t640 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t641.h"
#ifndef _MSC_VER
#else
#endif
#include "t641MD.h"

#include "t329.h"
#include "t558.h"
#include "t491MD.h"


extern "C" void m3145 (t641 * __this, const MethodInfo* method)
{
	{
		m2173(__this, NULL);
		return;
	}
}
extern "C" void m3146 (t641 * __this, t329 * p0, t558  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3147 (t641 * __this, t329 * p0, t558  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3148 (t641 * __this, t329 * p0, t558  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3149 (t641 * __this, t329 * p0, t558  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3150 (t641 * __this, t329 * p0, t558  p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3151 (t641 * __this, t329 * p0, int32_t p1, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3152 (t641 * __this, t329 * p0, int32_t p1, const MethodInfo* method)
{
	{
		return;
	}
}
#include "t642.h"
#ifndef _MSC_VER
#else
#endif
#include "t642MD.h"



#include "t643.h"
#ifndef _MSC_VER
#else
#endif
#include "t643MD.h"



#include "t376.h"
#ifndef _MSC_VER
#else
#endif
#include "t376MD.h"

#include "t377.h"
#include "t511.h"
#include "t74.h"
#include "t284.h"
#include "t377MD.h"
#include "t511MD.h"
#include "t74MD.h"
#include "t284MD.h"
#include "t518MD.h"


extern TypeInfo* t377_TI_var;
extern TypeInfo* t511_TI_var;
extern "C" void m1745 (t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t377_TI_var = il2cpp_codegen_type_info_from_index(293);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		t377 * L_0 = (t377 *)il2cpp_codegen_object_new (t377_TI_var);
		m2338(L_0, NULL);
		__this->f3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_1 = m2385(NULL, NULL);
		__this->f4 = L_1;
		t74  L_2 = m1493(NULL, NULL);
		__this->f10 = L_2;
		__this->f18 = (-1);
		m162(__this, NULL);
		return;
	}
}
extern "C" void m3153 (t376 * __this, const MethodInfo* method)
{
	{
		__this->f7 = 0;
		__this->f18 = (-1);
		return;
	}
}
extern "C" void m1749 (t376 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->f1 = L_1;
		int32_t L_2 = V_0;
		__this->f0 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		m3154(__this, NULL);
	}

IL_0026:
	{
		__this->f9 = 1;
		return;
	}
}
extern "C" void m3154 (t376 * __this, const MethodInfo* method)
{
	{
		__this->f0 = 0;
		t377 * L_0 = (__this->f3);
		t47* L_1 = m1747(L_0, NULL);
		int32_t L_2 = m1741(L_1, NULL);
		__this->f1 = L_2;
		m3153(__this, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" bool m3155 (t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t377 * L_0 = (__this->f3);
		t47* L_1 = m1747(L_0, NULL);
		int32_t L_2 = m1741(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = (__this->f0);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->f0 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->f1);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->f1 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->f0);
		int32_t L_10 = (__this->f1);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->f0);
		int32_t L_12 = (__this->f1);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		t377 * L_13 = (__this->f3);
		t377 * L_14 = (__this->f3);
		t47* L_15 = m1747(L_14, NULL);
		int32_t L_16 = (__this->f0);
		t47* L_17 = m1755(L_15, 0, L_16, NULL);
		t377 * L_18 = (__this->f3);
		t47* L_19 = m1747(L_18, NULL);
		int32_t L_20 = (__this->f1);
		t377 * L_21 = (__this->f3);
		t47* L_22 = m1747(L_21, NULL);
		int32_t L_23 = m1741(L_22, NULL);
		int32_t L_24 = (__this->f1);
		t47* L_25 = m1755(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_26 = m207(NULL, L_17, L_25, NULL);
		m2340(L_13, L_26, NULL);
		int32_t L_27 = (__this->f0);
		__this->f1 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		t377 * L_28 = (__this->f3);
		t377 * L_29 = (__this->f3);
		t47* L_30 = m1747(L_29, NULL);
		int32_t L_31 = (__this->f1);
		t47* L_32 = m1755(L_30, 0, L_31, NULL);
		t377 * L_33 = (__this->f3);
		t47* L_34 = m1747(L_33, NULL);
		int32_t L_35 = (__this->f0);
		t377 * L_36 = (__this->f3);
		t47* L_37 = m1747(L_36, NULL);
		int32_t L_38 = m1741(L_37, NULL);
		int32_t L_39 = (__this->f0);
		t47* L_40 = m1755(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_41 = m207(NULL, L_32, L_40, NULL);
		m2340(L_28, L_41, NULL);
		int32_t L_42 = (__this->f1);
		__this->f0 = L_42;
	}

IL_0120:
	{
		m3153(__this, NULL);
		return 1;
	}
}
extern "C" void m3156 (t376 * __this, t47* p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m3155(__this, NULL);
		t377 * L_0 = (__this->f3);
		t377 * L_1 = (__this->f3);
		t47* L_2 = m1747(L_1, NULL);
		int32_t L_3 = (__this->f0);
		t47* L_4 = p0;
		t47* L_5 = m1779(L_2, L_3, L_4, NULL);
		m2340(L_0, L_5, NULL);
		int32_t L_6 = (__this->f0);
		t47* L_7 = p0;
		int32_t L_8 = m1741(L_7, NULL);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->f0 = L_9;
		int32_t L_10 = V_0;
		__this->f1 = L_10;
		m3153(__this, NULL);
		m3157(__this, NULL);
		__this->f11 = 1;
		return;
	}
}
extern "C" void m3157 (t376 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	t219  V_1 = {0};
	t74  V_2 = {0};
	t74  V_3 = {0};
	t74 * G_B17_0 = {0};
	t74 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	t74 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		t511 * L_1 = (__this->f4);
		t219 * L_2 = &(__this->f5);
		float L_3 = m1619(L_2, NULL);
		t219 * L_4 = &(__this->f5);
		float L_5 = m1620(L_4, NULL);
		t219  L_6 = {0};
		m1826(&L_6, (0.0f), (0.0f), L_3, L_5, NULL);
		t377 * L_7 = (__this->f3);
		int32_t L_8 = V_0;
		t74  L_9 = m2386(L_1, L_6, L_7, L_8, NULL);
		__this->f12 = L_9;
		t511 * L_10 = (__this->f4);
		t284 * L_11 = m2374(L_10, NULL);
		t219  L_12 = (__this->f5);
		t219  L_13 = m2361(L_11, L_12, NULL);
		V_1 = L_13;
		t511 * L_14 = (__this->f4);
		t377 * L_15 = (__this->f3);
		t74  L_16 = m2389(L_14, L_15, NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->f1);
		t511 * L_18 = (__this->f4);
		t377 * L_19 = (__this->f3);
		t219 * L_20 = &(__this->f5);
		float L_21 = m1619(L_20, NULL);
		float L_22 = m2391(L_18, L_19, L_21, NULL);
		m1500((&V_2), L_17, L_22, NULL);
		float L_23 = ((&V_2)->f1);
		t219 * L_24 = &(__this->f5);
		float L_25 = m1619(L_24, NULL);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		t74 * L_26 = &(__this->f10);
		L_26->f1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		t74 * L_27 = &(__this->f12);
		float L_28 = (L_27->f1);
		t74 * L_29 = &(__this->f10);
		float L_30 = (L_29->f1);
		float L_31 = m1619((&V_1), NULL);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		t74 * L_32 = &(__this->f10);
		t74 * L_33 = &(__this->f12);
		float L_34 = (L_33->f1);
		float L_35 = m1619((&V_1), NULL);
		L_32->f1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		t74 * L_36 = &(__this->f12);
		float L_37 = (L_36->f1);
		t74 * L_38 = &(__this->f10);
		float L_39 = (L_38->f1);
		t511 * L_40 = (__this->f4);
		t284 * L_41 = m2374(L_40, NULL);
		int32_t L_42 = m1937(L_41, NULL);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		t74 * L_43 = &(__this->f10);
		t74 * L_44 = &(__this->f12);
		float L_45 = (L_44->f1);
		t511 * L_46 = (__this->f4);
		t284 * L_47 = m2374(L_46, NULL);
		int32_t L_48 = m1937(L_47, NULL);
		L_43->f1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->f2);
		float L_50 = m1620((&V_1), NULL);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		t74 * L_51 = &(__this->f10);
		L_51->f2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		t74 * L_52 = &(__this->f12);
		float L_53 = (L_52->f2);
		t511 * L_54 = (__this->f4);
		float L_55 = m2383(L_54, NULL);
		t74 * L_56 = &(__this->f10);
		float L_57 = (L_56->f2);
		float L_58 = m1620((&V_1), NULL);
		t511 * L_59 = (__this->f4);
		t284 * L_60 = m2374(L_59, NULL);
		int32_t L_61 = m1938(L_60, NULL);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		t74 * L_62 = &(__this->f10);
		t74 * L_63 = &(__this->f12);
		float L_64 = (L_63->f2);
		float L_65 = m1620((&V_1), NULL);
		t511 * L_66 = (__this->f4);
		t284 * L_67 = m2374(L_66, NULL);
		int32_t L_68 = m1938(L_67, NULL);
		t511 * L_69 = (__this->f4);
		float L_70 = m2383(L_69, NULL);
		L_62->f2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		t74 * L_71 = &(__this->f12);
		float L_72 = (L_71->f2);
		t74 * L_73 = &(__this->f10);
		float L_74 = (L_73->f2);
		t511 * L_75 = (__this->f4);
		t284 * L_76 = m2374(L_75, NULL);
		int32_t L_77 = m1938(L_76, NULL);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		t74 * L_78 = &(__this->f10);
		t74 * L_79 = &(__this->f12);
		float L_80 = (L_79->f2);
		t511 * L_81 = (__this->f4);
		t284 * L_82 = m2374(L_81, NULL);
		int32_t L_83 = m1938(L_82, NULL);
		L_78->f2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		t74 * L_84 = &(__this->f10);
		float L_85 = (L_84->f2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->f2);
		t74 * L_87 = &(__this->f10);
		float L_88 = (L_87->f2);
		float L_89 = m1620((&V_1), NULL);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		t74 * L_90 = &(__this->f10);
		float L_91 = ((&V_2)->f2);
		float L_92 = m1620((&V_1), NULL);
		t511 * L_93 = (__this->f4);
		t284 * L_94 = m2374(L_93, NULL);
		int32_t L_95 = m1938(L_94, NULL);
		t511 * L_96 = (__this->f4);
		t284 * L_97 = m2374(L_96, NULL);
		int32_t L_98 = m2359(L_97, NULL);
		L_90->f2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		t74 * L_99 = &(__this->f10);
		t74 * L_100 = &(__this->f10);
		float L_101 = (L_100->f2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		t74 * L_102 = &(__this->f10);
		float L_103 = (L_102->f2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->f2 = G_B18_0;
		return;
	}
}
extern TypeInfo* t518_TI_var;
extern "C" void m1750 (t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = (__this->f0);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->f8);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->f0);
		int32_t L_4 = (__this->f1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		t377 * L_5 = (__this->f3);
		t47* L_6 = m1747(L_5, NULL);
		int32_t L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		int32_t L_9 = (__this->f0);
		t47* L_10 = m1755(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), NULL);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		t377 * L_11 = (__this->f3);
		t47* L_12 = m1747(L_11, NULL);
		int32_t L_13 = (__this->f1);
		int32_t L_14 = (__this->f0);
		int32_t L_15 = (__this->f1);
		t47* L_16 = m1755(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), NULL);
		V_0 = L_16;
	}

IL_007c:
	{
		t47* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		m2270(NULL, L_17, NULL);
		return;
	}
}
extern "C" t47* m3158 (t7 * __this , t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t47* L_1 = m3346(L_0, (t47*) &_stringLiteral208, (t47*) &_stringLiteral130, NULL);
		p0 = L_1;
		t47* L_2 = p0;
		t47* L_3 = m3347(L_2, ((int32_t)10), ((int32_t)32), NULL);
		p0 = L_3;
		t47* L_4 = p0;
		t47* L_5 = m3347(L_4, ((int32_t)13), ((int32_t)32), NULL);
		p0 = L_5;
		t47* L_6 = p0;
		return L_6;
	}
}
extern TypeInfo* t518_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" bool m1746 (t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		t47* L_0 = m2269(NULL, NULL);
		V_0 = L_0;
		t47* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		bool L_3 = m1753(NULL, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->f6);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		t47* L_5 = V_0;
		t47* L_6 = m3158(NULL, L_5, NULL);
		V_0 = L_6;
	}

IL_0028:
	{
		t47* L_7 = V_0;
		m3156(__this, L_7, NULL);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
#include "t330.h"
#ifndef _MSC_VER
#else
#endif
#include "t330MD.h"

#include "t157.h"
#include "t335.h"
#include "t132.h"
#include "t172.h"
#include "t173.h"
#include "t174.h"
#include "t175.h"
#include "t171.h"
#include "t335MD.h"
#include "t132MD.h"


extern TypeInfo* t335_TI_var;
extern "C" bool m3159 (t330 * __this, t157  p0, t157  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t335_TI_var = il2cpp_codegen_type_info_from_index(891);
		s_Il2CppMethodIntialized = true;
	}
	t335  V_0 = {0};
	t335  V_1 = {0};
	{
		t157  L_0 = p0;
		t335  L_1 = m1627(NULL, L_0, NULL);
		V_0 = L_1;
		t157  L_2 = p1;
		t335  L_3 = m1627(NULL, L_2, NULL);
		V_1 = L_3;
		t335  L_4 = V_0;
		t335  L_5 = L_4;
		t7 * L_6 = Box(t335_TI_var, &L_5);
		t335  L_7 = V_1;
		t335  L_8 = L_7;
		t7 * L_9 = Box(t335_TI_var, &L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_6, L_9);
		return L_10;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" bool m3160 (t330 * __this, t74  p0, t74  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		bool L_2 = m1544(NULL, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		bool L_5 = m1544(NULL, L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" bool m3161 (t330 * __this, t330  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		t157  L_0 = (__this->f1);
		t157  L_1 = ((&p0)->f1);
		bool L_2 = m3159(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		int32_t L_4 = ((&p0)->f2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->f5);
		float L_6 = ((&p0)->f5);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		bool L_7 = m1544(NULL, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->f9);
		int32_t L_9 = ((&p0)->f9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->f10);
		int32_t L_11 = ((&p0)->f10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->f3);
		float L_13 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		bool L_14 = m1544(NULL, L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->f6);
		int32_t L_16 = ((&p0)->f6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->f4);
		bool L_18 = ((&p0)->f4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->f7);
		int32_t L_20 = ((&p0)->f7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->f8);
		bool L_22 = ((&p0)->f8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->f9);
		int32_t L_24 = ((&p0)->f9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->f10);
		int32_t L_26 = ((&p0)->f10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->f8);
		bool L_28 = ((&p0)->f8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->f11);
		bool L_30 = ((&p0)->f11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->f13);
		int32_t L_32 = ((&p0)->f13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->f12);
		int32_t L_34 = ((&p0)->f12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		t74  L_35 = (__this->f14);
		t74  L_36 = ((&p0)->f14);
		bool L_37 = m3160(__this, L_35, L_36, NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		t74  L_38 = (__this->f15);
		t74  L_39 = ((&p0)->f15);
		bool L_40 = m3160(__this, L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		t171 * L_41 = (__this->f0);
		t171 * L_42 = ((&p0)->f0);
		bool L_43 = m206(NULL, L_41, L_42, NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
#include "t562.h"
#ifndef _MSC_VER
#else
#endif
#include "t562MD.h"

#include "t226.h"
#include "t226MD.h"


extern TypeInfo* t562_TI_var;
extern "C" bool m3162 (t562 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t562_TI_var = il2cpp_codegen_type_info_from_index(1040);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		bool L_1 = m3164(NULL, ((t562 *)IsInst(L_0, t562_TI_var)), __this, NULL);
		return L_1;
	}
}
extern "C" int32_t m3163 (t562 * __this, const MethodInfo* method)
{
	{
		t226 L_0 = (__this->f0);
		int32_t L_1 = m3352(NULL, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t226_TI_var;
extern "C" bool m3164 (t7 * __this , t562 * p0, t562 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t226_TI_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t7 * V_1 = {0};
	{
		t562 * L_0 = p0;
		V_0 = L_0;
		t562 * L_1 = p1;
		V_1 = L_1;
		t7 * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		t7 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		t7 * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		t562 * L_5 = p0;
		t226 L_6 = (L_5->f0);
		t226 L_7 = ((t226_SFs*)t226_TI_var->static_fields)->f1;
		bool L_8 = m3353(NULL, L_6, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		t7 * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		t562 * L_10 = p1;
		t226 L_11 = (L_10->f0);
		t226 L_12 = ((t226_SFs*)t226_TI_var->static_fields)->f1;
		bool L_13 = m3353(NULL, L_11, L_12, NULL);
		return L_13;
	}

IL_0040:
	{
		t562 * L_14 = p0;
		t226 L_15 = (L_14->f0);
		t562 * L_16 = p1;
		t226 L_17 = (L_16->f0);
		bool L_18 = m3353(NULL, L_15, L_17, NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void t562_marshal(const t562& unmarshaled, t562_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t562_marshal_back(const t562_marshaled& marshaled, t562& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void t562_marshal_cleanup(t562_marshaled& marshaled)
{
}
#include "t645.h"
#ifndef _MSC_VER
#else
#endif
#include "t645MD.h"



#include "t646.h"
#ifndef _MSC_VER
#else
#endif
#include "t646MD.h"

#include "t746MD.h"


extern "C" void m3165 (t646 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t66 * m3166 (t646 * __this, const MethodInfo* method)
{
	{
		t66 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t47* m3167 (t646 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m3168 (t646 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" float m3169 (t646 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t47* m3170 (t646 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" bool m3171 (t646 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t746_TI_var;
extern "C" void m3172 (t646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t746_TI_var = il2cpp_codegen_type_info_from_index(1041);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_1 = m1783(NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		t47* L_2 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		IL2CPP_RUNTIME_CLASS_INIT(t746_TI_var);
		t47* L_4 = m3354(NULL, L_2, (t47*) &_stringLiteral351, L_3, NULL);
		__this->f1 = L_4;
		t47* L_5 = (__this->f1);
		t47* L_6 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		t47* L_7 = m3354(NULL, L_5, (t47*) &_stringLiteral352, L_6, NULL);
		__this->f1 = L_7;
		t47* L_8 = (__this->f1);
		t47* L_9 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		t47* L_10 = m3354(NULL, L_8, (t47*) &_stringLiteral353, L_9, NULL);
		__this->f1 = L_10;
		return;
	}
}
extern "C" void m3173 (t646 * __this, const MethodInfo* method)
{
	{
		m3172(__this, NULL);
		return;
	}
}
extern "C" void m3174 (t646 * __this, const MethodInfo* method)
{
	{
		m3172(__this, NULL);
		return;
	}
}
#include "t647.h"
#ifndef _MSC_VER
#else
#endif
#include "t647MD.h"

#include "t614.h"
#include "t708.h"
#include "t361.h"
#include "t708MD.h"
#include "t361MD.h"


extern "C" void m3175 (t647 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern "C" void m3176 (t647 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral354, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		t614 * L_2 = p1;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_3, (t47*) &_stringLiteral355, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
extern "C" bool m3177 (t7 * __this , t361 * p0, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t361 * L_0 = p0;
		t614 * L_1 = m3355(L_0, NULL);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t361 * L_3 = p0;
		t7 * L_4 = m3356(L_3, NULL);
		G_B3_0 = ((((int32_t)((((t7*)(t7 *)L_4) == ((t7*)(t7 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
#include "t648.h"
#ifndef _MSC_VER
#else
#endif
#include "t648MD.h"

#include "t185.h"
#include "t359.h"
#include "t185MD.h"


extern const Il2CppType* t185_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t185_TI_var;
extern "C" void m3178 (t648 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t185_0_0_0_var = il2cpp_codegen_type_from_index(264);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t185_TI_var = il2cpp_codegen_type_info_from_index(264);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		m3176(__this, L_0, L_1, NULL);
		t185 * L_2 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_3 = m1613(NULL, LoadTypeToken(t185_0_0_0_var), NULL);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		t361 * L_6 = m3357(NULL, L_3, L_4, L_5, NULL);
		t361 * L_7 = m1639(NULL, L_2, ((t185 *)IsInst(L_6, t185_TI_var)), NULL);
		__this->f0 = ((t185 *)Castclass(L_7, t185_TI_var));
		return;
	}
}
extern "C" void m3179 (t648 * __this, t69* p0, const MethodInfo* method)
{
	{
		t185 * L_0 = (__this->f0);
		bool L_1 = m3177(NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		t185 * L_2 = (__this->f0);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Events.UnityAction::Invoke() */, L_2);
	}

IL_001b:
	{
		return;
	}
}
extern "C" bool m3180 (t648 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t185 * L_0 = (__this->f0);
		t7 * L_1 = m3356(L_0, NULL);
		t7 * L_2 = p0;
		if ((!(((t7*)(t7 *)L_1) == ((t7*)(t7 *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		t185 * L_3 = (__this->f0);
		t614 * L_4 = m3355(L_3, NULL);
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
#include "t649.h"
#ifndef _MSC_VER
#else
#endif
#include "t649MD.h"



#include "t650.h"
#ifndef _MSC_VER
#else
#endif
#include "t650MD.h"

#include "t655.h"
#include "t747.h"
#include "t748.h"
#include "t749.h"
#include "t750.h"
#include "t612.h"
#include "t655MD.h"
#include "t747MD.h"
#include "t748MD.h"
#include "t749MD.h"
#include "t750MD.h"
#include "t612MD.h"


extern TypeInfo* t646_TI_var;
extern "C" void m3181 (t650 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t646_TI_var = il2cpp_codegen_type_info_from_index(1042);
		s_Il2CppMethodIntialized = true;
	}
	{
		t646 * L_0 = (t646 *)il2cpp_codegen_object_new (t646_TI_var);
		m3165(L_0, NULL);
		__this->f3 = L_0;
		__this->f4 = 2;
		m162(__this, NULL);
		return;
	}
}
extern "C" t66 * m3182 (t650 * __this, const MethodInfo* method)
{
	{
		t66 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t47* m3183 (t650 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m3184 (t650 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t646 * m3185 (t650 * __this, const MethodInfo* method)
{
	{
		t646 * L_0 = (__this->f3);
		return L_0;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" bool m3186 (t650 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		t66 * L_0 = m3182(__this, NULL);
		bool L_1 = m170(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t47* L_2 = m3183(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_3 = m1783(NULL, L_2, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
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
extern TypeInfo* t747_TI_var;
extern TypeInfo* t748_TI_var;
extern TypeInfo* t749_TI_var;
extern TypeInfo* t750_TI_var;
extern TypeInfo* t648_TI_var;
extern const MethodInfo* m3358_MI_var;
extern const MethodInfo* m3359_MI_var;
extern const MethodInfo* m3360_MI_var;
extern const MethodInfo* m3361_MI_var;
extern "C" t647 * m3187 (t650 * __this, t655 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t747_TI_var = il2cpp_codegen_type_info_from_index(1043);
		t748_TI_var = il2cpp_codegen_type_info_from_index(1044);
		t749_TI_var = il2cpp_codegen_type_info_from_index(1045);
		t750_TI_var = il2cpp_codegen_type_info_from_index(1046);
		t648_TI_var = il2cpp_codegen_type_info_from_index(1047);
		m3358_MI_var = il2cpp_codegen_method_info_from_index(2147483943);
		m3359_MI_var = il2cpp_codegen_method_info_from_index(2147483944);
		m3360_MI_var = il2cpp_codegen_method_info_from_index(2147483945);
		m3361_MI_var = il2cpp_codegen_method_info_from_index(2147483946);
		s_Il2CppMethodIntialized = true;
	}
	t614 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t655 * L_1 = p0;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (t647 *)NULL;
	}

IL_0013:
	{
		t655 * L_2 = p0;
		t614 * L_3 = m3198(L_2, __this, NULL);
		V_0 = L_3;
		t614 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (t647 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->f2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		t655 * L_7 = p0;
		t66 * L_8 = m3182(__this, NULL);
		t614 * L_9 = V_0;
		t647 * L_10 = (t647 *)VirtFuncInvoker2< t647 *, t7 *, t614 * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		t66 * L_11 = m3182(__this, NULL);
		t614 * L_12 = V_0;
		t646 * L_13 = (__this->f3);
		t647 * L_14 = m3188(NULL, L_11, L_12, L_13, NULL);
		return L_14;
	}

IL_0072:
	{
		t66 * L_15 = m3182(__this, NULL);
		t614 * L_16 = V_0;
		t646 * L_17 = (__this->f3);
		float L_18 = m3169(L_17, NULL);
		t747 * L_19 = (t747 *)il2cpp_codegen_object_new (t747_TI_var);
		m3358(L_19, L_15, L_16, L_18, m3358_MI_var);
		return L_19;
	}

IL_008a:
	{
		t66 * L_20 = m3182(__this, NULL);
		t614 * L_21 = V_0;
		t646 * L_22 = (__this->f3);
		int32_t L_23 = m3168(L_22, NULL);
		t748 * L_24 = (t748 *)il2cpp_codegen_object_new (t748_TI_var);
		m3359(L_24, L_20, L_21, L_23, m3359_MI_var);
		return L_24;
	}

IL_00a2:
	{
		t66 * L_25 = m3182(__this, NULL);
		t614 * L_26 = V_0;
		t646 * L_27 = (__this->f3);
		t47* L_28 = m3170(L_27, NULL);
		t749 * L_29 = (t749 *)il2cpp_codegen_object_new (t749_TI_var);
		m3360(L_29, L_25, L_26, L_28, m3360_MI_var);
		return L_29;
	}

IL_00ba:
	{
		t66 * L_30 = m3182(__this, NULL);
		t614 * L_31 = V_0;
		t646 * L_32 = (__this->f3);
		bool L_33 = m3171(L_32, NULL);
		t750 * L_34 = (t750 *)il2cpp_codegen_object_new (t750_TI_var);
		m3361(L_34, L_30, L_31, L_33, m3361_MI_var);
		return L_34;
	}

IL_00d2:
	{
		t66 * L_35 = m3182(__this, NULL);
		t614 * L_36 = V_0;
		t648 * L_37 = (t648 *)il2cpp_codegen_object_new (t648_TI_var);
		m3178(L_37, L_35, L_36, NULL);
		return L_37;
	}

IL_00df:
	{
		return (t647 *)NULL;
	}
}
extern const Il2CppType* t66_0_0_0_var;
extern const Il2CppType* t751_0_0_0_var;
extern const Il2CppType* t614_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t607_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t647_TI_var;
extern "C" t647 * m3188 (t7 * __this , t66 * p0, t614 * p1, t646 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t66_0_0_0_var = il2cpp_codegen_type_from_index(231);
		t751_0_0_0_var = il2cpp_codegen_type_from_index(1048);
		t614_0_0_0_var = il2cpp_codegen_type_from_index(1049);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t647_TI_var = il2cpp_codegen_type_info_from_index(1050);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * V_1 = {0};
	t347 * V_2 = {0};
	t612 * V_3 = {0};
	t66 * V_4 = {0};
	t347 * G_B3_0 = {0};
	t347 * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, LoadTypeToken(t66_0_0_0_var), NULL);
		V_0 = L_0;
		t646 * L_1 = p2;
		t47* L_2 = m3167(L_1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_3 = m1783(NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		t646 * L_4 = p2;
		t47* L_5 = m3167(L_4, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_6 = m3362(NULL, L_5, 0, NULL);
		t347 * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_8 = m1613(NULL, LoadTypeToken(t66_0_0_0_var), NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_9 = m1613(NULL, LoadTypeToken(t751_0_0_0_var), NULL);
		V_1 = L_9;
		t347 * L_10 = V_1;
		t607* L_11 = ((t607*)SZArrayNew(t607_TI_var, 1));
		t347 * L_12 = V_0;
		ArrayElementTypeCheck (L_11, L_12);
		*((t347 **)(t347 **)SZArrayLdElema(L_11, 0)) = (t347 *)L_12;
		t347 * L_13 = (t347 *)VirtFuncInvoker1< t347 *, t607* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		t347 * L_14 = V_2;
		t607* L_15 = ((t607*)SZArrayNew(t607_TI_var, 3));
		t347 * L_16 = m1613(NULL, LoadTypeToken(t66_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_15, L_16);
		*((t347 **)(t347 **)SZArrayLdElema(L_15, 0)) = (t347 *)L_16;
		t607* L_17 = L_15;
		t347 * L_18 = m1613(NULL, LoadTypeToken(t614_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_17, L_18);
		*((t347 **)(t347 **)SZArrayLdElema(L_17, 1)) = (t347 *)L_18;
		t607* L_19 = L_17;
		t347 * L_20 = V_0;
		ArrayElementTypeCheck (L_19, L_20);
		*((t347 **)(t347 **)SZArrayLdElema(L_19, 2)) = (t347 *)L_20;
		t612 * L_21 = (t612 *)VirtFuncInvoker1< t612 *, t607* >::Invoke(68 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		t646 * L_22 = p2;
		t66 * L_23 = m3166(L_22, NULL);
		V_4 = L_23;
		t66 * L_24 = V_4;
		bool L_25 = m170(NULL, L_24, (t66 *)NULL, NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		t347 * L_26 = V_0;
		t66 * L_27 = V_4;
		t347 * L_28 = m1520(L_27, NULL);
		bool L_29 = (bool)VirtFuncInvoker1< bool, t347 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (t66 *)NULL;
	}

IL_00aa:
	{
		t612 * L_30 = V_3;
		t69* L_31 = ((t69*)SZArrayNew(t69_TI_var, 3));
		t66 * L_32 = p0;
		ArrayElementTypeCheck (L_31, L_32);
		*((t7 **)(t7 **)SZArrayLdElema(L_31, 0)) = (t7 *)L_32;
		t69* L_33 = L_31;
		t614 * L_34 = p1;
		ArrayElementTypeCheck (L_33, L_34);
		*((t7 **)(t7 **)SZArrayLdElema(L_33, 1)) = (t7 *)L_34;
		t69* L_35 = L_33;
		t66 * L_36 = V_4;
		ArrayElementTypeCheck (L_35, L_36);
		*((t7 **)(t7 **)SZArrayLdElema(L_35, 2)) = (t7 *)L_36;
		t7 * L_37 = m3334(L_30, L_35, NULL);
		return ((t647 *)IsInst(L_37, t647_TI_var));
	}
}
#include "t651.h"
#ifndef _MSC_VER
#else
#endif
#include "t651MD.h"

#include "t652.h"
#include "t653.h"
#include "t752.h"
#include "t652MD.h"
#include "t752MD.h"
#include "t653MD.h"


extern TypeInfo* t652_TI_var;
extern const MethodInfo* m3363_MI_var;
extern "C" void m3189 (t651 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t652_TI_var = il2cpp_codegen_type_info_from_index(1052);
		m3363_MI_var = il2cpp_codegen_method_info_from_index(2147483947);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t652 * L_0 = (t652 *)il2cpp_codegen_object_new (t652_TI_var);
		m3363(L_0, m3363_MI_var);
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t752_TI_var;
extern TypeInfo* t88_TI_var;
extern const MethodInfo* m3364_MI_var;
extern const MethodInfo* m3365_MI_var;
extern const MethodInfo* m3366_MI_var;
extern "C" void m3190 (t651 * __this, t653 * p0, t655 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t752_TI_var = il2cpp_codegen_type_info_from_index(1053);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		m3364_MI_var = il2cpp_codegen_method_info_from_index(2147483948);
		m3365_MI_var = il2cpp_codegen_method_info_from_index(2147483949);
		m3366_MI_var = il2cpp_codegen_method_info_from_index(2147483950);
		s_Il2CppMethodIntialized = true;
	}
	t650 * V_0 = {0};
	t752  V_1 = {0};
	t647 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t652 * L_0 = (__this->f0);
		t752  L_1 = m3364(L_0, m3364_MI_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			t650 * L_2 = m3365((&V_1), m3365_MI_var);
			V_0 = L_2;
			t650 * L_3 = V_0;
			bool L_4 = m3186(L_3, NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			t650 * L_5 = V_0;
			t655 * L_6 = p1;
			t647 * L_7 = m3187(L_5, L_6, NULL);
			V_2 = L_7;
			t647 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			t653 * L_9 = p0;
			t647 * L_10 = V_2;
			m3192(L_9, L_10, NULL);
		}

IL_003e:
		{
			bool L_11 = m3366((&V_1), m3366_MI_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		t752  L_12 = V_1;
		t752  L_13 = L_12;
		t7 * L_14 = Box(t752_TI_var, &L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t654.h"
#include "t753.h"
#include "t654MD.h"
#include "t753MD.h"


extern TypeInfo* t654_TI_var;
extern const MethodInfo* m3367_MI_var;
extern "C" void m3191 (t653 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t654_TI_var = il2cpp_codegen_type_info_from_index(1054);
		m3367_MI_var = il2cpp_codegen_method_info_from_index(2147483951);
		s_Il2CppMethodIntialized = true;
	}
	{
		t654 * L_0 = (t654 *)il2cpp_codegen_object_new (t654_TI_var);
		m3367(L_0, m3367_MI_var);
		__this->f0 = L_0;
		t654 * L_1 = (t654 *)il2cpp_codegen_object_new (t654_TI_var);
		m3367(L_1, m3367_MI_var);
		__this->f1 = L_1;
		t654 * L_2 = (t654 *)il2cpp_codegen_object_new (t654_TI_var);
		m3367(L_2, m3367_MI_var);
		__this->f2 = L_2;
		m162(__this, NULL);
		return;
	}
}
extern "C" void m3192 (t653 * __this, t647 * p0, const MethodInfo* method)
{
	{
		t654 * L_0 = (__this->f0);
		t647 * L_1 = p0;
		VirtActionInvoker1< t647 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
extern "C" void m3193 (t653 * __this, t647 * p0, const MethodInfo* method)
{
	{
		t654 * L_0 = (__this->f1);
		t647 * L_1 = p0;
		VirtActionInvoker1< t647 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
extern TypeInfo* t654_TI_var;
extern TypeInfo* t753_TI_var;
extern const MethodInfo* m3367_MI_var;
extern const MethodInfo* m3368_MI_var;
extern const MethodInfo* m3369_MI_var;
extern "C" void m3194 (t653 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t654_TI_var = il2cpp_codegen_type_info_from_index(1054);
		t753_TI_var = il2cpp_codegen_type_info_from_index(1055);
		m3367_MI_var = il2cpp_codegen_method_info_from_index(2147483951);
		m3368_MI_var = il2cpp_codegen_method_info_from_index(2147483952);
		m3369_MI_var = il2cpp_codegen_method_info_from_index(2147483953);
		s_Il2CppMethodIntialized = true;
	}
	t654 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t654 * L_0 = (t654 *)il2cpp_codegen_object_new (t654_TI_var);
		m3367(L_0, m3367_MI_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		t654 * L_1 = (__this->f1);
		int32_t L_2 = V_1;
		t647 * L_3 = (t647 *)VirtFuncInvoker1< t647 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		t7 * L_4 = p0;
		t614 * L_5 = p1;
		bool L_6 = (bool)VirtFuncInvoker2< bool, t7 *, t614 * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		t654 * L_7 = V_0;
		t654 * L_8 = (__this->f1);
		int32_t L_9 = V_1;
		t647 * L_10 = (t647 *)VirtFuncInvoker1< t647 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		VirtActionInvoker1< t647 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		t654 * L_13 = (__this->f1);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		t654 * L_15 = (__this->f1);
		t654 * L_16 = V_0;
		t654 * L_17 = L_16;
		t226 L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		t753 * L_19 = (t753 *)il2cpp_codegen_object_new (t753_TI_var);
		m3368(L_19, L_17, L_18, m3368_MI_var);
		m3369(L_15, L_19, m3369_MI_var);
		return;
	}
}
extern "C" void m3195 (t653 * __this, const MethodInfo* method)
{
	{
		t654 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
extern const MethodInfo* m3370_MI_var;
extern "C" void m3196 (t653 * __this, t69* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m3370_MI_var = il2cpp_codegen_method_info_from_index(2147483954);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t654 * L_0 = (__this->f2);
		t654 * L_1 = (__this->f0);
		m3370(L_0, L_1, m3370_MI_var);
		t654 * L_2 = (__this->f2);
		t654 * L_3 = (__this->f1);
		m3370(L_2, L_3, m3370_MI_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		t654 * L_4 = (__this->f2);
		int32_t L_5 = V_0;
		t647 * L_6 = (t647 *)VirtFuncInvoker1< t647 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_4, L_5);
		t69* L_7 = p0;
		VirtActionInvoker1< t69* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		t654 * L_10 = (__this->f2);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		t654 * L_12 = (__this->f2);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t734.h"
#include "t742.h"
#include "t743.h"


extern TypeInfo* t653_TI_var;
extern TypeInfo* t651_TI_var;
extern "C" void m3197 (t655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t653_TI_var = il2cpp_codegen_type_info_from_index(1056);
		t651_TI_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f3 = 1;
		m162(__this, NULL);
		t653 * L_0 = (t653 *)il2cpp_codegen_object_new (t653_TI_var);
		m3191(L_0, NULL);
		__this->f0 = L_0;
		t651 * L_1 = (t651 *)il2cpp_codegen_object_new (t651_TI_var);
		m3189(L_1, NULL);
		__this->f1 = L_1;
		t347 * L_2 = m1520(__this, NULL);
		t47* L_3 = (t47*)VirtFuncInvoker0< t47* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->f2 = L_3;
		return;
	}
}
extern "C" void m2090 (t655 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m2091 (t655 * __this, const MethodInfo* method)
{
	{
		m3200(__this, NULL);
		t347 * L_0 = m1520(__this, NULL);
		t47* L_1 = (t47*)VirtFuncInvoker0< t47* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->f2 = L_1;
		return;
	}
}
extern const Il2CppType* t66_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t614 * m3198 (t655 * __this, t650 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t66_0_0_0_var = il2cpp_codegen_type_from_index(231);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t347 * G_B3_0 = {0};
	t347 * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_0 = m1613(NULL, LoadTypeToken(t66_0_0_0_var), NULL);
		V_0 = L_0;
		t650 * L_1 = p0;
		t646 * L_2 = m3185(L_1, NULL);
		t47* L_3 = m3167(L_2, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_4 = m1783(NULL, L_3, NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		t650 * L_5 = p0;
		t646 * L_6 = m3185(L_5, NULL);
		t47* L_7 = m3167(L_6, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_8 = m3362(NULL, L_7, 0, NULL);
		t347 * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_10 = m1613(NULL, LoadTypeToken(t66_0_0_0_var), NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		t650 * L_11 = p0;
		t47* L_12 = m3183(L_11, NULL);
		t650 * L_13 = p0;
		t66 * L_14 = m3182(L_13, NULL);
		t650 * L_15 = p0;
		int32_t L_16 = m3184(L_15, NULL);
		t347 * L_17 = V_0;
		t614 * L_18 = m3199(__this, L_12, L_14, L_16, L_17, NULL);
		return L_18;
	}
}
extern const Il2CppType* t60_0_0_0_var;
extern const Il2CppType* t58_0_0_0_var;
extern const Il2CppType* t54_0_0_0_var;
extern const Il2CppType* t47_0_0_0_var;
extern const Il2CppType* t66_0_0_0_var;
extern TypeInfo* t607_TI_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m3199 (t655 * __this, t47* p0, t7 * p1, int32_t p2, t347 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t60_0_0_0_var = il2cpp_codegen_type_from_index(36);
		t58_0_0_0_var = il2cpp_codegen_type_from_index(14);
		t54_0_0_0_var = il2cpp_codegen_type_from_index(48);
		t47_0_0_0_var = il2cpp_codegen_type_from_index(15);
		t66_0_0_0_var = il2cpp_codegen_type_from_index(231);
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	t347 * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	t607* G_B10_2 = {0};
	t607* G_B10_3 = {0};
	t47* G_B10_4 = {0};
	t7 * G_B10_5 = {0};
	t347 * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	t607* G_B9_2 = {0};
	t607* G_B9_3 = {0};
	t47* G_B9_4 = {0};
	t7 * G_B9_5 = {0};
	{
		int32_t L_0 = p2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		t47* L_2 = p0;
		t7 * L_3 = p1;
		t614 * L_4 = (t614 *)VirtFuncInvoker2< t614 *, t47*, t7 * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		t7 * L_5 = p1;
		t47* L_6 = p0;
		t614 * L_7 = m3205(NULL, L_5, L_6, ((t607*)SZArrayNew(t607_TI_var, 0)), NULL);
		return L_7;
	}

IL_0040:
	{
		t7 * L_8 = p1;
		t47* L_9 = p0;
		t607* L_10 = ((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_11 = m1613(NULL, LoadTypeToken(t60_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_10, L_11);
		*((t347 **)(t347 **)SZArrayLdElema(L_10, 0)) = (t347 *)L_11;
		t614 * L_12 = m3205(NULL, L_8, L_9, L_10, NULL);
		return L_12;
	}

IL_005b:
	{
		t7 * L_13 = p1;
		t47* L_14 = p0;
		t607* L_15 = ((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_16 = m1613(NULL, LoadTypeToken(t58_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_15, L_16);
		*((t347 **)(t347 **)SZArrayLdElema(L_15, 0)) = (t347 *)L_16;
		t614 * L_17 = m3205(NULL, L_13, L_14, L_15, NULL);
		return L_17;
	}

IL_0076:
	{
		t7 * L_18 = p1;
		t47* L_19 = p0;
		t607* L_20 = ((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_21 = m1613(NULL, LoadTypeToken(t54_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_20, L_21);
		*((t347 **)(t347 **)SZArrayLdElema(L_20, 0)) = (t347 *)L_21;
		t614 * L_22 = m3205(NULL, L_18, L_19, L_20, NULL);
		return L_22;
	}

IL_0091:
	{
		t7 * L_23 = p1;
		t47* L_24 = p0;
		t607* L_25 = ((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_26 = m1613(NULL, LoadTypeToken(t47_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_25, L_26);
		*((t347 **)(t347 **)SZArrayLdElema(L_25, 0)) = (t347 *)L_26;
		t614 * L_27 = m3205(NULL, L_23, L_24, L_25, NULL);
		return L_27;
	}

IL_00ac:
	{
		t7 * L_28 = p1;
		t47* L_29 = p0;
		t607* L_30 = ((t607*)SZArrayNew(t607_TI_var, 1));
		t347 * L_31 = p3;
		t347 * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_33 = m1613(NULL, LoadTypeToken(t66_0_0_0_var), NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((t347 **)(t347 **)SZArrayLdElema(G_B10_2, G_B10_1)) = (t347 *)G_B10_0;
		t614 * L_34 = m3205(NULL, G_B10_5, G_B10_4, G_B10_3, NULL);
		return L_34;
	}

IL_00d0:
	{
		return (t614 *)NULL;
	}
}
extern "C" void m3200 (t655 * __this, const MethodInfo* method)
{
	{
		t653 * L_0 = (__this->f0);
		m3195(L_0, NULL);
		__this->f3 = 1;
		return;
	}
}
extern "C" void m3201 (t655 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		t651 * L_1 = (__this->f1);
		t653 * L_2 = (__this->f0);
		m3190(L_1, L_2, __this, NULL);
		__this->f3 = 0;
	}

IL_0024:
	{
		return;
	}
}
extern "C" void m3202 (t655 * __this, t647 * p0, const MethodInfo* method)
{
	{
		t653 * L_0 = (__this->f0);
		t647 * L_1 = p0;
		m3193(L_0, L_1, NULL);
		return;
	}
}
extern "C" void m3203 (t655 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	{
		t653 * L_0 = (__this->f0);
		t7 * L_1 = p0;
		t614 * L_2 = p1;
		m3194(L_0, L_1, L_2, NULL);
		return;
	}
}
extern "C" void m3204 (t655 * __this, t69* p0, const MethodInfo* method)
{
	{
		m3201(__this, NULL);
		t653 * L_0 = (__this->f0);
		t69* L_1 = p0;
		m3196(L_0, L_1, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m2089 (t655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = m232(__this, NULL);
		t347 * L_1 = m1520(__this, NULL);
		t47* L_2 = (t47*)VirtFuncInvoker0< t47* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = m205(NULL, L_0, (t47*) &_stringLiteral130, L_2, NULL);
		return L_3;
	}
}
extern const Il2CppType* t7_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern "C" t614 * m3205 (t7 * __this , t7 * p0, t47* p1, t607* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t7_0_0_0_var = il2cpp_codegen_type_from_index(0);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t614 * V_1 = {0};
	t736* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	t733 * V_5 = {0};
	t736* V_6 = {0};
	int32_t V_7 = 0;
	t347 * V_8 = {0};
	t347 * V_9 = {0};
	{
		t7 * L_0 = p0;
		t347 * L_1 = m1520(L_0, NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		t347 * L_2 = V_0;
		t47* L_3 = p1;
		t607* L_4 = p2;
		t614 * L_5 = (t614 *)VirtFuncInvoker5< t614 *, t47*, int32_t, t742 *, t607*, t744* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (t742 *)NULL, L_4, (t744*)(t744*)NULL);
		V_1 = L_5;
		t614 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		t614 * L_7 = V_1;
		t736* L_8 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		t736* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		t736* L_10 = V_6;
		int32_t L_11 = V_7;
		int32_t L_12 = L_11;
		V_5 = (*(t733 **)(t733 **)SZArrayLdElema(L_10, L_12));
		t607* L_13 = p2;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		V_8 = (*(t347 **)(t347 **)SZArrayLdElema(L_13, L_15));
		t733 * L_16 = V_5;
		t347 * L_17 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		t347 * L_18 = V_8;
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		t347 * L_20 = V_9;
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		t736* L_26 = V_6;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((t52 *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		t614 * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		t347 * L_29 = V_0;
		t347 * L_30 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		t347 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_32 = m1613(NULL, LoadTypeToken(t7_0_0_0_var), NULL);
		if ((((t7*)(t347 *)L_31) == ((t7*)(t347 *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		t347 * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (t614 *)NULL;
	}
}
#include "t160.h"
#ifndef _MSC_VER
#else
#endif
#include "t160MD.h"



extern TypeInfo* t69_TI_var;
extern "C" void m1582 (t160 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t69*)SZArrayNew(t69_TI_var, 0));
		m3197(__this, NULL);
		return;
	}
}
extern TypeInfo* t607_TI_var;
extern "C" t614 * m2114 (t160 * __this, t47* p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p1;
		t47* L_1 = p0;
		t614 * L_2 = m3205(NULL, L_0, L_1, ((t607*)SZArrayNew(t607_TI_var, 0)), NULL);
		return L_2;
	}
}
extern TypeInfo* t648_TI_var;
extern "C" t647 * m2115 (t160 * __this, t7 * p0, t614 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t648_TI_var = il2cpp_codegen_type_info_from_index(1047);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		t614 * L_1 = p1;
		t648 * L_2 = (t648 *)il2cpp_codegen_object_new (t648_TI_var);
		m3178(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" void m1584 (t160 * __this, const MethodInfo* method)
{
	{
		t69* L_0 = (__this->f4);
		m3204(__this, L_0, NULL);
		return;
	}
}
#include "t656.h"
#ifndef _MSC_VER
#else
#endif
#include "t656MD.h"

#include "t5MD.h"


extern "C" void m3206 (t656 * __this, const MethodInfo* method)
{
	{
		m158(__this, NULL);
		return;
	}
}
extern "C" void m3207 (t656 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3208 (t656 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m3209 (t656 * __this, int32_t p0, const MethodInfo* method)
{
	{
		return;
	}
}
#include "t657.h"
#ifndef _MSC_VER
#else
#endif
#include "t657MD.h"

#include "t529.h"


extern "C" void m3210 (t657 * __this, t47* p0, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t7 * m3211 (t657 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f0);
		return L_0;
	}
}
extern TypeInfo* t657_TI_var;
extern "C" bool m3212 (t657 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t657_TI_var = il2cpp_codegen_type_info_from_index(1058);
		s_Il2CppMethodIntialized = true;
	}
	t657 * V_0 = {0};
	{
		t7 * L_0 = p0;
		V_0 = ((t657 *)IsInst(L_0, t657_TI_var));
		t657 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		t7 * L_2 = (__this->f0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t657 * L_3 = V_0;
		t7 * L_4 = m3211(L_3, NULL);
		return ((((t7*)(t7 *)L_4) == ((t7*)(t7 *)NULL))? 1 : 0);
	}

IL_0024:
	{
		t7 * L_5 = (__this->f0);
		t657 * L_6 = V_0;
		t7 * L_7 = m3211(L_6, NULL);
		bool L_8 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
extern "C" int32_t m3213 (t657 * __this, const MethodInfo* method)
{
	{
		t7 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = m3371(__this, NULL);
		return L_1;
	}

IL_0012:
	{
		t7 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
#include "t658.h"
#ifndef _MSC_VER
#else
#endif
#include "t658MD.h"



extern "C" void m3214 (t658 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t422.h"
#ifndef _MSC_VER
#else
#endif
#include "t422MD.h"



extern "C" void m1996 (t422 * __this, t47* p0, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t659.h"
#ifndef _MSC_VER
#else
#endif
#include "t659MD.h"



#include "t660.h"
#ifndef _MSC_VER
#else
#endif
#include "t660MD.h"

#include "t28.h"
#include "t28MD.h"


extern TypeInfo* t659_TI_var;
extern "C" void m3215 (t660 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t659_TI_var = il2cpp_codegen_type_info_from_index(1059);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t7 * L_2 = Box(t659_TI_var, &L_1);
		t47* L_3 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		m3216(__this, L_3, NULL);
		return;
	}
}
extern "C" void m3216 (t660 * __this, t47* p0, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t47* m3217 (t660 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f0);
		return L_0;
	}
}
#include "t504.h"
#ifndef _MSC_VER
#else
#endif
#include "t504MD.h"

#include "t661MD.h"


extern "C" void m3218 (t504 * __this, const MethodInfo* method)
{
	{
		m3372(__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t213.h"


extern "C" void m1743 (t185 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m3219 (t185 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3219((t185 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if ((__this->f2 != NULL || MethodHasParameters((MethodInfo*)(__this->f3.f0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t185(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t7 * m3220 (t185 * __this, t213 * p0, t7 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m3221 (t185 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
