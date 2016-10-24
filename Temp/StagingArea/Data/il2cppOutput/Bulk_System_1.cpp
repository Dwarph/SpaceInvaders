#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1032.h"
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
#include "t1032MD.h"

#include "t53.h"
#include "t58.h"
#include "t1031.h"
#include "t7.h"
#include "t1033MD.h"

#include "t52.h"

extern "C" void m4148 (t1032 * __this, const MethodInfo* method)
{
	{
		m4195(__this, NULL);
		return;
	}
}
extern "C" void m4149 (t1032 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t1031 * L_0 = &(__this->f1);
		int32_t L_1 = p0;
		L_0->f0 = L_1;
		return;
	}
}
extern "C" int32_t m4150 (t1032 * __this, const MethodInfo* method)
{
	{
		t1031 * L_0 = &(__this->f1);
		int32_t L_1 = (L_0->f1);
		return L_1;
	}
}
extern "C" void m4151 (t1032 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t1031 * L_0 = &(__this->f1);
		int32_t L_1 = p0;
		L_0->f1 = L_1;
		return;
	}
}
extern "C" int32_t m4152 (t1032 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1031 * L_1 = &(__this->f1);
		int32_t L_2 = (L_1->f0);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
extern TypeInfo* t1031_TI_var;
extern "C" t7 * m4153 (t1032 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1031_TI_var = il2cpp_codegen_type_info_from_index(1921);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1031  L_0 = (__this->f1);
		t1031  L_1 = L_0;
		t7 * L_2 = Box(t1031_TI_var, &L_1);
		return L_2;
	}
}
extern TypeInfo* t1031_TI_var;
extern "C" void m4154 (t1032 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1031_TI_var = il2cpp_codegen_type_info_from_index(1921);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		__this->f1 = ((*(t1031 *)((t1031 *)UnBox (L_0, t1031_TI_var))));
		return;
	}
}
#include "t1034.h"
#ifndef _MSC_VER
#else
#endif
#include "t1034MD.h"

#include "t919.h"
#include "t699.h"
#include "t1021.h"
#include "t1022.h"
#include "mscorlib_ArrayTypes.h"
#include "t1030.h"
#include "t57.h"
#include "t214.h"
#include "t54.h"
#include "t1027.h"
#include "t1066.h"
#include "t47.h"
#include "t1023.h"
#include "t1029.h"
#include "t919MD.h"
#include "t7MD.h"
#include "t1030MD.h"
#include "t214MD.h"
#include "t1066MD.h"
#include "t47MD.h"


extern TypeInfo* t919_TI_var;
extern "C" void m4155 (t1034 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t919 * L_0 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
		m4512(L_0, NULL);
		__this->f0 = L_0;
		return;
	}
}
extern "C" uint16_t m4156 (t7 * __this , uint16_t p0, uint16_t p1, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		uint16_t L_1 = p1;
		return (((uint16_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65280)))))));
	}
}
extern TypeInfo* t948_TI_var;
extern TypeInfo* t1030_TI_var;
extern "C" t7 * m4157 (t1034 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t948_TI_var = il2cpp_codegen_type_info_from_index(1836);
		t1030_TI_var = il2cpp_codegen_type_info_from_index(1922);
		s_Il2CppMethodIntialized = true;
	}
	t948* V_0 = {0};
	{
		t919 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = ((t948*)SZArrayNew(t948_TI_var, L_1));
		t919 * L_2 = (__this->f0);
		t948* L_3 = V_0;
		VirtActionInvoker1< t52 * >::Invoke(37 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_2, (t52 *)(t52 *)L_3);
		t948* L_4 = V_0;
		t1030 * L_5 = (t1030 *)il2cpp_codegen_object_new (t1030_TI_var);
		m4139(L_5, L_4, NULL);
		return L_5;
	}
}
extern "C" void m4158 (t1034 * __this, const MethodInfo* method)
{
	{
		m4189(__this, 0, NULL);
		return;
	}
}
extern "C" void m4159 (t1034 * __this, const MethodInfo* method)
{
	{
		m4189(__this, 1, NULL);
		return;
	}
}
extern "C" void m4160 (t1034 * __this, int32_t p0, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		m4191(__this, (((uint16_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65535))))), NULL);
		uint32_t L_2 = V_0;
		m4191(__this, (((uint16_t)((int32_t)((uint32_t)L_2>>((int32_t)16))))), NULL);
		return;
	}
}
extern TypeInfo* t214_TI_var;
extern "C" void m4161 (t1034 * __this, uint16_t p0, bool p1, bool p2, bool p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = p1;
		bool L_1 = p2;
		bool L_2 = p3;
		uint16_t L_3 = m4188(NULL, L_0, L_1, L_2, 0, NULL);
		m4190(__this, 5, L_3, NULL);
		bool L_4 = p2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		uint16_t L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		uint16_t L_6 = m1816(NULL, L_5, NULL);
		p0 = L_6;
	}

IL_001f:
	{
		uint16_t L_7 = p0;
		m4191(__this, L_7, NULL);
		return;
	}
}
extern "C" void m4162 (t1034 * __this, uint16_t p0, bool p1, bool p2, const MethodInfo* method)
{
	{
		bool L_0 = p1;
		bool L_1 = p2;
		uint16_t L_2 = m4188(NULL, L_0, 0, L_1, 0, NULL);
		m4190(__this, 6, L_2, NULL);
		uint16_t L_3 = p0;
		m4191(__this, L_3, NULL);
		return;
	}
}
extern "C" void m4163 (t1034 * __this, uint16_t p0, bool p1, bool p2, const MethodInfo* method)
{
	{
		bool L_0 = p1;
		bool L_1 = p2;
		uint16_t L_2 = m4188(NULL, L_0, 0, L_1, 0, NULL);
		m4190(__this, 7, L_2, NULL);
		uint16_t L_3 = p0;
		m4191(__this, L_3, NULL);
		return;
	}
}
extern "C" void m4164 (t1034 * __this, uint16_t p0, uint16_t p1, bool p2, bool p3, bool p4, const MethodInfo* method)
{
	{
		bool L_0 = p2;
		bool L_1 = p3;
		bool L_2 = p4;
		uint16_t L_3 = m4188(NULL, L_0, L_1, L_2, 0, NULL);
		m4190(__this, 8, L_3, NULL);
		uint16_t L_4 = p0;
		m4191(__this, L_4, NULL);
		uint16_t L_5 = p1;
		m4191(__this, L_5, NULL);
		return;
	}
}
extern "C" void m4165 (t1034 * __this, uint16_t p0, t1066 * p1, bool p2, bool p3, bool p4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = p2;
		bool L_1 = p3;
		bool L_2 = p4;
		uint16_t L_3 = m4188(NULL, L_0, L_1, L_2, 0, NULL);
		m4190(__this, ((int32_t)9), L_3, NULL);
		uint16_t L_4 = p0;
		m4191(__this, L_4, NULL);
		t1066 * L_5 = p1;
		int32_t L_6 = m4648(L_5, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6+(int32_t)((int32_t)15)))>>(int32_t)4));
		int32_t L_7 = V_0;
		m4191(__this, (((uint16_t)L_7)), NULL);
		V_1 = 0;
		goto IL_007d;
	}

IL_0035:
	{
		V_2 = 0;
		V_3 = 0;
		goto IL_006e;
	}

IL_003e:
	{
		int32_t L_8 = V_1;
		t1066 * L_9 = p1;
		int32_t L_10 = m4648(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0076;
	}

IL_004f:
	{
		t1066 * L_11 = p1;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
		bool L_14 = m4649(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		uint16_t L_15 = V_2;
		int32_t L_16 = V_3;
		V_2 = (((uint16_t)((int32_t)((int32_t)L_15|(int32_t)(((uint16_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31)))))))))));
	}

IL_006a:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)16))))
		{
			goto IL_003e;
		}
	}

IL_0076:
	{
		uint16_t L_19 = V_2;
		m4191(__this, L_19, NULL);
	}

IL_007d:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		V_0 = ((int32_t)((int32_t)L_21-(int32_t)1));
		if (L_21)
		{
			goto IL_0035;
		}
	}
	{
		return;
	}
}
extern "C" void m4166 (t1034 * __this, t47* p0, bool p1, bool p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = p1;
		bool L_1 = p2;
		uint16_t L_2 = m4188(NULL, 0, L_0, L_1, 0, NULL);
		m4190(__this, 3, L_2, NULL);
		t47* L_3 = p0;
		int32_t L_4 = m1741(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		m4191(__this, (((uint16_t)L_5)), NULL);
		bool L_6 = p1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		t47* L_7 = p0;
		t47* L_8 = m4650(L_7, NULL);
		p0 = L_8;
	}

IL_002d:
	{
		V_1 = 0;
		goto IL_0045;
	}

IL_0034:
	{
		t47* L_9 = p0;
		int32_t L_10 = V_1;
		uint16_t L_11 = m1754(L_9, L_10, NULL);
		m4191(__this, L_11, NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
extern "C" void m4167 (t1034 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		m4190(__this, 2, 0, NULL);
		uint16_t L_0 = p0;
		m4191(__this, L_0, NULL);
		return;
	}
}
extern "C" void m4168 (t1034 * __this, int32_t p0, const MethodInfo* method)
{
	{
		m4189(__this, ((int32_t)11), NULL);
		int32_t L_0 = p0;
		m4191(__this, (((uint16_t)L_0)), NULL);
		return;
	}
}
extern "C" void m4169 (t1034 * __this, int32_t p0, const MethodInfo* method)
{
	{
		m4189(__this, ((int32_t)12), NULL);
		int32_t L_0 = p0;
		m4191(__this, (((uint16_t)L_0)), NULL);
		return;
	}
}
extern "C" void m4170 (t1034 * __this, int32_t p0, int32_t p1, bool p2, t1029 * p3, const MethodInfo* method)
{
	t1034 * G_B2_0 = {0};
	t1034 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1034 * G_B3_1 = {0};
	{
		t1029 * L_0 = p3;
		m4193(__this, L_0, NULL);
		m4189(__this, ((int32_t)14), NULL);
		int32_t L_1 = p0;
		m4191(__this, (((uint16_t)L_1)), NULL);
		int32_t L_2 = p1;
		m4191(__this, (((uint16_t)L_2)), NULL);
		bool L_3 = p2;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		m4191(G_B3_1, (((uint16_t)G_B3_0)), NULL);
		t1029 * L_4 = p3;
		m4194(__this, L_4, NULL);
		return;
	}
}
extern "C" void m4171 (t1034 * __this, const MethodInfo* method)
{
	{
		m4189(__this, ((int32_t)13), NULL);
		return;
	}
}
extern "C" void m4172 (t1034 * __this, int32_t p0, bool p1, bool p2, const MethodInfo* method)
{
	{
		bool L_0 = p1;
		bool L_1 = p2;
		uint16_t L_2 = m4188(NULL, 0, L_0, L_1, 0, NULL);
		m4190(__this, 4, L_2, NULL);
		int32_t L_3 = p0;
		m4191(__this, (((uint16_t)L_3)), NULL);
		return;
	}
}
extern "C" void m4173 (t1034 * __this, int32_t p0, t1029 * p1, const MethodInfo* method)
{
	{
		t1029 * L_0 = p1;
		m4193(__this, L_0, NULL);
		m4189(__this, ((int32_t)15), NULL);
		t1029 * L_1 = p1;
		m4194(__this, L_1, NULL);
		int32_t L_2 = p0;
		m4191(__this, (((uint16_t)L_2)), NULL);
		return;
	}
}
extern "C" void m4174 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	{
		t1029 * L_0 = p0;
		m4193(__this, L_0, NULL);
		m4189(__this, ((int32_t)16), NULL);
		t1029 * L_1 = p0;
		m4194(__this, L_1, NULL);
		return;
	}
}
extern "C" void m4175 (t1034 * __this, t1029 * p0, t1029 * p1, const MethodInfo* method)
{
	{
		t1029 * L_0 = p0;
		m4193(__this, L_0, NULL);
		t1029 * L_1 = p1;
		m4193(__this, L_1, NULL);
		m4189(__this, ((int32_t)17), NULL);
		t1029 * L_2 = p0;
		m4194(__this, L_2, NULL);
		t1029 * L_3 = p1;
		m4194(__this, L_3, NULL);
		return;
	}
}
extern "C" void m4176 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	{
		t1029 * L_0 = p0;
		m4193(__this, L_0, NULL);
		m4190(__this, ((int32_t)18), 0, NULL);
		t1029 * L_1 = p0;
		m4194(__this, L_1, NULL);
		return;
	}
}
extern "C" void m4177 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	{
		t1029 * L_0 = p0;
		m4193(__this, L_0, NULL);
		m4190(__this, ((int32_t)19), 0, NULL);
		t1029 * L_1 = p0;
		m4194(__this, L_1, NULL);
		return;
	}
}
extern "C" void m4178 (t1034 * __this, int32_t p0, int32_t p1, bool p2, t1029 * p3, const MethodInfo* method)
{
	{
		t1029 * L_0 = p3;
		m4193(__this, L_0, NULL);
		bool L_1 = p2;
		uint16_t L_2 = m4188(NULL, 0, 0, 0, L_1, NULL);
		m4190(__this, ((int32_t)20), L_2, NULL);
		t1029 * L_3 = p3;
		m4194(__this, L_3, NULL);
		int32_t L_4 = p0;
		m4160(__this, L_4, NULL);
		int32_t L_5 = p1;
		m4160(__this, L_5, NULL);
		return;
	}
}
extern "C" void m4179 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	{
		t1029 * L_0 = p0;
		VirtActionInvoker1< t1029 * >::Invoke(33 /* System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, __this, L_0);
		m4189(__this, ((int32_t)21), NULL);
		return;
	}
}
extern "C" void m4180 (t1034 * __this, int32_t p0, int32_t p1, bool p2, t1029 * p3, const MethodInfo* method)
{
	{
		t1029 * L_0 = p3;
		m4193(__this, L_0, NULL);
		bool L_1 = p2;
		uint16_t L_2 = m4188(NULL, 0, 0, 0, L_1, NULL);
		m4190(__this, ((int32_t)22), L_2, NULL);
		t1029 * L_3 = p3;
		m4194(__this, L_3, NULL);
		int32_t L_4 = p0;
		m4160(__this, L_4, NULL);
		int32_t L_5 = p1;
		m4160(__this, L_5, NULL);
		return;
	}
}
extern "C" void m4181 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	{
		t1029 * L_0 = p0;
		m4193(__this, L_0, NULL);
		m4189(__this, ((int32_t)10), NULL);
		t1029 * L_1 = p0;
		m4194(__this, L_1, NULL);
		return;
	}
}
extern "C" void m4182 (t1034 * __this, bool p0, int32_t p1, t1029 * p2, const MethodInfo* method)
{
	{
		t1029 * L_0 = p2;
		m4193(__this, L_0, NULL);
		bool L_1 = p0;
		uint16_t L_2 = m4188(NULL, 0, 0, L_1, 0, NULL);
		m4190(__this, ((int32_t)23), L_2, NULL);
		t1029 * L_3 = p2;
		m4194(__this, L_3, NULL);
		int32_t L_4 = p1;
		m4191(__this, (((uint16_t)L_4)), NULL);
		return;
	}
}
extern "C" void m4183 (t1034 * __this, int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	{
		m4189(__this, ((int32_t)24), NULL);
		int32_t L_0 = p0;
		m4160(__this, L_0, NULL);
		int32_t L_1 = p1;
		m4160(__this, L_1, NULL);
		int32_t L_2 = p2;
		m4160(__this, L_2, NULL);
		return;
	}
}
extern TypeInfo* t1032_TI_var;
extern "C" t1029 * m4184 (t1034 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1032_TI_var = il2cpp_codegen_type_info_from_index(1923);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1032 * L_0 = (t1032 *)il2cpp_codegen_object_new (t1032_TI_var);
		m4148(L_0, NULL);
		return L_0;
	}
}
extern TypeInfo* t1032_TI_var;
extern TypeInfo* t699_TI_var;
extern "C" void m4185 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1032_TI_var = il2cpp_codegen_type_info_from_index(1923);
		t699_TI_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	t1032 * V_0 = {0};
	{
		t1029 * L_0 = p0;
		V_0 = ((t1032 *)Castclass(L_0, t1032_TI_var));
		goto IL_002f;
	}

IL_000c:
	{
		t919 * L_1 = (__this->f0);
		t1032 * L_2 = V_0;
		int32_t L_3 = m4150(L_2, NULL);
		t1032 * L_4 = V_0;
		int32_t L_5 = m4192(__this, NULL);
		int32_t L_6 = m4152(L_4, L_5, NULL);
		uint16_t L_7 = (((uint16_t)L_6));
		t7 * L_8 = Box(t699_TI_var, &L_7);
		VirtActionInvoker2< int32_t, t7 * >::Invoke(21 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_1, L_3, L_8);
	}

IL_002f:
	{
		t1032 * L_9 = V_0;
		bool L_10 = m4197(L_9, NULL);
		if (L_10)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
extern "C" void m4186 (t1034 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m4187 (t1034 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" uint16_t m4188 (t7 * __this , bool p0, bool p1, bool p2, bool p3, const MethodInfo* method)
{
	uint16_t V_0 = {0};
	{
		V_0 = 0;
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint16_t L_1 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)256)))));
	}

IL_0011:
	{
		bool L_2 = p1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)512)))));
	}

IL_0020:
	{
		bool L_4 = p2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		uint16_t L_5 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)1024)))));
	}

IL_002f:
	{
		bool L_6 = p3;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_7 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)2048)))));
	}

IL_003e:
	{
		uint16_t L_8 = V_0;
		return L_8;
	}
}
extern "C" void m4189 (t1034 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		m4190(__this, L_0, 0, NULL);
		return;
	}
}
extern "C" void m4190 (t1034 * __this, uint16_t p0, uint16_t p1, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		uint16_t L_1 = p1;
		uint16_t L_2 = m4156(NULL, L_0, L_1, NULL);
		m4191(__this, L_2, NULL);
		return;
	}
}
extern TypeInfo* t699_TI_var;
extern "C" void m4191 (t1034 * __this, uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t699_TI_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	{
		t919 * L_0 = (__this->f0);
		uint16_t L_1 = p0;
		uint16_t L_2 = L_1;
		t7 * L_3 = Box(t699_TI_var, &L_2);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_3);
		return;
	}
}
extern "C" int32_t m4192 (t1034 * __this, const MethodInfo* method)
{
	{
		t919 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
extern TypeInfo* t1032_TI_var;
extern "C" void m4193 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1032_TI_var = il2cpp_codegen_type_info_from_index(1923);
		s_Il2CppMethodIntialized = true;
	}
	t1032 * V_0 = {0};
	{
		t1029 * L_0 = p0;
		V_0 = ((t1032 *)Castclass(L_0, t1032_TI_var));
		t1032 * L_1 = V_0;
		int32_t L_2 = m4192(__this, NULL);
		m4149(L_1, L_2, NULL);
		return;
	}
}
extern TypeInfo* t1032_TI_var;
extern "C" void m4194 (t1034 * __this, t1029 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1032_TI_var = il2cpp_codegen_type_info_from_index(1923);
		s_Il2CppMethodIntialized = true;
	}
	t1032 * V_0 = {0};
	{
		t1029 * L_0 = p0;
		V_0 = ((t1032 *)Castclass(L_0, t1032_TI_var));
		t1032 * L_1 = V_0;
		int32_t L_2 = m4192(__this, NULL);
		m4151(L_1, L_2, NULL);
		m4191(__this, 0, NULL);
		t1032 * L_3 = V_0;
		m4196(L_3, NULL);
		return;
	}
}
#include "t1033.h"
#ifndef _MSC_VER
#else
#endif

#include "t661.h"
#include "t1029MD.h"
#include "t661MD.h"


extern TypeInfo* t661_TI_var;
extern "C" void m4195 (t1033 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t661_TI_var = il2cpp_codegen_type_info_from_index(1743);
		s_Il2CppMethodIntialized = true;
	}
	{
		m4138(__this, NULL);
		t661 * L_0 = (t661 *)il2cpp_codegen_object_new (t661_TI_var);
		m3372(L_0, NULL);
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m4196 (t1033 * __this, const MethodInfo* method)
{
	{
		t661 * L_0 = (__this->f0);
		t7 * L_1 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(4 /* System.Object System.Text.RegularExpressions.LinkStack::GetCurrent() */, __this);
		VirtActionInvoker1< t7 * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_0, L_1);
		return;
	}
}
extern "C" bool m4197 (t1033 * __this, const MethodInfo* method)
{
	{
		t661 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		t661 * L_2 = (__this->f0);
		t7 * L_3 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_2);
		VirtActionInvoker1< t7 * >::Invoke(5 /* System.Void System.Text.RegularExpressions.LinkStack::SetCurrent(System.Object) */, __this, L_3);
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
#include "t1035.h"
#ifndef _MSC_VER
#else
#endif
#include "t1035MD.h"



extern "C" bool m4198 (t1035 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m4199 (t1035 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = (__this->f0);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		int32_t L_3 = (__this->f1);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m4200 (t1035 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (__this->f1);
		int32_t L_3 = (__this->f0);
		G_B3_0 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		goto IL_0030;
	}

IL_0023:
	{
		int32_t L_4 = (__this->f0);
		int32_t L_5 = (__this->f1);
		G_B3_0 = ((int32_t)((int32_t)L_4-(int32_t)L_5));
	}

IL_0030:
	{
		return G_B3_0;
	}
}
#include "t1036.h"
#ifndef _MSC_VER
#else
#endif
#include "t1036MD.h"

#include "t1128.h"
#include "t1128MD.h"


extern "C" int32_t m4201 (t1036 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1018* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		int32_t L_2 = ((int32_t)((int32_t)L_1-(int32_t)1));
		V_0 = L_2;
		__this->f1 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_4));
	}
}
extern TypeInfo* t1018_TI_var;
extern "C" void m4202 (t1036 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1018* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t1018* L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		__this->f0 = ((t1018*)SZArrayNew(t1018_TI_var, 8));
		goto IL_006e;
	}

IL_001c:
	{
		int32_t L_1 = (__this->f1);
		t1018* L_2 = (__this->f0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((t52 *)L_2)->max_length)))))))
		{
			goto IL_006e;
		}
	}
	{
		t1018* L_3 = (__this->f0);
		V_0 = (((int32_t)(((t52 *)L_3)->max_length)));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)L_5>>(int32_t)1))));
		int32_t L_6 = V_0;
		V_1 = ((t1018*)SZArrayNew(t1018_TI_var, L_6));
		V_2 = 0;
		goto IL_005b;
	}

IL_004c:
	{
		t1018* L_7 = V_1;
		int32_t L_8 = V_2;
		t1018* L_9 = (__this->f0);
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = (__this->f1);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}
	{
		t1018* L_15 = V_1;
		__this->f0 = L_15;
	}

IL_006e:
	{
		t1018* L_16 = (__this->f0);
		int32_t L_17 = (__this->f1);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->f1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, L_19)) = (int32_t)L_20;
		return;
	}
}
extern "C" int32_t m4203 (t1036 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern TypeInfo* t1128_TI_var;
extern "C" void m4204 (t1036 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1128_TI_var = il2cpp_codegen_type_info_from_index(1898);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f1);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		t1128 * L_2 = (t1128 *)il2cpp_codegen_object_new (t1128_TI_var);
		m4638(L_2, (t47*) &_stringLiteral645, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		int32_t L_3 = p0;
		__this->f1 = L_3;
		return;
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
void t1036_marshal(const t1036& unmarshaled, t1036_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
}
extern TypeInfo* t58_TI_var;
void t1036_marshal_back(const t1036_marshaled& marshaled, t1036& unmarshaled)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	unmarshaled.f0 = (t1018*)il2cpp_codegen_marshal_array_result(t58_TI_var, marshaled.f0, 1);
	unmarshaled.f1 = marshaled.f1;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
void t1036_marshal_cleanup(t1036_marshaled& marshaled)
{
}
#include "t1037.h"
#ifndef _MSC_VER
#else
#endif
#include "t1037MD.h"



extern "C" void m4205 (t1037 * __this, t1037 * p0, int32_t p1, int32_t p2, bool p3, int32_t p4, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t1037 * L_0 = p0;
		__this->f5 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		int32_t L_2 = p2;
		__this->f2 = L_2;
		bool L_3 = p3;
		__this->f3 = L_3;
		int32_t L_4 = p4;
		__this->f4 = L_4;
		__this->f0 = (-1);
		__this->f6 = 0;
		return;
	}
}
extern "C" int32_t m4206 (t1037 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m4207 (t1037 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" int32_t m4208 (t1037 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m4209 (t1037 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" bool m4210 (t1037 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4211 (t1037 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4212 (t1037 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m4213 (t1037 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t1037 * m4214 (t1037 * __this, const MethodInfo* method)
{
	{
		t1037 * L_0 = (__this->f5);
		return L_0;
	}
}
#include "t1038.h"
#ifndef _MSC_VER
#else
#endif
#include "t1038MD.h"



#include "t1039.h"
#ifndef _MSC_VER
#else
#endif
#include "t1039MD.h"

#include "t1040.h"
#include "t1004.h"
#include "t746.h"
#include "System_ArrayTypes.h"
#include "t1009.h"
#include "t1006.h"
#include "t1007.h"
#include "t1005.h"
#include "t1010.h"
#include "t1005MD.h"
#include "t1004MD.h"
#include "t1040MD.h"
#include "t1028MD.h"
#include "t52MD.h"
#include "t1006MD.h"
#include "t1009MD.h"
#include "t1007MD.h"
#include "t1010MD.h"


extern TypeInfo* t1036_TI_var;
extern TypeInfo* t1018_TI_var;
extern "C" void m4215 (t1039 * __this, t948* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1036_TI_var = il2cpp_codegen_type_info_from_index(1924);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		s_Il2CppMethodIntialized = true;
	}
	t1036  V_0 = {0};
	{
		Initobj (t1036_TI_var, (&V_0));
		t1036  L_0 = V_0;
		__this->f11 = L_0;
		m4041(__this, NULL);
		t948* L_1 = p0;
		__this->f1 = L_1;
		__this->f7 = (t1040 *)NULL;
		int32_t L_2 = m4216(__this, 1, NULL);
		__this->f5 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = m4216(__this, 3, NULL);
		__this->f6 = L_3;
		__this->f2 = 7;
		int32_t L_4 = (__this->f5);
		__this->f16 = ((t1018*)SZArrayNew(t1018_TI_var, L_4));
		return;
	}
}
extern "C" int32_t m4216 (t1039 * __this, int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t948* L_0 = (__this->f1);
		int32_t L_1 = p0;
		int32_t L_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3<<(int32_t)((int32_t)16)));
		int32_t L_4 = V_0;
		t948* L_5 = (__this->f1);
		int32_t L_6 = p0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7))));
		int32_t L_8 = V_0;
		return L_8;
	}
}
extern TypeInfo* t1004_TI_var;
extern "C" t1004 * m4217 (t1039 * __this, t746 * p0, t47* p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1004_TI_var = il2cpp_codegen_type_info_from_index(1904);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p1;
		__this->f3 = L_0;
		int32_t L_1 = p3;
		__this->f4 = L_1;
		int32_t L_2 = p2;
		__this->f8 = L_2;
		int32_t* L_3 = &(__this->f8);
		int32_t L_4 = (__this->f2);
		bool L_5 = m4219(__this, 1, L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		t746 * L_6 = p0;
		t1004 * L_7 = m4235(__this, L_6, NULL);
		return L_7;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1004_TI_var);
		t1004 * L_8 = m4078(NULL, NULL);
		return L_8;
	}
}
extern "C" void m4218 (t1039 * __this, const MethodInfo* method)
{
	t1037 * V_0 = {0};
	{
		m4230(__this, NULL);
		V_0 = (t1037 *)NULL;
		__this->f9 = (t1037 *)NULL;
		t1037 * L_0 = V_0;
		__this->f10 = L_0;
		return;
	}
}
extern TypeInfo* t1040_TI_var;
extern TypeInfo* t214_TI_var;
extern TypeInfo* t1037_TI_var;
extern "C" bool m4219 (t1039 * __this, int32_t p0, int32_t* p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1040_TI_var = il2cpp_codegen_type_info_from_index(1925);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t1037_TI_var = il2cpp_codegen_type_info_from_index(1926);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = {0};
	uint16_t V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint16_t V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	t47* V_13 = {0};
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint16_t V_18 = 0x0;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	uint16_t V_31 = {0};
	int32_t V_32 = 0;
	t1037 * V_33 = {0};
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	uint16_t V_42 = 0;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	uint16_t V_46 = {0};
	uint16_t V_47 = {0};
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	int32_t V_51 = 0;
	uint16_t V_52 = {0};
	uint16_t V_53 = {0};
	int32_t V_54 = {0};
	int32_t G_B7_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B162_0 = 0;
	int32_t G_B162_1 = 0;
	t1039 * G_B162_2 = {0};
	int32_t G_B161_0 = 0;
	int32_t G_B161_1 = 0;
	t1039 * G_B161_2 = {0};
	int32_t G_B163_0 = 0;
	int32_t G_B163_1 = 0;
	int32_t G_B163_2 = 0;
	t1039 * G_B163_3 = {0};
	{
		int32_t* L_0 = p1;
		V_0 = (*((int32_t*)L_0));
	}

IL_0003:
	{
		goto IL_0fee;
	}

IL_0008:
	{
		t948* L_1 = (__this->f1);
		int32_t L_2 = p2;
		int32_t L_3 = L_2;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3));
		uint16_t L_4 = V_1;
		V_2 = (((uint16_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		uint16_t L_5 = V_1;
		V_3 = (((uint16_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)65280)))));
		uint16_t L_6 = V_2;
		V_52 = L_6;
		uint16_t L_7 = V_52;
		if (L_7 == 0)
		{
			goto IL_04b8;
		}
		if (L_7 == 1)
		{
			goto IL_04bd;
		}
		if (L_7 == 2)
		{
			goto IL_04c2;
		}
		if (L_7 == 3)
		{
			goto IL_04e7;
		}
		if (L_7 == 4)
		{
			goto IL_05ab;
		}
		if (L_7 == 5)
		{
			goto IL_06ef;
		}
		if (L_7 == 6)
		{
			goto IL_06ef;
		}
		if (L_7 == 7)
		{
			goto IL_06ef;
		}
		if (L_7 == 8)
		{
			goto IL_06ef;
		}
		if (L_7 == 9)
		{
			goto IL_06ef;
		}
		if (L_7 == 10)
		{
			goto IL_070a;
		}
		if (L_7 == 11)
		{
			goto IL_073c;
		}
		if (L_7 == 12)
		{
			goto IL_0757;
		}
		if (L_7 == 13)
		{
			goto IL_07db;
		}
		if (L_7 == 14)
		{
			goto IL_0772;
		}
		if (L_7 == 15)
		{
			goto IL_07e0;
		}
		if (L_7 == 16)
		{
			goto IL_0817;
		}
		if (L_7 == 17)
		{
			goto IL_0840;
		}
		if (L_7 == 18)
		{
			goto IL_088a;
		}
		if (L_7 == 19)
		{
			goto IL_08db;
		}
		if (L_7 == 20)
		{
			goto IL_08ee;
		}
		if (L_7 == 21)
		{
			goto IL_0957;
		}
		if (L_7 == 22)
		{
			goto IL_0c6f;
		}
		if (L_7 == 23)
		{
			goto IL_0096;
		}
		if (L_7 == 24)
		{
			goto IL_0fe9;
		}
	}
	{
		goto IL_0fee;
	}

IL_0096:
	{
		t948* L_8 = (__this->f1);
		int32_t L_9 = p2;
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10));
		t948* L_11 = (__this->f1);
		int32_t L_12 = p2;
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)2));
		V_5 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13));
		uint16_t L_14 = V_3;
		V_6 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_5;
		G_B7_0 = ((int32_t)((int32_t)L_16-(int32_t)L_17));
		goto IL_00d2;
	}

IL_00ce:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_5;
		G_B7_0 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_00d2:
	{
		V_7 = G_B7_0;
		int32_t L_20 = (__this->f4);
		int32_t L_21 = (__this->f6);
		int32_t L_22 = V_5;
		V_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_20-(int32_t)L_21))+(int32_t)L_22));
		V_9 = 0;
		t948* L_23 = (__this->f1);
		int32_t L_24 = p2;
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)3));
		V_10 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25))&(int32_t)((int32_t)255)))));
		uint16_t L_26 = V_10;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_27 = V_4;
		if ((!(((uint32_t)L_27) == ((uint32_t)6))))
		{
			goto IL_0285;
		}
	}
	{
		t948* L_28 = (__this->f1);
		int32_t L_29 = p2;
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)4));
		V_53 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30));
		uint16_t L_31 = V_53;
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 0)
		{
			goto IL_0132;
		}
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 1)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 2)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_027b;
	}

IL_0132:
	{
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_33 = V_5;
		if (L_33)
		{
			goto IL_0160;
		}
	}

IL_0140:
	{
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_35 = V_5;
		V_0 = L_35;
	}

IL_014a:
	{
		int32_t L_36 = p2;
		int32_t L_37 = V_4;
		bool L_38 = m4221(__this, (&V_0), ((int32_t)((int32_t)L_36+(int32_t)L_37)), NULL);
		if (!L_38)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0160:
	{
		goto IL_0280;
	}

IL_0165:
	{
		int32_t L_39 = V_7;
		if (L_39)
		{
			goto IL_018a;
		}
	}
	{
		V_0 = 0;
		int32_t L_40 = p2;
		int32_t L_41 = V_4;
		bool L_42 = m4221(__this, (&V_0), ((int32_t)((int32_t)L_40+(int32_t)L_41)), NULL);
		if (!L_42)
		{
			goto IL_0184;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0184:
	{
		int32_t L_43 = V_7;
		V_7 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_018a:
	{
		goto IL_0210;
	}

IL_018f:
	{
		int32_t L_44 = V_7;
		if (!L_44)
		{
			goto IL_01ac;
		}
	}
	{
		t47* L_45 = (__this->f3);
		int32_t L_46 = V_7;
		uint16_t L_47 = m1754(L_45, ((int32_t)((int32_t)L_46-(int32_t)1)), NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01f8;
		}
	}

IL_01ac:
	{
		bool L_48 = V_6;
		if (!L_48)
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_8;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_51 = V_7;
		G_B29_0 = L_51;
		goto IL_01c8;
	}

IL_01c3:
	{
		int32_t L_52 = V_7;
		int32_t L_53 = V_5;
		G_B29_0 = ((int32_t)((int32_t)L_52+(int32_t)L_53));
	}

IL_01c8:
	{
		V_0 = G_B29_0;
		goto IL_01e2;
	}

IL_01ce:
	{
		int32_t L_54 = V_7;
		if (L_54)
		{
			goto IL_01dc;
		}
	}
	{
		int32_t L_55 = V_7;
		G_B33_0 = L_55;
		goto IL_01e1;
	}

IL_01dc:
	{
		int32_t L_56 = V_7;
		int32_t L_57 = V_5;
		G_B33_0 = ((int32_t)((int32_t)L_56-(int32_t)L_57));
	}

IL_01e1:
	{
		V_0 = G_B33_0;
	}

IL_01e2:
	{
		int32_t L_58 = p2;
		int32_t L_59 = V_4;
		bool L_60 = m4221(__this, (&V_0), ((int32_t)((int32_t)L_58+(int32_t)L_59)), NULL);
		if (!L_60)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_01f8:
	{
		bool L_61 = V_6;
		if (!L_61)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_62 = V_7;
		V_7 = ((int32_t)((int32_t)L_62-(int32_t)1));
		goto IL_0210;
	}

IL_020a:
	{
		int32_t L_63 = V_7;
		V_7 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0210:
	{
		bool L_64 = V_6;
		if (!L_64)
		{
			goto IL_021f;
		}
	}
	{
		int32_t L_65 = V_7;
		if ((((int32_t)L_65) >= ((int32_t)0)))
		{
			goto IL_018f;
		}
	}

IL_021f:
	{
		bool L_66 = V_6;
		if (L_66)
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_67 = V_7;
		int32_t L_68 = V_8;
		if ((((int32_t)L_67) <= ((int32_t)L_68)))
		{
			goto IL_018f;
		}
	}

IL_022f:
	{
		goto IL_0280;
	}

IL_0234:
	{
		int32_t L_69 = V_7;
		int32_t L_70 = (__this->f8);
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0276;
		}
	}
	{
		bool L_71 = V_6;
		if (!L_71)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_72 = (__this->f8);
		int32_t L_73 = V_5;
		G_B48_0 = ((int32_t)((int32_t)L_72+(int32_t)L_73));
		goto IL_025f;
	}

IL_0256:
	{
		int32_t L_74 = (__this->f8);
		int32_t L_75 = V_5;
		G_B48_0 = ((int32_t)((int32_t)L_74-(int32_t)L_75));
	}

IL_025f:
	{
		V_0 = G_B48_0;
		int32_t L_76 = p2;
		int32_t L_77 = V_4;
		bool L_78 = m4221(__this, (&V_0), ((int32_t)((int32_t)L_76+(int32_t)L_77)), NULL);
		if (!L_78)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0276:
	{
		goto IL_0280;
	}

IL_027b:
	{
		goto IL_0280;
	}

IL_0280:
	{
		goto IL_04b3;
	}

IL_0285:
	{
		t1040 * L_79 = (__this->f7);
		if (L_79)
		{
			goto IL_02ab;
		}
	}
	{
		uint16_t L_80 = V_10;
		if ((!(((uint32_t)L_80) == ((uint32_t)3))))
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_81 = V_4;
		t948* L_82 = (__this->f1);
		int32_t L_83 = p2;
		int32_t L_84 = ((int32_t)((int32_t)L_83+(int32_t)4));
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)((int32_t)6+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_82, L_84))))))))
		{
			goto IL_03d2;
		}
	}

IL_02ab:
	{
		t948* L_85 = (__this->f1);
		int32_t L_86 = p2;
		int32_t L_87 = ((int32_t)((int32_t)L_86+(int32_t)3));
		V_11 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_85, L_87))&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1040 * L_88 = (__this->f7);
		if (L_88)
		{
			goto IL_0304;
		}
	}
	{
		t948* L_89 = (__this->f1);
		int32_t L_90 = p2;
		int32_t L_91 = ((int32_t)((int32_t)L_90+(int32_t)3));
		V_12 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_89, L_91))&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_92 = p2;
		t47* L_93 = m4224(__this, ((int32_t)((int32_t)L_92+(int32_t)3)), NULL);
		V_13 = L_93;
		t47* L_94 = V_13;
		bool L_95 = V_12;
		bool L_96 = V_11;
		t1040 * L_97 = (t1040 *)il2cpp_codegen_object_new (t1040_TI_var);
		m4299(L_97, L_94, L_95, L_96, NULL);
		__this->f7 = L_97;
	}

IL_0304:
	{
		goto IL_03ad;
	}

IL_0309:
	{
		bool L_98 = V_11;
		if (!L_98)
		{
			goto IL_0344;
		}
	}
	{
		t1040 * L_99 = (__this->f7);
		t47* L_100 = (__this->f3);
		int32_t L_101 = V_7;
		int32_t L_102 = V_9;
		int32_t L_103 = m4302(L_99, L_100, L_101, L_102, NULL);
		V_7 = L_103;
		int32_t L_104 = V_7;
		if ((((int32_t)L_104) == ((int32_t)(-1))))
		{
			goto IL_033f;
		}
	}
	{
		int32_t L_105 = V_7;
		t1040 * L_106 = (__this->f7);
		int32_t L_107 = m4301(L_106, NULL);
		V_7 = ((int32_t)((int32_t)L_105+(int32_t)L_107));
	}

IL_033f:
	{
		goto IL_035b;
	}

IL_0344:
	{
		t1040 * L_108 = (__this->f7);
		t47* L_109 = (__this->f3);
		int32_t L_110 = V_7;
		int32_t L_111 = V_8;
		int32_t L_112 = m4302(L_108, L_109, L_110, L_111, NULL);
		V_7 = L_112;
	}

IL_035b:
	{
		int32_t L_113 = V_7;
		if ((((int32_t)L_113) >= ((int32_t)0)))
		{
			goto IL_0368;
		}
	}
	{
		goto IL_03cd;
	}

IL_0368:
	{
		bool L_114 = V_11;
		if (!L_114)
		{
			goto IL_0379;
		}
	}
	{
		int32_t L_115 = V_7;
		int32_t L_116 = V_5;
		G_B69_0 = ((int32_t)((int32_t)L_115+(int32_t)L_116));
		goto IL_037e;
	}

IL_0379:
	{
		int32_t L_117 = V_7;
		int32_t L_118 = V_5;
		G_B69_0 = ((int32_t)((int32_t)L_117-(int32_t)L_118));
	}

IL_037e:
	{
		V_0 = G_B69_0;
		int32_t L_119 = p2;
		int32_t L_120 = V_4;
		bool L_121 = m4221(__this, (&V_0), ((int32_t)((int32_t)L_119+(int32_t)L_120)), NULL);
		if (!L_121)
		{
			goto IL_0395;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0395:
	{
		bool L_122 = V_11;
		if (!L_122)
		{
			goto IL_03a7;
		}
	}
	{
		int32_t L_123 = V_7;
		V_7 = ((int32_t)((int32_t)L_123-(int32_t)2));
		goto IL_03ad;
	}

IL_03a7:
	{
		int32_t L_124 = V_7;
		V_7 = ((int32_t)((int32_t)L_124+(int32_t)1));
	}

IL_03ad:
	{
		bool L_125 = V_6;
		if (!L_125)
		{
			goto IL_03bd;
		}
	}
	{
		int32_t L_126 = V_7;
		int32_t L_127 = V_9;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_0309;
		}
	}

IL_03bd:
	{
		bool L_128 = V_6;
		if (L_128)
		{
			goto IL_03cd;
		}
	}
	{
		int32_t L_129 = V_7;
		int32_t L_130 = V_8;
		if ((((int32_t)L_129) <= ((int32_t)L_130)))
		{
			goto IL_0309;
		}
	}

IL_03cd:
	{
		goto IL_04b3;
	}

IL_03d2:
	{
		uint16_t L_131 = V_10;
		if ((!(((uint32_t)L_131) == ((uint32_t)1))))
		{
			goto IL_0435;
		}
	}
	{
		goto IL_0410;
	}

IL_03df:
	{
		int32_t L_132 = V_7;
		V_0 = L_132;
		int32_t L_133 = p2;
		int32_t L_134 = V_4;
		bool L_135 = m4221(__this, (&V_0), ((int32_t)((int32_t)L_133+(int32_t)L_134)), NULL);
		if (!L_135)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_03f8:
	{
		bool L_136 = V_6;
		if (!L_136)
		{
			goto IL_040a;
		}
	}
	{
		int32_t L_137 = V_7;
		V_7 = ((int32_t)((int32_t)L_137-(int32_t)1));
		goto IL_0410;
	}

IL_040a:
	{
		int32_t L_138 = V_7;
		V_7 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0410:
	{
		bool L_139 = V_6;
		if (!L_139)
		{
			goto IL_0420;
		}
	}
	{
		int32_t L_140 = V_7;
		int32_t L_141 = V_9;
		if ((((int32_t)L_140) >= ((int32_t)L_141)))
		{
			goto IL_03df;
		}
	}

IL_0420:
	{
		bool L_142 = V_6;
		if (L_142)
		{
			goto IL_0430;
		}
	}
	{
		int32_t L_143 = V_7;
		int32_t L_144 = V_8;
		if ((((int32_t)L_143) <= ((int32_t)L_144)))
		{
			goto IL_03df;
		}
	}

IL_0430:
	{
		goto IL_04b3;
	}

IL_0435:
	{
		goto IL_0493;
	}

IL_043a:
	{
		int32_t L_145 = V_7;
		V_0 = L_145;
		int32_t L_146 = p2;
		bool L_147 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_146+(int32_t)3)), NULL);
		if (!L_147)
		{
			goto IL_047b;
		}
	}
	{
		bool L_148 = V_6;
		if (!L_148)
		{
			goto IL_045f;
		}
	}
	{
		int32_t L_149 = V_7;
		int32_t L_150 = V_5;
		G_B96_0 = ((int32_t)((int32_t)L_149+(int32_t)L_150));
		goto IL_0464;
	}

IL_045f:
	{
		int32_t L_151 = V_7;
		int32_t L_152 = V_5;
		G_B96_0 = ((int32_t)((int32_t)L_151-(int32_t)L_152));
	}

IL_0464:
	{
		V_0 = G_B96_0;
		int32_t L_153 = p2;
		int32_t L_154 = V_4;
		bool L_155 = m4221(__this, (&V_0), ((int32_t)((int32_t)L_153+(int32_t)L_154)), NULL);
		if (!L_155)
		{
			goto IL_047b;
		}
	}
	{
		goto IL_0ff3;
	}

IL_047b:
	{
		bool L_156 = V_6;
		if (!L_156)
		{
			goto IL_048d;
		}
	}
	{
		int32_t L_157 = V_7;
		V_7 = ((int32_t)((int32_t)L_157-(int32_t)1));
		goto IL_0493;
	}

IL_048d:
	{
		int32_t L_158 = V_7;
		V_7 = ((int32_t)((int32_t)L_158+(int32_t)1));
	}

IL_0493:
	{
		bool L_159 = V_6;
		if (!L_159)
		{
			goto IL_04a3;
		}
	}
	{
		int32_t L_160 = V_7;
		int32_t L_161 = V_9;
		if ((((int32_t)L_160) >= ((int32_t)L_161)))
		{
			goto IL_043a;
		}
	}

IL_04a3:
	{
		bool L_162 = V_6;
		if (L_162)
		{
			goto IL_04b3;
		}
	}
	{
		int32_t L_163 = V_7;
		int32_t L_164 = V_8;
		if ((((int32_t)L_163) <= ((int32_t)L_164)))
		{
			goto IL_043a;
		}
	}

IL_04b3:
	{
		goto IL_1067;
	}

IL_04b8:
	{
		goto IL_1067;
	}

IL_04bd:
	{
		goto IL_0ff3;
	}

IL_04c2:
	{
		t948* L_165 = (__this->f1);
		int32_t L_166 = p2;
		int32_t L_167 = ((int32_t)((int32_t)L_166+(int32_t)1));
		int32_t L_168 = V_0;
		bool L_169 = m4222(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_165, L_167)), L_168, NULL);
		if (L_169)
		{
			goto IL_04dd;
		}
	}
	{
		goto IL_1067;
	}

IL_04dd:
	{
		int32_t L_170 = p2;
		p2 = ((int32_t)((int32_t)L_170+(int32_t)2));
		goto IL_0fee;
	}

IL_04e7:
	{
		uint16_t L_171 = V_3;
		V_14 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_171&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_172 = V_3;
		V_15 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_172&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t948* L_173 = (__this->f1);
		int32_t L_174 = p2;
		int32_t L_175 = ((int32_t)((int32_t)L_174+(int32_t)1));
		V_16 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_173, L_175));
		bool L_176 = V_14;
		if (!L_176)
		{
			goto IL_0530;
		}
	}
	{
		int32_t L_177 = V_0;
		int32_t L_178 = V_16;
		V_0 = ((int32_t)((int32_t)L_177-(int32_t)L_178));
		int32_t L_179 = V_0;
		if ((((int32_t)L_179) >= ((int32_t)0)))
		{
			goto IL_052b;
		}
	}
	{
		goto IL_1067;
	}

IL_052b:
	{
		goto IL_0544;
	}

IL_0530:
	{
		int32_t L_180 = V_0;
		int32_t L_181 = V_16;
		int32_t L_182 = (__this->f4);
		if ((((int32_t)((int32_t)((int32_t)L_180+(int32_t)L_181))) <= ((int32_t)L_182)))
		{
			goto IL_0544;
		}
	}
	{
		goto IL_1067;
	}

IL_0544:
	{
		int32_t L_183 = p2;
		p2 = ((int32_t)((int32_t)L_183+(int32_t)2));
		V_17 = 0;
		goto IL_0591;
	}

IL_0551:
	{
		t47* L_184 = (__this->f3);
		int32_t L_185 = V_0;
		int32_t L_186 = V_17;
		uint16_t L_187 = m1754(L_184, ((int32_t)((int32_t)L_185+(int32_t)L_186)), NULL);
		V_18 = L_187;
		bool L_188 = V_15;
		if (!L_188)
		{
			goto IL_0572;
		}
	}
	{
		uint16_t L_189 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		uint16_t L_190 = m1816(NULL, L_189, NULL);
		V_18 = L_190;
	}

IL_0572:
	{
		uint16_t L_191 = V_18;
		t948* L_192 = (__this->f1);
		int32_t L_193 = p2;
		int32_t L_194 = L_193;
		p2 = ((int32_t)((int32_t)L_194+(int32_t)1));
		int32_t L_195 = L_194;
		if ((((int32_t)L_191) == ((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_192, L_195)))))
		{
			goto IL_058b;
		}
	}
	{
		goto IL_1067;
	}

IL_058b:
	{
		int32_t L_196 = V_17;
		V_17 = ((int32_t)((int32_t)L_196+(int32_t)1));
	}

IL_0591:
	{
		int32_t L_197 = V_17;
		int32_t L_198 = V_16;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_0551;
		}
	}
	{
		bool L_199 = V_14;
		if (L_199)
		{
			goto IL_05a6;
		}
	}
	{
		int32_t L_200 = V_0;
		int32_t L_201 = V_16;
		V_0 = ((int32_t)((int32_t)L_200+(int32_t)L_201));
	}

IL_05a6:
	{
		goto IL_0fee;
	}

IL_05ab:
	{
		uint16_t L_202 = V_3;
		V_19 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_202&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_203 = V_3;
		V_20 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_203&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t948* L_204 = (__this->f1);
		int32_t L_205 = p2;
		int32_t L_206 = ((int32_t)((int32_t)L_205+(int32_t)1));
		int32_t L_207 = m4231(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_204, L_206)), NULL);
		V_21 = L_207;
		int32_t L_208 = V_21;
		if ((((int32_t)L_208) >= ((int32_t)0)))
		{
			goto IL_05ea;
		}
	}
	{
		goto IL_1067;
	}

IL_05ea:
	{
		t1041* L_209 = (__this->f13);
		int32_t L_210 = V_21;
		int32_t L_211 = m4199(((t1035 *)(t1035 *)SZArrayLdElema(L_209, L_210)), NULL);
		V_22 = L_211;
		t1041* L_212 = (__this->f13);
		int32_t L_213 = V_21;
		int32_t L_214 = m4200(((t1035 *)(t1035 *)SZArrayLdElema(L_212, L_213)), NULL);
		V_23 = L_214;
		bool L_215 = V_19;
		if (!L_215)
		{
			goto IL_062f;
		}
	}
	{
		int32_t L_216 = V_0;
		int32_t L_217 = V_23;
		V_0 = ((int32_t)((int32_t)L_216-(int32_t)L_217));
		int32_t L_218 = V_0;
		if ((((int32_t)L_218) >= ((int32_t)0)))
		{
			goto IL_062a;
		}
	}
	{
		goto IL_1067;
	}

IL_062a:
	{
		goto IL_0643;
	}

IL_062f:
	{
		int32_t L_219 = V_0;
		int32_t L_220 = V_23;
		int32_t L_221 = (__this->f4);
		if ((((int32_t)((int32_t)((int32_t)L_219+(int32_t)L_220))) <= ((int32_t)L_221)))
		{
			goto IL_0643;
		}
	}
	{
		goto IL_1067;
	}

IL_0643:
	{
		int32_t L_222 = p2;
		p2 = ((int32_t)((int32_t)L_222+(int32_t)2));
		bool L_223 = V_20;
		if (!L_223)
		{
			goto IL_069e;
		}
	}
	{
		V_24 = 0;
		goto IL_0690;
	}

IL_0657:
	{
		t47* L_224 = (__this->f3);
		int32_t L_225 = V_0;
		int32_t L_226 = V_24;
		uint16_t L_227 = m1754(L_224, ((int32_t)((int32_t)L_225+(int32_t)L_226)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		uint16_t L_228 = m1816(NULL, L_227, NULL);
		t47* L_229 = (__this->f3);
		int32_t L_230 = V_22;
		int32_t L_231 = V_24;
		uint16_t L_232 = m1754(L_229, ((int32_t)((int32_t)L_230+(int32_t)L_231)), NULL);
		uint16_t L_233 = m1816(NULL, L_232, NULL);
		if ((((int32_t)L_228) == ((int32_t)L_233)))
		{
			goto IL_068a;
		}
	}
	{
		goto IL_1067;
	}

IL_068a:
	{
		int32_t L_234 = V_24;
		V_24 = ((int32_t)((int32_t)L_234+(int32_t)1));
	}

IL_0690:
	{
		int32_t L_235 = V_24;
		int32_t L_236 = V_23;
		if ((((int32_t)L_235) < ((int32_t)L_236)))
		{
			goto IL_0657;
		}
	}
	{
		goto IL_06de;
	}

IL_069e:
	{
		V_25 = 0;
		goto IL_06d5;
	}

IL_06a6:
	{
		t47* L_237 = (__this->f3);
		int32_t L_238 = V_0;
		int32_t L_239 = V_25;
		uint16_t L_240 = m1754(L_237, ((int32_t)((int32_t)L_238+(int32_t)L_239)), NULL);
		t47* L_241 = (__this->f3);
		int32_t L_242 = V_22;
		int32_t L_243 = V_25;
		uint16_t L_244 = m1754(L_241, ((int32_t)((int32_t)L_242+(int32_t)L_243)), NULL);
		if ((((int32_t)L_240) == ((int32_t)L_244)))
		{
			goto IL_06cf;
		}
	}
	{
		goto IL_1067;
	}

IL_06cf:
	{
		int32_t L_245 = V_25;
		V_25 = ((int32_t)((int32_t)L_245+(int32_t)1));
	}

IL_06d5:
	{
		int32_t L_246 = V_25;
		int32_t L_247 = V_23;
		if ((((int32_t)L_246) < ((int32_t)L_247)))
		{
			goto IL_06a6;
		}
	}

IL_06de:
	{
		bool L_248 = V_19;
		if (L_248)
		{
			goto IL_06ea;
		}
	}
	{
		int32_t L_249 = V_0;
		int32_t L_250 = V_23;
		V_0 = ((int32_t)((int32_t)L_249+(int32_t)L_250));
	}

IL_06ea:
	{
		goto IL_0fee;
	}

IL_06ef:
	{
		int32_t L_251 = p0;
		bool L_252 = m4220(__this, L_251, (&V_0), (&p2), 0, NULL);
		if (L_252)
		{
			goto IL_0705;
		}
	}
	{
		goto IL_1067;
	}

IL_0705:
	{
		goto IL_0fee;
	}

IL_070a:
	{
		int32_t L_253 = p2;
		t948* L_254 = (__this->f1);
		int32_t L_255 = p2;
		int32_t L_256 = ((int32_t)((int32_t)L_255+(int32_t)1));
		V_26 = ((int32_t)((int32_t)L_253+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_254, L_256))));
		int32_t L_257 = p2;
		p2 = ((int32_t)((int32_t)L_257+(int32_t)2));
		int32_t L_258 = p0;
		bool L_259 = m4220(__this, L_258, (&V_0), (&p2), 1, NULL);
		if (L_259)
		{
			goto IL_0733;
		}
	}
	{
		goto IL_1067;
	}

IL_0733:
	{
		int32_t L_260 = V_26;
		p2 = L_260;
		goto IL_0fee;
	}

IL_073c:
	{
		t948* L_261 = (__this->f1);
		int32_t L_262 = p2;
		int32_t L_263 = ((int32_t)((int32_t)L_262+(int32_t)1));
		int32_t L_264 = V_0;
		m4225(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_261, L_263)), L_264, NULL);
		int32_t L_265 = p2;
		p2 = ((int32_t)((int32_t)L_265+(int32_t)2));
		goto IL_0fee;
	}

IL_0757:
	{
		t948* L_266 = (__this->f1);
		int32_t L_267 = p2;
		int32_t L_268 = ((int32_t)((int32_t)L_267+(int32_t)1));
		int32_t L_269 = V_0;
		m4226(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_266, L_268)), L_269, NULL);
		int32_t L_270 = p2;
		p2 = ((int32_t)((int32_t)L_270+(int32_t)2));
		goto IL_0fee;
	}

IL_0772:
	{
		int32_t L_271 = V_0;
		V_27 = L_271;
		int32_t L_272 = p2;
		bool L_273 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_272+(int32_t)5)), NULL);
		if (L_273)
		{
			goto IL_078b;
		}
	}
	{
		goto IL_1067;
	}

IL_078b:
	{
		t948* L_274 = (__this->f1);
		int32_t L_275 = p2;
		int32_t L_276 = ((int32_t)((int32_t)L_275+(int32_t)1));
		t948* L_277 = (__this->f1);
		int32_t L_278 = p2;
		int32_t L_279 = ((int32_t)((int32_t)L_278+(int32_t)2));
		t948* L_280 = (__this->f1);
		int32_t L_281 = p2;
		int32_t L_282 = ((int32_t)((int32_t)L_281+(int32_t)3));
		G_B161_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_277, L_279))));
		G_B161_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_274, L_276))));
		G_B161_2 = __this;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_280, L_282))) == ((uint32_t)1))))
		{
			G_B162_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_277, L_279))));
			G_B162_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_274, L_276))));
			G_B162_2 = __this;
			goto IL_07b6;
		}
	}
	{
		G_B163_0 = 1;
		G_B163_1 = G_B161_0;
		G_B163_2 = G_B161_1;
		G_B163_3 = G_B161_2;
		goto IL_07b7;
	}

IL_07b6:
	{
		G_B163_0 = 0;
		G_B163_1 = G_B162_0;
		G_B163_2 = G_B162_1;
		G_B163_3 = G_B162_2;
	}

IL_07b7:
	{
		int32_t L_283 = V_27;
		bool L_284 = m4227(G_B163_3, G_B163_2, G_B163_1, G_B163_0, L_283, NULL);
		if (L_284)
		{
			goto IL_07c8;
		}
	}
	{
		goto IL_1067;
	}

IL_07c8:
	{
		int32_t L_285 = p2;
		t948* L_286 = (__this->f1);
		int32_t L_287 = p2;
		int32_t L_288 = ((int32_t)((int32_t)L_287+(int32_t)4));
		p2 = ((int32_t)((int32_t)L_285+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_286, L_288))));
		goto IL_0fee;
	}

IL_07db:
	{
		goto IL_0ff3;
	}

IL_07e0:
	{
		t948* L_289 = (__this->f1);
		int32_t L_290 = p2;
		int32_t L_291 = ((int32_t)((int32_t)L_290+(int32_t)2));
		int32_t L_292 = m4231(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_289, L_291)), NULL);
		V_28 = L_292;
		int32_t L_293 = V_28;
		if ((((int32_t)L_293) >= ((int32_t)0)))
		{
			goto IL_080d;
		}
	}
	{
		int32_t L_294 = p2;
		t948* L_295 = (__this->f1);
		int32_t L_296 = p2;
		int32_t L_297 = ((int32_t)((int32_t)L_296+(int32_t)1));
		p2 = ((int32_t)((int32_t)L_294+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_295, L_297))));
		goto IL_0812;
	}

IL_080d:
	{
		int32_t L_298 = p2;
		p2 = ((int32_t)((int32_t)L_298+(int32_t)3));
	}

IL_0812:
	{
		goto IL_0fee;
	}

IL_0817:
	{
		int32_t L_299 = p2;
		bool L_300 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_299+(int32_t)2)), NULL);
		if (L_300)
		{
			goto IL_082d;
		}
	}
	{
		goto IL_1067;
	}

IL_082d:
	{
		int32_t L_301 = p2;
		t948* L_302 = (__this->f1);
		int32_t L_303 = p2;
		int32_t L_304 = ((int32_t)((int32_t)L_303+(int32_t)1));
		p2 = ((int32_t)((int32_t)L_301+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_302, L_304))));
		goto IL_0fee;
	}

IL_0840:
	{
		int32_t L_305 = m4228(__this, NULL);
		V_29 = L_305;
		int32_t L_306 = V_0;
		V_30 = L_306;
		int32_t L_307 = p2;
		bool L_308 = m4219(__this, 1, (&V_30), ((int32_t)((int32_t)L_307+(int32_t)3)), NULL);
		if (!L_308)
		{
			goto IL_086f;
		}
	}
	{
		int32_t L_309 = p2;
		t948* L_310 = (__this->f1);
		int32_t L_311 = p2;
		int32_t L_312 = ((int32_t)((int32_t)L_311+(int32_t)1));
		p2 = ((int32_t)((int32_t)L_309+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_310, L_312))));
		goto IL_0885;
	}

IL_086f:
	{
		int32_t L_313 = V_29;
		m4229(__this, L_313, NULL);
		int32_t L_314 = p2;
		t948* L_315 = (__this->f1);
		int32_t L_316 = p2;
		int32_t L_317 = ((int32_t)((int32_t)L_316+(int32_t)2));
		p2 = ((int32_t)((int32_t)L_314+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_315, L_317))));
	}

IL_0885:
	{
		goto IL_0fee;
	}

IL_088a:
	{
		int32_t L_318 = m4228(__this, NULL);
		V_32 = L_318;
		int32_t L_319 = p2;
		bool L_320 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_319+(int32_t)2)), NULL);
		if (!L_320)
		{
			goto IL_08a8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_08a8:
	{
		int32_t L_321 = V_32;
		m4229(__this, L_321, NULL);
		int32_t L_322 = p2;
		t948* L_323 = (__this->f1);
		int32_t L_324 = p2;
		int32_t L_325 = ((int32_t)((int32_t)L_324+(int32_t)1));
		p2 = ((int32_t)((int32_t)L_322+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_323, L_325))));
		t948* L_326 = (__this->f1);
		int32_t L_327 = p2;
		int32_t L_328 = L_327;
		V_31 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_326, L_328))&(int32_t)((int32_t)255)))));
		uint16_t L_329 = V_31;
		if (L_329)
		{
			goto IL_088a;
		}
	}
	{
		goto IL_1067;
	}

IL_08db:
	{
		int32_t L_330 = p2;
		t948* L_331 = (__this->f1);
		int32_t L_332 = p2;
		int32_t L_333 = ((int32_t)((int32_t)L_332+(int32_t)1));
		p2 = ((int32_t)((int32_t)L_330+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_331, L_333))));
		goto IL_0fee;
	}

IL_08ee:
	{
		t1037 * L_334 = (__this->f9);
		int32_t L_335 = p2;
		int32_t L_336 = m4216(__this, ((int32_t)((int32_t)L_335+(int32_t)2)), NULL);
		int32_t L_337 = p2;
		int32_t L_338 = m4216(__this, ((int32_t)((int32_t)L_337+(int32_t)4)), NULL);
		uint16_t L_339 = V_3;
		int32_t L_340 = p2;
		t1037 * L_341 = (t1037 *)il2cpp_codegen_object_new (t1037_TI_var);
		m4205(L_341, L_334, L_336, L_338, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_339&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)((int32_t)L_340+(int32_t)6)), NULL);
		__this->f9 = L_341;
		int32_t L_342 = p2;
		t948* L_343 = (__this->f1);
		int32_t L_344 = p2;
		int32_t L_345 = ((int32_t)((int32_t)L_344+(int32_t)1));
		bool L_346 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_342+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_343, L_345)))), NULL);
		if (!L_346)
		{
			goto IL_0941;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0941:
	{
		t1037 * L_347 = (__this->f9);
		t1037 * L_348 = m4214(L_347, NULL);
		__this->f9 = L_348;
		goto IL_1067;
	}

IL_0957:
	{
		t1037 * L_349 = (__this->f9);
		V_33 = L_349;
		t1037 * L_350 = (__this->f12);
		t1037 * L_351 = V_33;
		if ((!(((t7*)(t1037 *)L_350) == ((t7*)(t1037 *)L_351))))
		{
			goto IL_0971;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0971:
	{
		t1037 * L_352 = V_33;
		int32_t L_353 = m4208(L_352, NULL);
		V_34 = L_353;
		t1037 * L_354 = V_33;
		int32_t L_355 = m4206(L_354, NULL);
		V_35 = L_355;
		goto IL_09e5;
	}

IL_0988:
	{
		t1037 * L_356 = V_33;
		t1037 * L_357 = L_356;
		int32_t L_358 = m4206(L_357, NULL);
		m4207(L_357, ((int32_t)((int32_t)L_358+(int32_t)1)), NULL);
		t1037 * L_359 = V_33;
		int32_t L_360 = V_0;
		m4209(L_359, L_360, NULL);
		t1037 * L_361 = V_33;
		__this->f12 = L_361;
		t1037 * L_362 = V_33;
		int32_t L_363 = m4213(L_362, NULL);
		bool L_364 = m4219(__this, 1, (&V_0), L_363, NULL);
		if (L_364)
		{
			goto IL_09d3;
		}
	}
	{
		t1037 * L_365 = V_33;
		int32_t L_366 = V_34;
		m4209(L_365, L_366, NULL);
		t1037 * L_367 = V_33;
		int32_t L_368 = V_35;
		m4207(L_367, L_368, NULL);
		goto IL_1067;
	}

IL_09d3:
	{
		t1037 * L_369 = (__this->f12);
		t1037 * L_370 = V_33;
		if ((((t7*)(t1037 *)L_369) == ((t7*)(t1037 *)L_370)))
		{
			goto IL_09e5;
		}
	}
	{
		goto IL_0ff3;
	}

IL_09e5:
	{
		t1037 * L_371 = V_33;
		bool L_372 = m4210(L_371, NULL);
		if (!L_372)
		{
			goto IL_0988;
		}
	}
	{
		int32_t L_373 = V_0;
		t1037 * L_374 = V_33;
		int32_t L_375 = m4208(L_374, NULL);
		if ((!(((uint32_t)L_373) == ((uint32_t)L_375))))
		{
			goto IL_0a35;
		}
	}
	{
		t1037 * L_376 = V_33;
		t1037 * L_377 = m4214(L_376, NULL);
		__this->f9 = L_377;
		__this->f12 = (t1037 *)NULL;
		int32_t L_378 = p2;
		bool L_379 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_378+(int32_t)1)), NULL);
		if (!L_379)
		{
			goto IL_0a28;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a28:
	{
		t1037 * L_380 = V_33;
		__this->f9 = L_380;
		goto IL_1067;
	}

IL_0a35:
	{
		t1037 * L_381 = V_33;
		bool L_382 = m4212(L_381, NULL);
		if (!L_382)
		{
			goto IL_0b0d;
		}
	}
	{
		goto IL_0b08;
	}

IL_0a46:
	{
		t1037 * L_383 = V_33;
		t1037 * L_384 = m4214(L_383, NULL);
		__this->f9 = L_384;
		__this->f12 = (t1037 *)NULL;
		int32_t L_385 = m4228(__this, NULL);
		V_36 = L_385;
		int32_t L_386 = p2;
		bool L_387 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_386+(int32_t)1)), NULL);
		if (!L_387)
		{
			goto IL_0a78;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a78:
	{
		int32_t L_388 = V_36;
		m4229(__this, L_388, NULL);
		t1037 * L_389 = V_33;
		__this->f9 = L_389;
		t1037 * L_390 = V_33;
		bool L_391 = m4211(L_390, NULL);
		if (!L_391)
		{
			goto IL_0a99;
		}
	}
	{
		goto IL_1067;
	}

IL_0a99:
	{
		t1037 * L_392 = V_33;
		t1037 * L_393 = L_392;
		int32_t L_394 = m4206(L_393, NULL);
		m4207(L_393, ((int32_t)((int32_t)L_394+(int32_t)1)), NULL);
		t1037 * L_395 = V_33;
		int32_t L_396 = V_0;
		m4209(L_395, L_396, NULL);
		t1037 * L_397 = V_33;
		__this->f12 = L_397;
		t1037 * L_398 = V_33;
		int32_t L_399 = m4213(L_398, NULL);
		bool L_400 = m4219(__this, 1, (&V_0), L_399, NULL);
		if (L_400)
		{
			goto IL_0ae4;
		}
	}
	{
		t1037 * L_401 = V_33;
		int32_t L_402 = V_34;
		m4209(L_401, L_402, NULL);
		t1037 * L_403 = V_33;
		int32_t L_404 = V_35;
		m4207(L_403, L_404, NULL);
		goto IL_1067;
	}

IL_0ae4:
	{
		t1037 * L_405 = (__this->f12);
		t1037 * L_406 = V_33;
		if ((((t7*)(t1037 *)L_405) == ((t7*)(t1037 *)L_406)))
		{
			goto IL_0af6;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0af6:
	{
		int32_t L_407 = V_0;
		t1037 * L_408 = V_33;
		int32_t L_409 = m4208(L_408, NULL);
		if ((!(((uint32_t)L_407) == ((uint32_t)L_409))))
		{
			goto IL_0b08;
		}
	}
	{
		goto IL_1067;
	}

IL_0b08:
	{
		goto IL_0a46;
	}

IL_0b0d:
	{
		t1036 * L_410 = &(__this->f11);
		int32_t L_411 = m4203(L_410, NULL);
		V_37 = L_411;
		goto IL_0bd7;
	}

IL_0b1f:
	{
		int32_t L_412 = m4228(__this, NULL);
		V_38 = L_412;
		int32_t L_413 = V_0;
		V_39 = L_413;
		t1037 * L_414 = V_33;
		int32_t L_415 = m4208(L_414, NULL);
		V_40 = L_415;
		t1037 * L_416 = V_33;
		t1037 * L_417 = L_416;
		int32_t L_418 = m4206(L_417, NULL);
		m4207(L_417, ((int32_t)((int32_t)L_418+(int32_t)1)), NULL);
		t1037 * L_419 = V_33;
		int32_t L_420 = V_0;
		m4209(L_419, L_420, NULL);
		t1037 * L_421 = V_33;
		__this->f12 = L_421;
		t1037 * L_422 = V_33;
		int32_t L_423 = m4213(L_422, NULL);
		bool L_424 = m4219(__this, 1, (&V_0), L_423, NULL);
		if (L_424)
		{
			goto IL_0b8c;
		}
	}
	{
		t1037 * L_425 = V_33;
		t1037 * L_426 = L_425;
		int32_t L_427 = m4206(L_426, NULL);
		m4207(L_426, ((int32_t)((int32_t)L_427-(int32_t)1)), NULL);
		t1037 * L_428 = V_33;
		int32_t L_429 = V_40;
		m4209(L_428, L_429, NULL);
		int32_t L_430 = V_38;
		m4229(__this, L_430, NULL);
		goto IL_0be3;
	}

IL_0b8c:
	{
		t1037 * L_431 = (__this->f12);
		t1037 * L_432 = V_33;
		if ((((t7*)(t1037 *)L_431) == ((t7*)(t1037 *)L_432)))
		{
			goto IL_0bab;
		}
	}
	{
		t1036 * L_433 = &(__this->f11);
		int32_t L_434 = V_37;
		m4204(L_433, L_434, NULL);
		goto IL_0ff3;
	}

IL_0bab:
	{
		t1036 * L_435 = &(__this->f11);
		int32_t L_436 = V_38;
		m4202(L_435, L_436, NULL);
		t1036 * L_437 = &(__this->f11);
		int32_t L_438 = V_39;
		m4202(L_437, L_438, NULL);
		int32_t L_439 = V_0;
		t1037 * L_440 = V_33;
		int32_t L_441 = m4208(L_440, NULL);
		if ((!(((uint32_t)L_439) == ((uint32_t)L_441))))
		{
			goto IL_0bd7;
		}
	}
	{
		goto IL_0be3;
	}

IL_0bd7:
	{
		t1037 * L_442 = V_33;
		bool L_443 = m4211(L_442, NULL);
		if (!L_443)
		{
			goto IL_0b1f;
		}
	}

IL_0be3:
	{
		t1037 * L_444 = V_33;
		t1037 * L_445 = m4214(L_444, NULL);
		__this->f9 = L_445;
		goto IL_0c6a;
	}

IL_0bf5:
	{
		__this->f12 = (t1037 *)NULL;
		int32_t L_446 = p2;
		bool L_447 = m4219(__this, 1, (&V_0), ((int32_t)((int32_t)L_446+(int32_t)1)), NULL);
		if (!L_447)
		{
			goto IL_0c1f;
		}
	}
	{
		t1036 * L_448 = &(__this->f11);
		int32_t L_449 = V_37;
		m4204(L_448, L_449, NULL);
		goto IL_0ff3;
	}

IL_0c1f:
	{
		t1036 * L_450 = &(__this->f11);
		int32_t L_451 = m4203(L_450, NULL);
		int32_t L_452 = V_37;
		if ((!(((uint32_t)L_451) == ((uint32_t)L_452))))
		{
			goto IL_0c3e;
		}
	}
	{
		t1037 * L_453 = V_33;
		__this->f9 = L_453;
		goto IL_1067;
	}

IL_0c3e:
	{
		t1037 * L_454 = V_33;
		t1037 * L_455 = L_454;
		int32_t L_456 = m4206(L_455, NULL);
		m4207(L_455, ((int32_t)((int32_t)L_456-(int32_t)1)), NULL);
		t1036 * L_457 = &(__this->f11);
		int32_t L_458 = m4201(L_457, NULL);
		V_0 = L_458;
		t1036 * L_459 = &(__this->f11);
		int32_t L_460 = m4201(L_459, NULL);
		m4229(__this, L_460, NULL);
	}

IL_0c6a:
	{
		goto IL_0bf5;
	}

IL_0c6f:
	{
		t1037 * L_461 = (__this->f10);
		int32_t L_462 = p2;
		int32_t L_463 = m4216(__this, ((int32_t)((int32_t)L_462+(int32_t)2)), NULL);
		int32_t L_464 = p2;
		int32_t L_465 = m4216(__this, ((int32_t)((int32_t)L_464+(int32_t)4)), NULL);
		uint16_t L_466 = V_3;
		int32_t L_467 = p2;
		t1037 * L_468 = (t1037 *)il2cpp_codegen_object_new (t1037_TI_var);
		m4205(L_468, L_461, L_463, L_465, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_466&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)((int32_t)L_467+(int32_t)6)), NULL);
		__this->f10 = L_468;
		t1037 * L_469 = (__this->f10);
		int32_t L_470 = V_0;
		m4209(L_469, L_470, NULL);
		int32_t L_471 = m4228(__this, NULL);
		V_41 = L_471;
		int32_t L_472 = p2;
		t948* L_473 = (__this->f1);
		int32_t L_474 = p2;
		int32_t L_475 = ((int32_t)((int32_t)L_474+(int32_t)1));
		p2 = ((int32_t)((int32_t)L_472+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_473, L_475))));
		t948* L_476 = (__this->f1);
		int32_t L_477 = p2;
		int32_t L_478 = L_477;
		V_42 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_476, L_478));
		V_43 = (-1);
		V_44 = (-1);
		V_45 = 0;
		uint16_t L_479 = V_42;
		V_46 = (((uint16_t)((int32_t)((int32_t)L_479&(int32_t)((int32_t)255)))));
		uint16_t L_480 = V_46;
		if ((((int32_t)L_480) == ((int32_t)5)))
		{
			goto IL_0cf3;
		}
	}
	{
		uint16_t L_481 = V_46;
		if ((!(((uint32_t)L_481) == ((uint32_t)3))))
		{
			goto IL_0d92;
		}
	}

IL_0cf3:
	{
		uint16_t L_482 = V_42;
		V_47 = (((uint16_t)((int32_t)((int32_t)L_482&(int32_t)((int32_t)65280)))));
		uint16_t L_483 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_483&(int32_t)((int32_t)256))))))
		{
			goto IL_0d11;
		}
	}
	{
		goto IL_0d92;
	}

IL_0d11:
	{
		uint16_t L_484 = V_46;
		if ((!(((uint32_t)L_484) == ((uint32_t)3))))
		{
			goto IL_0d4c;
		}
	}
	{
		V_48 = 0;
		uint16_t L_485 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_485&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d38;
		}
	}
	{
		t948* L_486 = (__this->f1);
		int32_t L_487 = p2;
		int32_t L_488 = ((int32_t)((int32_t)L_487+(int32_t)1));
		V_48 = ((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_486, L_488))-(int32_t)1));
	}

IL_0d38:
	{
		t948* L_489 = (__this->f1);
		int32_t L_490 = p2;
		int32_t L_491 = V_48;
		int32_t L_492 = ((int32_t)((int32_t)((int32_t)((int32_t)L_490+(int32_t)2))+(int32_t)L_491));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_489, L_492));
		goto IL_0d58;
	}

IL_0d4c:
	{
		t948* L_493 = (__this->f1);
		int32_t L_494 = p2;
		int32_t L_495 = ((int32_t)((int32_t)L_494+(int32_t)1));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_493, L_495));
	}

IL_0d58:
	{
		uint16_t L_496 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_496&(int32_t)((int32_t)512))))))
		{
			goto IL_0d75;
		}
	}
	{
		int32_t L_497 = V_43;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		uint16_t L_498 = m1814(NULL, (((uint16_t)L_497)), NULL);
		V_44 = L_498;
		goto IL_0d79;
	}

IL_0d75:
	{
		int32_t L_499 = V_43;
		V_44 = L_499;
	}

IL_0d79:
	{
		uint16_t L_500 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_500&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d8f;
		}
	}
	{
		V_45 = (-1);
		goto IL_0d92;
	}

IL_0d8f:
	{
		V_45 = 0;
	}

IL_0d92:
	{
		t1037 * L_501 = (__this->f10);
		bool L_502 = m4212(L_501, NULL);
		if (!L_502)
		{
			goto IL_0ebf;
		}
	}
	{
		t1037 * L_503 = (__this->f10);
		bool L_504 = m4210(L_503, NULL);
		if (L_504)
		{
			goto IL_0de1;
		}
	}
	{
		t1037 * L_505 = (__this->f10);
		int32_t L_506 = m4213(L_505, NULL);
		bool L_507 = m4219(__this, 2, (&V_0), L_506, NULL);
		if (L_507)
		{
			goto IL_0de1;
		}
	}
	{
		t1037 * L_508 = (__this->f10);
		t1037 * L_509 = m4214(L_508, NULL);
		__this->f10 = L_509;
		goto IL_1067;
	}

IL_0de1:
	{
		int32_t L_510 = V_0;
		int32_t L_511 = V_45;
		V_49 = ((int32_t)((int32_t)L_510+(int32_t)L_511));
		int32_t L_512 = V_43;
		if ((((int32_t)L_512) < ((int32_t)0)))
		{
			goto IL_0e2c;
		}
	}
	{
		int32_t L_513 = V_49;
		if ((((int32_t)L_513) < ((int32_t)0)))
		{
			goto IL_0e47;
		}
	}
	{
		int32_t L_514 = V_49;
		int32_t L_515 = (__this->f4);
		if ((((int32_t)L_514) >= ((int32_t)L_515)))
		{
			goto IL_0e47;
		}
	}
	{
		int32_t L_516 = V_43;
		t47* L_517 = (__this->f3);
		int32_t L_518 = V_49;
		uint16_t L_519 = m1754(L_517, L_518, NULL);
		if ((((int32_t)L_516) == ((int32_t)L_519)))
		{
			goto IL_0e2c;
		}
	}
	{
		int32_t L_520 = V_44;
		t47* L_521 = (__this->f3);
		int32_t L_522 = V_49;
		uint16_t L_523 = m1754(L_521, L_522, NULL);
		if ((!(((uint32_t)L_520) == ((uint32_t)L_523))))
		{
			goto IL_0e47;
		}
	}

IL_0e2c:
	{
		__this->f12 = (t1037 *)NULL;
		int32_t L_524 = p2;
		bool L_525 = m4219(__this, 1, (&V_0), L_524, NULL);
		if (!L_525)
		{
			goto IL_0e47;
		}
	}
	{
		goto IL_0ea9;
	}

IL_0e47:
	{
		t1037 * L_526 = (__this->f10);
		bool L_527 = m4211(L_526, NULL);
		if (!L_527)
		{
			goto IL_0e6d;
		}
	}
	{
		t1037 * L_528 = (__this->f10);
		t1037 * L_529 = m4214(L_528, NULL);
		__this->f10 = L_529;
		goto IL_1067;
	}

IL_0e6d:
	{
		int32_t L_530 = V_41;
		m4229(__this, L_530, NULL);
		t1037 * L_531 = (__this->f10);
		int32_t L_532 = m4213(L_531, NULL);
		bool L_533 = m4219(__this, 2, (&V_0), L_532, NULL);
		if (L_533)
		{
			goto IL_0ea4;
		}
	}
	{
		t1037 * L_534 = (__this->f10);
		t1037 * L_535 = m4214(L_534, NULL);
		__this->f10 = L_535;
		goto IL_1067;
	}

IL_0ea4:
	{
		goto IL_0de1;
	}

IL_0ea9:
	{
		t1037 * L_536 = (__this->f10);
		t1037 * L_537 = m4214(L_536, NULL);
		__this->f10 = L_537;
		goto IL_0ff3;
	}

IL_0ebf:
	{
		t1037 * L_538 = (__this->f10);
		int32_t L_539 = m4213(L_538, NULL);
		bool L_540 = m4219(__this, 2, (&V_0), L_539, NULL);
		if (L_540)
		{
			goto IL_0eee;
		}
	}
	{
		t1037 * L_541 = (__this->f10);
		t1037 * L_542 = m4214(L_541, NULL);
		__this->f10 = L_542;
		goto IL_1067;
	}

IL_0eee:
	{
		t1037 * L_543 = (__this->f10);
		int32_t L_544 = m4206(L_543, NULL);
		if ((((int32_t)L_544) <= ((int32_t)0)))
		{
			goto IL_0f1f;
		}
	}
	{
		int32_t L_545 = V_0;
		t1037 * L_546 = (__this->f10);
		int32_t L_547 = m4208(L_546, NULL);
		t1037 * L_548 = (__this->f10);
		int32_t L_549 = m4206(L_548, NULL);
		V_50 = ((int32_t)((int32_t)((int32_t)((int32_t)L_545-(int32_t)L_547))/(int32_t)L_549));
		goto IL_0f22;
	}

IL_0f1f:
	{
		V_50 = 0;
	}

IL_0f22:
	{
		int32_t L_550 = V_0;
		int32_t L_551 = V_45;
		V_51 = ((int32_t)((int32_t)L_550+(int32_t)L_551));
		int32_t L_552 = V_43;
		if ((((int32_t)L_552) < ((int32_t)0)))
		{
			goto IL_0f6d;
		}
	}
	{
		int32_t L_553 = V_51;
		if ((((int32_t)L_553) < ((int32_t)0)))
		{
			goto IL_0f88;
		}
	}
	{
		int32_t L_554 = V_51;
		int32_t L_555 = (__this->f4);
		if ((((int32_t)L_554) >= ((int32_t)L_555)))
		{
			goto IL_0f88;
		}
	}
	{
		int32_t L_556 = V_43;
		t47* L_557 = (__this->f3);
		int32_t L_558 = V_51;
		uint16_t L_559 = m1754(L_557, L_558, NULL);
		if ((((int32_t)L_556) == ((int32_t)L_559)))
		{
			goto IL_0f6d;
		}
	}
	{
		int32_t L_560 = V_44;
		t47* L_561 = (__this->f3);
		int32_t L_562 = V_51;
		uint16_t L_563 = m1754(L_561, L_562, NULL);
		if ((!(((uint32_t)L_560) == ((uint32_t)L_563))))
		{
			goto IL_0f88;
		}
	}

IL_0f6d:
	{
		__this->f12 = (t1037 *)NULL;
		int32_t L_564 = p2;
		bool L_565 = m4219(__this, 1, (&V_0), L_564, NULL);
		if (!L_565)
		{
			goto IL_0f88;
		}
	}
	{
		goto IL_0fd3;
	}

IL_0f88:
	{
		t1037 * L_566 = (__this->f10);
		t1037 * L_567 = L_566;
		int32_t L_568 = m4206(L_567, NULL);
		m4207(L_567, ((int32_t)((int32_t)L_568-(int32_t)1)), NULL);
		t1037 * L_569 = (__this->f10);
		bool L_570 = m4210(L_569, NULL);
		if (L_570)
		{
			goto IL_0fc1;
		}
	}
	{
		t1037 * L_571 = (__this->f10);
		t1037 * L_572 = m4214(L_571, NULL);
		__this->f10 = L_572;
		goto IL_1067;
	}

IL_0fc1:
	{
		int32_t L_573 = V_0;
		int32_t L_574 = V_50;
		V_0 = ((int32_t)((int32_t)L_573-(int32_t)L_574));
		int32_t L_575 = V_41;
		m4229(__this, L_575, NULL);
		goto IL_0f22;
	}

IL_0fd3:
	{
		t1037 * L_576 = (__this->f10);
		t1037 * L_577 = m4214(L_576, NULL);
		__this->f10 = L_577;
		goto IL_0ff3;
	}

IL_0fe9:
	{
		goto IL_1067;
	}

IL_0fee:
	{
		goto IL_0008;
	}

IL_0ff3:
	{
		int32_t* L_578 = p1;
		int32_t L_579 = V_0;
		*((int32_t*)(L_578)) = (int32_t)L_579;
		int32_t L_580 = p0;
		V_54 = L_580;
		int32_t L_581 = V_54;
		if ((((int32_t)L_581) == ((int32_t)1)))
		{
			goto IL_100e;
		}
	}
	{
		int32_t L_582 = V_54;
		if ((((int32_t)L_582) == ((int32_t)2)))
		{
			goto IL_1010;
		}
	}
	{
		goto IL_1067;
	}

IL_100e:
	{
		return 1;
	}

IL_1010:
	{
		t1037 * L_583 = (__this->f10);
		t1037 * L_584 = L_583;
		int32_t L_585 = m4206(L_584, NULL);
		m4207(L_584, ((int32_t)((int32_t)L_585+(int32_t)1)), NULL);
		t1037 * L_586 = (__this->f10);
		bool L_587 = m4211(L_586, NULL);
		if (L_587)
		{
			goto IL_1053;
		}
	}
	{
		t1037 * L_588 = (__this->f10);
		bool L_589 = m4212(L_588, NULL);
		if (!L_589)
		{
			goto IL_1055;
		}
	}
	{
		t1037 * L_590 = (__this->f10);
		bool L_591 = m4210(L_590, NULL);
		if (!L_591)
		{
			goto IL_1055;
		}
	}

IL_1053:
	{
		return 1;
	}

IL_1055:
	{
		t1037 * L_592 = (__this->f10);
		int32_t L_593 = m4213(L_592, NULL);
		p2 = L_593;
		goto IL_0003;
	}

IL_1067:
	{
		int32_t L_594 = p0;
		V_54 = L_594;
		int32_t L_595 = V_54;
		if ((((int32_t)L_595) == ((int32_t)1)))
		{
			goto IL_107f;
		}
	}
	{
		int32_t L_596 = V_54;
		if ((((int32_t)L_596) == ((int32_t)2)))
		{
			goto IL_1081;
		}
	}
	{
		goto IL_10b2;
	}

IL_107f:
	{
		return 0;
	}

IL_1081:
	{
		t1037 * L_597 = (__this->f10);
		bool L_598 = m4212(L_597, NULL);
		if (L_598)
		{
			goto IL_10a3;
		}
	}
	{
		t1037 * L_599 = (__this->f10);
		bool L_600 = m4210(L_599, NULL);
		if (!L_600)
		{
			goto IL_10a3;
		}
	}
	{
		return 1;
	}

IL_10a3:
	{
		int32_t* L_601 = p1;
		t1037 * L_602 = (__this->f10);
		int32_t L_603 = m4208(L_602, NULL);
		*((int32_t*)(L_601)) = (int32_t)L_603;
		return 0;
	}

IL_10b2:
	{
		return 0;
	}
}
extern TypeInfo* t214_TI_var;
extern "C" bool m4220 (t1039 * __this, int32_t p0, int32_t* p1, int32_t* p2, bool p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	uint16_t V_4 = 0;
	uint16_t V_5 = {0};
	uint16_t V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint16_t V_14 = {0};
	{
		V_0 = 0;
		V_1 = 0;
	}

IL_0004:
	{
		t948* L_0 = (__this->f1);
		int32_t* L_1 = p2;
		int32_t L_2 = (*((int32_t*)L_1));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		uint16_t L_3 = V_4;
		V_5 = (((uint16_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)255)))));
		uint16_t L_4 = V_4;
		V_6 = (((uint16_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)65280)))));
		int32_t* L_5 = p2;
		int32_t* L_6 = p2;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		uint16_t L_7 = V_6;
		V_3 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_00aa;
		}
	}
	{
		uint16_t L_9 = V_6;
		if (!(((uint16_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)1024))))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t* L_10 = p1;
		if ((((int32_t)(*((int32_t*)L_10))) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		return 0;
	}

IL_0059:
	{
		t47* L_11 = (__this->f3);
		int32_t* L_12 = p1;
		int32_t* L_13 = p1;
		int32_t L_14 = ((int32_t)((int32_t)(*((int32_t*)L_13))-(int32_t)1));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)L_14;
		int32_t L_15 = V_13;
		uint16_t L_16 = m1754(L_11, L_15, NULL);
		V_1 = L_16;
		goto IL_009b;
	}

IL_0075:
	{
		int32_t* L_17 = p1;
		int32_t L_18 = (__this->f4);
		if ((((int32_t)(*((int32_t*)L_17))) < ((int32_t)L_18)))
		{
			goto IL_0084;
		}
	}
	{
		return 0;
	}

IL_0084:
	{
		t47* L_19 = (__this->f3);
		int32_t* L_20 = p1;
		int32_t* L_21 = p1;
		int32_t L_22 = (*((int32_t*)L_21));
		V_13 = L_22;
		*((int32_t*)(L_20)) = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
		int32_t L_23 = V_13;
		uint16_t L_24 = m1754(L_19, L_23, NULL);
		V_1 = L_24;
	}

IL_009b:
	{
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		uint16_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		uint16_t L_27 = m1816(NULL, L_26, NULL);
		V_1 = L_27;
	}

IL_00a8:
	{
		V_0 = 1;
	}

IL_00aa:
	{
		uint16_t L_28 = V_6;
		V_2 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)256)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_29 = V_5;
		V_14 = L_29;
		uint16_t L_30 = V_14;
		if (L_30 == 0)
		{
			goto IL_00f4;
		}
		if (L_30 == 1)
		{
			goto IL_00f2;
		}
		if (L_30 == 2)
		{
			goto IL_0221;
		}
		if (L_30 == 3)
		{
			goto IL_0221;
		}
		if (L_30 == 4)
		{
			goto IL_0221;
		}
		if (L_30 == 5)
		{
			goto IL_00f6;
		}
		if (L_30 == 6)
		{
			goto IL_0118;
		}
		if (L_30 == 7)
		{
			goto IL_013f;
		}
		if (L_30 == 8)
		{
			goto IL_0166;
		}
		if (L_30 == 9)
		{
			goto IL_01a8;
		}
	}
	{
		goto IL_0221;
	}

IL_00f2:
	{
		return 1;
	}

IL_00f4:
	{
		return 0;
	}

IL_00f6:
	{
		uint16_t L_31 = V_1;
		t948* L_32 = (__this->f1);
		int32_t* L_33 = p2;
		int32_t* L_34 = p2;
		int32_t L_35 = (*((int32_t*)L_34));
		V_13 = L_35;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_13;
		int32_t L_37 = L_36;
		if ((!(((uint32_t)L_31) == ((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_32, L_37))))))
		{
			goto IL_0113;
		}
	}
	{
		bool L_38 = V_2;
		return ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
	}

IL_0113:
	{
		goto IL_0221;
	}

IL_0118:
	{
		t948* L_39 = (__this->f1);
		int32_t* L_40 = p2;
		int32_t* L_41 = p2;
		int32_t L_42 = (*((int32_t*)L_41));
		V_13 = L_42;
		*((int32_t*)(L_40)) = (int32_t)((int32_t)((int32_t)L_42+(int32_t)1));
		int32_t L_43 = V_13;
		int32_t L_44 = L_43;
		uint16_t L_45 = V_1;
		bool L_46 = m4136(NULL, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_44)), L_45, NULL);
		if (!L_46)
		{
			goto IL_013a;
		}
	}
	{
		bool L_47 = V_2;
		return ((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
	}

IL_013a:
	{
		goto IL_0221;
	}

IL_013f:
	{
		t948* L_48 = (__this->f1);
		int32_t* L_49 = p2;
		int32_t* L_50 = p2;
		int32_t L_51 = (*((int32_t*)L_50));
		V_13 = L_51;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		int32_t L_52 = V_13;
		int32_t L_53 = L_52;
		uint16_t L_54 = V_1;
		bool L_55 = m4136(NULL, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_48, L_53)), L_54, NULL);
		if (L_55)
		{
			goto IL_0161;
		}
	}
	{
		bool L_56 = V_2;
		return ((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
	}

IL_0161:
	{
		goto IL_0221;
	}

IL_0166:
	{
		t948* L_57 = (__this->f1);
		int32_t* L_58 = p2;
		int32_t* L_59 = p2;
		int32_t L_60 = (*((int32_t*)L_59));
		V_13 = L_60;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)L_60+(int32_t)1));
		int32_t L_61 = V_13;
		int32_t L_62 = L_61;
		V_7 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_62));
		t948* L_63 = (__this->f1);
		int32_t* L_64 = p2;
		int32_t* L_65 = p2;
		int32_t L_66 = (*((int32_t*)L_65));
		V_13 = L_66;
		*((int32_t*)(L_64)) = (int32_t)((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_13;
		int32_t L_68 = L_67;
		V_8 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_63, L_68));
		int32_t L_69 = V_7;
		uint16_t L_70 = V_1;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_01a3;
		}
	}
	{
		uint16_t L_71 = V_1;
		int32_t L_72 = V_8;
		if ((((int32_t)L_71) > ((int32_t)L_72)))
		{
			goto IL_01a3;
		}
	}
	{
		bool L_73 = V_2;
		return ((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
	}

IL_01a3:
	{
		goto IL_0221;
	}

IL_01a8:
	{
		t948* L_74 = (__this->f1);
		int32_t* L_75 = p2;
		int32_t* L_76 = p2;
		int32_t L_77 = (*((int32_t*)L_76));
		V_13 = L_77;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_77+(int32_t)1));
		int32_t L_78 = V_13;
		int32_t L_79 = L_78;
		V_9 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_74, L_79));
		t948* L_80 = (__this->f1);
		int32_t* L_81 = p2;
		int32_t* L_82 = p2;
		int32_t L_83 = (*((int32_t*)L_82));
		V_13 = L_83;
		*((int32_t*)(L_81)) = (int32_t)((int32_t)((int32_t)L_83+(int32_t)1));
		int32_t L_84 = V_13;
		int32_t L_85 = L_84;
		V_10 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_80, L_85));
		int32_t* L_86 = p2;
		V_11 = (*((int32_t*)L_86));
		int32_t* L_87 = p2;
		int32_t* L_88 = p2;
		int32_t L_89 = V_10;
		*((int32_t*)(L_87)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_88))+(int32_t)L_89));
		uint16_t L_90 = V_1;
		int32_t L_91 = V_9;
		V_12 = ((int32_t)((int32_t)L_90-(int32_t)L_91));
		int32_t L_92 = V_12;
		if ((((int32_t)L_92) < ((int32_t)0)))
		{
			goto IL_01f4;
		}
	}
	{
		int32_t L_93 = V_12;
		int32_t L_94 = V_10;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)((int32_t)L_94<<(int32_t)4)))))
		{
			goto IL_01f9;
		}
	}

IL_01f4:
	{
		goto IL_0221;
	}

IL_01f9:
	{
		t948* L_95 = (__this->f1);
		int32_t L_96 = V_11;
		int32_t L_97 = V_12;
		int32_t L_98 = ((int32_t)((int32_t)L_96+(int32_t)((int32_t)((int32_t)L_97>>(int32_t)4))));
		int32_t L_99 = V_12;
		if (!((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_95, L_98))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_99&(int32_t)((int32_t)15)))&(int32_t)((int32_t)31))))))))
		{
			goto IL_021c;
		}
	}
	{
		bool L_100 = V_2;
		return ((((int32_t)L_100) == ((int32_t)0))? 1 : 0);
	}

IL_021c:
	{
		goto IL_0221;
	}

IL_0221:
	{
		bool L_101 = p3;
		if (L_101)
		{
			goto IL_0004;
		}
	}
	{
		bool L_102 = V_2;
		return L_102;
	}
}
extern "C" bool m4221 (t1039 * __this, int32_t* p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m4218(__this, NULL);
		int32_t* L_0 = p0;
		V_0 = (*((int32_t*)L_0));
		t1041* L_1 = (__this->f13);
		t1018* L_2 = (__this->f16);
		int32_t L_3 = 0;
		int32_t L_4 = V_0;
		((t1035 *)(t1035 *)SZArrayLdElema(L_1, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3))))->f0 = L_4;
		int32_t L_5 = p1;
		bool L_6 = m4219(__this, 1, (&V_0), L_5, NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		t1041* L_7 = (__this->f13);
		t1018* L_8 = (__this->f16);
		int32_t L_9 = 0;
		int32_t L_10 = V_0;
		((t1035 *)(t1035 *)SZArrayLdElema(L_7, (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9))))->f1 = L_10;
		int32_t* L_11 = p0;
		int32_t L_12 = V_0;
		*((int32_t*)(L_11)) = (int32_t)L_12;
		return 1;
	}

IL_004f:
	{
		return 0;
	}
}
extern "C" bool m4222 (t1039 * __this, uint16_t p0, int32_t p1, const MethodInfo* method)
{
	uint16_t V_0 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	{
		uint16_t L_0 = p0;
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_005e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_00b9;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_012c;
		}
	}
	{
		goto IL_01a2;
	}

IL_0033:
	{
		int32_t L_2 = p1;
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		int32_t L_3 = p1;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		t47* L_4 = (__this->f3);
		int32_t L_5 = p1;
		uint16_t L_6 = m1754(L_4, ((int32_t)((int32_t)L_5-(int32_t)1)), NULL);
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B6_0 = 1;
	}

IL_0053:
	{
		return G_B6_0;
	}

IL_0054:
	{
		int32_t L_7 = p1;
		int32_t L_8 = (__this->f8);
		return ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_005e:
	{
		int32_t L_9 = p1;
		int32_t L_10 = (__this->f4);
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_11 = p1;
		int32_t L_12 = (__this->f4);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)((int32_t)L_12-(int32_t)1))))))
		{
			goto IL_008a;
		}
	}
	{
		t47* L_13 = (__this->f3);
		int32_t L_14 = p1;
		uint16_t L_15 = m1754(L_13, L_14, NULL);
		G_B12_0 = ((((int32_t)L_15) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B12_0 = 0;
	}

IL_008b:
	{
		G_B14_0 = G_B12_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B14_0 = 1;
	}

IL_008e:
	{
		return G_B14_0;
	}

IL_008f:
	{
		int32_t L_16 = p1;
		int32_t L_17 = (__this->f4);
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_00ad;
		}
	}
	{
		t47* L_18 = (__this->f3);
		int32_t L_19 = p1;
		uint16_t L_20 = m1754(L_18, L_19, NULL);
		G_B18_0 = ((((int32_t)L_20) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B18_0 = 1;
	}

IL_00ae:
	{
		return G_B18_0;
	}

IL_00af:
	{
		int32_t L_21 = p1;
		int32_t L_22 = (__this->f4);
		return ((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
	}

IL_00b9:
	{
		int32_t L_23 = (__this->f4);
		if (L_23)
		{
			goto IL_00c6;
		}
	}
	{
		return 0;
	}

IL_00c6:
	{
		int32_t L_24 = p1;
		if (L_24)
		{
			goto IL_00df;
		}
	}
	{
		t47* L_25 = (__this->f3);
		int32_t L_26 = p1;
		uint16_t L_27 = m1754(L_25, L_26, NULL);
		bool L_28 = m4223(__this, L_27, NULL);
		return L_28;
	}

IL_00df:
	{
		int32_t L_29 = p1;
		int32_t L_30 = (__this->f4);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0100;
		}
	}
	{
		t47* L_31 = (__this->f3);
		int32_t L_32 = p1;
		uint16_t L_33 = m1754(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)), NULL);
		bool L_34 = m4223(__this, L_33, NULL);
		return L_34;
	}

IL_0100:
	{
		t47* L_35 = (__this->f3);
		int32_t L_36 = p1;
		uint16_t L_37 = m1754(L_35, L_36, NULL);
		bool L_38 = m4223(__this, L_37, NULL);
		t47* L_39 = (__this->f3);
		int32_t L_40 = p1;
		uint16_t L_41 = m1754(L_39, ((int32_t)((int32_t)L_40-(int32_t)1)), NULL);
		bool L_42 = m4223(__this, L_41, NULL);
		return ((((int32_t)((((int32_t)L_38) == ((int32_t)L_42))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_012c:
	{
		int32_t L_43 = (__this->f4);
		if (L_43)
		{
			goto IL_0139;
		}
	}
	{
		return 0;
	}

IL_0139:
	{
		int32_t L_44 = p1;
		if (L_44)
		{
			goto IL_0155;
		}
	}
	{
		t47* L_45 = (__this->f3);
		int32_t L_46 = p1;
		uint16_t L_47 = m1754(L_45, L_46, NULL);
		bool L_48 = m4223(__this, L_47, NULL);
		return ((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
	}

IL_0155:
	{
		int32_t L_49 = p1;
		int32_t L_50 = (__this->f4);
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0179;
		}
	}
	{
		t47* L_51 = (__this->f3);
		int32_t L_52 = p1;
		uint16_t L_53 = m1754(L_51, ((int32_t)((int32_t)L_52-(int32_t)1)), NULL);
		bool L_54 = m4223(__this, L_53, NULL);
		return ((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
	}

IL_0179:
	{
		t47* L_55 = (__this->f3);
		int32_t L_56 = p1;
		uint16_t L_57 = m1754(L_55, L_56, NULL);
		bool L_58 = m4223(__this, L_57, NULL);
		t47* L_59 = (__this->f3);
		int32_t L_60 = p1;
		uint16_t L_61 = m1754(L_59, ((int32_t)((int32_t)L_60-(int32_t)1)), NULL);
		bool L_62 = m4223(__this, L_61, NULL);
		return ((((int32_t)L_58) == ((int32_t)L_62))? 1 : 0);
	}

IL_01a2:
	{
		return 0;
	}
}
extern "C" bool m4223 (t1039 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		bool L_1 = m4136(NULL, 3, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m4224 (t1039 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t221* V_2 = {0};
	int32_t V_3 = 0;
	{
		t948* L_0 = (__this->f1);
		int32_t L_1 = p0;
		int32_t L_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = p0;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)2));
		int32_t L_4 = V_0;
		V_2 = ((t221*)SZArrayNew(t221_TI_var, L_4));
		V_3 = 0;
		goto IL_0030;
	}

IL_001d:
	{
		t221* L_5 = V_2;
		int32_t L_6 = V_3;
		t948* L_7 = (__this->f1);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = L_9;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_6)) = (uint16_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_10));
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_12 = V_3;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001d;
		}
	}
	{
		t221* L_14 = V_2;
		t47* L_15 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_15 = m3307(L_15, L_14, NULL);
		return L_15;
	}
}
extern "C" void m4225 (t1039 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1018* L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		int32_t L_4 = (__this->f14);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		t1041* L_5 = (__this->f13);
		int32_t L_6 = V_0;
		bool L_7 = m4198(((t1035 *)(t1035 *)SZArrayLdElema(L_5, L_6)), NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = m4232(__this, L_8, NULL);
		V_0 = L_9;
		t1018* L_10 = (__this->f16);
		int32_t L_11 = p0;
		int32_t L_12 = V_0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11)) = (int32_t)L_12;
	}

IL_003c:
	{
		t1041* L_13 = (__this->f13);
		int32_t L_14 = V_0;
		int32_t L_15 = p1;
		((t1035 *)(t1035 *)SZArrayLdElema(L_13, L_14))->f0 = L_15;
		return;
	}
}
extern "C" void m4226 (t1039 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		t1041* L_0 = (__this->f13);
		t1018* L_1 = (__this->f16);
		int32_t L_2 = p0;
		int32_t L_3 = L_2;
		int32_t L_4 = p1;
		((t1035 *)(t1035 *)SZArrayLdElema(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))))->f1 = L_4;
		return;
	}
}
extern "C" bool m4227 (t1039 * __this, int32_t p0, int32_t p1, bool p2, int32_t p3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1018* L_0 = (__this->f16);
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		t1041* L_4 = (__this->f13);
		int32_t L_5 = V_0;
		int32_t L_6 = m4199(((t1035 *)(t1035 *)SZArrayLdElema(L_4, L_5)), NULL);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		return 0;
	}

IL_0029:
	{
		int32_t L_7 = p0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		bool L_8 = p2;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_9 = p0;
		t1041* L_10 = (__this->f13);
		int32_t L_11 = V_0;
		int32_t L_12 = m4199(((t1035 *)(t1035 *)SZArrayLdElema(L_10, L_11)), NULL);
		t1041* L_13 = (__this->f13);
		int32_t L_14 = V_0;
		int32_t L_15 = m4200(((t1035 *)(t1035 *)SZArrayLdElema(L_13, L_14)), NULL);
		m4225(__this, L_9, ((int32_t)((int32_t)L_12+(int32_t)L_15)), NULL);
		int32_t L_16 = p0;
		int32_t L_17 = p3;
		m4226(__this, L_16, L_17, NULL);
	}

IL_0069:
	{
		t1018* L_18 = (__this->f16);
		int32_t L_19 = p1;
		t1041* L_20 = (__this->f13);
		int32_t L_21 = V_0;
		int32_t L_22 = (((t1035 *)(t1035 *)SZArrayLdElema(L_20, L_21))->f2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)) = (int32_t)L_22;
		return 1;
	}
}
extern "C" int32_t m4228 (t1039 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f15);
		__this->f14 = L_0;
		int32_t L_1 = (__this->f14);
		return L_1;
	}
}
extern "C" void m4229 (t1039 * __this, int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0007:
	{
		t1018* L_0 = (__this->f16);
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		goto IL_0027;
	}

IL_0015:
	{
		t1041* L_3 = (__this->f13);
		int32_t L_4 = V_1;
		int32_t L_5 = (((t1035 *)(t1035 *)SZArrayLdElema(L_3, L_4))->f2);
		V_1 = L_5;
	}

IL_0027:
	{
		int32_t L_6 = p0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0015;
		}
	}
	{
		t1018* L_8 = (__this->f16);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		t1018* L_13 = (__this->f16);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t52 *)L_13)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t1041_TI_var;
extern "C" void m4230 (t1039 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1041_TI_var = il2cpp_codegen_type_info_from_index(1927);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t1018* L_0 = (__this->f16);
		V_0 = (((int32_t)(((t52 *)L_0)->max_length)));
		t1041* L_1 = (__this->f13);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = V_0;
		__this->f13 = ((t1041*)SZArrayNew(t1041_TI_var, ((int32_t)((int32_t)L_2*(int32_t)((int32_t)10)))));
	}

IL_0023:
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_002a:
	{
		t1018* L_3 = (__this->f16);
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)) = (int32_t)L_5;
		t1041* L_6 = (__this->f13);
		int32_t L_7 = V_1;
		((t1035 *)(t1035 *)SZArrayLdElema(L_6, L_7))->f0 = (-1);
		t1041* L_8 = (__this->f13);
		int32_t L_9 = V_1;
		((t1035 *)(t1035 *)SZArrayLdElema(L_8, L_9))->f1 = (-1);
		t1041* L_10 = (__this->f13);
		int32_t L_11 = V_1;
		((t1035 *)(t1035 *)SZArrayLdElema(L_10, L_11))->f2 = (-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		__this->f14 = 0;
		int32_t L_15 = V_0;
		__this->f15 = L_15;
		return;
	}
}
extern "C" int32_t m4231 (t1039 * __this, int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1018* L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		goto IL_0020;
	}

IL_000e:
	{
		t1041* L_3 = (__this->f13);
		int32_t L_4 = V_0;
		int32_t L_5 = (((t1035 *)(t1035 *)SZArrayLdElema(L_3, L_4))->f2);
		V_0 = L_5;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		t1041* L_7 = (__this->f13);
		int32_t L_8 = V_0;
		bool L_9 = m4198(((t1035 *)(t1035 *)SZArrayLdElema(L_7, L_8)), NULL);
		if (!L_9)
		{
			goto IL_000e;
		}
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
extern TypeInfo* t1041_TI_var;
extern "C" int32_t m4232 (t1039 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1041_TI_var = il2cpp_codegen_type_info_from_index(1927);
		s_Il2CppMethodIntialized = true;
	}
	t1041* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f15);
		t1041* L_1 = (__this->f13);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t52 *)L_1)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		t1041* L_2 = (__this->f13);
		V_0 = ((t1041*)SZArrayNew(t1041_TI_var, ((int32_t)((int32_t)(((int32_t)(((t52 *)L_2)->max_length)))*(int32_t)2))));
		t1041* L_3 = (__this->f13);
		t1041* L_4 = V_0;
		VirtActionInvoker2< t52 *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_3, (t52 *)(t52 *)L_4, 0);
		t1041* L_5 = V_0;
		__this->f13 = L_5;
	}

IL_0037:
	{
		int32_t L_6 = (__this->f15);
		int32_t L_7 = L_6;
		V_2 = L_7;
		__this->f15 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_2;
		V_1 = L_8;
		t1041* L_9 = (__this->f13);
		int32_t L_10 = V_1;
		t1041* L_11 = (__this->f13);
		int32_t L_12 = V_1;
		int32_t L_13 = (-1);
		V_2 = L_13;
		((t1035 *)(t1035 *)SZArrayLdElema(L_11, L_12))->f1 = L_13;
		int32_t L_14 = V_2;
		((t1035 *)(t1035 *)SZArrayLdElema(L_9, L_10))->f0 = L_14;
		t1041* L_15 = (__this->f13);
		int32_t L_16 = V_1;
		int32_t L_17 = p0;
		((t1035 *)(t1035 *)SZArrayLdElema(L_15, L_16))->f2 = L_17;
		int32_t L_18 = V_1;
		return L_18;
	}
}
extern "C" void m4233 (t1039 * __this, int32_t p0, int32_t* p1, int32_t* p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = p1;
		*((int32_t*)(L_0)) = (int32_t)(-1);
		int32_t* L_1 = p2;
		*((int32_t*)(L_1)) = (int32_t)0;
		t1018* L_2 = (__this->f16);
		int32_t L_3 = p0;
		int32_t L_4 = L_3;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4));
		goto IL_0052;
	}

IL_0014:
	{
		t1041* L_5 = (__this->f13);
		int32_t L_6 = V_0;
		bool L_7 = m4198(((t1035 *)(t1035 *)SZArrayLdElema(L_5, L_6)), NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0040;
	}

IL_002f:
	{
		int32_t* L_8 = p1;
		if ((((int32_t)(*((int32_t*)L_8))) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_9 = p1;
		int32_t L_10 = V_0;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_003a:
	{
		int32_t* L_11 = p2;
		int32_t* L_12 = p2;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_12))+(int32_t)1));
	}

IL_0040:
	{
		t1041* L_13 = (__this->f13);
		int32_t L_14 = V_0;
		int32_t L_15 = (((t1035 *)(t1035 *)SZArrayLdElema(L_13, L_14))->f2);
		V_0 = L_15;
	}

IL_0052:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t1006_TI_var;
extern "C" void m4234 (t1039 * __this, t1009 * p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1006_TI_var = il2cpp_codegen_type_info_from_index(1900);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1006 * V_2 = {0};
	{
		V_0 = 1;
		t1041* L_0 = (__this->f13);
		int32_t L_1 = p1;
		int32_t L_2 = (((t1035 *)(t1035 *)SZArrayLdElema(L_0, L_1))->f2);
		V_1 = L_2;
		goto IL_0089;
	}

IL_0019:
	{
		t1041* L_3 = (__this->f13);
		int32_t L_4 = V_1;
		bool L_5 = m4198(((t1035 *)(t1035 *)SZArrayLdElema(L_3, L_4)), NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0077;
	}

IL_0034:
	{
		t47* L_6 = (__this->f3);
		t1041* L_7 = (__this->f13);
		int32_t L_8 = V_1;
		int32_t L_9 = m4199(((t1035 *)(t1035 *)SZArrayLdElema(L_7, L_8)), NULL);
		t1041* L_10 = (__this->f13);
		int32_t L_11 = V_1;
		int32_t L_12 = m4200(((t1035 *)(t1035 *)SZArrayLdElema(L_10, L_11)), NULL);
		t1006 * L_13 = (t1006 *)il2cpp_codegen_object_new (t1006_TI_var);
		m4047(L_13, L_6, L_9, L_12, NULL);
		V_2 = L_13;
		t1009 * L_14 = p0;
		t1007 * L_15 = m4064(L_14, NULL);
		t1006 * L_16 = V_2;
		int32_t L_17 = p2;
		int32_t L_18 = V_0;
		m4056(L_15, L_16, ((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)1))-(int32_t)L_18)), NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0077:
	{
		t1041* L_20 = (__this->f13);
		int32_t L_21 = V_1;
		int32_t L_22 = (((t1035 *)(t1035 *)SZArrayLdElema(L_20, L_21))->f2);
		V_1 = L_22;
	}

IL_0089:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t1004_TI_var;
extern TypeInfo* t1009_TI_var;
extern "C" t1004 * m4235 (t1039 * __this, t746 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1004_TI_var = il2cpp_codegen_type_info_from_index(1904);
		t1009_TI_var = il2cpp_codegen_type_info_from_index(1902);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1009 * V_2 = {0};
	t1004 * V_3 = {0};
	int32_t V_4 = 0;
	{
		m4233(__this, 0, (&V_1), (&V_0), NULL);
		bool L_0 = (((t1005 *)__this)->f0);
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		t746 * L_1 = p0;
		t47* L_2 = (__this->f3);
		int32_t L_3 = (__this->f4);
		t1041* L_4 = (__this->f13);
		int32_t L_5 = V_1;
		int32_t L_6 = m4199(((t1035 *)(t1035 *)SZArrayLdElema(L_4, L_5)), NULL);
		t1041* L_7 = (__this->f13);
		int32_t L_8 = V_1;
		int32_t L_9 = m4200(((t1035 *)(t1035 *)SZArrayLdElema(L_7, L_8)), NULL);
		t1004 * L_10 = (t1004 *)il2cpp_codegen_object_new (t1004_TI_var);
		m4075(L_10, L_1, __this, L_2, L_3, 0, L_6, L_9, NULL);
		return L_10;
	}

IL_004d:
	{
		t746 * L_11 = p0;
		t47* L_12 = (__this->f3);
		int32_t L_13 = (__this->f4);
		t1018* L_14 = (__this->f16);
		t1041* L_15 = (__this->f13);
		int32_t L_16 = V_1;
		int32_t L_17 = m4199(((t1035 *)(t1035 *)SZArrayLdElema(L_15, L_16)), NULL);
		t1041* L_18 = (__this->f13);
		int32_t L_19 = V_1;
		int32_t L_20 = m4200(((t1035 *)(t1035 *)SZArrayLdElema(L_18, L_19)), NULL);
		int32_t L_21 = V_0;
		t1004 * L_22 = (t1004 *)il2cpp_codegen_object_new (t1004_TI_var);
		m4076(L_22, L_11, __this, L_12, L_13, (((int32_t)(((t52 *)L_14)->max_length))), L_17, L_20, L_21, NULL);
		V_3 = L_22;
		t1004 * L_23 = V_3;
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		m4234(__this, L_23, L_24, L_25, NULL);
		V_4 = 1;
		goto IL_0107;
	}

IL_009d:
	{
		int32_t L_26 = V_4;
		m4233(__this, L_26, (&V_1), (&V_0), NULL);
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1009_TI_var);
		t1009 * L_28 = ((t1009_SFs*)t1009_TI_var->static_fields)->f3;
		V_2 = L_28;
		goto IL_00f3;
	}

IL_00bb:
	{
		t47* L_29 = (__this->f3);
		t1041* L_30 = (__this->f13);
		int32_t L_31 = V_1;
		int32_t L_32 = m4199(((t1035 *)(t1035 *)SZArrayLdElema(L_30, L_31)), NULL);
		t1041* L_33 = (__this->f13);
		int32_t L_34 = V_1;
		int32_t L_35 = m4200(((t1035 *)(t1035 *)SZArrayLdElema(L_33, L_34)), NULL);
		int32_t L_36 = V_0;
		t1009 * L_37 = (t1009 *)il2cpp_codegen_object_new (t1009_TI_var);
		m4060(L_37, L_29, L_32, L_35, L_36, NULL);
		V_2 = L_37;
		t1009 * L_38 = V_2;
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		m4234(__this, L_38, L_39, L_40, NULL);
	}

IL_00f3:
	{
		t1004 * L_41 = V_3;
		t1010 * L_42 = (t1010 *)VirtFuncInvoker0< t1010 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_41);
		t1009 * L_43 = V_2;
		int32_t L_44 = V_4;
		m4070(L_42, L_43, L_44, NULL);
		int32_t L_45 = V_4;
		V_4 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0107:
	{
		int32_t L_46 = V_4;
		t1018* L_47 = (__this->f16);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((t52 *)L_47)->max_length))))))
		{
			goto IL_009d;
		}
	}
	{
		t1004 * L_48 = V_3;
		return L_48;
	}
}
#include "t1042.h"
#ifndef _MSC_VER
#else
#endif
#include "t1042MD.h"



extern "C" void m4236 (t1042 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = p0;
		V_0 = L_2;
		int32_t L_3 = p1;
		p0 = L_3;
		int32_t L_4 = V_0;
		p1 = L_4;
	}

IL_000f:
	{
		int32_t L_5 = p0;
		__this->f0 = L_5;
		int32_t L_6 = p1;
		__this->f1 = L_6;
		__this->f2 = 1;
		return;
	}
}
extern "C" t1042  m4237 (t7 * __this , const MethodInfo* method)
{
	t1042  V_0 = {0};
	{
		(&V_0)->f0 = 0;
		int32_t L_0 = ((&V_0)->f0);
		(&V_0)->f1 = ((int32_t)((int32_t)L_0-(int32_t)1));
		(&V_0)->f2 = 1;
		t1042  L_1 = V_0;
		return L_1;
	}
}
extern "C" bool m4238 (t1042 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f2);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4239 (t1042 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (__this->f0);
		int32_t L_2 = (__this->f1);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern "C" bool m4240 (t1042 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		return ((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
	}
}
extern "C" int32_t m4241 (t1042 * __this, const MethodInfo* method)
{
	{
		bool L_0 = m4240(__this, NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = (__this->f0);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2))+(int32_t)1));
	}
}
extern "C" bool m4242 (t1042 * __this, t1042  p0, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = m4240(__this, NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m4240((&p0), NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 1;
	}

IL_0019:
	{
		int32_t L_2 = (__this->f0);
		int32_t L_3 = ((&p0)->f1);
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = ((&p0)->f0);
		int32_t L_5 = (__this->f1);
		G_B6_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		return ((((int32_t)G_B6_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4243 (t1042 * __this, t1042  p0, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = m4240(__this, NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m4240((&p0), NULL);
		if (!L_1)
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
		int32_t L_2 = (__this->f0);
		int32_t L_3 = ((&p0)->f1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)((int32_t)L_3+(int32_t)1)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((&p0)->f0);
		G_B6_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)((int32_t)L_5-(int32_t)1))))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 1;
	}

IL_0041:
	{
		return G_B6_0;
	}
}
extern "C" bool m4244 (t1042 * __this, t1042  p0, const MethodInfo* method)
{
	int32_t G_B8_0 = 0;
	{
		bool L_0 = m4240(__this, NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1 = m4240((&p0), NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		return 1;
	}

IL_0019:
	{
		bool L_2 = m4240(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		int32_t L_3 = (__this->f0);
		int32_t L_4 = ((&p0)->f0);
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = ((&p0)->f1);
		int32_t L_6 = (__this->f1);
		G_B8_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B8_0 = 0;
	}

IL_004d:
	{
		return G_B8_0;
	}
}
extern "C" bool m4245 (t1042 * __this, int32_t p0, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = p0;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = p0;
		int32_t L_3 = (__this->f1);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
extern "C" bool m4246 (t1042 * __this, t1042  p0, const MethodInfo* method)
{
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = m4240(__this, NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m4240((&p0), NULL);
		if (!L_1)
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
		int32_t L_2 = ((&p0)->f0);
		bool L_3 = m4245(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((&p0)->f1);
		bool L_5 = m4245(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_0064;
		}
	}

IL_003d:
	{
		int32_t L_6 = ((&p0)->f1);
		bool L_7 = m4245(__this, L_6, NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = ((&p0)->f0);
		bool L_9 = m4245(__this, L_8, NULL);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 0;
	}

IL_0062:
	{
		G_B10_0 = G_B8_0;
		goto IL_0065;
	}

IL_0064:
	{
		G_B10_0 = 1;
	}

IL_0065:
	{
		return G_B10_0;
	}
}
extern "C" void m4247 (t1042 * __this, t1042  p0, const MethodInfo* method)
{
	{
		bool L_0 = m4240((&p0), NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_1 = m4240(__this, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ((&p0)->f0);
		__this->f0 = L_2;
		int32_t L_3 = ((&p0)->f1);
		__this->f1 = L_3;
	}

IL_0032:
	{
		int32_t L_4 = ((&p0)->f0);
		int32_t L_5 = (__this->f0);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ((&p0)->f0);
		__this->f0 = L_6;
	}

IL_0051:
	{
		int32_t L_7 = ((&p0)->f1);
		int32_t L_8 = (__this->f1);
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_9 = ((&p0)->f1);
		__this->f1 = L_9;
	}

IL_0070:
	{
		return;
	}
}
extern TypeInfo* t1042_TI_var;
extern "C" int32_t m4248 (t1042 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		s_Il2CppMethodIntialized = true;
	}
	t1042  V_0 = {0};
	{
		int32_t L_0 = (__this->f0);
		t7 * L_1 = p0;
		V_0 = ((*(t1042 *)((t1042 *)UnBox (L_1, t1042_TI_var))));
		int32_t L_2 = ((&V_0)->f0);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interval
void t1042_marshal(const t1042& unmarshaled, t1042_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
}
void t1042_marshal_back(const t1042_marshaled& marshaled, t1042& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interval
void t1042_marshal_cleanup(t1042_marshaled& marshaled)
{
}
#include "t1043.h"
#ifndef _MSC_VER
#else
#endif
#include "t1043MD.h"

#include "t1098.h"
#include "t1098MD.h"


extern "C" void m4249 (t1043 * __this, t7 * p0, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t7 * L_0 = p0;
		__this->f0 = L_0;
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset() */, __this);
		return;
	}
}
extern TypeInfo* t816_TI_var;
extern TypeInfo* t1098_TI_var;
extern TypeInfo* t817_TI_var;
extern "C" t7 * m4250 (t1043 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		t817_TI_var = il2cpp_codegen_type_info_from_index(1527);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->f1);
		t7 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, t816_TI_var, L_1);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4508(L_3, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t7 * L_4 = (__this->f0);
		int32_t L_5 = (__this->f1);
		t7 * L_6 = (t7 *)InterfaceFuncInvoker1< t7 *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, t817_TI_var, L_4, L_5);
		return L_6;
	}
}
extern TypeInfo* t816_TI_var;
extern TypeInfo* t1098_TI_var;
extern "C" bool m4251 (t1043 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t816_TI_var = il2cpp_codegen_type_info_from_index(1526);
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		t7 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, t816_TI_var, L_1);
		if ((((int32_t)L_0) <= ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		t1098 * L_3 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4508(L_3, NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		t7 * L_7 = (__this->f0);
		int32_t L_8 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, t816_TI_var, L_7);
		return ((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
	}
}
extern "C" void m4252 (t1043 * __this, const MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
#include "t1044.h"
#ifndef _MSC_VER
#else
#endif
#include "t1044MD.h"

#include "t226.h"
#include "t692.h"
#include "t213.h"


extern "C" void m4253 (t1044 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" double m4254 (t1044 * __this, t1042  p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m4254((t1044 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef double (*FunctionPointerType) (t7 *, t7 * __this, t1042  p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef double (*FunctionPointerType) (t7 * __this, t1042  p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" double pinvoke_delegate_wrapper_t1044(Il2CppObject* delegate, t1042  p0)
{
	typedef double (STDCALL *native_function_ptr_type)(t1042_marshaled);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t1042_marshaled _p0_marshaled = { 0 };
	t1042_marshal(p0, _p0_marshaled);

	// Native function invocation and marshaling of return value back from native representation
	double _return_value = _il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation
	t1042_marshal_cleanup(_p0_marshaled);

	return _return_value;
}
extern TypeInfo* t1042_TI_var;
extern "C" t7 * m4255 (t1044 * __this, t1042  p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t1042_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" double m4256 (t1044 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(double*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1045.h"
#ifndef _MSC_VER
#else
#endif
#include "t1045MD.h"



extern TypeInfo* t919_TI_var;
extern "C" void m4257 (t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t919 * L_0 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
		m4512(L_0, NULL);
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t1042_TI_var;
extern "C" t1042  m4258 (t1045 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		s_Il2CppMethodIntialized = true;
	}
	{
		t919 * L_0 = (__this->f0);
		int32_t L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((*(t1042 *)((t1042 *)UnBox (L_2, t1042_TI_var))));
	}
}
extern TypeInfo* t1042_TI_var;
extern "C" void m4259 (t1045 * __this, t1042  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		s_Il2CppMethodIntialized = true;
	}
	{
		t919 * L_0 = (__this->f0);
		t1042  L_1 = p0;
		t1042  L_2 = L_1;
		t7 * L_3 = Box(t1042_TI_var, &L_2);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_3);
		return;
	}
}
extern TypeInfo* t1042_TI_var;
extern "C" void m4260 (t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1042  V_1 = {0};
	t1042  V_2 = {0};
	{
		t919 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(42 /* System.Void System.Collections.ArrayList::Sort() */, L_0);
		V_0 = 0;
		goto IL_0083;
	}

IL_0012:
	{
		t919 * L_1 = (__this->f0);
		int32_t L_2 = V_0;
		t7 * L_3 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, L_2);
		V_1 = ((*(t1042 *)((t1042 *)UnBox (L_3, t1042_TI_var))));
		t919 * L_4 = (__this->f0);
		int32_t L_5 = V_0;
		t7 * L_6 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, ((int32_t)((int32_t)L_5+(int32_t)1)));
		V_2 = ((*(t1042 *)((t1042 *)UnBox (L_6, t1042_TI_var))));
		t1042  L_7 = V_2;
		bool L_8 = m4242((&V_1), L_7, NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		t1042  L_9 = V_2;
		bool L_10 = m4243((&V_1), L_9, NULL);
		if (!L_10)
		{
			goto IL_007f;
		}
	}

IL_0052:
	{
		t1042  L_11 = V_2;
		m4247((&V_1), L_11, NULL);
		t919 * L_12 = (__this->f0);
		int32_t L_13 = V_0;
		t1042  L_14 = V_1;
		t1042  L_15 = L_14;
		t7 * L_16 = Box(t1042_TI_var, &L_15);
		VirtActionInvoker2< int32_t, t7 * >::Invoke(21 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_12, L_13, L_16);
		t919 * L_17 = (__this->f0);
		int32_t L_18 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(36 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_17, ((int32_t)((int32_t)L_18+(int32_t)1)));
		goto IL_0083;
	}

IL_007f:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_20 = V_0;
		t919 * L_21 = (__this->f0);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)L_22-(int32_t)1)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t1045_TI_var;
extern "C" t1045 * m4261 (t1045 * __this, t1044 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1045_TI_var = il2cpp_codegen_type_info_from_index(1930);
		s_Il2CppMethodIntialized = true;
	}
	t1045 * V_0 = {0};
	{
		t1045 * L_0 = (t1045 *)il2cpp_codegen_object_new (t1045_TI_var);
		m4257(L_0, NULL);
		V_0 = L_0;
		m4260(__this, NULL);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count() */, __this);
		t1045 * L_2 = V_0;
		t1044 * L_3 = p0;
		m4262(__this, 0, ((int32_t)((int32_t)L_1-(int32_t)1)), L_2, L_3, NULL);
		t1045 * L_4 = V_0;
		t919 * L_5 = (L_4->f0);
		VirtActionInvoker0::Invoke(42 /* System.Void System.Collections.ArrayList::Sort() */, L_5);
		t1045 * L_6 = V_0;
		return L_6;
	}
}
extern "C" void m4262 (t1045 * __this, int32_t p0, int32_t p1, t1045 * p2, t1044 * p3, const MethodInfo* method)
{
	t1042  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	t1042  V_9 = {0};
	t1042  V_10 = {0};
	t1042  V_11 = {0};
	t1042  V_12 = {0};
	{
		(&V_0)->f2 = 0;
		V_1 = (-1);
		V_2 = (-1);
		V_3 = (0.0);
		int32_t L_0 = p0;
		V_4 = L_0;
		goto IL_00ae;
	}

IL_001e:
	{
		int32_t L_1 = V_4;
		t1042  L_2 = m4258(__this, L_1, NULL);
		V_9 = L_2;
		int32_t L_3 = ((&V_9)->f0);
		(&V_0)->f0 = L_3;
		V_5 = (0.0);
		int32_t L_4 = V_4;
		V_6 = L_4;
		goto IL_00a0;
	}

IL_004a:
	{
		int32_t L_5 = V_6;
		t1042  L_6 = m4258(__this, L_5, NULL);
		V_10 = L_6;
		int32_t L_7 = ((&V_10)->f1);
		(&V_0)->f1 = L_7;
		double L_8 = V_5;
		t1044 * L_9 = p3;
		int32_t L_10 = V_6;
		t1042  L_11 = m4258(__this, L_10, NULL);
		double L_12 = (double)VirtFuncInvoker1< double, t1042  >::Invoke(10 /* System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval) */, L_9, L_11);
		V_5 = ((double)((double)L_8+(double)L_12));
		t1044 * L_13 = p3;
		t1042  L_14 = V_0;
		double L_15 = (double)VirtFuncInvoker1< double, t1042  >::Invoke(10 /* System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval) */, L_13, L_14);
		V_7 = L_15;
		double L_16 = V_7;
		double L_17 = V_5;
		if ((!(((double)L_16) < ((double)L_17))))
		{
			goto IL_009a;
		}
	}
	{
		double L_18 = V_5;
		double L_19 = V_3;
		if ((!(((double)L_18) > ((double)L_19))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_20 = V_4;
		V_1 = L_20;
		int32_t L_21 = V_6;
		V_2 = L_21;
		double L_22 = V_5;
		V_3 = L_22;
	}

IL_009a:
	{
		int32_t L_23 = V_6;
		V_6 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00a0:
	{
		int32_t L_24 = V_6;
		int32_t L_25 = p1;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = p1;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_30 = p0;
		V_8 = L_30;
		goto IL_00d9;
	}

IL_00c5:
	{
		t1045 * L_31 = p2;
		int32_t L_32 = V_8;
		t1042  L_33 = m4258(__this, L_32, NULL);
		m4259(L_31, L_33, NULL);
		int32_t L_34 = V_8;
		V_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00d9:
	{
		int32_t L_35 = V_8;
		int32_t L_36 = p1;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_0143;
	}

IL_00e6:
	{
		int32_t L_37 = V_1;
		t1042  L_38 = m4258(__this, L_37, NULL);
		V_11 = L_38;
		int32_t L_39 = ((&V_11)->f0);
		(&V_0)->f0 = L_39;
		int32_t L_40 = V_2;
		t1042  L_41 = m4258(__this, L_40, NULL);
		V_12 = L_41;
		int32_t L_42 = ((&V_12)->f1);
		(&V_0)->f1 = L_42;
		t1045 * L_43 = p2;
		t1042  L_44 = V_0;
		m4259(L_43, L_44, NULL);
		int32_t L_45 = V_1;
		int32_t L_46 = p0;
		if ((((int32_t)L_45) <= ((int32_t)L_46)))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_47 = p0;
		int32_t L_48 = V_1;
		t1045 * L_49 = p2;
		t1044 * L_50 = p3;
		m4262(__this, L_47, ((int32_t)((int32_t)L_48-(int32_t)1)), L_49, L_50, NULL);
	}

IL_012f:
	{
		int32_t L_51 = V_2;
		int32_t L_52 = p1;
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_53 = V_2;
		int32_t L_54 = p1;
		t1045 * L_55 = p2;
		t1044 * L_56 = p3;
		m4262(__this, ((int32_t)((int32_t)L_53+(int32_t)1)), L_54, L_55, L_56, NULL);
	}

IL_0143:
	{
		return;
	}
}
extern "C" int32_t m4263 (t1045 * __this, const MethodInfo* method)
{
	{
		t919 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
extern "C" bool m4264 (t1045 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t7 * m4265 (t1045 * __this, const MethodInfo* method)
{
	{
		t919 * L_0 = (__this->f0);
		return L_0;
	}
}
extern TypeInfo* t50_TI_var;
extern TypeInfo* t1042_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m4266 (t1045 * __this, t52 * p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t1042  V_0 = {0};
	t7 * V_1 = {0};
	t7 * V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t919 * L_0 = (__this->f0);
		t7 * L_1 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(40 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0011:
		{
			t7 * L_2 = V_1;
			t7 * L_3 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_2);
			V_0 = ((*(t1042 *)((t1042 *)UnBox (L_3, t1042_TI_var))));
			int32_t L_4 = p1;
			t52 * L_5 = p0;
			int32_t L_6 = m4505(L_5, NULL);
			if ((((int32_t)L_4) <= ((int32_t)L_6)))
			{
				goto IL_002e;
			}
		}

IL_0029:
		{
			goto IL_004b;
		}

IL_002e:
		{
			t52 * L_7 = p0;
			t1042  L_8 = V_0;
			t1042  L_9 = L_8;
			t7 * L_10 = Box(t1042_TI_var, &L_9);
			int32_t L_11 = p1;
			int32_t L_12 = L_11;
			p1 = ((int32_t)((int32_t)L_12+(int32_t)1));
			m4506(L_7, L_10, L_12, NULL);
		}

IL_0040:
		{
			t7 * L_13 = V_1;
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_13);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			t7 * L_15 = V_1;
			V_2 = ((t7 *)IsInst(L_15, t88_TI_var));
			t7 * L_16 = V_2;
			if (L_16)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005b:
		{
			t7 * L_17 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_17);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0062:
	{
		return;
	}
}
extern TypeInfo* t1043_TI_var;
extern "C" t7 * m4267 (t1045 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1043_TI_var = il2cpp_codegen_type_info_from_index(1931);
		s_Il2CppMethodIntialized = true;
	}
	{
		t919 * L_0 = (__this->f0);
		t1043 * L_1 = (t1043 *)il2cpp_codegen_object_new (t1043_TI_var);
		m4249(L_1, L_0, NULL);
		return L_1;
	}
}
#include "t1046.h"
#ifndef _MSC_VER
#else
#endif
#include "t1046MD.h"

#include "t910.h"
#include "t1052.h"
#include "t1020.h"
#include "t1051.h"
#include "t1057.h"
#include "t396.h"
#include "t1053.h"
#include "t1061.h"
#include "t1049.h"
#include "t1056.h"
#include "t1062.h"
#include "t1065.h"
#include "t1060.h"
#include "t1059.h"
#include "t1054.h"
#include "t1055.h"
#include "t1058.h"
#include "t1063.h"
#include "t1064.h"
#include "t1094.h"
#include "t910MD.h"
#include "t58MD.h"
#include "t1052MD.h"
#include "t1053MD.h"
#include "t1051MD.h"
#include "t1062MD.h"
#include "t1065MD.h"
#include "t1060MD.h"
#include "t1057MD.h"
#include "t1061MD.h"
#include "t1056MD.h"
#include "t1055MD.h"
#include "t1059MD.h"
#include "t1054MD.h"
#include "t1058MD.h"
#include "t1064MD.h"
#include "t1063MD.h"
#include "t396MD.h"


extern TypeInfo* t919_TI_var;
extern TypeInfo* t910_TI_var;
extern "C" void m4268 (t1046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t919 * L_0 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
		m4512(L_0, NULL);
		__this->f2 = L_0;
		t910 * L_1 = (t910 *)il2cpp_codegen_object_new (t910_TI_var);
		m4640(L_1, NULL);
		__this->f3 = L_1;
		return;
	}
}
extern "C" int32_t m4269 (t7 * __this , t47* p0, int32_t* p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = m4272(NULL, L_0, L_1, ((int32_t)10), 1, ((int32_t)2147483647), NULL);
		return L_2;
	}
}
extern "C" int32_t m4270 (t7 * __this , t47* p0, int32_t* p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = m4272(NULL, L_0, L_1, 8, 1, 3, NULL);
		return L_2;
	}
}
extern "C" int32_t m4271 (t7 * __this , t47* p0, int32_t* p1, int32_t p2, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p2;
		int32_t L_4 = m4272(NULL, L_0, L_1, ((int32_t)16), L_2, L_3, NULL);
		return L_4;
	}
}
extern "C" int32_t m4272 (t7 * __this , t47* p0, int32_t* p1, int32_t p2, int32_t p3, int32_t p4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = p1;
		V_0 = (*((int32_t*)L_0));
		V_1 = 0;
		V_2 = 0;
		int32_t L_1 = p4;
		int32_t L_2 = p3;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		p4 = ((int32_t)2147483647);
	}

IL_0016:
	{
		goto IL_0048;
	}

IL_001b:
	{
		t47* L_3 = p0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		uint16_t L_6 = m1754(L_3, L_5, NULL);
		int32_t L_7 = p2;
		int32_t L_8 = V_2;
		int32_t L_9 = m4288(NULL, L_6, L_7, L_8, NULL);
		V_3 = L_9;
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		goto IL_005c;
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = p2;
		int32_t L_14 = V_3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)L_13))+(int32_t)L_14));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = p4;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_18 = V_0;
		t47* L_19 = p0;
		int32_t L_20 = m1741(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001b;
		}
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = p3;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0065;
		}
	}
	{
		return (-1);
	}

IL_0065:
	{
		int32_t* L_23 = p1;
		int32_t L_24 = V_0;
		*((int32_t*)(L_23)) = (int32_t)L_24;
		int32_t L_25 = V_1;
		return L_25;
	}
}
extern TypeInfo* t214_TI_var;
extern "C" t47* m4273 (t7 * __this , t47* p0, int32_t* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t47* L_0 = p0;
		int32_t* L_1 = p1;
		uint16_t L_2 = m1754(L_0, (*((int32_t*)L_1)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_3 = m4645(NULL, L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		t47* L_4 = p0;
		int32_t* L_5 = p1;
		int32_t L_6 = m4272(NULL, L_4, L_5, ((int32_t)10), 1, 0, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		t47* L_8 = m3260((&V_0), NULL);
		return L_8;
	}

IL_002d:
	{
		return (t47*)NULL;
	}

IL_002f:
	{
		int32_t* L_9 = p1;
		V_1 = (*((int32_t*)L_9));
		goto IL_0054;
	}

IL_0037:
	{
		t47* L_10 = p0;
		int32_t* L_11 = p1;
		uint16_t L_12 = m1754(L_10, (*((int32_t*)L_11)), NULL);
		bool L_13 = m4286(NULL, L_12, NULL);
		if (L_13)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_004e:
	{
		int32_t* L_14 = p1;
		int32_t* L_15 = p1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_15))+(int32_t)1));
	}

IL_0054:
	{
		goto IL_0037;
	}

IL_0059:
	{
		int32_t* L_16 = p1;
		int32_t L_17 = V_1;
		if ((((int32_t)((int32_t)((int32_t)(*((int32_t*)L_16))-(int32_t)L_17))) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		t47* L_18 = p0;
		int32_t L_19 = V_1;
		int32_t* L_20 = p1;
		int32_t L_21 = V_1;
		t47* L_22 = m1755(L_18, L_19, ((int32_t)((int32_t)(*((int32_t*)L_20))-(int32_t)L_21)), NULL);
		return L_22;
	}

IL_006f:
	{
		return (t47*)NULL;
	}
}
extern TypeInfo* t1052_TI_var;
extern TypeInfo* t691_TI_var;
extern "C" t1052 * m4274 (t1046 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1052_TI_var = il2cpp_codegen_type_info_from_index(1932);
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	t1052 * V_0 = {0};
	t1052 * V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t47* L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = 0;
		t919 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(28 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
		t910 * L_2 = (__this->f3);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.Hashtable::Clear() */, L_2);
		__this->f4 = 0;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			t1052 * L_3 = (t1052 *)il2cpp_codegen_object_new (t1052_TI_var);
			m4332(L_3, NULL);
			V_0 = L_3;
			t1052 * L_4 = V_0;
			int32_t L_5 = p1;
			m4276(__this, L_4, L_5, (t1057 *)NULL, NULL);
			m4290(__this, NULL);
			t1052 * L_6 = V_0;
			int32_t L_7 = (__this->f4);
			m4333(L_6, L_7, NULL);
			t1052 * L_8 = V_0;
			V_1 = L_8;
			goto IL_006a;
		}

IL_0053:
		{
			; // IL_0053: leave IL_006a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t691_TI_var, e.ex->object.klass))
			goto CATCH_0058;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.IndexOutOfRangeException)
		t396 * L_9 = m4298(__this, (t47*) &_stringLiteral646, NULL);
		il2cpp_codegen_raise_exception(L_9);
		goto IL_006a;
	} // end catch (depth: 1)

IL_006a:
	{
		t1052 * L_10 = V_1;
		return L_10;
	}
}
extern TypeInfo* t58_TI_var;
extern TypeInfo* t1053_TI_var;
extern TypeInfo* t1128_TI_var;
extern "C" int32_t m4275 (t1046 * __this, t910 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t1053_TI_var = il2cpp_codegen_type_info_from_index(1933);
		t1128_TI_var = il2cpp_codegen_type_info_from_index(1898);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1053 * V_2 = {0};
	t47* V_3 = {0};
	int32_t V_4 = 0;
	t47* G_B4_0 = {0};
	{
		t919 * L_0 = (__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = L_1;
		t910 * L_2 = p0;
		int32_t L_3 = 0;
		t7 * L_4 = Box(t58_TI_var, &L_3);
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, (t47*) &_stringLiteral647, L_4);
		V_1 = 0;
		goto IL_00a5;
	}

IL_0024:
	{
		t919 * L_5 = (__this->f2);
		int32_t L_6 = V_1;
		t7 * L_7 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		V_2 = ((t1053 *)Castclass(L_7, t1053_TI_var));
		t1053 * L_8 = V_2;
		t47* L_9 = m4338(L_8, NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		t1053 * L_10 = V_2;
		t47* L_11 = m4338(L_10, NULL);
		G_B4_0 = L_11;
		goto IL_005b;
	}

IL_004c:
	{
		t1053 * L_12 = V_2;
		int32_t L_13 = m4336(L_12, NULL);
		V_4 = L_13;
		t47* L_14 = m3260((&V_4), NULL);
		G_B4_0 = L_14;
	}

IL_005b:
	{
		V_3 = G_B4_0;
		t910 * L_15 = p0;
		t47* L_16 = V_3;
		bool L_17 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_008f;
		}
	}
	{
		t910 * L_18 = p0;
		t47* L_19 = V_3;
		t7 * L_20 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, L_19);
		t1053 * L_21 = V_2;
		int32_t L_22 = m4336(L_21, NULL);
		if ((((int32_t)((*(int32_t*)((int32_t*)UnBox (L_20, t58_TI_var))))) == ((int32_t)L_22)))
		{
			goto IL_008a;
		}
	}
	{
		t1128 * L_23 = (t1128 *)il2cpp_codegen_object_new (t1128_TI_var);
		m4638(L_23, (t47*) &_stringLiteral648, NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008a:
	{
		goto IL_00a1;
	}

IL_008f:
	{
		t910 * L_24 = p0;
		t47* L_25 = V_3;
		t1053 * L_26 = V_2;
		int32_t L_27 = m4336(L_26, NULL);
		int32_t L_28 = L_27;
		t7 * L_29 = Box(t58_TI_var, &L_28);
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_24, L_25, L_29);
	}

IL_00a1:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_33 = (__this->f5);
		return L_33;
	}
}
extern TypeInfo* t1052_TI_var;
extern TypeInfo* t1051_TI_var;
extern TypeInfo* t1062_TI_var;
extern TypeInfo* t1065_TI_var;
extern TypeInfo* t1060_TI_var;
extern TypeInfo* t1061_TI_var;
extern TypeInfo* t1056_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t214_TI_var;
extern "C" void m4276 (t1046 * __this, t1051 * p0, int32_t p1, t1057 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1052_TI_var = il2cpp_codegen_type_info_from_index(1932);
		t1051_TI_var = il2cpp_codegen_type_info_from_index(1934);
		t1062_TI_var = il2cpp_codegen_type_info_from_index(1935);
		t1065_TI_var = il2cpp_codegen_type_info_from_index(1936);
		t1060_TI_var = il2cpp_codegen_type_info_from_index(1937);
		t1061_TI_var = il2cpp_codegen_type_info_from_index(1938);
		t1056_TI_var = il2cpp_codegen_type_info_from_index(1939);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t1061 * V_1 = {0};
	t47* V_2 = {0};
	t1051 * V_3 = {0};
	t1049 * V_4 = {0};
	bool V_5 = false;
	uint16_t V_6 = 0x0;
	uint16_t V_7 = {0};
	uint16_t V_8 = {0};
	uint16_t V_9 = {0};
	int32_t V_10 = 0;
	bool V_11 = false;
	uint16_t V_12 = 0x0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	t1056 * V_18 = {0};
	int32_t V_19 = 0;
	uint16_t V_20 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	{
		t1051 * L_0 = p0;
		V_0 = ((!(((t7*)(t1052 *)((t1052 *)IsInst(L_0, t1052_TI_var))) <= ((t7*)(t7 *)NULL)))? 1 : 0);
		V_1 = (t1061 *)NULL;
		V_2 = (t47*)NULL;
		t1051 * L_1 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_1, NULL);
		V_3 = L_1;
		V_4 = (t1049 *)NULL;
		V_5 = 0;
	}

IL_001a:
	{
		int32_t L_2 = p1;
		bool L_3 = m4296(NULL, L_2, NULL);
		m4289(__this, L_3, NULL);
		int32_t L_4 = (__this->f1);
		t47* L_5 = (__this->f0);
		int32_t L_6 = m1741(L_5, NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0484;
	}

IL_0041:
	{
		t47* L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		int32_t L_9 = L_8;
		V_19 = L_9;
		__this->f1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_19;
		uint16_t L_11 = m1754(L_7, L_10, NULL);
		V_6 = L_11;
		uint16_t L_12 = V_6;
		V_20 = L_12;
		uint16_t L_13 = V_20;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 0)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 1)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 2)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 3)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 4)
		{
			goto IL_0190;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 5)
		{
			goto IL_01da;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 6)
		{
			goto IL_025f;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 7)
		{
			goto IL_025f;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 8)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 9)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 10)
		{
			goto IL_0110;
		}
	}

IL_009b:
	{
		uint16_t L_14 = V_20;
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_0182;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_0133;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 3)
		{
			goto IL_00cc;
		}
	}

IL_00b5:
	{
		uint16_t L_15 = V_20;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)63))))
		{
			goto IL_025f;
		}
	}
	{
		uint16_t L_16 = V_20;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)124))))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_026b;
	}

IL_00cc:
	{
		int32_t L_17 = p1;
		bool L_18 = m4293(NULL, L_17, NULL);
		if (!L_18)
		{
			goto IL_00dd;
		}
	}
	{
		G_B11_0 = 3;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B11_0 = 1;
	}

IL_00de:
	{
		V_7 = G_B11_0;
		uint16_t L_19 = V_7;
		t1062 * L_20 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_20, L_19, NULL);
		V_4 = L_20;
		goto IL_0270;
	}

IL_00ee:
	{
		int32_t L_21 = p1;
		bool L_22 = m4293(NULL, L_21, NULL);
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		G_B15_0 = 7;
		goto IL_0100;
	}

IL_00ff:
	{
		G_B15_0 = 5;
	}

IL_0100:
	{
		V_8 = G_B15_0;
		uint16_t L_23 = V_8;
		t1062 * L_24 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_24, L_23, NULL);
		V_4 = L_24;
		goto IL_0270;
	}

IL_0110:
	{
		int32_t L_25 = p1;
		bool L_26 = m4295(NULL, L_25, NULL);
		if (!L_26)
		{
			goto IL_0121;
		}
	}
	{
		G_B19_0 = 2;
		goto IL_0122;
	}

IL_0121:
	{
		G_B19_0 = 1;
	}

IL_0122:
	{
		V_9 = G_B19_0;
		uint16_t L_27 = V_9;
		t1065 * L_28 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_28, L_27, 0, NULL);
		V_4 = L_28;
		goto IL_0270;
	}

IL_0133:
	{
		int32_t L_29 = m4284(__this, NULL);
		V_10 = L_29;
		int32_t L_30 = V_10;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_31 = V_10;
		V_6 = (((uint16_t)L_31));
		goto IL_017d;
	}

IL_014d:
	{
		int32_t L_32 = p1;
		t1049 * L_33 = m4283(__this, L_32, NULL);
		V_4 = L_33;
		t1049 * L_34 = V_4;
		if (L_34)
		{
			goto IL_017d;
		}
	}
	{
		t47* L_35 = (__this->f0);
		int32_t L_36 = (__this->f1);
		int32_t L_37 = L_36;
		V_19 = L_37;
		__this->f1 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_19;
		uint16_t L_39 = m1754(L_35, L_38, NULL);
		V_6 = L_39;
	}

IL_017d:
	{
		goto IL_0270;
	}

IL_0182:
	{
		int32_t L_40 = p1;
		t1049 * L_41 = m4280(__this, L_40, NULL);
		V_4 = L_41;
		goto IL_0270;
	}

IL_0190:
	{
		int32_t L_42 = p1;
		bool L_43 = m4292(NULL, L_42, NULL);
		V_11 = L_43;
		t1049 * L_44 = m4277(__this, (&p1), NULL);
		V_4 = L_44;
		t1049 * L_45 = V_4;
		if (L_45)
		{
			goto IL_01d5;
		}
	}
	{
		t47* L_46 = V_2;
		if (!L_46)
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_47 = p1;
		bool L_48 = m4292(NULL, L_47, NULL);
		bool L_49 = V_11;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_01d0;
		}
	}
	{
		t1051 * L_50 = V_3;
		t47* L_51 = V_2;
		int32_t L_52 = p1;
		bool L_53 = m4292(NULL, L_52, NULL);
		t1060 * L_54 = (t1060 *)il2cpp_codegen_object_new (t1060_TI_var);
		m4380(L_54, L_51, L_53, NULL);
		m4328(L_50, L_54, NULL);
		V_2 = (t47*)NULL;
	}

IL_01d0:
	{
		goto IL_001a;
	}

IL_01d5:
	{
		goto IL_0270;
	}

IL_01da:
	{
		V_5 = 1;
		goto IL_0484;
	}

IL_01e2:
	{
		t47* L_55 = V_2;
		if (!L_55)
		{
			goto IL_01fc;
		}
	}
	{
		t1051 * L_56 = V_3;
		t47* L_57 = V_2;
		int32_t L_58 = p1;
		bool L_59 = m4292(NULL, L_58, NULL);
		t1060 * L_60 = (t1060 *)il2cpp_codegen_object_new (t1060_TI_var);
		m4380(L_60, L_57, L_59, NULL);
		m4328(L_56, L_60, NULL);
		V_2 = (t47*)NULL;
	}

IL_01fc:
	{
		t1057 * L_61 = p2;
		if (!L_61)
		{
			goto IL_0241;
		}
	}
	{
		t1057 * L_62 = p2;
		t1049 * L_63 = m4358(L_62, NULL);
		if (L_63)
		{
			goto IL_0219;
		}
	}
	{
		t1057 * L_64 = p2;
		t1051 * L_65 = V_3;
		m4359(L_64, L_65, NULL);
		goto IL_023c;
	}

IL_0219:
	{
		t1057 * L_66 = p2;
		t1049 * L_67 = m4360(L_66, NULL);
		if (L_67)
		{
			goto IL_0230;
		}
	}
	{
		t1057 * L_68 = p2;
		t1051 * L_69 = V_3;
		m4361(L_68, L_69, NULL);
		goto IL_023c;
	}

IL_0230:
	{
		t396 * L_70 = m4298(__this, (t47*) &_stringLiteral649, NULL);
		il2cpp_codegen_raise_exception(L_70);
	}

IL_023c:
	{
		goto IL_0254;
	}

IL_0241:
	{
		t1061 * L_71 = V_1;
		if (L_71)
		{
			goto IL_024d;
		}
	}
	{
		t1061 * L_72 = (t1061 *)il2cpp_codegen_object_new (t1061_TI_var);
		m4375(L_72, NULL);
		V_1 = L_72;
	}

IL_024d:
	{
		t1061 * L_73 = V_1;
		t1051 * L_74 = V_3;
		m4377(L_73, L_74, NULL);
	}

IL_0254:
	{
		t1051 * L_75 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_75, NULL);
		V_3 = L_75;
		goto IL_001a;
	}

IL_025f:
	{
		t396 * L_76 = m4298(__this, (t47*) &_stringLiteral650, NULL);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_026b:
	{
		goto IL_0270;
	}

IL_0270:
	{
		int32_t L_77 = p1;
		bool L_78 = m4296(NULL, L_77, NULL);
		m4289(__this, L_78, NULL);
		int32_t L_79 = (__this->f1);
		t47* L_80 = (__this->f0);
		int32_t L_81 = m1741(L_80, NULL);
		if ((((int32_t)L_79) >= ((int32_t)L_81)))
		{
			goto IL_0413;
		}
	}
	{
		t47* L_82 = (__this->f0);
		int32_t L_83 = (__this->f1);
		uint16_t L_84 = m1754(L_82, L_83, NULL);
		V_12 = L_84;
		V_13 = 0;
		V_14 = 0;
		V_15 = 0;
		V_16 = 0;
		uint16_t L_85 = V_12;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)63))))
		{
			goto IL_02cc;
		}
	}
	{
		uint16_t L_86 = V_12;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)42))))
		{
			goto IL_02cc;
		}
	}
	{
		uint16_t L_87 = V_12;
		if ((!(((uint32_t)L_87) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_032f;
		}
	}

IL_02cc:
	{
		int32_t L_88 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_88+(int32_t)1));
		V_16 = 1;
		uint16_t L_89 = V_12;
		V_20 = L_89;
		uint16_t L_90 = V_20;
		if ((((int32_t)L_90) == ((int32_t)((int32_t)42))))
		{
			goto IL_030c;
		}
	}
	{
		uint16_t L_91 = V_20;
		if ((((int32_t)L_91) == ((int32_t)((int32_t)43))))
		{
			goto IL_031b;
		}
	}
	{
		uint16_t L_92 = V_20;
		if ((((int32_t)L_92) == ((int32_t)((int32_t)63))))
		{
			goto IL_0301;
		}
	}
	{
		goto IL_032a;
	}

IL_0301:
	{
		V_13 = 0;
		V_14 = 1;
		goto IL_032a;
	}

IL_030c:
	{
		V_13 = 0;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_031b:
	{
		V_13 = 1;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_032a:
	{
		goto IL_0382;
	}

IL_032f:
	{
		uint16_t L_93 = V_12;
		if ((!(((uint32_t)L_93) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_94 = (__this->f1);
		t47* L_95 = (__this->f0);
		int32_t L_96 = m1741(L_95, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_94+(int32_t)1))) >= ((int32_t)L_96)))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_97 = (__this->f1);
		V_17 = L_97;
		int32_t L_98 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_98+(int32_t)1));
		int32_t L_99 = p1;
		bool L_100 = m4281(__this, (&V_13), (&V_14), L_99, NULL);
		V_16 = L_100;
		bool L_101 = V_16;
		if (L_101)
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_102 = V_17;
		__this->f1 = L_102;
	}

IL_0382:
	{
		bool L_103 = V_16;
		if (!L_103)
		{
			goto IL_0413;
		}
	}
	{
		int32_t L_104 = p1;
		bool L_105 = m4296(NULL, L_104, NULL);
		m4289(__this, L_105, NULL);
		int32_t L_106 = (__this->f1);
		t47* L_107 = (__this->f0);
		int32_t L_108 = m1741(L_107, NULL);
		if ((((int32_t)L_106) >= ((int32_t)L_108)))
		{
			goto IL_03d4;
		}
	}
	{
		t47* L_109 = (__this->f0);
		int32_t L_110 = (__this->f1);
		uint16_t L_111 = m1754(L_109, L_110, NULL);
		if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_03d4;
		}
	}
	{
		int32_t L_112 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_112+(int32_t)1));
		V_15 = 1;
	}

IL_03d4:
	{
		int32_t L_113 = V_13;
		int32_t L_114 = V_14;
		bool L_115 = V_15;
		t1056 * L_116 = (t1056 *)il2cpp_codegen_object_new (t1056_TI_var);
		m4350(L_116, L_113, L_114, L_115, NULL);
		V_18 = L_116;
		t1049 * L_117 = V_4;
		if (L_117)
		{
			goto IL_0406;
		}
	}
	{
		t1056 * L_118 = V_18;
		t47* L_119 = m1778((&V_6), NULL);
		int32_t L_120 = p1;
		bool L_121 = m4292(NULL, L_120, NULL);
		t1060 * L_122 = (t1060 *)il2cpp_codegen_object_new (t1060_TI_var);
		m4380(L_122, L_119, L_121, NULL);
		m4352(L_118, L_122, NULL);
		goto IL_040f;
	}

IL_0406:
	{
		t1056 * L_123 = V_18;
		t1049 * L_124 = V_4;
		m4352(L_123, L_124, NULL);
	}

IL_040f:
	{
		t1056 * L_125 = V_18;
		V_4 = L_125;
	}

IL_0413:
	{
		t1049 * L_126 = V_4;
		if (L_126)
		{
			goto IL_0439;
		}
	}
	{
		t47* L_127 = V_2;
		if (L_127)
		{
			goto IL_0426;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_128 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_2 = L_128;
	}

IL_0426:
	{
		t47* L_129 = V_2;
		uint16_t L_130 = V_6;
		uint16_t L_131 = L_130;
		t7 * L_132 = Box(t214_TI_var, &L_131);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_133 = m217(NULL, L_129, L_132, NULL);
		V_2 = L_133;
		goto IL_045e;
	}

IL_0439:
	{
		t47* L_134 = V_2;
		if (!L_134)
		{
			goto IL_0453;
		}
	}
	{
		t1051 * L_135 = V_3;
		t47* L_136 = V_2;
		int32_t L_137 = p1;
		bool L_138 = m4292(NULL, L_137, NULL);
		t1060 * L_139 = (t1060 *)il2cpp_codegen_object_new (t1060_TI_var);
		m4380(L_139, L_136, L_138, NULL);
		m4328(L_135, L_139, NULL);
		V_2 = (t47*)NULL;
	}

IL_0453:
	{
		t1051 * L_140 = V_3;
		t1049 * L_141 = V_4;
		m4328(L_140, L_141, NULL);
		V_4 = (t1049 *)NULL;
	}

IL_045e:
	{
		bool L_142 = V_0;
		if (!L_142)
		{
			goto IL_047f;
		}
	}
	{
		int32_t L_143 = (__this->f1);
		t47* L_144 = (__this->f0);
		int32_t L_145 = m1741(L_144, NULL);
		if ((((int32_t)L_143) < ((int32_t)L_145)))
		{
			goto IL_047f;
		}
	}
	{
		goto IL_0484;
	}

IL_047f:
	{
		goto IL_001a;
	}

IL_0484:
	{
		bool L_146 = V_0;
		if (!L_146)
		{
			goto IL_049d;
		}
	}
	{
		bool L_147 = V_5;
		if (!L_147)
		{
			goto IL_049d;
		}
	}
	{
		t396 * L_148 = m4298(__this, (t47*) &_stringLiteral651, NULL);
		il2cpp_codegen_raise_exception(L_148);
	}

IL_049d:
	{
		bool L_149 = V_0;
		if (L_149)
		{
			goto IL_04b6;
		}
	}
	{
		bool L_150 = V_5;
		if (L_150)
		{
			goto IL_04b6;
		}
	}
	{
		t396 * L_151 = m4298(__this, (t47*) &_stringLiteral652, NULL);
		il2cpp_codegen_raise_exception(L_151);
	}

IL_04b6:
	{
		t47* L_152 = V_2;
		if (!L_152)
		{
			goto IL_04ce;
		}
	}
	{
		t1051 * L_153 = V_3;
		t47* L_154 = V_2;
		int32_t L_155 = p1;
		bool L_156 = m4292(NULL, L_155, NULL);
		t1060 * L_157 = (t1060 *)il2cpp_codegen_object_new (t1060_TI_var);
		m4380(L_157, L_154, L_156, NULL);
		m4328(L_153, L_157, NULL);
	}

IL_04ce:
	{
		t1057 * L_158 = p2;
		if (!L_158)
		{
			goto IL_04fe;
		}
	}
	{
		t1057 * L_159 = p2;
		t1049 * L_160 = m4358(L_159, NULL);
		if (L_160)
		{
			goto IL_04eb;
		}
	}
	{
		t1057 * L_161 = p2;
		t1051 * L_162 = V_3;
		m4359(L_161, L_162, NULL);
		goto IL_04f2;
	}

IL_04eb:
	{
		t1057 * L_163 = p2;
		t1051 * L_164 = V_3;
		m4361(L_163, L_164, NULL);
	}

IL_04f2:
	{
		t1051 * L_165 = p0;
		t1057 * L_166 = p2;
		m4328(L_165, L_166, NULL);
		goto IL_051e;
	}

IL_04fe:
	{
		t1061 * L_167 = V_1;
		if (!L_167)
		{
			goto IL_0517;
		}
	}
	{
		t1061 * L_168 = V_1;
		t1051 * L_169 = V_3;
		m4377(L_168, L_169, NULL);
		t1051 * L_170 = p0;
		t1061 * L_171 = V_1;
		m4328(L_170, L_171, NULL);
		goto IL_051e;
	}

IL_0517:
	{
		t1051 * L_172 = p0;
		t1051 * L_173 = V_3;
		m4328(L_172, L_173, NULL);
	}

IL_051e:
	{
		return;
	}
}
extern TypeInfo* t1051_TI_var;
extern TypeInfo* t1053_TI_var;
extern TypeInfo* t1055_TI_var;
extern TypeInfo* t1059_TI_var;
extern TypeInfo* t1054_TI_var;
extern TypeInfo* t1060_TI_var;
extern TypeInfo* t1058_TI_var;
extern "C" t1049 * m4277 (t1046 * __this, int32_t* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1051_TI_var = il2cpp_codegen_type_info_from_index(1934);
		t1053_TI_var = il2cpp_codegen_type_info_from_index(1933);
		t1055_TI_var = il2cpp_codegen_type_info_from_index(1940);
		t1059_TI_var = il2cpp_codegen_type_info_from_index(1941);
		t1054_TI_var = il2cpp_codegen_type_info_from_index(1942);
		t1060_TI_var = il2cpp_codegen_type_info_from_index(1937);
		t1058_TI_var = il2cpp_codegen_type_info_from_index(1943);
		s_Il2CppMethodIntialized = true;
	}
	t1051 * V_0 = {0};
	t1051 * V_1 = {0};
	t1051 * V_2 = {0};
	int32_t V_3 = {0};
	t1051 * V_4 = {0};
	t1059 * V_5 = {0};
	t1051 * V_6 = {0};
	uint16_t V_7 = 0x0;
	t47* V_8 = {0};
	t1053 * V_9 = {0};
	t47* V_10 = {0};
	t1054 * V_11 = {0};
	t1057 * V_12 = {0};
	int32_t V_13 = 0;
	t47* V_14 = {0};
	t1059 * V_15 = {0};
	t1051 * V_16 = {0};
	t1051 * V_17 = {0};
	uint16_t V_18 = 0x0;
	int32_t V_19 = 0;
	{
		t47* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m1754(L_0, L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)63))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t* L_3 = p0;
		bool L_4 = m4294(NULL, (*((int32_t*)L_3)), NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		t1051 * L_5 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_5, NULL);
		V_0 = L_5;
		goto IL_0042;
	}

IL_002f:
	{
		t1053 * L_6 = (t1053 *)il2cpp_codegen_object_new (t1053_TI_var);
		m4335(L_6, NULL);
		V_0 = L_6;
		t919 * L_7 = (__this->f2);
		t1051 * L_8 = V_0;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, L_8);
	}

IL_0042:
	{
		t1051 * L_9 = V_0;
		int32_t* L_10 = p0;
		m4276(__this, L_9, (*((int32_t*)L_10)), (t1057 *)NULL, NULL);
		t1051 * L_11 = V_0;
		return L_11;
	}

IL_004e:
	{
		int32_t L_12 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		t47* L_13 = (__this->f0);
		int32_t L_14 = (__this->f1);
		uint16_t L_15 = m1754(L_13, L_14, NULL);
		V_18 = L_15;
		uint16_t L_16 = V_18;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 0)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 1)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 2)
		{
			goto IL_0482;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 3)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 4)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 5)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 6)
		{
			goto IL_021c;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 7)
		{
			goto IL_0376;
		}
	}

IL_0099:
	{
		uint16_t L_17 = V_18;
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 0)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 1)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 2)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 3)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 4)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 5)
		{
			goto IL_0139;
		}
	}

IL_00bb:
	{
		uint16_t L_18 = V_18;
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 0)
		{
			goto IL_00f9;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 1)
		{
			goto IL_00d9;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 2)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 3)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 4)
		{
			goto IL_0119;
		}
	}

IL_00d9:
	{
		uint16_t L_19 = V_18;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)45))))
		{
			goto IL_0139;
		}
	}
	{
		uint16_t L_20 = V_18;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)115))))
		{
			goto IL_0139;
		}
	}
	{
		uint16_t L_21 = V_18;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)120))))
		{
			goto IL_0139;
		}
	}
	{
		goto IL_04de;
	}

IL_00f9:
	{
		int32_t L_22 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		t1051 * L_23 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_23, NULL);
		V_1 = L_23;
		t1051 * L_24 = V_1;
		int32_t* L_25 = p0;
		m4276(__this, L_24, (*((int32_t*)L_25)), (t1057 *)NULL, NULL);
		t1051 * L_26 = V_1;
		return L_26;
	}

IL_0119:
	{
		int32_t L_27 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		t1055 * L_28 = (t1055 *)il2cpp_codegen_object_new (t1055_TI_var);
		m4347(L_28, NULL);
		V_2 = L_28;
		t1051 * L_29 = V_2;
		int32_t* L_30 = p0;
		m4276(__this, L_29, (*((int32_t*)L_30)), (t1057 *)NULL, NULL);
		t1051 * L_31 = V_2;
		return L_31;
	}

IL_0139:
	{
		int32_t* L_32 = p0;
		V_3 = (*((int32_t*)L_32));
		m4279(__this, (&V_3), 0, NULL);
		t47* L_33 = (__this->f0);
		int32_t L_34 = (__this->f1);
		uint16_t L_35 = m1754(L_33, L_34, NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_36 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_36+(int32_t)1));
		m4279(__this, (&V_3), 1, NULL);
	}

IL_0174:
	{
		t47* L_37 = (__this->f0);
		int32_t L_38 = (__this->f1);
		uint16_t L_39 = m1754(L_37, L_38, NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_40 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_40+(int32_t)1));
		t1051 * L_41 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_41, NULL);
		V_4 = L_41;
		t1051 * L_42 = V_4;
		int32_t L_43 = V_3;
		m4276(__this, L_42, L_43, (t1057 *)NULL, NULL);
		t1051 * L_44 = V_4;
		return L_44;
	}

IL_01ae:
	{
		t47* L_45 = (__this->f0);
		int32_t L_46 = (__this->f1);
		uint16_t L_47 = m1754(L_45, L_46, NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_48 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_48+(int32_t)1));
		int32_t* L_49 = p0;
		int32_t L_50 = V_3;
		*((int32_t*)(L_49)) = (int32_t)L_50;
		return (t1049 *)NULL;
	}

IL_01d9:
	{
		t396 * L_51 = m4298(__this, (t47*) &_stringLiteral653, NULL);
		il2cpp_codegen_raise_exception(L_51);
	}

IL_01e5:
	{
		t1059 * L_52 = (t1059 *)il2cpp_codegen_object_new (t1059_TI_var);
		m4368(L_52, NULL);
		V_5 = L_52;
		t1059 * L_53 = V_5;
		bool L_54 = m4278(__this, L_53, NULL);
		if (L_54)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_021c;
	}

IL_01fe:
	{
		t1051 * L_55 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_55, NULL);
		V_6 = L_55;
		t1051 * L_56 = V_6;
		int32_t* L_57 = p0;
		m4276(__this, L_56, (*((int32_t*)L_57)), (t1057 *)NULL, NULL);
		t1059 * L_58 = V_5;
		t1051 * L_59 = V_6;
		m4372(L_58, L_59, NULL);
		t1059 * L_60 = V_5;
		return L_60;
	}

IL_021c:
	{
		t47* L_61 = (__this->f0);
		int32_t L_62 = (__this->f1);
		uint16_t L_63 = m1754(L_61, L_62, NULL);
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_023d;
		}
	}
	{
		V_7 = ((int32_t)62);
		goto IL_0241;
	}

IL_023d:
	{
		V_7 = ((int32_t)39);
	}

IL_0241:
	{
		int32_t L_64 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_64+(int32_t)1));
		t47* L_65 = m4285(__this, NULL);
		V_8 = L_65;
		t47* L_66 = (__this->f0);
		int32_t L_67 = (__this->f1);
		uint16_t L_68 = m1754(L_66, L_67, NULL);
		uint16_t L_69 = V_7;
		if ((!(((uint32_t)L_68) == ((uint32_t)L_69))))
		{
			goto IL_02bc;
		}
	}
	{
		t47* L_70 = V_8;
		if (L_70)
		{
			goto IL_0282;
		}
	}
	{
		t396 * L_71 = m4298(__this, (t47*) &_stringLiteral654, NULL);
		il2cpp_codegen_raise_exception(L_71);
	}

IL_0282:
	{
		int32_t L_72 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_72+(int32_t)1));
		t1053 * L_73 = (t1053 *)il2cpp_codegen_object_new (t1053_TI_var);
		m4335(L_73, NULL);
		V_9 = L_73;
		t1053 * L_74 = V_9;
		t47* L_75 = V_8;
		m4339(L_74, L_75, NULL);
		t919 * L_76 = (__this->f2);
		t1053 * L_77 = V_9;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_76, L_77);
		t1053 * L_78 = V_9;
		int32_t* L_79 = p0;
		m4276(__this, L_78, (*((int32_t*)L_79)), (t1057 *)NULL, NULL);
		t1053 * L_80 = V_9;
		return L_80;
	}

IL_02bc:
	{
		t47* L_81 = (__this->f0);
		int32_t L_82 = (__this->f1);
		uint16_t L_83 = m1754(L_81, L_82, NULL);
		if ((!(((uint32_t)L_83) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_84 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_84+(int32_t)1));
		t47* L_85 = m4285(__this, NULL);
		V_10 = L_85;
		t47* L_86 = V_10;
		if (!L_86)
		{
			goto IL_0309;
		}
	}
	{
		t47* L_87 = (__this->f0);
		int32_t L_88 = (__this->f1);
		uint16_t L_89 = m1754(L_87, L_88, NULL);
		uint16_t L_90 = V_7;
		if ((((int32_t)L_89) == ((int32_t)L_90)))
		{
			goto IL_0315;
		}
	}

IL_0309:
	{
		t396 * L_91 = m4298(__this, (t47*) &_stringLiteral655, NULL);
		il2cpp_codegen_raise_exception(L_91);
	}

IL_0315:
	{
		int32_t L_92 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_92+(int32_t)1));
		t1054 * L_93 = (t1054 *)il2cpp_codegen_object_new (t1054_TI_var);
		m4344(L_93, NULL);
		V_11 = L_93;
		t1054 * L_94 = V_11;
		t47* L_95 = V_8;
		m4339(L_94, L_95, NULL);
		t1054 * L_96 = V_11;
		bool L_97 = m4340(L_96, NULL);
		if (!L_97)
		{
			goto IL_034d;
		}
	}
	{
		t919 * L_98 = (__this->f2);
		t1054 * L_99 = V_11;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_98, L_99);
	}

IL_034d:
	{
		t910 * L_100 = (__this->f3);
		t1054 * L_101 = V_11;
		t47* L_102 = V_10;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_100, L_101, L_102);
		t1054 * L_103 = V_11;
		int32_t* L_104 = p0;
		m4276(__this, L_103, (*((int32_t*)L_104)), (t1057 *)NULL, NULL);
		t1054 * L_105 = V_11;
		return L_105;
	}

IL_036a:
	{
		t396 * L_106 = m4298(__this, (t47*) &_stringLiteral654, NULL);
		il2cpp_codegen_raise_exception(L_106);
	}

IL_0376:
	{
		int32_t L_107 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_107+(int32_t)1));
		int32_t L_108 = (__this->f1);
		V_13 = L_108;
		t47* L_109 = m4285(__this, NULL);
		V_14 = L_109;
		t47* L_110 = V_14;
		if (!L_110)
		{
			goto IL_03b3;
		}
	}
	{
		t47* L_111 = (__this->f0);
		int32_t L_112 = (__this->f1);
		uint16_t L_113 = m1754(L_111, L_112, NULL);
		if ((((int32_t)L_113) == ((int32_t)((int32_t)41))))
		{
			goto IL_043a;
		}
	}

IL_03b3:
	{
		int32_t L_114 = V_13;
		__this->f1 = L_114;
		t1059 * L_115 = (t1059 *)il2cpp_codegen_object_new (t1059_TI_var);
		m4368(L_115, NULL);
		V_15 = L_115;
		t47* L_116 = (__this->f0);
		int32_t L_117 = (__this->f1);
		uint16_t L_118 = m1754(L_116, L_117, NULL);
		if ((!(((uint32_t)L_118) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0406;
		}
	}
	{
		int32_t L_119 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_119+(int32_t)1));
		t1059 * L_120 = V_15;
		bool L_121 = m4278(__this, L_120, NULL);
		if (L_121)
		{
			goto IL_0401;
		}
	}
	{
		t396 * L_122 = m4298(__this, (t47*) &_stringLiteral656, NULL);
		il2cpp_codegen_raise_exception(L_122);
	}

IL_0401:
	{
		goto IL_0416;
	}

IL_0406:
	{
		t1059 * L_123 = V_15;
		m4370(L_123, 0, NULL);
		t1059 * L_124 = V_15;
		m4369(L_124, 0, NULL);
	}

IL_0416:
	{
		t1051 * L_125 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_125, NULL);
		V_16 = L_125;
		t1051 * L_126 = V_16;
		int32_t* L_127 = p0;
		m4276(__this, L_126, (*((int32_t*)L_127)), (t1057 *)NULL, NULL);
		t1059 * L_128 = V_15;
		t1051 * L_129 = V_16;
		m4372(L_128, L_129, NULL);
		t1059 * L_130 = V_15;
		V_12 = L_130;
		goto IL_046c;
	}

IL_043a:
	{
		int32_t L_131 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_131+(int32_t)1));
		t47* L_132 = V_14;
		int32_t* L_133 = p0;
		bool L_134 = m4292(NULL, (*((int32_t*)L_133)), NULL);
		t1060 * L_135 = (t1060 *)il2cpp_codegen_object_new (t1060_TI_var);
		m4380(L_135, L_132, L_134, NULL);
		t1058 * L_136 = (t1058 *)il2cpp_codegen_object_new (t1058_TI_var);
		m4363(L_136, L_135, NULL);
		V_12 = L_136;
		t910 * L_137 = (__this->f3);
		t1057 * L_138 = V_12;
		t47* L_139 = V_14;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_137, L_138, L_139);
	}

IL_046c:
	{
		t1051 * L_140 = (t1051 *)il2cpp_codegen_object_new (t1051_TI_var);
		m4327(L_140, NULL);
		V_17 = L_140;
		t1051 * L_141 = V_17;
		int32_t* L_142 = p0;
		t1057 * L_143 = V_12;
		m4276(__this, L_141, (*((int32_t*)L_142)), L_143, NULL);
		t1051 * L_144 = V_17;
		return L_144;
	}

IL_0482:
	{
		int32_t L_145 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_145+(int32_t)1));
		goto IL_04b7;
	}

IL_0495:
	{
		int32_t L_146 = (__this->f1);
		t47* L_147 = (__this->f0);
		int32_t L_148 = m1741(L_147, NULL);
		if ((((int32_t)L_146) < ((int32_t)L_148)))
		{
			goto IL_04b7;
		}
	}
	{
		t396 * L_149 = m4298(__this, (t47*) &_stringLiteral657, NULL);
		il2cpp_codegen_raise_exception(L_149);
	}

IL_04b7:
	{
		t47* L_150 = (__this->f0);
		int32_t L_151 = (__this->f1);
		int32_t L_152 = L_151;
		V_19 = L_152;
		__this->f1 = ((int32_t)((int32_t)L_152+(int32_t)1));
		int32_t L_153 = V_19;
		uint16_t L_154 = m1754(L_150, L_153, NULL);
		if ((!(((uint32_t)L_154) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0495;
		}
	}
	{
		return (t1049 *)NULL;
	}

IL_04de:
	{
		t396 * L_155 = m4298(__this, (t47*) &_stringLiteral658, NULL);
		il2cpp_codegen_raise_exception(L_155);
	}
}
extern "C" bool m4278 (t1046 * __this, t1059 * p0, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		t47* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m1754(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0075;
		}
	}
	{
		t47* L_3 = (__this->f0);
		int32_t L_4 = (__this->f1);
		uint16_t L_5 = m1754(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), NULL);
		V_0 = L_5;
		uint16_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)33))))
		{
			goto IL_004d;
		}
	}
	{
		uint16_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)61))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0059;
	}

IL_0041:
	{
		t1059 * L_8 = p0;
		m4370(L_8, 0, NULL);
		goto IL_005b;
	}

IL_004d:
	{
		t1059 * L_9 = p0;
		m4370(L_9, 1, NULL);
		goto IL_005b;
	}

IL_0059:
	{
		return 0;
	}

IL_005b:
	{
		t1059 * L_10 = p0;
		m4369(L_10, 1, NULL);
		int32_t L_11 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_11+(int32_t)2));
		goto IL_00cb;
	}

IL_0075:
	{
		t47* L_12 = (__this->f0);
		int32_t L_13 = (__this->f1);
		uint16_t L_14 = m1754(L_12, L_13, NULL);
		V_0 = L_14;
		uint16_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)33))))
		{
			goto IL_00a8;
		}
	}
	{
		uint16_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)61))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00b4;
	}

IL_009c:
	{
		t1059 * L_17 = p0;
		m4370(L_17, 0, NULL);
		goto IL_00b6;
	}

IL_00a8:
	{
		t1059 * L_18 = p0;
		m4370(L_18, 1, NULL);
		goto IL_00b6;
	}

IL_00b4:
	{
		return 0;
	}

IL_00b6:
	{
		t1059 * L_19 = p0;
		m4369(L_19, 0, NULL);
		int32_t L_20 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00cb:
	{
		return 1;
	}
}
extern "C" void m4279 (t1046 * __this, int32_t* p0, bool p1, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		goto IL_00ef;
	}

IL_0005:
	{
		t47* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m1754(L_0, L_1, NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 0)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 1)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 2)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 3)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 4)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 5)
		{
			goto IL_0087;
		}
	}

IL_0038:
	{
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)115))))
		{
			goto IL_00a4;
		}
	}
	{
		uint16_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)120))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00e0;
	}

IL_004d:
	{
		bool L_6 = p1;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		int32_t* L_7 = p0;
		int32_t* L_8 = p0;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))&(int32_t)((int32_t)-2)));
		goto IL_0065;
	}

IL_005f:
	{
		int32_t* L_9 = p0;
		int32_t* L_10 = p0;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))|(int32_t)1));
	}

IL_0065:
	{
		goto IL_00e1;
	}

IL_006a:
	{
		bool L_11 = p1;
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		int32_t* L_12 = p0;
		int32_t* L_13 = p0;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_13))&(int32_t)((int32_t)-3)));
		goto IL_0082;
	}

IL_007c:
	{
		int32_t* L_14 = p0;
		int32_t* L_15 = p0;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_15))|(int32_t)2));
	}

IL_0082:
	{
		goto IL_00e1;
	}

IL_0087:
	{
		bool L_16 = p1;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		int32_t* L_17 = p0;
		int32_t* L_18 = p0;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_18))&(int32_t)((int32_t)-5)));
		goto IL_009f;
	}

IL_0099:
	{
		int32_t* L_19 = p0;
		int32_t* L_20 = p0;
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_20))|(int32_t)4));
	}

IL_009f:
	{
		goto IL_00e1;
	}

IL_00a4:
	{
		bool L_21 = p1;
		if (!L_21)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t* L_22 = p0;
		int32_t* L_23 = p0;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_23))&(int32_t)((int32_t)-17)));
		goto IL_00bd;
	}

IL_00b6:
	{
		int32_t* L_24 = p0;
		int32_t* L_25 = p0;
		*((int32_t*)(L_24)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_25))|(int32_t)((int32_t)16)));
	}

IL_00bd:
	{
		goto IL_00e1;
	}

IL_00c2:
	{
		bool L_26 = p1;
		if (!L_26)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t* L_27 = p0;
		int32_t* L_28 = p0;
		*((int32_t*)(L_27)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_28))&(int32_t)((int32_t)-33)));
		goto IL_00db;
	}

IL_00d4:
	{
		int32_t* L_29 = p0;
		int32_t* L_30 = p0;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_30))|(int32_t)((int32_t)32)));
	}

IL_00db:
	{
		goto IL_00e1;
	}

IL_00e0:
	{
		return;
	}

IL_00e1:
	{
		int32_t L_31 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00ef:
	{
		goto IL_0005;
	}
}
extern TypeInfo* t1065_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t69_TI_var;
extern "C" t1049 * m4280 (t1046 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1065_TI_var = il2cpp_codegen_type_info_from_index(1936);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	t1065 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	t1065 * G_B24_0 = {0};
	t1065 * G_B23_0 = {0};
	int32_t G_B25_0 = 0;
	t1065 * G_B25_1 = {0};
	t1065 * G_B28_0 = {0};
	t1065 * G_B27_0 = {0};
	int32_t G_B29_0 = 0;
	t1065 * G_B29_1 = {0};
	t1065 * G_B32_0 = {0};
	t1065 * G_B31_0 = {0};
	int32_t G_B33_0 = 0;
	t1065 * G_B33_1 = {0};
	{
		V_0 = 0;
		t47* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m1754(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)94)))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = 1;
		int32_t L_3 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_4 = p0;
		bool L_5 = m4297(NULL, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_0;
		int32_t L_7 = p0;
		bool L_8 = m4292(NULL, L_7, NULL);
		t1065 * L_9 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4401(L_9, L_6, L_8, NULL);
		V_2 = L_9;
		t47* L_10 = (__this->f0);
		int32_t L_11 = (__this->f1);
		uint16_t L_12 = m1754(L_10, L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_006c;
		}
	}
	{
		t1065 * L_13 = V_2;
		m4405(L_13, ((int32_t)93), NULL);
		int32_t L_14 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006c:
	{
		V_3 = (-1);
		V_4 = (-1);
		V_5 = 0;
		V_6 = 0;
		goto IL_027f;
	}

IL_007c:
	{
		t47* L_15 = (__this->f0);
		int32_t L_16 = (__this->f1);
		int32_t L_17 = L_16;
		V_7 = L_17;
		__this->f1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		int32_t L_18 = V_7;
		uint16_t L_19 = m1754(L_15, L_18, NULL);
		V_3 = L_19;
		int32_t L_20 = V_3;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_00ab;
		}
	}
	{
		V_6 = 1;
		goto IL_0295;
	}

IL_00ab:
	{
		int32_t L_21 = V_3;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_00ca;
		}
	}
	{
		V_5 = 1;
		goto IL_027f;
	}

IL_00ca:
	{
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_25 = m4284(__this, NULL);
		V_3 = L_25;
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_0212;
	}

IL_00e5:
	{
		t47* L_27 = (__this->f0);
		int32_t L_28 = (__this->f1);
		int32_t L_29 = L_28;
		V_7 = L_29;
		__this->f1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_7;
		uint16_t L_31 = m1754(L_27, L_30, NULL);
		V_3 = L_31;
		int32_t L_32 = V_3;
		V_7 = L_32;
		int32_t L_33 = V_7;
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_0121:
	{
		int32_t L_34 = V_7;
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 1)
		{
			goto IL_013b;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 2)
		{
			goto IL_013b;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_013b:
	{
		int32_t L_35 = V_7;
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 0)
		{
			goto IL_0171;
		}
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 1)
		{
			goto IL_0151;
		}
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 2)
		{
			goto IL_0178;
		}
	}

IL_0151:
	{
		int32_t L_36 = V_7;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)68))))
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_37 = V_7;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)87))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_38 = V_7;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)119))))
		{
			goto IL_0196;
		}
	}
	{
		goto IL_01e7;
	}

IL_0171:
	{
		V_3 = 8;
		goto IL_0212;
	}

IL_0178:
	{
		t1065 * L_39 = V_2;
		bool L_40 = V_1;
		G_B23_0 = L_39;
		if (!L_40)
		{
			G_B24_0 = L_39;
			goto IL_0186;
		}
	}
	{
		G_B25_0 = ((int32_t)9);
		G_B25_1 = G_B23_0;
		goto IL_0187;
	}

IL_0186:
	{
		G_B25_0 = 4;
		G_B25_1 = G_B24_0;
	}

IL_0187:
	{
		int32_t L_41 = V_3;
		m4404(G_B25_1, G_B25_0, ((((int32_t)L_41) == ((int32_t)((int32_t)68)))? 1 : 0), NULL);
		goto IL_01ec;
	}

IL_0196:
	{
		t1065 * L_42 = V_2;
		bool L_43 = V_1;
		G_B27_0 = L_42;
		if (!L_43)
		{
			G_B28_0 = L_42;
			goto IL_01a3;
		}
	}
	{
		G_B29_0 = 8;
		G_B29_1 = G_B27_0;
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B29_0 = 3;
		G_B29_1 = G_B28_0;
	}

IL_01a4:
	{
		int32_t L_44 = V_3;
		m4404(G_B29_1, G_B29_0, ((((int32_t)L_44) == ((int32_t)((int32_t)87)))? 1 : 0), NULL);
		goto IL_01ec;
	}

IL_01b3:
	{
		t1065 * L_45 = V_2;
		bool L_46 = V_1;
		G_B31_0 = L_45;
		if (!L_46)
		{
			G_B32_0 = L_45;
			goto IL_01c1;
		}
	}
	{
		G_B33_0 = ((int32_t)10);
		G_B33_1 = G_B31_0;
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B33_0 = 5;
		G_B33_1 = G_B32_0;
	}

IL_01c2:
	{
		int32_t L_47 = V_3;
		m4404(G_B33_1, G_B33_0, ((((int32_t)L_47) == ((int32_t)((int32_t)83)))? 1 : 0), NULL);
		goto IL_01ec;
	}

IL_01d1:
	{
		t1065 * L_48 = V_2;
		uint16_t L_49 = m4282(__this, NULL);
		int32_t L_50 = V_3;
		m4404(L_48, L_49, ((((int32_t)L_50) == ((int32_t)((int32_t)80)))? 1 : 0), NULL);
		goto IL_01ec;
	}

IL_01e7:
	{
		goto IL_0212;
	}

IL_01ec:
	{
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_52 = V_3;
		int32_t L_53 = L_52;
		t7 * L_54 = Box(t58_TI_var, &L_53);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_55 = m217(NULL, (t47*) &_stringLiteral659, L_54, NULL);
		t396 * L_56 = m4298(__this, L_55, NULL);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_020a:
	{
		V_4 = (-1);
		goto IL_027f;
	}

IL_0212:
	{
		bool L_57 = V_5;
		if (!L_57)
		{
			goto IL_0274;
		}
	}
	{
		int32_t L_58 = V_3;
		int32_t L_59 = V_4;
		if ((((int32_t)L_58) >= ((int32_t)L_59)))
		{
			goto IL_025e;
		}
	}
	{
		t69* L_60 = ((t69*)SZArrayNew(t69_TI_var, 5));
		ArrayElementTypeCheck (L_60, (t47*) &_stringLiteral305);
		*((t7 **)(t7 **)SZArrayLdElema(L_60, 0)) = (t7 *)(t47*) &_stringLiteral305;
		t69* L_61 = L_60;
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		t7 * L_64 = Box(t58_TI_var, &L_63);
		ArrayElementTypeCheck (L_61, L_64);
		*((t7 **)(t7 **)SZArrayLdElema(L_61, 1)) = (t7 *)L_64;
		t69* L_65 = L_61;
		ArrayElementTypeCheck (L_65, (t47*) &_stringLiteral134);
		*((t7 **)(t7 **)SZArrayLdElema(L_65, 2)) = (t7 *)(t47*) &_stringLiteral134;
		t69* L_66 = L_65;
		int32_t L_67 = V_3;
		int32_t L_68 = L_67;
		t7 * L_69 = Box(t58_TI_var, &L_68);
		ArrayElementTypeCheck (L_66, L_69);
		*((t7 **)(t7 **)SZArrayLdElema(L_66, 3)) = (t7 *)L_69;
		t69* L_70 = L_66;
		ArrayElementTypeCheck (L_70, (t47*) &_stringLiteral660);
		*((t7 **)(t7 **)SZArrayLdElema(L_70, 4)) = (t7 *)(t47*) &_stringLiteral660;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_71 = m175(NULL, L_70, NULL);
		t396 * L_72 = m4298(__this, L_71, NULL);
		il2cpp_codegen_raise_exception(L_72);
	}

IL_025e:
	{
		t1065 * L_73 = V_2;
		int32_t L_74 = V_4;
		int32_t L_75 = V_3;
		m4406(L_73, (((uint16_t)L_74)), (((uint16_t)L_75)), NULL);
		V_4 = (-1);
		V_5 = 0;
		goto IL_027f;
	}

IL_0274:
	{
		t1065 * L_76 = V_2;
		int32_t L_77 = V_3;
		m4405(L_76, (((uint16_t)L_77)), NULL);
		int32_t L_78 = V_3;
		V_4 = L_78;
	}

IL_027f:
	{
		int32_t L_79 = (__this->f1);
		t47* L_80 = (__this->f0);
		int32_t L_81 = m1741(L_80, NULL);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_007c;
		}
	}

IL_0295:
	{
		bool L_82 = V_6;
		if (L_82)
		{
			goto IL_02a8;
		}
	}
	{
		t396 * L_83 = m4298(__this, (t47*) &_stringLiteral661, NULL);
		il2cpp_codegen_raise_exception(L_83);
	}

IL_02a8:
	{
		bool L_84 = V_5;
		if (!L_84)
		{
			goto IL_02b7;
		}
	}
	{
		t1065 * L_85 = V_2;
		m4405(L_85, ((int32_t)45), NULL);
	}

IL_02b7:
	{
		t1065 * L_86 = V_2;
		return L_86;
	}
}
extern "C" bool m4281 (t1046 * __this, int32_t* p0, int32_t* p1, int32_t p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		int32_t* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = 0;
		V_2 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_2;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		int32_t L_4 = p2;
		bool L_5 = m4296(NULL, L_4, NULL);
		m4289(__this, L_5, NULL);
		t47* L_6 = (__this->f0);
		int32_t L_7 = (__this->f1);
		uint16_t L_8 = m1754(L_6, L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (-1);
		goto IL_004a;
	}

IL_0033:
	{
		int32_t L_9 = m4287(__this, ((int32_t)10), 1, 0, NULL);
		V_0 = L_9;
		int32_t L_10 = p2;
		bool L_11 = m4296(NULL, L_10, NULL);
		m4289(__this, L_11, NULL);
	}

IL_004a:
	{
		t47* L_12 = (__this->f0);
		int32_t L_13 = (__this->f1);
		int32_t L_14 = L_13;
		V_2 = L_14;
		__this->f1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_2;
		uint16_t L_16 = m1754(L_12, L_15, NULL);
		V_3 = L_16;
		uint16_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)44))))
		{
			goto IL_0083;
		}
	}
	{
		uint16_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)125))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_00d0;
	}

IL_007c:
	{
		int32_t L_19 = V_0;
		V_1 = L_19;
		goto IL_00d2;
	}

IL_0083:
	{
		int32_t L_20 = p2;
		bool L_21 = m4296(NULL, L_20, NULL);
		m4289(__this, L_21, NULL);
		int32_t L_22 = m4287(__this, ((int32_t)10), 1, 0, NULL);
		V_1 = L_22;
		int32_t L_23 = p2;
		bool L_24 = m4296(NULL, L_23, NULL);
		m4289(__this, L_24, NULL);
		t47* L_25 = (__this->f0);
		int32_t L_26 = (__this->f1);
		int32_t L_27 = L_26;
		V_2 = L_27;
		__this->f1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = V_2;
		uint16_t L_29 = m1754(L_25, L_28, NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)125))))
		{
			goto IL_00cb;
		}
	}
	{
		return 0;
	}

IL_00cb:
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 0;
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00f4;
		}
	}

IL_00e8:
	{
		t396 * L_32 = m4298(__this, (t47*) &_stringLiteral662, NULL);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_00f4:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)L_35)))
		{
			goto IL_010e;
		}
	}
	{
		t396 * L_36 = m4298(__this, (t47*) &_stringLiteral663, NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_010e:
	{
		int32_t* L_37 = p0;
		int32_t L_38 = V_0;
		*((int32_t*)(L_37)) = (int32_t)L_38;
		int32_t L_39 = V_1;
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		int32_t* L_40 = p1;
		int32_t L_41 = V_1;
		*((int32_t*)(L_40)) = (int32_t)L_41;
		goto IL_0127;
	}

IL_0120:
	{
		int32_t* L_42 = p1;
		*((int32_t*)(L_42)) = (int32_t)((int32_t)2147483647);
	}

IL_0127:
	{
		return 1;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" uint16_t m4282 (t1046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	uint16_t V_1 = {0};
	int32_t V_2 = 0;
	{
		t47* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_2 = L_2;
		__this->f1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_2;
		uint16_t L_4 = m1754(L_0, L_3, NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)123))))
		{
			goto IL_002f;
		}
	}
	{
		t396 * L_5 = m4298(__this, (t47*) &_stringLiteral664, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002f:
	{
		t47* L_6 = (__this->f0);
		int32_t* L_7 = &(__this->f1);
		t47* L_8 = m4273(NULL, L_6, L_7, NULL);
		V_0 = L_8;
		t47* L_9 = V_0;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		t396 * L_10 = m4298(__this, (t47*) &_stringLiteral664, NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0053:
	{
		t47* L_11 = V_0;
		uint16_t L_12 = m4135(NULL, L_11, NULL);
		V_1 = L_12;
		uint16_t L_13 = V_1;
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		t47* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_15 = m205(NULL, (t47*) &_stringLiteral665, L_14, (t47*) &_stringLiteral666, NULL);
		t396 * L_16 = m4298(__this, L_15, NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0077:
	{
		t47* L_17 = (__this->f0);
		int32_t L_18 = (__this->f1);
		int32_t L_19 = L_18;
		V_2 = L_19;
		__this->f1 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_2;
		uint16_t L_21 = m1754(L_17, L_20, NULL);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a6;
		}
	}
	{
		t396 * L_22 = m4298(__this, (t47*) &_stringLiteral664, NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00a6:
	{
		uint16_t L_23 = V_1;
		return L_23;
	}
}
extern TypeInfo* t1065_TI_var;
extern TypeInfo* t1062_TI_var;
extern TypeInfo* t1064_TI_var;
extern TypeInfo* t1063_TI_var;
extern "C" t1049 * m4283 (t1046 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1065_TI_var = il2cpp_codegen_type_info_from_index(1936);
		t1062_TI_var = il2cpp_codegen_type_info_from_index(1935);
		t1064_TI_var = il2cpp_codegen_type_info_from_index(1944);
		t1063_TI_var = il2cpp_codegen_type_info_from_index(1945);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	t1049 * V_2 = {0};
	int32_t V_3 = 0;
	t1063 * V_4 = {0};
	uint16_t V_5 = 0x0;
	t47* V_6 = {0};
	t1063 * V_7 = {0};
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B32_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		int32_t L_1 = p0;
		bool L_2 = m4297(NULL, L_1, NULL);
		V_1 = L_2;
		V_2 = (t1049 *)NULL;
		t47* L_3 = (__this->f0);
		int32_t L_4 = (__this->f1);
		int32_t L_5 = L_4;
		V_8 = L_5;
		__this->f1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_8;
		uint16_t L_7 = m1754(L_3, L_6, NULL);
		V_9 = L_7;
		uint16_t L_8 = V_9;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 0)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 1)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 2)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 3)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 4)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 5)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 6)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 7)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 8)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 9)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 10)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 11)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 12)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 13)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 14)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 15)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 16)
		{
			goto IL_01e0;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 17)
		{
			goto IL_021c;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 18)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 19)
		{
			goto IL_0181;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 20)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 21)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 22)
		{
			goto IL_0204;
		}
	}

IL_0096:
	{
		uint16_t L_9 = V_9;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_01ce;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_01b4;
		}
	}

IL_00b0:
	{
		uint16_t L_10 = V_9;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 0)
		{
			goto IL_019b;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 1)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 2)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 3)
		{
			goto IL_01ec;
		}
	}

IL_00ca:
	{
		uint16_t L_11 = V_9;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 0)
		{
			goto IL_016f;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 1)
		{
			goto IL_00e4;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 2)
		{
			goto IL_00e4;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 3)
		{
			goto IL_0155;
		}
	}

IL_00e4:
	{
		uint16_t L_12 = V_9;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 0)
		{
			goto IL_013c;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 1)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 2)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 3)
		{
			goto IL_01f8;
		}
	}

IL_00fe:
	{
		uint16_t L_13 = V_9;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 0)
		{
			goto IL_0210;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 1)
		{
			goto IL_0114;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 2)
		{
			goto IL_0122;
		}
	}

IL_0114:
	{
		uint16_t L_14 = V_9;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)107))))
		{
			goto IL_027c;
		}
	}
	{
		goto IL_0328;
	}

IL_0122:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_012f;
		}
	}
	{
		G_B11_0 = ((int32_t)9);
		goto IL_0130;
	}

IL_012f:
	{
		G_B11_0 = 4;
	}

IL_0130:
	{
		t1065 * L_16 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_16, G_B11_0, 0, NULL);
		V_2 = L_16;
		goto IL_032f;
	}

IL_013c:
	{
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0148;
		}
	}
	{
		G_B15_0 = 8;
		goto IL_0149;
	}

IL_0148:
	{
		G_B15_0 = 3;
	}

IL_0149:
	{
		t1065 * L_18 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_18, G_B15_0, 0, NULL);
		V_2 = L_18;
		goto IL_032f;
	}

IL_0155:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0162;
		}
	}
	{
		G_B19_0 = ((int32_t)10);
		goto IL_0163;
	}

IL_0162:
	{
		G_B19_0 = 5;
	}

IL_0163:
	{
		t1065 * L_20 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_20, G_B19_0, 0, NULL);
		V_2 = L_20;
		goto IL_032f;
	}

IL_016f:
	{
		uint16_t L_21 = m4282(__this, NULL);
		t1065 * L_22 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_22, L_21, 0, NULL);
		V_2 = L_22;
		goto IL_032f;
	}

IL_0181:
	{
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_018e;
		}
	}
	{
		G_B24_0 = ((int32_t)9);
		goto IL_018f;
	}

IL_018e:
	{
		G_B24_0 = 4;
	}

IL_018f:
	{
		t1065 * L_24 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_24, G_B24_0, 1, NULL);
		V_2 = L_24;
		goto IL_032f;
	}

IL_019b:
	{
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_01a7;
		}
	}
	{
		G_B28_0 = 8;
		goto IL_01a8;
	}

IL_01a7:
	{
		G_B28_0 = 3;
	}

IL_01a8:
	{
		t1065 * L_26 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_26, G_B28_0, 1, NULL);
		V_2 = L_26;
		goto IL_032f;
	}

IL_01b4:
	{
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_01c1;
		}
	}
	{
		G_B32_0 = ((int32_t)10);
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B32_0 = 5;
	}

IL_01c2:
	{
		t1065 * L_28 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_28, G_B32_0, 1, NULL);
		V_2 = L_28;
		goto IL_032f;
	}

IL_01ce:
	{
		uint16_t L_29 = m4282(__this, NULL);
		t1065 * L_30 = (t1065 *)il2cpp_codegen_object_new (t1065_TI_var);
		m4402(L_30, L_29, 1, NULL);
		V_2 = L_30;
		goto IL_032f;
	}

IL_01e0:
	{
		t1062 * L_31 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_31, 2, NULL);
		V_2 = L_31;
		goto IL_032f;
	}

IL_01ec:
	{
		t1062 * L_32 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_32, 5, NULL);
		V_2 = L_32;
		goto IL_032f;
	}

IL_01f8:
	{
		t1062 * L_33 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_33, 6, NULL);
		V_2 = L_33;
		goto IL_032f;
	}

IL_0204:
	{
		t1062 * L_34 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_34, 4, NULL);
		V_2 = L_34;
		goto IL_032f;
	}

IL_0210:
	{
		t1062 * L_35 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_35, 8, NULL);
		V_2 = L_35;
		goto IL_032f;
	}

IL_021c:
	{
		t1062 * L_36 = (t1062 *)il2cpp_codegen_object_new (t1062_TI_var);
		m4386(L_36, ((int32_t)9), NULL);
		V_2 = L_36;
		goto IL_032f;
	}

IL_0229:
	{
		int32_t L_37 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_37-(int32_t)1));
		int32_t L_38 = m4287(__this, ((int32_t)10), 1, 0, NULL);
		V_3 = L_38;
		int32_t L_39 = V_3;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_40 = V_0;
		__this->f1 = L_40;
		return (t1049 *)NULL;
	}

IL_0252:
	{
		int32_t L_41 = p0;
		bool L_42 = m4292(NULL, L_41, NULL);
		bool L_43 = V_1;
		t1064 * L_44 = (t1064 *)il2cpp_codegen_object_new (t1064_TI_var);
		m4398(L_44, L_42, L_43, NULL);
		V_4 = L_44;
		t910 * L_45 = (__this->f3);
		t1063 * L_46 = V_4;
		t47* L_47 = m3260((&V_3), NULL);
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_45, L_46, L_47);
		t1063 * L_48 = V_4;
		V_2 = L_48;
		goto IL_032f;
	}

IL_027c:
	{
		t47* L_49 = (__this->f0);
		int32_t L_50 = (__this->f1);
		int32_t L_51 = L_50;
		V_8 = L_51;
		__this->f1 = ((int32_t)((int32_t)L_51+(int32_t)1));
		int32_t L_52 = V_8;
		uint16_t L_53 = m1754(L_49, L_52, NULL);
		V_5 = L_53;
		uint16_t L_54 = V_5;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_02ae;
		}
	}
	{
		V_5 = ((int32_t)62);
		goto IL_02c3;
	}

IL_02ae:
	{
		uint16_t L_55 = V_5;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)39))))
		{
			goto IL_02c3;
		}
	}
	{
		t396 * L_56 = m4298(__this, (t47*) &_stringLiteral667, NULL);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_02c3:
	{
		t47* L_57 = m4285(__this, NULL);
		V_6 = L_57;
		t47* L_58 = V_6;
		if (!L_58)
		{
			goto IL_02ea;
		}
	}
	{
		t47* L_59 = (__this->f0);
		int32_t L_60 = (__this->f1);
		uint16_t L_61 = m1754(L_59, L_60, NULL);
		uint16_t L_62 = V_5;
		if ((((int32_t)L_61) == ((int32_t)L_62)))
		{
			goto IL_02f6;
		}
	}

IL_02ea:
	{
		t396 * L_63 = m4298(__this, (t47*) &_stringLiteral667, NULL);
		il2cpp_codegen_raise_exception(L_63);
	}

IL_02f6:
	{
		int32_t L_64 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_64+(int32_t)1));
		int32_t L_65 = p0;
		bool L_66 = m4292(NULL, L_65, NULL);
		t1063 * L_67 = (t1063 *)il2cpp_codegen_object_new (t1063_TI_var);
		m4391(L_67, L_66, NULL);
		V_7 = L_67;
		t910 * L_68 = (__this->f3);
		t1063 * L_69 = V_7;
		t47* L_70 = V_6;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_68, L_69, L_70);
		t1063 * L_71 = V_7;
		V_2 = L_71;
		goto IL_032f;
	}

IL_0328:
	{
		V_2 = (t1049 *)NULL;
		goto IL_032f;
	}

IL_032f:
	{
		t1049 * L_72 = V_2;
		if (L_72)
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_73 = V_0;
		__this->f1 = L_73;
	}

IL_033c:
	{
		t1049 * L_74 = V_2;
		return L_74;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" int32_t m4284 (t1046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		int32_t L_1 = V_0;
		t47* L_2 = (__this->f0);
		int32_t L_3 = m1741(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0034;
		}
	}
	{
		t47* L_4 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_5 = m1593(NULL, (t47*) &_stringLiteral668, L_4, NULL);
		t47* L_6 = (__this->f0);
		t396 * L_7 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_7, L_5, L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t47* L_8 = (__this->f0);
		int32_t L_9 = (__this->f1);
		int32_t L_10 = L_9;
		V_4 = L_10;
		__this->f1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_4;
		uint16_t L_12 = m1754(L_8, L_11, NULL);
		V_5 = L_12;
		uint16_t L_13 = V_5;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_00d1;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_00c5;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0140;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 8)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 9)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 10)
		{
			goto IL_0118;
		}
	}

IL_008a:
	{
		uint16_t L_14 = V_5;
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 0)
		{
			goto IL_00c3;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 1)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 2)
		{
			goto IL_0168;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 3)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 4)
		{
			goto IL_00d4;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 5)
		{
			goto IL_00ce;
		}
	}

IL_00ac:
	{
		uint16_t L_15 = V_5;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)48))))
		{
			goto IL_00da;
		}
	}
	{
		uint16_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_01a8;
	}

IL_00c3:
	{
		return 7;
	}

IL_00c5:
	{
		return ((int32_t)9);
	}

IL_00c8:
	{
		return ((int32_t)13);
	}

IL_00cb:
	{
		return ((int32_t)11);
	}

IL_00ce:
	{
		return ((int32_t)12);
	}

IL_00d1:
	{
		return ((int32_t)10);
	}

IL_00d4:
	{
		return ((int32_t)27);
	}

IL_00d7:
	{
		return ((int32_t)92);
	}

IL_00da:
	{
		int32_t L_17 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_17-(int32_t)1));
		int32_t L_18 = (__this->f1);
		V_2 = L_18;
		t47* L_19 = (__this->f0);
		int32_t* L_20 = &(__this->f1);
		int32_t L_21 = m4270(NULL, L_19, L_20, NULL);
		V_3 = L_21;
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_23 = V_2;
		int32_t L_24 = (__this->f1);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0116;
		}
	}
	{
		return 0;
	}

IL_0116:
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0118:
	{
		t47* L_26 = (__this->f0);
		int32_t* L_27 = &(__this->f1);
		int32_t L_28 = m4271(NULL, L_26, L_27, 2, NULL);
		V_1 = L_28;
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		t396 * L_30 = m4298(__this, (t47*) &_stringLiteral669, NULL);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_013e:
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0140:
	{
		t47* L_32 = (__this->f0);
		int32_t* L_33 = &(__this->f1);
		int32_t L_34 = m4271(NULL, L_32, L_33, 4, NULL);
		V_1 = L_34;
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_0166;
		}
	}
	{
		t396 * L_36 = m4298(__this, (t47*) &_stringLiteral669, NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_0166:
	{
		int32_t L_37 = V_1;
		return L_37;
	}

IL_0168:
	{
		t47* L_38 = (__this->f0);
		int32_t L_39 = (__this->f1);
		int32_t L_40 = L_39;
		V_4 = L_40;
		__this->f1 = ((int32_t)((int32_t)L_40+(int32_t)1));
		int32_t L_41 = V_4;
		uint16_t L_42 = m1754(L_38, L_41, NULL);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)64))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)95))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_45 = V_1;
		return ((int32_t)((int32_t)L_45-(int32_t)((int32_t)64)));
	}

IL_019c:
	{
		t396 * L_46 = m4298(__this, (t47*) &_stringLiteral670, NULL);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_01a8:
	{
		int32_t L_47 = V_0;
		__this->f1 = L_47;
		return (-1);
	}
}
extern "C" t47* m4285 (t1046 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f0);
		int32_t* L_1 = &(__this->f1);
		t47* L_2 = m4273(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t214_TI_var;
extern "C" bool m4286 (t7 * __this , uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		uint16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		int32_t L_1 = m4647(NULL, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		uint16_t L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_5 = m4644(NULL, L_4, NULL);
		return L_5;
	}
}
extern "C" int32_t m4287 (t1046 * __this, int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f0);
		int32_t* L_1 = &(__this->f1);
		int32_t L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		int32_t L_5 = m4272(NULL, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
extern "C" int32_t m4288 (t7 * __this , uint16_t p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 0)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 1)
		{
			goto IL_0016;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 2)
		{
			goto IL_003a;
		}
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0098;
	}

IL_0023:
	{
		uint16_t L_3 = p0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)48))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t L_4 = p0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)55))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t L_5 = p0;
		return ((int32_t)((int32_t)L_5-(int32_t)((int32_t)48)));
	}

IL_0038:
	{
		return (-1);
	}

IL_003a:
	{
		uint16_t L_6 = p0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_004f;
		}
	}
	{
		uint16_t L_7 = p0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_004f;
		}
	}
	{
		uint16_t L_8 = p0;
		return ((int32_t)((int32_t)L_8-(int32_t)((int32_t)48)));
	}

IL_004f:
	{
		return (-1);
	}

IL_0051:
	{
		uint16_t L_9 = p0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)48))))
		{
			goto IL_0066;
		}
	}
	{
		uint16_t L_10 = p0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)57))))
		{
			goto IL_0066;
		}
	}
	{
		uint16_t L_11 = p0;
		return ((int32_t)((int32_t)L_11-(int32_t)((int32_t)48)));
	}

IL_0066:
	{
		uint16_t L_12 = p0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_007e;
		}
	}
	{
		uint16_t L_13 = p0;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_007e;
		}
	}
	{
		uint16_t L_14 = p0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_14))-(int32_t)((int32_t)97)));
	}

IL_007e:
	{
		uint16_t L_15 = p0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)65))))
		{
			goto IL_0096;
		}
	}
	{
		uint16_t L_16 = p0;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)70))))
		{
			goto IL_0096;
		}
	}
	{
		uint16_t L_17 = p0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_17))-(int32_t)((int32_t)65)));
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		return (-1);
	}
}
extern TypeInfo* t214_TI_var;
extern "C" void m4289 (t1046 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_0188;
	}

IL_0005:
	{
		t47* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m1754(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_3 = (__this->f1);
		t47* L_4 = (__this->f0);
		int32_t L_5 = m1741(L_4, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_3+(int32_t)3))) < ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		t47* L_6 = (__this->f0);
		int32_t L_7 = (__this->f1);
		uint16_t L_8 = m1754(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)), NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_006a;
		}
	}
	{
		t47* L_9 = (__this->f0);
		int32_t L_10 = (__this->f1);
		uint16_t L_11 = m1754(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), NULL);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)35))))
		{
			goto IL_006b;
		}
	}

IL_006a:
	{
		return;
	}

IL_006b:
	{
		int32_t L_12 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_12+(int32_t)3));
		goto IL_007e;
	}

IL_007e:
	{
		int32_t L_13 = (__this->f1);
		t47* L_14 = (__this->f0);
		int32_t L_15 = m1741(L_14, NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00b7;
		}
	}
	{
		t47* L_16 = (__this->f0);
		int32_t L_17 = (__this->f1);
		int32_t L_18 = L_17;
		V_0 = L_18;
		__this->f1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_0;
		uint16_t L_20 = m1754(L_16, L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_007e;
		}
	}

IL_00b7:
	{
		goto IL_0188;
	}

IL_00bc:
	{
		bool L_21 = p0;
		if (!L_21)
		{
			goto IL_011d;
		}
	}
	{
		t47* L_22 = (__this->f0);
		int32_t L_23 = (__this->f1);
		uint16_t L_24 = m1754(L_22, L_23, NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_011d;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		int32_t L_25 = (__this->f1);
		t47* L_26 = (__this->f0);
		int32_t L_27 = m1741(L_26, NULL);
		if ((((int32_t)L_25) >= ((int32_t)L_27)))
		{
			goto IL_0118;
		}
	}
	{
		t47* L_28 = (__this->f0);
		int32_t L_29 = (__this->f1);
		int32_t L_30 = L_29;
		V_0 = L_30;
		__this->f1 = ((int32_t)((int32_t)L_30+(int32_t)1));
		int32_t L_31 = V_0;
		uint16_t L_32 = m1754(L_28, L_31, NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00df;
		}
	}

IL_0118:
	{
		goto IL_0188;
	}

IL_011d:
	{
		bool L_33 = p0;
		if (!L_33)
		{
			goto IL_0187;
		}
	}
	{
		t47* L_34 = (__this->f0);
		int32_t L_35 = (__this->f1);
		uint16_t L_36 = m1754(L_34, L_35, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_37 = m4646(NULL, L_36, NULL);
		if (!L_37)
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0151;
	}

IL_0143:
	{
		int32_t L_38 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0151:
	{
		int32_t L_39 = (__this->f1);
		t47* L_40 = (__this->f0);
		int32_t L_41 = m1741(L_40, NULL);
		if ((((int32_t)L_39) >= ((int32_t)L_41)))
		{
			goto IL_0182;
		}
	}
	{
		t47* L_42 = (__this->f0);
		int32_t L_43 = (__this->f1);
		uint16_t L_44 = m1754(L_42, L_43, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_45 = m4646(NULL, L_44, NULL);
		if (L_45)
		{
			goto IL_0143;
		}
	}

IL_0182:
	{
		goto IL_0188;
	}

IL_0187:
	{
		return;
	}

IL_0188:
	{
		int32_t L_46 = (__this->f1);
		t47* L_47 = (__this->f0);
		int32_t L_48 = m1741(L_47, NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t910_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t1053_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t214_TI_var;
extern TypeInfo* t919_TI_var;
extern TypeInfo* t475_TI_var;
extern TypeInfo* t1049_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1058_TI_var;
extern TypeInfo* t1064_TI_var;
extern TypeInfo* t1063_TI_var;
extern TypeInfo* t1054_TI_var;
extern "C" void m4290 (t1046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t1053_TI_var = il2cpp_codegen_type_info_from_index(1933);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		t475_TI_var = il2cpp_codegen_type_info_from_index(864);
		t1049_TI_var = il2cpp_codegen_type_info_from_index(1946);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1058_TI_var = il2cpp_codegen_type_info_from_index(1943);
		t1064_TI_var = il2cpp_codegen_type_info_from_index(1944);
		t1063_TI_var = il2cpp_codegen_type_info_from_index(1945);
		t1054_TI_var = il2cpp_codegen_type_info_from_index(1942);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t910 * V_1 = {0};
	t919 * V_2 = {0};
	t1053 * V_3 = {0};
	t7 * V_4 = {0};
	t1053 * V_5 = {0};
	t7 * V_6 = {0};
	t1053 * V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	t47* V_10 = {0};
	t1049 * V_11 = {0};
	t7 * V_12 = {0};
	t47* V_13 = {0};
	t1064 * V_14 = {0};
	t1053 * V_15 = {0};
	t7 * V_16 = {0};
	int32_t V_17 = 0;
	t7 * V_18 = {0};
	t7 * V_19 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t47* G_B50_0 = {0};
	t1046 * G_B50_1 = {0};
	t47* G_B49_0 = {0};
	t1046 * G_B49_1 = {0};
	t47* G_B51_0 = {0};
	t47* G_B51_1 = {0};
	t1046 * G_B51_2 = {0};
	{
		V_0 = 1;
		t910 * L_0 = (t910 *)il2cpp_codegen_object_new (t910_TI_var);
		m4640(L_0, NULL);
		V_1 = L_0;
		V_2 = (t919 *)NULL;
		t919 * L_1 = (__this->f2);
		t7 * L_2 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(40 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_4 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_001c:
		{
			t7 * L_3 = V_4;
			t7 * L_4 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_3);
			V_3 = ((t1053 *)Castclass(L_4, t1053_TI_var));
			t1053 * L_5 = V_3;
			t47* L_6 = m4338(L_5, NULL);
			if (!L_6)
			{
				goto IL_0039;
			}
		}

IL_0034:
		{
			goto IL_0060;
		}

IL_0039:
		{
			t910 * L_7 = V_1;
			t47* L_8 = m3260((&V_0), NULL);
			t1053 * L_9 = V_3;
			VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_7, L_8, L_9);
			t1053 * L_10 = V_3;
			int32_t L_11 = V_0;
			int32_t L_12 = L_11;
			V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
			m4337(L_10, L_12, NULL);
			int32_t L_13 = (__this->f4);
			__this->f4 = ((int32_t)((int32_t)L_13+(int32_t)1));
		}

IL_0060:
		{
			t7 * L_14 = V_4;
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_14);
			if (L_15)
			{
				goto IL_001c;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		{
			t7 * L_16 = V_4;
			V_16 = ((t7 *)IsInst(L_16, t88_TI_var));
			t7 * L_17 = V_16;
			if (L_17)
			{
				goto IL_007f;
			}
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(113)
		}

IL_007f:
		{
			t7 * L_18 = V_16;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_18);
			IL2CPP_END_FINALLY(113)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0087:
	{
		t919 * L_19 = (__this->f2);
		t7 * L_20 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(40 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_19);
		V_6 = L_20;
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020a;
		}

IL_0099:
		{
			t7 * L_21 = V_6;
			t7 * L_22 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_21);
			V_5 = ((t1053 *)Castclass(L_22, t1053_TI_var));
			t1053 * L_23 = V_5;
			t47* L_24 = m4338(L_23, NULL);
			if (L_24)
			{
				goto IL_00b8;
			}
		}

IL_00b3:
		{
			goto IL_020a;
		}

IL_00b8:
		{
			t910 * L_25 = V_1;
			t1053 * L_26 = V_5;
			t47* L_27 = m4338(L_26, NULL);
			bool L_28 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_25, L_27);
			if (!L_28)
			{
				goto IL_011d;
			}
		}

IL_00ca:
		{
			t910 * L_29 = V_1;
			t1053 * L_30 = V_5;
			t47* L_31 = m4338(L_30, NULL);
			t7 * L_32 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_29, L_31);
			V_7 = ((t1053 *)Castclass(L_32, t1053_TI_var));
			t1053 * L_33 = V_5;
			t1053 * L_34 = V_7;
			int32_t L_35 = m4336(L_34, NULL);
			m4337(L_33, L_35, NULL);
			t1053 * L_36 = V_5;
			int32_t L_37 = m4336(L_36, NULL);
			int32_t L_38 = V_0;
			if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
			{
				goto IL_0102;
			}
		}

IL_00f9:
		{
			int32_t L_39 = V_0;
			V_0 = ((int32_t)((int32_t)L_39+(int32_t)1));
			goto IL_0118;
		}

IL_0102:
		{
			t1053 * L_40 = V_5;
			int32_t L_41 = m4336(L_40, NULL);
			int32_t L_42 = V_0;
			if ((((int32_t)L_41) <= ((int32_t)L_42)))
			{
				goto IL_0118;
			}
		}

IL_010f:
		{
			t919 * L_43 = V_2;
			t1053 * L_44 = V_5;
			VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_0118:
		{
			goto IL_020a;
		}

IL_011d:
		{
			t1053 * L_45 = V_5;
			t47* L_46 = m4338(L_45, NULL);
			uint16_t L_47 = m1754(L_46, 0, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
			bool L_48 = m4645(NULL, L_47, NULL);
			if (!L_48)
			{
				goto IL_01ac;
			}
		}

IL_0134:
		{
			V_8 = 0;
			t1053 * L_49 = V_5;
			t47* L_50 = m4338(L_49, NULL);
			int32_t L_51 = m4269(NULL, L_50, (&V_8), NULL);
			V_9 = L_51;
			int32_t L_52 = V_8;
			t1053 * L_53 = V_5;
			t47* L_54 = m4338(L_53, NULL);
			int32_t L_55 = m1741(L_54, NULL);
			if ((!(((uint32_t)L_52) == ((uint32_t)L_55))))
			{
				goto IL_01ac;
			}
		}

IL_015a:
		{
			t1053 * L_56 = V_5;
			int32_t L_57 = V_9;
			m4337(L_56, L_57, NULL);
			t910 * L_58 = V_1;
			t1053 * L_59 = V_5;
			t47* L_60 = m4338(L_59, NULL);
			t1053 * L_61 = V_5;
			VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_58, L_60, L_61);
			int32_t L_62 = (__this->f4);
			__this->f4 = ((int32_t)((int32_t)L_62+(int32_t)1));
			int32_t L_63 = V_9;
			int32_t L_64 = V_0;
			if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
			{
				goto IL_0191;
			}
		}

IL_0188:
		{
			int32_t L_65 = V_0;
			V_0 = ((int32_t)((int32_t)L_65+(int32_t)1));
			goto IL_01a7;
		}

IL_0191:
		{
			t919 * L_66 = V_2;
			if (L_66)
			{
				goto IL_019e;
			}
		}

IL_0197:
		{
			t919 * L_67 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
			m4622(L_67, 4, NULL);
			V_2 = L_67;
		}

IL_019e:
		{
			t919 * L_68 = V_2;
			t1053 * L_69 = V_5;
			VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_68, L_69);
		}

IL_01a7:
		{
			goto IL_020a;
		}

IL_01ac:
		{
			t47* L_70 = m3260((&V_0), NULL);
			V_10 = L_70;
			goto IL_01ca;
		}

IL_01ba:
		{
			int32_t L_71 = V_0;
			int32_t L_72 = ((int32_t)((int32_t)L_71+(int32_t)1));
			V_0 = L_72;
			V_17 = L_72;
			t47* L_73 = m3260((&V_17), NULL);
			V_10 = L_73;
		}

IL_01ca:
		{
			t910 * L_74 = V_1;
			t47* L_75 = V_10;
			bool L_76 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_74, L_75);
			if (L_76)
			{
				goto IL_01ba;
			}
		}

IL_01d7:
		{
			t910 * L_77 = V_1;
			t47* L_78 = V_10;
			t1053 * L_79 = V_5;
			VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_77, L_78, L_79);
			t910 * L_80 = V_1;
			t1053 * L_81 = V_5;
			t47* L_82 = m4338(L_81, NULL);
			t1053 * L_83 = V_5;
			VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_80, L_82, L_83);
			t1053 * L_84 = V_5;
			int32_t L_85 = V_0;
			int32_t L_86 = L_85;
			V_0 = ((int32_t)((int32_t)L_86+(int32_t)1));
			m4337(L_84, L_86, NULL);
			int32_t L_87 = (__this->f4);
			__this->f4 = ((int32_t)((int32_t)L_87+(int32_t)1));
		}

IL_020a:
		{
			t7 * L_88 = V_6;
			bool L_89 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_88);
			if (L_89)
			{
				goto IL_0099;
			}
		}

IL_0216:
		{
			IL2CPP_LEAVE(0x231, FINALLY_021b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_021b;
	}

FINALLY_021b:
	{ // begin finally (depth: 1)
		{
			t7 * L_90 = V_6;
			V_18 = ((t7 *)IsInst(L_90, t88_TI_var));
			t7 * L_91 = V_18;
			if (L_91)
			{
				goto IL_0229;
			}
		}

IL_0228:
		{
			IL2CPP_END_FINALLY(539)
		}

IL_0229:
		{
			t7 * L_92 = V_18;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_92);
			IL2CPP_END_FINALLY(539)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(539)
	{
		IL2CPP_JUMP_TBL(0x231, IL_0231)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0231:
	{
		int32_t L_93 = V_0;
		__this->f5 = L_93;
		t919 * L_94 = V_2;
		if (!L_94)
		{
			goto IL_0245;
		}
	}
	{
		t919 * L_95 = V_2;
		m4291(__this, L_95, NULL);
	}

IL_0245:
	{
		t910 * L_96 = (__this->f3);
		t7 * L_97 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(20 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_96);
		t7 * L_98 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, t475_TI_var, L_97);
		V_12 = L_98;
	}

IL_0257:
	try
	{ // begin try (depth: 1)
		{
			goto IL_036d;
		}

IL_025c:
		{
			t7 * L_99 = V_12;
			t7 * L_100 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_99);
			V_11 = ((t1049 *)Castclass(L_100, t1049_TI_var));
			t910 * L_101 = (__this->f3);
			t1049 * L_102 = V_11;
			t7 * L_103 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_101, L_102);
			V_13 = ((t47*)Castclass(L_103, t47_TI_var));
			t910 * L_104 = V_1;
			t47* L_105 = V_13;
			bool L_106 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(27 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_104, L_105);
			if (L_106)
			{
				goto IL_0306;
			}
		}

IL_028b:
		{
			t1049 * L_107 = V_11;
			if (!((t1058 *)IsInst(L_107, t1058_TI_var)))
			{
				goto IL_02ae;
			}
		}

IL_0297:
		{
			t47* L_108 = V_13;
			uint16_t L_109 = m1754(L_108, 0, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
			bool L_110 = m4645(NULL, L_109, NULL);
			if (L_110)
			{
				goto IL_02ae;
			}
		}

IL_02a9:
		{
			goto IL_036d;
		}

IL_02ae:
		{
			t1049 * L_111 = V_11;
			V_14 = ((t1064 *)IsInst(L_111, t1064_TI_var));
			t1064 * L_112 = V_14;
			if (!L_112)
			{
				goto IL_02d2;
			}
		}

IL_02be:
		{
			t1064 * L_113 = V_14;
			t47* L_114 = V_13;
			t910 * L_115 = V_1;
			bool L_116 = m4399(L_113, L_114, L_115, NULL);
			if (!L_116)
			{
				goto IL_02d2;
			}
		}

IL_02cd:
		{
			goto IL_036d;
		}

IL_02d2:
		{
			t47* L_117 = V_13;
			uint16_t L_118 = m1754(L_117, 0, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
			bool L_119 = m4645(NULL, L_118, NULL);
			G_B49_0 = (t47*) &_stringLiteral671;
			G_B49_1 = __this;
			if (!L_119)
			{
				G_B50_0 = (t47*) &_stringLiteral671;
				G_B50_1 = __this;
				goto IL_02f4;
			}
		}

IL_02ea:
		{
			G_B51_0 = (t47*) &_stringLiteral672;
			G_B51_1 = G_B49_0;
			G_B51_2 = G_B49_1;
			goto IL_02f9;
		}

IL_02f4:
		{
			G_B51_0 = (t47*) &_stringLiteral673;
			G_B51_1 = G_B50_0;
			G_B51_2 = G_B50_1;
		}

IL_02f9:
		{
			t47* L_120 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_121 = m205(NULL, G_B51_1, G_B51_0, L_120, NULL);
			t396 * L_122 = m4298(G_B51_2, L_121, NULL);
			il2cpp_codegen_raise_exception(L_122);
		}

IL_0306:
		{
			t910 * L_123 = V_1;
			t47* L_124 = V_13;
			t7 * L_125 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_123, L_124);
			V_15 = ((t1053 *)Castclass(L_125, t1053_TI_var));
			t1049 * L_126 = V_11;
			if (!((t1063 *)IsInst(L_126, t1063_TI_var)))
			{
				goto IL_0334;
			}
		}

IL_0321:
		{
			t1049 * L_127 = V_11;
			t1053 * L_128 = V_15;
			m4393(((t1063 *)Castclass(L_127, t1063_TI_var)), L_128, NULL);
			goto IL_036d;
		}

IL_0334:
		{
			t1049 * L_129 = V_11;
			if (!((t1058 *)IsInst(L_129, t1058_TI_var)))
			{
				goto IL_0353;
			}
		}

IL_0340:
		{
			t1049 * L_130 = V_11;
			t1053 * L_131 = V_15;
			m4364(((t1058 *)Castclass(L_130, t1058_TI_var)), L_131, NULL);
			goto IL_036d;
		}

IL_0353:
		{
			t1049 * L_132 = V_11;
			if (!((t1054 *)IsInst(L_132, t1054_TI_var)))
			{
				goto IL_036d;
			}
		}

IL_035f:
		{
			t1049 * L_133 = V_11;
			t1053 * L_134 = V_15;
			m4345(((t1054 *)Castclass(L_133, t1054_TI_var)), L_134, NULL);
		}

IL_036d:
		{
			t7 * L_135 = V_12;
			bool L_136 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_135);
			if (L_136)
			{
				goto IL_025c;
			}
		}

IL_0379:
		{
			IL2CPP_LEAVE(0x394, FINALLY_037e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_037e;
	}

FINALLY_037e:
	{ // begin finally (depth: 1)
		{
			t7 * L_137 = V_12;
			V_19 = ((t7 *)IsInst(L_137, t88_TI_var));
			t7 * L_138 = V_19;
			if (L_138)
			{
				goto IL_038c;
			}
		}

IL_038b:
		{
			IL2CPP_END_FINALLY(894)
		}

IL_038c:
		{
			t7 * L_139 = V_19;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_139);
			IL2CPP_END_FINALLY(894)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(894)
	{
		IL2CPP_JUMP_TBL(0x394, IL_0394)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0394:
	{
		return;
	}
}
extern TypeInfo* t1053_TI_var;
extern "C" void m4291 (t1046 * __this, t919 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1053_TI_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1053 * V_3 = {0};
	int32_t V_4 = 0;
	t1053 * V_5 = {0};
	{
		int32_t L_0 = (__this->f5);
		V_0 = L_0;
		V_1 = 0;
		t919 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_2 = L_2;
		t919 * L_3 = p0;
		VirtActionInvoker0::Invoke(42 /* System.Void System.Collections.ArrayList::Sort() */, L_3);
		goto IL_004d;
	}

IL_001b:
	{
		t919 * L_4 = p0;
		int32_t L_5 = V_1;
		t7 * L_6 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_3 = ((t1053 *)Castclass(L_6, t1053_TI_var));
		t1053 * L_7 = V_3;
		int32_t L_8 = m4336(L_7, NULL);
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0054;
	}

IL_0039:
	{
		t1053 * L_10 = V_3;
		int32_t L_11 = m4336(L_10, NULL);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_001b;
		}
	}

IL_0054:
	{
		int32_t L_17 = V_0;
		__this->f5 = L_17;
		int32_t L_18 = V_0;
		V_4 = L_18;
		goto IL_00a7;
	}

IL_0063:
	{
		t919 * L_19 = p0;
		int32_t L_20 = V_1;
		t7 * L_21 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_19, L_20);
		V_5 = ((t1053 *)Castclass(L_21, t1053_TI_var));
		t1053 * L_22 = V_5;
		int32_t L_23 = m4336(L_22, NULL);
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_008e;
		}
	}
	{
		t1053 * L_25 = V_5;
		int32_t L_26 = V_0;
		m4337(L_25, ((int32_t)((int32_t)L_26-(int32_t)1)), NULL);
		goto IL_00a3;
	}

IL_008e:
	{
		t1053 * L_27 = V_5;
		int32_t L_28 = m4336(L_27, NULL);
		V_4 = L_28;
		t1053 * L_29 = V_5;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)((int32_t)L_31+(int32_t)1));
		m4337(L_29, L_31, NULL);
	}

IL_00a3:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
extern "C" bool m4292 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4293 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4294 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4295 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4296 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4297 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t396 * m4298 (t1046 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = (__this->f0);
		t47* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_2 = m3342(NULL, (t47*) &_stringLiteral674, L_0, (t47*) &_stringLiteral675, L_1, NULL);
		p0 = L_2;
		t47* L_3 = p0;
		t47* L_4 = (__this->f0);
		t396 * L_5 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m4507(L_5, L_3, L_4, NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t356.h"


extern TypeInfo* t1040_TI_var;
extern "C" void m4299 (t1040 * __this, t47* p0, bool p1, bool p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1040_TI_var = il2cpp_codegen_type_info_from_index(1925);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		t47* L_1 = p0;
		int32_t L_2 = m1741(L_1, NULL);
		__this->f1 = L_2;
		bool L_3 = p1;
		__this->f2 = L_3;
		bool L_4 = p2;
		__this->f3 = L_4;
		bool L_5 = p1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		t47* L_6 = p0;
		t47* L_7 = m4650(L_6, NULL);
		p0 = L_7;
	}

IL_0035:
	{
		int32_t L_8 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t1040_TI_var);
		int32_t L_9 = ((t1040_SFs*)t1040_TI_var->static_fields)->f6;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_004b;
		}
	}
	{
		m4303(__this, NULL);
	}

IL_004b:
	{
		return;
	}
}
extern TypeInfo* t1040_TI_var;
extern "C" void m4300 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1040_TI_var = il2cpp_codegen_type_info_from_index(1925);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t1040_SFs*)t1040_TI_var->static_fields)->f6 = 5;
		return;
	}
}
extern "C" int32_t m4301 (t1040 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m4302 (t1040 * __this, t47* p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		bool L_1 = (__this->f3);
		if (!L_1)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		t47* L_5 = p0;
		int32_t L_6 = m1741(L_5, NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		t47* L_7 = p0;
		int32_t L_8 = m1741(L_7, NULL);
		V_0 = L_8;
	}

IL_0029:
	{
		int32_t L_9 = (__this->f1);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_005a;
	}

IL_003a:
	{
		t47* L_10 = (__this->f0);
		uint16_t L_11 = m1754(L_10, 0, NULL);
		t47* L_12 = p0;
		int32_t L_13 = V_0;
		uint16_t L_14 = m1754(L_12, L_13, NULL);
		uint16_t L_15 = m4305(__this, L_14, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_15))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_005a:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ((int32_t)((int32_t)L_17-(int32_t)1));
		V_0 = L_18;
		int32_t L_19 = p2;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_003a;
		}
	}
	{
		return (-1);
	}

IL_0067:
	{
		int32_t L_20 = p2;
		int32_t L_21 = (__this->f1);
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_22 = (__this->f1);
		p2 = ((int32_t)((int32_t)L_22-(int32_t)1));
	}

IL_007d:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
		goto IL_00fb;
	}

IL_0086:
	{
		int32_t L_24 = (__this->f1);
		V_1 = ((int32_t)((int32_t)L_24-(int32_t)1));
		goto IL_00aa;
	}

IL_0094:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)((int32_t)L_25-(int32_t)1));
		V_1 = L_26;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = (__this->f1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))+(int32_t)1));
	}

IL_00aa:
	{
		t47* L_29 = (__this->f0);
		int32_t L_30 = V_1;
		uint16_t L_31 = m1754(L_29, L_30, NULL);
		t47* L_32 = p0;
		int32_t L_33 = V_0;
		int32_t L_34 = (__this->f1);
		int32_t L_35 = V_1;
		uint16_t L_36 = m1754(L_32, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33-(int32_t)L_34))+(int32_t)1))+(int32_t)L_35)), NULL);
		uint16_t L_37 = m4305(__this, L_36, NULL);
		if ((((int32_t)L_31) == ((int32_t)L_37)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = p2;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_40 = V_0;
		t47* L_41 = p0;
		int32_t L_42 = V_0;
		int32_t L_43 = (__this->f1);
		uint16_t L_44 = m1754(L_41, ((int32_t)((int32_t)L_42-(int32_t)L_43)), NULL);
		int32_t L_45 = m4304(__this, L_44, NULL);
		V_0 = ((int32_t)((int32_t)L_40-(int32_t)L_45));
		goto IL_00fb;
	}

IL_00f6:
	{
		goto IL_0102;
	}

IL_00fb:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = p2;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_0086;
		}
	}

IL_0102:
	{
		goto IL_01d6;
	}

IL_0107:
	{
		int32_t L_48 = (__this->f1);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0145;
		}
	}
	{
		goto IL_013c;
	}

IL_0118:
	{
		t47* L_49 = (__this->f0);
		uint16_t L_50 = m1754(L_49, 0, NULL);
		t47* L_51 = p0;
		int32_t L_52 = V_0;
		uint16_t L_53 = m1754(L_51, L_52, NULL);
		uint16_t L_54 = m4305(__this, L_53, NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)L_54))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_55 = V_0;
		return L_55;
	}

IL_0138:
	{
		int32_t L_56 = V_0;
		V_0 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_013c:
	{
		int32_t L_57 = V_0;
		int32_t L_58 = p2;
		if ((((int32_t)L_57) <= ((int32_t)L_58)))
		{
			goto IL_0118;
		}
	}
	{
		return (-1);
	}

IL_0145:
	{
		int32_t L_59 = p2;
		t47* L_60 = p0;
		int32_t L_61 = m1741(L_60, NULL);
		int32_t L_62 = (__this->f1);
		if ((((int32_t)L_59) <= ((int32_t)((int32_t)((int32_t)L_61-(int32_t)L_62)))))
		{
			goto IL_0167;
		}
	}
	{
		t47* L_63 = p0;
		int32_t L_64 = m1741(L_63, NULL);
		int32_t L_65 = (__this->f1);
		p2 = ((int32_t)((int32_t)L_64-(int32_t)L_65));
	}

IL_0167:
	{
		goto IL_01cf;
	}

IL_016c:
	{
		int32_t L_66 = (__this->f1);
		V_2 = ((int32_t)((int32_t)L_66-(int32_t)1));
		goto IL_0187;
	}

IL_017a:
	{
		int32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((int32_t)L_67-(int32_t)1));
		V_2 = L_68;
		if ((((int32_t)L_68) >= ((int32_t)0)))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_69 = V_0;
		return L_69;
	}

IL_0187:
	{
		t47* L_70 = (__this->f0);
		int32_t L_71 = V_2;
		uint16_t L_72 = m1754(L_70, L_71, NULL);
		t47* L_73 = p0;
		int32_t L_74 = V_0;
		int32_t L_75 = V_2;
		uint16_t L_76 = m1754(L_73, ((int32_t)((int32_t)L_74+(int32_t)L_75)), NULL);
		uint16_t L_77 = m4305(__this, L_76, NULL);
		if ((((int32_t)L_72) == ((int32_t)L_77)))
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_78 = V_0;
		int32_t L_79 = p2;
		if ((((int32_t)L_78) >= ((int32_t)L_79)))
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_80 = V_0;
		t47* L_81 = p0;
		int32_t L_82 = V_0;
		int32_t L_83 = (__this->f1);
		uint16_t L_84 = m1754(L_81, ((int32_t)((int32_t)L_82+(int32_t)L_83)), NULL);
		int32_t L_85 = m4304(__this, L_84, NULL);
		V_0 = ((int32_t)((int32_t)L_80+(int32_t)L_85));
		goto IL_01cf;
	}

IL_01ca:
	{
		goto IL_01d6;
	}

IL_01cf:
	{
		int32_t L_86 = V_0;
		int32_t L_87 = p2;
		if ((((int32_t)L_86) <= ((int32_t)L_87)))
		{
			goto IL_016c;
		}
	}

IL_01d6:
	{
		return (-1);
	}
}
extern TypeInfo* t536_TI_var;
extern TypeInfo* t910_TI_var;
extern TypeInfo* t214_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" void m4303 (t1040 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t536_TI_var = il2cpp_codegen_type_info_from_index(929);
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	t47* G_B13_0 = {0};
	t47* G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	t47* G_B14_1 = {0};
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((((int32_t)L_0) > ((int32_t)((int32_t)254)))? 1 : 0);
		V_1 = 0;
		V_2 = 0;
		goto IL_0045;
	}

IL_0017:
	{
		t47* L_1 = (__this->f0);
		int32_t L_2 = V_2;
		uint16_t L_3 = m1754(L_1, L_2, NULL);
		V_3 = L_3;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)255))))
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_5 = V_3;
		uint8_t L_6 = V_1;
		if ((((int32_t)(((uint8_t)L_5))) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		uint16_t L_7 = V_3;
		V_1 = (((uint8_t)L_7));
	}

IL_003a:
	{
		goto IL_0041;
	}

IL_003f:
	{
		V_0 = 1;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = (__this->f1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0017;
		}
	}
	{
		uint8_t L_11 = V_1;
		__this->f4 = ((t536*)SZArrayNew(t536_TI_var, ((int32_t)((int32_t)L_11+(int32_t)1))));
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		t910 * L_13 = (t910 *)il2cpp_codegen_object_new (t910_TI_var);
		m4640(L_13, NULL);
		__this->f5 = L_13;
	}

IL_0070:
	{
		V_4 = 0;
		int32_t L_14 = (__this->f1);
		V_5 = L_14;
		goto IL_0102;
	}

IL_0080:
	{
		t47* L_15 = (__this->f0);
		bool L_16 = (__this->f3);
		G_B12_0 = L_15;
		if (L_16)
		{
			G_B13_0 = L_15;
			goto IL_0098;
		}
	}
	{
		int32_t L_17 = V_4;
		G_B14_0 = L_17;
		G_B14_1 = G_B12_0;
		goto IL_009c;
	}

IL_0098:
	{
		int32_t L_18 = V_5;
		G_B14_0 = ((int32_t)((int32_t)L_18-(int32_t)1));
		G_B14_1 = G_B13_0;
	}

IL_009c:
	{
		uint16_t L_19 = m1754(G_B14_1, G_B14_0, NULL);
		V_6 = L_19;
		uint16_t L_20 = V_6;
		t536* L_21 = (__this->f4);
		if ((((int32_t)L_20) >= ((int32_t)(((int32_t)(((t52 *)L_21)->max_length))))))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)255))))
		{
			goto IL_00cf;
		}
	}
	{
		t536* L_23 = (__this->f4);
		uint16_t L_24 = V_6;
		int32_t L_25 = V_5;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_24)) = (uint8_t)(((uint8_t)L_25));
		goto IL_00f6;
	}

IL_00cf:
	{
		t536* L_26 = (__this->f4);
		uint16_t L_27 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27)) = (uint8_t)((int32_t)255);
	}

IL_00dd:
	{
		t910 * L_28 = (__this->f5);
		uint16_t L_29 = V_6;
		uint16_t L_30 = L_29;
		t7 * L_31 = Box(t214_TI_var, &L_30);
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		t7 * L_34 = Box(t58_TI_var, &L_33);
		VirtActionInvoker2< t7 *, t7 * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_28, L_31, L_34);
	}

IL_00f6:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)((int32_t)L_36-(int32_t)1));
	}

IL_0102:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = (__this->f1);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0080;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t214_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" int32_t m4304 (t1040 * __this, uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t7 * V_1 = {0};
	int32_t G_B15_0 = 0;
	{
		t536* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		uint16_t L_1 = p0;
		uint16_t L_2 = m4305(__this, L_1, NULL);
		p0 = L_2;
		uint16_t L_3 = p0;
		t536* L_4 = (__this->f4);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)(((t52 *)L_4)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		t536* L_5 = (__this->f4);
		uint16_t L_6 = p0;
		uint16_t L_7 = L_6;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = (__this->f1);
		return ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)255))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0049:
	{
		goto IL_0062;
	}

IL_004e:
	{
		uint16_t L_12 = p0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)255))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_13 = (__this->f1);
		return ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0062:
	{
		t910 * L_14 = (__this->f5);
		if (L_14)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_15 = (__this->f1);
		return ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0076:
	{
		t910 * L_16 = (__this->f5);
		uint16_t L_17 = p0;
		uint16_t L_18 = L_17;
		t7 * L_19 = Box(t214_TI_var, &L_18);
		t7 * L_20 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, L_19);
		V_1 = L_20;
		t7 * L_21 = V_1;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		t7 * L_22 = V_1;
		G_B15_0 = ((*(int32_t*)((int32_t*)UnBox (L_22, t58_TI_var))));
		goto IL_00a1;
	}

IL_0099:
	{
		int32_t L_23 = (__this->f1);
		G_B15_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00a1:
	{
		return G_B15_0;
	}
}
extern TypeInfo* t214_TI_var;
extern "C" uint16_t m4305 (t1040 * __this, uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t G_B3_0 = 0x0;
	{
		bool L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint16_t L_1 = p0;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		uint16_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		uint16_t L_3 = m1816(NULL, L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
#include "t1047.h"
#ifndef _MSC_VER
#else
#endif
#include "t1047MD.h"

#include "t336.h"
#include "t336MD.h"
#include "t746MD.h"


extern "C" void m4306 (t1047 * __this, t746 * p0, t47* p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t746 * L_0 = p0;
		__this->f0 = L_0;
		t47* L_1 = p1;
		__this->f3 = L_1;
		__this->f2 = (t1018*)NULL;
		__this->f1 = 0;
		m4313(__this, NULL);
		return;
	}
}
extern TypeInfo* t336_TI_var;
extern "C" t47* m4307 (t1047 * __this, t1004 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		t47* L_1 = (__this->f3);
		return L_1;
	}

IL_0012:
	{
		t336 * L_2 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_2, NULL);
		V_0 = L_2;
		t1004 * L_3 = p0;
		t336 * L_4 = V_0;
		m4308(__this, L_3, L_4, NULL);
		t336 * L_5 = V_0;
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_5);
		return L_6;
	}
}
extern "C" void m4308 (t1047 * __this, t1004 * p0, t336 * p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1009 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t336 * L_1 = p1;
		t47* L_2 = (__this->f3);
		m3305(L_1, L_2, NULL);
		return;
	}

IL_0019:
	{
		V_0 = 0;
		goto IL_00f1;
	}

IL_0020:
	{
		t1018* L_3 = (__this->f2);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = L_5;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_6));
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		t1018* L_8 = (__this->f2);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = L_10;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_11));
		t336 * L_12 = p1;
		t47* L_13 = (__this->f3);
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		m4637(L_12, L_13, L_14, L_15, NULL);
		goto IL_00f1;
	}

IL_0055:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_008b;
		}
	}
	{
		t1004 * L_17 = p0;
		t1010 * L_18 = (t1010 *)VirtFuncInvoker0< t1010 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_17);
		int32_t L_19 = V_1;
		t1009 * L_20 = m4069(L_18, ((-((int32_t)((int32_t)L_19+(int32_t)4)))), NULL);
		V_3 = L_20;
		t336 * L_21 = p1;
		t1009 * L_22 = V_3;
		t47* L_23 = m4052(L_22, NULL);
		t1009 * L_24 = V_3;
		int32_t L_25 = m4048(L_24, NULL);
		t1009 * L_26 = V_3;
		int32_t L_27 = m4049(L_26, NULL);
		m4637(L_21, L_23, L_25, L_27, NULL);
		goto IL_00f1;
	}

IL_008b:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00a4;
		}
	}
	{
		t336 * L_29 = p1;
		t1004 * L_30 = p0;
		t47* L_31 = m4052(L_30, NULL);
		m3305(L_29, L_31, NULL);
		goto IL_00f1;
	}

IL_00a4:
	{
		int32_t L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00c5;
		}
	}
	{
		t336 * L_33 = p1;
		t1004 * L_34 = p0;
		t47* L_35 = m4052(L_34, NULL);
		t1004 * L_36 = p0;
		int32_t L_37 = m4048(L_36, NULL);
		m4637(L_33, L_35, 0, L_37, NULL);
		goto IL_00f1;
	}

IL_00c5:
	{
		t1004 * L_38 = p0;
		int32_t L_39 = m4048(L_38, NULL);
		t1004 * L_40 = p0;
		int32_t L_41 = m4049(L_40, NULL);
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)L_41));
		t336 * L_42 = p1;
		t1004 * L_43 = p0;
		t47* L_44 = m4052(L_43, NULL);
		int32_t L_45 = V_4;
		t1004 * L_46 = p0;
		t47* L_47 = m4052(L_46, NULL);
		int32_t L_48 = m1741(L_47, NULL);
		int32_t L_49 = V_4;
		m4637(L_42, L_44, L_45, ((int32_t)((int32_t)L_48-(int32_t)L_49)), NULL);
	}

IL_00f1:
	{
		int32_t L_50 = V_0;
		int32_t L_51 = (__this->f1);
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
extern "C" bool m4309 (t1047 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		return 1;
	}
}
extern TypeInfo* t1018_TI_var;
extern "C" void m4310 (t1047 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1018* V_1 = {0};
	{
		t1018* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		V_0 = 4;
		int32_t L_1 = V_0;
		int32_t L_2 = p0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = p0;
		V_0 = L_3;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		__this->f2 = ((t1018*)SZArrayNew(t1018_TI_var, L_4));
		goto IL_0072;
	}

IL_0027:
	{
		int32_t L_5 = p0;
		t1018* L_6 = (__this->f2);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)(((t52 *)L_6)->max_length))))))
		{
			goto IL_0072;
		}
	}
	{
		t1018* L_7 = (__this->f2);
		t1018* L_8 = (__this->f2);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_7)->max_length)))+(int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_8)->max_length)))>>(int32_t)1))));
		int32_t L_9 = V_0;
		int32_t L_10 = p0;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_11 = p0;
		V_0 = L_11;
	}

IL_0052:
	{
		int32_t L_12 = V_0;
		V_1 = ((t1018*)SZArrayNew(t1018_TI_var, L_12));
		t1018* L_13 = (__this->f2);
		t1018* L_14 = V_1;
		int32_t L_15 = (__this->f1);
		m4651(NULL, (t52 *)(t52 *)L_13, (t52 *)(t52 *)L_14, L_15, NULL);
		t1018* L_16 = V_1;
		__this->f2 = L_16;
	}

IL_0072:
	{
		return;
	}
}
extern "C" void m4311 (t1047 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		int32_t L_2 = (__this->f1);
		m4310(__this, ((int32_t)((int32_t)L_2+(int32_t)2)), NULL);
		t1018* L_3 = (__this->f2);
		int32_t L_4 = (__this->f1);
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->f1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		int32_t L_7 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_6)) = (int32_t)L_7;
		t1018* L_8 = (__this->f2);
		int32_t L_9 = (__this->f1);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->f1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_0;
		int32_t L_12 = p1;
		int32_t L_13 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_11)) = (int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13));
		return;
	}
}
extern "C" void m4312 (t1047 * __this, int32_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		m4310(__this, ((int32_t)((int32_t)L_0+(int32_t)1)), NULL);
		t1018* L_1 = (__this->f2);
		int32_t L_2 = (__this->f1);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->f1 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		int32_t L_5 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_4)) = (int32_t)L_5;
		return;
	}
}
extern "C" void m4313 (t1047 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0009:
	{
		t47* L_0 = (__this->f3);
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		V_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		uint16_t L_3 = m1754(L_0, L_2, NULL);
		V_3 = L_3;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)36))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0090;
	}

IL_0027:
	{
		int32_t L_5 = V_1;
		t47* L_6 = (__this->f3);
		int32_t L_7 = m1741(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_00a1;
	}

IL_003d:
	{
		t47* L_8 = (__this->f3);
		int32_t L_9 = V_1;
		uint16_t L_10 = m1754(L_8, L_9, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		m4311(__this, L_11, L_12, NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		V_0 = L_14;
		goto IL_0090;
	}

IL_0063:
	{
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_15-(int32_t)1));
		int32_t L_16 = m4314(__this, (&V_1), NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0090;
	}

IL_007e:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		m4311(__this, L_18, L_19, NULL);
		int32_t L_20 = V_4;
		m4312(__this, L_20, NULL);
		int32_t L_21 = V_1;
		V_0 = L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		t47* L_23 = (__this->f3);
		int32_t L_24 = m1741(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0009;
		}
	}

IL_00a1:
	{
		int32_t L_25 = V_0;
		if (!L_25)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_1;
		m4311(__this, L_26, L_27, NULL);
	}

IL_00af:
	{
		return;
	}
}
extern TypeInfo* t214_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t691_TI_var;
extern "C" int32_t m4314 (t1047 * __this, int32_t* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	t47* V_2 = {0};
	int32_t V_3 = 0;
	uint16_t V_4 = 0x0;
	int32_t V_5 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t47* L_0 = (__this->f3);
		int32_t* L_1 = p0;
		uint16_t L_2 = m1754(L_0, (*((int32_t*)L_1)), NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_4 = m4645(NULL, L_3, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		t47* L_5 = (__this->f3);
		int32_t* L_6 = p0;
		int32_t L_7 = m4269(NULL, L_5, L_6, NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_9 = V_1;
		t746 * L_10 = (__this->f0);
		int32_t L_11 = m4118(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		return 0;
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		return ((int32_t)((int32_t)((-L_12))-(int32_t)4));
	}

IL_0045:
	{
		int32_t* L_13 = p0;
		int32_t* L_14 = p0;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)1));
		uint16_t L_15 = V_0;
		V_4 = L_15;
		uint16_t L_16 = V_4;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 0)
		{
			goto IL_015e;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 1)
		{
			goto IL_0164;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 2)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 3)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 4)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 5)
		{
			goto IL_0167;
		}
	}

IL_0070:
	{
		uint16_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)95))))
		{
			goto IL_0176;
		}
	}
	{
		uint16_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)96))))
		{
			goto IL_0161;
		}
	}
	{
		uint16_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)123))))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_0178;
	}

IL_0090:
	{
		V_3 = (-1);
	}

IL_0092:
	try
	{ // begin try (depth: 1)
		{
			t47* L_20 = (__this->f3);
			int32_t* L_21 = p0;
			uint16_t L_22 = m1754(L_20, (*((int32_t*)L_21)), NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
			bool L_23 = m4645(NULL, L_22, NULL);
			if (!L_23)
			{
				goto IL_00c1;
			}
		}

IL_00a9:
		{
			t47* L_24 = (__this->f3);
			int32_t* L_25 = p0;
			int32_t L_26 = m4269(NULL, L_24, L_25, NULL);
			V_3 = L_26;
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_27 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
			V_2 = L_27;
			goto IL_00ce;
		}

IL_00c1:
		{
			t47* L_28 = (__this->f3);
			int32_t* L_29 = p0;
			t47* L_30 = m4273(NULL, L_28, L_29, NULL);
			V_2 = L_30;
		}

IL_00ce:
		{
			goto IL_00ee;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t691_TI_var, e.ex->object.klass))
			goto CATCH_00d3;
		throw e;
	}

CATCH_00d3:
	{ // begin catch(System.IndexOutOfRangeException)
		{
			int32_t* L_31 = p0;
			t47* L_32 = (__this->f3);
			int32_t L_33 = m1741(L_32, NULL);
			*((int32_t*)(L_31)) = (int32_t)L_33;
			V_5 = 0;
			goto IL_017a;
		}

IL_00e9:
		{
			; // IL_00e9: leave IL_00ee
		}
	} // end catch (depth: 1)

IL_00ee:
	{
		int32_t* L_34 = p0;
		t47* L_35 = (__this->f3);
		int32_t L_36 = m1741(L_35, NULL);
		if ((((int32_t)(*((int32_t*)L_34))) == ((int32_t)L_36)))
		{
			goto IL_011a;
		}
	}
	{
		t47* L_37 = (__this->f3);
		int32_t* L_38 = p0;
		uint16_t L_39 = m1754(L_37, (*((int32_t*)L_38)), NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_011a;
		}
	}
	{
		t47* L_40 = V_2;
		if (L_40)
		{
			goto IL_011c;
		}
	}

IL_011a:
	{
		return 0;
	}

IL_011c:
	{
		int32_t* L_41 = p0;
		int32_t* L_42 = p0;
		*((int32_t*)(L_41)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_42))+(int32_t)1));
		t47* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_44 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		bool L_45 = m1753(NULL, L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_013f;
		}
	}
	{
		t746 * L_46 = (__this->f0);
		t47* L_47 = V_2;
		int32_t L_48 = m4107(L_46, L_47, NULL);
		V_3 = L_48;
	}

IL_013f:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_50 = V_3;
		t746 * L_51 = (__this->f0);
		int32_t L_52 = m4118(L_51, NULL);
		if ((((int32_t)L_50) <= ((int32_t)L_52)))
		{
			goto IL_0159;
		}
	}

IL_0157:
	{
		return 0;
	}

IL_0159:
	{
		int32_t L_53 = V_3;
		return ((int32_t)((int32_t)((-L_53))-(int32_t)4));
	}

IL_015e:
	{
		return ((int32_t)-4);
	}

IL_0161:
	{
		return ((int32_t)-2);
	}

IL_0164:
	{
		return ((int32_t)-3);
	}

IL_0167:
	{
		t746 * L_54 = (__this->f0);
		int32_t L_55 = m4118(L_54, NULL);
		return ((int32_t)((int32_t)((-L_55))-(int32_t)4));
	}

IL_0176:
	{
		return (-1);
	}

IL_0178:
	{
		return 0;
	}

IL_017a:
	{
		int32_t L_56 = V_5;
		return L_56;
	}
}
#include "t1048.h"
#ifndef _MSC_VER
#else
#endif
#include "t1048MD.h"

#include "t978MD.h"


extern "C" void m4315 (t1048 * __this, const MethodInfo* method)
{
	{
		m4604(__this, NULL);
		return;
	}
}
extern TypeInfo* t817_TI_var;
extern "C" void m4316 (t1048 * __this, t1049 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t817_TI_var = il2cpp_codegen_type_info_from_index(1527);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = m4652(__this, NULL);
		t1049 * L_1 = p0;
		InterfaceFuncInvoker1< int32_t, t7 * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, t817_TI_var, L_0, L_1);
		return;
	}
}
extern TypeInfo* t817_TI_var;
extern TypeInfo* t1049_TI_var;
extern "C" t1049 * m4317 (t1048 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t817_TI_var = il2cpp_codegen_type_info_from_index(1527);
		t1049_TI_var = il2cpp_codegen_type_info_from_index(1946);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = m4652(__this, NULL);
		int32_t L_1 = p0;
		t7 * L_2 = (t7 *)InterfaceFuncInvoker1< t7 *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, t817_TI_var, L_0, L_1);
		return ((t1049 *)Castclass(L_2, t1049_TI_var));
	}
}
extern TypeInfo* t817_TI_var;
extern "C" void m4318 (t1048 * __this, int32_t p0, t1049 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t817_TI_var = il2cpp_codegen_type_info_from_index(1527);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = m4652(__this, NULL);
		int32_t L_1 = p0;
		t1049 * L_2 = p1;
		InterfaceActionInvoker2< int32_t, t7 * >::Invoke(3 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, t817_TI_var, L_0, L_1, L_2);
		return;
	}
}
extern "C" void m4319 (t1048 * __this, t7 * p0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1049MD.h"

#include "t1067.h"
#include "t1067MD.h"


extern "C" void m4320 (t1049 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" int32_t m4321 (t1049 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, __this, (&V_0), (&V_1));
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		return (-1);
	}
}
extern TypeInfo* t1067_TI_var;
extern "C" t1067 * m4322 (t1049 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1067_TI_var = il2cpp_codegen_type_info_from_index(1947);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = m4321(__this, NULL);
		t1067 * L_1 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4411(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#include "t1050.h"
#ifndef _MSC_VER
#else
#endif
#include "t1050MD.h"

#include "t978.h"


extern TypeInfo* t1048_TI_var;
extern "C" void m4323 (t1050 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1048_TI_var = il2cpp_codegen_type_info_from_index(1948);
		s_Il2CppMethodIntialized = true;
	}
	{
		m4320(__this, NULL);
		t1048 * L_0 = (t1048 *)il2cpp_codegen_object_new (t1048_TI_var);
		m4315(L_0, NULL);
		__this->f0 = L_0;
		return;
	}
}
extern "C" t1048 * m4324 (t1050 * __this, const MethodInfo* method)
{
	{
		t1048 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m4325 (t1050 * __this, int32_t* p0, int32_t* p1, int32_t p2, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	t1049 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t* L_0 = p0;
		*((int32_t*)(L_0)) = (int32_t)((int32_t)2147483647);
		int32_t* L_1 = p1;
		*((int32_t*)(L_1)) = (int32_t)0;
		V_0 = 1;
		V_1 = 0;
		goto IL_0053;
	}

IL_0013:
	{
		t1048 * L_2 = m4324(__this, NULL);
		int32_t L_3 = V_1;
		t1049 * L_4 = m4317(L_2, L_3, NULL);
		V_2 = L_4;
		t1049 * L_5 = V_2;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_004f;
	}

IL_002b:
	{
		V_0 = 0;
		t1049 * L_6 = V_2;
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_6, (&V_3), (&V_4));
		int32_t L_7 = V_3;
		int32_t* L_8 = p0;
		if ((((int32_t)L_7) >= ((int32_t)(*((int32_t*)L_8)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_9 = p0;
		int32_t L_10 = V_3;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_0042:
	{
		int32_t L_11 = V_4;
		int32_t* L_12 = p1;
		if ((((int32_t)L_11) <= ((int32_t)(*((int32_t*)L_12)))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t* L_13 = p1;
		int32_t L_14 = V_4;
		*((int32_t*)(L_13)) = (int32_t)L_14;
	}

IL_004f:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = p2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0013;
		}
	}
	{
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		int32_t* L_19 = p0;
		int32_t* L_20 = p1;
		int32_t L_21 = 0;
		V_5 = L_21;
		*((int32_t*)(L_20)) = (int32_t)L_21;
		int32_t L_22 = V_5;
		*((int32_t*)(L_19)) = (int32_t)L_22;
	}

IL_006a:
	{
		return;
	}
}
extern TypeInfo* t50_TI_var;
extern TypeInfo* t1049_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" bool m4326 (t1050 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t1049_TI_var = il2cpp_codegen_type_info_from_index(1946);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t1049 * V_0 = {0};
	t7 * V_1 = {0};
	bool V_2 = false;
	t7 * V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1048 * L_0 = m4324(__this, NULL);
		t7 * L_1 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			t7 * L_2 = V_1;
			t7 * L_3 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_2);
			V_0 = ((t1049 *)Castclass(L_3, t1049_TI_var));
			t1049 * L_4 = V_0;
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_4);
			if (!L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x5E, FINALLY_003f);
		}

IL_002f:
		{
			t7 * L_6 = V_1;
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x51, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			t7 * L_8 = V_1;
			V_3 = ((t7 *)IsInst(L_8, t88_TI_var));
			t7 * L_9 = V_3;
			if (L_9)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_004a:
		{
			t7 * L_10 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_10);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0051:
	{
		int32_t L_11 = m4321(__this, NULL);
		return ((((int32_t)((((int32_t)L_11) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1129.h"
#include "t1130MD.h"
#include "t1129MD.h"


extern "C" void m4327 (t1051 * __this, const MethodInfo* method)
{
	{
		m4323(__this, NULL);
		return;
	}
}
extern "C" void m4328 (t1051 * __this, t1049 * p0, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = p0;
		m4316(L_0, L_1, NULL);
		return;
	}
}
extern "C" void m4329 (t1051 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1049 * V_2 = {0};
	{
		t1048 * L_0 = m4324(__this, NULL);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0048;
	}

IL_0013:
	{
		bool L_2 = p1;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t1048 * L_3 = m4324(__this, NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		t1049 * L_6 = m4317(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))-(int32_t)1)), NULL);
		V_2 = L_6;
		goto IL_003c;
	}

IL_002f:
	{
		t1048 * L_7 = m4324(__this, NULL);
		int32_t L_8 = V_1;
		t1049 * L_9 = m4317(L_7, L_8, NULL);
		V_2 = L_9;
	}

IL_003c:
	{
		t1049 * L_10 = V_2;
		t7 * L_11 = p0;
		bool L_12 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_10, L_11, L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t50_TI_var;
extern TypeInfo* t1049_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m4330 (t1051 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t1049_TI_var = il2cpp_codegen_type_info_from_index(1946);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t1049 * V_0 = {0};
	t7 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t7 * V_4 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t* L_0 = p0;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = p1;
		*((int32_t*)(L_1)) = (int32_t)0;
		t1048 * L_2 = m4324(__this, NULL);
		t7 * L_3 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0017:
		{
			t7 * L_4 = V_1;
			t7 * L_5 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_4);
			V_0 = ((t1049 *)Castclass(L_5, t1049_TI_var));
			t1049 * L_6 = V_0;
			VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_6, (&V_2), (&V_3));
			int32_t* L_7 = p0;
			int32_t* L_8 = p0;
			int32_t L_9 = V_2;
			*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)L_9));
			int32_t* L_10 = p1;
			if ((((int32_t)(*((int32_t*)L_10))) == ((int32_t)((int32_t)2147483647))))
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			int32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)2147483647)))))
			{
				goto IL_0056;
			}
		}

IL_004a:
		{
			int32_t* L_12 = p1;
			*((int32_t*)(L_12)) = (int32_t)((int32_t)2147483647);
			goto IL_005c;
		}

IL_0056:
		{
			int32_t* L_13 = p1;
			int32_t* L_14 = p1;
			int32_t L_15 = V_3;
			*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)L_15));
		}

IL_005c:
		{
			t7 * L_16 = V_1;
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_16);
			if (L_17)
			{
				goto IL_0017;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x81, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			t7 * L_18 = V_1;
			V_4 = ((t7 *)IsInst(L_18, t88_TI_var));
			t7 * L_19 = V_4;
			if (L_19)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(108)
		}

IL_0079:
		{
			t7 * L_20 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_20);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0081:
	{
		return;
	}
}
extern TypeInfo* t919_TI_var;
extern TypeInfo* t1045_TI_var;
extern TypeInfo* t1067_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t1042_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t1130_TI_var;
extern TypeInfo* t1128_TI_var;
extern "C" t1067 * m4331 (t1051 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		t1045_TI_var = il2cpp_codegen_type_info_from_index(1930);
		t1067_TI_var = il2cpp_codegen_type_info_from_index(1947);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t1130_TI_var = il2cpp_codegen_type_info_from_index(1949);
		t1128_TI_var = il2cpp_codegen_type_info_from_index(1898);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t919 * V_2 = {0};
	t1045 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	t1049 * V_6 = {0};
	t1067 * V_7 = {0};
	t1042  V_8 = {0};
	t1042  V_9 = {0};
	t7 * V_10 = {0};
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	t1067 * V_14 = {0};
	t336 * V_15 = {0};
	int32_t V_16 = 0;
	t1067 * V_17 = {0};
	t7 * V_18 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = m4321(__this, NULL);
		V_1 = L_0;
		t919 * L_1 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
		m4512(L_1, NULL);
		V_2 = L_1;
		t1045 * L_2 = (t1045 *)il2cpp_codegen_object_new (t1045_TI_var);
		m4257(L_2, NULL);
		V_3 = L_2;
		V_0 = 0;
		t1048 * L_3 = m4324(__this, NULL);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_3);
		V_4 = L_4;
		V_5 = 0;
		goto IL_00ca;
	}

IL_002a:
	{
		bool L_5 = p0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		t1048 * L_6 = m4324(__this, NULL);
		int32_t L_7 = V_4;
		int32_t L_8 = V_5;
		t1049 * L_9 = m4317(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)L_8))-(int32_t)1)), NULL);
		V_6 = L_9;
		goto IL_0058;
	}

IL_0049:
	{
		t1048 * L_10 = m4324(__this, NULL);
		int32_t L_11 = V_5;
		t1049 * L_12 = m4317(L_10, L_11, NULL);
		V_6 = L_12;
	}

IL_0058:
	{
		t1049 * L_13 = V_6;
		bool L_14 = p0;
		t1067 * L_15 = (t1067 *)VirtFuncInvoker1< t1067 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean) */, L_13, L_14);
		V_7 = L_15;
		t919 * L_16 = V_2;
		t1067 * L_17 = V_7;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		t1067 * L_18 = V_7;
		bool L_19 = m4423(L_18, NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_20 = V_0;
		t1067 * L_21 = V_7;
		int32_t L_22 = m4414(L_21, NULL);
		int32_t L_23 = V_1;
		t1067 * L_24 = V_7;
		uint16_t L_25 = m4421(L_24, NULL);
		t1067 * L_26 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4413(L_26, __this, ((int32_t)((int32_t)L_20+(int32_t)L_22)), L_23, L_25, NULL);
		return L_26;
	}

IL_008f:
	{
		t1067 * L_27 = V_7;
		bool L_28 = m4422(L_27, NULL);
		if (!L_28)
		{
			goto IL_00a9;
		}
	}
	{
		t1045 * L_29 = V_3;
		t1067 * L_30 = V_7;
		int32_t L_31 = V_0;
		t1042  L_32 = m4424(L_30, L_31, NULL);
		m4259(L_29, L_32, NULL);
	}

IL_00a9:
	{
		t1067 * L_33 = V_7;
		bool L_34 = m4417(L_33, NULL);
		if (!L_34)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d3;
	}

IL_00ba:
	{
		int32_t L_35 = V_0;
		t1067 * L_36 = V_7;
		int32_t L_37 = m4415(L_36, NULL);
		V_0 = ((int32_t)((int32_t)L_35+(int32_t)L_37));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002a;
		}
	}

IL_00d3:
	{
		t1045 * L_41 = V_3;
		m4260(L_41, NULL);
		t1042  L_42 = m4237(NULL, NULL);
		V_8 = L_42;
		t1045 * L_43 = V_3;
		t7 * L_44 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_43);
		V_10 = L_44;
	}

IL_00e8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0112;
		}

IL_00ed:
		{
			t7 * L_45 = V_10;
			t7 * L_46 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_45);
			V_9 = ((*(t1042 *)((t1042 *)UnBox (L_46, t1042_TI_var))));
			int32_t L_47 = m4241((&V_9), NULL);
			int32_t L_48 = m4241((&V_8), NULL);
			if ((((int32_t)L_47) <= ((int32_t)L_48)))
			{
				goto IL_0112;
			}
		}

IL_010e:
		{
			t1042  L_49 = V_9;
			V_8 = L_49;
		}

IL_0112:
		{
			t7 * L_50 = V_10;
			bool L_51 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_50);
			if (L_51)
			{
				goto IL_00ed;
			}
		}

IL_011e:
		{
			IL2CPP_LEAVE(0x139, FINALLY_0123);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0123;
	}

FINALLY_0123:
	{ // begin finally (depth: 1)
		{
			t7 * L_52 = V_10;
			V_18 = ((t7 *)IsInst(L_52, t88_TI_var));
			t7 * L_53 = V_18;
			if (L_53)
			{
				goto IL_0131;
			}
		}

IL_0130:
		{
			IL2CPP_END_FINALLY(291)
		}

IL_0131:
		{
			t7 * L_54 = V_18;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_54);
			IL2CPP_END_FINALLY(291)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_JUMP_TBL(0x139, IL_0139)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0139:
	{
		bool L_55 = m4240((&V_8), NULL);
		if (!L_55)
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_56 = V_1;
		t1067 * L_57 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4411(L_57, __this, L_56, NULL);
		return L_57;
	}

IL_014d:
	{
		V_11 = 0;
		V_12 = 0;
		V_0 = 0;
		V_13 = 0;
		goto IL_01c8;
	}

IL_015d:
	{
		t919 * L_58 = V_2;
		int32_t L_59 = V_13;
		t7 * L_60 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_58, L_59);
		V_14 = ((t1067 *)Castclass(L_60, t1067_TI_var));
		t1067 * L_61 = V_14;
		bool L_62 = m4422(L_61, NULL);
		if (!L_62)
		{
			goto IL_01a7;
		}
	}
	{
		t1067 * L_63 = V_14;
		int32_t L_64 = V_0;
		t1042  L_65 = m4424(L_63, L_64, NULL);
		bool L_66 = m4244((&V_8), L_65, NULL);
		if (!L_66)
		{
			goto IL_01a7;
		}
	}
	{
		bool L_67 = V_11;
		t1067 * L_68 = V_14;
		bool L_69 = m4420(L_68, NULL);
		V_11 = ((int32_t)((int32_t)L_67|(int32_t)L_69));
		t919 * L_70 = V_2;
		int32_t L_71 = V_12;
		int32_t L_72 = L_71;
		V_12 = ((int32_t)((int32_t)L_72+(int32_t)1));
		t1067 * L_73 = V_14;
		VirtActionInvoker2< int32_t, t7 * >::Invoke(21 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_70, L_72, L_73);
	}

IL_01a7:
	{
		t1067 * L_74 = V_14;
		bool L_75 = m4417(L_74, NULL);
		if (!L_75)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01d5;
	}

IL_01b8:
	{
		int32_t L_76 = V_0;
		t1067 * L_77 = V_14;
		int32_t L_78 = m4415(L_77, NULL);
		V_0 = ((int32_t)((int32_t)L_76+(int32_t)L_78));
		int32_t L_79 = V_13;
		V_13 = ((int32_t)((int32_t)L_79+(int32_t)1));
	}

IL_01c8:
	{
		int32_t L_80 = V_13;
		t919 * L_81 = V_2;
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_81);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_015d;
		}
	}

IL_01d5:
	{
		t336 * L_83 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_83, NULL);
		V_15 = L_83;
		V_16 = 0;
		goto IL_0227;
	}

IL_01e4:
	{
		bool L_84 = p0;
		if (!L_84)
		{
			goto IL_0203;
		}
	}
	{
		t919 * L_85 = V_2;
		int32_t L_86 = V_12;
		int32_t L_87 = V_16;
		t7 * L_88 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)L_87))-(int32_t)1)));
		V_17 = ((t1067 *)Castclass(L_88, t1067_TI_var));
		goto IL_0212;
	}

IL_0203:
	{
		t919 * L_89 = V_2;
		int32_t L_90 = V_16;
		t7 * L_91 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_89, L_90);
		V_17 = ((t1067 *)Castclass(L_91, t1067_TI_var));
	}

IL_0212:
	{
		t336 * L_92 = V_15;
		t1067 * L_93 = V_17;
		t47* L_94 = m4419(L_93, NULL);
		m3305(L_92, L_94, NULL);
		int32_t L_95 = V_16;
		V_16 = ((int32_t)((int32_t)L_95+(int32_t)1));
	}

IL_0227:
	{
		int32_t L_96 = V_16;
		int32_t L_97 = V_12;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_01e4;
		}
	}
	{
		t336 * L_98 = V_15;
		int32_t L_99 = m4625(L_98, NULL);
		int32_t L_100 = m4241((&V_8), NULL);
		if ((!(((uint32_t)L_99) == ((uint32_t)L_100))))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_101 = ((&V_8)->f0);
		int32_t L_102 = V_1;
		t336 * L_103 = V_15;
		t47* L_104 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_103);
		bool L_105 = V_11;
		t1067 * L_106 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4412(L_106, __this, L_101, L_102, L_104, L_105, NULL);
		return L_106;
	}

IL_025b:
	{
		t336 * L_107 = V_15;
		int32_t L_108 = m4625(L_107, NULL);
		int32_t L_109 = m4241((&V_8), NULL);
		if ((((int32_t)L_108) <= ((int32_t)L_109)))
		{
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1130_TI_var);
		t1129 * L_110 = m4653(NULL, NULL);
		VirtActionInvoker1< t47* >::Invoke(13 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_110, (t47*) &_stringLiteral676);
		int32_t L_111 = V_1;
		t1067 * L_112 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4411(L_112, __this, L_111, NULL);
		return L_112;
	}

IL_0285:
	{
		t1128 * L_113 = (t1128 *)il2cpp_codegen_object_new (t1128_TI_var);
		m4638(L_113, (t47*) &_stringLiteral677, NULL);
		il2cpp_codegen_raise_exception(L_113);
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4332 (t1052 * __this, const MethodInfo* method)
{
	{
		m4327(__this, NULL);
		__this->f1 = 0;
		return;
	}
}
extern "C" void m4333 (t1052 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4334 (t1052 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1067 * V_2 = {0};
	t1029 * V_3 = {0};
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&) */, __this, (&V_0), (&V_1));
		t7 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(23 /* System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32) */, t1095_TI_var, L_0, L_1, L_2, L_3);
		bool L_4 = p1;
		t1067 * L_5 = (t1067 *)VirtFuncInvoker1< t1067 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean) */, __this, L_4);
		V_2 = L_5;
		t7 * L_6 = p0;
		t1029 * L_7 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_6);
		V_3 = L_7;
		t7 * L_8 = p0;
		bool L_9 = p1;
		t1067 * L_10 = V_2;
		int32_t L_11 = m4414(L_10, NULL);
		t1029 * L_12 = V_3;
		InterfaceActionInvoker3< bool, int32_t, t1029 * >::Invoke(25 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_8, L_9, L_11, L_12);
		t1067 * L_13 = V_2;
		bool L_14 = m4423(L_13, NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		t7 * L_15 = p0;
		t1067 * L_16 = V_2;
		uint16_t L_17 = m4421(L_16, NULL);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, t1095_TI_var, L_15, L_17);
		goto IL_006f;
	}

IL_0051:
	{
		t1067 * L_18 = V_2;
		bool L_19 = m4422(L_18, NULL);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		t7 * L_20 = p0;
		t1067 * L_21 = V_2;
		t47* L_22 = m4419(L_21, NULL);
		t1067 * L_23 = V_2;
		bool L_24 = m4420(L_23, NULL);
		bool L_25 = p1;
		InterfaceActionInvoker3< t47*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, t1095_TI_var, L_20, L_22, L_24, L_25);
	}

IL_006f:
	{
		t7 * L_26 = p0;
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, t1095_TI_var, L_26);
		t7 * L_27 = p0;
		t1029 * L_28 = V_3;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_27, L_28);
		t7 * L_29 = p0;
		bool L_30 = p1;
		m4329(__this, L_29, L_30, NULL);
		t7 * L_31 = p0;
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, t1095_TI_var, L_31);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4335 (t1053 * __this, const MethodInfo* method)
{
	{
		m4327(__this, NULL);
		__this->f1 = 0;
		__this->f2 = (t47*)NULL;
		return;
	}
}
extern "C" int32_t m4336 (t1053 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m4337 (t1053 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t47* m4338 (t1053 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m4339 (t1053 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" bool m4340 (t1053 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f2);
		return ((((int32_t)((((t7*)(t47*)L_0) == ((t7*)(t7 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4341 (t1053 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32) */, t1095_TI_var, L_0, L_1);
		t7 * L_2 = p0;
		bool L_3 = p1;
		m4329(__this, L_2, L_3, NULL);
		t7 * L_4 = p0;
		int32_t L_5 = (__this->f1);
		InterfaceActionInvoker1< int32_t >::Invoke(11 /* System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32) */, t1095_TI_var, L_4, L_5);
		return;
	}
}
extern "C" bool m4342 (t1053 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern TypeInfo* t1053_TI_var;
extern "C" int32_t m4343 (t1053 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1053_TI_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->f1);
		t7 * L_1 = p0;
		int32_t L_2 = (((t1053 *)Castclass(L_1, t1053_TI_var))->f1);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4344 (t1054 * __this, const MethodInfo* method)
{
	{
		m4335(__this, NULL);
		__this->f3 = (t1053 *)NULL;
		return;
	}
}
extern "C" void m4345 (t1054 * __this, t1053 * p0, const MethodInfo* method)
{
	{
		t1053 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4346 (t1054 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	t1029 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1049 * V_3 = {0};
	{
		t7 * L_0 = p0;
		t1029 * L_1 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_0);
		V_0 = L_1;
		t7 * L_2 = p0;
		int32_t L_3 = m4336(__this, NULL);
		t1053 * L_4 = (__this->f3);
		int32_t L_5 = m4336(L_4, NULL);
		bool L_6 = m4340(__this, NULL);
		t1029 * L_7 = V_0;
		InterfaceActionInvoker4< int32_t, int32_t, bool, t1029 * >::Invoke(12 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_2, L_3, L_5, L_6, L_7);
		t1048 * L_8 = m4324(__this, NULL);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_8);
		V_1 = L_9;
		V_2 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		bool L_10 = p1;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		t1048 * L_11 = m4324(__this, NULL);
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		t1049 * L_14 = m4317(L_11, ((int32_t)((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13))-(int32_t)1)), NULL);
		V_3 = L_14;
		goto IL_0061;
	}

IL_0054:
	{
		t1048 * L_15 = m4324(__this, NULL);
		int32_t L_16 = V_2;
		t1049 * L_17 = m4317(L_15, L_16, NULL);
		V_3 = L_17;
	}

IL_0061:
	{
		t1049 * L_18 = V_3;
		t7 * L_19 = p0;
		bool L_20 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_18, L_19, L_20);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0038;
		}
	}
	{
		t7 * L_24 = p0;
		InterfaceActionInvoker0::Invoke(13 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBalance() */, t1095_TI_var, L_24);
		t7 * L_25 = p0;
		t1029 * L_26 = V_0;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_25, L_26);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4347 (t1055 * __this, const MethodInfo* method)
{
	{
		m4327(__this, NULL);
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4348 (t1055 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	t1029 * V_0 = {0};
	{
		t7 * L_0 = p0;
		t1029 * L_1 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_0);
		V_0 = L_1;
		t7 * L_2 = p0;
		t1029 * L_3 = V_0;
		InterfaceActionInvoker1< t1029 * >::Invoke(16 /* System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_2, L_3);
		t7 * L_4 = p0;
		bool L_5 = p1;
		m4329(__this, L_4, L_5, NULL);
		t7 * L_6 = p0;
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, t1095_TI_var, L_6);
		t7 * L_7 = p0;
		t1029 * L_8 = V_0;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_7, L_8);
		return;
	}
}
extern "C" bool m4349 (t1055 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4350 (t1056 * __this, int32_t p0, int32_t p1, bool p2, const MethodInfo* method)
{
	{
		m4323(__this, NULL);
		t1048 * L_0 = m4324(__this, NULL);
		m4316(L_0, (t1049 *)NULL, NULL);
		int32_t L_1 = p0;
		__this->f1 = L_1;
		int32_t L_2 = p1;
		__this->f2 = L_2;
		bool L_3 = p2;
		__this->f3 = L_3;
		return;
	}
}
extern "C" t1049 * m4351 (t1056 * __this, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = m4317(L_0, 0, NULL);
		return L_1;
	}
}
extern "C" void m4352 (t1056 * __this, t1049 * p0, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = p0;
		m4318(L_0, 0, L_1, NULL);
		return;
	}
}
extern "C" int32_t m4353 (t1056 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4354 (t1056 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	t1029 * V_0 = {0};
	t1029 * V_1 = {0};
	{
		t1049 * L_0 = m4351(__this, NULL);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		t7 * L_2 = p0;
		t1029 * L_3 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_2);
		V_0 = L_3;
		t7 * L_4 = p0;
		int32_t L_5 = (__this->f1);
		int32_t L_6 = (__this->f2);
		bool L_7 = (__this->f3);
		t1029 * L_8 = V_0;
		InterfaceActionInvoker4< int32_t, int32_t, bool, t1029 * >::Invoke(20 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_4, L_5, L_6, L_7, L_8);
		t1049 * L_9 = m4351(__this, NULL);
		t7 * L_10 = p0;
		bool L_11 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_9, L_10, L_11);
		t7 * L_12 = p0;
		t1029 * L_13 = V_0;
		InterfaceActionInvoker1< t1029 * >::Invoke(21 /* System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_12, L_13);
		goto IL_0083;
	}

IL_0049:
	{
		t7 * L_14 = p0;
		t1029 * L_15 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_14);
		V_1 = L_15;
		t7 * L_16 = p0;
		int32_t L_17 = (__this->f1);
		int32_t L_18 = (__this->f2);
		bool L_19 = (__this->f3);
		t1029 * L_20 = V_1;
		InterfaceActionInvoker4< int32_t, int32_t, bool, t1029 * >::Invoke(24 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_16, L_17, L_18, L_19, L_20);
		t1049 * L_21 = m4351(__this, NULL);
		t7 * L_22 = p0;
		bool L_23 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_21, L_22, L_23);
		t7 * L_24 = p0;
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, t1095_TI_var, L_24);
		t7 * L_25 = p0;
		t1029 * L_26 = V_1;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_25, L_26);
	}

IL_0083:
	{
		return;
	}
}
extern "C" void m4355 (t1056 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	{
		t1049 * L_0 = m4351(__this, NULL);
		int32_t* L_1 = p0;
		int32_t* L_2 = p1;
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_0, L_1, L_2);
		int32_t* L_3 = p0;
		int32_t* L_4 = p0;
		int32_t L_5 = (__this->f1);
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_4))*(int32_t)L_5));
		int32_t* L_6 = p1;
		if ((((int32_t)(*((int32_t*)L_6))) == ((int32_t)((int32_t)2147483647))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = (__this->f2);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0040;
		}
	}

IL_0034:
	{
		int32_t* L_8 = p1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)2147483647);
		goto IL_004b;
	}

IL_0040:
	{
		int32_t* L_9 = p1;
		int32_t* L_10 = p1;
		int32_t L_11 = (__this->f2);
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))*(int32_t)L_11));
	}

IL_004b:
	{
		return;
	}
}
extern TypeInfo* t1067_TI_var;
extern TypeInfo* t336_TI_var;
extern "C" t1067 * m4356 (t1056 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1067_TI_var = il2cpp_codegen_type_info_from_index(1947);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1067 * V_1 = {0};
	t47* V_2 = {0};
	t336 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = m4321(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = m4353(__this, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_0;
		t1067 * L_3 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4411(L_3, __this, L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		t1049 * L_4 = m4351(__this, NULL);
		bool L_5 = p0;
		t1067 * L_6 = (t1067 *)VirtFuncInvoker1< t1067 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean) */, L_4, L_5);
		V_1 = L_6;
		t1067 * L_7 = V_1;
		bool L_8 = m4423(L_7, NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		t1067 * L_9 = V_1;
		int32_t L_10 = m4414(L_9, NULL);
		int32_t L_11 = V_0;
		t1067 * L_12 = V_1;
		uint16_t L_13 = m4421(L_12, NULL);
		t1067 * L_14 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4413(L_14, __this, L_10, L_11, L_13, NULL);
		return L_14;
	}

IL_0046:
	{
		t1067 * L_15 = V_1;
		bool L_16 = m4422(L_15, NULL);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		t1067 * L_17 = V_1;
		bool L_18 = m4418(L_17, NULL);
		if (!L_18)
		{
			goto IL_00a2;
		}
	}
	{
		t1067 * L_19 = V_1;
		t47* L_20 = m4419(L_19, NULL);
		V_2 = L_20;
		t47* L_21 = V_2;
		t336 * L_22 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1521(L_22, L_21, NULL);
		V_3 = L_22;
		V_4 = 1;
		goto IL_0080;
	}

IL_0072:
	{
		t336 * L_23 = V_3;
		t47* L_24 = V_2;
		m3305(L_23, L_24, NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = m4353(__this, NULL);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_28 = V_0;
		t336 * L_29 = V_3;
		t47* L_30 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_29);
		t1067 * L_31 = V_1;
		bool L_32 = m4420(L_31, NULL);
		t1067 * L_33 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4412(L_33, __this, 0, L_28, L_30, L_32, NULL);
		return L_33;
	}

IL_00a2:
	{
		t1067 * L_34 = V_1;
		int32_t L_35 = m4414(L_34, NULL);
		int32_t L_36 = V_0;
		t1067 * L_37 = V_1;
		t47* L_38 = m4419(L_37, NULL);
		t1067 * L_39 = V_1;
		bool L_40 = m4420(L_39, NULL);
		t1067 * L_41 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4412(L_41, __this, L_35, L_36, L_38, L_40, NULL);
		return L_41;
	}

IL_00bc:
	{
		int32_t L_42 = V_0;
		t1067 * L_43 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4411(L_43, __this, L_42, NULL);
		return L_43;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4357 (t1057 * __this, const MethodInfo* method)
{
	{
		m4323(__this, NULL);
		t1048 * L_0 = m4324(__this, NULL);
		m4316(L_0, (t1049 *)NULL, NULL);
		t1048 * L_1 = m4324(__this, NULL);
		m4316(L_1, (t1049 *)NULL, NULL);
		return;
	}
}
extern "C" t1049 * m4358 (t1057 * __this, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = m4317(L_0, 0, NULL);
		return L_1;
	}
}
extern "C" void m4359 (t1057 * __this, t1049 * p0, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = p0;
		m4318(L_0, 0, L_1, NULL);
		return;
	}
}
extern "C" t1049 * m4360 (t1057 * __this, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = m4317(L_0, 1, NULL);
		return L_1;
	}
}
extern "C" void m4361 (t1057 * __this, t1049 * p0, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = p0;
		m4318(L_0, 1, L_1, NULL);
		return;
	}
}
extern "C" void m4362 (t1057 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	{
		int32_t* L_0 = p0;
		int32_t* L_1 = p1;
		m4325(__this, L_0, L_1, 2, NULL);
		t1049 * L_2 = m4358(__this, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		t1049 * L_3 = m4360(__this, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_001f:
	{
		int32_t* L_4 = p0;
		*((int32_t*)(L_4)) = (int32_t)0;
	}

IL_0022:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4363 (t1058 * __this, t1060 * p0, const MethodInfo* method)
{
	{
		m4357(__this, NULL);
		t1060 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" void m4364 (t1058 * __this, t1053 * p0, const MethodInfo* method)
{
	{
		t1053 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4365 (t1058 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t1029 * V_1 = {0};
	t1029 * V_2 = {0};
	{
		t1053 * L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t1059 * L_1 = m4367(__this, NULL);
		t7 * L_2 = p0;
		bool L_3 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_1, L_2, L_3);
		return;
	}

IL_0019:
	{
		t1053 * L_4 = (__this->f2);
		int32_t L_5 = m4336(L_4, NULL);
		V_0 = L_5;
		t7 * L_6 = p0;
		t1029 * L_7 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_6);
		V_1 = L_7;
		t1049 * L_8 = m4360(__this, NULL);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		t7 * L_9 = p0;
		int32_t L_10 = V_0;
		t1029 * L_11 = V_1;
		InterfaceActionInvoker2< int32_t, t1029 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_9, L_10, L_11);
		t1049 * L_12 = m4358(__this, NULL);
		t7 * L_13 = p0;
		bool L_14 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_12, L_13, L_14);
		goto IL_0088;
	}

IL_0051:
	{
		t7 * L_15 = p0;
		t1029 * L_16 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_15);
		V_2 = L_16;
		t7 * L_17 = p0;
		int32_t L_18 = V_0;
		t1029 * L_19 = V_2;
		InterfaceActionInvoker2< int32_t, t1029 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_17, L_18, L_19);
		t1049 * L_20 = m4358(__this, NULL);
		t7 * L_21 = p0;
		bool L_22 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_20, L_21, L_22);
		t7 * L_23 = p0;
		t1029 * L_24 = V_1;
		InterfaceActionInvoker1< t1029 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_23, L_24);
		t7 * L_25 = p0;
		t1029 * L_26 = V_2;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_25, L_26);
		t1049 * L_27 = m4360(__this, NULL);
		t7 * L_28 = p0;
		bool L_29 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_27, L_28, L_29);
	}

IL_0088:
	{
		t7 * L_30 = p0;
		t1029 * L_31 = V_1;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_30, L_31);
		return;
	}
}
extern "C" bool m4366 (t1058 * __this, const MethodInfo* method)
{
	{
		t1053 * L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		t1059 * L_1 = m4367(__this, NULL);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex() */, L_1);
		return L_2;
	}

IL_0017:
	{
		t1049 * L_3 = m4358(__this, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		t1049 * L_4 = m4358(__this, NULL);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		t1049 * L_6 = m4360(__this, NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		t1049 * L_7 = m4360(__this, NULL);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		int32_t L_9 = m4321(__this, NULL);
		return ((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern TypeInfo* t1059_TI_var;
extern "C" t1059 * m4367 (t1058 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1059_TI_var = il2cpp_codegen_type_info_from_index(1941);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1059 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		t1059 * L_1 = (t1059 *)il2cpp_codegen_object_new (t1059_TI_var);
		m4368(L_1, NULL);
		__this->f1 = L_1;
		t1059 * L_2 = (__this->f1);
		t1049 * L_3 = m4358(__this, NULL);
		m4359(L_2, L_3, NULL);
		t1059 * L_4 = (__this->f1);
		t1049 * L_5 = m4360(__this, NULL);
		m4361(L_4, L_5, NULL);
		t1059 * L_6 = (__this->f1);
		t1060 * L_7 = (__this->f3);
		m4372(L_6, L_7, NULL);
	}

IL_0049:
	{
		t1059 * L_8 = (__this->f1);
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4368 (t1059 * __this, const MethodInfo* method)
{
	{
		m4357(__this, NULL);
		t1048 * L_0 = m4324(__this, NULL);
		m4316(L_0, (t1049 *)NULL, NULL);
		return;
	}
}
extern "C" void m4369 (t1059 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" void m4370 (t1059 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t1049 * m4371 (t1059 * __this, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = m4317(L_0, 2, NULL);
		return L_1;
	}
}
extern "C" void m4372 (t1059 * __this, t1049 * p0, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		t1049 * L_1 = p0;
		m4318(L_0, 2, L_1, NULL);
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4373 (t1059 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	t1029 * V_0 = {0};
	t1029 * V_1 = {0};
	t1029 * V_2 = {0};
	{
		t7 * L_0 = p0;
		t1029 * L_1 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_0);
		V_0 = L_1;
		t7 * L_2 = p0;
		t1029 * L_3 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_2);
		V_1 = L_3;
		bool L_4 = (__this->f2);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		t7 * L_5 = p0;
		t1029 * L_6 = V_0;
		t1029 * L_7 = V_1;
		InterfaceActionInvoker2< t1029 *, t1029 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_5, L_6, L_7);
		goto IL_002e;
	}

IL_0026:
	{
		t7 * L_8 = p0;
		t1029 * L_9 = V_1;
		t1029 * L_10 = V_0;
		InterfaceActionInvoker2< t1029 *, t1029 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_8, L_9, L_10);
	}

IL_002e:
	{
		t1049 * L_11 = m4371(__this, NULL);
		t7 * L_12 = p0;
		bool L_13 = (__this->f1);
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_11, L_12, L_13);
		t7 * L_14 = p0;
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, t1095_TI_var, L_14);
		t1049 * L_15 = m4358(__this, NULL);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		t7 * L_16 = p0;
		t1029 * L_17 = V_1;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_16, L_17);
		t7 * L_18 = p0;
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, t1095_TI_var, L_18);
		t7 * L_19 = p0;
		t1029 * L_20 = V_0;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_19, L_20);
		goto IL_00be;
	}

IL_006a:
	{
		t7 * L_21 = p0;
		t1029 * L_22 = V_0;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_21, L_22);
		t1049 * L_23 = m4358(__this, NULL);
		t7 * L_24 = p0;
		bool L_25 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_23, L_24, L_25);
		t1049 * L_26 = m4360(__this, NULL);
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		t7 * L_27 = p0;
		t1029 * L_28 = V_1;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_27, L_28);
		goto IL_00be;
	}

IL_0095:
	{
		t7 * L_29 = p0;
		t1029 * L_30 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_29);
		V_2 = L_30;
		t7 * L_31 = p0;
		t1029 * L_32 = V_2;
		InterfaceActionInvoker1< t1029 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_31, L_32);
		t7 * L_33 = p0;
		t1029 * L_34 = V_1;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_33, L_34);
		t1049 * L_35 = m4360(__this, NULL);
		t7 * L_36 = p0;
		bool L_37 = p1;
		VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_35, L_36, L_37);
		t7 * L_38 = p0;
		t1029 * L_39 = V_2;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_38, L_39);
	}

IL_00be:
	{
		return;
	}
}
extern "C" bool m4374 (t1059 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4375 (t1061 * __this, const MethodInfo* method)
{
	{
		m4323(__this, NULL);
		return;
	}
}
extern "C" t1048 * m4376 (t1061 * __this, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4324(__this, NULL);
		return L_0;
	}
}
extern "C" void m4377 (t1061 * __this, t1049 * p0, const MethodInfo* method)
{
	{
		t1048 * L_0 = m4376(__this, NULL);
		t1049 * L_1 = p0;
		m4316(L_0, L_1, NULL);
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t1049_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m4378 (t1061 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t1049_TI_var = il2cpp_codegen_type_info_from_index(1946);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t1029 * V_0 = {0};
	t1049 * V_1 = {0};
	t7 * V_2 = {0};
	t1029 * V_3 = {0};
	t7 * V_4 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t7 * L_0 = p0;
		t1029 * L_1 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_0);
		V_0 = L_1;
		t1048 * L_2 = m4376(__this, NULL);
		t7 * L_3 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0018:
		{
			t7 * L_4 = V_2;
			t7 * L_5 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_4);
			V_1 = ((t1049 *)Castclass(L_5, t1049_TI_var));
			t7 * L_6 = p0;
			t1029 * L_7 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_6);
			V_3 = L_7;
			t7 * L_8 = p0;
			t1029 * L_9 = V_3;
			InterfaceActionInvoker1< t1029 * >::Invoke(18 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_8, L_9);
			t1049 * L_10 = V_1;
			t7 * L_11 = p0;
			bool L_12 = p1;
			VirtActionInvoker2< t7 *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_10, L_11, L_12);
			t7 * L_13 = p0;
			t1029 * L_14 = V_0;
			InterfaceActionInvoker1< t1029 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_13, L_14);
			t7 * L_15 = p0;
			t1029 * L_16 = V_3;
			InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_15, L_16);
			t7 * L_17 = p0;
			InterfaceActionInvoker0::Invoke(26 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd() */, t1095_TI_var, L_17);
		}

IL_004e:
		{
			t7 * L_18 = V_2;
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_18);
			if (L_19)
			{
				goto IL_0018;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x73, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			t7 * L_20 = V_2;
			V_4 = ((t7 *)IsInst(L_20, t88_TI_var));
			t7 * L_21 = V_4;
			if (L_21)
			{
				goto IL_006b;
			}
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(94)
		}

IL_006b:
		{
			t7 * L_22 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_22);
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0073:
	{
		t7 * L_23 = p0;
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, t1095_TI_var, L_23);
		t7 * L_24 = p0;
		t1029 * L_25 = V_0;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_24, L_25);
		t7 * L_26 = p0;
		InterfaceActionInvoker0::Invoke(27 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd() */, t1095_TI_var, L_26);
		return;
	}
}
extern "C" void m4379 (t1061 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	{
		int32_t* L_0 = p0;
		int32_t* L_1 = p1;
		t1048 * L_2 = m4376(__this, NULL);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_2);
		m4325(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4380 (t1060 * __this, t47* p0, bool p1, const MethodInfo* method)
{
	{
		m4320(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		bool L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4381 (t7 * __this , t47* p0, t7 * p1, bool p2, bool p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		int32_t L_1 = m1741(L_0, NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		t47* L_2 = p0;
		int32_t L_3 = m1741(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		t7 * L_4 = p1;
		t47* L_5 = p0;
		uint16_t L_6 = m1754(L_5, 0, NULL);
		bool L_7 = p2;
		bool L_8 = p3;
		InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, t1095_TI_var, L_4, L_6, 0, L_7, L_8);
		goto IL_0036;
	}

IL_002d:
	{
		t7 * L_9 = p1;
		t47* L_10 = p0;
		bool L_11 = p2;
		bool L_12 = p3;
		InterfaceActionInvoker3< t47*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, t1095_TI_var, L_9, L_10, L_11, L_12);
	}

IL_0036:
	{
		return;
	}
}
extern "C" void m4382 (t1060 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f0);
		t7 * L_1 = p0;
		bool L_2 = (__this->f1);
		bool L_3 = p1;
		m4381(NULL, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
extern "C" void m4383 (t1060 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = p0;
		int32_t* L_1 = p1;
		t47* L_2 = (__this->f0);
		int32_t L_3 = m1741(L_2, NULL);
		int32_t L_4 = L_3;
		V_0 = L_4;
		*((int32_t*)(L_1)) = (int32_t)L_4;
		int32_t L_5 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_5;
		return;
	}
}
extern TypeInfo* t1067_TI_var;
extern "C" t1067 * m4384 (t1060 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1067_TI_var = il2cpp_codegen_type_info_from_index(1947);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = (__this->f0);
		int32_t L_1 = m1741(L_0, NULL);
		t47* L_2 = (__this->f0);
		bool L_3 = (__this->f1);
		t1067 * L_4 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4412(L_4, __this, 0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
extern "C" bool m4385 (t1060 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4386 (t1062 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		m4320(__this, NULL);
		uint16_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4387 (t1062 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		uint16_t L_1 = (__this->f0);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, t1095_TI_var, L_0, L_1);
		return;
	}
}
extern "C" void m4388 (t1062 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = 0;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
extern "C" bool m4389 (t1062 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern TypeInfo* t1067_TI_var;
extern "C" t1067 * m4390 (t1062 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1067_TI_var = il2cpp_codegen_type_info_from_index(1947);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = (__this->f0);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002f;
	}

IL_0020:
	{
		uint16_t L_2 = (__this->f0);
		t1067 * L_3 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4413(L_3, __this, 0, 0, L_2, NULL);
		return L_3;
	}

IL_002f:
	{
		t1067 * L_4 = (t1067 *)il2cpp_codegen_object_new (t1067_TI_var);
		m4411(L_4, __this, 0, NULL);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4391 (t1063 * __this, bool p0, const MethodInfo* method)
{
	{
		m4320(__this, NULL);
		bool L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t1053 * m4392 (t1063 * __this, const MethodInfo* method)
{
	{
		t1053 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m4393 (t1063 * __this, t1053 * p0, const MethodInfo* method)
{
	{
		t1053 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" bool m4394 (t1063 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4395 (t1063 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		t1053 * L_1 = (__this->f0);
		int32_t L_2 = m4336(L_1, NULL);
		bool L_3 = (__this->f1);
		bool L_4 = p1;
		InterfaceActionInvoker3< int32_t, bool, bool >::Invoke(14 /* System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean) */, t1095_TI_var, L_0, L_2, L_3, L_4);
		return;
	}
}
extern "C" void m4396 (t1063 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	{
		int32_t* L_0 = p0;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = p1;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)2147483647);
		return;
	}
}
extern "C" bool m4397 (t1063 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4398 (t1064 * __this, bool p0, bool p1, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		m4391(__this, L_0, NULL);
		bool L_1 = p1;
		__this->f3 = L_1;
		return;
	}
}
extern TypeInfo* t1053_TI_var;
extern TypeInfo* t214_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" bool m4399 (t1064 * __this, t47* p0, t910 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1053_TI_var = il2cpp_codegen_type_info_from_index(1933);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0014:
	{
		t910 * L_1 = p1;
		t47* L_2 = p0;
		int32_t L_3 = V_1;
		t47* L_4 = m1755(L_2, 0, L_3, NULL);
		t7 * L_5 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_4);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		t47* L_9 = p0;
		int32_t L_10 = m1741(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		t910 * L_12 = p1;
		t47* L_13 = p0;
		int32_t L_14 = V_0;
		t47* L_15 = m1755(L_13, 0, L_14, NULL);
		t7 * L_16 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, L_15);
		m4393(__this, ((t1053 *)Castclass(L_16, t1053_TI_var)), NULL);
		t47* L_17 = p0;
		int32_t L_18 = V_0;
		t47* L_19 = m1781(L_17, L_18, NULL);
		__this->f2 = L_19;
		return 1;
	}

IL_0067:
	{
		goto IL_007a;
	}

IL_006c:
	{
		t47* L_20 = p0;
		int32_t L_21 = m1741(L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		V_2 = 0;
		t47* L_22 = p0;
		int32_t L_23 = m4270(NULL, L_22, (&V_2), NULL);
		V_3 = L_23;
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_008e;
		}
	}
	{
		return 0;
	}

IL_008e:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)255))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_26 = (__this->f3);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27/(int32_t)8));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28-(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)255)));
		int32_t L_30 = V_3;
		uint16_t L_31 = (((uint16_t)L_30));
		t7 * L_32 = Box(t214_TI_var, &L_31);
		t47* L_33 = p0;
		int32_t L_34 = V_2;
		t47* L_35 = m1781(L_33, L_34, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_36 = m217(NULL, L_32, L_35, NULL);
		__this->f2 = L_36;
		return 1;
	}
}
extern "C" void m4400 (t1064 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	{
		t1053 * L_0 = m4392(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t7 * L_1 = p0;
		bool L_2 = p1;
		m4395(__this, L_1, L_2, NULL);
	}

IL_0013:
	{
		t47* L_3 = (__this->f2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		t47* L_4 = (__this->f2);
		t7 * L_5 = p0;
		bool L_6 = m4394(__this, NULL);
		bool L_7 = p1;
		m4381(NULL, L_4, L_5, L_6, L_7, NULL);
	}

IL_0031:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t1045_TI_var;
extern TypeInfo* t1066_TI_var;
extern "C" void m4401 (t1065 * __this, bool p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1045_TI_var = il2cpp_codegen_type_info_from_index(1930);
		t1066_TI_var = il2cpp_codegen_type_info_from_index(1950);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		m4320(__this, NULL);
		bool L_0 = p0;
		__this->f1 = L_0;
		bool L_1 = p1;
		__this->f2 = L_1;
		t1045 * L_2 = (t1045 *)il2cpp_codegen_object_new (t1045_TI_var);
		m4257(L_2, NULL);
		__this->f5 = L_2;
		V_0 = ((int32_t)144);
		int32_t L_3 = V_0;
		t1066 * L_4 = (t1066 *)il2cpp_codegen_object_new (t1066_TI_var);
		m4654(L_4, L_3, NULL);
		__this->f3 = L_4;
		int32_t L_5 = V_0;
		t1066 * L_6 = (t1066 *)il2cpp_codegen_object_new (t1066_TI_var);
		m4654(L_6, L_5, NULL);
		__this->f4 = L_6;
		return;
	}
}
extern "C" void m4402 (t1065 * __this, uint16_t p0, bool p1, const MethodInfo* method)
{
	{
		m4401(__this, 0, 0, NULL);
		uint16_t L_0 = p0;
		bool L_1 = p1;
		m4404(__this, L_0, L_1, NULL);
		return;
	}
}
extern TypeInfo* t1065_TI_var;
extern "C" void m4403 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1065_TI_var = il2cpp_codegen_type_info_from_index(1936);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1042  L_0 = {0};
		m4236(&L_0, ((int32_t)65), ((int32_t)90), NULL);
		((t1065_SFs*)t1065_TI_var->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" void m4404 (t1065 * __this, uint16_t p0, bool p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint16_t L_0 = p0;
		V_0 = L_0;
		bool L_1 = p1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		t1066 * L_2 = (__this->f4);
		int32_t L_3 = V_0;
		m4655(L_2, L_3, 1, NULL);
		goto IL_0027;
	}

IL_001a:
	{
		t1066 * L_4 = (__this->f3);
		int32_t L_5 = V_0;
		m4655(L_4, L_5, 1, NULL);
	}

IL_0027:
	{
		return;
	}
}
extern "C" void m4405 (t1065 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		uint16_t L_1 = p0;
		m4406(__this, L_0, L_1, NULL);
		return;
	}
}
extern TypeInfo* t1065_TI_var;
extern "C" void m4406 (t1065 * __this, uint16_t p0, uint16_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1065_TI_var = il2cpp_codegen_type_info_from_index(1936);
		s_Il2CppMethodIntialized = true;
	}
	t1042  V_0 = {0};
	t1042  V_1 = {0};
	{
		uint16_t L_0 = p0;
		uint16_t L_1 = p1;
		m4236((&V_0), L_0, L_1, NULL);
		bool L_2 = (__this->f2);
		if (!L_2)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1065_TI_var);
		t1042  L_3 = V_0;
		bool L_4 = m4246((&((t1065_SFs*)t1065_TI_var->static_fields)->f0), L_3, NULL);
		if (!L_4)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_5 = ((&V_0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t1065_TI_var);
		int32_t L_6 = ((&((t1065_SFs*)t1065_TI_var->static_fields)->f0)->f0);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1065_TI_var);
		int32_t L_7 = ((&((t1065_SFs*)t1065_TI_var->static_fields)->f0)->f0);
		int32_t L_8 = ((&V_0)->f1);
		m4236((&V_1), ((int32_t)((int32_t)L_7+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_8+(int32_t)((int32_t)32))), NULL);
		int32_t L_9 = ((&((t1065_SFs*)t1065_TI_var->static_fields)->f0)->f0);
		(&V_0)->f1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_00a1;
	}

IL_0070:
	{
		int32_t L_10 = ((&V_0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t1065_TI_var);
		int32_t L_11 = ((&((t1065_SFs*)t1065_TI_var->static_fields)->f0)->f1);
		m4236((&V_1), ((int32_t)((int32_t)L_10+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_11+(int32_t)((int32_t)32))), NULL);
		int32_t L_12 = ((&((t1065_SFs*)t1065_TI_var->static_fields)->f0)->f1);
		(&V_0)->f0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_00a1:
	{
		t1045 * L_13 = (__this->f5);
		t1042  L_14 = V_1;
		m4259(L_13, L_14, NULL);
		goto IL_00e2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1065_TI_var);
		t1042  L_15 = V_0;
		bool L_16 = m4244((&((t1065_SFs*)t1065_TI_var->static_fields)->f0), L_15, NULL);
		if (!L_16)
		{
			goto IL_00e2;
		}
	}
	{
		t1042 * L_17 = (&V_0);
		int32_t L_18 = (L_17->f1);
		L_17->f1 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)32)));
		t1042 * L_19 = (&V_0);
		int32_t L_20 = (L_19->f0);
		L_19->f0 = ((int32_t)((int32_t)L_20+(int32_t)((int32_t)32)));
	}

IL_00e2:
	{
		t1045 * L_21 = (__this->f5);
		t1042  L_22 = V_0;
		m4259(L_21, L_22, NULL);
		return;
	}
}
extern TypeInfo* t1044_TI_var;
extern TypeInfo* t1095_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t1042_TI_var;
extern TypeInfo* t1066_TI_var;
extern TypeInfo* t88_TI_var;
extern const MethodInfo* m4410_MI_var;
extern "C" void m4407 (t1065 * __this, t7 * p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1044_TI_var = il2cpp_codegen_type_info_from_index(1951);
		t1095_TI_var = il2cpp_codegen_type_info_from_index(1913);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t1042_TI_var = il2cpp_codegen_type_info_from_index(1929);
		t1066_TI_var = il2cpp_codegen_type_info_from_index(1950);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		m4410_MI_var = il2cpp_codegen_method_info_from_index(313);
		s_Il2CppMethodIntialized = true;
	}
	t1045 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1029 * V_3 = {0};
	t1042  V_4 = {0};
	t7 * V_5 = {0};
	t1066 * V_6 = {0};
	t1042  V_7 = {0};
	t7 * V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	t7 * V_11 = {0};
	t7 * V_12 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1045 * L_0 = (__this->f5);
		t226 L_1 = { (void*)m4410_MI_var };
		t1044 * L_2 = (t1044 *)il2cpp_codegen_object_new (t1044_TI_var);
		m4253(L_2, NULL, L_1, NULL);
		t1045 * L_3 = m4261(L_0, L_2, NULL);
		V_0 = L_3;
		t1045 * L_4 = V_0;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count() */, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0050;
	}

IL_0026:
	{
		t1066 * L_6 = (__this->f3);
		int32_t L_7 = V_2;
		bool L_8 = m4649(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		t1066 * L_9 = (__this->f4);
		int32_t L_10 = V_2;
		bool L_11 = m4649(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_2;
		t1066 * L_15 = (__this->f3);
		int32_t L_16 = m4648(L_15, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		t7 * L_18 = p0;
		t1029 * L_19 = (t1029 *)InterfaceFuncInvoker0< t1029 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, t1095_TI_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		t7 * L_21 = p0;
		t1029 * L_22 = V_3;
		InterfaceActionInvoker1< t1029 * >::Invoke(22 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_21, L_22);
	}

IL_007d:
	{
		t1045 * L_23 = V_0;
		t7 * L_24 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ac;
		}

IL_008a:
		{
			t7 * L_25 = V_5;
			t7 * L_26 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_25);
			V_4 = ((*(t1042 *)((t1042 *)UnBox (L_26, t1042_TI_var))));
			bool L_27 = m4238((&V_4), NULL);
			if (!L_27)
			{
				goto IL_015d;
			}
		}

IL_00a4:
		{
			int32_t L_28 = m4241((&V_4), NULL);
			t1066 * L_29 = (t1066 *)il2cpp_codegen_object_new (t1066_TI_var);
			m4654(L_29, L_28, NULL);
			V_6 = L_29;
			t1045 * L_30 = (__this->f5);
			t7 * L_31 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_30);
			V_8 = L_31;
		}

IL_00bf:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0114;
			}

IL_00c4:
			{
				t7 * L_32 = V_8;
				t7 * L_33 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_32);
				V_7 = ((*(t1042 *)((t1042 *)UnBox (L_33, t1042_TI_var))));
				t1042  L_34 = V_7;
				bool L_35 = m4244((&V_4), L_34, NULL);
				if (!L_35)
				{
					goto IL_0114;
				}
			}

IL_00e0:
			{
				int32_t L_36 = ((&V_7)->f0);
				V_9 = L_36;
				goto IL_0106;
			}

IL_00ee:
			{
				t1066 * L_37 = V_6;
				int32_t L_38 = V_9;
				int32_t L_39 = ((&V_4)->f0);
				m4655(L_37, ((int32_t)((int32_t)L_38-(int32_t)L_39)), 1, NULL);
				int32_t L_40 = V_9;
				V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
			}

IL_0106:
			{
				int32_t L_41 = V_9;
				int32_t L_42 = ((&V_7)->f1);
				if ((((int32_t)L_41) <= ((int32_t)L_42)))
				{
					goto IL_00ee;
				}
			}

IL_0114:
			{
				t7 * L_43 = V_8;
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_43);
				if (L_44)
				{
					goto IL_00c4;
				}
			}

IL_0120:
			{
				IL2CPP_LEAVE(0x13B, FINALLY_0125);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t65 *)e.ex;
			goto FINALLY_0125;
		}

FINALLY_0125:
		{ // begin finally (depth: 2)
			{
				t7 * L_45 = V_8;
				V_11 = ((t7 *)IsInst(L_45, t88_TI_var));
				t7 * L_46 = V_11;
				if (L_46)
				{
					goto IL_0133;
				}
			}

IL_0132:
			{
				IL2CPP_END_FINALLY(293)
			}

IL_0133:
			{
				t7 * L_47 = V_11;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_47);
				IL2CPP_END_FINALLY(293)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(293)
		{
			IL2CPP_JUMP_TBL(0x13B, IL_013b)
			IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
		}

IL_013b:
		{
			t7 * L_48 = p0;
			int32_t L_49 = ((&V_4)->f0);
			t1066 * L_50 = V_6;
			bool L_51 = (__this->f1);
			bool L_52 = (__this->f2);
			bool L_53 = p1;
			InterfaceActionInvoker5< uint16_t, t1066 *, bool, bool, bool >::Invoke(7 /* System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean) */, t1095_TI_var, L_48, (((uint16_t)L_49)), L_50, L_51, L_52, L_53);
			goto IL_01ac;
		}

IL_015d:
		{
			bool L_54 = m4239((&V_4), NULL);
			if (!L_54)
			{
				goto IL_0189;
			}
		}

IL_0169:
		{
			t7 * L_55 = p0;
			int32_t L_56 = ((&V_4)->f0);
			bool L_57 = (__this->f1);
			bool L_58 = (__this->f2);
			bool L_59 = p1;
			InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, t1095_TI_var, L_55, (((uint16_t)L_56)), L_57, L_58, L_59);
			goto IL_01ac;
		}

IL_0189:
		{
			t7 * L_60 = p0;
			int32_t L_61 = ((&V_4)->f0);
			int32_t L_62 = ((&V_4)->f1);
			bool L_63 = (__this->f1);
			bool L_64 = (__this->f2);
			bool L_65 = p1;
			InterfaceActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(6 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, t1095_TI_var, L_60, (((uint16_t)L_61)), (((uint16_t)L_62)), L_63, L_64, L_65);
		}

IL_01ac:
		{
			t7 * L_66 = V_5;
			bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_66);
			if (L_67)
			{
				goto IL_008a;
			}
		}

IL_01b8:
		{
			IL2CPP_LEAVE(0x1D3, FINALLY_01bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_01bd;
	}

FINALLY_01bd:
	{ // begin finally (depth: 1)
		{
			t7 * L_68 = V_5;
			V_12 = ((t7 *)IsInst(L_68, t88_TI_var));
			t7 * L_69 = V_12;
			if (L_69)
			{
				goto IL_01cb;
			}
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(445)
		}

IL_01cb:
		{
			t7 * L_70 = V_12;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_70);
			IL2CPP_END_FINALLY(445)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(445)
	{
		IL2CPP_JUMP_TBL(0x1D3, IL_01d3)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_01d3:
	{
		V_10 = 0;
		goto IL_024f;
	}

IL_01db:
	{
		t1066 * L_71 = (__this->f3);
		int32_t L_72 = V_10;
		bool L_73 = m4649(L_71, L_72, NULL);
		if (!L_73)
		{
			goto IL_0227;
		}
	}
	{
		t1066 * L_74 = (__this->f4);
		int32_t L_75 = V_10;
		bool L_76 = m4649(L_74, L_75, NULL);
		if (!L_76)
		{
			goto IL_0212;
		}
	}
	{
		t7 * L_77 = p0;
		bool L_78 = (__this->f1);
		bool L_79 = p1;
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, t1095_TI_var, L_77, 2, L_78, L_79);
		goto IL_0222;
	}

IL_0212:
	{
		t7 * L_80 = p0;
		int32_t L_81 = V_10;
		bool L_82 = (__this->f1);
		bool L_83 = p1;
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, t1095_TI_var, L_80, (((uint16_t)L_81)), L_82, L_83);
	}

IL_0222:
	{
		goto IL_0249;
	}

IL_0227:
	{
		t1066 * L_84 = (__this->f4);
		int32_t L_85 = V_10;
		bool L_86 = m4649(L_84, L_85, NULL);
		if (!L_86)
		{
			goto IL_0249;
		}
	}
	{
		t7 * L_87 = p0;
		int32_t L_88 = V_10;
		bool L_89 = (__this->f1);
		bool L_90 = p1;
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(5 /* System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, t1095_TI_var, L_87, (((uint16_t)L_88)), L_89, L_90);
	}

IL_0249:
	{
		int32_t L_91 = V_10;
		V_10 = ((int32_t)((int32_t)L_91+(int32_t)1));
	}

IL_024f:
	{
		int32_t L_92 = V_10;
		t1066 * L_93 = (__this->f3);
		int32_t L_94 = m4648(L_93, NULL);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_95 = V_1;
		if ((((int32_t)L_95) <= ((int32_t)1)))
		{
			goto IL_028b;
		}
	}
	{
		bool L_96 = (__this->f1);
		if (!L_96)
		{
			goto IL_027e;
		}
	}
	{
		t7 * L_97 = p0;
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, t1095_TI_var, L_97);
		goto IL_0284;
	}

IL_027e:
	{
		t7 * L_98 = p0;
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, t1095_TI_var, L_98);
	}

IL_0284:
	{
		t7 * L_99 = p0;
		t1029 * L_100 = V_3;
		InterfaceActionInvoker1< t1029 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, t1095_TI_var, L_99, L_100);
	}

IL_028b:
	{
		return;
	}
}
extern "C" void m4408 (t1065 * __this, int32_t* p0, int32_t* p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = 1;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
extern "C" bool m4409 (t1065 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" double m4410 (t7 * __this , t1042  p0, const MethodInfo* method)
{
	{
		bool L_0 = m4238((&p0), NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = m4241((&p0), NULL);
		return (((double)((int32_t)((int32_t)3+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)((int32_t)15)))>>(int32_t)4))))));
	}

IL_001c:
	{
		bool L_2 = m4239((&p0), NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		return (2.0);
	}

IL_0032:
	{
		return (3.0);
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m4411 (t1067 * __this, t1049 * p0, int32_t p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t1049 * L_0 = p0;
		__this->f0 = L_0;
		__this->f2 = 0;
		int32_t L_1 = p1;
		__this->f4 = L_1;
		__this->f3 = (t47*)NULL;
		__this->f5 = 0;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m4412 (t1067 * __this, t1049 * p0, int32_t p1, int32_t p2, t47* p3, bool p4, const MethodInfo* method)
{
	t1067 * G_B2_0 = {0};
	t1067 * G_B1_0 = {0};
	t47* G_B3_0 = {0};
	t1067 * G_B3_1 = {0};
	{
		m162(__this, NULL);
		t1049 * L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f2 = L_1;
		int32_t L_2 = p2;
		__this->f4 = L_2;
		bool L_3 = p4;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		t47* L_4 = p3;
		t47* L_5 = m4650(L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002f:
	{
		t47* L_6 = p3;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		G_B3_1->f3 = G_B3_0;
		bool L_7 = p4;
		__this->f5 = L_7;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m4413 (t1067 * __this, t1049 * p0, int32_t p1, int32_t p2, uint16_t p3, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t1049 * L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f2 = L_1;
		int32_t L_2 = p2;
		__this->f4 = L_2;
		uint16_t L_3 = p3;
		__this->f1 = L_3;
		__this->f3 = (t47*)NULL;
		__this->f5 = 0;
		return;
	}
}
extern "C" int32_t m4414 (t1067 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m4415 (t1067 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m4416 (t1067 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t47* L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t47* L_1 = (__this->f3);
		int32_t L_2 = m1741(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern "C" bool m4417 (t1067 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return ((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4418 (t1067 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m4416(__this, NULL);
		int32_t L_1 = m4415(__this, NULL);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern "C" t47* m4419 (t1067 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" bool m4420 (t1067 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" uint16_t m4421 (t1067 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" bool m4422 (t1067 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f3);
		return ((((int32_t)((((t7*)(t47*)L_0) == ((t7*)(t7 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m4423 (t1067 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f1);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t1042  m4424 (t1067 * __this, int32_t p0, const MethodInfo* method)
{
	{
		bool L_0 = m4422(__this, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t1042  L_1 = m4237(NULL, NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = p0;
		int32_t L_3 = m4414(__this, NULL);
		int32_t L_4 = p0;
		int32_t L_5 = m4414(__this, NULL);
		int32_t L_6 = m4416(__this, NULL);
		t1042  L_7 = {0};
		m4236(&L_7, ((int32_t)((int32_t)L_2+(int32_t)L_3)), ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)L_6))-(int32_t)1)), NULL);
		return L_7;
	}
}
#include "t1068.h"
#ifndef _MSC_VER
#else
#endif
#include "t1068MD.h"

#include "t1069.h"
#include "t1069MD.h"


extern TypeInfo* t1069_TI_var;
extern "C" void m4425 (t1068 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1069_TI_var = il2cpp_codegen_type_info_from_index(1952);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
		m4480(__this, NULL);
		return;
	}
}
extern TypeInfo* t1069_TI_var;
extern "C" void m4426 (t1068 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1069_TI_var = il2cpp_codegen_type_info_from_index(1952);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
		m4480(__this, NULL);
		t47* L_0 = p0;
		((t1069 *)__this)->f2 = L_0;
		return;
	}
}
#include "t1070.h"
#ifndef _MSC_VER
#else
#endif
#include "t1070MD.h"



#include "t1071.h"
#ifndef _MSC_VER
#else
#endif
#include "t1071MD.h"



extern "C" void m4427 (t1071 * __this, t47* p0, t47* p1, int32_t p2, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f0 = L_0;
		t47* L_1 = p1;
		__this->f1 = L_1;
		int32_t L_2 = p2;
		__this->f2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: System.Uri/UriScheme
void t1071_marshal(const t1071& unmarshaled, t1071_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = il2cpp_codegen_marshal_string(unmarshaled.f1);
	marshaled.f2 = unmarshaled.f2;
}
void t1071_marshal_back(const t1071_marshaled& marshaled, t1071& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = il2cpp_codegen_marshal_string_result(marshaled.f1);
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
void t1071_marshal_cleanup(t1071_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.f1);
	marshaled.f1 = NULL;
}
#include "t597.h"
#ifndef _MSC_VER
#else
#endif
#include "t597MD.h"

#include "t1076.h"
#include "t947.h"
#include "t949.h"
#include "t921.h"
#include "t1084.h"
#include "t1075.h"
#include "t1073.h"
#include "t708.h"
#include "t711.h"
#include "t1074.h"
#include "t709.h"
#include "t524.h"
#include "t665.h"
#include "t1131.h"
#include "t710.h"
#include "t65.h"
#include "t947MD.h"
#include "t949MD.h"
#include "t921MD.h"
#include "t1073MD.h"
#include "t708MD.h"
#include "t711MD.h"
#include "t57MD.h"
#include "t709MD.h"
#include "t524MD.h"
#include "t665MD.h"
#include "t1131MD.h"
#include "t907MD.h"
#include "t65MD.h"


extern "C" void m3287 (t597 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m4429(__this, L_0, 0, NULL);
		return;
	}
}
extern "C" void m4428 (t597 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t47* L_1 = m4522(L_0, (t47*) &_stringLiteral679, NULL);
		m4429(__this, L_1, 1, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1073_TI_var;
extern "C" void m4429 (t597 * __this, t47* p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1073_TI_var = il2cpp_codegen_type_info_from_index(1953);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f3 = L_0;
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_1;
		__this->f5 = (-1);
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f6 = L_2;
		t47* L_3 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f7 = L_3;
		t47* L_4 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f8 = L_4;
		t47* L_5 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f9 = L_5;
		__this->f12 = 1;
		m162(__this, NULL);
		bool L_6 = p1;
		__this->f14 = L_6;
		t47* L_7 = p0;
		__this->f2 = L_7;
		m4458(__this, 1, NULL);
		bool L_8 = (__this->f12);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		t47* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_10 = m207(NULL, (t47*) &_stringLiteral680, L_9, NULL);
		t1073 * L_11 = (t1073 *)il2cpp_codegen_object_new (t1073_TI_var);
		m4477(L_11, L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0087:
	{
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" void m3289 (t597 * __this, t597 * p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f3 = L_0;
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_1;
		__this->f5 = (-1);
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f6 = L_2;
		t47* L_3 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f7 = L_3;
		t47* L_4 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f8 = L_4;
		t47* L_5 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f9 = L_5;
		__this->f12 = 1;
		m162(__this, NULL);
		t597 * L_6 = p0;
		t47* L_7 = p1;
		m4432(__this, L_6, L_7, NULL);
		return;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t1072_TI_var;
extern "C" void m4430 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t1072_TI_var = il2cpp_codegen_type_info_from_index(1954);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t597_SFs*)t597_TI_var->static_fields)->f19 = (t47*) &_stringLiteral218;
		((t597_SFs*)t597_TI_var->static_fields)->f20 = (t47*) &_stringLiteral443;
		((t597_SFs*)t597_TI_var->static_fields)->f21 = (t47*) &_stringLiteral498;
		((t597_SFs*)t597_TI_var->static_fields)->f22 = (t47*) &_stringLiteral500;
		((t597_SFs*)t597_TI_var->static_fields)->f23 = (t47*) &_stringLiteral681;
		((t597_SFs*)t597_TI_var->static_fields)->f24 = (t47*) &_stringLiteral441;
		((t597_SFs*)t597_TI_var->static_fields)->f25 = (t47*) &_stringLiteral440;
		((t597_SFs*)t597_TI_var->static_fields)->f26 = (t47*) &_stringLiteral682;
		((t597_SFs*)t597_TI_var->static_fields)->f27 = (t47*) &_stringLiteral683;
		((t597_SFs*)t597_TI_var->static_fields)->f28 = (t47*) &_stringLiteral684;
		((t597_SFs*)t597_TI_var->static_fields)->f29 = (t47*) &_stringLiteral685;
		((t597_SFs*)t597_TI_var->static_fields)->f30 = (t47*) &_stringLiteral686;
		t1072* L_0 = ((t1072*)SZArrayNew(t1072_TI_var, 8));
		t47* L_1 = ((t597_SFs*)t597_TI_var->static_fields)->f24;
		t47* L_2 = ((t597_SFs*)t597_TI_var->static_fields)->f20;
		t1071  L_3 = {0};
		m4427(&L_3, L_1, L_2, ((int32_t)80), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_0, 0)) = L_3;
		t1072* L_4 = L_0;
		t47* L_5 = ((t597_SFs*)t597_TI_var->static_fields)->f25;
		t47* L_6 = ((t597_SFs*)t597_TI_var->static_fields)->f20;
		t1071  L_7 = {0};
		m4427(&L_7, L_5, L_6, ((int32_t)443), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_4, 1)) = L_7;
		t1072* L_8 = L_4;
		t47* L_9 = ((t597_SFs*)t597_TI_var->static_fields)->f22;
		t47* L_10 = ((t597_SFs*)t597_TI_var->static_fields)->f20;
		t1071  L_11 = {0};
		m4427(&L_11, L_9, L_10, ((int32_t)21), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_8, 2)) = L_11;
		t1072* L_12 = L_8;
		t47* L_13 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		t47* L_14 = ((t597_SFs*)t597_TI_var->static_fields)->f20;
		t1071  L_15 = {0};
		m4427(&L_15, L_13, L_14, (-1), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_12, 3)) = L_15;
		t1072* L_16 = L_12;
		t47* L_17 = ((t597_SFs*)t597_TI_var->static_fields)->f26;
		t1071  L_18 = {0};
		m4427(&L_18, L_17, (t47*) &_stringLiteral304, ((int32_t)25), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_16, 4)) = L_18;
		t1072* L_19 = L_16;
		t47* L_20 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		t1071  L_21 = {0};
		m4427(&L_21, L_20, (t47*) &_stringLiteral304, ((int32_t)119), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_19, 5)) = L_21;
		t1072* L_22 = L_19;
		t47* L_23 = ((t597_SFs*)t597_TI_var->static_fields)->f28;
		t47* L_24 = ((t597_SFs*)t597_TI_var->static_fields)->f20;
		t1071  L_25 = {0};
		m4427(&L_25, L_23, L_24, ((int32_t)119), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_22, 6)) = L_25;
		t1072* L_26 = L_22;
		t47* L_27 = ((t597_SFs*)t597_TI_var->static_fields)->f23;
		t47* L_28 = ((t597_SFs*)t597_TI_var->static_fields)->f20;
		t1071  L_29 = {0};
		m4427(&L_29, L_27, L_28, ((int32_t)70), NULL);
		*((t1071 *)(t1071 *)SZArrayLdElema(L_26, 7)) = L_29;
		((t597_SFs*)t597_TI_var->static_fields)->f31 = L_26;
		return;
	}
}
extern "C" void m4431 (t597 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t47* L_1 = m4433(__this, NULL);
		m4525(L_0, (t47*) &_stringLiteral679, L_1, NULL);
		return;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t708_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t214_TI_var;
extern "C" void m4432 (t597 * __this, t597 * p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t597 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_1 = m4475(NULL, L_0, (t597 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		t708 * L_2 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_2, (t47*) &_stringLiteral687, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		t597 * L_3 = p0;
		bool L_4 = m4440(L_3, NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		t711 * L_5 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_5, (t47*) &_stringLiteral687, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		t47* L_6 = p1;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		p1 = L_7;
	}

IL_003a:
	{
		t47* L_8 = p1;
		int32_t L_9 = m1741(L_8, NULL);
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_0071;
		}
	}
	{
		t47* L_10 = p1;
		uint16_t L_11 = m1754(L_10, 0, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		t47* L_12 = p1;
		uint16_t L_13 = m1754(L_12, 1, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		t47* L_14 = p1;
		__this->f2 = L_14;
		m4458(__this, 1, NULL);
		return;
	}

IL_0071:
	{
		t47* L_15 = p1;
		int32_t L_16 = m1817(L_15, ((int32_t)58), NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0107;
		}
	}
	{
		t47* L_18 = p1;
		t221* L_19 = ((t221*)SZArrayNew(t221_TI_var, 3));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_19, 0)) = (uint16_t)((int32_t)47);
		t221* L_20 = L_19;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_20, 1)) = (uint16_t)((int32_t)92);
		t221* L_21 = L_20;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_21, 2)) = (uint16_t)((int32_t)63);
		int32_t L_22 = m4656(L_18, L_21, NULL);
		V_1 = L_22;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}

IL_00ab:
	{
		t597 * L_26 = p0;
		t47* L_27 = m4439(L_26, NULL);
		t47* L_28 = p1;
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		int32_t L_30 = m4657(NULL, L_27, 0, L_28, 0, L_29, NULL);
		if (L_30)
		{
			goto IL_00ed;
		}
	}
	{
		t597 * L_31 = p0;
		t47* L_32 = m4439(L_31, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_33 = m4472(NULL, L_32, NULL);
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		t47* L_34 = p1;
		int32_t L_35 = m1741(L_34, NULL);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)((int32_t)L_36+(int32_t)1)))))
		{
			goto IL_00fc;
		}
	}
	{
		t47* L_37 = p1;
		int32_t L_38 = V_0;
		uint16_t L_39 = m1754(L_37, ((int32_t)((int32_t)L_38+(int32_t)1)), NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00fc;
		}
	}

IL_00ed:
	{
		t47* L_40 = p1;
		__this->f2 = L_40;
		m4458(__this, 1, NULL);
		return;
	}

IL_00fc:
	{
		t47* L_41 = p1;
		int32_t L_42 = V_0;
		t47* L_43 = m1781(L_41, ((int32_t)((int32_t)L_42+(int32_t)1)), NULL);
		p1 = L_43;
	}

IL_0107:
	{
		t597 * L_44 = p0;
		t47* L_45 = (L_44->f3);
		__this->f3 = L_45;
		t597 * L_46 = p0;
		t47* L_47 = (L_46->f4);
		__this->f4 = L_47;
		t597 * L_48 = p0;
		int32_t L_49 = (L_48->f5);
		__this->f5 = L_49;
		t597 * L_50 = p0;
		t47* L_51 = (L_50->f9);
		__this->f9 = L_51;
		t597 * L_52 = p0;
		bool L_53 = (L_52->f10);
		__this->f10 = L_53;
		t597 * L_54 = p0;
		bool L_55 = (L_54->f1);
		__this->f1 = L_55;
		t597 * L_56 = p0;
		bool L_57 = (L_56->f11);
		__this->f11 = L_57;
		t47* L_58 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_59 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		bool L_60 = m185(NULL, L_58, L_59, NULL);
		if (!L_60)
		{
			goto IL_0190;
		}
	}
	{
		t597 * L_61 = p0;
		t47* L_62 = (L_61->f6);
		__this->f6 = L_62;
		t597 * L_63 = p0;
		t47* L_64 = (L_63->f7);
		__this->f7 = L_64;
		t597 * L_65 = p0;
		t47* L_66 = (L_65->f8);
		__this->f8 = L_66;
		return;
	}

IL_0190:
	{
		t47* L_67 = p1;
		int32_t L_68 = m1817(L_67, ((int32_t)35), NULL);
		V_0 = L_68;
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		bool L_70 = (__this->f14);
		if (!L_70)
		{
			goto IL_01bd;
		}
	}
	{
		t47* L_71 = p1;
		int32_t L_72 = V_0;
		t47* L_73 = m1781(L_71, L_72, NULL);
		__this->f8 = L_73;
		goto IL_01db;
	}

IL_01bd:
	{
		t47* L_74 = p1;
		int32_t L_75 = V_0;
		t47* L_76 = m1781(L_74, ((int32_t)((int32_t)L_75+(int32_t)1)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_77 = m4456(NULL, L_76, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_78 = m207(NULL, (t47*) &_stringLiteral688, L_77, NULL);
		__this->f8 = L_78;
	}

IL_01db:
	{
		t47* L_79 = p1;
		int32_t L_80 = V_0;
		t47* L_81 = m1755(L_79, 0, L_80, NULL);
		p1 = L_81;
	}

IL_01e5:
	{
		t47* L_82 = p1;
		int32_t L_83 = m1817(L_82, ((int32_t)63), NULL);
		V_0 = L_83;
		int32_t L_84 = V_0;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_0228;
		}
	}
	{
		t47* L_85 = p1;
		int32_t L_86 = V_0;
		t47* L_87 = m1781(L_85, L_86, NULL);
		__this->f7 = L_87;
		bool L_88 = (__this->f14);
		if (L_88)
		{
			goto IL_021e;
		}
	}
	{
		t47* L_89 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_90 = m4456(NULL, L_89, NULL);
		__this->f7 = L_90;
	}

IL_021e:
	{
		t47* L_91 = p1;
		int32_t L_92 = V_0;
		t47* L_93 = m1755(L_91, 0, L_92, NULL);
		p1 = L_93;
	}

IL_0228:
	{
		t47* L_94 = p1;
		int32_t L_95 = m1741(L_94, NULL);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		t47* L_96 = p1;
		uint16_t L_97 = m1754(L_96, 0, NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_02a1;
		}
	}
	{
		t47* L_98 = p1;
		int32_t L_99 = m1741(L_98, NULL);
		if ((((int32_t)L_99) <= ((int32_t)1)))
		{
			goto IL_027d;
		}
	}
	{
		t47* L_100 = p1;
		uint16_t L_101 = m1754(L_100, 1, NULL);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027d;
		}
	}
	{
		t47* L_102 = (__this->f3);
		uint16_t L_103 = ((int32_t)58);
		t7 * L_104 = Box(t214_TI_var, &L_103);
		t47* L_105 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_106 = m1451(NULL, L_102, L_104, L_105, NULL);
		__this->f2 = L_106;
		m4458(__this, 1, NULL);
		return;
	}

IL_027d:
	{
		t47* L_107 = p1;
		__this->f6 = L_107;
		bool L_108 = (__this->f14);
		if (L_108)
		{
			goto IL_02a0;
		}
	}
	{
		t47* L_109 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_110 = m4456(NULL, L_109, NULL);
		__this->f6 = L_110;
	}

IL_02a0:
	{
		return;
	}

IL_02a1:
	{
		t597 * L_111 = p0;
		t47* L_112 = (L_111->f6);
		__this->f6 = L_112;
		t47* L_113 = p1;
		int32_t L_114 = m1741(L_113, NULL);
		if ((((int32_t)L_114) > ((int32_t)0)))
		{
			goto IL_02ca;
		}
	}
	{
		t47* L_115 = (__this->f7);
		int32_t L_116 = m1741(L_115, NULL);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}

IL_02ca:
	{
		t47* L_117 = (__this->f6);
		int32_t L_118 = m4532(L_117, ((int32_t)47), NULL);
		V_0 = L_118;
		int32_t L_119 = V_0;
		if ((((int32_t)L_119) < ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		t47* L_120 = (__this->f6);
		int32_t L_121 = V_0;
		t47* L_122 = m1755(L_120, 0, ((int32_t)((int32_t)L_121+(int32_t)1)), NULL);
		__this->f6 = L_122;
	}

IL_02f4:
	{
		t47* L_123 = p1;
		int32_t L_124 = m1741(L_123, NULL);
		if (L_124)
		{
			goto IL_0300;
		}
	}
	{
		return;
	}

IL_0300:
	{
		t47* L_125 = (__this->f6);
		t47* L_126 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_127 = m207(NULL, L_125, L_126, NULL);
		__this->f6 = L_127;
		V_2 = 0;
	}

IL_0314:
	{
		t47* L_128 = (__this->f6);
		int32_t L_129 = V_2;
		int32_t L_130 = m3345(L_128, (t47*) &_stringLiteral689, L_129, NULL);
		V_0 = L_130;
		int32_t L_131 = V_0;
		if ((!(((uint32_t)L_131) == ((uint32_t)(-1)))))
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0386;
	}

IL_0332:
	{
		int32_t L_132 = V_0;
		if (L_132)
		{
			goto IL_0350;
		}
	}
	{
		t47* L_133 = (__this->f6);
		t47* L_134 = m1777(L_133, 0, 2, NULL);
		__this->f6 = L_134;
		goto IL_0381;
	}

IL_0350:
	{
		t47* L_135 = (__this->f6);
		int32_t L_136 = V_0;
		uint16_t L_137 = m1754(L_135, ((int32_t)((int32_t)L_136-(int32_t)1)), NULL);
		if ((((int32_t)L_137) == ((int32_t)((int32_t)46))))
		{
			goto IL_037d;
		}
	}
	{
		t47* L_138 = (__this->f6);
		int32_t L_139 = V_0;
		t47* L_140 = m1777(L_138, L_139, 2, NULL);
		__this->f6 = L_140;
		goto IL_0381;
	}

IL_037d:
	{
		int32_t L_141 = V_0;
		V_2 = ((int32_t)((int32_t)L_141+(int32_t)1));
	}

IL_0381:
	{
		goto IL_0314;
	}

IL_0386:
	{
		t47* L_142 = (__this->f6);
		int32_t L_143 = m1741(L_142, NULL);
		if ((((int32_t)L_143) <= ((int32_t)1)))
		{
			goto IL_03f4;
		}
	}
	{
		t47* L_144 = (__this->f6);
		t47* L_145 = (__this->f6);
		int32_t L_146 = m1741(L_145, NULL);
		uint16_t L_147 = m1754(L_144, ((int32_t)((int32_t)L_146-(int32_t)1)), NULL);
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_03f4;
		}
	}
	{
		t47* L_148 = (__this->f6);
		t47* L_149 = (__this->f6);
		int32_t L_150 = m1741(L_149, NULL);
		uint16_t L_151 = m1754(L_148, ((int32_t)((int32_t)L_150-(int32_t)2)), NULL);
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03f4;
		}
	}
	{
		t47* L_152 = (__this->f6);
		t47* L_153 = (__this->f6);
		int32_t L_154 = m1741(L_153, NULL);
		t47* L_155 = m1777(L_152, ((int32_t)((int32_t)L_154-(int32_t)1)), 1, NULL);
		__this->f6 = L_155;
	}

IL_03f4:
	{
		V_2 = 0;
	}

IL_03f6:
	{
		t47* L_156 = (__this->f6);
		int32_t L_157 = V_2;
		int32_t L_158 = m3345(L_156, (t47*) &_stringLiteral690, L_157, NULL);
		V_0 = L_158;
		int32_t L_159 = V_0;
		if ((!(((uint32_t)L_159) == ((uint32_t)(-1)))))
		{
			goto IL_0414;
		}
	}
	{
		goto IL_048b;
	}

IL_0414:
	{
		int32_t L_160 = V_0;
		if (L_160)
		{
			goto IL_0421;
		}
	}
	{
		V_2 = 3;
		goto IL_03f6;
	}

IL_0421:
	{
		t47* L_161 = (__this->f6);
		int32_t L_162 = V_0;
		int32_t L_163 = m4658(L_161, ((int32_t)47), ((int32_t)((int32_t)L_162-(int32_t)1)), NULL);
		V_3 = L_163;
		int32_t L_164 = V_3;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_0442;
		}
	}
	{
		int32_t L_165 = V_0;
		V_2 = ((int32_t)((int32_t)L_165+(int32_t)1));
		goto IL_0486;
	}

IL_0442:
	{
		t47* L_166 = (__this->f6);
		int32_t L_167 = V_3;
		int32_t L_168 = V_0;
		int32_t L_169 = V_3;
		t47* L_170 = m1755(L_166, ((int32_t)((int32_t)L_167+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_168-(int32_t)L_169))-(int32_t)1)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_171 = m1753(NULL, L_170, (t47*) &_stringLiteral691, NULL);
		if (!L_171)
		{
			goto IL_0482;
		}
	}
	{
		t47* L_172 = (__this->f6);
		int32_t L_173 = V_3;
		int32_t L_174 = V_0;
		int32_t L_175 = V_3;
		t47* L_176 = m1777(L_172, ((int32_t)((int32_t)L_173+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_174-(int32_t)L_175))+(int32_t)3)), NULL);
		__this->f6 = L_176;
		goto IL_0486;
	}

IL_0482:
	{
		int32_t L_177 = V_0;
		V_2 = ((int32_t)((int32_t)L_177+(int32_t)1));
	}

IL_0486:
	{
		goto IL_03f6;
	}

IL_048b:
	{
		t47* L_178 = (__this->f6);
		int32_t L_179 = m1741(L_178, NULL);
		if ((((int32_t)L_179) <= ((int32_t)3)))
		{
			goto IL_0522;
		}
	}
	{
		t47* L_180 = (__this->f6);
		bool L_181 = m3344(L_180, (t47*) &_stringLiteral692, NULL);
		if (!L_181)
		{
			goto IL_0522;
		}
	}
	{
		t47* L_182 = (__this->f6);
		t47* L_183 = (__this->f6);
		int32_t L_184 = m1741(L_183, NULL);
		int32_t L_185 = m4658(L_182, ((int32_t)47), ((int32_t)((int32_t)L_184-(int32_t)4)), NULL);
		V_0 = L_185;
		int32_t L_186 = V_0;
		if ((((int32_t)L_186) == ((int32_t)(-1))))
		{
			goto IL_0522;
		}
	}
	{
		t47* L_187 = (__this->f6);
		int32_t L_188 = V_0;
		t47* L_189 = (__this->f6);
		int32_t L_190 = m1741(L_189, NULL);
		int32_t L_191 = V_0;
		t47* L_192 = m1755(L_187, ((int32_t)((int32_t)L_188+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_190-(int32_t)L_191))-(int32_t)4)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_193 = m1753(NULL, L_192, (t47*) &_stringLiteral691, NULL);
		if (!L_193)
		{
			goto IL_0522;
		}
	}
	{
		t47* L_194 = (__this->f6);
		int32_t L_195 = V_0;
		t47* L_196 = (__this->f6);
		int32_t L_197 = m1741(L_196, NULL);
		int32_t L_198 = V_0;
		t47* L_199 = m1777(L_194, ((int32_t)((int32_t)L_195+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_197-(int32_t)L_198))-(int32_t)1)), NULL);
		__this->f6 = L_199;
	}

IL_0522:
	{
		bool L_200 = (__this->f14);
		if (L_200)
		{
			goto IL_053e;
		}
	}
	{
		t47* L_201 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_202 = m4456(NULL, L_201, NULL);
		__this->f6 = L_202;
	}

IL_053e:
	{
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m4433 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		m4474(__this, NULL);
		t47* L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		t47* L_1 = m4449(__this, 2, NULL);
		__this->f15 = L_1;
		t47* L_2 = (__this->f7);
		int32_t L_3 = m1741(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		t47* L_4 = (__this->f15);
		t47* L_5 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = m207(NULL, L_4, L_5, NULL);
		__this->f15 = L_6;
	}

IL_0046:
	{
		t47* L_7 = (__this->f8);
		int32_t L_8 = m1741(L_7, NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		t47* L_9 = (__this->f15);
		t47* L_10 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_11 = m207(NULL, L_9, L_10, NULL);
		__this->f15 = L_11;
	}

IL_006e:
	{
		t47* L_12 = (__this->f15);
		return L_12;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m4434 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* G_B3_0 = {0};
	{
		m4474(__this, NULL);
		t47* L_0 = m4439(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_1 = m4470(NULL, L_0, NULL);
		int32_t L_2 = (__this->f5);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		t47* L_3 = (__this->f4);
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		t47* L_4 = (__this->f4);
		int32_t L_5 = (__this->f5);
		int32_t L_6 = L_5;
		t7 * L_7 = Box(t58_TI_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_8 = m1451(NULL, L_4, (t47*) &_stringLiteral304, L_7, NULL);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
extern "C" t47* m4435 (t597 * __this, const MethodInfo* method)
{
	{
		m4474(__this, NULL);
		t47* L_0 = (__this->f4);
		return L_0;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" bool m4436 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		m4474(__this, NULL);
		t47* L_0 = m4439(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_1 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_2 = m185(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t947_TI_var;
extern TypeInfo* t949_TI_var;
extern "C" bool m4437 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t947_TI_var = il2cpp_codegen_type_info_from_index(1833);
		t949_TI_var = il2cpp_codegen_type_info_from_index(1835);
		s_Il2CppMethodIntialized = true;
	}
	t947 * V_0 = {0};
	t949 * V_1 = {0};
	{
		m4474(__this, NULL);
		t47* L_0 = m4435(__this, NULL);
		int32_t L_1 = m1741(L_0, NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m4436(__this, NULL);
		return L_2;
	}

IL_001d:
	{
		t47* L_3 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_4 = m185(NULL, L_3, (t47*) &_stringLiteral496, NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		t47* L_5 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_6 = m185(NULL, L_5, (t47*) &_stringLiteral495, NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		t47* L_7 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t947_TI_var);
		bool L_8 = m3724(NULL, L_7, (&V_0), NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t947_TI_var);
		t947 * L_9 = ((t947_SFs*)t947_TI_var->static_fields)->f6;
		t947 * L_10 = V_0;
		bool L_11 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(0 /* System.Boolean System.Net.IPAddress::Equals(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		t47* L_12 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t949_TI_var);
		bool L_13 = m3743(NULL, L_12, (&V_1), NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		t949 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t949_TI_var);
		bool L_15 = m3747(NULL, L_14, NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return 1;
	}

IL_008c:
	{
		return 0;
	}
}
extern "C" bool m4438 (t597 * __this, const MethodInfo* method)
{
	{
		m4474(__this, NULL);
		bool L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t47* m4439 (t597 * __this, const MethodInfo* method)
{
	{
		m4474(__this, NULL);
		t47* L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" bool m4440 (t597 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f12);
		return L_0;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t949_TI_var;
extern "C" int32_t m4441 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t949_TI_var = il2cpp_codegen_type_info_from_index(1835);
		s_Il2CppMethodIntialized = true;
	}
	t949 * V_0 = {0};
	{
		t47* L_0 = p0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t47* L_1 = p0;
		int32_t L_2 = m1741(L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		t47* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_4 = m4442(NULL, L_3, NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		t47* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_6 = m4443(NULL, L_5, NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		t47* L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t949_TI_var);
		bool L_8 = m3743(NULL, L_7, (&V_0), NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
extern TypeInfo* t221_TI_var;
extern "C" bool m4442 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	t48* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		t47* L_0 = p0;
		t221* L_1 = ((t221*)SZArrayNew(t221_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)46);
		t48* L_2 = m3343(L_0, L_1, NULL);
		V_0 = L_2;
		t48* L_3 = V_0;
		if ((((int32_t)(((int32_t)(((t52 *)L_3)->max_length)))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		t48* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		int32_t L_7 = m1741((*(t47**)(t47**)SZArrayLdElema(L_4, L_6)), NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		t48* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		bool L_12 = m4659(NULL, (*(t47**)(t47**)SZArrayLdElema(L_9, L_11)), (&V_3), NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}
}
extern TypeInfo* t214_TI_var;
extern "C" bool m4443 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		t47* L_0 = p0;
		int32_t L_1 = m1741(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		t47* L_2 = p0;
		int32_t L_3 = V_2;
		uint16_t L_4 = m1754(L_2, L_3, NULL);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_7 = m4644(NULL, L_6, NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_10 = m4644(NULL, L_9, NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return 0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t214_TI_var;
extern "C" bool m4444 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		t47* L_0 = p0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t47* L_1 = p0;
		int32_t L_2 = m1741(L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		t47* L_3 = p0;
		uint16_t L_4 = m1754(L_3, 0, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_5 = m4445(NULL, L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		t47* L_6 = p0;
		int32_t L_7 = m1741(L_6, NULL);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		t47* L_8 = p0;
		int32_t L_9 = V_1;
		uint16_t L_10 = m1754(L_8, L_9, NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		bool L_12 = m4645(NULL, L_11, NULL);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_14 = m4445(NULL, L_13, NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return 0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}
}
extern "C" bool m4445 (t7 * __this , uint16_t p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		uint16_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return G_B7_0;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" bool m4446 (t597 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t597 * V_0 = {0};
	t47* V_1 = {0};
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		t7 * L_1 = p0;
		V_0 = ((t597 *)IsInst(L_1, t597_TI_var));
		t597 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		t7 * L_3 = p0;
		V_1 = ((t47*)IsInst(L_3, t47_TI_var));
		t47* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		t47* L_5 = V_1;
		t597 * L_6 = (t597 *)il2cpp_codegen_object_new (t597_TI_var);
		m3287(L_6, L_5, NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		t597 * L_7 = V_0;
		bool L_8 = m4447(__this, L_7, NULL);
		return L_8;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t709_TI_var;
extern "C" bool m4447 (t597 * __this, t597 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		s_Il2CppMethodIntialized = true;
	}
	t709 * V_0 = {0};
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->f12);
		t597 * L_1 = p0;
		bool L_2 = (L_1->f12);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		bool L_3 = (__this->f12);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		t47* L_4 = (__this->f2);
		t597 * L_5 = p0;
		t47* L_6 = (L_5->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_7 = m185(NULL, L_4, L_6, NULL);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_8 = m3303(NULL, NULL);
		V_0 = L_8;
		t47* L_9 = (__this->f3);
		t709 * L_10 = V_0;
		t47* L_11 = m4660(L_9, L_10, NULL);
		t597 * L_12 = p0;
		t47* L_13 = (L_12->f3);
		t709 * L_14 = V_0;
		t47* L_15 = m4660(L_13, L_14, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_16 = m185(NULL, L_11, L_15, NULL);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		t47* L_17 = (__this->f4);
		t709 * L_18 = V_0;
		t47* L_19 = m4660(L_17, L_18, NULL);
		t597 * L_20 = p0;
		t47* L_21 = (L_20->f4);
		t709 * L_22 = V_0;
		t47* L_23 = m4660(L_21, L_22, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_24 = m185(NULL, L_19, L_23, NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = (__this->f5);
		t597 * L_26 = p0;
		int32_t L_27 = (L_26->f5);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		t47* L_28 = (__this->f7);
		t597 * L_29 = p0;
		t47* L_30 = (L_29->f7);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_31 = m185(NULL, L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		t47* L_32 = (__this->f6);
		t597 * L_33 = p0;
		t47* L_34 = (L_33->f6);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_35 = m185(NULL, L_32, L_34, NULL);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return G_B10_0;
	}
}
extern TypeInfo* t709_TI_var;
extern "C" int32_t m4448 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		s_Il2CppMethodIntialized = true;
	}
	t709 * V_0 = {0};
	{
		int32_t L_0 = (__this->f18);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_1 = m3303(NULL, NULL);
		V_0 = L_1;
		bool L_2 = (__this->f12);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		t47* L_3 = (__this->f3);
		t709 * L_4 = V_0;
		t47* L_5 = m4660(L_3, L_4, NULL);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_5);
		t47* L_7 = (__this->f4);
		t709 * L_8 = V_0;
		t47* L_9 = m4660(L_7, L_8, NULL);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_9);
		int32_t L_11 = (__this->f5);
		t47* L_12 = (__this->f7);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_12);
		t47* L_14 = (__this->f6);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_14);
		__this->f18 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15));
		goto IL_007a;
	}

IL_0069:
	{
		t47* L_16 = (__this->f2);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_16);
		__this->f18 = L_17;
	}

IL_007a:
	{
		int32_t L_18 = (__this->f18);
		return L_18;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t597_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t524_TI_var;
extern const MethodInfo* m4553_MI_var;
extern "C" t47* m4449 (t597 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t524_TI_var = il2cpp_codegen_type_info_from_index(1855);
		m4553_MI_var = il2cpp_codegen_method_info_from_index(2147483957);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t336 * V_1 = {0};
	t336 * V_2 = {0};
	int32_t V_3 = {0};
	t47* V_4 = {0};
	t524 * V_5 = {0};
	int32_t V_6 = 0;
	{
		m4474(__this, NULL);
		int32_t L_0 = p0;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		t47* L_2 = (__this->f3);
		t47* L_3 = m4471(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_4 = m207(NULL, L_2, L_3, NULL);
		return L_4;
	}

IL_0031:
	{
		t47* L_5 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_6 = ((t597_SFs*)t597_TI_var->static_fields)->f26;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_7 = m185(NULL, L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		t47* L_8 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_9 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_10 = m185(NULL, L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_11 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		return L_11;
	}

IL_0061:
	{
		t336 * L_12 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_12, NULL);
		V_1 = L_12;
		t336 * L_13 = V_1;
		t47* L_14 = (__this->f3);
		m3305(L_13, L_14, NULL);
		t336 * L_15 = V_1;
		t47* L_16 = m4471(__this, NULL);
		m3305(L_15, L_16, NULL);
		t47* L_17 = (__this->f6);
		int32_t L_18 = m1741(L_17, NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		t47* L_19 = (__this->f6);
		uint16_t L_20 = m1754(L_19, 1, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_21 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		t47* L_22 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_23 = m185(NULL, L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		t336 * L_24 = V_1;
		m1772(L_24, ((int32_t)47), NULL);
	}

IL_00c3:
	{
		t47* L_25 = (__this->f9);
		int32_t L_26 = m1741(L_25, NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		t336 * L_27 = V_1;
		t47* L_28 = (__this->f9);
		t336 * L_29 = m3305(L_27, L_28, NULL);
		m1772(L_29, ((int32_t)64), NULL);
	}

IL_00e8:
	{
		t336 * L_30 = V_1;
		t47* L_31 = (__this->f4);
		m3305(L_30, L_31, NULL);
		t47* L_32 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_33 = m4470(NULL, L_32, NULL);
		V_0 = L_33;
		int32_t L_34 = (__this->f5);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = (__this->f5);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		t336 * L_37 = V_1;
		t336 * L_38 = m1772(L_37, ((int32_t)58), NULL);
		int32_t L_39 = (__this->f5);
		m4574(L_38, L_39, NULL);
	}

IL_012d:
	{
		t336 * L_40 = V_1;
		t47* L_41 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_40);
		return L_41;
	}

IL_0134:
	{
		t336 * L_42 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_42, NULL);
		V_2 = L_42;
		t336 * L_43 = V_2;
		t47* L_44 = (__this->f3);
		m3305(L_43, L_44, NULL);
		t336 * L_45 = V_2;
		t47* L_46 = m4471(__this, NULL);
		m3305(L_45, L_46, NULL);
		t47* L_47 = (__this->f6);
		int32_t L_48 = m1741(L_47, NULL);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		t47* L_49 = (__this->f6);
		uint16_t L_50 = m1754(L_49, 1, NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_51 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		t47* L_52 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_53 = m185(NULL, L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		t336 * L_54 = V_2;
		m1772(L_54, ((int32_t)47), NULL);
	}

IL_0196:
	{
		t47* L_55 = (__this->f9);
		int32_t L_56 = m1741(L_55, NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		t336 * L_57 = V_2;
		t47* L_58 = (__this->f9);
		t336 * L_59 = m3305(L_57, L_58, NULL);
		m1772(L_59, ((int32_t)64), NULL);
	}

IL_01bb:
	{
		t336 * L_60 = V_2;
		t47* L_61 = (__this->f4);
		m3305(L_60, L_61, NULL);
		t47* L_62 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_63 = m4470(NULL, L_62, NULL);
		V_0 = L_63;
		int32_t L_64 = (__this->f5);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = (__this->f5);
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		t336 * L_67 = V_2;
		t336 * L_68 = m1772(L_67, ((int32_t)58), NULL);
		int32_t L_69 = (__this->f5);
		m4574(L_68, L_69, NULL);
	}

IL_0200:
	{
		t47* L_70 = (__this->f6);
		int32_t L_71 = m1741(L_70, NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		t47* L_72 = m4439(__this, NULL);
		V_4 = L_72;
		t47* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t524 * L_74 = ((t597_SFs*)t597_TI_var->static_fields)->f35;
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		t524 * L_75 = (t524 *)il2cpp_codegen_object_new (t524_TI_var);
		m4553(L_75, 2, m4553_MI_var);
		V_5 = L_75;
		t524 * L_76 = V_5;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, (t47*) &_stringLiteral682, 0);
		t524 * L_77 = V_5;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, (t47*) &_stringLiteral683, 0);
		t524 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		((t597_SFs*)t597_TI_var->static_fields)->f35 = L_78;
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t524 * L_79 = ((t597_SFs*)t597_TI_var->static_fields)->f35;
		t47* L_80 = V_4;
		bool L_81 = (bool)VirtFuncInvoker2< bool, t47*, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_79, L_80, (&V_6));
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		t336 * L_83 = V_2;
		t47* L_84 = (__this->f6);
		m3305(L_83, L_84, NULL);
		goto IL_02a6;
	}

IL_0284:
	{
		t336 * L_85 = V_2;
		t47* L_86 = (__this->f6);
		t47* L_87 = m4439(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_88 = m4466(NULL, L_87, NULL);
		t47* L_89 = m4467(NULL, L_86, L_88, NULL);
		m3305(L_85, L_89, NULL);
		goto IL_02a6;
	}

IL_02a6:
	{
		t336 * L_90 = V_2;
		t47* L_91 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_90);
		return L_91;
	}

IL_02ad:
	{
		return (t47*)NULL;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" int32_t m4450 (t7 * __this , uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = p0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_1 = p0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = p0;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}

IL_0015:
	{
		uint16_t L_3 = p0;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_4 = p0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_5 = p0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_002d:
	{
		uint16_t L_6 = p0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_7 = p0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_8 = p0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0045:
	{
		t396 * L_9 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_9, (t47*) &_stringLiteral693, NULL);
		il2cpp_codegen_raise_exception(L_9);
	}
}
extern TypeInfo* t711_TI_var;
extern TypeInfo* t597_TI_var;
extern TypeInfo* t214_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m4451 (t7 * __this , uint16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		t711 * L_1 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_1, (t47*) &_stringLiteral694, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_2 = ((t597_SFs*)t597_TI_var->static_fields)->f19;
		uint16_t L_3 = p0;
		uint16_t L_4 = m1754(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), NULL);
		uint16_t L_5 = L_4;
		t7 * L_6 = Box(t214_TI_var, &L_5);
		t47* L_7 = ((t597_SFs*)t597_TI_var->static_fields)->f19;
		uint16_t L_8 = p0;
		uint16_t L_9 = m1754(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), NULL);
		uint16_t L_10 = L_9;
		t7 * L_11 = Box(t214_TI_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_12 = m1451(NULL, (t47*) &_stringLiteral695, L_6, L_11, NULL);
		return L_12;
	}
}
extern "C" bool m4452 (t7 * __this , uint16_t p0, const MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint16_t L_0 = p0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		uint16_t L_2 = p0;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = p0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		uint16_t L_4 = p0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_5 = p0;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return G_B9_0;
	}
}
extern TypeInfo* t597_TI_var;
extern "C" bool m4453 (t7 * __this , t47* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = p1;
		t47* L_1 = p0;
		int32_t L_2 = m1741(L_1, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		t47* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = L_4;
		p1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		uint16_t L_6 = m1754(L_3, L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		t47* L_7 = p0;
		int32_t L_8 = p1;
		int32_t L_9 = L_8;
		p1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint16_t L_10 = m1754(L_7, L_9, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_11 = m4452(NULL, L_10, NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		t47* L_12 = p0;
		int32_t L_13 = p1;
		uint16_t L_14 = m1754(L_12, L_13, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_15 = m4452(NULL, L_14, NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return G_B6_0;
	}
}
extern TypeInfo* t214_TI_var;
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" void m4454 (t597 * __this, t47** p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t47* G_B4_0 = {0};
	{
		t47* L_0 = (__this->f7);
		int32_t L_1 = m1741(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		t47* L_2 = (__this->f7);
		uint16_t L_3 = m1754(L_2, 0, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((int32_t)63);
		t7 * L_5 = Box(t214_TI_var, &L_4);
		t47* L_6 = (__this->f7);
		t47* L_7 = m1781(L_6, 1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_8 = m4460(NULL, L_7, 0, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_9 = m217(NULL, L_5, L_8, NULL);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		t47* L_10 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_11 = m4460(NULL, L_10, 0, NULL);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		t47** L_12 = p0;
		t47** L_13 = p0;
		t47* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_15 = m207(NULL, (*((t47**)L_13)), L_14, NULL);
		*((t7 **)(L_12)) = (t7 *)L_15;
	}

IL_005e:
	{
		t47* L_16 = (__this->f8);
		int32_t L_17 = m1741(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t47** L_18 = p0;
		t47** L_19 = p0;
		t47* L_20 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_21 = m207(NULL, (*((t47**)L_19)), L_20, NULL);
		*((t7 **)(L_18)) = (t7 *)L_21;
	}

IL_007e:
	{
		return;
	}
}
extern TypeInfo* t597_TI_var;
extern "C" t47* m4455 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = (__this->f16);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		t47* L_1 = (__this->f16);
		return L_1;
	}

IL_0012:
	{
		bool L_2 = (__this->f12);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		t47* L_3 = m4449(__this, 2, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_4 = m4460(NULL, L_3, 1, NULL);
		__this->f16 = L_4;
		goto IL_0047;
	}

IL_0035:
	{
		t47* L_5 = (__this->f6);
		t47* L_6 = (t47*)VirtFuncInvoker1< t47*, t47* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_5);
		__this->f16 = L_6;
	}

IL_0047:
	{
		t47** L_7 = &(__this->f16);
		m4454(__this, L_7, NULL);
		t47* L_8 = (__this->f16);
		return L_8;
	}
}
extern TypeInfo* t597_TI_var;
extern "C" t47* m4456 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_1 = m4457(NULL, L_0, 0, 1, 1, NULL);
		return L_1;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t597_TI_var;
extern TypeInfo* t665_TI_var;
extern TypeInfo* t221_TI_var;
extern "C" t47* m4457 (t7 * __this , t47* p0, bool p1, bool p2, bool p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t665_TI_var = il2cpp_codegen_type_info_from_index(925);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t536* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
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
		t336 * L_2 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_2, NULL);
		V_0 = L_2;
		t47* L_3 = p0;
		int32_t L_4 = m1741(L_3, NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		t47* L_5 = p0;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_7 = m4453(NULL, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		t336 * L_8 = V_0;
		t47* L_9 = p0;
		int32_t L_10 = V_2;
		t47* L_11 = m1755(L_9, L_10, 3, NULL);
		m3305(L_8, L_11, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
		t665 * L_13 = m3248(NULL, NULL);
		t221* L_14 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t47* L_15 = p0;
		int32_t L_16 = V_2;
		uint16_t L_17 = m1754(L_15, L_16, NULL);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0)) = (uint16_t)L_17;
		t536* L_18 = (t536*)VirtFuncInvoker1< t536*, t221* >::Invoke(11 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_13, L_14);
		V_3 = L_18;
		t536* L_19 = V_3;
		V_4 = (((int32_t)(((t52 *)L_19)->max_length)));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		t536* L_20 = V_3;
		int32_t L_21 = V_5;
		int32_t L_22 = L_21;
		V_6 = (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22))));
		uint16_t L_23 = V_6;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		int32_t L_26 = m1817((t47*) &_stringLiteral696, L_25, NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_27 = p2;
		if (!L_27)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_29 = p3;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_32 = p1;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_33 = V_6;
		int32_t L_34 = m1817((t47*) &_stringLiteral697, L_33, NULL);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		t336 * L_35 = V_0;
		uint16_t L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_37 = m4451(NULL, L_36, NULL);
		m3305(L_35, L_37, NULL);
		goto IL_00f2;
	}

IL_00e9:
	{
		t336 * L_38 = V_0;
		uint16_t L_39 = V_6;
		m1772(L_38, L_39, NULL);
	}

IL_00f2:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00f8:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0105:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0020;
		}
	}
	{
		t336 * L_46 = V_0;
		t47* L_47 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_46);
		return L_47;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t709_TI_var;
extern "C" void m4458 (t597 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		t47* L_1 = (__this->f2);
		m4464(__this, L_0, L_1, NULL);
		bool L_2 = (__this->f14);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		t47* L_3 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_4 = m4457(NULL, L_3, 0, 1, 0, NULL);
		__this->f4 = L_4;
		t47* L_5 = (__this->f4);
		int32_t L_6 = m1741(L_5, NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		t47* L_7 = (__this->f4);
		uint16_t L_8 = m1754(L_7, 0, NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		t47* L_9 = (__this->f4);
		t47* L_10 = (__this->f4);
		int32_t L_11 = m1741(L_10, NULL);
		uint16_t L_12 = m1754(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		t47* L_13 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_14 = m3303(NULL, NULL);
		t47* L_15 = m4660(L_13, L_14, NULL);
		__this->f4 = L_15;
	}

IL_0086:
	{
		t47* L_16 = (__this->f6);
		int32_t L_17 = m1741(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		t47* L_18 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_19 = m4456(NULL, L_18, NULL);
		__this->f6 = L_19;
	}

IL_00a8:
	{
		return;
	}
}
extern TypeInfo* t597_TI_var;
extern "C" t47* m4459 (t597 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_1 = m4460(NULL, L_0, 0, NULL);
		return L_1;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t597_TI_var;
extern "C" t47* m4460 (t7 * __this , t47* p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
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
		t336 * L_2 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_2, NULL);
		V_0 = L_2;
		t47* L_3 = p0;
		int32_t L_4 = m1741(L_3, NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		t47* L_5 = p0;
		int32_t L_6 = V_2;
		uint16_t L_7 = m1754(L_5, L_6, NULL);
		V_3 = L_7;
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		t47* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		uint16_t L_10 = m4468(NULL, L_9, (&V_2), (&V_4), NULL);
		V_5 = L_10;
		bool L_11 = p1;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		t336 * L_13 = V_0;
		m3305(L_13, (t47*) &_stringLiteral698, NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = p1;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		uint16_t L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		t336 * L_16 = V_0;
		m3305(L_16, (t47*) &_stringLiteral699, NULL);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = p1;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		t336 * L_19 = V_0;
		m3305(L_19, (t47*) &_stringLiteral700, NULL);
		goto IL_00b5;
	}

IL_009c:
	{
		t336 * L_20 = V_0;
		uint16_t L_21 = V_5;
		m1772(L_20, L_21, NULL);
		uint16_t L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		t336 * L_23 = V_0;
		uint16_t L_24 = V_4;
		m1772(L_23, L_24, NULL);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25-(int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		t336 * L_26 = V_0;
		uint16_t L_27 = V_3;
		m1772(L_26, L_27, NULL);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		t336 * L_31 = V_0;
		t47* L_32 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_31);
		return L_32;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t221_TI_var;
extern "C" void m4461 (t597 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_0 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		__this->f3 = L_0;
		__this->f5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f8 = L_1;
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f7 = L_2;
		__this->f10 = 1;
		t47* L_3 = p0;
		t221* L_4 = ((t221*)SZArrayNew(t221_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 0)) = (uint16_t)((int32_t)92);
		t47* L_5 = m4661(L_3, L_4, NULL);
		p0 = L_5;
		t47* L_6 = p0;
		int32_t L_7 = m1817(L_6, ((int32_t)92), NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		t47* L_9 = p0;
		int32_t L_10 = V_0;
		t47* L_11 = m1781(L_9, L_10, NULL);
		__this->f6 = L_11;
		t47* L_12 = p0;
		int32_t L_13 = V_0;
		t47* L_14 = m1755(L_12, 0, L_13, NULL);
		__this->f4 = L_14;
		goto IL_0084;
	}

IL_0072:
	{
		t47* L_15 = p0;
		__this->f4 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_16 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f6 = L_16;
	}

IL_0084:
	{
		t47* L_17 = (__this->f6);
		t47* L_18 = m3346(L_17, (t47*) &_stringLiteral701, (t47*) &_stringLiteral702, NULL);
		__this->f6 = L_18;
		return;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m4462 (t597 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		int32_t L_1 = m1741(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		t47* L_2 = p0;
		uint16_t L_3 = m1754(L_2, 2, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		t47* L_4 = p0;
		uint16_t L_5 = m1754(L_4, 2, NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return (t47*) &_stringLiteral703;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_6 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		__this->f3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_7;
		__this->f5 = (-1);
		t47* L_8 = p0;
		t47* L_9 = m3346(L_8, (t47*) &_stringLiteral701, (t47*) &_stringLiteral702, NULL);
		__this->f6 = L_9;
		t47* L_10 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f8 = L_10;
		t47* L_11 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f7 = L_11;
		return (t47*)NULL;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t214_TI_var;
extern "C" void m4463 (t597 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_0 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		__this->f3 = L_0;
		__this->f5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f8 = L_1;
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f7 = L_2;
		t47* L_3 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_3;
		__this->f6 = (t47*)NULL;
		t47* L_4 = p0;
		int32_t L_5 = m1741(L_4, NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		t47* L_6 = p0;
		uint16_t L_7 = m1754(L_6, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		t47* L_8 = p0;
		uint16_t L_9 = m1754(L_8, 1, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		t47* L_10 = p0;
		t221* L_11 = ((t221*)SZArrayNew(t221_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)((int32_t)47);
		t47* L_12 = m4661(L_10, L_11, NULL);
		p0 = L_12;
		uint16_t L_13 = ((int32_t)47);
		t7 * L_14 = Box(t214_TI_var, &L_13);
		t47* L_15 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_16 = m217(NULL, L_14, L_15, NULL);
		__this->f6 = L_16;
	}

IL_008f:
	{
		t47* L_17 = (__this->f6);
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		t47* L_18 = p0;
		__this->f6 = L_18;
	}

IL_00a1:
	{
		return;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t1073_TI_var;
extern "C" void m4464 (t597 * __this, int32_t p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t1073_TI_var = il2cpp_codegen_type_info_from_index(1953);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	{
		t47* L_0 = p1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral704, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = p0;
		t47* L_3 = p1;
		t47* L_4 = m4465(__this, L_2, L_3, NULL);
		V_0 = L_4;
		t47* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		t47* L_6 = V_0;
		t1073 * L_7 = (t1073 *)il2cpp_codegen_object_new (t1073_TI_var);
		m4477(L_7, L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0027:
	{
		return;
	}
}
extern TypeInfo* t1131_TI_var;
extern TypeInfo* t597_TI_var;
extern TypeInfo* t709_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t214_TI_var;
extern TypeInfo* t949_TI_var;
extern TypeInfo* t1068_TI_var;
extern "C" t47* m4465 (t597 * __this, int32_t p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1131_TI_var = il2cpp_codegen_type_info_from_index(1956);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t949_TI_var = il2cpp_codegen_type_info_from_index(1835);
		t1068_TI_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t47* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	t47* V_10 = {0};
	bool V_11 = false;
	t949 * V_12 = {0};
	t1073 * V_13 = {0};
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		t47* L_0 = p1;
		t47* L_1 = m3245(L_0, NULL);
		p1 = L_1;
		t47* L_2 = p1;
		int32_t L_3 = m1741(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = p0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = p0;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->f12 = 0;
		return (t47*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = p0;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return (t47*) &_stringLiteral705;
	}

IL_003f:
	{
		V_1 = 0;
		t47* L_9 = p1;
		int32_t L_10 = m1817(L_9, ((int32_t)58), NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return (t47*) &_stringLiteral706;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		t47* L_13 = p1;
		uint16_t L_14 = m1754(L_13, 0, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1131_TI_var);
		uint16_t L_15 = ((t1131_SFs*)t1131_TI_var->static_fields)->f2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		t47* L_16 = p1;
		m4463(__this, L_16, NULL);
		int32_t L_17 = p0;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->f12 = 0;
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		t47* L_18 = p1;
		int32_t L_19 = m1741(L_18, NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		t47* L_20 = p1;
		uint16_t L_21 = m1754(L_20, 0, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		t47* L_22 = p1;
		uint16_t L_23 = m1754(L_22, 1, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		t47* L_24 = p1;
		m4461(__this, L_24, NULL);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->f12 = 0;
		t47* L_25 = p1;
		__this->f6 = L_25;
	}

IL_00d3:
	{
		return (t47*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		t47* L_27 = p1;
		uint16_t L_28 = m1754(L_27, 0, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_29 = m4445(NULL, L_28, NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return (t47*) &_stringLiteral707;
	}

IL_00f3:
	{
		t47* L_30 = p1;
		t47* L_31 = m4462(__this, L_30, NULL);
		V_2 = L_31;
		t47* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		t47* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (t47*)NULL;
	}

IL_0105:
	{
		t47* L_34 = p1;
		int32_t L_35 = V_1;
		t47* L_36 = m1755(L_34, 0, L_35, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_37 = m3303(NULL, NULL);
		t47* L_38 = m4660(L_36, L_37, NULL);
		__this->f3 = L_38;
		t47* L_39 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_40 = m4444(NULL, L_39, NULL);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		t47* L_41 = m3599(NULL, (t47*) &_stringLiteral708, NULL);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
		t47* L_43 = p1;
		int32_t L_44 = m1741(L_43, NULL);
		V_4 = L_44;
		t47* L_45 = p1;
		int32_t L_46 = V_3;
		int32_t L_47 = m3244(L_45, ((int32_t)35), L_46, NULL);
		V_1 = L_47;
		bool L_48 = m4438(__this, NULL);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = (__this->f14);
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		t47* L_51 = p1;
		int32_t L_52 = V_1;
		t47* L_53 = m1781(L_51, L_52, NULL);
		__this->f8 = L_53;
		goto IL_019b;
	}

IL_017d:
	{
		t47* L_54 = p1;
		int32_t L_55 = V_1;
		t47* L_56 = m1781(L_54, ((int32_t)((int32_t)L_55+(int32_t)1)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_57 = m4456(NULL, L_56, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_58 = m207(NULL, (t47*) &_stringLiteral688, L_57, NULL);
		__this->f8 = L_58;
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		t47* L_60 = p1;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		int32_t L_64 = m4662(L_60, ((int32_t)63), L_61, ((int32_t)((int32_t)L_62-(int32_t)L_63)), NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		t47* L_66 = p1;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		t47* L_70 = m1755(L_66, L_67, ((int32_t)((int32_t)L_68-(int32_t)L_69)), NULL);
		__this->f7 = L_70;
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = (__this->f14);
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		t47* L_73 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_74 = m4456(NULL, L_73, NULL);
		__this->f7 = L_74;
	}

IL_01e3:
	{
		t47* L_75 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_76 = m4472(NULL, L_75, NULL);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		t47* L_77 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_78 = ((t597_SFs*)t597_TI_var->static_fields)->f26;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_79 = m1753(NULL, L_77, L_78, NULL);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		t47* L_80 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_81 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_82 = m1753(NULL, L_80, L_81, NULL);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_83-(int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_85-(int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		t47* L_87 = p1;
		int32_t L_88 = V_3;
		uint16_t L_89 = m1754(L_87, L_88, NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		t47* L_90 = p1;
		int32_t L_91 = V_3;
		uint16_t L_92 = m1754(L_90, ((int32_t)((int32_t)L_91+(int32_t)1)), NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return (t47*) &_stringLiteral709;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_93-(int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		t47* L_95 = p1;
		int32_t L_96 = V_3;
		uint16_t L_97 = m1754(L_95, L_96, NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		t47* L_98 = p1;
		int32_t L_99 = V_3;
		uint16_t L_100 = m1754(L_98, ((int32_t)((int32_t)L_99+(int32_t)1)), NULL);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = G_B50_0;
		t47* L_101 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_102 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_103 = m185(NULL, L_101, L_102, NULL);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_105-(int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		t47* L_107 = p1;
		int32_t L_108 = V_3;
		uint16_t L_109 = m1754(L_107, ((int32_t)((int32_t)L_108+(int32_t)2)), NULL);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = G_B57_0;
		V_7 = 0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = p0;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return (t47*) &_stringLiteral710;
	}

IL_02d1:
	{
		t47* L_112 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_113 = ((t597_SFs*)t597_TI_var->static_fields)->f26;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_114 = m1753(NULL, L_112, L_113, NULL);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		t47* L_115 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_116 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_117 = m1753(NULL, L_115, L_116, NULL);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)((int32_t)L_118+(int32_t)2));
	}

IL_02ff:
	{
		t47* L_119 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_120 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_121 = m185(NULL, L_119, L_120, NULL);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		t47* L_123 = p1;
		int32_t L_124 = V_9;
		uint16_t L_125 = m1754(L_123, L_124, NULL);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)((int32_t)L_126+(int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = 0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		t47* L_134 = p1;
		int32_t L_135 = V_3;
		uint16_t L_136 = m1754(L_134, L_135, NULL);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_139-(int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		t47* L_141 = p1;
		int32_t L_142 = V_3;
		uint16_t L_143 = m1754(L_141, ((int32_t)((int32_t)L_142+(int32_t)1)), NULL);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = 0;
		V_7 = 1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		t47* L_144 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_145 = m4472(NULL, L_144, NULL);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		t47* L_146 = p1;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		t47* L_150 = m1755(L_146, L_147, ((int32_t)((int32_t)L_148-(int32_t)L_149)), NULL);
		__this->f6 = L_150;
		__this->f11 = 1;
		return (t47*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		t47* L_152 = p1;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		int32_t L_156 = m4662(L_152, ((int32_t)47), L_153, ((int32_t)((int32_t)L_154-(int32_t)L_155)), NULL);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		t47* L_159 = p1;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		int32_t L_163 = m4662(L_159, ((int32_t)92), L_160, ((int32_t)((int32_t)L_161-(int32_t)L_162)), NULL);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		t47* L_165 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_166 = ((t597_SFs*)t597_TI_var->static_fields)->f26;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_167 = m1753(NULL, L_165, L_166, NULL);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		t47* L_168 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_169 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_170 = m1753(NULL, L_168, L_169, NULL);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->f6 = (t47*) &_stringLiteral702;
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		t47* L_171 = p1;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		t47* L_175 = m1755(L_171, L_172, ((int32_t)((int32_t)L_173-(int32_t)L_174)), NULL);
		__this->f6 = L_175;
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		t47* L_178 = p1;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		int32_t L_182 = m4662(L_178, ((int32_t)64), L_179, ((int32_t)((int32_t)L_180-(int32_t)L_181)), NULL);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		t47* L_184 = p1;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		t47* L_188 = m1755(L_184, L_185, ((int32_t)((int32_t)L_186-(int32_t)L_187)), NULL);
		__this->f9 = L_188;
		int32_t L_189 = V_1;
		V_3 = ((int32_t)((int32_t)L_189+(int32_t)1));
	}

IL_0496:
	{
		__this->f5 = (-1);
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		t47* L_191 = p1;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		int32_t L_195 = m4663(L_191, ((int32_t)58), ((int32_t)((int32_t)L_192-(int32_t)1)), ((int32_t)((int32_t)L_193-(int32_t)L_194)), NULL);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		t47* L_199 = p1;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		t47* L_203 = m1755(L_199, ((int32_t)((int32_t)L_200+(int32_t)1)), ((int32_t)((int32_t)L_201-(int32_t)((int32_t)((int32_t)L_202+(int32_t)1)))), NULL);
		V_10 = L_203;
		t47* L_204 = V_10;
		int32_t L_205 = m1741(L_204, NULL);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		t47* L_206 = V_10;
		t47* L_207 = V_10;
		int32_t L_208 = m1741(L_207, NULL);
		uint16_t L_209 = m1754(L_206, ((int32_t)((int32_t)L_208-(int32_t)1)), NULL);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		t47* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_211 = m3303(NULL, NULL);
		int32_t* L_212 = &(__this->f5);
		bool L_213 = m4531(NULL, L_210, 7, L_211, L_212, NULL);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = (__this->f5);
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = (__this->f5);
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return (t47*) &_stringLiteral711;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = (__this->f5);
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		t47* L_218 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_219 = m4470(NULL, L_218, NULL);
		__this->f5 = L_219;
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = (__this->f5);
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		t47* L_221 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_222 = m4470(NULL, L_221, NULL);
		__this->f5 = L_222;
	}

IL_0583:
	{
		t47* L_223 = p1;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		t47* L_227 = m1755(L_223, L_224, ((int32_t)((int32_t)L_225-(int32_t)L_226)), NULL);
		p1 = L_227;
		t47* L_228 = p1;
		__this->f4 = L_228;
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_230 = ((int32_t)47);
		t7 * L_231 = Box(t214_TI_var, &L_230);
		t47* L_232 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_233 = m217(NULL, L_231, L_232, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_234 = m4467(NULL, L_233, 1, NULL);
		__this->f6 = L_234;
		t47* L_235 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_235;
		goto IL_071c;
	}

IL_05c7:
	{
		t47* L_236 = (__this->f4);
		int32_t L_237 = m1741(L_236, NULL);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		t47* L_238 = (__this->f4);
		uint16_t L_239 = m1754(L_238, 1, NULL);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		t47* L_240 = (__this->f4);
		t47* L_241 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_242 = m207(NULL, L_240, L_241, NULL);
		__this->f6 = L_242;
		t47* L_243 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_243;
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = (__this->f1);
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		t47* L_245 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_246 = m207(NULL, (t47*) &_stringLiteral712, L_245, NULL);
		p1 = L_246;
		t47* L_247 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_247;
		goto IL_071c;
	}

IL_063a:
	{
		t47* L_248 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_249 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_250 = m185(NULL, L_248, L_249, NULL);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->f10 = 1;
		goto IL_071c;
	}

IL_065b:
	{
		t47* L_251 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_252 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_253 = m185(NULL, L_251, L_252, NULL);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		t47* L_254 = (__this->f4);
		int32_t L_255 = m1741(L_254, NULL);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		t47* L_256 = (__this->f4);
		__this->f6 = L_256;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_257 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f4 = L_257;
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		t47* L_258 = (__this->f4);
		int32_t L_259 = m1741(L_258, NULL);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		t47* L_260 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_261 = ((t597_SFs*)t597_TI_var->static_fields)->f24;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_262 = m185(NULL, L_260, L_261, NULL);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		t47* L_263 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_264 = ((t597_SFs*)t597_TI_var->static_fields)->f23;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_265 = m185(NULL, L_263, L_264, NULL);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		t47* L_266 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_267 = ((t597_SFs*)t597_TI_var->static_fields)->f28;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_268 = m185(NULL, L_266, L_267, NULL);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		t47* L_269 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_270 = ((t597_SFs*)t597_TI_var->static_fields)->f25;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_271 = m185(NULL, L_269, L_270, NULL);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		t47* L_272 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_273 = ((t597_SFs*)t597_TI_var->static_fields)->f22;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_274 = m185(NULL, L_272, L_273, NULL);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return (t47*) &_stringLiteral713;
	}

IL_071c:
	{
		t47* L_275 = (__this->f4);
		int32_t L_276 = m1741(L_275, NULL);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		t47* L_277 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_278 = m4441(NULL, L_277, NULL);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		t47* L_280 = (__this->f4);
		int32_t L_281 = m1741(L_280, NULL);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		t47* L_282 = (__this->f4);
		uint16_t L_283 = m1754(L_282, 0, NULL);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		t47* L_284 = (__this->f4);
		t47* L_285 = (__this->f4);
		int32_t L_286 = m1741(L_285, NULL);
		uint16_t L_287 = m1754(L_284, ((int32_t)((int32_t)L_286-(int32_t)1)), NULL);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		t47* L_288 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t949_TI_var);
		bool L_289 = m3743(NULL, L_288, (&V_12), NULL);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		t949 * L_290 = V_12;
		t47* L_291 = m3753(L_290, 1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_292 = m205(NULL, (t47*) &_stringLiteral305, L_291, (t47*) &_stringLiteral306, NULL);
		__this->f4 = L_292;
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = 1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		t1069 * L_294 = m4473(__this, NULL);
		if (((t1068 *)IsInst(L_294, t1068_TI_var)))
		{
			goto IL_07e3;
		}
	}
	{
		t1069 * L_295 = m4473(__this, NULL);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		t47* L_296 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_297 = m205(NULL, (t47*) &_stringLiteral714, L_296, (t47*) &_stringLiteral111, NULL);
		t47* L_298 = m3599(NULL, L_297, NULL);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (t1073 *)NULL;
		t1069 * L_299 = m4473(__this, NULL);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		t1069 * L_300 = m4473(__this, NULL);
		VirtActionInvoker2< t597 *, t1073 ** >::Invoke(4 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, L_300, __this, (&V_13));
	}

IL_081a:
	{
		t1073 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		t1073 * L_302 = V_13;
		t47* L_303 = (t47*)VirtFuncInvoker0< t47* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_302);
		return L_303;
	}

IL_0829:
	{
		t47* L_304 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_305 = ((t597_SFs*)t597_TI_var->static_fields)->f26;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_306 = m1753(NULL, L_304, L_305, NULL);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		t47* L_307 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_308 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_309 = m1753(NULL, L_307, L_308, NULL);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		t47* L_310 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_311 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_312 = m1753(NULL, L_310, L_311, NULL);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		t47* L_313 = (__this->f6);
		t47* L_314 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_315 = m4466(NULL, L_314, NULL);
		t47* L_316 = m4467(NULL, L_313, L_315, NULL);
		__this->f6 = L_316;
	}

IL_0884:
	{
		return (t47*)NULL;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t524_TI_var;
extern const MethodInfo* m4553_MI_var;
extern "C" bool m4466 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t524_TI_var = il2cpp_codegen_type_info_from_index(1855);
		m4553_MI_var = il2cpp_codegen_method_info_from_index(2147483957);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t524 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t47* L_0 = p0;
		V_0 = L_0;
		t47* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t524 * L_2 = ((t597_SFs*)t597_TI_var->static_fields)->f36;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		t524 * L_3 = (t524 *)il2cpp_codegen_object_new (t524_TI_var);
		m4553(L_3, 5, m4553_MI_var);
		V_1 = L_3;
		t524 * L_4 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (t47*) &_stringLiteral498, 0);
		t524 * L_5 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (t47*) &_stringLiteral441, 0);
		t524 * L_6 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, (t47*) &_stringLiteral440, 0);
		t524 * L_7 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, (t47*) &_stringLiteral685, 0);
		t524 * L_8 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (t47*) &_stringLiteral686, 0);
		t524 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		((t597_SFs*)t597_TI_var->static_fields)->f36 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t524 * L_10 = ((t597_SFs*)t597_TI_var->static_fields)->f36;
		t47* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t47*, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t336_TI_var;
extern TypeInfo* t214_TI_var;
extern TypeInfo* t919_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" t47* m4467 (t7 * __this , t47* p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t214_TI_var = il2cpp_codegen_type_info_from_index(277);
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	t919 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	t47* V_8 = {0};
	int32_t V_9 = 0;
	bool V_10 = false;
	t47* V_11 = {0};
	t7 * V_12 = {0};
	uint16_t V_13 = 0x0;
	t7 * V_14 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t47* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_1 = m185(NULL, L_0, (t47*) &_stringLiteral702, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		t47* L_2 = p0;
		return L_2;
	}

IL_0012:
	{
		t336 * L_3 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m1457(L_3, NULL);
		V_0 = L_3;
		bool L_4 = p1;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		t47* L_5 = p0;
		int32_t L_6 = V_1;
		uint16_t L_7 = m1754(L_5, L_6, NULL);
		V_2 = L_7;
		uint16_t L_8 = V_2;
		V_13 = L_8;
		uint16_t L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		uint16_t L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		t336 * L_11 = V_0;
		m1772(L_11, ((int32_t)47), NULL);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		t47* L_13 = p0;
		int32_t L_14 = m1741(L_13, NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		t47* L_15 = p0;
		int32_t L_16 = V_1;
		uint16_t L_17 = m1754(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)), NULL);
		V_3 = L_17;
		t47* L_18 = p0;
		int32_t L_19 = V_1;
		uint16_t L_20 = m1754(L_18, ((int32_t)((int32_t)L_19+(int32_t)2)), NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t214_TI_var);
		uint16_t L_21 = m1814(NULL, L_20, NULL);
		V_4 = L_21;
		uint16_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		uint16_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		uint16_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		t336 * L_26 = V_0;
		m1772(L_26, ((int32_t)47), NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		t336 * L_28 = V_0;
		uint16_t L_29 = V_2;
		m1772(L_28, L_29, NULL);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		t336 * L_30 = V_0;
		uint16_t L_31 = V_2;
		m1772(L_30, L_31, NULL);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		t336 * L_32 = V_0;
		uint16_t L_33 = V_2;
		m1772(L_32, L_33, NULL);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		t47* L_36 = p0;
		int32_t L_37 = m1741(L_36, NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		t336 * L_38 = V_0;
		t47* L_39 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_38);
		p0 = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		t47* L_40 = p0;
		t47* L_41 = m3347(L_40, ((int32_t)92), ((int32_t)47), NULL);
		p0 = L_41;
	}

IL_0101:
	{
		t919 * L_42 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
		m4512(L_42, NULL);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		t47* L_43 = p0;
		int32_t L_44 = V_6;
		int32_t L_45 = m3244(L_43, ((int32_t)47), L_44, NULL);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		t47* L_47 = p0;
		int32_t L_48 = m1741(L_47, NULL);
		V_7 = L_48;
	}

IL_012c:
	{
		t47* L_49 = p0;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		t47* L_53 = m1755(L_49, L_50, ((int32_t)((int32_t)L_51-(int32_t)L_52)), NULL);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)1));
		t47* L_55 = V_8;
		int32_t L_56 = m1741(L_55, NULL);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		t47* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_58 = m185(NULL, L_57, (t47*) &_stringLiteral103, NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		t47* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_60 = m185(NULL, L_59, (t47*) &_stringLiteral691, NULL);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		t919 * L_61 = V_5;
		int32_t L_62 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		t919 * L_64 = V_5;
		int32_t L_65 = V_9;
		VirtActionInvoker1< int32_t >::Invoke(36 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_64, ((int32_t)((int32_t)L_65-(int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		t919 * L_66 = V_5;
		t47* L_67 = V_8;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		t47* L_69 = p0;
		int32_t L_70 = m1741(L_69, NULL);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		t919 * L_71 = V_5;
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return (t47*) &_stringLiteral702;
	}

IL_01c2:
	{
		t336 * L_73 = V_0;
		m4664(L_73, 0, NULL);
		t47* L_74 = p0;
		uint16_t L_75 = m1754(L_74, 0, NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		t336 * L_76 = V_0;
		m1772(L_76, ((int32_t)47), NULL);
	}

IL_01e0:
	{
		V_10 = 1;
		t919 * L_77 = V_5;
		t7 * L_78 = (t7 *)VirtFuncInvoker0< t7 * >::Invoke(40 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			t7 * L_79 = V_12;
			t7 * L_80 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_79);
			V_11 = ((t47*)Castclass(L_80, t47_TI_var));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = 0;
			goto IL_0217;
		}

IL_020e:
		{
			t336 * L_82 = V_0;
			m1772(L_82, ((int32_t)47), NULL);
		}

IL_0217:
		{
			t336 * L_83 = V_0;
			t47* L_84 = V_11;
			m3305(L_83, L_84, NULL);
		}

IL_0220:
		{
			t7 * L_85 = V_12;
			bool L_86 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			t7 * L_87 = V_12;
			V_14 = ((t7 *)IsInst(L_87, t88_TI_var));
			t7 * L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			t7 * L_89 = V_14;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0247:
	{
		t47* L_90 = p0;
		bool L_91 = m3344(L_90, (t47*) &_stringLiteral702, NULL);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		t336 * L_92 = V_0;
		m1772(L_92, ((int32_t)47), NULL);
	}

IL_0260:
	{
		t336 * L_93 = V_0;
		t47* L_94 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_93);
		return L_94;
	}
}
extern TypeInfo* t396_TI_var;
extern TypeInfo* t711_TI_var;
extern TypeInfo* t597_TI_var;
extern TypeInfo* t536_TI_var;
extern "C" uint16_t m4468 (t7 * __this , t47* p0, int32_t* p1, uint16_t* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t536_TI_var = il2cpp_codegen_type_info_from_index(929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t536* V_5 = {0};
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		uint16_t* L_0 = p2;
		*((int16_t*)(L_0)) = (int16_t)0;
		t47* L_1 = p0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		t396 * L_2 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_2, (t47*) &_stringLiteral636, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t* L_3 = p1;
		if ((((int32_t)(*((int32_t*)L_3))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = p1;
		t47* L_5 = p0;
		int32_t L_6 = m1741(L_5, NULL);
		if ((((int32_t)(*((int32_t*)L_4))) < ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t711 * L_7 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4509(L_7, (t47*) &_stringLiteral363, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t47* L_8 = p0;
		int32_t* L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_10 = m4453(NULL, L_8, (*((int32_t*)L_9)), NULL);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		t47* L_11 = p0;
		int32_t* L_12 = p1;
		int32_t* L_13 = p1;
		int32_t L_14 = (*((int32_t*)L_13));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_13;
		uint16_t L_16 = m1754(L_11, L_15, NULL);
		return L_16;
	}

IL_0053:
	{
		int32_t* L_17 = p1;
		int32_t* L_18 = p1;
		int32_t L_19 = (*((int32_t*)L_18));
		V_13 = L_19;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_13;
		V_0 = L_20;
		t47* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t* L_23 = p1;
		int32_t L_24 = (*((int32_t*)L_23));
		V_13 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_13;
		uint16_t L_26 = m1754(L_21, L_25, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_27 = m4450(NULL, L_26, NULL);
		V_1 = L_27;
		t47* L_28 = p0;
		int32_t* L_29 = p1;
		int32_t* L_30 = p1;
		int32_t L_31 = (*((int32_t*)L_30));
		V_13 = L_31;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_13;
		uint16_t L_33 = m1754(L_28, L_32, NULL);
		int32_t L_34 = m4450(NULL, L_33, NULL);
		V_2 = L_34;
		int32_t L_35 = V_1;
		V_3 = L_35;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)4))|(int32_t)L_41))));
	}

IL_00b9:
	{
		int32_t L_42 = V_4;
		V_5 = ((t536*)SZArrayNew(t536_TI_var, L_42));
		V_6 = 0;
		t536* L_43 = V_5;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 0)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44<<(int32_t)4))|(int32_t)L_45))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		t47* L_46 = p0;
		int32_t* L_47 = p1;
		int32_t* L_48 = p1;
		int32_t L_49 = (*((int32_t*)L_48));
		V_13 = L_49;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		bool L_51 = m4453(NULL, L_46, L_50, NULL);
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_00f5:
	{
		t47* L_52 = p0;
		int32_t* L_53 = p1;
		int32_t* L_54 = p1;
		int32_t L_55 = (*((int32_t*)L_54));
		V_13 = L_55;
		*((int32_t*)(L_53)) = (int32_t)((int32_t)((int32_t)L_55+(int32_t)1));
		int32_t L_56 = V_13;
		uint16_t L_57 = m1754(L_52, L_56, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_58 = m4450(NULL, L_57, NULL);
		V_8 = L_58;
		int32_t L_59 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_0120:
	{
		t47* L_60 = p0;
		int32_t* L_61 = p1;
		int32_t* L_62 = p1;
		int32_t L_63 = (*((int32_t*)L_62));
		V_13 = L_63;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = V_13;
		uint16_t L_65 = m1754(L_60, L_64, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		int32_t L_66 = m4450(NULL, L_65, NULL);
		V_9 = L_66;
		t536* L_67 = V_5;
		int32_t L_68 = V_7;
		int32_t L_69 = V_8;
		int32_t L_70 = V_9;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_68)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)4))|(int32_t)L_70))));
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = V_4;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_75 = p1;
		int32_t L_76 = V_0;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_76+(int32_t)3));
		t536* L_77 = V_5;
		int32_t L_78 = 0;
		return (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_78))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		uint8_t L_79 = V_10;
		int32_t L_80 = V_4;
		V_10 = (((uint8_t)((int32_t)((int32_t)L_79>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80+(int32_t)1))&(int32_t)((int32_t)31)))))));
		t536* L_81 = V_5;
		int32_t L_82 = 0;
		uint8_t L_83 = V_10;
		V_11 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_82))&(int32_t)L_83));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_84 = V_11;
		V_11 = ((int32_t)((int32_t)L_84<<(int32_t)6));
		int32_t L_85 = V_11;
		t536* L_86 = V_5;
		int32_t L_87 = V_12;
		int32_t L_88 = L_87;
		V_11 = ((int32_t)((int32_t)L_85|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_86, L_88))&(int32_t)((int32_t)63)))));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_01a4:
	{
		int32_t L_90 = V_12;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_92 = V_11;
		if ((((int32_t)L_92) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_93 = V_11;
		return (((uint16_t)L_93));
	}

IL_01bd:
	{
		int32_t L_94 = V_11;
		V_11 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = p2;
		int32_t L_96 = V_11;
		*((int16_t*)(L_95)) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_96&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320)))));
		int32_t L_97 = V_11;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_97>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296)))));
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m4469 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t1072* L_0 = ((t597_SFs*)t597_TI_var->static_fields)->f31;
		int32_t L_1 = V_0;
		t47* L_2 = (((t1071 *)(t1071 *)SZArrayLdElema(L_0, L_1))->f0);
		t47* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_4 = m185(NULL, L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t1072* L_5 = ((t597_SFs*)t597_TI_var->static_fields)->f31;
		int32_t L_6 = V_0;
		t47* L_7 = (((t1071 *)(t1071 *)SZArrayLdElema(L_5, L_6))->f1);
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t1072* L_10 = ((t597_SFs*)t597_TI_var->static_fields)->f31;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t52 *)L_10)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_11 = ((t597_SFs*)t597_TI_var->static_fields)->f20;
		return L_11;
	}
}
extern TypeInfo* t1069_TI_var;
extern "C" int32_t m4470 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1069_TI_var = il2cpp_codegen_type_info_from_index(1952);
		s_Il2CppMethodIntialized = true;
	}
	t1069 * V_0 = {0};
	{
		t47* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
		t1069 * L_1 = m4489(NULL, L_0, NULL);
		V_0 = L_1;
		t1069 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		t1069 * L_3 = V_0;
		int32_t L_4 = m4485(L_3, NULL);
		return L_4;
	}
}
extern TypeInfo* t597_TI_var;
extern "C" t47* m4471 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return (t47*) &_stringLiteral304;
	}

IL_0011:
	{
		t47* L_1 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_2 = m4469(NULL, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t524_TI_var;
extern const MethodInfo* m4553_MI_var;
extern "C" bool m4472 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t524_TI_var = il2cpp_codegen_type_info_from_index(1855);
		m4553_MI_var = il2cpp_codegen_method_info_from_index(2147483957);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t524 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t47* L_0 = p0;
		V_0 = L_0;
		t47* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t524 * L_2 = ((t597_SFs*)t597_TI_var->static_fields)->f37;
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		t524 * L_3 = (t524 *)il2cpp_codegen_object_new (t524_TI_var);
		m4553(L_3, ((int32_t)10), m4553_MI_var);
		V_1 = L_3;
		t524 * L_4 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (t47*) &_stringLiteral441, 0);
		t524 * L_5 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (t47*) &_stringLiteral440, 0);
		t524 * L_6 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, (t47*) &_stringLiteral498, 0);
		t524 * L_7 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, (t47*) &_stringLiteral500, 0);
		t524 * L_8 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (t47*) &_stringLiteral684, 0);
		t524 * L_9 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, (t47*) &_stringLiteral681, 0);
		t524 * L_10 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, (t47*) &_stringLiteral682, 0);
		t524 * L_11 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, (t47*) &_stringLiteral683, 0);
		t524 * L_12 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, (t47*) &_stringLiteral685, 0);
		t524 * L_13 = V_1;
		VirtActionInvoker2< t47*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, (t47*) &_stringLiteral686, 0);
		t524 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		((t597_SFs*)t597_TI_var->static_fields)->f37 = L_14;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t524 * L_15 = ((t597_SFs*)t597_TI_var->static_fields)->f37;
		t47* L_16 = V_0;
		bool L_17 = (bool)VirtFuncInvoker2< bool, t47*, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return 1;
	}

IL_00b7:
	{
		return 0;
	}
}
extern TypeInfo* t1069_TI_var;
extern TypeInfo* t1068_TI_var;
extern "C" t1069 * m4473 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1069_TI_var = il2cpp_codegen_type_info_from_index(1952);
		t1068_TI_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	{
		t1069 * L_0 = (__this->f32);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		t47* L_1 = m4439(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
		t1069 * L_2 = m4489(NULL, L_1, NULL);
		__this->f32 = L_2;
		t1069 * L_3 = (__this->f32);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		t1068 * L_4 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4426(L_4, (t47*) &_stringLiteral678, NULL);
		__this->f32 = L_4;
	}

IL_0037:
	{
		t1069 * L_5 = (__this->f32);
		return L_5;
	}
}
extern TypeInfo* t1098_TI_var;
extern "C" void m4474 (t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1098_TI_var = il2cpp_codegen_type_info_from_index(1806);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = m4440(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t1098 * L_1 = (t1098 *)il2cpp_codegen_object_new (t1098_TI_var);
		m4502(L_1, (t47*) &_stringLiteral715, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
extern "C" bool m4475 (t7 * __this , t597 * p0, t597 * p1, const MethodInfo* method)
{
	{
		t597 * L_0 = p0;
		t597 * L_1 = p1;
		bool L_2 = m4665(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t700MD.h"


extern "C" void m4476 (t1073 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m3599(NULL, (t47*) &_stringLiteral716, NULL);
		m3270(__this, L_0, NULL);
		return;
	}
}
extern "C" void m4477 (t1073 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m3270(__this, L_0, NULL);
		return;
	}
}
extern "C" void m4478 (t1073 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m4666(__this, L_0, L_1, NULL);
		return;
	}
}
extern "C" void m4479 (t1073 * __this, t921 * p0, t1084  p1, const MethodInfo* method)
{
	{
		t921 * L_0 = p0;
		t1084  L_1 = p1;
		m3486(__this, L_0, L_1, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1074MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t1075MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1100MD.h"


extern "C" void m4480 (t1069 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t7_TI_var;
extern TypeInfo* t1069_TI_var;
extern TypeInfo* t746_TI_var;
extern "C" void m4481 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t7_TI_var = il2cpp_codegen_type_info_from_index(0);
		t1069_TI_var = il2cpp_codegen_type_info_from_index(1952);
		t746_TI_var = il2cpp_codegen_type_info_from_index(1041);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = (t7 *)il2cpp_codegen_object_new (t7_TI_var);
		m162(L_0, NULL);
		((t1069_SFs*)t1069_TI_var->static_fields)->f0 = L_0;
		t746 * L_1 = (t746 *)il2cpp_codegen_object_new (t746_TI_var);
		m4095(L_1, (t47*) &_stringLiteral717, NULL);
		((t1069_SFs*)t1069_TI_var->static_fields)->f4 = L_1;
		t746 * L_2 = (t746 *)il2cpp_codegen_object_new (t746_TI_var);
		m4095(L_2, (t47*) &_stringLiteral718, NULL);
		((t1069_SFs*)t1069_TI_var->static_fields)->f5 = L_2;
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1073_TI_var;
extern "C" void m4482 (t1069 * __this, t597 * p0, t1073 ** p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1073_TI_var = il2cpp_codegen_type_info_from_index(1953);
		s_Il2CppMethodIntialized = true;
	}
	{
		t597 * L_0 = p0;
		t47* L_1 = m4439(L_0, NULL);
		t47* L_2 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_3 = m1753(NULL, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		t47* L_4 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_5 = m1753(NULL, L_4, (t47*) &_stringLiteral678, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		t1073 ** L_6 = p1;
		t1073 * L_7 = (t1073 *)il2cpp_codegen_object_new (t1073_TI_var);
		m4477(L_7, (t47*) &_stringLiteral719, NULL);
		*((t7 **)(L_6)) = (t7 *)L_7;
		goto IL_003f;
	}

IL_003c:
	{
		t1073 ** L_8 = p1;
		*((t7 **)(L_8)) = (t7 *)NULL;
	}

IL_003f:
	{
		return;
	}
}
extern "C" void m4483 (t1069 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m4484 (t1069 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m4485 (t1069 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m4486 (t1069 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern TypeInfo* t1069_TI_var;
extern TypeInfo* t910_TI_var;
extern TypeInfo* t1068_TI_var;
extern TypeInfo* t597_TI_var;
extern "C" void m4487 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1069_TI_var = il2cpp_codegen_type_info_from_index(1952);
		t910_TI_var = il2cpp_codegen_type_info_from_index(1804);
		t1068_TI_var = il2cpp_codegen_type_info_from_index(1957);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	t910 * V_0 = {0};
	t7 * V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
		t910 * L_0 = ((t1069_SFs*)t1069_TI_var->static_fields)->f1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		t910 * L_1 = (t910 *)il2cpp_codegen_object_new (t910_TI_var);
		m4640(L_1, NULL);
		V_0 = L_1;
		t910 * L_2 = V_0;
		t1068 * L_3 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_3, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t597_TI_var);
		t47* L_4 = ((t597_SFs*)t597_TI_var->static_fields)->f21;
		IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
		m4488(NULL, L_2, L_3, L_4, (-1), NULL);
		t910 * L_5 = V_0;
		t1068 * L_6 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_6, NULL);
		t47* L_7 = ((t597_SFs*)t597_TI_var->static_fields)->f22;
		m4488(NULL, L_5, L_6, L_7, ((int32_t)21), NULL);
		t910 * L_8 = V_0;
		t1068 * L_9 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_9, NULL);
		t47* L_10 = ((t597_SFs*)t597_TI_var->static_fields)->f23;
		m4488(NULL, L_8, L_9, L_10, ((int32_t)70), NULL);
		t910 * L_11 = V_0;
		t1068 * L_12 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_12, NULL);
		t47* L_13 = ((t597_SFs*)t597_TI_var->static_fields)->f24;
		m4488(NULL, L_11, L_12, L_13, ((int32_t)80), NULL);
		t910 * L_14 = V_0;
		t1068 * L_15 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_15, NULL);
		t47* L_16 = ((t597_SFs*)t597_TI_var->static_fields)->f25;
		m4488(NULL, L_14, L_15, L_16, ((int32_t)443), NULL);
		t910 * L_17 = V_0;
		t1068 * L_18 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_18, NULL);
		t47* L_19 = ((t597_SFs*)t597_TI_var->static_fields)->f26;
		m4488(NULL, L_17, L_18, L_19, ((int32_t)25), NULL);
		t910 * L_20 = V_0;
		t1068 * L_21 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_21, NULL);
		t47* L_22 = ((t597_SFs*)t597_TI_var->static_fields)->f29;
		m4488(NULL, L_20, L_21, L_22, (-1), NULL);
		t910 * L_23 = V_0;
		t1068 * L_24 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_24, NULL);
		t47* L_25 = ((t597_SFs*)t597_TI_var->static_fields)->f30;
		m4488(NULL, L_23, L_24, L_25, (-1), NULL);
		t910 * L_26 = V_0;
		t1068 * L_27 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_27, NULL);
		t47* L_28 = ((t597_SFs*)t597_TI_var->static_fields)->f27;
		m4488(NULL, L_26, L_27, L_28, ((int32_t)119), NULL);
		t910 * L_29 = V_0;
		t1068 * L_30 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_30, NULL);
		t47* L_31 = ((t597_SFs*)t597_TI_var->static_fields)->f28;
		m4488(NULL, L_29, L_30, L_31, ((int32_t)119), NULL);
		t910 * L_32 = V_0;
		t1068 * L_33 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_33, NULL);
		m4488(NULL, L_32, L_33, (t47*) &_stringLiteral720, ((int32_t)389), NULL);
		t7 * L_34 = ((t1069_SFs*)t1069_TI_var->static_fields)->f0;
		V_1 = L_34;
		t7 * L_35 = V_1;
		m4528(NULL, L_35, NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
			t910 * L_36 = ((t1069_SFs*)t1069_TI_var->static_fields)->f1;
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			t910 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
			((t1069_SFs*)t1069_TI_var->static_fields)->f1 = L_37;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (t910 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		t7 * L_38 = V_1;
		m4529(NULL, L_38, NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0109:
	{
		return;
	}
}
extern TypeInfo* t1070_TI_var;
extern TypeInfo* t1068_TI_var;
extern "C" void m4488 (t7 * __this , t910 * p0, t1069 * p1, t47* p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1070_TI_var = il2cpp_codegen_type_info_from_index(1958);
		t1068_TI_var = il2cpp_codegen_type_info_from_index(1957);
		s_Il2CppMethodIntialized = true;
	}
	t1068 * V_0 = {0};
	{
		t1069 * L_0 = p1;
		t47* L_1 = p2;
		m4484(L_0, L_1, NULL);
		t1069 * L_2 = p1;
		int32_t L_3 = p3;
		m4486(L_2, L_3, NULL);
		t1069 * L_4 = p1;
		if (!((t1070 *)IsInst(L_4, t1070_TI_var)))
		{
			goto IL_0026;
		}
	}
	{
		t910 * L_5 = p0;
		t47* L_6 = p2;
		t1069 * L_7 = p1;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		t1068 * L_8 = (t1068 *)il2cpp_codegen_object_new (t1068_TI_var);
		m4425(L_8, NULL);
		V_0 = L_8;
		t1068 * L_9 = V_0;
		t47* L_10 = p2;
		m4484(L_9, L_10, NULL);
		t1068 * L_11 = V_0;
		int32_t L_12 = p3;
		m4486(L_11, L_12, NULL);
		t910 * L_13 = p0;
		t47* L_14 = p2;
		t1068 * L_15 = V_0;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		t1069 * L_16 = p1;
		t47* L_17 = p2;
		int32_t L_18 = p3;
		VirtActionInvoker2< t47*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
extern TypeInfo* t1069_TI_var;
extern TypeInfo* t709_TI_var;
extern "C" t1069 * m4489 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1069_TI_var = il2cpp_codegen_type_info_from_index(1952);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	{
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (t1069 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t1069_TI_var);
		m4487(NULL, NULL);
		t47* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_2 = m3303(NULL, NULL);
		t47* L_3 = m4660(L_1, L_2, NULL);
		V_0 = L_3;
		t910 * L_4 = ((t1069_SFs*)t1069_TI_var->static_fields)->f1;
		t47* L_5 = V_0;
		t7 * L_6 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((t1069 *)Castclass(L_6, t1069_TI_var));
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1076MD.h"



#include "t1077.h"
#ifndef _MSC_VER
#else
#endif
#include "t1077MD.h"



#include "t939.h"
#ifndef _MSC_VER
#else
#endif
#include "t939MD.h"

#include "t974.h"
#include "t979.h"
#include "t928.h"


extern "C" void m4490 (t939 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" bool m4491 (t939 * __this, t7 * p0, t974 * p1, t979 * p2, int32_t p3, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m4491((t939 *)__this->f9,p0, p1, p2, p3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 *, t7 * __this, t7 * p0, t974 * p1, t979 * p2, int32_t p3, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t7 * p0, t974 * p1, t979 * p2, int32_t p3, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t974 * p1, t979 * p2, int32_t p3, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t939(Il2CppObject* delegate, t7 * p0, t974 * p1, t979 * p2, int32_t p3)
{
	// Marshaling of parameter 'p0' to native representation
	t7 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern TypeInfo* t928_TI_var;
extern "C" t7 * m4492 (t939 * __this, t7 * p0, t974 * p1, t979 * p2, int32_t p3, t213 * p4, t7 * p5, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t928_TI_var = il2cpp_codegen_type_info_from_index(1828);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = p2;
	__d_args[3] = Box(t928_TI_var, &p3);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p4, (Il2CppObject*)p5);
}
extern "C" bool m4493 (t939 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1078.h"
#ifndef _MSC_VER
#else
#endif
#include "t1078MD.h"



extern "C" void m4494 (t1078 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t47* m4495 (t1078 * __this, t1004 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m4495((t1078 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t47* (*FunctionPointerType) (t7 *, t7 * __this, t1004 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t47* (*FunctionPointerType) (t7 * __this, t1004 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t47* (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t47* pinvoke_delegate_wrapper_t1078(Il2CppObject* delegate, t1004 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t1004 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Text.RegularExpressions.Match'."));
}
extern "C" t7 * m4496 (t1078 * __this, t1004 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" t47* m4497 (t1078 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t47*)__result;
}
#include "t1079.h"
#ifndef _MSC_VER
#else
#endif
#include "t1079MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t1079_marshal(const t1079& unmarshaled, t1079_marshaled& marshaled)
{
}
void t1079_marshal_back(const t1079_marshaled& marshaled, t1079& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t1079_marshal_cleanup(t1079_marshaled& marshaled)
{
}
#include "t1080.h"
#ifndef _MSC_VER
#else
#endif
#include "t1080MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1080_marshal(const t1080& unmarshaled, t1080_marshaled& marshaled)
{
}
void t1080_marshal_back(const t1080_marshaled& marshaled, t1080& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1080_marshal_cleanup(t1080_marshaled& marshaled)
{
}
#include "t1081.h"
#ifndef _MSC_VER
#else
#endif
#include "t1081MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
