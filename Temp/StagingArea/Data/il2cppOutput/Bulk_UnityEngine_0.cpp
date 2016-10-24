#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t481.h"
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
#include "t481MD.h"


#include "t52.h"

#include "t482.h"
#ifndef _MSC_VER
#else
#endif
#include "t482MD.h"

#include "t485.h"
#include "t53.h"
#include "t483MD.h"


extern "C" void m2154 (t482 * __this, const MethodInfo* method)
{
	{
		m2601(__this, NULL);
		return;
	}
}
extern "C" t485 * m2155 (t482 * __this, const MethodInfo* method)
{
	typedef t485 * (*m2155_ftn) (t482 *);
	static m2155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2156 (t482 * __this, const MethodInfo* method)
{
	typedef void (*m2156_ftn) (t482 *);
	static m2156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
#include "t484.h"
#ifndef _MSC_VER
#else
#endif
#include "t484MD.h"

#include "t66.h"
#include "t47.h"
#include "t347.h"
#include "UnityEngine_ArrayTypes.h"
#include "t485MD.h"


extern "C" void m2157 (t484 * __this, const MethodInfo* method)
{
	{
		m2601(__this, NULL);
		return;
	}
}
extern "C" t66 * m2158 (t484 * __this, const MethodInfo* method)
{
	{
		t485 * L_0 = (__this->f1);
		t47* L_1 = (__this->f2);
		t347 * L_2 = (__this->f3);
		t66 * L_3 = m2160(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
extern "C" t662* m2159 (t484 * __this, const MethodInfo* method)
{
	{
		t485 * L_0 = (__this->f1);
		t47* L_1 = (__this->f2);
		t347 * L_2 = (__this->f3);
		t662* L_3 = m2162(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t64.h"
#include "t58.h"
#include "t396.h"
#include "t64MD.h"
#include "t47MD.h"
#include "t396MD.h"


extern TypeInfo* t64_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" t66 * m2160 (t485 * __this, t47* p0, t347 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t64_TI_var = il2cpp_codegen_type_info_from_index(8);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t64 * L_1 = (t64 *)il2cpp_codegen_object_new (t64_TI_var);
		m3222(L_1, (t47*) &_stringLiteral120, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t47* L_2 = p0;
		int32_t L_3 = m1741(L_2, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		t396 * L_4 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_4, (t47*) &_stringLiteral121, NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t347 * L_5 = p1;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		t64 * L_6 = (t64 *)il2cpp_codegen_object_new (t64_TI_var);
		m3222(L_6, (t47*) &_stringLiteral122, NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		t47* L_7 = p0;
		t347 * L_8 = p1;
		t66 * L_9 = m2161(__this, L_7, L_8, NULL);
		return L_9;
	}
}
extern "C" t66 * m2161 (t485 * __this, t47* p0, t347 * p1, const MethodInfo* method)
{
	typedef t66 * (*m2161_ftn) (t485 *, t47*, t347 *);
	static m2161_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2161_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t662* m2162 (t485 * __this, t47* p0, t347 * p1, const MethodInfo* method)
{
	typedef t662* (*m2162_ftn) (t485 *, t47*, t347 *);
	static m2162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
#include "t486.h"
#ifndef _MSC_VER
#else
#endif
#include "t486MD.h"



#include "t152.h"
#ifndef _MSC_VER
#else
#endif
#include "t152MD.h"

#include "mscorlib_ArrayTypes.h"


extern "C" int32_t m2163 (t152 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2164 (t152 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t47* m2165 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef t47* (*m2165_ftn) (int32_t);
	static m2165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m2166 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef int32_t (*m2166_ftn) (t47*);
	static m2166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m2167 (t7 * __this , t48* p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	t47* V_1 = {0};
	t48* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		t48* L_0 = p0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		t48* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_1 = (*(t47**)(t47**)SZArrayLdElema(L_1, L_3));
		t47* L_4 = V_1;
		int32_t L_5 = m2166(NULL, L_4, NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		t48* L_11 = V_2;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((t52 *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
extern "C" int32_t m1571 (t7 * __this , t152  p0, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&p0)->f0);
		return L_0;
	}
}
extern "C" t152  m1568 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	t152  V_0 = {0};
	{
		int32_t L_0 = p0;
		(&V_0)->f0 = L_0;
		t152  L_1 = V_0;
		return L_1;
	}
}
#include "t375.h"
#ifndef _MSC_VER
#else
#endif
#include "t375MD.h"



#include "t487.h"
#ifndef _MSC_VER
#else
#endif
#include "t487MD.h"



#include "t488.h"
#ifndef _MSC_VER
#else
#endif
#include "t488MD.h"



extern "C" t47* m2168 (t7 * __this , const MethodInfo* method)
{
	typedef t47* (*m2168_ftn) ();
	static m2168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_deviceUniqueIdentifier()");
	return _il2cpp_icall_func();
}
#include "t59.h"
#ifndef _MSC_VER
#else
#endif
#include "t59MD.h"

#include "t60.h"
#include "t489MD.h"


extern "C" void m164 (t59 * __this, float p0, const MethodInfo* method)
{
	{
		m2714(__this, NULL);
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
void t59_marshal(const t59& unmarshaled, t59_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t59_marshal_back(const t59_marshaled& marshaled, t59& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
void t59_marshal_cleanup(t59_marshaled& marshaled)
{
}
#include "t490.h"
#ifndef _MSC_VER
#else
#endif
#include "t490MD.h"



extern "C" void m2169 (t490 * __this, const MethodInfo* method)
{
	{
		m2714(__this, NULL);
		return;
	}
}
#include "t389.h"
#ifndef _MSC_VER
#else
#endif
#include "t389MD.h"



extern "C" void m1829 (t389 * __this, const MethodInfo* method)
{
	{
		m2714(__this, NULL);
		return;
	}
}
#include "t63.h"
#ifndef _MSC_VER
#else
#endif
#include "t63MD.h"

#include "t7.h"
#include "t7MD.h"


extern "C" void m2170 (t63 * __this, const MethodInfo* method)
{
	{
		m2714(__this, NULL);
		return;
	}
}
extern "C" void m2171 (t63 * __this, const MethodInfo* method)
{
	typedef void (*m2171_ftn) (t63 *);
	static m2171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2172 (t63 * __this, const MethodInfo* method)
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
		m2171(__this, NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Coroutine
void t63_marshal(const t63& unmarshaled, t63_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t63_marshal_back(const t63_marshaled& marshaled, t63& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
void t63_marshal_cleanup(t63_marshaled& marshaled)
{
}
#include "t491.h"
#ifndef _MSC_VER
#else
#endif
#include "t491MD.h"

#include "t66MD.h"


extern "C" void m2173 (t491 * __this, const MethodInfo* method)
{
	{
		m2675(__this, NULL);
		m2174(NULL, __this, NULL);
		return;
	}
}
extern "C" void m2174 (t7 * __this , t491 * p0, const MethodInfo* method)
{
	typedef void (*m2174_ftn) (t491 *);
	static m2174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(p0);
}
extern "C" t491 * m2175 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef t491 * (*m2175_ftn) (t47*);
	static m2175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2175_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" t491 * m2176 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	{
		t347 * L_0 = p0;
		t491 * L_1 = m2177(NULL, L_0, NULL);
		return L_1;
	}
}
extern "C" t491 * m2177 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	typedef t491 * (*m2177_ftn) (t347 *);
	static m2177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(p0);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void t491_marshal(const t491& unmarshaled, t491_marshaled& marshaled)
{
}
void t491_marshal_back(const t491_marshaled& marshaled, t491& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void t491_marshal_cleanup(t491_marshaled& marshaled)
{
}
#include "t492.h"
#ifndef _MSC_VER
#else
#endif
#include "t492MD.h"

#include "t54.h"
#include "t327.h"
#include "t58MD.h"
#include "t60MD.h"
#include "t327MD.h"


extern "C" float m2178 (t492 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2179 (t492 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m2180 (t492 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2181 (t492 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m2182 (t492 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2183 (t492 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m2184 (t492 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2185 (t492 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m2186 (t492 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2187 (t492 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m2188 (t492 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2189 (t492 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" int32_t m2190 (t492 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m2191 (t492 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" int32_t m2192 (t492 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m2193 (t492 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern "C" int32_t m2194 (t492 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = m2186(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = m3223((&V_0), NULL);
		int32_t L_2 = m2188(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = m3223((&V_1), NULL);
		int32_t L_4 = m2190(__this, NULL);
		V_2 = L_4;
		int32_t L_5 = m3223((&V_2), NULL);
		int32_t L_6 = m2192(__this, NULL);
		V_3 = L_6;
		int32_t L_7 = m3223((&V_3), NULL);
		float L_8 = m2178(__this, NULL);
		V_4 = L_8;
		int32_t L_9 = m3224((&V_4), NULL);
		float L_10 = m2180(__this, NULL);
		V_5 = L_10;
		int32_t L_11 = m3224((&V_5), NULL);
		float L_12 = m2182(__this, NULL);
		V_6 = L_12;
		int32_t L_13 = m3224((&V_6), NULL);
		float L_14 = m2184(__this, NULL);
		V_7 = L_14;
		int32_t L_15 = m3224((&V_7), NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
extern TypeInfo* t492_TI_var;
extern TypeInfo* t327_TI_var;
extern "C" bool m2195 (t492 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t492_TI_var = il2cpp_codegen_type_info_from_index(893);
		t327_TI_var = il2cpp_codegen_type_info_from_index(628);
		s_Il2CppMethodIntialized = true;
	}
	t492  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t327  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t492_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t492 *)((t492 *)UnBox (L_1, t492_TI_var))));
		int32_t L_2 = m2186(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = m2186((&V_0), NULL);
		bool L_4 = m3225((&V_1), L_3, NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = m2188(__this, NULL);
		V_2 = L_5;
		int32_t L_6 = m2188((&V_0), NULL);
		bool L_7 = m3225((&V_2), L_6, NULL);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = m2190(__this, NULL);
		V_3 = L_8;
		int32_t L_9 = m2190((&V_0), NULL);
		bool L_10 = m3225((&V_3), L_9, NULL);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = m2192(__this, NULL);
		V_4 = L_11;
		int32_t L_12 = m2192((&V_0), NULL);
		bool L_13 = m3225((&V_4), L_12, NULL);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = m2178(__this, NULL);
		float L_15 = m2180(__this, NULL);
		float L_16 = m2182(__this, NULL);
		float L_17 = m2184(__this, NULL);
		m1626((&V_5), L_14, L_15, L_16, L_17, NULL);
		float L_18 = m2178((&V_0), NULL);
		float L_19 = m2180((&V_0), NULL);
		float L_20 = m2182((&V_0), NULL);
		float L_21 = m2184((&V_0), NULL);
		t327  L_22 = {0};
		m1626(&L_22, L_18, L_19, L_20, L_21, NULL);
		t327  L_23 = L_22;
		t7 * L_24 = Box(t327_TI_var, &L_23);
		bool L_25 = m2502((&V_5), L_24, NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
extern "C" bool m2196 (t7 * __this , t492  p0, t492  p1, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = m2186((&p0), NULL);
		int32_t L_1 = m2186((&p1), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = m2188((&p0), NULL);
		int32_t L_3 = m2188((&p1), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = m2190((&p0), NULL);
		int32_t L_5 = m2190((&p1), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = m2192((&p0), NULL);
		int32_t L_7 = m2192((&p1), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = m2178((&p0), NULL);
		float L_9 = m2180((&p0), NULL);
		float L_10 = m2182((&p0), NULL);
		float L_11 = m2184((&p0), NULL);
		t327  L_12 = {0};
		m1626(&L_12, L_8, L_9, L_10, L_11, NULL);
		float L_13 = m2178((&p1), NULL);
		float L_14 = m2180((&p1), NULL);
		float L_15 = m2182((&p1), NULL);
		float L_16 = m2184((&p1), NULL);
		t327  L_17 = {0};
		m1626(&L_17, L_13, L_14, L_15, L_16, NULL);
		bool L_18 = m2507(NULL, L_12, L_17, NULL);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
extern "C" bool m2197 (t7 * __this , t492  p0, t492  p1, const MethodInfo* method)
{
	{
		t492  L_0 = p0;
		t492  L_1 = p1;
		bool L_2 = m2196(NULL, L_0, L_1, NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t350.h"
#ifndef _MSC_VER
#else
#endif
#include "t350MD.h"



extern "C" int32_t m1565 (t350 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1565_ftn) (t350 *);
	static m1565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1566 (t350 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1566_ftn) (t350 *);
	static m1566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
#include "t368.h"
#ifndef _MSC_VER
#else
#endif
#include "t368MD.h"



extern "C" int32_t m1648 (t7 * __this , const MethodInfo* method)
{
	typedef int32_t (*m1648_ftn) ();
	static m1648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m1649 (t7 * __this , const MethodInfo* method)
{
	typedef int32_t (*m1649_ftn) ();
	static m1649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
extern "C" float m1921 (t7 * __this , const MethodInfo* method)
{
	typedef float (*m1921_ftn) ();
	static m1921_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1921_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
#include "t233.h"
#ifndef _MSC_VER
#else
#endif
#include "t233MD.h"



extern "C" int32_t m2198 (t7 * __this , t233 * p0, const MethodInfo* method)
{
	typedef int32_t (*m2198_ftn) (t233 *);
	static m2198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m2199 (t7 * __this , t233 * p0, const MethodInfo* method)
{
	typedef int32_t (*m2199_ftn) (t233 *);
	static m2199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m2200 (t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m2198(NULL, __this, NULL);
		return L_0;
	}
}
extern "C" int32_t m2201 (t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m2199(NULL, __this, NULL);
		return L_0;
	}
}
#include "t180.h"
#ifndef _MSC_VER
#else
#endif
#include "t180MD.h"

#include "t157.h"


extern "C" t180 * m1615 (t7 * __this , const MethodInfo* method)
{
	typedef t180 * (*m1615_ftn) ();
	static m1615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1615_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
extern "C" t157  m1709 (t180 * __this, float p0, float p1, const MethodInfo* method)
{
	typedef t157  (*m1709_ftn) (t180 *, float, float);
	static m1709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, p0, p1);
}
#include "t493.h"
#ifndef _MSC_VER
#else
#endif
#include "t493MD.h"



extern "C" int32_t m2202 (t7 * __this , t493 * p0, const MethodInfo* method)
{
	typedef int32_t (*m2202_ftn) (t493 *);
	static m2202_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2202_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m2203 (t7 * __this , t493 * p0, const MethodInfo* method)
{
	typedef int32_t (*m2203_ftn) (t493 *);
	static m2203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m2204 (t493 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m2202(NULL, __this, NULL);
		return L_0;
	}
}
extern "C" int32_t m2205 (t493 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m2203(NULL, __this, NULL);
		return L_0;
	}
}
#include "t494.h"
#ifndef _MSC_VER
#else
#endif
#include "t494MD.h"



#include "t495.h"
#ifndef _MSC_VER
#else
#endif
#include "t495MD.h"



#include "t496.h"
#ifndef _MSC_VER
#else
#endif
#include "t496MD.h"

#include "t67.h"


extern "C" t495 * m2206 (t496 * __this, t67  p0, const MethodInfo* method)
{
	{
		t495 * L_0 = m2207(NULL, __this, (&p0), NULL);
		return L_0;
	}
}
extern "C" t495 * m2207 (t7 * __this , t496 * p0, t67 * p1, const MethodInfo* method)
{
	typedef t495 * (*m2207_ftn) (t496 *, t67 *);
	static m2207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t497.h"
#ifndef _MSC_VER
#else
#endif
#include "t497MD.h"



extern "C" void m2208 (t497 * __this, t157  p0, float p1, const MethodInfo* method)
{
	{
		t157  L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t498.h"
#ifndef _MSC_VER
#else
#endif
#include "t498MD.h"



extern "C" void m2209 (t498 * __this, float p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t499.h"
#ifndef _MSC_VER
#else
#endif
#include "t499MD.h"



extern "C" void m2210 (t499 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m2211(__this, NULL);
		return;
	}
}
extern "C" void m2211 (t499 * __this, const MethodInfo* method)
{
	typedef void (*m2211_ftn) (t499 *);
	static m2211_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2211_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2212 (t499 * __this, const MethodInfo* method)
{
	typedef void (*m2212_ftn) (t499 *);
	static m2212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2213 (t499 * __this, const MethodInfo* method)
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
		m2212(__this, NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Gradient
void t499_marshal(const t499& unmarshaled, t499_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t499_marshal_back(const t499_marshaled& marshaled, t499& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void t499_marshal_cleanup(t499_marshaled& marshaled)
{
}
#include "t500.h"
#ifndef _MSC_VER
#else
#endif
#include "t500MD.h"



extern "C" void m2214 (t500 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
#include "t501.h"
#ifndef _MSC_VER
#else
#endif
#include "t501MD.h"

#include "t226.h"
#include "t213.h"


extern "C" void m2215 (t501 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2216 (t501 * __this, int32_t p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2216((t501 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t501(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m2217 (t501 * __this, int32_t p0, t213 * p1, t7 * p2, const MethodInfo* method)
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
extern "C" void m2218 (t501 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t502.h"
#ifndef _MSC_VER
#else
#endif
#include "t502MD.h"

#include "t505.h"
#include "t503.h"
#include "t504.h"
#include "t511.h"
#include "t516.h"
#include "t507.h"
#include "t227.h"
#include "t382.h"
#include "t518MD.h"
#include "t503MD.h"
#include "t504MD.h"
#include "t505MD.h"
#include "t509MD.h"
#include "t227MD.h"
#include "t506MD.h"


extern TypeInfo* t502_TI_var;
extern TypeInfo* t504_TI_var;
extern TypeInfo* t505_TI_var;
extern "C" void m2219 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t502_TI_var = il2cpp_codegen_type_info_from_index(894);
		t504_TI_var = il2cpp_codegen_type_info_from_index(895);
		t505_TI_var = il2cpp_codegen_type_info_from_index(896);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t502_SFs*)t502_TI_var->static_fields)->f0 = (10.0f);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (t47*) &_stringLiteral123);
		((t502_SFs*)t502_TI_var->static_fields)->f4 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (t47*) &_stringLiteral124);
		((t502_SFs*)t502_TI_var->static_fields)->f5 = L_1;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (t47*) &_stringLiteral125);
		((t502_SFs*)t502_TI_var->static_fields)->f6 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (t47*) &_stringLiteral126);
		((t502_SFs*)t502_TI_var->static_fields)->f7 = L_3;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (t47*) &_stringLiteral127);
		((t502_SFs*)t502_TI_var->static_fields)->f8 = L_4;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (t47*) &_stringLiteral128);
		((t502_SFs*)t502_TI_var->static_fields)->f9 = L_5;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (t47*) &_stringLiteral129);
		((t502_SFs*)t502_TI_var->static_fields)->f10 = L_6;
		t504 * L_7 = (t504 *)il2cpp_codegen_object_new (t504_TI_var);
		m3218(L_7, NULL);
		((t502_SFs*)t502_TI_var->static_fields)->f11 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(t505_TI_var);
		t505  L_8 = m3226(NULL, NULL);
		m2220(NULL, L_8, NULL);
		return;
	}
}
extern TypeInfo* t502_TI_var;
extern "C" void m2220 (t7 * __this , t505  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t502_TI_var = il2cpp_codegen_type_info_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		t505  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		((t502_SFs*)t502_TI_var->static_fields)->f12 = L_0;
		return;
	}
}
extern TypeInfo* t518_TI_var;
extern TypeInfo* t502_TI_var;
extern "C" void m2221 (t7 * __this , t503 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		t502_TI_var = il2cpp_codegen_type_info_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		m2277(NULL, NULL);
		t503 * L_0 = p0;
		bool L_1 = m1450(NULL, L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		t503 * L_2 = m2271(NULL, NULL);
		p0 = L_2;
	}

IL_0017:
	{
		t503 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		((t502_SFs*)t502_TI_var->static_fields)->f2 = L_3;
		t503 * L_4 = p0;
		m2336(L_4, NULL);
		return;
	}
}
extern TypeInfo* t518_TI_var;
extern TypeInfo* t502_TI_var;
extern "C" t503 * m2222 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		t502_TI_var = il2cpp_codegen_type_info_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		m2277(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		t503 * L_0 = ((t502_SFs*)t502_TI_var->static_fields)->f2;
		return L_0;
	}
}
extern "C" void m2223 (t7 * __this , bool p0, const MethodInfo* method)
{
	typedef void (*m2223_ftn) (bool);
	static m2223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(p0);
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t502_TI_var;
extern TypeInfo* t663_TI_var;
extern "C" void m2224 (t7 * __this , t501 * p0, int32_t p1, t503 * p2, int32_t p3, float p4, float p5, t511 * p6, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t502_TI_var = il2cpp_codegen_type_info_from_index(894);
		t663_TI_var = il2cpp_codegen_type_info_from_index(899);
		s_Il2CppMethodIntialized = true;
	}
	t503 * V_0 = {0};
	t663* V_1 = {0};
	{
		int32_t L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		m2229(NULL, L_0, 1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		t503 * L_1 = m2222(NULL, NULL);
		V_0 = L_1;
		t227 * L_2 = m2402(NULL, NULL);
		int32_t L_3 = m2398(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = p3;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		t663* L_5 = ((t663*)SZArrayNew(t663_TI_var, 2));
		float L_6 = p4;
		t516 * L_7 = m2225(NULL, L_6, NULL);
		ArrayElementTypeCheck (L_5, L_7);
		*((t516 **)(t516 **)SZArrayLdElema(L_5, 0)) = (t516 *)L_7;
		t663* L_8 = L_5;
		float L_9 = p5;
		t516 * L_10 = m2226(NULL, L_9, NULL);
		ArrayElementTypeCheck (L_8, L_10);
		*((t516 **)(t516 **)SZArrayLdElema(L_8, 1)) = (t516 *)L_10;
		V_1 = L_8;
		int32_t L_11 = p1;
		t511 * L_12 = p6;
		t663* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		m2231(NULL, L_11, L_12, L_13, NULL);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = p1;
		t511 * L_15 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		m2231(NULL, L_14, L_15, (t663*)(t663*)NULL, NULL);
	}

IL_0056:
	{
		t503 * L_16 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		m2221(NULL, L_16, NULL);
		t501 * L_17 = p0;
		int32_t L_18 = p1;
		VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32) */, L_17, L_18);
		t227 * L_19 = m2402(NULL, NULL);
		int32_t L_20 = m2398(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		m2232(NULL, NULL);
	}

IL_0078:
	{
		t503 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		m2221(NULL, L_21, NULL);
		return;
	}
}
#include "t506.h"
#ifndef _MSC_VER
#else
#endif

#include "t515.h"
#include "t516MD.h"


extern TypeInfo* t60_TI_var;
extern TypeInfo* t516_TI_var;
extern "C" t516 * m2225 (t7 * __this , float p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		t516_TI_var = il2cpp_codegen_type_info_from_index(900);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p0;
		float L_1 = L_0;
		t7 * L_2 = Box(t60_TI_var, &L_1);
		t516 * L_3 = (t516 *)il2cpp_codegen_object_new (t516_TI_var);
		m2267(L_3, 0, L_2, NULL);
		return L_3;
	}
}
extern TypeInfo* t60_TI_var;
extern TypeInfo* t516_TI_var;
extern "C" t516 * m2226 (t7 * __this , float p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		t516_TI_var = il2cpp_codegen_type_info_from_index(900);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p0;
		float L_1 = L_0;
		t7 * L_2 = Box(t60_TI_var, &L_1);
		t516 * L_3 = (t516 *)il2cpp_codegen_object_new (t516_TI_var);
		m2267(L_3, 1, L_2, NULL);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t507MD.h"

#include "t508.h"
#include "t661.h"
#include "t508MD.h"
#include "t661MD.h"


extern TypeInfo* t508_TI_var;
extern TypeInfo* t504_TI_var;
extern "C" void m2227 (t507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t508_TI_var = il2cpp_codegen_type_info_from_index(901);
		t504_TI_var = il2cpp_codegen_type_info_from_index(895);
		s_Il2CppMethodIntialized = true;
	}
	{
		t508 * L_0 = (t508 *)il2cpp_codegen_object_new (t508_TI_var);
		m2252(L_0, NULL);
		__this->f0 = L_0;
		t504 * L_1 = (t504 *)il2cpp_codegen_object_new (t504_TI_var);
		m3218(L_1, NULL);
		__this->f1 = L_1;
		t508 * L_2 = (t508 *)il2cpp_codegen_object_new (t508_TI_var);
		m2252(L_2, NULL);
		__this->f2 = L_2;
		m162(__this, NULL);
		t504 * L_3 = (__this->f1);
		t508 * L_4 = (__this->f0);
		VirtActionInvoker1< t7 * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_3, L_4);
		return;
	}
}
#include "t509.h"
#ifndef _MSC_VER
#else
#endif

#include "t510.h"
#include "t219.h"
#include "t512.h"
#include "t687.h"
#include "t513.h"
#include "t511MD.h"
#include "t510MD.h"
#include "t219MD.h"
#include "t512MD.h"
#include "t341MD.h"
#include "t513MD.h"
#include "t687MD.h"


extern TypeInfo* t510_TI_var;
extern TypeInfo* t509_TI_var;
extern TypeInfo* t507_TI_var;
extern const MethodInfo* m3227_MI_var;
extern "C" void m2228 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t510_TI_var = il2cpp_codegen_type_info_from_index(903);
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t507_TI_var = il2cpp_codegen_type_info_from_index(902);
		m3227_MI_var = il2cpp_codegen_method_info_from_index(2147483887);
		s_Il2CppMethodIntialized = true;
	}
	{
		t510 * L_0 = (t510 *)il2cpp_codegen_object_new (t510_TI_var);
		m3227(L_0, m3227_MI_var);
		((t509_SFs*)t509_TI_var->static_fields)->f0 = L_0;
		t510 * L_1 = (t510 *)il2cpp_codegen_object_new (t510_TI_var);
		m3227(L_1, m3227_MI_var);
		((t509_SFs*)t509_TI_var->static_fields)->f1 = L_1;
		t507 * L_2 = (t507 *)il2cpp_codegen_object_new (t507_TI_var);
		m2227(L_2, NULL);
		((t509_SFs*)t509_TI_var->static_fields)->f2 = L_2;
		t219  L_3 = {0};
		m1826(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		((t509_SFs*)t509_TI_var->static_fields)->f3 = L_3;
		return;
	}
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t507_TI_var;
extern "C" t507 * m2229 (t7 * __this , int32_t p0, bool p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t507_TI_var = il2cpp_codegen_type_info_from_index(902);
		s_Il2CppMethodIntialized = true;
	}
	t510 * V_0 = {0};
	t507 * V_1 = {0};
	t510 * G_B3_0 = {0};
	{
		bool L_0 = p1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t510 * L_1 = ((t509_SFs*)t509_TI_var->static_fields)->f1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t510 * L_2 = ((t509_SFs*)t509_TI_var->static_fields)->f0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		t510 * L_3 = V_0;
		int32_t L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, t507 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&) */, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		t507 * L_6 = (t507 *)il2cpp_codegen_object_new (t507_TI_var);
		m2227(L_6, NULL);
		V_1 = L_6;
		t510 * L_7 = V_0;
		int32_t L_8 = p0;
		t507 * L_9 = V_1;
		VirtActionInvoker2< int32_t, t507 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1) */, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_10 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_11 = V_1;
		t508 * L_12 = (L_11->f0);
		L_10->f0 = L_12;
		t507 * L_13 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_14 = V_1;
		t504 * L_15 = (L_14->f1);
		L_13->f1 = L_15;
		t507 * L_16 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_17 = V_1;
		t508 * L_18 = (L_17->f2);
		L_16->f2 = L_18;
		t507 * L_19 = V_1;
		return L_19;
	}
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t508_TI_var;
extern "C" void m2230 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t508_TI_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	t507 * V_0 = {0};
	t508 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_1 = m2229(NULL, L_0, 0, NULL);
		V_0 = L_1;
		t227 * L_2 = m2402(NULL, NULL);
		int32_t L_3 = m2398(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_4 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_5 = V_0;
		t508 * L_6 = (t508 *)il2cpp_codegen_object_new (t508_TI_var);
		m2252(L_6, NULL);
		t508 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t508 * L_8 = V_1;
		L_4->f0 = L_8;
		t507 * L_9 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t504 * L_10 = (L_9->f1);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_10);
		t507 * L_11 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t504 * L_12 = (L_11->f1);
		t507 * L_13 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_14 = (L_13->f0);
		VirtActionInvoker1< t7 * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_12, L_14);
		t507 * L_15 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_16 = V_0;
		t508 * L_17 = (t508 *)il2cpp_codegen_object_new (t508_TI_var);
		m2252(L_17, NULL);
		t508 * L_18 = L_17;
		V_1 = L_18;
		L_16->f2 = L_18;
		t508 * L_19 = V_1;
		L_15->f2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_20 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_21 = V_0;
		t508 * L_22 = (L_21->f0);
		L_20->f0 = L_22;
		t507 * L_23 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_24 = V_0;
		t504 * L_25 = (L_24->f1);
		L_23->f1 = L_25;
		t507 * L_26 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_27 = V_0;
		t508 * L_28 = (L_27->f2);
		L_26->f2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t508_TI_var;
extern "C" void m2231 (t7 * __this , int32_t p0, t511 * p1, t663* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t508_TI_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	t507 * V_0 = {0};
	t508 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_1 = m2229(NULL, L_0, 1, NULL);
		V_0 = L_1;
		t227 * L_2 = m2402(NULL, NULL);
		int32_t L_3 = m2398(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_4 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_5 = V_0;
		t508 * L_6 = (t508 *)il2cpp_codegen_object_new (t508_TI_var);
		m2252(L_6, NULL);
		t508 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t508 * L_8 = V_1;
		L_4->f0 = L_8;
		t507 * L_9 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_10 = (L_9->f0);
		t511 * L_11 = p1;
		m2243(L_10, L_11, NULL);
		t507 * L_12 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_13 = (L_12->f0);
		int32_t L_14 = p0;
		L_13->f16 = L_14;
		t663* L_15 = p2;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_16 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_17 = (L_16->f0);
		t663* L_18 = p2;
		VirtActionInvoker1< t663* >::Invoke(10 /* System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_19 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t504 * L_20 = (L_19->f1);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_20);
		t507 * L_21 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t504 * L_22 = (L_21->f1);
		t507 * L_23 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_24 = (L_23->f0);
		VirtActionInvoker1< t7 * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_24);
		t507 * L_25 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_26 = V_0;
		t508 * L_27 = (t508 *)il2cpp_codegen_object_new (t508_TI_var);
		m2252(L_27, NULL);
		t508 * L_28 = L_27;
		V_1 = L_28;
		L_26->f2 = L_28;
		t508 * L_29 = V_1;
		L_25->f2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_30 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_31 = V_0;
		t508 * L_32 = (L_31->f0);
		L_30->f0 = L_32;
		t507 * L_33 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_34 = V_0;
		t504 * L_35 = (L_34->f1);
		L_33->f1 = L_35;
		t507 * L_36 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t507 * L_37 = V_0;
		t508 * L_38 = (L_37->f2);
		L_36->f2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t341_TI_var;
extern "C" void m2232 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_0 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_1 = (L_0->f0);
		int32_t L_2 = (L_1->f16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_3 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_4 = (L_3->f0);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_4);
		t507 * L_5 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_6 = (L_5->f0);
		int32_t L_7 = m1648(NULL, NULL);
		t507 * L_8 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_9 = (L_8->f0);
		float L_10 = (((t512 *)L_9)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_11 = m1920(NULL, (((float)L_7)), L_10, NULL);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_11);
		t507 * L_12 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_13 = (L_12->f0);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_13);
		t507 * L_14 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_15 = (L_14->f0);
		int32_t L_16 = m1649(NULL, NULL);
		t507 * L_17 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_18 = (L_17->f0);
		float L_19 = (((t512 *)L_18)->f3);
		float L_20 = m1920(NULL, (((float)L_16)), L_19, NULL);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_15, (0.0f), L_20);
		t507 * L_21 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_22 = (L_21->f2);
		m2234(NULL, L_22, NULL);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_23 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_24 = (L_23->f0);
		m2235(NULL, L_24, NULL);
		t507 * L_25 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_26 = (L_25->f2);
		m2234(NULL, L_26, NULL);
	}

IL_00c1:
	{
		return;
	}
}
extern TypeInfo* t509_TI_var;
extern "C" void m2233 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t507 * L_0 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_1 = (L_0->f0);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_1);
		t507 * L_2 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_3 = (L_2->f0);
		int32_t L_4 = m1648(NULL, NULL);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_3, (0.0f), (((float)L_4)));
		t507 * L_5 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_6 = (L_5->f0);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_6);
		t507 * L_7 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_8 = (L_7->f0);
		int32_t L_9 = m1649(NULL, NULL);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_8, (0.0f), (((float)L_9)));
		t507 * L_10 = ((t509_SFs*)t509_TI_var->static_fields)->f2;
		t508 * L_11 = (L_10->f2);
		m2234(NULL, L_11, NULL);
		return;
	}
}
extern TypeInfo* t508_TI_var;
extern TypeInfo* t509_TI_var;
extern TypeInfo* t687_TI_var;
extern TypeInfo* t88_TI_var;
extern const MethodInfo* m3228_MI_var;
extern const MethodInfo* m3229_MI_var;
extern const MethodInfo* m3230_MI_var;
extern "C" void m2234 (t7 * __this , t508 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t508_TI_var = il2cpp_codegen_type_info_from_index(901);
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t687_TI_var = il2cpp_codegen_type_info_from_index(905);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		m3228_MI_var = il2cpp_codegen_method_info_from_index(2147483888);
		m3229_MI_var = il2cpp_codegen_method_info_from_index(2147483889);
		m3230_MI_var = il2cpp_codegen_method_info_from_index(2147483890);
		s_Il2CppMethodIntialized = true;
	}
	t508 * V_0 = {0};
	t687  V_1 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t508 * L_0 = p0;
		t513 * L_1 = (L_0->f10);
		t687  L_2 = m3228(L_1, m3228_MI_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			t512 * L_3 = m3229((&V_1), m3229_MI_var);
			V_0 = ((t508 *)Castclass(L_3, t508_TI_var));
			t508 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			m2235(NULL, L_4, NULL);
		}

IL_0024:
		{
			bool L_5 = m3230((&V_1), m3230_MI_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		t687  L_6 = V_1;
		t687  L_7 = L_6;
		t7 * L_8 = Box(t687_TI_var, &L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0041:
	{
		t508 * L_9 = p0;
		m2256(L_9, NULL);
		return;
	}
}
extern TypeInfo* t341_TI_var;
extern TypeInfo* t509_TI_var;
extern "C" void m2235 (t7 * __this , t508 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t219  V_4 = {0};
	{
		t508 * L_0 = p0;
		bool L_1 = (L_0->f15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		t508 * L_2 = p0;
		float L_3 = (((t512 *)L_2)->f0);
		V_0 = L_3;
		t508 * L_4 = p0;
		float L_5 = (((t512 *)L_4)->f1);
		V_1 = L_5;
		t508 * L_6 = p0;
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_6);
		t508 * L_7 = p0;
		t508 * L_8 = p0;
		t219 * L_9 = &(((t512 *)L_8)->f4);
		float L_10 = m1624(L_9, NULL);
		t508 * L_11 = p0;
		float L_12 = (((t512 *)L_11)->f1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_15 = m1680(NULL, L_12, L_13, L_14, NULL);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_7, L_10, L_15);
		t508 * L_16 = p0;
		float L_17 = (((t512 *)L_16)->f2);
		V_2 = L_17;
		t508 * L_18 = p0;
		float L_19 = (((t512 *)L_18)->f3);
		V_3 = L_19;
		t508 * L_20 = p0;
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_20);
		t508 * L_21 = p0;
		t508 * L_22 = p0;
		t219 * L_23 = &(((t512 *)L_22)->f4);
		float L_24 = m1625(L_23, NULL);
		t508 * L_25 = p0;
		float L_26 = (((t512 *)L_25)->f3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = m1680(NULL, L_26, L_27, L_28, NULL);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		t508 * L_30 = p0;
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_30);
		t508 * L_31 = p0;
		int32_t L_32 = (L_31->f16);
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t219  L_33 = m2236(NULL, L_32, NULL);
		V_4 = L_33;
		t508 * L_34 = p0;
		float L_35 = m1624((&V_4), NULL);
		float L_36 = m1619((&V_4), NULL);
		t508 * L_37 = p0;
		float L_38 = (((t512 *)L_37)->f0);
		t508 * L_39 = p0;
		float L_40 = (((t512 *)L_39)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_41 = m1680(NULL, L_36, L_38, L_40, NULL);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		t508 * L_42 = p0;
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_42);
		t508 * L_43 = p0;
		float L_44 = m1625((&V_4), NULL);
		float L_45 = m1620((&V_4), NULL);
		t508 * L_46 = p0;
		float L_47 = (((t512 *)L_46)->f2);
		t508 * L_48 = p0;
		float L_49 = (((t512 *)L_48)->f3);
		float L_50 = m1680(NULL, L_45, L_47, L_49, NULL);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_43, L_44, L_50);
		t508 * L_51 = p0;
		int32_t L_52 = (L_51->f16);
		t508 * L_53 = p0;
		t219  L_54 = (((t512 *)L_53)->f4);
		m2237(NULL, L_52, L_54, NULL);
	}

IL_00e8:
	{
		return;
	}
}
extern "C" t219  m2236 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef t219  (*m2236_ftn) (int32_t);
	static m2236_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2236_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern TypeInfo* t509_TI_var;
extern "C" void m2237 (t7 * __this , int32_t p0, t219  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		m2238(NULL, L_0, (&p1), NULL);
		return;
	}
}
extern "C" void m2238 (t7 * __this , int32_t p0, t219 * p1, const MethodInfo* method)
{
	typedef void (*m2238_ftn) (int32_t, t219 *);
	static m2238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t511_TI_var;
extern "C" t511 * m2239 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t511 * L_0 = ((t509_SFs*)t509_TI_var->static_fields)->f4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t511 * L_1 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		((t509_SFs*)t509_TI_var->static_fields)->f4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		t511 * L_2 = ((t509_SFs*)t509_TI_var->static_fields)->f4;
		m2379(L_2, 0, NULL);
		t511 * L_3 = ((t509_SFs*)t509_TI_var->static_fields)->f4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t284.h"
#include "t539MD.h"


extern TypeInfo* t511_TI_var;
extern "C" void m2240 (t512 * __this, float p0, float p1, float p2, float p3, t511 * p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		t219  L_0 = {0};
		m1826(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		__this->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_1 = m2385(NULL, NULL);
		__this->f7 = L_1;
		m162(__this, NULL);
		float L_2 = p0;
		__this->f0 = L_2;
		float L_3 = p1;
		__this->f1 = L_3;
		float L_4 = p2;
		__this->f2 = L_4;
		float L_5 = p3;
		__this->f3 = L_5;
		t511 * L_6 = p4;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_7 = m2385(NULL, NULL);
		p4 = L_7;
	}

IL_005b:
	{
		t511 * L_8 = p4;
		m2243(__this, L_8, NULL);
		return;
	}
}
extern TypeInfo* t512_TI_var;
extern "C" void m2241 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t512_TI_var = il2cpp_codegen_type_info_from_index(904);
		s_Il2CppMethodIntialized = true;
	}
	{
		t219  L_0 = {0};
		m1826(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		((t512_SFs*)t512_TI_var->static_fields)->f8 = L_0;
		((t512_SFs*)t512_TI_var->static_fields)->f9 = 0;
		return;
	}
}
extern "C" t511 * m2242 (t512 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m2243 (t512 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f7 = L_0;
		t511 * L_1 = p0;
		VirtActionInvoker1< t511 * >::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
extern "C" t284 * m2244 (t512 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = m2242(__this, NULL);
		t284 * L_1 = m2373(L_0, NULL);
		return L_1;
	}
}
extern "C" void m2245 (t512 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m2246 (t512 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m2247 (t512 * __this, float p0, float p1, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f4);
		float L_1 = p0;
		m1689(L_0, L_1, NULL);
		t219 * L_2 = &(__this->f4);
		float L_3 = p1;
		m1688(L_2, L_3, NULL);
		return;
	}
}
extern "C" void m2248 (t512 * __this, float p0, float p1, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f4);
		float L_1 = p0;
		m1687(L_0, L_1, NULL);
		t219 * L_2 = &(__this->f4);
		float L_3 = p1;
		m1685(L_2, L_3, NULL);
		return;
	}
}
extern "C" void m2249 (t512 * __this, t511 * p0, const MethodInfo* method)
{
	t512 * G_B3_0 = {0};
	t512 * G_B1_0 = {0};
	t512 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	t512 * G_B4_1 = {0};
	t512 * G_B7_0 = {0};
	t512 * G_B5_0 = {0};
	t512 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t512 * G_B8_1 = {0};
	{
		t511 * L_0 = p0;
		float L_1 = m2376(L_0, NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		t511 * L_2 = p0;
		bool L_3 = m2378(L_2, NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		G_B4_1->f5 = G_B4_0;
		t511 * L_4 = p0;
		float L_5 = m2377(L_4, NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		t511 * L_6 = p0;
		bool L_7 = m2380(L_6, NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		G_B8_1->f6 = G_B8_0;
		t511 * L_8 = p0;
		__this->f7 = L_8;
		return;
	}
}
extern TypeInfo* t60_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" void m2250 (t512 * __this, t663* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	t516 * V_0 = {0};
	t663* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		t663* L_0 = p0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		t663* L_1 = p0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		t663* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t516 **)(t516 **)SZArrayLdElema(L_2, L_4));
		t516 * L_5 = V_0;
		int32_t L_6 = (L_5->f0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		t516 * L_8 = V_0;
		t7 * L_9 = (L_8->f1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, t60_TI_var))));
		V_4 = L_10;
		__this->f1 = L_10;
		float L_11 = V_4;
		__this->f0 = L_11;
		__this->f5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		t516 * L_12 = V_0;
		t7 * L_13 = (L_12->f1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, t60_TI_var))));
		V_4 = L_14;
		__this->f3 = L_14;
		float L_15 = V_4;
		__this->f2 = L_15;
		__this->f6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		t516 * L_16 = V_0;
		t7 * L_17 = (L_16->f1);
		__this->f0 = ((*(float*)((float*)UnBox (L_17, t60_TI_var))));
		float L_18 = (__this->f1);
		float L_19 = (__this->f0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->f0);
		__this->f1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		t516 * L_21 = V_0;
		t7 * L_22 = (L_21->f1);
		__this->f1 = ((*(float*)((float*)UnBox (L_22, t60_TI_var))));
		float L_23 = (__this->f0);
		float L_24 = (__this->f1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->f1);
		__this->f0 = L_25;
	}

IL_00f7:
	{
		__this->f5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		t516 * L_26 = V_0;
		t7 * L_27 = (L_26->f1);
		__this->f2 = ((*(float*)((float*)UnBox (L_27, t60_TI_var))));
		float L_28 = (__this->f3);
		float L_29 = (__this->f2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->f2);
		__this->f3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		t516 * L_31 = V_0;
		t7 * L_32 = (L_31->f1);
		__this->f3 = ((*(float*)((float*)UnBox (L_32, t60_TI_var))));
		float L_33 = (__this->f2);
		float L_34 = (__this->f3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->f3);
		__this->f2 = L_35;
	}

IL_0164:
	{
		__this->f6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		t516 * L_36 = V_0;
		t7 * L_37 = (L_36->f1);
		__this->f5 = ((*(int32_t*)((int32_t*)UnBox (L_37, t58_TI_var))));
		goto IL_019c;
	}

IL_0186:
	{
		t516 * L_38 = V_0;
		t7 * L_39 = (L_38->f1);
		__this->f6 = ((*(int32_t*)((int32_t*)UnBox (L_39, t58_TI_var))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		t663* L_42 = V_1;
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((t52 *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->f1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->f1);
		float L_45 = (__this->f0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->f0);
		__this->f1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->f3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->f3);
		float L_49 = (__this->f2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->f2);
		__this->f3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t512_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2251 (t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t512_TI_var = il2cpp_codegen_type_info_from_index(904);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t69* G_B5_1 = {0};
	t69* G_B5_2 = {0};
	t47* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	t69* G_B5_5 = {0};
	t69* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	t69* G_B4_1 = {0};
	t69* G_B4_2 = {0};
	t47* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	t69* G_B4_5 = {0};
	t69* G_B4_6 = {0};
	t47* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t69* G_B6_2 = {0};
	t69* G_B6_3 = {0};
	t47* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	t69* G_B6_6 = {0};
	t69* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	t69* G_B8_1 = {0};
	t69* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	t69* G_B7_1 = {0};
	t69* G_B7_2 = {0};
	t47* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	t69* G_B9_2 = {0};
	t69* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	t69* G_B11_1 = {0};
	t69* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	t69* G_B10_1 = {0};
	t69* G_B10_2 = {0};
	t47* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	t69* G_B12_2 = {0};
	t69* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		t47* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_2 = m207(NULL, L_1, (t47*) &_stringLiteral130, NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t512_TI_var);
		int32_t L_5 = ((t512_SFs*)t512_TI_var->static_fields)->f9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		t69* L_6 = ((t69*)SZArrayNew(t69_TI_var, ((int32_t)12)));
		t47* L_7 = V_0;
		ArrayElementTypeCheck (L_6, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_6, 0)) = (t7 *)L_7;
		t69* L_8 = L_6;
		t69* L_9 = ((t69*)SZArrayNew(t69_TI_var, 6));
		t511 * L_10 = m2242(__this, NULL);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = (t47*) &_stringLiteral131;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = (t47*) &_stringLiteral131;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		t511 * L_11 = m2242(__this, NULL);
		t47* L_12 = m2369(L_11, NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = (t47*) &_stringLiteral132;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t7 **)(t7 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t7 *)G_B6_0;
		t69* L_13 = G_B6_3;
		t347 * L_14 = m1520(__this, NULL);
		ArrayElementTypeCheck (L_13, L_14);
		*((t7 **)(t7 **)SZArrayLdElema(L_13, 1)) = (t7 *)L_14;
		t69* L_15 = L_13;
		t219 * L_16 = &(__this->f4);
		float L_17 = m1624(L_16, NULL);
		float L_18 = L_17;
		t7 * L_19 = Box(t60_TI_var, &L_18);
		ArrayElementTypeCheck (L_15, L_19);
		*((t7 **)(t7 **)SZArrayLdElema(L_15, 2)) = (t7 *)L_19;
		t69* L_20 = L_15;
		t219 * L_21 = &(__this->f4);
		float L_22 = m1707(L_21, NULL);
		float L_23 = L_22;
		t7 * L_24 = Box(t60_TI_var, &L_23);
		ArrayElementTypeCheck (L_20, L_24);
		*((t7 **)(t7 **)SZArrayLdElema(L_20, 3)) = (t7 *)L_24;
		t69* L_25 = L_20;
		t219 * L_26 = &(__this->f4);
		float L_27 = m1625(L_26, NULL);
		float L_28 = L_27;
		t7 * L_29 = Box(t60_TI_var, &L_28);
		ArrayElementTypeCheck (L_25, L_29);
		*((t7 **)(t7 **)SZArrayLdElema(L_25, 4)) = (t7 *)L_29;
		t69* L_30 = L_25;
		t219 * L_31 = &(__this->f4);
		float L_32 = m1708(L_31, NULL);
		float L_33 = L_32;
		t7 * L_34 = Box(t60_TI_var, &L_33);
		ArrayElementTypeCheck (L_30, L_34);
		*((t7 **)(t7 **)SZArrayLdElema(L_30, 5)) = (t7 *)L_34;
		t47* L_35 = m2600(NULL, G_B6_4, L_30, NULL);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((t7 **)(t7 **)SZArrayLdElema(G_B6_6, G_B6_5)) = (t7 *)L_35;
		t69* L_36 = G_B6_7;
		ArrayElementTypeCheck (L_36, (t47*) &_stringLiteral133);
		*((t7 **)(t7 **)SZArrayLdElema(L_36, 2)) = (t7 *)(t47*) &_stringLiteral133;
		t69* L_37 = L_36;
		float L_38 = (__this->f0);
		float L_39 = L_38;
		t7 * L_40 = Box(t60_TI_var, &L_39);
		ArrayElementTypeCheck (L_37, L_40);
		*((t7 **)(t7 **)SZArrayLdElema(L_37, 3)) = (t7 *)L_40;
		t69* L_41 = L_37;
		ArrayElementTypeCheck (L_41, (t47*) &_stringLiteral134);
		*((t7 **)(t7 **)SZArrayLdElema(L_41, 4)) = (t7 *)(t47*) &_stringLiteral134;
		t69* L_42 = L_41;
		float L_43 = (__this->f1);
		float L_44 = L_43;
		t7 * L_45 = Box(t60_TI_var, &L_44);
		ArrayElementTypeCheck (L_42, L_45);
		*((t7 **)(t7 **)SZArrayLdElema(L_42, 5)) = (t7 *)L_45;
		t69* L_46 = L_42;
		int32_t L_47 = (__this->f5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = (t47*) &_stringLiteral135;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_48 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((t7 **)(t7 **)SZArrayLdElema(G_B9_2, G_B9_1)) = (t7 *)G_B9_0;
		t69* L_49 = G_B9_3;
		ArrayElementTypeCheck (L_49, (t47*) &_stringLiteral136);
		*((t7 **)(t7 **)SZArrayLdElema(L_49, 7)) = (t7 *)(t47*) &_stringLiteral136;
		t69* L_50 = L_49;
		float L_51 = (__this->f2);
		float L_52 = L_51;
		t7 * L_53 = Box(t60_TI_var, &L_52);
		ArrayElementTypeCheck (L_50, L_53);
		*((t7 **)(t7 **)SZArrayLdElema(L_50, 8)) = (t7 *)L_53;
		t69* L_54 = L_50;
		ArrayElementTypeCheck (L_54, (t47*) &_stringLiteral134);
		*((t7 **)(t7 **)SZArrayLdElema(L_54, ((int32_t)9))) = (t7 *)(t47*) &_stringLiteral134;
		t69* L_55 = L_54;
		float L_56 = (__this->f3);
		float L_57 = L_56;
		t7 * L_58 = Box(t60_TI_var, &L_57);
		ArrayElementTypeCheck (L_55, L_58);
		*((t7 **)(t7 **)SZArrayLdElema(L_55, ((int32_t)10))) = (t7 *)L_58;
		t69* L_59 = L_55;
		int32_t L_60 = (__this->f6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = (t47*) &_stringLiteral135;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_61 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((t7 **)(t7 **)SZArrayLdElema(G_B12_2, G_B12_1)) = (t7 *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_62 = m175(NULL, G_B12_3, NULL);
		return L_62;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t284MD.h"


extern TypeInfo* t513_TI_var;
extern TypeInfo* t284_TI_var;
extern TypeInfo* t511_TI_var;
extern TypeInfo* t512_TI_var;
extern const MethodInfo* m3231_MI_var;
extern "C" void m2252 (t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t513_TI_var = il2cpp_codegen_type_info_from_index(907);
		t284_TI_var = il2cpp_codegen_type_info_from_index(339);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		t512_TI_var = il2cpp_codegen_type_info_from_index(904);
		m3231_MI_var = il2cpp_codegen_method_info_from_index(2147483891);
		s_Il2CppMethodIntialized = true;
	}
	{
		t513 * L_0 = (t513 *)il2cpp_codegen_object_new (t513_TI_var);
		m3231(L_0, m3231_MI_var);
		__this->f10 = L_0;
		__this->f11 = 1;
		__this->f14 = 1;
		__this->f16 = (-1);
		__this->f18 = ((int32_t)100);
		__this->f19 = ((int32_t)100);
		__this->f22 = (100.0f);
		__this->f23 = (100.0f);
		__this->f24 = (100.0f);
		__this->f25 = (100.0f);
		t284 * L_1 = (t284 *)il2cpp_codegen_object_new (t284_TI_var);
		m1942(L_1, NULL);
		__this->f26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_2 = m2385(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t512_TI_var);
		m2240(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, NULL);
		return;
	}
}
extern "C" t284 * m2253 (t508 * __this, const MethodInfo* method)
{
	{
		t284 * L_0 = (__this->f26);
		return L_0;
	}
}
extern TypeInfo* t58_TI_var;
extern "C" void m2254 (t508 * __this, t663* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	t516 * V_0 = {0};
	t663* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		t663* L_0 = p0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		t663* L_1 = p0;
		m2250(__this, L_1, NULL);
		t663* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		t663* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t516 **)(t516 **)SZArrayLdElema(L_3, L_5));
		t516 * L_6 = V_0;
		int32_t L_7 = (L_6->f0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->f21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->f20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		t516 * L_9 = V_0;
		t7 * L_10 = (L_9->f1);
		__this->f13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, t58_TI_var))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		t663* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t52 *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
extern "C" void m2255 (t508 * __this, t511 * p0, const MethodInfo* method)
{
	t284 * V_0 = {0};
	{
		t511 * L_0 = p0;
		m2249(__this, L_0, NULL);
		t511 * L_1 = p0;
		t284 * L_2 = m2373(L_1, NULL);
		V_0 = L_2;
		t284 * L_3 = (__this->f26);
		t284 * L_4 = V_0;
		int32_t L_5 = m1937(L_4, NULL);
		m2355(L_3, L_5, NULL);
		t284 * L_6 = (__this->f26);
		t284 * L_7 = V_0;
		int32_t L_8 = m2356(L_7, NULL);
		m2357(L_6, L_8, NULL);
		t284 * L_9 = (__this->f26);
		t284 * L_10 = V_0;
		int32_t L_11 = m1938(L_10, NULL);
		m2358(L_9, L_11, NULL);
		t284 * L_12 = (__this->f26);
		t284 * L_13 = V_0;
		int32_t L_14 = m2359(L_13, NULL);
		m2360(L_12, L_14, NULL);
		return;
	}
}
extern "C" void m2256 (t508 * __this, const MethodInfo* method)
{
	{
		__this->f17 = 0;
		return;
	}
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t341_TI_var;
extern TypeInfo* t687_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t511_TI_var;
extern const MethodInfo* m3228_MI_var;
extern const MethodInfo* m3229_MI_var;
extern const MethodInfo* m3230_MI_var;
extern "C" void m2257 (t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		t687_TI_var = il2cpp_codegen_type_info_from_index(905);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		m3228_MI_var = il2cpp_codegen_method_info_from_index(2147483888);
		m3229_MI_var = il2cpp_codegen_method_info_from_index(2147483889);
		m3230_MI_var = il2cpp_codegen_method_info_from_index(2147483890);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	t512 * V_3 = {0};
	t687  V_4 = {0};
	t284 * V_5 = {0};
	int32_t V_6 = 0;
	t512 * V_7 = {0};
	t687  V_8 = {0};
	t284 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	t508 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	t508 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	t508 * G_B40_3 = {0};
	{
		t513 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t511 * L_2 = m2242(__this, NULL);
		t284 * L_3 = m2374(L_2, NULL);
		int32_t L_4 = m1931(L_3, NULL);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		((t512 *)__this)->f0 = L_5;
		float L_6 = V_13;
		((t512 *)__this)->f1 = L_6;
		return;
	}

IL_0033:
	{
		__this->f22 = (0.0f);
		__this->f23 = (0.0f);
		V_0 = 0;
		V_1 = 0;
		__this->f18 = 0;
		V_2 = 1;
		bool L_7 = (__this->f11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		t513 * L_8 = (__this->f10);
		t687  L_9 = m3228(L_8, m3228_MI_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			t512 * L_10 = m3229((&V_4), m3229_MI_var);
			V_3 = L_10;
			t512 * L_11 = V_3;
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_11);
			t512 * L_12 = V_3;
			t284 * L_13 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_5 = L_13;
			t512 * L_14 = V_3;
			t511 * L_15 = m2242(L_14, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			t511 * L_16 = m2239(NULL, NULL);
			if ((((t7*)(t511 *)L_15) == ((t7*)(t511 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			t284 * L_18 = V_5;
			int32_t L_19 = m1937(L_18, NULL);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			int32_t L_21 = m1776(NULL, L_19, L_20, NULL);
			V_0 = L_21;
			t284 * L_22 = V_5;
			int32_t L_23 = m2356(L_22, NULL);
			int32_t L_24 = V_1;
			int32_t L_25 = m1776(NULL, L_23, L_24, NULL);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			t284 * L_26 = V_5;
			int32_t L_27 = m1937(L_26, NULL);
			V_0 = L_27;
			t284 * L_28 = V_5;
			int32_t L_29 = m2356(L_28, NULL);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			t512 * L_30 = V_3;
			float L_31 = (L_30->f0);
			t284 * L_32 = V_5;
			int32_t L_33 = m1931(L_32, NULL);
			float L_34 = (__this->f22);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_35 = m1880(NULL, ((float)((float)L_31+(float)(((float)L_33)))), L_34, NULL);
			__this->f22 = L_35;
			t512 * L_36 = V_3;
			float L_37 = (L_36->f1);
			t284 * L_38 = V_5;
			int32_t L_39 = m1931(L_38, NULL);
			float L_40 = (__this->f23);
			float L_41 = m1880(NULL, ((float)((float)L_37+(float)(((float)L_39)))), L_40, NULL);
			__this->f23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->f18);
			t512 * L_43 = V_3;
			int32_t L_44 = (L_43->f5);
			__this->f18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = m3230((&V_4), m3230_MI_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		t687  L_46 = V_4;
		t687  L_47 = L_46;
		t7 * L_48 = Box(t687_TI_var, &L_47);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0143:
	{
		float L_49 = (__this->f22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->f22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->f23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->f23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		t513 * L_55 = (__this->f10);
		t687  L_56 = m3228(L_55, m3228_MI_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			t512 * L_57 = m3229((&V_8), m3229_MI_var);
			V_7 = L_57;
			t512 * L_58 = V_7;
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_58);
			t512 * L_59 = V_7;
			t284 * L_60 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
			V_9 = L_60;
			t512 * L_61 = V_7;
			t511 * L_62 = m2242(L_61, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			t511 * L_63 = m2239(NULL, NULL);
			if ((((t7*)(t511 *)L_62) == ((t7*)(t511 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			t284 * L_66 = V_9;
			int32_t L_67 = m1937(L_66, NULL);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			t284 * L_69 = V_9;
			int32_t L_70 = m1937(L_69, NULL);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->f22);
			t512 * L_72 = V_7;
			float L_73 = (L_72->f0);
			float L_74 = (__this->f13);
			int32_t L_75 = V_10;
			__this->f22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->f23);
			t512 * L_77 = V_7;
			float L_78 = (L_77->f1);
			float L_79 = (__this->f13);
			int32_t L_80 = V_10;
			__this->f23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			t284 * L_81 = V_9;
			int32_t L_82 = m2356(L_81, NULL);
			V_6 = L_82;
			int32_t L_83 = (__this->f18);
			t512 * L_84 = V_7;
			int32_t L_85 = (L_84->f5);
			__this->f18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->f22);
			t512 * L_87 = V_7;
			float L_88 = (L_87->f0);
			__this->f22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->f23);
			t512 * L_90 = V_7;
			float L_91 = (L_90->f1);
			__this->f23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->f18);
			t512 * L_93 = V_7;
			int32_t L_94 = (L_93->f5);
			__this->f18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = m3230((&V_8), m3230_MI_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		t687  L_96 = V_8;
		t687  L_97 = L_96;
		t7 * L_98 = Box(t687_TI_var, &L_97);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0291:
	{
		float L_99 = (__this->f22);
		float L_100 = (__this->f13);
		__this->f22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->f23);
		float L_102 = (__this->f13);
		__this->f23 = ((float)((float)L_101-(float)L_102));
		t513 * L_103 = (__this->f10);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		t513 * L_105 = (__this->f10);
		t512 * L_106 = (t512 *)VirtFuncInvoker1< t512 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_105, 0);
		t284 * L_107 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_106);
		int32_t L_108 = m1937(L_107, NULL);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		t511 * L_111 = m2242(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_112 = m2385(NULL, NULL);
		if ((!(((t7*)(t511 *)L_111) == ((t7*)(t511 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->f20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		t511 * L_114 = m2242(__this, NULL);
		t284 * L_115 = m2374(L_114, NULL);
		int32_t L_116 = m1937(L_115, NULL);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		int32_t L_118 = m1774(NULL, L_116, L_117, NULL);
		V_11 = (((float)L_118));
		t511 * L_119 = m2242(__this, NULL);
		t284 * L_120 = m2374(L_119, NULL);
		int32_t L_121 = m2356(L_120, NULL);
		int32_t L_122 = V_1;
		int32_t L_123 = m1774(NULL, L_121, L_122, NULL);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		t284 * L_124 = (__this->f26);
		int32_t L_125 = V_0;
		m2355(L_124, L_125, NULL);
		t284 * L_126 = (__this->f26);
		int32_t L_127 = V_1;
		m2357(L_126, L_127, NULL);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (((t512 *)__this)->f0);
		float L_130 = (__this->f22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_133 = m1880(NULL, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), NULL);
		((t512 *)__this)->f0 = L_133;
		float L_134 = (((t512 *)__this)->f1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (((t512 *)__this)->f5);
		int32_t L_136 = (__this->f18);
		t511 * L_137 = m2242(__this, NULL);
		bool L_138 = m2378(L_137, NULL);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		((t512 *)G_B40_3)->f5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->f23);
		float L_140 = V_11;
		float L_141 = V_12;
		((t512 *)__this)->f1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		((t512 *)__this)->f5 = 0;
	}

IL_03e2:
	{
		float L_142 = (((t512 *)__this)->f1);
		float L_143 = (((t512 *)__this)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_144 = m1880(NULL, L_142, L_143, NULL);
		((t512 *)__this)->f1 = L_144;
		t511 * L_145 = m2242(__this, NULL);
		float L_146 = m2376(L_145, NULL);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		t511 * L_147 = m2242(__this, NULL);
		float L_148 = m2376(L_147, NULL);
		float L_149 = L_148;
		V_13 = L_149;
		((t512 *)__this)->f0 = L_149;
		float L_150 = V_13;
		((t512 *)__this)->f1 = L_150;
		((t512 *)__this)->f5 = 0;
	}

IL_0431:
	{
		return;
	}
}
extern TypeInfo* t511_TI_var;
extern TypeInfo* t341_TI_var;
extern TypeInfo* t687_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t509_TI_var;
extern const MethodInfo* m3228_MI_var;
extern const MethodInfo* m3229_MI_var;
extern const MethodInfo* m3230_MI_var;
extern "C" void m2258 (t508 * __this, float p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		t687_TI_var = il2cpp_codegen_type_info_from_index(905);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		m3228_MI_var = il2cpp_codegen_method_info_from_index(2147483888);
		m3229_MI_var = il2cpp_codegen_method_info_from_index(2147483889);
		m3230_MI_var = il2cpp_codegen_method_info_from_index(2147483890);
		s_Il2CppMethodIntialized = true;
	}
	t284 * V_0 = {0};
	t512 * V_1 = {0};
	t687  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	t512 * V_8 = {0};
	t687  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	t512 * V_17 = {0};
	t687  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = p0;
		float L_1 = p1;
		m2247(__this, L_0, L_1, NULL);
		bool L_2 = (__this->f12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		p0 = (0.0f);
	}

IL_001a:
	{
		t511 * L_3 = m2242(__this, NULL);
		t284 * L_4 = m2374(L_3, NULL);
		V_0 = L_4;
		bool L_5 = (__this->f11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		t511 * L_6 = m2242(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_7 = m2385(NULL, NULL);
		if ((((t7*)(t511 *)L_6) == ((t7*)(t511 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		t513 * L_8 = (__this->f10);
		t687  L_9 = m3228(L_8, m3228_MI_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			t512 * L_10 = m3229((&V_2), m3229_MI_var);
			V_1 = L_10;
			t512 * L_11 = V_1;
			t284 * L_12 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_11);
			int32_t L_13 = m1937(L_12, NULL);
			t284 * L_14 = V_0;
			int32_t L_15 = m1937(L_14, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			int32_t L_16 = m1774(NULL, L_13, L_15, NULL);
			V_3 = (((float)L_16));
			float L_17 = p0;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = p1;
			t512 * L_20 = V_1;
			t284 * L_21 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_20);
			int32_t L_22 = m2356(L_21, NULL);
			t284 * L_23 = V_0;
			int32_t L_24 = m2356(L_23, NULL);
			int32_t L_25 = m1774(NULL, L_22, L_24, NULL);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			t512 * L_27 = V_1;
			int32_t L_28 = (L_27->f5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			t512 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			t512 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			t512 * L_35 = V_1;
			float L_36 = (L_35->f0);
			t512 * L_37 = V_1;
			float L_38 = (L_37->f1);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_39 = m1680(NULL, L_34, L_36, L_38, NULL);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = m3230((&V_2), m3230_MI_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		t687  L_41 = V_2;
		t687  L_42 = L_41;
		t7 * L_43 = Box(t687_TI_var, &L_42);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = p0;
		t284 * L_45 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		int32_t L_46 = m1937(L_45, NULL);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = p1;
		t284 * L_48 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		int32_t L_49 = m1931(L_48, NULL);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		t513 * L_50 = (__this->f10);
		t687  L_51 = m3228(L_50, m3228_MI_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			t512 * L_52 = m3229((&V_9), m3229_MI_var);
			V_8 = L_52;
			t512 * L_53 = V_8;
			int32_t L_54 = (L_53->f5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			t512 * L_55 = V_8;
			float L_56 = V_6;
			t512 * L_57 = V_8;
			t284 * L_58 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_57);
			int32_t L_59 = m1937(L_58, NULL);
			float L_60 = V_7;
			t512 * L_61 = V_8;
			t284 * L_62 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_61);
			int32_t L_63 = m1931(L_62, NULL);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			t512 * L_64 = V_8;
			float L_65 = V_6;
			t512 * L_66 = V_8;
			t284 * L_67 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_66);
			int32_t L_68 = m1937(L_67, NULL);
			float L_69 = V_7;
			t512 * L_70 = V_8;
			t284 * L_71 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_70);
			int32_t L_72 = m1931(L_71, NULL);
			t512 * L_73 = V_8;
			float L_74 = (L_73->f0);
			t512 * L_75 = V_8;
			float L_76 = (L_75->f1);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_77 = m1680(NULL, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, NULL);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = m3230((&V_9), m3230_MI_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		t687  L_79 = V_9;
		t687  L_80 = L_79;
		t7 * L_81 = Box(t687_TI_var, &L_80);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		t511 * L_82 = m2242(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_83 = m2385(NULL, NULL);
		if ((((t7*)(t511 *)L_82) == ((t7*)(t511 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		t284 * L_84 = V_0;
		int32_t L_85 = m1937(L_84, NULL);
		V_10 = (((float)L_85));
		t284 * L_86 = V_0;
		int32_t L_87 = m2356(L_86, NULL);
		V_11 = (((float)L_87));
		t513 * L_88 = (__this->f10);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		t513 * L_91 = (__this->f10);
		t512 * L_92 = (t512 *)VirtFuncInvoker1< t512 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_91, 0);
		t284 * L_93 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_92);
		int32_t L_94 = m1937(L_93, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_95 = m1880(NULL, L_90, (((float)L_94)), NULL);
		V_10 = L_95;
		float L_96 = V_11;
		t513 * L_97 = (__this->f10);
		t513 * L_98 = (__this->f10);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_98);
		t512 * L_100 = (t512 *)VirtFuncInvoker1< t512 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		t284 * L_101 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_100);
		int32_t L_102 = m2356(L_101, NULL);
		float L_103 = m1880(NULL, L_96, (((float)L_102)), NULL);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = p0;
		float L_105 = V_10;
		p0 = ((float)((float)L_104+(float)L_105));
		float L_106 = p1;
		float L_107 = V_11;
		float L_108 = V_10;
		p1 = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = p1;
		float L_110 = (__this->f13);
		t513 * L_111 = (__this->f10);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->f22);
		float L_114 = (__this->f23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->f22);
		float L_117 = (__this->f23);
		float L_118 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_119 = m1680(NULL, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), NULL);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->f23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->f18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->f23);
		int32_t L_125 = (__this->f18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		t513 * L_126 = (__this->f10);
		t687  L_127 = m3228(L_126, m3228_MI_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			t512 * L_128 = m3229((&V_18), m3229_MI_var);
			V_17 = L_128;
			t512 * L_129 = V_17;
			float L_130 = (L_129->f0);
			t512 * L_131 = V_17;
			float L_132 = (L_131->f1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_134 = m1703(NULL, L_130, L_132, L_133, NULL);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			t512 * L_137 = V_17;
			int32_t L_138 = (L_137->f5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			t512 * L_139 = V_17;
			t511 * L_140 = m2242(L_139, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			t511 * L_141 = m2239(NULL, NULL);
			if ((((t7*)(t511 *)L_140) == ((t7*)(t511 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			t512 * L_142 = V_17;
			t284 * L_143 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_142);
			int32_t L_144 = m1937(L_143, NULL);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = p0;
			int32_t L_151 = V_21;
			p0 = ((float)((float)L_150+(float)(((float)L_151))));
			t512 * L_152 = V_17;
			t284 * L_153 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_152);
			int32_t L_154 = m2356(L_153, NULL);
			V_15 = L_154;
		}

IL_0371:
		{
			t512 * L_155 = V_17;
			float L_156 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_155, L_157, L_159);
			float L_160 = p0;
			float L_161 = V_19;
			float L_162 = (__this->f13);
			p0 = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = m3230((&V_18), m3230_MI_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		t687  L_164 = V_18;
		t687  L_165 = L_164;
		t7 * L_166 = Box(t687_TI_var, &L_165);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_03b0:
	{
		return;
	}
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t341_TI_var;
extern TypeInfo* t687_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t511_TI_var;
extern const MethodInfo* m3228_MI_var;
extern const MethodInfo* m3229_MI_var;
extern const MethodInfo* m3230_MI_var;
extern "C" void m2259 (t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		t687_TI_var = il2cpp_codegen_type_info_from_index(905);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		m3228_MI_var = il2cpp_codegen_method_info_from_index(2147483888);
		m3229_MI_var = il2cpp_codegen_method_info_from_index(2147483889);
		m3230_MI_var = il2cpp_codegen_method_info_from_index(2147483890);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	t512 * V_4 = {0};
	t687  V_5 = {0};
	t284 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t512 * V_9 = {0};
	t687  V_10 = {0};
	t284 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	t508 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	t508 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	t508 * G_B37_3 = {0};
	{
		t513 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t511 * L_2 = m2242(__this, NULL);
		t284 * L_3 = m2374(L_2, NULL);
		int32_t L_4 = m1933(L_3, NULL);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		((t512 *)__this)->f2 = L_5;
		float L_6 = V_14;
		((t512 *)__this)->f3 = L_6;
		return;
	}

IL_0033:
	{
		float L_7 = (0.0f);
		V_14 = L_7;
		__this->f25 = L_7;
		float L_8 = V_14;
		__this->f24 = L_8;
		V_0 = 0;
		V_1 = 0;
		__this->f19 = 0;
		bool L_9 = (__this->f11);
		if (!L_9)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		t513 * L_10 = (__this->f10);
		t687  L_11 = m3228(L_10, m3228_MI_var);
		V_5 = L_11;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			t512 * L_12 = m3229((&V_5), m3229_MI_var);
			V_4 = L_12;
			t512 * L_13 = V_4;
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_13);
			t512 * L_14 = V_4;
			t284 * L_15 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_14);
			V_6 = L_15;
			t512 * L_16 = V_4;
			t511 * L_17 = m2242(L_16, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			t511 * L_18 = m2239(NULL, NULL);
			if ((((t7*)(t511 *)L_17) == ((t7*)(t511 *)L_18)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_19 = V_3;
			if (L_19)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_20 = V_2;
			t284 * L_21 = V_6;
			int32_t L_22 = m1938(L_21, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			int32_t L_23 = m1774(NULL, L_20, L_22, NULL);
			V_7 = L_23;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_24 = (__this->f24);
			t512 * L_25 = V_4;
			float L_26 = (L_25->f2);
			float L_27 = (__this->f13);
			int32_t L_28 = V_7;
			__this->f24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->f25);
			t512 * L_30 = V_4;
			float L_31 = (L_30->f3);
			float L_32 = (__this->f13);
			int32_t L_33 = V_7;
			__this->f25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			t284 * L_34 = V_6;
			int32_t L_35 = m2359(L_34, NULL);
			V_2 = L_35;
			int32_t L_36 = (__this->f19);
			t512 * L_37 = V_4;
			int32_t L_38 = (L_37->f6);
			__this->f19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->f24);
			t512 * L_40 = V_4;
			float L_41 = (L_40->f2);
			__this->f24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->f25);
			t512 * L_43 = V_4;
			float L_44 = (L_43->f3);
			__this->f25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->f19);
			t512 * L_46 = V_4;
			int32_t L_47 = (L_46->f6);
			__this->f19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = m3230((&V_5), m3230_MI_var);
			if (L_48)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		t687  L_49 = V_5;
		t687  L_50 = L_49;
		t7 * L_51 = Box(t687_TI_var, &L_50);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_51);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0177:
	{
		float L_52 = (__this->f24);
		float L_53 = (__this->f13);
		__this->f24 = ((float)((float)L_52-(float)L_53));
		float L_54 = (__this->f25);
		float L_55 = (__this->f13);
		__this->f25 = ((float)((float)L_54-(float)L_55));
		t513 * L_56 = (__this->f10);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		t513 * L_58 = (__this->f10);
		t512 * L_59 = (t512 *)VirtFuncInvoker1< t512 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_58, 0);
		t284 * L_60 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
		int32_t L_61 = m1938(L_60, NULL);
		V_0 = L_61;
		int32_t L_62 = V_2;
		V_1 = L_62;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_63 = 0;
		V_0 = L_63;
		V_1 = L_63;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		t513 * L_64 = (__this->f10);
		t687  L_65 = m3228(L_64, m3228_MI_var);
		V_10 = L_65;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			t512 * L_66 = m3229((&V_10), m3229_MI_var);
			V_9 = L_66;
			t512 * L_67 = V_9;
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_67);
			t512 * L_68 = V_9;
			t284 * L_69 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			V_11 = L_69;
			t512 * L_70 = V_9;
			t511 * L_71 = m2242(L_70, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			t511 * L_72 = m2239(NULL, NULL);
			if ((((t7*)(t511 *)L_71) == ((t7*)(t511 *)L_72)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_73 = V_8;
			if (L_73)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			t284 * L_74 = V_11;
			int32_t L_75 = m1938(L_74, NULL);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			int32_t L_77 = m1776(NULL, L_75, L_76, NULL);
			V_0 = L_77;
			t284 * L_78 = V_11;
			int32_t L_79 = m2359(L_78, NULL);
			int32_t L_80 = V_1;
			int32_t L_81 = m1776(NULL, L_79, L_80, NULL);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			t284 * L_82 = V_11;
			int32_t L_83 = m1938(L_82, NULL);
			V_0 = L_83;
			t284 * L_84 = V_11;
			int32_t L_85 = m2359(L_84, NULL);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			t512 * L_86 = V_9;
			float L_87 = (L_86->f2);
			float L_88 = (__this->f24);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_89 = m1880(NULL, L_87, L_88, NULL);
			__this->f24 = L_89;
			t512 * L_90 = V_9;
			float L_91 = (L_90->f3);
			float L_92 = (__this->f25);
			float L_93 = m1880(NULL, L_91, L_92, NULL);
			__this->f25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->f19);
			t512 * L_95 = V_9;
			int32_t L_96 = (L_95->f6);
			__this->f19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = m3230((&V_10), m3230_MI_var);
			if (L_97)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		t687  L_98 = V_10;
		t687  L_99 = L_98;
		t7 * L_100 = Box(t687_TI_var, &L_99);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_100);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		t511 * L_101 = m2242(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_102 = m2385(NULL, NULL);
		if ((!(((t7*)(t511 *)L_101) == ((t7*)(t511 *)L_102))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_103 = (__this->f21);
		if (!L_103)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		t511 * L_104 = m2242(__this, NULL);
		t284 * L_105 = m2374(L_104, NULL);
		int32_t L_106 = m1938(L_105, NULL);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		int32_t L_108 = m1774(NULL, L_106, L_107, NULL);
		V_12 = (((float)L_108));
		t511 * L_109 = m2242(__this, NULL);
		t284 * L_110 = m2374(L_109, NULL);
		int32_t L_111 = m2359(L_110, NULL);
		int32_t L_112 = V_1;
		int32_t L_113 = m1774(NULL, L_111, L_112, NULL);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		t284 * L_114 = (__this->f26);
		int32_t L_115 = V_0;
		m2358(L_114, L_115, NULL);
		t284 * L_116 = (__this->f26);
		int32_t L_117 = V_1;
		m2360(L_116, L_117, NULL);
		float L_118 = (0.0f);
		V_13 = L_118;
		V_12 = L_118;
	}

IL_0332:
	{
		float L_119 = (((t512 *)__this)->f2);
		float L_120 = (__this->f24);
		float L_121 = V_12;
		float L_122 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_123 = m1880(NULL, L_119, ((float)((float)((float)((float)L_120+(float)L_121))+(float)L_122)), NULL);
		((t512 *)__this)->f2 = L_123;
		float L_124 = (((t512 *)__this)->f3);
		if ((!(((float)L_124) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_125 = (((t512 *)__this)->f6);
		int32_t L_126 = (__this->f19);
		t511 * L_127 = m2242(__this, NULL);
		bool L_128 = m2380(L_127, NULL);
		G_B35_0 = L_126;
		G_B35_1 = L_125;
		G_B35_2 = __this;
		if (!L_128)
		{
			G_B36_0 = L_126;
			G_B36_1 = L_125;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		((t512 *)G_B37_3)->f6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_129 = (__this->f25);
		float L_130 = V_12;
		float L_131 = V_13;
		((t512 *)__this)->f3 = ((float)((float)((float)((float)L_129+(float)L_130))+(float)L_131));
		goto IL_03a8;
	}

IL_03a1:
	{
		((t512 *)__this)->f6 = 0;
	}

IL_03a8:
	{
		float L_132 = (((t512 *)__this)->f3);
		float L_133 = (((t512 *)__this)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_134 = m1880(NULL, L_132, L_133, NULL);
		((t512 *)__this)->f3 = L_134;
		t511 * L_135 = m2242(__this, NULL);
		float L_136 = m2377(L_135, NULL);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		t511 * L_137 = m2242(__this, NULL);
		float L_138 = m2377(L_137, NULL);
		float L_139 = L_138;
		V_14 = L_139;
		((t512 *)__this)->f2 = L_139;
		float L_140 = V_14;
		((t512 *)__this)->f3 = L_140;
		((t512 *)__this)->f6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
extern TypeInfo* t511_TI_var;
extern TypeInfo* t341_TI_var;
extern TypeInfo* t509_TI_var;
extern TypeInfo* t687_TI_var;
extern TypeInfo* t88_TI_var;
extern const MethodInfo* m3228_MI_var;
extern const MethodInfo* m3229_MI_var;
extern const MethodInfo* m3230_MI_var;
extern "C" void m2260 (t508 * __this, float p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t687_TI_var = il2cpp_codegen_type_info_from_index(905);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		m3228_MI_var = il2cpp_codegen_method_info_from_index(2147483888);
		m3229_MI_var = il2cpp_codegen_method_info_from_index(2147483889);
		m3230_MI_var = il2cpp_codegen_method_info_from_index(2147483890);
		s_Il2CppMethodIntialized = true;
	}
	t284 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	t512 * V_8 = {0};
	t687  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	t512 * V_13 = {0};
	t687  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	t512 * V_20 = {0};
	t687  V_21 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = p0;
		float L_1 = p1;
		m2248(__this, L_0, L_1, NULL);
		t513 * L_2 = (__this->f10);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		t511 * L_4 = m2242(__this, NULL);
		t284 * L_5 = m2374(L_4, NULL);
		V_0 = L_5;
		bool L_6 = (__this->f12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		p0 = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->f11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		t511 * L_8 = m2242(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_9 = m2385(NULL, NULL);
		if ((((t7*)(t511 *)L_8) == ((t7*)(t511 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		t284 * L_10 = V_0;
		int32_t L_11 = m1938(L_10, NULL);
		V_1 = (((float)L_11));
		t284 * L_12 = V_0;
		int32_t L_13 = m2359(L_12, NULL);
		V_2 = (((float)L_13));
		t513 * L_14 = (__this->f10);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		t513 * L_17 = (__this->f10);
		t512 * L_18 = (t512 *)VirtFuncInvoker1< t512 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_17, 0);
		t284 * L_19 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_18);
		int32_t L_20 = m1938(L_19, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_21 = m1880(NULL, L_16, (((float)L_20)), NULL);
		V_1 = L_21;
		float L_22 = V_2;
		t513 * L_23 = (__this->f10);
		t513 * L_24 = (__this->f10);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_24);
		t512 * L_26 = (t512 *)VirtFuncInvoker1< t512 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		t284 * L_27 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_26);
		int32_t L_28 = m2359(L_27, NULL);
		float L_29 = m1880(NULL, L_22, (((float)L_28)), NULL);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = p0;
		float L_31 = V_1;
		p0 = ((float)((float)L_30+(float)L_31));
		float L_32 = p1;
		float L_33 = V_2;
		float L_34 = V_1;
		p1 = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = p1;
		float L_36 = (__this->f13);
		t513 * L_37 = (__this->f10);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->f24);
		float L_40 = (__this->f25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->f24);
		float L_43 = (__this->f25);
		float L_44 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_45 = m1680(NULL, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), NULL);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->f25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->f19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->f25);
		int32_t L_51 = (__this->f19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		t513 * L_52 = (__this->f10);
		t687  L_53 = m3228(L_52, m3228_MI_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			t512 * L_54 = m3229((&V_9), m3229_MI_var);
			V_8 = L_54;
			t512 * L_55 = V_8;
			float L_56 = (L_55->f2);
			t512 * L_57 = V_8;
			float L_58 = (L_57->f3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_60 = m1703(NULL, L_56, L_58, L_59, NULL);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			t512 * L_63 = V_8;
			int32_t L_64 = (L_63->f6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			t512 * L_65 = V_8;
			t511 * L_66 = m2242(L_65, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			t511 * L_67 = m2239(NULL, NULL);
			if ((((t7*)(t511 *)L_66) == ((t7*)(t511 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			t512 * L_68 = V_8;
			t284 * L_69 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			int32_t L_70 = m1938(L_69, NULL);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = p0;
			int32_t L_77 = V_12;
			p0 = ((float)((float)L_76+(float)(((float)L_77))));
			t512 * L_78 = V_8;
			t284 * L_79 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_78);
			int32_t L_80 = m2359(L_79, NULL);
			V_6 = L_80;
		}

IL_01eb:
		{
			t512 * L_81 = V_8;
			float L_82 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_81, L_83, L_85);
			float L_86 = p0;
			float L_87 = V_10;
			float L_88 = (__this->f13);
			p0 = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = m3230((&V_9), m3230_MI_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		t687  L_90 = V_9;
		t687  L_91 = L_90;
		t7 * L_92 = Box(t687_TI_var, &L_91);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		t511 * L_93 = m2242(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_94 = m2385(NULL, NULL);
		if ((((t7*)(t511 *)L_93) == ((t7*)(t511 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		t513 * L_95 = (__this->f10);
		t687  L_96 = m3228(L_95, m3228_MI_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			t512 * L_97 = m3229((&V_14), m3229_MI_var);
			V_13 = L_97;
			t512 * L_98 = V_13;
			t284 * L_99 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_98);
			int32_t L_100 = m1938(L_99, NULL);
			t284 * L_101 = V_0;
			int32_t L_102 = m1938(L_101, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			int32_t L_103 = m1774(NULL, L_100, L_102, NULL);
			V_15 = (((float)L_103));
			float L_104 = p0;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = p1;
			t512 * L_107 = V_13;
			t284 * L_108 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_107);
			int32_t L_109 = m2359(L_108, NULL);
			t284 * L_110 = V_0;
			int32_t L_111 = m2359(L_110, NULL);
			int32_t L_112 = m1774(NULL, L_109, L_111, NULL);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			t512 * L_114 = V_13;
			int32_t L_115 = (L_114->f6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			t512 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			t512 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			t512 * L_122 = V_13;
			float L_123 = (L_122->f2);
			t512 * L_124 = V_13;
			float L_125 = (L_124->f3);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_126 = m1680(NULL, L_121, L_123, L_125, NULL);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = m3230((&V_14), m3230_MI_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		t687  L_128 = V_14;
		t687  L_129 = L_128;
		t7 * L_130 = Box(t687_TI_var, &L_129);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = p0;
		t284 * L_132 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		int32_t L_133 = m1938(L_132, NULL);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = p1;
		t284 * L_135 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		int32_t L_136 = m1933(L_135, NULL);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		t513 * L_137 = (__this->f10);
		t687  L_138 = m3228(L_137, m3228_MI_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			t512 * L_139 = m3229((&V_21), m3229_MI_var);
			V_20 = L_139;
			t512 * L_140 = V_20;
			int32_t L_141 = (L_140->f6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			t512 * L_142 = V_20;
			float L_143 = V_18;
			t512 * L_144 = V_20;
			t284 * L_145 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_144);
			int32_t L_146 = m1938(L_145, NULL);
			float L_147 = V_19;
			t512 * L_148 = V_20;
			t284 * L_149 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_148);
			int32_t L_150 = m1933(L_149, NULL);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			t512 * L_151 = V_20;
			float L_152 = V_18;
			t512 * L_153 = V_20;
			t284 * L_154 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_153);
			int32_t L_155 = m1938(L_154, NULL);
			float L_156 = V_19;
			t512 * L_157 = V_20;
			t284 * L_158 = (t284 *)VirtFuncInvoker0< t284 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_157);
			int32_t L_159 = m1933(L_158, NULL);
			t512 * L_160 = V_20;
			float L_161 = (L_160->f2);
			t512 * L_162 = V_20;
			float L_163 = (L_162->f3);
			IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
			float L_164 = m1680(NULL, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, NULL);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = m3230((&V_21), m3230_MI_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		t687  L_166 = V_21;
		t687  L_167 = L_166;
		t7 * L_168 = Box(t687_TI_var, &L_167);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_03c1:
	{
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t512_TI_var;
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern TypeInfo* t687_TI_var;
extern TypeInfo* t88_TI_var;
extern const MethodInfo* m3228_MI_var;
extern const MethodInfo* m3229_MI_var;
extern const MethodInfo* m3230_MI_var;
extern "C" t47* m2261 (t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t512_TI_var = il2cpp_codegen_type_info_from_index(904);
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		t687_TI_var = il2cpp_codegen_type_info_from_index(905);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		m3228_MI_var = il2cpp_codegen_method_info_from_index(2147483888);
		m3229_MI_var = il2cpp_codegen_method_info_from_index(2147483889);
		m3230_MI_var = il2cpp_codegen_method_info_from_index(2147483890);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	t47* V_1 = {0};
	int32_t V_2 = 0;
	t512 * V_3 = {0};
	t687  V_4 = {0};
	t47* V_5 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_0 = L_0;
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		t47* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = m207(NULL, L_2, (t47*) &_stringLiteral130, NULL);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t512_TI_var);
		int32_t L_6 = ((t512_SFs*)t512_TI_var->static_fields)->f9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		t47* L_7 = V_0;
		V_5 = L_7;
		t69* L_8 = ((t69*)SZArrayNew(t69_TI_var, 5));
		t47* L_9 = V_5;
		ArrayElementTypeCheck (L_8, L_9);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 0)) = (t7 *)L_9;
		t69* L_10 = L_8;
		t47* L_11 = m2251(__this, NULL);
		ArrayElementTypeCheck (L_10, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_10, 1)) = (t7 *)L_11;
		t69* L_12 = L_10;
		ArrayElementTypeCheck (L_12, (t47*) &_stringLiteral137);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 2)) = (t7 *)(t47*) &_stringLiteral137;
		t69* L_13 = L_12;
		float L_14 = (__this->f24);
		float L_15 = L_14;
		t7 * L_16 = Box(t60_TI_var, &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t7 **)(t7 **)SZArrayLdElema(L_13, 3)) = (t7 *)L_16;
		t69* L_17 = L_13;
		ArrayElementTypeCheck (L_17, (t47*) &_stringLiteral138);
		*((t7 **)(t7 **)SZArrayLdElema(L_17, 4)) = (t7 *)(t47*) &_stringLiteral138;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_18 = m175(NULL, L_17, NULL);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(t512_TI_var);
		int32_t L_19 = ((t512_SFs*)t512_TI_var->static_fields)->f9;
		((t512_SFs*)t512_TI_var->static_fields)->f9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		t513 * L_20 = (__this->f10);
		t687  L_21 = m3228(L_20, m3228_MI_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			t512 * L_22 = m3229((&V_4), m3229_MI_var);
			V_3 = L_22;
			t47* L_23 = V_0;
			t512 * L_24 = V_3;
			t47* L_25 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String UnityEngine.GUILayoutEntry::ToString() */, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_26 = m205(NULL, L_23, L_25, (t47*) &_stringLiteral55, NULL);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = m3230((&V_4), m3230_MI_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		t687  L_28 = V_4;
		t687  L_29 = L_28;
		t7 * L_30 = Box(t687_TI_var, &L_29);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_00bf:
	{
		t47* L_31 = V_0;
		t47* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_33 = m205(NULL, L_31, L_32, (t47*) &_stringLiteral139, NULL);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(t512_TI_var);
		int32_t L_34 = ((t512_SFs*)t512_TI_var->static_fields)->f9;
		((t512_SFs*)t512_TI_var->static_fields)->f9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		t47* L_35 = V_0;
		return L_35;
	}
}
#include "t514.h"
#ifndef _MSC_VER
#else
#endif
#include "t514MD.h"



extern "C" void m2262 (t514 * __this, const MethodInfo* method)
{
	{
		__this->f33 = 1;
		__this->f34 = 1;
		m2252(__this, NULL);
		return;
	}
}
extern "C" void m2263 (t514 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (((t512 *)__this)->f0);
		V_0 = L_0;
		float L_1 = (((t512 *)__this)->f1);
		V_1 = L_1;
		bool L_2 = (__this->f33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((t512 *)__this)->f0 = (0.0f);
		((t512 *)__this)->f1 = (0.0f);
	}

IL_002f:
	{
		m2257(__this, NULL);
		float L_3 = (((t512 *)__this)->f0);
		__this->f27 = L_3;
		float L_4 = (((t512 *)__this)->f1);
		__this->f28 = L_4;
		bool L_5 = (__this->f33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (((t512 *)__this)->f0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		((t512 *)__this)->f0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		((t512 *)__this)->f0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		((t512 *)__this)->f1 = L_10;
		((t512 *)__this)->f5 = 0;
	}

IL_009e:
	{
		return;
	}
}
extern "C" void m2264 (t514 * __this, float p0, float p1, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->f36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = p1;
		t511 * L_2 = (__this->f38);
		float L_3 = m2376(L_2, NULL);
		t511 * L_4 = (__this->f38);
		t284 * L_5 = m2373(L_4, NULL);
		int32_t L_6 = m1937(L_5, NULL);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = p1;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->f33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->f27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->f35 = 1;
		float L_11 = (__this->f27);
		((t512 *)__this)->f0 = L_11;
		float L_12 = (__this->f28);
		((t512 *)__this)->f1 = L_12;
		float L_13 = p0;
		float L_14 = (__this->f27);
		m2258(__this, L_13, L_14, NULL);
		t219 * L_15 = &(((t512 *)__this)->f4);
		float L_16 = p1;
		m1688(L_15, L_16, NULL);
		float L_17 = (__this->f27);
		__this->f31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->f35 = 0;
		bool L_18 = (__this->f33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->f27);
		((t512 *)__this)->f0 = L_19;
		float L_20 = (__this->f28);
		((t512 *)__this)->f1 = L_20;
	}

IL_00bb:
	{
		float L_21 = p0;
		float L_22 = V_0;
		m2258(__this, L_21, L_22, NULL);
		t219 * L_23 = &(((t512 *)__this)->f4);
		float L_24 = p1;
		m1688(L_23, L_24, NULL);
		float L_25 = V_0;
		__this->f31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
extern "C" void m2265 (t514 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (((t512 *)__this)->f2);
		V_0 = L_0;
		float L_1 = (((t512 *)__this)->f3);
		V_1 = L_1;
		bool L_2 = (__this->f34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((t512 *)__this)->f2 = (0.0f);
		((t512 *)__this)->f3 = (0.0f);
	}

IL_002f:
	{
		m2259(__this, NULL);
		float L_3 = (((t512 *)__this)->f2);
		__this->f29 = L_3;
		float L_4 = (((t512 *)__this)->f3);
		__this->f30 = L_4;
		bool L_5 = (__this->f35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		t511 * L_6 = (__this->f37);
		float L_7 = m2377(L_6, NULL);
		t511 * L_8 = (__this->f37);
		t284 * L_9 = m2373(L_8, NULL);
		int32_t L_10 = m1938(L_9, NULL);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (((t512 *)__this)->f2);
		float L_12 = V_2;
		((t512 *)__this)->f2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (((t512 *)__this)->f3);
		float L_14 = V_2;
		((t512 *)__this)->f3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->f34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (((t512 *)__this)->f2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		((t512 *)__this)->f2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		((t512 *)__this)->f2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		((t512 *)__this)->f3 = L_20;
		((t512 *)__this)->f6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
extern "C" void m2266 (t514 * __this, float p0, float p1, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = p1;
		V_0 = L_0;
		bool L_1 = (__this->f35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		t511 * L_3 = (__this->f37);
		float L_4 = m2377(L_3, NULL);
		t511 * L_5 = (__this->f37);
		t284 * L_6 = m2373(L_5, NULL);
		int32_t L_7 = m1938(L_6, NULL);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->f34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->f29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->f35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->f36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		t219 * L_13 = &(((t512 *)__this)->f4);
		float L_14 = m1619(L_13, NULL);
		t511 * L_15 = (__this->f38);
		float L_16 = m2376(L_15, NULL);
		t511 * L_17 = (__this->f38);
		t284 * L_18 = m2373(L_17, NULL);
		int32_t L_19 = m1937(L_18, NULL);
		__this->f31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->f31);
		float L_21 = (__this->f27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->f27);
		__this->f31 = L_22;
	}

IL_00a6:
	{
		t219 * L_23 = &(((t512 *)__this)->f4);
		float L_24 = m1619(L_23, NULL);
		V_1 = L_24;
		t219 * L_25 = &(((t512 *)__this)->f4);
		float L_26 = m1624(L_25, NULL);
		float L_27 = (__this->f31);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single) */, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUIScrollGroup::CalcHeight() */, __this);
		t219 * L_28 = &(((t512 *)__this)->f4);
		float L_29 = V_1;
		m1688(L_28, L_29, NULL);
	}

IL_00db:
	{
		float L_30 = (((t512 *)__this)->f2);
		V_2 = L_30;
		float L_31 = (((t512 *)__this)->f3);
		V_3 = L_31;
		float L_32 = (__this->f29);
		((t512 *)__this)->f2 = L_32;
		float L_33 = (__this->f30);
		((t512 *)__this)->f3 = L_33;
		float L_34 = p0;
		float L_35 = (__this->f29);
		m2260(__this, L_34, L_35, NULL);
		float L_36 = V_2;
		((t512 *)__this)->f2 = L_36;
		float L_37 = V_3;
		((t512 *)__this)->f3 = L_37;
		t219 * L_38 = &(((t512 *)__this)->f4);
		float L_39 = p1;
		m1685(L_38, L_39, NULL);
		float L_40 = (__this->f29);
		__this->f32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->f34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->f29);
		((t512 *)__this)->f2 = L_42;
		float L_43 = (__this->f30);
		((t512 *)__this)->f3 = L_43;
	}

IL_015c:
	{
		float L_44 = p0;
		float L_45 = V_0;
		m2260(__this, L_44, L_45, NULL);
		t219 * L_46 = &(((t512 *)__this)->f4);
		float L_47 = p1;
		m1685(L_46, L_47, NULL);
		float L_48 = V_0;
		__this->f32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t515MD.h"



#ifndef _MSC_VER
#else
#endif



extern "C" void m2267 (t516 * __this, int32_t p0, t7 * p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		t7 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t517.h"
#ifndef _MSC_VER
#else
#endif
#include "t517MD.h"



#include "t518.h"
#ifndef _MSC_VER
#else
#endif

#include "t74.h"
#include "t65.h"
#include "t74MD.h"
#include "t377MD.h"
#include "t65MD.h"


extern TypeInfo* t518_TI_var;
extern "C" void m2268 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		t74  L_0 = m1493(NULL, NULL);
		((t518_SFs*)t518_TI_var->static_fields)->f2 = L_0;
		((t518_SFs*)t518_TI_var->static_fields)->f3 = 0;
		return;
	}
}
extern "C" t47* m2269 (t7 * __this , const MethodInfo* method)
{
	typedef t47* (*m2269_ftn) ();
	static m2269_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2269_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
extern "C" void m2270 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef void (*m2270_ftn) (t47*);
	static m2270_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2270_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(p0);
}
extern TypeInfo* t518_TI_var;
extern "C" t503 * m2271 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		int32_t L_0 = ((t518_SFs*)t518_TI_var->static_fields)->f0;
		t503 * L_1 = m2272(NULL, L_0, NULL);
		return L_1;
	}
}
extern "C" t503 * m2272 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef t503 * (*m2272_ftn) (int32_t);
	static m2272_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2272_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern TypeInfo* t518_TI_var;
extern TypeInfo* t502_TI_var;
extern TypeInfo* t509_TI_var;
extern "C" void m2273 (t7 * __this , int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		t502_TI_var = il2cpp_codegen_type_info_from_index(894);
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		((t518_SFs*)t518_TI_var->static_fields)->f0 = L_0;
		int32_t L_1 = p1;
		((t518_SFs*)t518_TI_var->static_fields)->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		m2221(NULL, (t503 *)NULL, NULL);
		int32_t L_2 = p2;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
		m2229(NULL, L_3, 0, NULL);
		int32_t L_4 = p1;
		m2230(NULL, L_4, NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t502_TI_var);
		m2223(NULL, 0, NULL);
		return;
	}
}
extern "C" void m2274 (t7 * __this , const MethodInfo* method)
{
	typedef void (*m2274_ftn) ();
	static m2274_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2274_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
extern TypeInfo* t509_TI_var;
extern TypeInfo* t518_TI_var;
extern TypeInfo* t377_TI_var;
extern "C" void m2275 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t509_TI_var = il2cpp_codegen_type_info_from_index(898);
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		t377_TI_var = il2cpp_codegen_type_info_from_index(293);
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
			t227 * L_0 = m2402(NULL, NULL);
			int32_t L_1 = m2398(L_0, NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = p0;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			m2232(NULL, NULL);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			m2233(NULL, NULL);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
			int32_t L_4 = ((t518_SFs*)t518_TI_var->static_fields)->f1;
			IL2CPP_RUNTIME_CLASS_INIT(t509_TI_var);
			m2229(NULL, L_4, 0, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t377_TI_var);
			m2341(NULL, NULL);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		m2274(NULL, NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_005e:
	{
		return;
	}
}
extern TypeInfo* t517_TI_var;
extern TypeInfo* t518_TI_var;
extern "C" bool m2276 (t7 * __this , t65 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t517_TI_var = il2cpp_codegen_type_info_from_index(908);
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		s_Il2CppMethodIntialized = true;
	}
	{
		t65 * L_0 = p0;
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
		t65 * L_1 = p0;
		if (((t517 *)IsInst(L_1, t517_TI_var)))
		{
			goto IL_0025;
		}
	}
	{
		t65 * L_2 = p0;
		t65 * L_3 = (t65 *)VirtFuncInvoker0< t65 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_2);
		if (((t517 *)IsInst(L_3, t517_TI_var)))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		m2274(NULL, NULL);
		return 1;
	}
}
extern TypeInfo* t518_TI_var;
extern TypeInfo* t396_TI_var;
extern "C" void m2277 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t518_TI_var = il2cpp_codegen_type_info_from_index(897);
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t518_TI_var);
		int32_t L_0 = m2278(NULL, NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_1, (t47*) &_stringLiteral140, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
extern "C" int32_t m2278 (t7 * __this , const MethodInfo* method)
{
	typedef int32_t (*m2278_ftn) ();
	static m2278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
#include "t519.h"
#ifndef _MSC_VER
#else
#endif
#include "t519MD.h"

#include "t157MD.h"


extern "C" void m2279 (t519 * __this, const MethodInfo* method)
{
	{
		__this->f0 = 1;
		__this->f1 = 1;
		t157  L_0 = m1606(NULL, NULL);
		__this->f2 = L_0;
		__this->f3 = (-1.0f);
		t157  L_1 = {0};
		m2424(&L_1, (0.5f), (0.5f), (1.0f), NULL);
		__this->f4 = L_1;
		m162(__this, NULL);
		return;
	}
}
#include "t520.h"
#ifndef _MSC_VER
#else
#endif
#include "t520MD.h"



extern "C" void m2280 (t520 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2281 (t520 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2281((t520 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t520(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t7 * m2282 (t520 * __this, t213 * p0, t7 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m2283 (t520 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

#include "t171.h"
#include "t688.h"
#include "t522.h"
#include "t523.h"
#include "t689.h"
#include "t690.h"
#include "t71MD.h"
#include "t688MD.h"
#include "t522MD.h"
#include "t523MD.h"
#include "t689MD.h"


extern TypeInfo* t519_TI_var;
extern TypeInfo* t521_TI_var;
extern "C" void m2284 (t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t519_TI_var = il2cpp_codegen_type_info_from_index(909);
		t521_TI_var = il2cpp_codegen_type_info_from_index(910);
		s_Il2CppMethodIntialized = true;
	}
	{
		t519 * L_0 = (t519 *)il2cpp_codegen_object_new (t519_TI_var);
		m2279(L_0, NULL);
		__this->f24 = L_0;
		m2173(__this, NULL);
		__this->f23 = ((t521*)SZArrayNew(t521_TI_var, 1));
		return;
	}
}
extern "C" void m2285 (t503 * __this, const MethodInfo* method)
{
	{
		m2332(__this, NULL);
		return;
	}
}
extern "C" t171 * m2286 (t503 * __this, const MethodInfo* method)
{
	{
		t171 * L_0 = (__this->f2);
		return L_0;
	}
}
extern TypeInfo* t503_TI_var;
extern TypeInfo* t511_TI_var;
extern "C" void m2287 (t503 * __this, t171 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t503_TI_var = il2cpp_codegen_type_info_from_index(911);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		t171 * L_0 = p0;
		__this->f2 = L_0;
		t503 * L_1 = ((t503_SFs*)t503_TI_var->static_fields)->f28;
		bool L_2 = m206(NULL, L_1, __this, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		t171 * L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		m2384(NULL, L_3, NULL);
	}

IL_0022:
	{
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2288 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2289 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f3 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2290 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m2291 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f6 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2292 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m2293 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f7 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2294 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" void m2295 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f8 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2296 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2297 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f4 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2298 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2299 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f5 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2300 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f9);
		return L_0;
	}
}
extern "C" void m2301 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f9 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2302 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" void m2303 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f10 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2304 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f11);
		return L_0;
	}
}
extern "C" void m2305 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f11 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2306 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" void m2307 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f12 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2308 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f13);
		return L_0;
	}
}
extern "C" void m2309 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f13 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2310 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f14);
		return L_0;
	}
}
extern "C" void m2311 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f14 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2312 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f15);
		return L_0;
	}
}
extern "C" void m2313 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f15 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2314 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f16);
		return L_0;
	}
}
extern "C" void m2315 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f16 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2316 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" void m2317 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f17 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2318 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f18);
		return L_0;
	}
}
extern "C" void m2319 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f18 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2320 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f19);
		return L_0;
	}
}
extern "C" void m2321 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f19 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2322 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f20);
		return L_0;
	}
}
extern "C" void m2323 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f20 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2324 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f21);
		return L_0;
	}
}
extern "C" void m2325 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f21 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t511 * m2326 (t503 * __this, const MethodInfo* method)
{
	{
		t511 * L_0 = (__this->f22);
		return L_0;
	}
}
extern "C" void m2327 (t503 * __this, t511 * p0, const MethodInfo* method)
{
	{
		t511 * L_0 = p0;
		__this->f22 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t521* m2328 (t503 * __this, const MethodInfo* method)
{
	{
		t521* L_0 = (__this->f23);
		return L_0;
	}
}
extern "C" void m2329 (t503 * __this, t521* p0, const MethodInfo* method)
{
	{
		t521* L_0 = p0;
		__this->f23 = L_0;
		m2332(__this, NULL);
		return;
	}
}
extern "C" t519 * m2330 (t503 * __this, const MethodInfo* method)
{
	{
		t519 * L_0 = (__this->f24);
		return L_0;
	}
}
extern TypeInfo* t503_TI_var;
extern TypeInfo* t511_TI_var;
extern "C" t511 * m2331 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t503_TI_var = il2cpp_codegen_type_info_from_index(911);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		t511 * L_0 = ((t503_SFs*)t503_TI_var->static_fields)->f25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t511 * L_1 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_1, NULL);
		((t503_SFs*)t503_TI_var->static_fields)->f25 = L_1;
	}

IL_0014:
	{
		t511 * L_2 = ((t503_SFs*)t503_TI_var->static_fields)->f25;
		return L_2;
	}
}
extern "C" void m2332 (t503 * __this, const MethodInfo* method)
{
	{
		t521* L_0 = (__this->f23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m183(NULL, (t47*) &_stringLiteral141, NULL);
	}

IL_0015:
	{
		m2333(__this, NULL);
		return;
	}
}
extern TypeInfo* t511_TI_var;
extern TypeInfo* t688_TI_var;
extern TypeInfo* t522_TI_var;
extern const MethodInfo* m3233_MI_var;
extern "C" void m2333 (t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		t688_TI_var = il2cpp_codegen_type_info_from_index(912);
		t522_TI_var = il2cpp_codegen_type_info_from_index(913);
		m3233_MI_var = il2cpp_codegen_method_info_from_index(2147483892);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t511 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t511 * L_1 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_1, NULL);
		__this->f3 = L_1;
	}

IL_0016:
	{
		t511 * L_2 = (__this->f4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		t511 * L_3 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_3, NULL);
		__this->f4 = L_3;
	}

IL_002c:
	{
		t511 * L_4 = (__this->f5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		t511 * L_5 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_5, NULL);
		__this->f5 = L_5;
	}

IL_0042:
	{
		t511 * L_6 = (__this->f6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		t511 * L_7 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_7, NULL);
		__this->f6 = L_7;
	}

IL_0058:
	{
		t511 * L_8 = (__this->f9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		t511 * L_9 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_9, NULL);
		__this->f9 = L_9;
	}

IL_006e:
	{
		t511 * L_10 = (__this->f7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		t511 * L_11 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_11, NULL);
		__this->f7 = L_11;
	}

IL_0084:
	{
		t511 * L_12 = (__this->f8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		t511 * L_13 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_13, NULL);
		__this->f8 = L_13;
	}

IL_009a:
	{
		t511 * L_14 = (__this->f10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		t511 * L_15 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_15, NULL);
		__this->f10 = L_15;
	}

IL_00b0:
	{
		t511 * L_16 = (__this->f11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		t511 * L_17 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_17, NULL);
		__this->f11 = L_17;
	}

IL_00c6:
	{
		t511 * L_18 = (__this->f12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		t511 * L_19 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_19, NULL);
		__this->f12 = L_19;
	}

IL_00dc:
	{
		t511 * L_20 = (__this->f13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		t511 * L_21 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_21, NULL);
		__this->f13 = L_21;
	}

IL_00f2:
	{
		t511 * L_22 = (__this->f14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		t511 * L_23 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_23, NULL);
		__this->f14 = L_23;
	}

IL_0108:
	{
		t511 * L_24 = (__this->f15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		t511 * L_25 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_25, NULL);
		__this->f15 = L_25;
	}

IL_011e:
	{
		t511 * L_26 = (__this->f16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		t511 * L_27 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_27, NULL);
		__this->f16 = L_27;
	}

IL_0134:
	{
		t511 * L_28 = (__this->f17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		t511 * L_29 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_29, NULL);
		__this->f17 = L_29;
	}

IL_014a:
	{
		t511 * L_30 = (__this->f18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		t511 * L_31 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_31, NULL);
		__this->f18 = L_31;
	}

IL_0160:
	{
		t511 * L_32 = (__this->f19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		t511 * L_33 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_33, NULL);
		__this->f19 = L_33;
	}

IL_0176:
	{
		t511 * L_34 = (__this->f20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		t511 * L_35 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_35, NULL);
		__this->f20 = L_35;
	}

IL_018c:
	{
		t511 * L_36 = (__this->f21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		t511 * L_37 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_37, NULL);
		__this->f21 = L_37;
	}

IL_01a2:
	{
		t511 * L_38 = (__this->f22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		t511 * L_39 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_39, NULL);
		__this->f22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t688_TI_var);
		t688 * L_40 = m3232(NULL, NULL);
		t522 * L_41 = (t522 *)il2cpp_codegen_object_new (t522_TI_var);
		m3233(L_41, L_40, m3233_MI_var);
		__this->f26 = L_41;
		t522 * L_42 = (__this->f26);
		t511 * L_43 = (__this->f3);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_42, (t47*) &_stringLiteral142, L_43);
		t511 * L_44 = (__this->f3);
		m2370(L_44, (t47*) &_stringLiteral142, NULL);
		t522 * L_45 = (__this->f26);
		t511 * L_46 = (__this->f4);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_45, (t47*) &_stringLiteral143, L_46);
		t511 * L_47 = (__this->f4);
		m2370(L_47, (t47*) &_stringLiteral143, NULL);
		t522 * L_48 = (__this->f26);
		t511 * L_49 = (__this->f5);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_48, (t47*) &_stringLiteral144, L_49);
		t511 * L_50 = (__this->f5);
		m2370(L_50, (t47*) &_stringLiteral144, NULL);
		t522 * L_51 = (__this->f26);
		t511 * L_52 = (__this->f6);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_51, (t47*) &_stringLiteral145, L_52);
		t511 * L_53 = (__this->f6);
		m2370(L_53, (t47*) &_stringLiteral145, NULL);
		t522 * L_54 = (__this->f26);
		t511 * L_55 = (__this->f9);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_54, (t47*) &_stringLiteral146, L_55);
		t511 * L_56 = (__this->f9);
		m2370(L_56, (t47*) &_stringLiteral146, NULL);
		t522 * L_57 = (__this->f26);
		t511 * L_58 = (__this->f7);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_57, (t47*) &_stringLiteral147, L_58);
		t511 * L_59 = (__this->f7);
		m2370(L_59, (t47*) &_stringLiteral147, NULL);
		t522 * L_60 = (__this->f26);
		t511 * L_61 = (__this->f8);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_60, (t47*) &_stringLiteral148, L_61);
		t511 * L_62 = (__this->f8);
		m2370(L_62, (t47*) &_stringLiteral148, NULL);
		t522 * L_63 = (__this->f26);
		t511 * L_64 = (__this->f10);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_63, (t47*) &_stringLiteral149, L_64);
		t511 * L_65 = (__this->f10);
		m2370(L_65, (t47*) &_stringLiteral149, NULL);
		t522 * L_66 = (__this->f26);
		t511 * L_67 = (__this->f11);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_66, (t47*) &_stringLiteral150, L_67);
		t511 * L_68 = (__this->f11);
		m2370(L_68, (t47*) &_stringLiteral150, NULL);
		t522 * L_69 = (__this->f26);
		t511 * L_70 = (__this->f12);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_69, (t47*) &_stringLiteral151, L_70);
		t511 * L_71 = (__this->f12);
		m2370(L_71, (t47*) &_stringLiteral151, NULL);
		t522 * L_72 = (__this->f26);
		t511 * L_73 = (__this->f13);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_72, (t47*) &_stringLiteral152, L_73);
		t511 * L_74 = (__this->f13);
		m2370(L_74, (t47*) &_stringLiteral152, NULL);
		t522 * L_75 = (__this->f26);
		t511 * L_76 = (__this->f14);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_75, (t47*) &_stringLiteral153, L_76);
		t511 * L_77 = (__this->f14);
		m2370(L_77, (t47*) &_stringLiteral153, NULL);
		t522 * L_78 = (__this->f26);
		t511 * L_79 = (__this->f15);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_78, (t47*) &_stringLiteral154, L_79);
		t511 * L_80 = (__this->f15);
		m2370(L_80, (t47*) &_stringLiteral154, NULL);
		t522 * L_81 = (__this->f26);
		t511 * L_82 = (__this->f16);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_81, (t47*) &_stringLiteral155, L_82);
		t511 * L_83 = (__this->f16);
		m2370(L_83, (t47*) &_stringLiteral155, NULL);
		t522 * L_84 = (__this->f26);
		t511 * L_85 = (__this->f17);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_84, (t47*) &_stringLiteral156, L_85);
		t511 * L_86 = (__this->f17);
		m2370(L_86, (t47*) &_stringLiteral156, NULL);
		t522 * L_87 = (__this->f26);
		t511 * L_88 = (__this->f18);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_87, (t47*) &_stringLiteral157, L_88);
		t511 * L_89 = (__this->f18);
		m2370(L_89, (t47*) &_stringLiteral157, NULL);
		t522 * L_90 = (__this->f26);
		t511 * L_91 = (__this->f19);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_90, (t47*) &_stringLiteral158, L_91);
		t511 * L_92 = (__this->f19);
		m2370(L_92, (t47*) &_stringLiteral158, NULL);
		t522 * L_93 = (__this->f26);
		t511 * L_94 = (__this->f20);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_93, (t47*) &_stringLiteral159, L_94);
		t511 * L_95 = (__this->f20);
		m2370(L_95, (t47*) &_stringLiteral159, NULL);
		t522 * L_96 = (__this->f26);
		t511 * L_97 = (__this->f21);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_96, (t47*) &_stringLiteral160, L_97);
		t511 * L_98 = (__this->f21);
		m2370(L_98, (t47*) &_stringLiteral160, NULL);
		t522 * L_99 = (__this->f26);
		t511 * L_100 = (__this->f22);
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_99, (t47*) &_stringLiteral161, L_100);
		t511 * L_101 = (__this->f22);
		m2370(L_101, (t47*) &_stringLiteral161, NULL);
		t521* L_102 = (__this->f23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		t521* L_103 = (__this->f23);
		int32_t L_104 = V_0;
		int32_t L_105 = L_104;
		if ((*(t511 **)(t511 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		t522 * L_106 = (__this->f26);
		t521* L_107 = (__this->f23);
		int32_t L_108 = V_0;
		int32_t L_109 = L_108;
		t47* L_110 = m2369((*(t511 **)(t511 **)SZArrayLdElema(L_107, L_109)), NULL);
		t521* L_111 = (__this->f23);
		int32_t L_112 = V_0;
		int32_t L_113 = L_112;
		VirtActionInvoker2< t47*, t511 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_106, L_110, (*(t511 **)(t511 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		t521* L_116 = (__this->f23);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((t52 *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		t511 * L_117 = m2331(NULL, NULL);
		m2381(L_117, 1, NULL);
		t511 * L_118 = m2331(NULL, NULL);
		t523 * L_119 = m2371(L_118, NULL);
		t157  L_120 = m2427(NULL, NULL);
		m2349(L_119, L_120, NULL);
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t382_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t511 * m2334 (t503 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t382_TI_var = il2cpp_codegen_type_info_from_index(914);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t511 * V_0 = {0};
	{
		t47* L_0 = p0;
		t511 * L_1 = m2335(__this, L_0, NULL);
		V_0 = L_1;
		t511 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		t511 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		t69* L_4 = ((t69*)SZArrayNew(t69_TI_var, 6));
		ArrayElementTypeCheck (L_4, (t47*) &_stringLiteral162);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 0)) = (t7 *)(t47*) &_stringLiteral162;
		t69* L_5 = L_4;
		t47* L_6 = p0;
		ArrayElementTypeCheck (L_5, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_5, 1)) = (t7 *)L_6;
		t69* L_7 = L_5;
		ArrayElementTypeCheck (L_7, (t47*) &_stringLiteral163);
		*((t7 **)(t7 **)SZArrayLdElema(L_7, 2)) = (t7 *)(t47*) &_stringLiteral163;
		t69* L_8 = L_7;
		t47* L_9 = m184(__this, NULL);
		ArrayElementTypeCheck (L_8, L_9);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 3)) = (t7 *)L_9;
		t69* L_10 = L_8;
		ArrayElementTypeCheck (L_10, (t47*) &_stringLiteral164);
		*((t7 **)(t7 **)SZArrayLdElema(L_10, 4)) = (t7 *)(t47*) &_stringLiteral164;
		t69* L_11 = L_10;
		t227 * L_12 = m2402(NULL, NULL);
		int32_t L_13 = m2398(L_12, NULL);
		int32_t L_14 = L_13;
		t7 * L_15 = Box(t382_TI_var, &L_14);
		ArrayElementTypeCheck (L_11, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_11, 5)) = (t7 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_16 = m175(NULL, L_11, NULL);
		m2634(NULL, L_16, NULL);
		t511 * L_17 = m2331(NULL, NULL);
		return L_17;
	}
}
extern "C" t511 * m2335 (t503 * __this, t47* p0, const MethodInfo* method)
{
	t511 * V_0 = {0};
	{
		bool L_0 = m206(NULL, __this, (t66 *)NULL, NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		m1452(NULL, (t47*) &_stringLiteral165, NULL);
		return (t511 *)NULL;
	}

IL_0018:
	{
		t522 * L_1 = (__this->f26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		m2333(__this, NULL);
	}

IL_0029:
	{
		t522 * L_2 = (__this->f26);
		t47* L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker2< bool, t47*, t511 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(!0,!1&) */, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t511 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (t511 *)NULL;
	}
}
extern TypeInfo* t503_TI_var;
extern TypeInfo* t511_TI_var;
extern "C" void m2336 (t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t503_TI_var = il2cpp_codegen_type_info_from_index(911);
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t503_SFs*)t503_TI_var->static_fields)->f28 = __this;
		t171 * L_0 = m2286(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		m2384(NULL, L_0, NULL);
		t520 * L_1 = ((t503_SFs*)t503_TI_var->static_fields)->f27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t520 * L_2 = ((t503_SFs*)t503_TI_var->static_fields)->f27;
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke() */, L_2);
	}

IL_0025:
	{
		return;
	}
}
extern TypeInfo* t690_TI_var;
extern const MethodInfo* m3234_MI_var;
extern const MethodInfo* m3235_MI_var;
extern "C" t7 * m2337 (t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t690_TI_var = il2cpp_codegen_type_info_from_index(915);
		m3234_MI_var = il2cpp_codegen_method_info_from_index(2147483893);
		m3235_MI_var = il2cpp_codegen_method_info_from_index(2147483894);
		s_Il2CppMethodIntialized = true;
	}
	{
		t522 * L_0 = (__this->f26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		m2333(__this, NULL);
	}

IL_0011:
	{
		t522 * L_1 = (__this->f26);
		t689 * L_2 = m3234(L_1, m3234_MI_var);
		t690  L_3 = m3235(L_2, m3235_MI_var);
		t690  L_4 = L_3;
		t7 * L_5 = Box(t690_TI_var, &L_4);
		return (t7 *)L_5;
	}
}
#include "t377.h"
#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t47_TI_var;
extern "C" void m2338 (t377 * __this, const MethodInfo* method)
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
		__this->f0 = L_0;
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f2 = L_1;
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" void m1748 (t377 * __this, t47* p0, const MethodInfo* method)
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
		__this->f0 = L_0;
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f2 = L_1;
		m162(__this, NULL);
		t47* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t377_TI_var;
extern "C" void m2339 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t377_TI_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		t377 * L_1 = (t377 *)il2cpp_codegen_object_new (t377_TI_var);
		m1748(L_1, L_0, NULL);
		((t377_SFs*)t377_TI_var->static_fields)->f3 = L_1;
		t377 * L_2 = (t377 *)il2cpp_codegen_object_new (t377_TI_var);
		m2338(L_2, NULL);
		((t377_SFs*)t377_TI_var->static_fields)->f4 = L_2;
		t377 * L_3 = (t377 *)il2cpp_codegen_object_new (t377_TI_var);
		m2338(L_3, NULL);
		((t377_SFs*)t377_TI_var->static_fields)->f5 = L_3;
		t377 * L_4 = (t377 *)il2cpp_codegen_object_new (t377_TI_var);
		m2338(L_4, NULL);
		((t377_SFs*)t377_TI_var->static_fields)->f6 = L_4;
		return;
	}
}
extern "C" t47* m1747 (t377 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2340 (t377 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t377_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" void m2341 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t377_TI_var = il2cpp_codegen_type_info_from_index(293);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t377_TI_var);
		t377 * L_0 = ((t377_SFs*)t377_TI_var->static_fields)->f4;
		L_0->f0 = (t47*)NULL;
		t377 * L_1 = ((t377_SFs*)t377_TI_var->static_fields)->f4;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		L_1->f2 = L_2;
		t377 * L_3 = ((t377_SFs*)t377_TI_var->static_fields)->f5;
		L_3->f1 = (t233 *)NULL;
		t377 * L_4 = ((t377_SFs*)t377_TI_var->static_fields)->f5;
		t47* L_5 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		L_4->f2 = L_5;
		t377 * L_6 = ((t377_SFs*)t377_TI_var->static_fields)->f6;
		L_6->f0 = (t47*)NULL;
		t377 * L_7 = ((t377_SFs*)t377_TI_var->static_fields)->f6;
		L_7->f1 = (t233 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m2342 (t523 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m2345(__this, NULL);
		return;
	}
}
extern "C" void m2343 (t523 * __this, t511 * p0, t226 p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t511 * L_0 = p0;
		__this->f1 = L_0;
		t226 L_1 = p1;
		__this->f0 = L_1;
		t180 * L_2 = m2347(__this, NULL);
		__this->f2 = L_2;
		return;
	}
}
extern "C" void m2344 (t523 * __this, const MethodInfo* method)
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
		{
			t511 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m2346(__this, NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m2345 (t523 * __this, const MethodInfo* method)
{
	typedef void (*m2345_ftn) (t523 *);
	static m2345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2346 (t523 * __this, const MethodInfo* method)
{
	typedef void (*m2346_ftn) (t523 *);
	static m2346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t180 * m2347 (t523 * __this, const MethodInfo* method)
{
	typedef t180 * (*m2347_ftn) (t523 *);
	static m2347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2348 (t523 * __this, t157 * p0, const MethodInfo* method)
{
	typedef void (*m2348_ftn) (t523 *, t157 *);
	static m2348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2349 (t523 * __this, t157  p0, const MethodInfo* method)
{
	{
		m2348(__this, (&p0), NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m1942 (t284 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m2353(__this, NULL);
		return;
	}
}
extern "C" void m2350 (t284 * __this, t511 * p0, t226 p1, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t511 * L_0 = p0;
		__this->f1 = L_0;
		t226 L_1 = p1;
		__this->f0 = L_1;
		return;
	}
}
extern "C" void m2351 (t284 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m2353(__this, NULL);
		int32_t L_0 = p0;
		m2355(__this, L_0, NULL);
		int32_t L_1 = p1;
		m2357(__this, L_1, NULL);
		int32_t L_2 = p2;
		m2358(__this, L_2, NULL);
		int32_t L_3 = p3;
		m2360(__this, L_3, NULL);
		return;
	}
}
extern "C" void m2352 (t284 * __this, const MethodInfo* method)
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
		{
			t511 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m2354(__this, NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m2353 (t284 * __this, const MethodInfo* method)
{
	typedef void (*m2353_ftn) (t284 *);
	static m2353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2354 (t284 * __this, const MethodInfo* method)
{
	typedef void (*m2354_ftn) (t284 *);
	static m2354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m1937 (t284 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1937_ftn) (t284 *);
	static m1937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2355 (t284 * __this, int32_t p0, const MethodInfo* method)
{
	typedef void (*m2355_ftn) (t284 *, int32_t);
	static m2355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2356 (t284 * __this, const MethodInfo* method)
{
	typedef int32_t (*m2356_ftn) (t284 *);
	static m2356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2357 (t284 * __this, int32_t p0, const MethodInfo* method)
{
	typedef void (*m2357_ftn) (t284 *, int32_t);
	static m2357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2357_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m1938 (t284 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1938_ftn) (t284 *);
	static m1938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2358 (t284 * __this, int32_t p0, const MethodInfo* method)
{
	typedef void (*m2358_ftn) (t284 *, int32_t);
	static m2358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2359 (t284 * __this, const MethodInfo* method)
{
	typedef int32_t (*m2359_ftn) (t284 *);
	static m2359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2360 (t284 * __this, int32_t p0, const MethodInfo* method)
{
	typedef void (*m2360_ftn) (t284 *, int32_t);
	static m2360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m1931 (t284 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1931_ftn) (t284 *);
	static m1931_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1931_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1933 (t284 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1933_ftn) (t284 *);
	static m1933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1933_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
extern "C" t219  m2361 (t284 * __this, t219  p0, const MethodInfo* method)
{
	{
		t219  L_0 = m2362(NULL, __this, (&p0), NULL);
		return L_0;
	}
}
extern "C" t219  m2362 (t7 * __this , t284 * p0, t219 * p1, const MethodInfo* method)
{
	typedef t219  (*m2362_ftn) (t284 *, t219 *);
	static m2362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)");
	return _il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" t47* m2363 (t284 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		int32_t L_1 = m1937(__this, NULL);
		int32_t L_2 = L_1;
		t7 * L_3 = Box(t58_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		int32_t L_5 = m2356(__this, NULL);
		int32_t L_6 = L_5;
		t7 * L_7 = Box(t58_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		int32_t L_9 = m1938(__this, NULL);
		int32_t L_10 = L_9;
		t7 * L_11 = Box(t58_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		int32_t L_13 = m2359(__this, NULL);
		int32_t L_14 = L_13;
		t7 * L_15 = Box(t58_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t47* L_16 = m2600(NULL, (t47*) &_stringLiteral166, L_12, NULL);
		return L_16;
	}
}
#include "t172.h"
#ifndef _MSC_VER
#else
#endif
#include "t172MD.h"



#ifndef _MSC_VER
#else
#endif



extern "C" void m2364 (t511 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m2367(__this, NULL);
		return;
	}
}
extern TypeInfo* t511_TI_var;
extern "C" void m2365 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t511_SFs*)t511_TI_var->static_fields)->f14 = 1;
		return;
	}
}
extern "C" void m2366 (t511 * __this, const MethodInfo* method)
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
		m2368(__this, NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0012:
	{
		return;
	}
}
extern "C" void m2367 (t511 * __this, const MethodInfo* method)
{
	typedef void (*m2367_ftn) (t511 *);
	static m2367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2368 (t511 * __this, const MethodInfo* method)
{
	typedef void (*m2368_ftn) (t511 *);
	static m2368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t47* m2369 (t511 * __this, const MethodInfo* method)
{
	typedef t47* (*m2369_ftn) (t511 *);
	static m2369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2370 (t511 * __this, t47* p0, const MethodInfo* method)
{
	typedef void (*m2370_ftn) (t511 *, t47*);
	static m2370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern TypeInfo* t523_TI_var;
extern "C" t523 * m2371 (t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t523_TI_var = il2cpp_codegen_type_info_from_index(916);
		s_Il2CppMethodIntialized = true;
	}
	{
		t523 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t226 L_1 = m2372(__this, 0, NULL);
		t523 * L_2 = (t523 *)il2cpp_codegen_object_new (t523_TI_var);
		m2343(L_2, __this, L_1, NULL);
		__this->f1 = L_2;
	}

IL_001e:
	{
		t523 * L_3 = (__this->f1);
		return L_3;
	}
}
extern "C" t226 m2372 (t511 * __this, int32_t p0, const MethodInfo* method)
{
	typedef t226 (*m2372_ftn) (t511 *, int32_t);
	static m2372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern TypeInfo* t284_TI_var;
extern "C" t284 * m2373 (t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t284_TI_var = il2cpp_codegen_type_info_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		t284 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t226 L_1 = m2375(__this, 1, NULL);
		t284 * L_2 = (t284 *)il2cpp_codegen_object_new (t284_TI_var);
		m2350(L_2, __this, L_1, NULL);
		__this->f11 = L_2;
	}

IL_001e:
	{
		t284 * L_3 = (__this->f11);
		return L_3;
	}
}
extern TypeInfo* t284_TI_var;
extern "C" t284 * m2374 (t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t284_TI_var = il2cpp_codegen_type_info_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		t284 * L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t226 L_1 = m2375(__this, 2, NULL);
		t284 * L_2 = (t284 *)il2cpp_codegen_object_new (t284_TI_var);
		m2350(L_2, __this, L_1, NULL);
		__this->f10 = L_2;
	}

IL_001e:
	{
		t284 * L_3 = (__this->f10);
		return L_3;
	}
}
extern "C" t226 m2375 (t511 * __this, int32_t p0, const MethodInfo* method)
{
	typedef t226 (*m2375_ftn) (t511 *, int32_t);
	static m2375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" float m2376 (t511 * __this, const MethodInfo* method)
{
	typedef float (*m2376_ftn) (t511 *);
	static m2376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m2377 (t511 * __this, const MethodInfo* method)
{
	typedef float (*m2377_ftn) (t511 *);
	static m2377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m2378 (t511 * __this, const MethodInfo* method)
{
	typedef bool (*m2378_ftn) (t511 *);
	static m2378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2379 (t511 * __this, bool p0, const MethodInfo* method)
{
	typedef void (*m2379_ftn) (t511 *, bool);
	static m2379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" bool m2380 (t511 * __this, const MethodInfo* method)
{
	typedef bool (*m2380_ftn) (t511 *);
	static m2380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2381 (t511 * __this, bool p0, const MethodInfo* method)
{
	typedef void (*m2381_ftn) (t511 *, bool);
	static m2381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" float m2382 (t7 * __this , t226 p0, const MethodInfo* method)
{
	typedef float (*m2382_ftn) (t226);
	static m2382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern TypeInfo* t511_TI_var;
extern TypeInfo* t341_TI_var;
extern "C" float m2383 (t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		float L_1 = m2382(NULL, L_0, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_2 = roundf(L_1);
		return L_2;
	}
}
extern "C" void m2384 (t7 * __this , t171 * p0, const MethodInfo* method)
{
	typedef void (*m2384_ftn) (t171 *);
	static m2384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(p0);
}
extern TypeInfo* t511_TI_var;
extern "C" t511 * m2385 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_0 = ((t511_SFs*)t511_TI_var->static_fields)->f15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t511 * L_1 = (t511 *)il2cpp_codegen_object_new (t511_TI_var);
		m2364(L_1, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		((t511_SFs*)t511_TI_var->static_fields)->f15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		t511 * L_2 = ((t511_SFs*)t511_TI_var->static_fields)->f15;
		return L_2;
	}
}
extern TypeInfo* t511_TI_var;
extern "C" t74  m2386 (t511 * __this, t219  p0, t377 * p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	t74  V_0 = {0};
	{
		t226 L_0 = (__this->f0);
		t219  L_1 = p0;
		t377 * L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		m2387(NULL, L_0, L_1, L_2, L_3, (&V_0), NULL);
		t74  L_4 = V_0;
		return L_4;
	}
}
extern TypeInfo* t511_TI_var;
extern "C" void m2387 (t7 * __this , t226 p0, t219  p1, t377 * p2, int32_t p3, t74 * p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		t226 L_0 = p0;
		t377 * L_1 = p2;
		int32_t L_2 = p3;
		t74 * L_3 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		m2388(NULL, L_0, (&p1), L_1, L_2, L_3, NULL);
		return;
	}
}
extern "C" void m2388 (t7 * __this , t226 p0, t219 * p1, t377 * p2, int32_t p3, t74 * p4, const MethodInfo* method)
{
	typedef void (*m2388_ftn) (t226, t219 *, t377 *, int32_t, t74 *);
	static m2388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern TypeInfo* t511_TI_var;
extern "C" t74  m2389 (t511 * __this, t377 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	t74  V_0 = {0};
	{
		t226 L_0 = (__this->f0);
		t377 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		m2390(NULL, L_0, L_1, (&V_0), NULL);
		t74  L_2 = V_0;
		return L_2;
	}
}
extern "C" void m2390 (t7 * __this , t226 p0, t377 * p1, t74 * p2, const MethodInfo* method)
{
	typedef void (*m2390_ftn) (t226, t377 *, t74 *);
	static m2390_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2390_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t511_TI_var;
extern "C" float m2391 (t511 * __this, t377 * p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t511_TI_var = il2cpp_codegen_type_info_from_index(906);
		s_Il2CppMethodIntialized = true;
	}
	{
		t226 L_0 = (__this->f0);
		t377 * L_1 = p0;
		float L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t511_TI_var);
		float L_3 = m2392(NULL, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
extern "C" float m2392 (t7 * __this , t226 p0, t377 * p1, float p2, const MethodInfo* method)
{
	typedef float (*m2392_ftn) (t226, t377 *, float);
	static m2392_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2392_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t69_TI_var;
extern "C" t47* m2393 (t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t47* L_1 = m2369(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t47* L_2 = m2600(NULL, (t47*) &_stringLiteral167, L_0, NULL);
		return L_2;
	}
}
#include "t228.h"
#ifndef _MSC_VER
#else
#endif
#include "t228MD.h"



#include "t220.h"
#ifndef _MSC_VER
#else
#endif
#include "t220MD.h"



extern TypeInfo* t47_TI_var;
extern "C" t220 * m1820 (t7 * __this , t47* p0, int32_t p1, bool p2, bool p3, bool p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_0 = L_0;
		V_1 = 0;
		t47* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		bool L_4 = p3;
		bool L_5 = p4;
		bool L_6 = V_1;
		t47* L_7 = V_0;
		t220 * L_8 = m2394(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t220 * m1821 (t7 * __this , t47* p0, int32_t p1, bool p2, bool p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		t47* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		bool L_4 = p3;
		bool L_5 = V_2;
		bool L_6 = V_1;
		t47* L_7 = V_0;
		t220 * L_8 = m2394(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
extern "C" t220 * m2394 (t7 * __this , t47* p0, int32_t p1, bool p2, bool p3, bool p4, bool p5, t47* p6, const MethodInfo* method)
{
	{
		return (t220 *)NULL;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m1739 (t220 * __this, const MethodInfo* method)
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
		return L_0;
	}
}
extern "C" void m1740 (t220 * __this, t47* p0, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m1819 (t7 * __this , bool p0, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m1738 (t220 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m1818 (t220 * __this, bool p0, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m1756 (t220 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
extern "C" bool m1752 (t220 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m1751 (t7 * __this , const MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t381.h"
#include "t214.h"
#include "t77.h"


extern "C" void m1735 (t227 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m2395(__this, NULL);
		return;
	}
}
extern "C" void m2395 (t227 * __this, const MethodInfo* method)
{
	typedef void (*m2395_ftn) (t227 *);
	static m2395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2396 (t227 * __this, const MethodInfo* method)
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
		m2397(__this, NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0012:
	{
		return;
	}
}
extern "C" void m2397 (t227 * __this, const MethodInfo* method)
{
	typedef void (*m2397_ftn) (t227 *);
	static m2397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m1770 (t227 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1770_ftn) (t227 *);
	static m1770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2398 (t227 * __this, const MethodInfo* method)
{
	typedef int32_t (*m2398_ftn) (t227 *);
	static m2398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
extern "C" t74  m2399 (t227 * __this, const MethodInfo* method)
{
	t74  V_0 = {0};
	{
		m2400(__this, (&V_0), NULL);
		t74  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2400 (t227 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2400_ftn) (t227 *, t74 *);
	static m2400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m1766 (t227 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1766_ftn) (t227 *);
	static m1766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
extern "C" uint16_t m1768 (t227 * __this, const MethodInfo* method)
{
	typedef uint16_t (*m1768_ftn) (t227 *);
	static m1768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47* m2401 (t227 * __this, const MethodInfo* method)
{
	typedef t47* (*m2401_ftn) (t227 *);
	static m2401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1767 (t227 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1767_ftn) (t227 *);
	static m1767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t227_TI_var;
extern "C" t227 * m2402 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t227_TI_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	{
		t227 * L_0 = ((t227_SFs*)t227_TI_var->static_fields)->f1;
		return L_0;
	}
}
extern "C" void m2403 (t7 * __this , t226 p0, const MethodInfo* method)
{
	typedef void (*m2403_ftn) (t226);
	static m2403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(p0);
}
extern TypeInfo* t227_TI_var;
extern "C" void m2404 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t227_TI_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	{
		t227 * L_0 = ((t227_SFs*)t227_TI_var->static_fields)->f2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t227 * L_1 = (t227 *)il2cpp_codegen_object_new (t227_TI_var);
		m1735(L_1, NULL);
		((t227_SFs*)t227_TI_var->static_fields)->f2 = L_1;
	}

IL_0014:
	{
		t227 * L_2 = ((t227_SFs*)t227_TI_var->static_fields)->f2;
		((t227_SFs*)t227_TI_var->static_fields)->f1 = L_2;
		t227 * L_3 = ((t227_SFs*)t227_TI_var->static_fields)->f2;
		t226 L_4 = (L_3->f0);
		m2403(NULL, L_4, NULL);
		return;
	}
}
extern "C" bool m1771 (t7 * __this , t227 * p0, const MethodInfo* method)
{
	typedef bool (*m1771_ftn) (t227 *);
	static m1771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m2405 (t227 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = m2398(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
extern "C" bool m2406 (t227 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = m2398(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
extern "C" int32_t m2407 (t227 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	t74  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = m2405(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = m1767(__this, NULL);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = m2406(__this, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t74  L_3 = m2399(__this, NULL);
		V_1 = L_3;
		int32_t L_4 = m2411((&V_1), NULL);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = m1766(__this, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
extern TypeInfo* t227_TI_var;
extern "C" bool m2408 (t227 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t227_TI_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	t227 * V_0 = {0};
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
		bool L_2 = m3236(NULL, __this, L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		t7 * L_3 = p0;
		t347 * L_4 = m1520(L_3, NULL);
		t347 * L_5 = m1520(__this, NULL);
		if ((((t7*)(t347 *)L_4) == ((t7*)(t347 *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		t7 * L_6 = p0;
		V_0 = ((t227 *)Castclass(L_6, t227_TI_var));
		int32_t L_7 = m2398(__this, NULL);
		t227 * L_8 = V_0;
		int32_t L_9 = m2398(L_8, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = m1766(__this, NULL);
		t227 * L_11 = V_0;
		int32_t L_12 = m1766(L_11, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = m2405(__this, NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = m1767(__this, NULL);
		t227 * L_15 = V_0;
		int32_t L_16 = m1767(L_15, NULL);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = m2406(__this, NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		t74  L_18 = m2399(__this, NULL);
		t227 * L_19 = V_0;
		t74  L_20 = m2399(L_19, NULL);
		bool L_21 = m1965(NULL, L_18, L_20, NULL);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t382_TI_var;
extern TypeInfo* t381_TI_var;
extern TypeInfo* t77_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t74_TI_var;
extern "C" t47* m2409 (t227 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t382_TI_var = il2cpp_codegen_type_info_from_index(914);
		t381_TI_var = il2cpp_codegen_type_info_from_index(917);
		t77_TI_var = il2cpp_codegen_type_info_from_index(918);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t74_TI_var = il2cpp_codegen_type_info_from_index(208);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = m2405(__this, NULL);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = m1768(__this, NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		t69* L_2 = ((t69*)SZArrayNew(t69_TI_var, 3));
		int32_t L_3 = m2398(__this, NULL);
		int32_t L_4 = L_3;
		t7 * L_5 = Box(t382_TI_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_5;
		t69* L_6 = L_2;
		int32_t L_7 = m1766(__this, NULL);
		int32_t L_8 = L_7;
		t7 * L_9 = Box(t381_TI_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t7 **)(t7 **)SZArrayLdElema(L_6, 1)) = (t7 *)L_9;
		t69* L_10 = L_6;
		int32_t L_11 = m1767(__this, NULL);
		int32_t L_12 = L_11;
		t7 * L_13 = Box(t77_TI_var, &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		*((t7 **)(t7 **)SZArrayLdElema(L_10, 2)) = (t7 *)L_13;
		t47* L_14 = m2600(NULL, (t47*) &_stringLiteral168, L_10, NULL);
		return L_14;
	}

IL_0051:
	{
		t69* L_15 = ((t69*)SZArrayNew(t69_TI_var, 8));
		ArrayElementTypeCheck (L_15, (t47*) &_stringLiteral169);
		*((t7 **)(t7 **)SZArrayLdElema(L_15, 0)) = (t7 *)(t47*) &_stringLiteral169;
		t69* L_16 = L_15;
		int32_t L_17 = m2398(__this, NULL);
		int32_t L_18 = L_17;
		t7 * L_19 = Box(t382_TI_var, &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((t7 **)(t7 **)SZArrayLdElema(L_16, 1)) = (t7 *)L_19;
		t69* L_20 = L_16;
		ArrayElementTypeCheck (L_20, (t47*) &_stringLiteral170);
		*((t7 **)(t7 **)SZArrayLdElema(L_20, 2)) = (t7 *)(t47*) &_stringLiteral170;
		t69* L_21 = L_20;
		uint16_t L_22 = m1768(__this, NULL);
		int32_t L_23 = L_22;
		t7 * L_24 = Box(t58_TI_var, &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t7 **)(t7 **)SZArrayLdElema(L_21, 3)) = (t7 *)L_24;
		t69* L_25 = L_21;
		ArrayElementTypeCheck (L_25, (t47*) &_stringLiteral171);
		*((t7 **)(t7 **)SZArrayLdElema(L_25, 4)) = (t7 *)(t47*) &_stringLiteral171;
		t69* L_26 = L_25;
		int32_t L_27 = m1766(__this, NULL);
		int32_t L_28 = L_27;
		t7 * L_29 = Box(t381_TI_var, &L_28);
		ArrayElementTypeCheck (L_26, L_29);
		*((t7 **)(t7 **)SZArrayLdElema(L_26, 5)) = (t7 *)L_29;
		t69* L_30 = L_26;
		ArrayElementTypeCheck (L_30, (t47*) &_stringLiteral172);
		*((t7 **)(t7 **)SZArrayLdElema(L_30, 6)) = (t7 *)(t47*) &_stringLiteral172;
		t69* L_31 = L_30;
		int32_t L_32 = m1767(__this, NULL);
		int32_t L_33 = L_32;
		t7 * L_34 = Box(t77_TI_var, &L_33);
		ArrayElementTypeCheck (L_31, L_34);
		*((t7 **)(t7 **)SZArrayLdElema(L_31, 7)) = (t7 *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_35 = m175(NULL, L_31, NULL);
		t47* L_36 = m2600(NULL, L_35, ((t69*)SZArrayNew(t69_TI_var, 0)), NULL);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = m2406(__this, NULL);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		t69* L_38 = ((t69*)SZArrayNew(t69_TI_var, 3));
		int32_t L_39 = m2398(__this, NULL);
		int32_t L_40 = L_39;
		t7 * L_41 = Box(t382_TI_var, &L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((t7 **)(t7 **)SZArrayLdElema(L_38, 0)) = (t7 *)L_41;
		t69* L_42 = L_38;
		t74  L_43 = m2399(__this, NULL);
		t74  L_44 = L_43;
		t7 * L_45 = Box(t74_TI_var, &L_44);
		ArrayElementTypeCheck (L_42, L_45);
		*((t7 **)(t7 **)SZArrayLdElema(L_42, 1)) = (t7 *)L_45;
		t69* L_46 = L_42;
		int32_t L_47 = m1766(__this, NULL);
		int32_t L_48 = L_47;
		t7 * L_49 = Box(t381_TI_var, &L_48);
		ArrayElementTypeCheck (L_46, L_49);
		*((t7 **)(t7 **)SZArrayLdElema(L_46, 2)) = (t7 *)L_49;
		t47* L_50 = m2600(NULL, (t47*) &_stringLiteral173, L_46, NULL);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = m2398(__this, NULL);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = m2398(__this, NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		t69* L_53 = ((t69*)SZArrayNew(t69_TI_var, 2));
		int32_t L_54 = m2398(__this, NULL);
		int32_t L_55 = L_54;
		t7 * L_56 = Box(t382_TI_var, &L_55);
		ArrayElementTypeCheck (L_53, L_56);
		*((t7 **)(t7 **)SZArrayLdElema(L_53, 0)) = (t7 *)L_56;
		t69* L_57 = L_53;
		t47* L_58 = m2401(__this, NULL);
		ArrayElementTypeCheck (L_57, L_58);
		*((t7 **)(t7 **)SZArrayLdElema(L_57, 1)) = (t7 *)L_58;
		t47* L_59 = m2600(NULL, (t47*) &_stringLiteral174, L_57, NULL);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_60 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		int32_t L_61 = m2398(__this, NULL);
		int32_t L_62 = L_61;
		t7 * L_63 = Box(t382_TI_var, &L_62);
		t47* L_64 = m217(NULL, L_60, L_63, NULL);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void t227_marshal(const t227& unmarshaled, t227_marshaled& marshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
void t227_marshal_back(const t227_marshaled& marshaled, t227& unmarshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void t227_marshal_cleanup(t227_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
#include "t77MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t382MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t381MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t691.h"
#include "t691MD.h"
#include "t67MD.h"


extern "C" void m1500 (t74 * __this, float p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		return;
	}
}
extern TypeInfo* t691_TI_var;
extern "C" float m1701 (t74 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->f1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->f2);
		return L_4;
	}

IL_0022:
	{
		t691 * L_5 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_5, (t47*) &_stringLiteral175, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern TypeInfo* t691_TI_var;
extern "C" void m1711 (t74 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = p1;
		__this->f1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = p1;
		__this->f2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		t691 * L_5 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_5, (t47*) &_stringLiteral175, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		return;
	}
}
extern "C" t74  m1808 (t7 * __this , t74  p0, t74  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		t74  L_4 = {0};
		m1500(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), NULL);
		return L_4;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2410 (t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 2));
		float L_1 = (__this->f1);
		float L_2 = L_1;
		t7 * L_3 = Box(t60_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float L_5 = (__this->f2);
		float L_6 = L_5;
		t7 * L_7 = Box(t60_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t47* L_8 = m2600(NULL, (t47*) &_stringLiteral176, L_4, NULL);
		return L_8;
	}
}
extern "C" int32_t m2411 (t74 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m3224(L_0, NULL);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m3224(L_2, NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern TypeInfo* t74_TI_var;
extern "C" bool m2412 (t74 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t74_TI_var = il2cpp_codegen_type_info_from_index(208);
		s_Il2CppMethodIntialized = true;
	}
	t74  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t74_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t74 *)((t74 *)UnBox (L_1, t74_TI_var))));
		float* L_2 = &(__this->f1);
		float L_3 = ((&V_0)->f1);
		bool L_4 = m3238(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m3238(L_5, L_6, NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
extern "C" float m1546 (t7 * __this , t74  p0, t74  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m1495 (t74 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m2413 (t7 * __this , t74  p0, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" t74  m1493 (t7 * __this , const MethodInfo* method)
{
	{
		t74  L_0 = {0};
		m1500(&L_0, (0.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C" t74  m1697 (t7 * __this , const MethodInfo* method)
{
	{
		t74  L_0 = {0};
		m1500(&L_0, (1.0f), (1.0f), NULL);
		return L_0;
	}
}
extern "C" t74  m193 (t7 * __this , const MethodInfo* method)
{
	{
		t74  L_0 = {0};
		m1500(&L_0, (0.0f), (1.0f), NULL);
		return L_0;
	}
}
extern "C" t74  m196 (t7 * __this , const MethodInfo* method)
{
	{
		t74  L_0 = {0};
		m1500(&L_0, (0.0f), (-1.0f), NULL);
		return L_0;
	}
}
extern "C" t74  m1699 (t7 * __this , t74  p0, t74  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		t74  L_4 = {0};
		m1500(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), NULL);
		return L_4;
	}
}
extern "C" t74  m1511 (t7 * __this , t74  p0, t74  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		t74  L_4 = {0};
		m1500(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), NULL);
		return L_4;
	}
}
extern "C" t74  m194 (t7 * __this , t74  p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		t74  L_4 = {0};
		m1500(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), NULL);
		return L_4;
	}
}
extern "C" t74  m1765 (t7 * __this , t74  p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		t74  L_4 = {0};
		m1500(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), NULL);
		return L_4;
	}
}
extern "C" bool m1965 (t7 * __this , t74  p0, t74  p1, const MethodInfo* method)
{
	{
		t74  L_0 = p0;
		t74  L_1 = p1;
		t74  L_2 = m1511(NULL, L_0, L_1, NULL);
		float L_3 = m2413(NULL, L_2, NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
extern "C" bool m1799 (t7 * __this , t74  p0, t74  p1, const MethodInfo* method)
{
	{
		t74  L_0 = p0;
		t74  L_1 = p1;
		t74  L_2 = m1511(NULL, L_0, L_1, NULL);
		float L_3 = m2413(NULL, L_2, NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t74  m199 (t7 * __this , t67  p0, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f2);
		t74  L_2 = {0};
		m1500(&L_2, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" t67  m1553 (t7 * __this , t74  p0, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f2);
		t67  L_2 = {0};
		m209(&L_2, L_0, L_1, (0.0f), NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m209 (t67 * __this, float p0, float p1, float p2, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		float L_2 = p2;
		__this->f3 = L_2;
		return;
	}
}
extern "C" void m1628 (t67 * __this, float p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		__this->f3 = (0.0f);
		return;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" t67  m1846 (t7 * __this , t67  p0, t67  p1, float p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_1 = m1674(NULL, L_0, NULL);
		p2 = L_1;
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f1);
		float L_4 = ((&p0)->f1);
		float L_5 = p2;
		float L_6 = ((&p0)->f2);
		float L_7 = ((&p1)->f2);
		float L_8 = ((&p0)->f2);
		float L_9 = p2;
		float L_10 = ((&p0)->f3);
		float L_11 = ((&p1)->f3);
		float L_12 = ((&p0)->f3);
		float L_13 = p2;
		t67  L_14 = {0};
		m209(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), NULL);
		return L_14;
	}
}
extern TypeInfo* t691_TI_var;
extern "C" float m1850 (t67 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->f1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->f2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->f3);
		return L_4;
	}

IL_002e:
	{
		t691 * L_5 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_5, (t47*) &_stringLiteral177, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern TypeInfo* t691_TI_var;
extern "C" void m1851 (t67 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = p1;
		__this->f1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = p1;
		__this->f2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = p1;
		__this->f3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		t691 * L_5 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_5, (t47*) &_stringLiteral177, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		return;
	}
}
extern "C" int32_t m2414 (t67 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m3224(L_0, NULL);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m3224(L_2, NULL);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m3224(L_4, NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
extern TypeInfo* t67_TI_var;
extern "C" bool m2415 (t67 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t67_TI_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	t67  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t67_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t67 *)((t67 *)UnBox (L_1, t67_TI_var))));
		float* L_2 = &(__this->f1);
		float L_3 = ((&V_0)->f1);
		bool L_4 = m3238(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m3238(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m3238(L_8, L_9, NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
extern "C" t67  m2416 (t7 * __this , t67  p0, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		t67  L_0 = p0;
		float L_1 = m2419(NULL, L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		t67  L_3 = p0;
		float L_4 = V_0;
		t67  L_5 = m2422(NULL, L_3, L_4, NULL);
		return L_5;
	}

IL_001a:
	{
		t67  L_6 = m198(NULL, NULL);
		return L_6;
	}
}
extern "C" t67  m1876 (t67 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = m2416(NULL, (*(t67 *)__this), NULL);
		return L_0;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2417 (t67 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 3));
		float L_1 = (__this->f1);
		float L_2 = L_1;
		t7 * L_3 = Box(t60_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float L_5 = (__this->f2);
		float L_6 = L_5;
		t7 * L_7 = Box(t60_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float L_9 = (__this->f3);
		float L_10 = L_9;
		t7 * L_11 = Box(t60_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t47* L_12 = m2600(NULL, (t47*) &_stringLiteral178, L_8, NULL);
		return L_12;
	}
}
extern TypeInfo* t69_TI_var;
extern "C" t47* m2418 (t67 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 3));
		float* L_1 = &(__this->f1);
		t47* L_2 = p0;
		t47* L_3 = m3239(L_1, L_2, NULL);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float* L_5 = &(__this->f2);
		t47* L_6 = p0;
		t47* L_7 = m3239(L_5, L_6, NULL);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float* L_9 = &(__this->f3);
		t47* L_10 = p0;
		t47* L_11 = m3239(L_9, L_10, NULL);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t47* L_12 = m2600(NULL, (t47*) &_stringLiteral179, L_8, NULL);
		return L_12;
	}
}
extern "C" float m1656 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
extern TypeInfo* t341_TI_var;
extern "C" float m1562 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	t67  V_0 = {0};
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		m209((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), NULL);
		float L_6 = ((&V_0)->f1);
		float L_7 = ((&V_0)->f1);
		float L_8 = ((&V_0)->f2);
		float L_9 = ((&V_0)->f2);
		float L_10 = ((&V_0)->f3);
		float L_11 = ((&V_0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" float m2419 (t7 * __this , t67  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
extern "C" float m2420 (t7 * __this , t67  p0, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p0)->f3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
extern "C" float m1879 (t67 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		float L_4 = (__this->f3);
		float L_5 = (__this->f3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
extern TypeInfo* t341_TI_var;
extern "C" t67  m1860 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_2 = m1920(NULL, L_0, L_1, NULL);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		float L_5 = m1920(NULL, L_3, L_4, NULL);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		float L_8 = m1920(NULL, L_6, L_7, NULL);
		t67  L_9 = {0};
		m209(&L_9, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" t67  m1861 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_2 = m1880(NULL, L_0, L_1, NULL);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		float L_5 = m1880(NULL, L_3, L_4, NULL);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		float L_8 = m1880(NULL, L_6, L_7, NULL);
		t67  L_9 = {0};
		m209(&L_9, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
extern "C" t67  m198 (t7 * __this , const MethodInfo* method)
{
	{
		t67  L_0 = {0};
		m209(&L_0, (0.0f), (0.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C" t67  m1654 (t7 * __this , const MethodInfo* method)
{
	{
		t67  L_0 = {0};
		m209(&L_0, (0.0f), (0.0f), (1.0f), NULL);
		return L_0;
	}
}
extern "C" t67  m2421 (t7 * __this , const MethodInfo* method)
{
	{
		t67  L_0 = {0};
		m209(&L_0, (0.0f), (0.0f), (-1.0f), NULL);
		return L_0;
	}
}
extern "C" t67  m1489 (t7 * __this , const MethodInfo* method)
{
	{
		t67  L_0 = {0};
		m209(&L_0, (0.0f), (1.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C" t67  m1883 (t7 * __this , const MethodInfo* method)
{
	{
		t67  L_0 = {0};
		m209(&L_0, (0.0f), (-1.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C" t67  m1881 (t7 * __this , const MethodInfo* method)
{
	{
		t67  L_0 = {0};
		m209(&L_0, (-1.0f), (0.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C" t67  m1882 (t7 * __this , const MethodInfo* method)
{
	{
		t67  L_0 = {0};
		m209(&L_0, (1.0f), (0.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C" t67  m1811 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		t67  L_6 = {0};
		m209(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), NULL);
		return L_6;
	}
}
extern "C" t67  m1658 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		t67  L_6 = {0};
		m209(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), NULL);
		return L_6;
	}
}
extern "C" t67  m1903 (t7 * __this , t67  p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		float L_4 = ((&p0)->f3);
		float L_5 = p1;
		t67  L_6 = {0};
		m209(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), NULL);
		return L_6;
	}
}
extern "C" t67  m2422 (t7 * __this , t67  p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		float L_4 = ((&p0)->f3);
		float L_5 = p1;
		t67  L_6 = {0};
		m209(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), NULL);
		return L_6;
	}
}
extern "C" bool m2423 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		t67  L_1 = p1;
		t67  L_2 = m1658(NULL, L_0, L_1, NULL);
		float L_3 = m2420(NULL, L_2, NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
extern "C" bool m1795 (t7 * __this , t67  p0, t67  p1, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		t67  L_1 = p1;
		t67  L_2 = m1658(NULL, L_0, L_1, NULL);
		float L_3 = m2420(NULL, L_2, NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m1733 (t157 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		float L_2 = p2;
		__this->f2 = L_2;
		float L_3 = p3;
		__this->f3 = L_3;
		return;
	}
}
extern "C" void m2424 (t157 * __this, float p0, float p1, float p2, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		float L_2 = p2;
		__this->f2 = L_2;
		__this->f3 = (1.0f);
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2425 (t157 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		float L_1 = (__this->f0);
		float L_2 = L_1;
		t7 * L_3 = Box(t60_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float L_5 = (__this->f1);
		float L_6 = L_5;
		t7 * L_7 = Box(t60_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float L_9 = (__this->f2);
		float L_10 = L_9;
		t7 * L_11 = Box(t60_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		float L_13 = (__this->f3);
		float L_14 = L_13;
		t7 * L_15 = Box(t60_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t47* L_16 = m2600(NULL, (t47*) &_stringLiteral180, L_12, NULL);
		return L_16;
	}
}
extern "C" int32_t m2426 (t157 * __this, const MethodInfo* method)
{
	t327  V_0 = {0};
	{
		t327  L_0 = m2428(NULL, (*(t157 *)__this), NULL);
		V_0 = L_0;
		int32_t L_1 = m2501((&V_0), NULL);
		return L_1;
	}
}
extern TypeInfo* t157_TI_var;
extern "C" bool m1634 (t157 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t157_TI_var = il2cpp_codegen_type_info_from_index(221);
		s_Il2CppMethodIntialized = true;
	}
	t157  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t157_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t157 *)((t157 *)UnBox (L_1, t157_TI_var))));
		float* L_2 = &(__this->f0);
		float L_3 = ((&V_0)->f0);
		bool L_4 = m3238(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f1);
		float L_6 = ((&V_0)->f1);
		bool L_7 = m3238(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f2);
		float L_9 = ((&V_0)->f2);
		bool L_10 = m3238(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f3);
		float L_12 = ((&V_0)->f3);
		bool L_13 = m3238(L_11, L_12, NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" t157  m1579 (t7 * __this , t157  p0, t157  p1, float p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_1 = m1674(NULL, L_0, NULL);
		p2 = L_1;
		float L_2 = ((&p0)->f0);
		float L_3 = ((&p1)->f0);
		float L_4 = ((&p0)->f0);
		float L_5 = p2;
		float L_6 = ((&p0)->f1);
		float L_7 = ((&p1)->f1);
		float L_8 = ((&p0)->f1);
		float L_9 = p2;
		float L_10 = ((&p0)->f2);
		float L_11 = ((&p1)->f2);
		float L_12 = ((&p0)->f2);
		float L_13 = p2;
		float L_14 = ((&p0)->f3);
		float L_15 = ((&p1)->f3);
		float L_16 = ((&p0)->f3);
		float L_17 = p2;
		t157  L_18 = {0};
		m1733(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), NULL);
		return L_18;
	}
}
extern "C" t157  m2427 (t7 * __this , const MethodInfo* method)
{
	{
		t157  L_0 = {0};
		m1733(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), NULL);
		return L_0;
	}
}
extern "C" t157  m1606 (t7 * __this , const MethodInfo* method)
{
	{
		t157  L_0 = {0};
		m1733(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		return L_0;
	}
}
extern "C" t157  m1638 (t7 * __this , const MethodInfo* method)
{
	{
		t157  L_0 = {0};
		m1733(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), NULL);
		return L_0;
	}
}
extern "C" t157  m1875 (t7 * __this , t157  p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		float L_1 = p1;
		float L_2 = ((&p0)->f1);
		float L_3 = p1;
		float L_4 = ((&p0)->f2);
		float L_5 = p1;
		float L_6 = ((&p0)->f3);
		float L_7 = p1;
		t157  L_8 = {0};
		m1733(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), NULL);
		return L_8;
	}
}
extern "C" t327  m2428 (t7 * __this , t157  p0, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f3);
		t327  L_4 = {0};
		m1626(&L_4, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
#include "t335.h"
#ifndef _MSC_VER
#else
#endif
#include "t335MD.h"

#include "t356.h"


extern "C" void m1594 (t335 * __this, uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3, const MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		__this->f0 = L_0;
		uint8_t L_1 = p1;
		__this->f1 = L_1;
		uint8_t L_2 = p2;
		__this->f2 = L_2;
		uint8_t L_3 = p3;
		__this->f3 = L_3;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t356_TI_var;
extern "C" t47* m2429 (t335 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		uint8_t L_1 = (__this->f0);
		uint8_t L_2 = L_1;
		t7 * L_3 = Box(t356_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		uint8_t L_5 = (__this->f1);
		uint8_t L_6 = L_5;
		t7 * L_7 = Box(t356_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		uint8_t L_9 = (__this->f2);
		uint8_t L_10 = L_9;
		t7 * L_11 = Box(t356_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		uint8_t L_13 = (__this->f3);
		uint8_t L_14 = L_13;
		t7 * L_15 = Box(t356_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t47* L_16 = m2600(NULL, (t47*) &_stringLiteral181, L_12, NULL);
		return L_16;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" t335  m1627 (t7 * __this , t157  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_1 = m1674(NULL, L_0, NULL);
		float L_2 = ((&p0)->f1);
		float L_3 = m1674(NULL, L_2, NULL);
		float L_4 = ((&p0)->f2);
		float L_5 = m1674(NULL, L_4, NULL);
		float L_6 = ((&p0)->f3);
		float L_7 = m1674(NULL, L_6, NULL);
		t335  L_8 = {0};
		m1594(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), NULL);
		return L_8;
	}
}
extern "C" t157  m1595 (t7 * __this , t335  p0, const MethodInfo* method)
{
	{
		uint8_t L_0 = ((&p0)->f0);
		uint8_t L_1 = ((&p0)->f1);
		uint8_t L_2 = ((&p0)->f2);
		uint8_t L_3 = ((&p0)->f3);
		t157  L_4 = {0};
		m1733(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), NULL);
		return L_4;
	}
}
#include "t70.h"
#ifndef _MSC_VER
#else
#endif
#include "t70MD.h"



extern "C" float m2430 (t7 * __this , t70  p0, t70  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f0);
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f1);
		float L_4 = ((&p0)->f2);
		float L_5 = ((&p1)->f2);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
extern "C" t70  m1877 (t7 * __this , t70  p0, const MethodInfo* method)
{
	{
		t70  L_0 = m2431(NULL, (&p0), NULL);
		return L_0;
	}
}
extern "C" t70  m2431 (t7 * __this , t70 * p0, const MethodInfo* method)
{
	typedef t70  (*m2431_ftn) (t70 *);
	static m2431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2431_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0);
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2432 (t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		float L_1 = (__this->f0);
		float L_2 = L_1;
		t7 * L_3 = Box(t60_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float L_5 = (__this->f1);
		float L_6 = L_5;
		t7 * L_7 = Box(t60_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float L_9 = (__this->f2);
		float L_10 = L_9;
		t7 * L_11 = Box(t60_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		float L_13 = (__this->f3);
		float L_14 = L_13;
		t7 * L_15 = Box(t60_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t47* L_16 = m2600(NULL, (t47*) &_stringLiteral182, L_12, NULL);
		return L_16;
	}
}
extern "C" int32_t m2433 (t70 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->f0);
		int32_t L_1 = m3224(L_0, NULL);
		float* L_2 = &(__this->f1);
		int32_t L_3 = m3224(L_2, NULL);
		float* L_4 = &(__this->f2);
		int32_t L_5 = m3224(L_4, NULL);
		float* L_6 = &(__this->f3);
		int32_t L_7 = m3224(L_6, NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern TypeInfo* t70_TI_var;
extern "C" bool m2434 (t70 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t70_TI_var = il2cpp_codegen_type_info_from_index(921);
		s_Il2CppMethodIntialized = true;
	}
	t70  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t70_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t70 *)((t70 *)UnBox (L_1, t70_TI_var))));
		float* L_2 = &(__this->f0);
		float L_3 = ((&V_0)->f0);
		bool L_4 = m3238(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f1);
		float L_6 = ((&V_0)->f1);
		bool L_7 = m3238(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f2);
		float L_9 = ((&V_0)->f2);
		bool L_10 = m3238(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f3);
		float L_12 = ((&V_0)->f3);
		bool L_13 = m3238(L_11, L_12, NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
extern "C" t67  m1655 (t7 * __this , t70  p0, t67  p1, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	t67  V_12 = {0};
	{
		float L_0 = ((&p0)->f0);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&p0)->f1);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&p0)->f2);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&p0)->f0);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&p0)->f1);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&p0)->f2);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&p0)->f0);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&p0)->f0);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&p0)->f1);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&p0)->f3);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&p0)->f3);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&p0)->f3);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&p1)->f1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&p1)->f2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&p1)->f3);
		(&V_12)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&p1)->f1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&p1)->f2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&p1)->f3);
		(&V_12)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&p1)->f1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&p1)->f2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&p1)->f3);
		(&V_12)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		t67  L_48 = V_12;
		return L_48;
	}
}
extern "C" bool m1797 (t7 * __this , t70  p0, t70  p1, const MethodInfo* method)
{
	{
		t70  L_0 = p0;
		t70  L_1 = p1;
		float L_2 = m2430(NULL, L_0, L_1, NULL);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m1826 (t219 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		float L_2 = p2;
		__this->f2 = L_2;
		float L_3 = p3;
		__this->f3 = L_3;
		return;
	}
}
extern "C" float m1624 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m1689 (t219 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m1625 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m1687 (t219 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t74  m1698 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		float L_1 = (__this->f1);
		t74  L_2 = {0};
		m1500(&L_2, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" t74  m1836 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = m1624(__this, NULL);
		float L_1 = (__this->f2);
		float L_2 = m1625(__this, NULL);
		float L_3 = (__this->f3);
		t74  L_4 = {0};
		m1500(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), NULL);
		return L_4;
	}
}
extern "C" float m1619 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m1688 (t219 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m1620 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m1685 (t219 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t74  m1696 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f3);
		t74  L_2 = {0};
		m1500(&L_2, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" float m1716 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m1715 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" float m1707 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f0);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern "C" float m1708 (t219 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		float L_1 = (__this->f1);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2435 (t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		float L_1 = m1624(__this, NULL);
		float L_2 = L_1;
		t7 * L_3 = Box(t60_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float L_5 = m1625(__this, NULL);
		float L_6 = L_5;
		t7 * L_7 = Box(t60_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float L_9 = m1619(__this, NULL);
		float L_10 = L_9;
		t7 * L_11 = Box(t60_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		float L_13 = m1620(__this, NULL);
		float L_14 = L_13;
		t7 * L_15 = Box(t60_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t47* L_16 = m2600(NULL, (t47*) &_stringLiteral183, L_12, NULL);
		return L_16;
	}
}
extern "C" bool m2436 (t219 * __this, t67  p0, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&p0)->f1);
		float L_1 = m1716(__this, NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&p0)->f1);
		float L_3 = m1707(__this, NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&p0)->f2);
		float L_5 = m1715(__this, NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&p0)->f2);
		float L_7 = m1708(__this, NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
extern "C" int32_t m2437 (t219 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = m1624(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = m3224((&V_0), NULL);
		float L_2 = m1619(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = m3224((&V_1), NULL);
		float L_4 = m1625(__this, NULL);
		V_2 = L_4;
		int32_t L_5 = m3224((&V_2), NULL);
		float L_6 = m1620(__this, NULL);
		V_3 = L_6;
		int32_t L_7 = m3224((&V_3), NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern TypeInfo* t219_TI_var;
extern "C" bool m2438 (t219 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t219_TI_var = il2cpp_codegen_type_info_from_index(582);
		s_Il2CppMethodIntialized = true;
	}
	t219  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t219_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t219 *)((t219 *)UnBox (L_1, t219_TI_var))));
		float L_2 = m1624(__this, NULL);
		V_1 = L_2;
		float L_3 = m1624((&V_0), NULL);
		bool L_4 = m3238((&V_1), L_3, NULL);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = m1625(__this, NULL);
		V_2 = L_5;
		float L_6 = m1625((&V_0), NULL);
		bool L_7 = m3238((&V_2), L_6, NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = m1619(__this, NULL);
		V_3 = L_8;
		float L_9 = m1619((&V_0), NULL);
		bool L_10 = m3238((&V_3), L_9, NULL);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = m1620(__this, NULL);
		V_4 = L_11;
		float L_12 = m1620((&V_0), NULL);
		bool L_13 = m3238((&V_4), L_12, NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
extern "C" bool m1827 (t7 * __this , t219  p0, t219  p1, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = m1624((&p0), NULL);
		float L_1 = m1624((&p1), NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = m1625((&p0), NULL);
		float L_3 = m1625((&p1), NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = m1619((&p0), NULL);
		float L_5 = m1619((&p1), NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = m1620((&p0), NULL);
		float L_7 = m1620((&p1), NULL);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
#include "t392.h"
#ifndef _MSC_VER
#else
#endif
#include "t392MD.h"



extern "C" float m2439 (t392 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		float L_2 = m2441(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), NULL);
		return L_2;
	}
}
extern "C" void m2440 (t392 * __this, int32_t p0, int32_t p1, float p2, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		float L_2 = p2;
		m2442(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, NULL);
		return;
	}
}
extern TypeInfo* t691_TI_var;
extern "C" float m2441 (t392 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->f0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->f1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->f2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->f3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->f4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->f5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->f6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->f7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->f8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->f9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->f10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->f11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->f12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->f13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->f14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->f15);
		return L_17;
	}

IL_00bd:
	{
		t691 * L_18 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_18, (t47*) &_stringLiteral184, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}
}
extern TypeInfo* t691_TI_var;
extern "C" void m2442 (t392 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = p1;
		__this->f0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = p1;
		__this->f1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = p1;
		__this->f2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = p1;
		__this->f3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = p1;
		__this->f4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = p1;
		__this->f5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = p1;
		__this->f6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = p1;
		__this->f7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = p1;
		__this->f8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = p1;
		__this->f9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = p1;
		__this->f10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = p1;
		__this->f11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = p1;
		__this->f12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = p1;
		__this->f13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = p1;
		__this->f14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = p1;
		__this->f15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		t691 * L_18 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_18, (t47*) &_stringLiteral184, NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
extern "C" int32_t m2443 (t392 * __this, const MethodInfo* method)
{
	t327  V_0 = {0};
	t327  V_1 = {0};
	t327  V_2 = {0};
	t327  V_3 = {0};
	{
		t327  L_0 = m2454(__this, 0, NULL);
		V_0 = L_0;
		int32_t L_1 = m2501((&V_0), NULL);
		t327  L_2 = m2454(__this, 1, NULL);
		V_1 = L_2;
		int32_t L_3 = m2501((&V_1), NULL);
		t327  L_4 = m2454(__this, 2, NULL);
		V_2 = L_4;
		int32_t L_5 = m2501((&V_2), NULL);
		t327  L_6 = m2454(__this, 3, NULL);
		V_3 = L_6;
		int32_t L_7 = m2501((&V_3), NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern TypeInfo* t392_TI_var;
extern TypeInfo* t327_TI_var;
extern "C" bool m2444 (t392 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t392_TI_var = il2cpp_codegen_type_info_from_index(922);
		t327_TI_var = il2cpp_codegen_type_info_from_index(628);
		s_Il2CppMethodIntialized = true;
	}
	t392  V_0 = {0};
	t327  V_1 = {0};
	t327  V_2 = {0};
	t327  V_3 = {0};
	t327  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t392_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t392 *)((t392 *)UnBox (L_1, t392_TI_var))));
		t327  L_2 = m2454(__this, 0, NULL);
		V_1 = L_2;
		t327  L_3 = m2454((&V_0), 0, NULL);
		t327  L_4 = L_3;
		t7 * L_5 = Box(t327_TI_var, &L_4);
		bool L_6 = m2502((&V_1), L_5, NULL);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		t327  L_7 = m2454(__this, 1, NULL);
		V_2 = L_7;
		t327  L_8 = m2454((&V_0), 1, NULL);
		t327  L_9 = L_8;
		t7 * L_10 = Box(t327_TI_var, &L_9);
		bool L_11 = m2502((&V_2), L_10, NULL);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		t327  L_12 = m2454(__this, 2, NULL);
		V_3 = L_12;
		t327  L_13 = m2454((&V_0), 2, NULL);
		t327  L_14 = L_13;
		t7 * L_15 = Box(t327_TI_var, &L_14);
		bool L_16 = m2502((&V_3), L_15, NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		t327  L_17 = m2454(__this, 3, NULL);
		V_4 = L_17;
		t327  L_18 = m2454((&V_0), 3, NULL);
		t327  L_19 = L_18;
		t7 * L_20 = Box(t327_TI_var, &L_19);
		bool L_21 = m2502((&V_4), L_20, NULL);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
extern "C" t392  m2445 (t7 * __this , t392  p0, const MethodInfo* method)
{
	{
		t392  L_0 = m2446(NULL, (&p0), NULL);
		return L_0;
	}
}
extern "C" t392  m2446 (t7 * __this , t392 * p0, const MethodInfo* method)
{
	typedef t392  (*m2446_ftn) (t392 *);
	static m2446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern "C" t392  m2447 (t7 * __this , t392  p0, const MethodInfo* method)
{
	{
		t392  L_0 = m2448(NULL, (&p0), NULL);
		return L_0;
	}
}
extern "C" t392  m2448 (t7 * __this , t392 * p0, const MethodInfo* method)
{
	typedef t392  (*m2448_ftn) (t392 *);
	static m2448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m2449 (t7 * __this , t392  p0, t392 * p1, const MethodInfo* method)
{
	{
		t392 * L_0 = p1;
		bool L_1 = m2450(NULL, (&p0), L_0, NULL);
		return L_1;
	}
}
extern "C" bool m2450 (t7 * __this , t392 * p0, t392 * p1, const MethodInfo* method)
{
	typedef bool (*m2450_ftn) (t392 *, t392 *);
	static m2450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t392  m2451 (t392 * __this, const MethodInfo* method)
{
	{
		t392  L_0 = m2445(NULL, (*(t392 *)__this), NULL);
		return L_0;
	}
}
extern "C" t392  m2452 (t392 * __this, const MethodInfo* method)
{
	{
		t392  L_0 = m2447(NULL, (*(t392 *)__this), NULL);
		return L_0;
	}
}
extern "C" bool m2453 (t392 * __this, const MethodInfo* method)
{
	typedef bool (*m2453_ftn) (t392 *);
	static m2453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
extern "C" t327  m2454 (t392 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m2439(__this, 0, L_0, NULL);
		int32_t L_2 = p0;
		float L_3 = m2439(__this, 1, L_2, NULL);
		int32_t L_4 = p0;
		float L_5 = m2439(__this, 2, L_4, NULL);
		int32_t L_6 = p0;
		float L_7 = m2439(__this, 3, L_6, NULL);
		t327  L_8 = {0};
		m1626(&L_8, L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
extern "C" t327  m2455 (t392 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m2439(__this, L_0, 0, NULL);
		int32_t L_2 = p0;
		float L_3 = m2439(__this, L_2, 1, NULL);
		int32_t L_4 = p0;
		float L_5 = m2439(__this, L_4, 2, NULL);
		int32_t L_6 = p0;
		float L_7 = m2439(__this, L_6, 3, NULL);
		t327  L_8 = {0};
		m1626(&L_8, L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
extern "C" void m2456 (t392 * __this, int32_t p0, t327  p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m2440(__this, 0, L_0, L_1, NULL);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m2440(__this, 1, L_2, L_3, NULL);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m2440(__this, 2, L_4, L_5, NULL);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m2440(__this, 3, L_6, L_7, NULL);
		return;
	}
}
extern "C" void m2457 (t392 * __this, int32_t p0, t327  p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m2440(__this, L_0, 0, L_1, NULL);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m2440(__this, L_2, 1, L_3, NULL);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m2440(__this, L_4, 2, L_5, NULL);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m2440(__this, L_6, 3, L_7, NULL);
		return;
	}
}
extern "C" t67  m2458 (t392 * __this, t67  p0, const MethodInfo* method)
{
	t67  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = (__this->f4);
		float L_3 = ((&p0)->f2);
		float L_4 = (__this->f8);
		float L_5 = ((&p0)->f3);
		float L_6 = (__this->f12);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->f1);
		float L_8 = ((&p0)->f1);
		float L_9 = (__this->f5);
		float L_10 = ((&p0)->f2);
		float L_11 = (__this->f9);
		float L_12 = ((&p0)->f3);
		float L_13 = (__this->f13);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->f2);
		float L_15 = ((&p0)->f1);
		float L_16 = (__this->f6);
		float L_17 = ((&p0)->f2);
		float L_18 = (__this->f10);
		float L_19 = ((&p0)->f3);
		float L_20 = (__this->f14);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->f3);
		float L_22 = ((&p0)->f1);
		float L_23 = (__this->f7);
		float L_24 = ((&p0)->f2);
		float L_25 = (__this->f11);
		float L_26 = ((&p0)->f3);
		float L_27 = (__this->f15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		t67 * L_29 = (&V_0);
		float L_30 = (L_29->f1);
		float L_31 = V_1;
		L_29->f1 = ((float)((float)L_30*(float)L_31));
		t67 * L_32 = (&V_0);
		float L_33 = (L_32->f2);
		float L_34 = V_1;
		L_32->f2 = ((float)((float)L_33*(float)L_34));
		t67 * L_35 = (&V_0);
		float L_36 = (L_35->f3);
		float L_37 = V_1;
		L_35->f3 = ((float)((float)L_36*(float)L_37));
		t67  L_38 = V_0;
		return L_38;
	}
}
extern "C" t67  m1859 (t392 * __this, t67  p0, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		float L_0 = (__this->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = (__this->f4);
		float L_3 = ((&p0)->f2);
		float L_4 = (__this->f8);
		float L_5 = ((&p0)->f3);
		float L_6 = (__this->f12);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->f1);
		float L_8 = ((&p0)->f1);
		float L_9 = (__this->f5);
		float L_10 = ((&p0)->f2);
		float L_11 = (__this->f9);
		float L_12 = ((&p0)->f3);
		float L_13 = (__this->f13);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->f2);
		float L_15 = ((&p0)->f1);
		float L_16 = (__this->f6);
		float L_17 = ((&p0)->f2);
		float L_18 = (__this->f10);
		float L_19 = ((&p0)->f3);
		float L_20 = (__this->f14);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		t67  L_21 = V_0;
		return L_21;
	}
}
extern "C" t67  m2459 (t392 * __this, t67  p0, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		float L_0 = (__this->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = (__this->f4);
		float L_3 = ((&p0)->f2);
		float L_4 = (__this->f8);
		float L_5 = ((&p0)->f3);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->f1);
		float L_7 = ((&p0)->f1);
		float L_8 = (__this->f5);
		float L_9 = ((&p0)->f2);
		float L_10 = (__this->f9);
		float L_11 = ((&p0)->f3);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->f2);
		float L_13 = ((&p0)->f1);
		float L_14 = (__this->f6);
		float L_15 = ((&p0)->f2);
		float L_16 = (__this->f10);
		float L_17 = ((&p0)->f3);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		t67  L_18 = V_0;
		return L_18;
	}
}
extern TypeInfo* t392_TI_var;
extern "C" t392  m2460 (t7 * __this , t67  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t392_TI_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	t392  V_0 = {0};
	{
		Initobj (t392_TI_var, (&V_0));
		float L_0 = ((&p0)->f1);
		(&V_0)->f0 = L_0;
		(&V_0)->f4 = (0.0f);
		(&V_0)->f8 = (0.0f);
		(&V_0)->f12 = (0.0f);
		(&V_0)->f1 = (0.0f);
		float L_1 = ((&p0)->f2);
		(&V_0)->f5 = L_1;
		(&V_0)->f9 = (0.0f);
		(&V_0)->f13 = (0.0f);
		(&V_0)->f2 = (0.0f);
		(&V_0)->f6 = (0.0f);
		float L_2 = ((&p0)->f3);
		(&V_0)->f10 = L_2;
		(&V_0)->f14 = (0.0f);
		(&V_0)->f3 = (0.0f);
		(&V_0)->f7 = (0.0f);
		(&V_0)->f11 = (0.0f);
		(&V_0)->f15 = (1.0f);
		t392  L_3 = V_0;
		return L_3;
	}
}
extern TypeInfo* t392_TI_var;
extern "C" t392  m2461 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t392_TI_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	t392  V_0 = {0};
	{
		Initobj (t392_TI_var, (&V_0));
		(&V_0)->f0 = (0.0f);
		(&V_0)->f4 = (0.0f);
		(&V_0)->f8 = (0.0f);
		(&V_0)->f12 = (0.0f);
		(&V_0)->f1 = (0.0f);
		(&V_0)->f5 = (0.0f);
		(&V_0)->f9 = (0.0f);
		(&V_0)->f13 = (0.0f);
		(&V_0)->f2 = (0.0f);
		(&V_0)->f6 = (0.0f);
		(&V_0)->f10 = (0.0f);
		(&V_0)->f14 = (0.0f);
		(&V_0)->f3 = (0.0f);
		(&V_0)->f7 = (0.0f);
		(&V_0)->f11 = (0.0f);
		(&V_0)->f15 = (0.0f);
		t392  L_0 = V_0;
		return L_0;
	}
}
extern TypeInfo* t392_TI_var;
extern "C" t392  m2462 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t392_TI_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	t392  V_0 = {0};
	{
		Initobj (t392_TI_var, (&V_0));
		(&V_0)->f0 = (1.0f);
		(&V_0)->f4 = (0.0f);
		(&V_0)->f8 = (0.0f);
		(&V_0)->f12 = (0.0f);
		(&V_0)->f1 = (0.0f);
		(&V_0)->f5 = (1.0f);
		(&V_0)->f9 = (0.0f);
		(&V_0)->f13 = (0.0f);
		(&V_0)->f2 = (0.0f);
		(&V_0)->f6 = (0.0f);
		(&V_0)->f10 = (1.0f);
		(&V_0)->f14 = (0.0f);
		(&V_0)->f3 = (0.0f);
		(&V_0)->f7 = (0.0f);
		(&V_0)->f11 = (0.0f);
		(&V_0)->f15 = (1.0f);
		t392  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2463 (t392 * __this, t67  p0, t70  p1, t67  p2, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		t70  L_1 = p1;
		t67  L_2 = p2;
		t392  L_3 = m2464(NULL, L_0, L_1, L_2, NULL);
		*__this = L_3;
		return;
	}
}
extern "C" t392  m2464 (t7 * __this , t67  p0, t70  p1, t67  p2, const MethodInfo* method)
{
	{
		t392  L_0 = m2465(NULL, (&p0), (&p1), (&p2), NULL);
		return L_0;
	}
}
extern "C" t392  m2465 (t7 * __this , t67 * p0, t70 * p1, t67 * p2, const MethodInfo* method)
{
	typedef t392  (*m2465_ftn) (t67 *, t70 *, t67 *);
	static m2465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2466 (t392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, ((int32_t)16)));
		float L_1 = (__this->f0);
		float L_2 = L_1;
		t7 * L_3 = Box(t60_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float L_5 = (__this->f4);
		float L_6 = L_5;
		t7 * L_7 = Box(t60_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float L_9 = (__this->f8);
		float L_10 = L_9;
		t7 * L_11 = Box(t60_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		float L_13 = (__this->f12);
		float L_14 = L_13;
		t7 * L_15 = Box(t60_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t69* L_16 = L_12;
		float L_17 = (__this->f1);
		float L_18 = L_17;
		t7 * L_19 = Box(t60_TI_var, &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((t7 **)(t7 **)SZArrayLdElema(L_16, 4)) = (t7 *)L_19;
		t69* L_20 = L_16;
		float L_21 = (__this->f5);
		float L_22 = L_21;
		t7 * L_23 = Box(t60_TI_var, &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		*((t7 **)(t7 **)SZArrayLdElema(L_20, 5)) = (t7 *)L_23;
		t69* L_24 = L_20;
		float L_25 = (__this->f9);
		float L_26 = L_25;
		t7 * L_27 = Box(t60_TI_var, &L_26);
		ArrayElementTypeCheck (L_24, L_27);
		*((t7 **)(t7 **)SZArrayLdElema(L_24, 6)) = (t7 *)L_27;
		t69* L_28 = L_24;
		float L_29 = (__this->f13);
		float L_30 = L_29;
		t7 * L_31 = Box(t60_TI_var, &L_30);
		ArrayElementTypeCheck (L_28, L_31);
		*((t7 **)(t7 **)SZArrayLdElema(L_28, 7)) = (t7 *)L_31;
		t69* L_32 = L_28;
		float L_33 = (__this->f2);
		float L_34 = L_33;
		t7 * L_35 = Box(t60_TI_var, &L_34);
		ArrayElementTypeCheck (L_32, L_35);
		*((t7 **)(t7 **)SZArrayLdElema(L_32, 8)) = (t7 *)L_35;
		t69* L_36 = L_32;
		float L_37 = (__this->f6);
		float L_38 = L_37;
		t7 * L_39 = Box(t60_TI_var, &L_38);
		ArrayElementTypeCheck (L_36, L_39);
		*((t7 **)(t7 **)SZArrayLdElema(L_36, ((int32_t)9))) = (t7 *)L_39;
		t69* L_40 = L_36;
		float L_41 = (__this->f10);
		float L_42 = L_41;
		t7 * L_43 = Box(t60_TI_var, &L_42);
		ArrayElementTypeCheck (L_40, L_43);
		*((t7 **)(t7 **)SZArrayLdElema(L_40, ((int32_t)10))) = (t7 *)L_43;
		t69* L_44 = L_40;
		float L_45 = (__this->f14);
		float L_46 = L_45;
		t7 * L_47 = Box(t60_TI_var, &L_46);
		ArrayElementTypeCheck (L_44, L_47);
		*((t7 **)(t7 **)SZArrayLdElema(L_44, ((int32_t)11))) = (t7 *)L_47;
		t69* L_48 = L_44;
		float L_49 = (__this->f3);
		float L_50 = L_49;
		t7 * L_51 = Box(t60_TI_var, &L_50);
		ArrayElementTypeCheck (L_48, L_51);
		*((t7 **)(t7 **)SZArrayLdElema(L_48, ((int32_t)12))) = (t7 *)L_51;
		t69* L_52 = L_48;
		float L_53 = (__this->f7);
		float L_54 = L_53;
		t7 * L_55 = Box(t60_TI_var, &L_54);
		ArrayElementTypeCheck (L_52, L_55);
		*((t7 **)(t7 **)SZArrayLdElema(L_52, ((int32_t)13))) = (t7 *)L_55;
		t69* L_56 = L_52;
		float L_57 = (__this->f11);
		float L_58 = L_57;
		t7 * L_59 = Box(t60_TI_var, &L_58);
		ArrayElementTypeCheck (L_56, L_59);
		*((t7 **)(t7 **)SZArrayLdElema(L_56, ((int32_t)14))) = (t7 *)L_59;
		t69* L_60 = L_56;
		float L_61 = (__this->f15);
		float L_62 = L_61;
		t7 * L_63 = Box(t60_TI_var, &L_62);
		ArrayElementTypeCheck (L_60, L_63);
		*((t7 **)(t7 **)SZArrayLdElema(L_60, ((int32_t)15))) = (t7 *)L_63;
		t47* L_64 = m2600(NULL, (t47*) &_stringLiteral185, L_60, NULL);
		return L_64;
	}
}
extern TypeInfo* t69_TI_var;
extern "C" t47* m2467 (t392 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, ((int32_t)16)));
		float* L_1 = &(__this->f0);
		t47* L_2 = p0;
		t47* L_3 = m3239(L_1, L_2, NULL);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float* L_5 = &(__this->f4);
		t47* L_6 = p0;
		t47* L_7 = m3239(L_5, L_6, NULL);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float* L_9 = &(__this->f8);
		t47* L_10 = p0;
		t47* L_11 = m3239(L_9, L_10, NULL);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		float* L_13 = &(__this->f12);
		t47* L_14 = p0;
		t47* L_15 = m3239(L_13, L_14, NULL);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t69* L_16 = L_12;
		float* L_17 = &(__this->f1);
		t47* L_18 = p0;
		t47* L_19 = m3239(L_17, L_18, NULL);
		ArrayElementTypeCheck (L_16, L_19);
		*((t7 **)(t7 **)SZArrayLdElema(L_16, 4)) = (t7 *)L_19;
		t69* L_20 = L_16;
		float* L_21 = &(__this->f5);
		t47* L_22 = p0;
		t47* L_23 = m3239(L_21, L_22, NULL);
		ArrayElementTypeCheck (L_20, L_23);
		*((t7 **)(t7 **)SZArrayLdElema(L_20, 5)) = (t7 *)L_23;
		t69* L_24 = L_20;
		float* L_25 = &(__this->f9);
		t47* L_26 = p0;
		t47* L_27 = m3239(L_25, L_26, NULL);
		ArrayElementTypeCheck (L_24, L_27);
		*((t7 **)(t7 **)SZArrayLdElema(L_24, 6)) = (t7 *)L_27;
		t69* L_28 = L_24;
		float* L_29 = &(__this->f13);
		t47* L_30 = p0;
		t47* L_31 = m3239(L_29, L_30, NULL);
		ArrayElementTypeCheck (L_28, L_31);
		*((t7 **)(t7 **)SZArrayLdElema(L_28, 7)) = (t7 *)L_31;
		t69* L_32 = L_28;
		float* L_33 = &(__this->f2);
		t47* L_34 = p0;
		t47* L_35 = m3239(L_33, L_34, NULL);
		ArrayElementTypeCheck (L_32, L_35);
		*((t7 **)(t7 **)SZArrayLdElema(L_32, 8)) = (t7 *)L_35;
		t69* L_36 = L_32;
		float* L_37 = &(__this->f6);
		t47* L_38 = p0;
		t47* L_39 = m3239(L_37, L_38, NULL);
		ArrayElementTypeCheck (L_36, L_39);
		*((t7 **)(t7 **)SZArrayLdElema(L_36, ((int32_t)9))) = (t7 *)L_39;
		t69* L_40 = L_36;
		float* L_41 = &(__this->f10);
		t47* L_42 = p0;
		t47* L_43 = m3239(L_41, L_42, NULL);
		ArrayElementTypeCheck (L_40, L_43);
		*((t7 **)(t7 **)SZArrayLdElema(L_40, ((int32_t)10))) = (t7 *)L_43;
		t69* L_44 = L_40;
		float* L_45 = &(__this->f14);
		t47* L_46 = p0;
		t47* L_47 = m3239(L_45, L_46, NULL);
		ArrayElementTypeCheck (L_44, L_47);
		*((t7 **)(t7 **)SZArrayLdElema(L_44, ((int32_t)11))) = (t7 *)L_47;
		t69* L_48 = L_44;
		float* L_49 = &(__this->f3);
		t47* L_50 = p0;
		t47* L_51 = m3239(L_49, L_50, NULL);
		ArrayElementTypeCheck (L_48, L_51);
		*((t7 **)(t7 **)SZArrayLdElema(L_48, ((int32_t)12))) = (t7 *)L_51;
		t69* L_52 = L_48;
		float* L_53 = &(__this->f7);
		t47* L_54 = p0;
		t47* L_55 = m3239(L_53, L_54, NULL);
		ArrayElementTypeCheck (L_52, L_55);
		*((t7 **)(t7 **)SZArrayLdElema(L_52, ((int32_t)13))) = (t7 *)L_55;
		t69* L_56 = L_52;
		float* L_57 = &(__this->f11);
		t47* L_58 = p0;
		t47* L_59 = m3239(L_57, L_58, NULL);
		ArrayElementTypeCheck (L_56, L_59);
		*((t7 **)(t7 **)SZArrayLdElema(L_56, ((int32_t)14))) = (t7 *)L_59;
		t69* L_60 = L_56;
		float* L_61 = &(__this->f15);
		t47* L_62 = p0;
		t47* L_63 = m3239(L_61, L_62, NULL);
		ArrayElementTypeCheck (L_60, L_63);
		*((t7 **)(t7 **)SZArrayLdElema(L_60, ((int32_t)15))) = (t7 *)L_63;
		t47* L_64 = m2600(NULL, (t47*) &_stringLiteral186, L_60, NULL);
		return L_64;
	}
}
extern "C" t392  m2468 (t7 * __this , float p0, float p1, float p2, float p3, float p4, float p5, const MethodInfo* method)
{
	typedef t392  (*m2468_ftn) (float, float, float, float, float, float);
	static m2468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2468_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern "C" t392  m2469 (t7 * __this , float p0, float p1, float p2, float p3, const MethodInfo* method)
{
	typedef t392  (*m2469_ftn) (float, float, float, float);
	static m2469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern TypeInfo* t392_TI_var;
extern "C" t392  m2470 (t7 * __this , t392  p0, t392  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t392_TI_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	t392  V_0 = {0};
	{
		Initobj (t392_TI_var, (&V_0));
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f0);
		float L_2 = ((&p0)->f4);
		float L_3 = ((&p1)->f1);
		float L_4 = ((&p0)->f8);
		float L_5 = ((&p1)->f2);
		float L_6 = ((&p0)->f12);
		float L_7 = ((&p1)->f3);
		(&V_0)->f0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&p0)->f0);
		float L_9 = ((&p1)->f4);
		float L_10 = ((&p0)->f4);
		float L_11 = ((&p1)->f5);
		float L_12 = ((&p0)->f8);
		float L_13 = ((&p1)->f6);
		float L_14 = ((&p0)->f12);
		float L_15 = ((&p1)->f7);
		(&V_0)->f4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&p0)->f0);
		float L_17 = ((&p1)->f8);
		float L_18 = ((&p0)->f4);
		float L_19 = ((&p1)->f9);
		float L_20 = ((&p0)->f8);
		float L_21 = ((&p1)->f10);
		float L_22 = ((&p0)->f12);
		float L_23 = ((&p1)->f11);
		(&V_0)->f8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&p0)->f0);
		float L_25 = ((&p1)->f12);
		float L_26 = ((&p0)->f4);
		float L_27 = ((&p1)->f13);
		float L_28 = ((&p0)->f8);
		float L_29 = ((&p1)->f14);
		float L_30 = ((&p0)->f12);
		float L_31 = ((&p1)->f15);
		(&V_0)->f12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&p0)->f1);
		float L_33 = ((&p1)->f0);
		float L_34 = ((&p0)->f5);
		float L_35 = ((&p1)->f1);
		float L_36 = ((&p0)->f9);
		float L_37 = ((&p1)->f2);
		float L_38 = ((&p0)->f13);
		float L_39 = ((&p1)->f3);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&p0)->f1);
		float L_41 = ((&p1)->f4);
		float L_42 = ((&p0)->f5);
		float L_43 = ((&p1)->f5);
		float L_44 = ((&p0)->f9);
		float L_45 = ((&p1)->f6);
		float L_46 = ((&p0)->f13);
		float L_47 = ((&p1)->f7);
		(&V_0)->f5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&p0)->f1);
		float L_49 = ((&p1)->f8);
		float L_50 = ((&p0)->f5);
		float L_51 = ((&p1)->f9);
		float L_52 = ((&p0)->f9);
		float L_53 = ((&p1)->f10);
		float L_54 = ((&p0)->f13);
		float L_55 = ((&p1)->f11);
		(&V_0)->f9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&p0)->f1);
		float L_57 = ((&p1)->f12);
		float L_58 = ((&p0)->f5);
		float L_59 = ((&p1)->f13);
		float L_60 = ((&p0)->f9);
		float L_61 = ((&p1)->f14);
		float L_62 = ((&p0)->f13);
		float L_63 = ((&p1)->f15);
		(&V_0)->f13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&p0)->f2);
		float L_65 = ((&p1)->f0);
		float L_66 = ((&p0)->f6);
		float L_67 = ((&p1)->f1);
		float L_68 = ((&p0)->f10);
		float L_69 = ((&p1)->f2);
		float L_70 = ((&p0)->f14);
		float L_71 = ((&p1)->f3);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&p0)->f2);
		float L_73 = ((&p1)->f4);
		float L_74 = ((&p0)->f6);
		float L_75 = ((&p1)->f5);
		float L_76 = ((&p0)->f10);
		float L_77 = ((&p1)->f6);
		float L_78 = ((&p0)->f14);
		float L_79 = ((&p1)->f7);
		(&V_0)->f6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&p0)->f2);
		float L_81 = ((&p1)->f8);
		float L_82 = ((&p0)->f6);
		float L_83 = ((&p1)->f9);
		float L_84 = ((&p0)->f10);
		float L_85 = ((&p1)->f10);
		float L_86 = ((&p0)->f14);
		float L_87 = ((&p1)->f11);
		(&V_0)->f10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&p0)->f2);
		float L_89 = ((&p1)->f12);
		float L_90 = ((&p0)->f6);
		float L_91 = ((&p1)->f13);
		float L_92 = ((&p0)->f10);
		float L_93 = ((&p1)->f14);
		float L_94 = ((&p0)->f14);
		float L_95 = ((&p1)->f15);
		(&V_0)->f14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&p0)->f3);
		float L_97 = ((&p1)->f0);
		float L_98 = ((&p0)->f7);
		float L_99 = ((&p1)->f1);
		float L_100 = ((&p0)->f11);
		float L_101 = ((&p1)->f2);
		float L_102 = ((&p0)->f15);
		float L_103 = ((&p1)->f3);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&p0)->f3);
		float L_105 = ((&p1)->f4);
		float L_106 = ((&p0)->f7);
		float L_107 = ((&p1)->f5);
		float L_108 = ((&p0)->f11);
		float L_109 = ((&p1)->f6);
		float L_110 = ((&p0)->f15);
		float L_111 = ((&p1)->f7);
		(&V_0)->f7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&p0)->f3);
		float L_113 = ((&p1)->f8);
		float L_114 = ((&p0)->f7);
		float L_115 = ((&p1)->f9);
		float L_116 = ((&p0)->f11);
		float L_117 = ((&p1)->f10);
		float L_118 = ((&p0)->f15);
		float L_119 = ((&p1)->f11);
		(&V_0)->f11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&p0)->f3);
		float L_121 = ((&p1)->f12);
		float L_122 = ((&p0)->f7);
		float L_123 = ((&p1)->f13);
		float L_124 = ((&p0)->f11);
		float L_125 = ((&p1)->f14);
		float L_126 = ((&p0)->f15);
		float L_127 = ((&p1)->f15);
		(&V_0)->f15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		t392  L_128 = V_0;
		return L_128;
	}
}
extern "C" t327  m2471 (t7 * __this , t392  p0, t327  p1, const MethodInfo* method)
{
	t327  V_0 = {0};
	{
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f4);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f8);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f12);
		float L_7 = ((&p1)->f4);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&p0)->f1);
		float L_9 = ((&p1)->f1);
		float L_10 = ((&p0)->f5);
		float L_11 = ((&p1)->f2);
		float L_12 = ((&p0)->f9);
		float L_13 = ((&p1)->f3);
		float L_14 = ((&p0)->f13);
		float L_15 = ((&p1)->f4);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&p0)->f2);
		float L_17 = ((&p1)->f1);
		float L_18 = ((&p0)->f6);
		float L_19 = ((&p1)->f2);
		float L_20 = ((&p0)->f10);
		float L_21 = ((&p1)->f3);
		float L_22 = ((&p0)->f14);
		float L_23 = ((&p1)->f4);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&p0)->f3);
		float L_25 = ((&p1)->f1);
		float L_26 = ((&p0)->f7);
		float L_27 = ((&p1)->f2);
		float L_28 = ((&p0)->f11);
		float L_29 = ((&p1)->f3);
		float L_30 = ((&p0)->f15);
		float L_31 = ((&p1)->f4);
		(&V_0)->f4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		t327  L_32 = V_0;
		return L_32;
	}
}
extern "C" bool m2472 (t7 * __this , t392  p0, t392  p1, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		t327  L_0 = m2454((&p0), 0, NULL);
		t327  L_1 = m2454((&p1), 0, NULL);
		bool L_2 = m2507(NULL, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		t327  L_3 = m2454((&p0), 1, NULL);
		t327  L_4 = m2454((&p1), 1, NULL);
		bool L_5 = m2507(NULL, L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t327  L_6 = m2454((&p0), 2, NULL);
		t327  L_7 = m2454((&p1), 2, NULL);
		bool L_8 = m2507(NULL, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		t327  L_9 = m2454((&p0), 3, NULL);
		t327  L_10 = m2454((&p1), 3, NULL);
		bool L_11 = m2507(NULL, L_9, L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
extern "C" bool m2473 (t7 * __this , t392  p0, t392  p1, const MethodInfo* method)
{
	{
		t392  L_0 = p0;
		t392  L_1 = p1;
		bool L_2 = m2472(NULL, L_0, L_1, NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t246.h"
#ifndef _MSC_VER
#else
#endif
#include "t246MD.h"

#include "t348.h"


extern "C" void m1853 (t246 * __this, t67  p0, t67  p1, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		__this->f0 = L_0;
		t67  L_1 = p1;
		t67  L_2 = m1903(NULL, L_1, (0.5f), NULL);
		__this->f1 = L_2;
		return;
	}
}
extern "C" int32_t m2474 (t246 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	t67  V_1 = {0};
	{
		t67  L_0 = m1854(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = m2414((&V_0), NULL);
		t67  L_2 = m2476(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = m2414((&V_1), NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern TypeInfo* t246_TI_var;
extern TypeInfo* t67_TI_var;
extern "C" bool m2475 (t246 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t246_TI_var = il2cpp_codegen_type_info_from_index(312);
		t67_TI_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	t246  V_0 = {0};
	t67  V_1 = {0};
	t67  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t246_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t246 *)((t246 *)UnBox (L_1, t246_TI_var))));
		t67  L_2 = m1854(__this, NULL);
		V_1 = L_2;
		t67  L_3 = m1854((&V_0), NULL);
		t67  L_4 = L_3;
		t7 * L_5 = Box(t67_TI_var, &L_4);
		bool L_6 = m2415((&V_1), L_5, NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		t67  L_7 = m2476(__this, NULL);
		V_2 = L_7;
		t67  L_8 = m2476((&V_0), NULL);
		t67  L_9 = L_8;
		t7 * L_10 = Box(t67_TI_var, &L_9);
		bool L_11 = m2415((&V_2), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
extern "C" t67  m1854 (t246 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m1856 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t67  m1844 (t246 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f1);
		t67  L_1 = m1903(NULL, L_0, (2.0f), NULL);
		return L_1;
	}
}
extern "C" void m1855 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		t67  L_1 = m1903(NULL, L_0, (0.5f), NULL);
		__this->f1 = L_1;
		return;
	}
}
extern "C" t67  m2476 (t246 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2477 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t67  m1849 (t246 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = m1854(__this, NULL);
		t67  L_1 = m2476(__this, NULL);
		t67  L_2 = m1658(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" void m2478 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		t67  L_1 = m1863(__this, NULL);
		m2480(__this, L_0, L_1, NULL);
		return;
	}
}
extern "C" t67  m1863 (t246 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = m1854(__this, NULL);
		t67  L_1 = m2476(__this, NULL);
		t67  L_2 = m1811(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" void m2479 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m1849(__this, NULL);
		t67  L_1 = p0;
		m2480(__this, L_0, L_1, NULL);
		return;
	}
}
extern "C" void m2480 (t246 * __this, t67  p0, t67  p1, const MethodInfo* method)
{
	{
		t67  L_0 = p1;
		t67  L_1 = p0;
		t67  L_2 = m1658(NULL, L_0, L_1, NULL);
		t67  L_3 = m1903(NULL, L_2, (0.5f), NULL);
		m2477(__this, L_3, NULL);
		t67  L_4 = p0;
		t67  L_5 = m2476(__this, NULL);
		t67  L_6 = m1811(NULL, L_4, L_5, NULL);
		m1856(__this, L_6, NULL);
		return;
	}
}
extern "C" void m1862 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m1849(__this, NULL);
		t67  L_1 = p0;
		t67  L_2 = m1860(NULL, L_0, L_1, NULL);
		t67  L_3 = m1863(__this, NULL);
		t67  L_4 = p0;
		t67  L_5 = m1861(NULL, L_3, L_4, NULL);
		m2480(__this, L_2, L_5, NULL);
		return;
	}
}
extern "C" void m2481 (t246 * __this, t246  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m1854((&p0), NULL);
		t67  L_1 = m2476((&p0), NULL);
		t67  L_2 = m1658(NULL, L_0, L_1, NULL);
		m1862(__this, L_2, NULL);
		t67  L_3 = m1854((&p0), NULL);
		t67  L_4 = m2476((&p0), NULL);
		t67  L_5 = m1811(NULL, L_3, L_4, NULL);
		m1862(__this, L_5, NULL);
		return;
	}
}
extern "C" void m2482 (t246 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		p0 = ((float)((float)L_0*(float)(0.5f)));
		t67  L_1 = m2476(__this, NULL);
		float L_2 = p0;
		float L_3 = p0;
		float L_4 = p0;
		t67  L_5 = {0};
		m209(&L_5, L_2, L_3, L_4, NULL);
		t67  L_6 = m1811(NULL, L_1, L_5, NULL);
		m2477(__this, L_6, NULL);
		return;
	}
}
extern "C" void m2483 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m2476(__this, NULL);
		t67  L_1 = p0;
		t67  L_2 = m1903(NULL, L_1, (0.5f), NULL);
		t67  L_3 = m1811(NULL, L_0, L_2, NULL);
		m2477(__this, L_3, NULL);
		return;
	}
}
extern "C" bool m2484 (t246 * __this, t246  p0, const MethodInfo* method)
{
	t67  V_0 = {0};
	t67  V_1 = {0};
	t67  V_2 = {0};
	t67  V_3 = {0};
	t67  V_4 = {0};
	t67  V_5 = {0};
	t67  V_6 = {0};
	t67  V_7 = {0};
	t67  V_8 = {0};
	t67  V_9 = {0};
	t67  V_10 = {0};
	t67  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		t67  L_0 = m1849(__this, NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->f1);
		t67  L_2 = m1863((&p0), NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->f1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		t67  L_4 = m1863(__this, NULL);
		V_2 = L_4;
		float L_5 = ((&V_2)->f1);
		t67  L_6 = m1849((&p0), NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->f1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		t67  L_8 = m1849(__this, NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->f2);
		t67  L_10 = m1863((&p0), NULL);
		V_5 = L_10;
		float L_11 = ((&V_5)->f2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		t67  L_12 = m1863(__this, NULL);
		V_6 = L_12;
		float L_13 = ((&V_6)->f2);
		t67  L_14 = m1849((&p0), NULL);
		V_7 = L_14;
		float L_15 = ((&V_7)->f2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		t67  L_16 = m1849(__this, NULL);
		V_8 = L_16;
		float L_17 = ((&V_8)->f3);
		t67  L_18 = m1863((&p0), NULL);
		V_9 = L_18;
		float L_19 = ((&V_9)->f3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		t67  L_20 = m1863(__this, NULL);
		V_10 = L_20;
		float L_21 = ((&V_10)->f3);
		t67  L_22 = m1849((&p0), NULL);
		V_11 = L_22;
		float L_23 = ((&V_11)->f3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
extern "C" bool m2485 (t7 * __this , t246  p0, t67  p1, const MethodInfo* method)
{
	{
		bool L_0 = m2486(NULL, (&p0), (&p1), NULL);
		return L_0;
	}
}
extern "C" bool m2486 (t7 * __this , t246 * p0, t67 * p1, const MethodInfo* method)
{
	typedef bool (*m2486_ftn) (t246 *, t67 *);
	static m2486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" bool m2487 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		bool L_1 = m2485(NULL, (*(t246 *)__this), L_0, NULL);
		return L_1;
	}
}
extern "C" float m2488 (t7 * __this , t246  p0, t67  p1, const MethodInfo* method)
{
	{
		float L_0 = m2489(NULL, (&p0), (&p1), NULL);
		return L_0;
	}
}
extern "C" float m2489 (t7 * __this , t246 * p0, t67 * p1, const MethodInfo* method)
{
	typedef float (*m2489_ftn) (t246 *, t67 *);
	static m2489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" float m2490 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		float L_1 = m2488(NULL, (*(t246 *)__this), L_0, NULL);
		return L_1;
	}
}
extern "C" bool m2491 (t7 * __this , t348 * p0, t246 * p1, float* p2, const MethodInfo* method)
{
	{
		t348 * L_0 = p0;
		t246 * L_1 = p1;
		float* L_2 = p2;
		bool L_3 = m2492(NULL, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
extern "C" bool m2492 (t7 * __this , t348 * p0, t246 * p1, float* p2, const MethodInfo* method)
{
	typedef bool (*m2492_ftn) (t348 *, t246 *, float*);
	static m2492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2492_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" bool m2493 (t246 * __this, t348  p0, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = m2491(NULL, (&p0), __this, (&V_0), NULL);
		return L_0;
	}
}
extern "C" bool m2494 (t246 * __this, t348  p0, float* p1, const MethodInfo* method)
{
	{
		float* L_0 = p1;
		bool L_1 = m2491(NULL, (&p0), __this, L_0, NULL);
		return L_1;
	}
}
extern "C" t67  m2495 (t7 * __this , t246 * p0, t67 * p1, const MethodInfo* method)
{
	{
		t246 * L_0 = p0;
		t67 * L_1 = p1;
		t67  L_2 = m2496(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" t67  m2496 (t7 * __this , t246 * p0, t67 * p1, const MethodInfo* method)
{
	typedef t67  (*m2496_ftn) (t246 *, t67 *);
	static m2496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t67  m2497 (t246 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m2495(NULL, __this, (&p0), NULL);
		return L_0;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t67_TI_var;
extern "C" t47* m2498 (t246 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t67_TI_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 2));
		t67  L_1 = (__this->f0);
		t67  L_2 = L_1;
		t7 * L_3 = Box(t67_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		t67  L_5 = (__this->f1);
		t67  L_6 = L_5;
		t7 * L_7 = Box(t67_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t47* L_8 = m2600(NULL, (t47*) &_stringLiteral187, L_4, NULL);
		return L_8;
	}
}
extern TypeInfo* t69_TI_var;
extern "C" t47* m2499 (t246 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 2));
		t67 * L_1 = &(__this->f0);
		t47* L_2 = p0;
		t47* L_3 = m2418(L_1, L_2, NULL);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		t67 * L_5 = &(__this->f1);
		t47* L_6 = p0;
		t47* L_7 = m2418(L_5, L_6, NULL);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t47* L_8 = m2600(NULL, (t47*) &_stringLiteral187, L_4, NULL);
		return L_8;
	}
}
extern "C" bool m2500 (t7 * __this , t246  p0, t246  p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t67  L_0 = m1854((&p0), NULL);
		t67  L_1 = m1854((&p1), NULL);
		bool L_2 = m2423(NULL, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		t67  L_3 = m2476((&p0), NULL);
		t67  L_4 = m2476((&p1), NULL);
		bool L_5 = m2423(NULL, L_3, L_4, NULL);
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
extern "C" bool m1847 (t7 * __this , t246  p0, t246  p1, const MethodInfo* method)
{
	{
		t246  L_0 = p0;
		t246  L_1 = p1;
		bool L_2 = m2500(NULL, L_0, L_1, NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m1626 (t327 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		float L_2 = p2;
		__this->f3 = L_2;
		float L_3 = p3;
		__this->f4 = L_3;
		return;
	}
}
extern TypeInfo* t691_TI_var;
extern "C" float m1700 (t327 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->f1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->f2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->f3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->f4);
		return L_5;
	}

IL_0039:
	{
		t691 * L_6 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_6, (t47*) &_stringLiteral188, NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern TypeInfo* t691_TI_var;
extern "C" void m1702 (t327 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = p1;
		__this->f1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = p1;
		__this->f2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = p1;
		__this->f3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = p1;
		__this->f4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		t691 * L_6 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_6, (t47*) &_stringLiteral188, NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m2501 (t327 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m3224(L_0, NULL);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m3224(L_2, NULL);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m3224(L_4, NULL);
		float* L_6 = &(__this->f4);
		int32_t L_7 = m3224(L_6, NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern TypeInfo* t327_TI_var;
extern "C" bool m2502 (t327 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t327_TI_var = il2cpp_codegen_type_info_from_index(628);
		s_Il2CppMethodIntialized = true;
	}
	t327  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t327_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t327 *)((t327 *)UnBox (L_1, t327_TI_var))));
		float* L_2 = &(__this->f1);
		float L_3 = ((&V_0)->f1);
		bool L_4 = m3238(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m3238(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m3238(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f4);
		float L_12 = ((&V_0)->f4);
		bool L_13 = m3238(L_11, L_12, NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t60_TI_var;
extern "C" t47* m2503 (t327 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		float L_1 = (__this->f1);
		float L_2 = L_1;
		t7 * L_3 = Box(t60_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		float L_5 = (__this->f2);
		float L_6 = L_5;
		t7 * L_7 = Box(t60_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t69* L_8 = L_4;
		float L_9 = (__this->f3);
		float L_10 = L_9;
		t7 * L_11 = Box(t60_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 2)) = (t7 *)L_11;
		t69* L_12 = L_8;
		float L_13 = (__this->f4);
		float L_14 = L_13;
		t7 * L_15 = Box(t60_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t47* L_16 = m2600(NULL, (t47*) &_stringLiteral182, L_12, NULL);
		return L_16;
	}
}
extern "C" float m2504 (t7 * __this , t327  p0, t327  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f4);
		float L_7 = ((&p1)->f4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
extern "C" float m2505 (t7 * __this , t327  p0, const MethodInfo* method)
{
	{
		t327  L_0 = p0;
		t327  L_1 = p0;
		float L_2 = m2504(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" float m1677 (t327 * __this, const MethodInfo* method)
{
	{
		float L_0 = m2504(NULL, (*(t327 *)__this), (*(t327 *)__this), NULL);
		return L_0;
	}
}
extern "C" t327  m1681 (t7 * __this , const MethodInfo* method)
{
	{
		t327  L_0 = {0};
		m1626(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		return L_0;
	}
}
extern "C" t327  m2506 (t7 * __this , t327  p0, t327  p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f4);
		float L_7 = ((&p1)->f4);
		t327  L_8 = {0};
		m1626(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), NULL);
		return L_8;
	}
}
extern "C" t327  m1695 (t7 * __this , t327  p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		float L_4 = ((&p0)->f3);
		float L_5 = p1;
		float L_6 = ((&p0)->f4);
		float L_7 = p1;
		t327  L_8 = {0};
		m1626(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), NULL);
		return L_8;
	}
}
extern "C" bool m2507 (t7 * __this , t327  p0, t327  p1, const MethodInfo* method)
{
	{
		t327  L_0 = p0;
		t327  L_1 = p1;
		t327  L_2 = m2506(NULL, L_0, L_1, NULL);
		float L_3 = m2505(NULL, L_2, NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t348MD.h"



extern "C" void m2508 (t348 * __this, t67  p0, t67  p1, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		__this->f0 = L_0;
		t67  L_1 = m1876((&p1), NULL);
		__this->f1 = L_1;
		return;
	}
}
extern "C" t67  m1557 (t348 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t67  m1558 (t348 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t67  m1760 (t348 * __this, float p0, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f0);
		t67  L_1 = (__this->f1);
		float L_2 = p0;
		t67  L_3 = m1903(NULL, L_1, L_2, NULL);
		t67  L_4 = m1811(NULL, L_0, L_3, NULL);
		return L_4;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t67_TI_var;
extern "C" t47* m2509 (t348 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t67_TI_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 2));
		t67  L_1 = (__this->f0);
		t67  L_2 = L_1;
		t7 * L_3 = Box(t67_TI_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_3;
		t69* L_4 = L_0;
		t67  L_5 = (__this->f1);
		t67  L_6 = L_5;
		t7 * L_7 = Box(t67_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 1)) = (t7 *)L_7;
		t47* L_8 = m2600(NULL, (t47*) &_stringLiteral189, L_4, NULL);
		return L_8;
	}
}
#include "t378.h"
#ifndef _MSC_VER
#else
#endif
#include "t378MD.h"



extern "C" void m1758 (t378 * __this, t67  p0, t67  p1, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		t67  L_1 = m2416(NULL, L_0, NULL);
		__this->f0 = L_1;
		t67  L_2 = p0;
		t67  L_3 = p1;
		float L_4 = m1656(NULL, L_2, L_3, NULL);
		__this->f1 = ((-L_4));
		return;
	}
}
extern "C" t67  m2510 (t378 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m2511 (t378 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" bool m1759 (t378 * __this, t348  p0, float* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		t67  L_0 = m1558((&p0), NULL);
		t67  L_1 = m2510(__this, NULL);
		float L_2 = m1656(NULL, L_0, L_1, NULL);
		V_0 = L_2;
		t67  L_3 = m1557((&p0), NULL);
		t67  L_4 = m2510(__this, NULL);
		float L_5 = m1656(NULL, L_3, L_4, NULL);
		float L_6 = m2511(__this, NULL);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		bool L_8 = m1544(NULL, L_7, (0.0f), NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = p1;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = p1;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = p1;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
#include "t525.h"
#ifndef _MSC_VER
#else
#endif
#include "t525MD.h"



extern TypeInfo* t525_TI_var;
extern "C" void m2512 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t525_TI_var = il2cpp_codegen_type_info_from_index(923);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((t525_SFs*)t525_TI_var->static_fields)->f0 = (1.17549435E-38f);
		il2cpp_codegen_memory_barrier();
		((t525_SFs*)t525_TI_var->static_fields)->f1 = (1.401298E-45f);
		float L_0 = ((t525_SFs*)t525_TI_var->static_fields)->f1;
		il2cpp_codegen_memory_barrier();
		((t525_SFs*)t525_TI_var->static_fields)->f2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
#include "t341.h"
#ifndef _MSC_VER
#else
#endif

#include "t692.h"
#include "t693MD.h"


extern TypeInfo* t525_TI_var;
extern TypeInfo* t341_TI_var;
extern "C" void m2513 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t525_TI_var = il2cpp_codegen_type_info_from_index(923);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t525_TI_var);
		bool L_0 = ((t525_SFs*)t525_TI_var->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t525_TI_var);
		float L_1 = ((t525_SFs*)t525_TI_var->static_fields)->f0;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t525_TI_var);
		float L_2 = ((t525_SFs*)t525_TI_var->static_fields)->f1;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((t341_SFs*)t341_TI_var->static_fields)->f0 = G_B3_0;
		return;
	}
}
extern "C" float m2514 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m2515 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m2516 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m2517 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
extern "C" float m1920 (t7 * __this , float p0, float p1, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m1776 (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern "C" float m1880 (t7 * __this , float p0, float p1, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m1774 (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern "C" float m2518 (t7 * __this , float p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
extern "C" float m1919 (t7 * __this , float p0, float p1, const MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = m3240(NULL, (((double)L_0)), (((double)L_1)), NULL);
		return (((float)L_2));
	}
}
extern "C" float m2519 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m2520 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" int32_t m1930 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern "C" int32_t m1932 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern "C" int32_t m1684 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern "C" float m1852 (t7 * __this , float p0, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = p0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
extern "C" float m1680 (t7 * __this , float p0, float p1, float p2, const MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = p1;
		p0 = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = p0;
		float L_4 = p2;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = p2;
		p0 = L_5;
	}

IL_0019:
	{
		float L_6 = p0;
		return L_6;
	}
}
extern "C" int32_t m1596 (t7 * __this , int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = p1;
		p0 = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = p0;
		int32_t L_4 = p2;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = p2;
		p0 = L_5;
	}

IL_0019:
	{
		int32_t L_6 = p0;
		return L_6;
	}
}
extern "C" float m1674 (t7 * __this , float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = p0;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = p0;
		return L_2;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" float m1703 (t7 * __this , float p0, float p1, float p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p0;
		float L_1 = p1;
		float L_2 = p0;
		float L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_4 = m1674(NULL, L_3, NULL);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
extern TypeInfo* t341_TI_var;
extern "C" bool m1544 (t7 * __this , float p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p1;
		float L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = p0;
		float L_4 = fabsf(L_3);
		float L_5 = p1;
		float L_6 = fabsf(L_5);
		float L_7 = m1880(NULL, L_4, L_6, NULL);
		float L_8 = ((t341_SFs*)t341_TI_var->static_fields)->f0;
		float L_9 = m1880(NULL, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), NULL);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
extern TypeInfo* t341_TI_var;
extern "C" float m1845 (t7 * __this , float p0, float p1, float* p2, float p3, float p4, float p5, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_1 = m1880(NULL, (0.0001f), L_0, NULL);
		p3 = L_1;
		float L_2 = p3;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = p5;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = p0;
		float L_12 = p1;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = p1;
		V_4 = L_13;
		float L_14 = p4;
		float L_15 = p3;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = m1680(NULL, L_16, ((-L_17)), L_18, NULL);
		V_3 = L_19;
		float L_20 = p0;
		float L_21 = V_3;
		p1 = ((float)((float)L_20-(float)L_21));
		float* L_22 = p2;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = p5;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = p2;
		float* L_27 = p2;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = p1;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = p0;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = p2;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = p5;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
extern TypeInfo* t341_TI_var;
extern "C" float m1713 (t7 * __this , float p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p0;
		float L_1 = p0;
		float L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = p1;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
extern "C" float m1712 (t7 * __this , float p0, float p1, float p2, const MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = p2;
		float L_3 = p0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return (0.0f);
	}

IL_0014:
	{
		float L_4 = p2;
		float L_5 = p1;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		return (1.0f);
	}

IL_0021:
	{
		float L_6 = p2;
		float L_7 = p0;
		p2 = ((float)((float)L_6-(float)L_7));
		float L_8 = p2;
		float L_9 = p1;
		float L_10 = p0;
		p2 = ((float)((float)L_8/(float)((float)((float)L_9-(float)L_10))));
		float L_11 = p2;
		return L_11;
	}

IL_002f:
	{
		float L_12 = p0;
		float L_13 = p1;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_005e;
		}
	}
	{
		float L_14 = p2;
		float L_15 = p1;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		return (1.0f);
	}

IL_0043:
	{
		float L_16 = p2;
		float L_17 = p0;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0f);
	}

IL_0050:
	{
		float L_18 = p2;
		float L_19 = p1;
		float L_20 = p0;
		float L_21 = p1;
		return ((float)((float)(1.0f)-(float)((float)((float)((float)((float)L_18-(float)L_19))/(float)((float)((float)L_20-(float)L_21))))));
	}

IL_005e:
	{
		return (0.0f);
	}
}
#include "t390.h"
#ifndef _MSC_VER
#else
#endif
#include "t390MD.h"



#include "t240.h"
#ifndef _MSC_VER
#else
#endif
#include "t240MD.h"

#include "t182.h"


extern "C" void m1835 (t240 * __this, t66 * p0, t182 * p1, int32_t p2, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m1833 (t240 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#include "t401.h"
#ifndef _MSC_VER
#else
#endif
#include "t401MD.h"



#include "t400.h"
#ifndef _MSC_VER
#else
#endif
#include "t400MD.h"



#include "t404.h"
#ifndef _MSC_VER
#else
#endif
#include "t404MD.h"



extern "C" void m1948 (t404 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2521 (t404 * __this, t182 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2521((t404 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t182 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t182 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t404(Il2CppObject* delegate, t182 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t182 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
extern "C" t7 * m2522 (t404 * __this, t182 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m2523 (t404 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
#include "t182MD.h"

#include "t361.h"
#include "t68.h"
#include "t361MD.h"
#include "t55MD.h"
#include "t68MD.h"


extern TypeInfo* t182_TI_var;
extern TypeInfo* t404_TI_var;
extern "C" void m1949 (t7 * __this , t404 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t182_TI_var = il2cpp_codegen_type_info_from_index(250);
		t404_TI_var = il2cpp_codegen_type_info_from_index(344);
		s_Il2CppMethodIntialized = true;
	}
	{
		t404 * L_0 = ((t182_SFs*)t182_TI_var->static_fields)->f2;
		t404 * L_1 = p0;
		t361 * L_2 = m1639(NULL, L_0, L_1, NULL);
		((t182_SFs*)t182_TI_var->static_fields)->f2 = ((t404 *)Castclass(L_2, t404_TI_var));
		return;
	}
}
extern TypeInfo* t182_TI_var;
extern TypeInfo* t404_TI_var;
extern "C" void m2524 (t7 * __this , t404 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t182_TI_var = il2cpp_codegen_type_info_from_index(250);
		t404_TI_var = il2cpp_codegen_type_info_from_index(344);
		s_Il2CppMethodIntialized = true;
	}
	{
		t404 * L_0 = ((t182_SFs*)t182_TI_var->static_fields)->f2;
		t404 * L_1 = p0;
		t361 * L_2 = m1640(NULL, L_0, L_1, NULL);
		((t182_SFs*)t182_TI_var->static_fields)->f2 = ((t404 *)Castclass(L_2, t404_TI_var));
		return;
	}
}
extern "C" void m2525 (t182 * __this, t219 * p0, const MethodInfo* method)
{
	typedef void (*m2525_ftn) (t182 *, t219 *);
	static m2525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t219  m1618 (t182 * __this, const MethodInfo* method)
{
	t219  V_0 = {0};
	{
		m2525(__this, (&V_0), NULL);
		t219  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2526 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2526_ftn) (t182 *, t74 *);
	static m2526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2527 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2527_ftn) (t182 *, t74 *);
	static m2527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t74  m1690 (t182 * __this, const MethodInfo* method)
{
	t74  V_0 = {0};
	{
		m2526(__this, (&V_0), NULL);
		t74  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m1805 (t182 * __this, t74  p0, const MethodInfo* method)
{
	{
		m2527(__this, (&p0), NULL);
		return;
	}
}
extern "C" void m2528 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2528_ftn) (t182 *, t74 *);
	static m2528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2529 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2529_ftn) (t182 *, t74 *);
	static m2529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t74  m1800 (t182 * __this, const MethodInfo* method)
{
	t74  V_0 = {0};
	{
		m2528(__this, (&V_0), NULL);
		t74  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m1691 (t182 * __this, t74  p0, const MethodInfo* method)
{
	{
		m2529(__this, (&p0), NULL);
		return;
	}
}
extern "C" void m2530 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2530_ftn) (t182 *, t74 *);
	static m2530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2531 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2531_ftn) (t182 *, t74 *);
	static m2531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t74  m1801 (t182 * __this, const MethodInfo* method)
{
	t74  V_0 = {0};
	{
		m2530(__this, (&V_0), NULL);
		t74  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m1806 (t182 * __this, t74  p0, const MethodInfo* method)
{
	{
		m2531(__this, (&p0), NULL);
		return;
	}
}
extern "C" void m2532 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2532_ftn) (t182 *, t74 *);
	static m2532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2533 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2533_ftn) (t182 *, t74 *);
	static m2533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t74  m1802 (t182 * __this, const MethodInfo* method)
{
	t74  V_0 = {0};
	{
		m2532(__this, (&V_0), NULL);
		t74  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m1692 (t182 * __this, t74  p0, const MethodInfo* method)
{
	{
		m2533(__this, (&p0), NULL);
		return;
	}
}
extern "C" void m2534 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2534_ftn) (t182 *, t74 *);
	static m2534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2535 (t182 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2535_ftn) (t182 *, t74 *);
	static m2535_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2535_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t74  m1686 (t182 * __this, const MethodInfo* method)
{
	t74  V_0 = {0};
	{
		m2534(__this, (&V_0), NULL);
		t74  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m1807 (t182 * __this, t74  p0, const MethodInfo* method)
{
	{
		m2535(__this, (&p0), NULL);
		return;
	}
}
extern TypeInfo* t182_TI_var;
extern "C" void m2536 (t7 * __this , t182 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t182_TI_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	{
		t404 * L_0 = ((t182_SFs*)t182_TI_var->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t404 * L_1 = ((t182_SFs*)t182_TI_var->static_fields)->f2;
		t182 * L_2 = p0;
		VirtActionInvoker1< t182 * >::Invoke(10 /* System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern "C" void m2537 (t182 * __this, t245* p0, const MethodInfo* method)
{
	t219  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		t245* L_0 = p0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t245* L_1 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		m1452(NULL, (t47*) &_stringLiteral190, NULL);
		return;
	}

IL_001a:
	{
		t219  L_2 = m1618(__this, NULL);
		V_0 = L_2;
		float L_3 = m1624((&V_0), NULL);
		V_1 = L_3;
		float L_4 = m1625((&V_0), NULL);
		V_2 = L_4;
		float L_5 = m1707((&V_0), NULL);
		V_3 = L_5;
		float L_6 = m1708((&V_0), NULL);
		V_4 = L_6;
		t245* L_7 = p0;
		float L_8 = V_1;
		float L_9 = V_2;
		t67  L_10 = {0};
		m209(&L_10, L_8, L_9, (0.0f), NULL);
		*((t67 *)(t67 *)SZArrayLdElema(L_7, 0)) = L_10;
		t245* L_11 = p0;
		float L_12 = V_1;
		float L_13 = V_4;
		t67  L_14 = {0};
		m209(&L_14, L_12, L_13, (0.0f), NULL);
		*((t67 *)(t67 *)SZArrayLdElema(L_11, 1)) = L_14;
		t245* L_15 = p0;
		float L_16 = V_3;
		float L_17 = V_4;
		t67  L_18 = {0};
		m209(&L_18, L_16, L_17, (0.0f), NULL);
		*((t67 *)(t67 *)SZArrayLdElema(L_15, 2)) = L_18;
		t245* L_19 = p0;
		float L_20 = V_3;
		float L_21 = V_2;
		t67  L_22 = {0};
		m209(&L_22, L_20, L_21, (0.0f), NULL);
		*((t67 *)(t67 *)SZArrayLdElema(L_19, 3)) = L_22;
		return;
	}
}
extern "C" void m1858 (t182 * __this, t245* p0, const MethodInfo* method)
{
	t68 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t245* L_0 = p0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t245* L_1 = p0;
		if ((((int32_t)(((int32_t)(((t52 *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		m1452(NULL, (t47*) &_stringLiteral191, NULL);
		return;
	}

IL_001a:
	{
		t245* L_2 = p0;
		m2537(__this, L_2, NULL);
		t68 * L_3 = m176(__this, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		t245* L_4 = p0;
		int32_t L_5 = V_1;
		t68 * L_6 = V_0;
		t245* L_7 = p0;
		int32_t L_8 = V_1;
		t67  L_9 = m1878(L_6, (*(t67 *)((t67 *)(t67 *)SZArrayLdElema(L_7, L_8))), NULL);
		*((t67 *)(t67 *)SZArrayLdElema(L_4, L_5)) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
extern "C" void m1947 (t182 * __this, int32_t p0, float p1, float p2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	t74  V_3 = {0};
	t74  V_4 = {0};
	t74  V_5 = {0};
	t74  V_6 = {0};
	t74  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	t74 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	t74 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	t74 * G_B13_2 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = p0;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = p0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = p0;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		t74  L_5 = m1690(__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		m1711((&V_3), L_6, L_7, NULL);
		t74  L_8 = V_3;
		m1805(__this, L_8, NULL);
		t74  L_9 = m1800(__this, NULL);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		m1711((&V_3), L_10, L_11, NULL);
		t74  L_12 = V_3;
		m1691(__this, L_12, NULL);
		t74  L_13 = m1802(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = p2;
		m1711((&V_4), L_14, L_15, NULL);
		t74  L_16 = V_4;
		m1692(__this, L_16, NULL);
		t74  L_17 = m1801(__this, NULL);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = p1;
		float L_21 = p2;
		t74  L_22 = m1686(__this, NULL);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = m1701((&V_6), L_23, NULL);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = p1;
		float L_26 = p2;
		t74  L_27 = m1686(__this, NULL);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = m1701((&V_7), L_28, NULL);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		m1711(G_B13_2, G_B13_1, G_B13_0, NULL);
		t74  L_30 = V_5;
		m1806(__this, L_30, NULL);
		return;
	}
}
extern "C" void m1917 (t182 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	t74  V_1 = {0};
	t74  V_2 = {0};
	t74  V_3 = {0};
	t74  V_4 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		t74  L_1 = m1802(__this, NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = p1;
		t74  L_4 = m2538(__this, NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = m1701((&V_2), L_5, NULL);
		t74  L_7 = m1800(__this, NULL);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = m1701((&V_3), L_8, NULL);
		t74  L_10 = m1690(__this, NULL);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = m1701((&V_4), L_11, NULL);
		m1711((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), NULL);
		t74  L_13 = V_1;
		m1692(__this, L_13, NULL);
		return;
	}
}
extern TypeInfo* t182_TI_var;
extern "C" t74  m2538 (t182 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t182_TI_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	t182 * V_0 = {0};
	t219  V_1 = {0};
	{
		t68 * L_0 = m1486(__this, NULL);
		V_0 = ((t182 *)IsInst(L_0, t182_TI_var));
		t182 * L_1 = V_0;
		bool L_2 = m1450(NULL, L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		t74  L_3 = m1493(NULL, NULL);
		return L_3;
	}

IL_001d:
	{
		t182 * L_4 = V_0;
		t219  L_5 = m1618(L_4, NULL);
		V_1 = L_5;
		t74  L_6 = m1696((&V_1), NULL);
		return L_6;
	}
}
#include "t526.h"
#ifndef _MSC_VER
#else
#endif
#include "t526MD.h"

#include "t527MD.h"


extern "C" void m2539 (t526 * __this, const MethodInfo* method)
{
	{
		m2601(__this, NULL);
		return;
	}
}
extern "C" t66 * m2540 (t526 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		t347 * L_1 = (__this->f2);
		t66 * L_2 = m2541(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
#include "t527.h"
#ifndef _MSC_VER
#else
#endif



extern "C" t66 * m2541 (t7 * __this , t47* p0, t347 * p1, const MethodInfo* method)
{
	typedef t66 * (*m2541_ftn) (t47*, t347 *);
	static m2541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t46.h"
#ifndef _MSC_VER
#else
#endif
#include "t46MD.h"



extern "C" t47* m220 (t46 * __this, const MethodInfo* method)
{
	typedef t47* (*m220_ftn) (t46 *);
	static m220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m220_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextAsset::get_text()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47* m2542 (t46 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m220(__this, NULL);
		return L_0;
	}
}
#include "t528.h"
#ifndef _MSC_VER
#else
#endif
#include "t528MD.h"

#include "t529MD.h"


extern "C" void m2543 (t528 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t421.h"
#ifndef _MSC_VER
#else
#endif
#include "t421MD.h"



extern "C" void m1995 (t421 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t530.h"
#ifndef _MSC_VER
#else
#endif
#include "t530MD.h"



extern "C" int32_t m2544 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef int32_t (*m2544_ftn) (t47*);
	static m2544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(p0);
}
#include "t179.h"
#ifndef _MSC_VER
#else
#endif
#include "t179MD.h"



extern "C" void m1892 (t179 * __this, t179 * p0, const MethodInfo* method)
{
	{
		m2675(__this, NULL);
		t179 * L_0 = p0;
		m2550(NULL, __this, L_0, NULL);
		return;
	}
}
extern "C" t233 * m1897 (t179 * __this, const MethodInfo* method)
{
	{
		t233 * L_0 = m2545(__this, (t47*) &_stringLiteral192, NULL);
		return L_0;
	}
}
extern "C" t233 * m2545 (t179 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t L_1 = m2544(NULL, L_0, NULL);
		t233 * L_2 = m2546(__this, L_1, NULL);
		return L_2;
	}
}
extern "C" t233 * m2546 (t179 * __this, int32_t p0, const MethodInfo* method)
{
	typedef t233 * (*m2546_ftn) (t179 *, int32_t);
	static m2546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m2547 (t179 * __this, t47* p0, float p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t L_1 = m2544(NULL, L_0, NULL);
		float L_2 = p1;
		m2548(__this, L_1, L_2, NULL);
		return;
	}
}
extern "C" void m2548 (t179 * __this, int32_t p0, float p1, const MethodInfo* method)
{
	typedef void (*m2548_ftn) (t179 *, int32_t, float);
	static m2548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" void m1893 (t179 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t L_1 = p1;
		m2547(__this, L_0, (((float)L_1)), NULL);
		return;
	}
}
extern "C" bool m1890 (t179 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t L_1 = m2544(NULL, L_0, NULL);
		bool L_2 = m2549(__this, L_1, NULL);
		return L_2;
	}
}
extern "C" bool m2549 (t179 * __this, int32_t p0, const MethodInfo* method)
{
	typedef bool (*m2549_ftn) (t179 *, int32_t);
	static m2549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m2550 (t7 * __this , t179 * p0, t179 * p1, const MethodInfo* method)
{
	typedef void (*m2550_ftn) (t179 *, t179 *);
	static m2550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(p0, p1);
}
#include "t531.h"
#ifndef _MSC_VER
#else
#endif
#include "t531MD.h"



extern "C" void m2551 (t531 * __this, const MethodInfo* method)
{
	{
		m2552(NULL, __this, NULL);
		return;
	}
}
extern "C" void m2552 (t7 * __this , t531 * p0, const MethodInfo* method)
{
	{
		t531 * L_0 = p0;
		m2553(NULL, L_0, NULL);
		return;
	}
}
extern "C" void m2553 (t7 * __this , t531 * p0, const MethodInfo* method)
{
	typedef void (*m2553_ftn) (t531 *);
	static m2553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0);
}
extern "C" void m2554 (t531 * __this, t157  p0, const MethodInfo* method)
{
	{
		t157  L_0 = p0;
		m2555(NULL, L_0, __this, NULL);
		return;
	}
}
extern "C" void m2555 (t7 * __this , t157  p0, t531 * p1, const MethodInfo* method)
{
	{
		t531 * L_0 = p1;
		m2556(NULL, (&p0), L_0, NULL);
		return;
	}
}
extern "C" void m2556 (t7 * __this , t157 * p0, t531 * p1, const MethodInfo* method)
{
	typedef void (*m2556_ftn) (t157 *, t531 *);
	static m2556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m2557 (t531 * __this, t67  p0, t157  p1, float p2, const MethodInfo* method)
{
	t157  V_0 = {0};
	{
		t157  L_0 = p1;
		float L_1 = p2;
		t157  L_2 = m1875(NULL, L_0, ((float)((float)(2.0f)*(float)L_1)), NULL);
		V_0 = L_2;
		t67  L_3 = p0;
		t157  L_4 = V_0;
		m2558(NULL, L_3, L_4, __this, NULL);
		return;
	}
}
extern "C" void m2558 (t7 * __this , t67  p0, t157  p1, t531 * p2, const MethodInfo* method)
{
	{
		t531 * L_0 = p2;
		m2559(NULL, (&p0), (&p1), L_0, NULL);
		return;
	}
}
extern "C" void m2559 (t7 * __this , t67 * p0, t157 * p1, t531 * p2, const MethodInfo* method)
{
	typedef void (*m2559_ftn) (t67 *, t157 *, t531 *);
	static m2559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t691_TI_var;
extern "C" float m2560 (t531 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->f0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->f1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->f2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->f3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->f4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->f5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->f6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->f7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->f8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->f9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->f10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->f11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->f12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->f13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->f14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->f15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->f16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->f17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->f18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->f19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->f20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->f21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->f22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->f23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->f24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->f25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->f26);
		return L_30;
	}

IL_013d:
	{
		t691 * L_31 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_31, (t47*) &_stringLiteral193, NULL);
		il2cpp_codegen_raise_exception(L_31);
	}
}
extern TypeInfo* t691_TI_var;
extern "C" void m2561 (t531 * __this, int32_t p0, int32_t p1, float p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t691_TI_var = il2cpp_codegen_type_info_from_index(919);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = p2;
		__this->f0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = p2;
		__this->f1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = p2;
		__this->f2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = p2;
		__this->f3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = p2;
		__this->f4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = p2;
		__this->f5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = p2;
		__this->f6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = p2;
		__this->f7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = p2;
		__this->f8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = p2;
		__this->f9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = p2;
		__this->f10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = p2;
		__this->f11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = p2;
		__this->f12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = p2;
		__this->f13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = p2;
		__this->f14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = p2;
		__this->f15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = p2;
		__this->f16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = p2;
		__this->f17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = p2;
		__this->f18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = p2;
		__this->f19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = p2;
		__this->f20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = p2;
		__this->f21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = p2;
		__this->f22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = p2;
		__this->f23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = p2;
		__this->f24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = p2;
		__this->f25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = p2;
		__this->f26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		t691 * L_31 = (t691 *)il2cpp_codegen_object_new (t691_TI_var);
		m3237(L_31, (t47*) &_stringLiteral193, NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
extern "C" int32_t m2562 (t531 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->f0);
		int32_t L_2 = m3224(L_1, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->f1);
		int32_t L_5 = m3224(L_4, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->f2);
		int32_t L_8 = m3224(L_7, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->f3);
		int32_t L_11 = m3224(L_10, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->f4);
		int32_t L_14 = m3224(L_13, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->f5);
		int32_t L_17 = m3224(L_16, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->f6);
		int32_t L_20 = m3224(L_19, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->f7);
		int32_t L_23 = m3224(L_22, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->f8);
		int32_t L_26 = m3224(L_25, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->f9);
		int32_t L_29 = m3224(L_28, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->f10);
		int32_t L_32 = m3224(L_31, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->f11);
		int32_t L_35 = m3224(L_34, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->f12);
		int32_t L_38 = m3224(L_37, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->f13);
		int32_t L_41 = m3224(L_40, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->f14);
		int32_t L_44 = m3224(L_43, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->f15);
		int32_t L_47 = m3224(L_46, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->f16);
		int32_t L_50 = m3224(L_49, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->f17);
		int32_t L_53 = m3224(L_52, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->f18);
		int32_t L_56 = m3224(L_55, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->f19);
		int32_t L_59 = m3224(L_58, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->f20);
		int32_t L_62 = m3224(L_61, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->f21);
		int32_t L_65 = m3224(L_64, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->f22);
		int32_t L_68 = m3224(L_67, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->f23);
		int32_t L_71 = m3224(L_70, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->f24);
		int32_t L_74 = m3224(L_73, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->f25);
		int32_t L_77 = m3224(L_76, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->f26);
		int32_t L_80 = m3224(L_79, NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
extern TypeInfo* t531_TI_var;
extern "C" bool m2563 (t531 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t531_TI_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	t531  V_0 = {0};
	{
		t7 * L_0 = p0;
		if (((t7 *)IsInst(L_0, t531_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		V_0 = ((*(t531 *)((t531 *)UnBox (L_1, t531_TI_var))));
		t531  L_2 = V_0;
		bool L_3 = m2567(NULL, (*(t531 *)__this), L_2, NULL);
		return L_3;
	}
}
extern TypeInfo* t531_TI_var;
extern "C" t531  m2564 (t7 * __this , t531  p0, float p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t531_TI_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	t531  V_0 = {0};
	{
		Initobj (t531_TI_var, (&V_0));
		float L_0 = ((&p0)->f0);
		float L_1 = p1;
		(&V_0)->f0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&p0)->f1);
		float L_3 = p1;
		(&V_0)->f1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&p0)->f2);
		float L_5 = p1;
		(&V_0)->f2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&p0)->f3);
		float L_7 = p1;
		(&V_0)->f3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&p0)->f4);
		float L_9 = p1;
		(&V_0)->f4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&p0)->f5);
		float L_11 = p1;
		(&V_0)->f5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&p0)->f6);
		float L_13 = p1;
		(&V_0)->f6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&p0)->f7);
		float L_15 = p1;
		(&V_0)->f7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&p0)->f8);
		float L_17 = p1;
		(&V_0)->f8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&p0)->f9);
		float L_19 = p1;
		(&V_0)->f9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&p0)->f10);
		float L_21 = p1;
		(&V_0)->f10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&p0)->f11);
		float L_23 = p1;
		(&V_0)->f11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&p0)->f12);
		float L_25 = p1;
		(&V_0)->f12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&p0)->f13);
		float L_27 = p1;
		(&V_0)->f13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&p0)->f14);
		float L_29 = p1;
		(&V_0)->f14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&p0)->f15);
		float L_31 = p1;
		(&V_0)->f15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&p0)->f16);
		float L_33 = p1;
		(&V_0)->f16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&p0)->f17);
		float L_35 = p1;
		(&V_0)->f17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&p0)->f18);
		float L_37 = p1;
		(&V_0)->f18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&p0)->f19);
		float L_39 = p1;
		(&V_0)->f19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&p0)->f20);
		float L_41 = p1;
		(&V_0)->f20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&p0)->f21);
		float L_43 = p1;
		(&V_0)->f21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&p0)->f22);
		float L_45 = p1;
		(&V_0)->f22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&p0)->f23);
		float L_47 = p1;
		(&V_0)->f23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&p0)->f24);
		float L_49 = p1;
		(&V_0)->f24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&p0)->f25);
		float L_51 = p1;
		(&V_0)->f25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&p0)->f26);
		float L_53 = p1;
		(&V_0)->f26 = ((float)((float)L_52*(float)L_53));
		t531  L_54 = V_0;
		return L_54;
	}
}
extern TypeInfo* t531_TI_var;
extern "C" t531  m2565 (t7 * __this , float p0, t531  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t531_TI_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	t531  V_0 = {0};
	{
		Initobj (t531_TI_var, (&V_0));
		float L_0 = ((&p1)->f0);
		float L_1 = p0;
		(&V_0)->f0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&p1)->f1);
		float L_3 = p0;
		(&V_0)->f1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&p1)->f2);
		float L_5 = p0;
		(&V_0)->f2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&p1)->f3);
		float L_7 = p0;
		(&V_0)->f3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&p1)->f4);
		float L_9 = p0;
		(&V_0)->f4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&p1)->f5);
		float L_11 = p0;
		(&V_0)->f5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&p1)->f6);
		float L_13 = p0;
		(&V_0)->f6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&p1)->f7);
		float L_15 = p0;
		(&V_0)->f7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&p1)->f8);
		float L_17 = p0;
		(&V_0)->f8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&p1)->f9);
		float L_19 = p0;
		(&V_0)->f9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&p1)->f10);
		float L_21 = p0;
		(&V_0)->f10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&p1)->f11);
		float L_23 = p0;
		(&V_0)->f11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&p1)->f12);
		float L_25 = p0;
		(&V_0)->f12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&p1)->f13);
		float L_27 = p0;
		(&V_0)->f13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&p1)->f14);
		float L_29 = p0;
		(&V_0)->f14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&p1)->f15);
		float L_31 = p0;
		(&V_0)->f15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&p1)->f16);
		float L_33 = p0;
		(&V_0)->f16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&p1)->f17);
		float L_35 = p0;
		(&V_0)->f17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&p1)->f18);
		float L_37 = p0;
		(&V_0)->f18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&p1)->f19);
		float L_39 = p0;
		(&V_0)->f19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&p1)->f20);
		float L_41 = p0;
		(&V_0)->f20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&p1)->f21);
		float L_43 = p0;
		(&V_0)->f21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&p1)->f22);
		float L_45 = p0;
		(&V_0)->f22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&p1)->f23);
		float L_47 = p0;
		(&V_0)->f23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&p1)->f24);
		float L_49 = p0;
		(&V_0)->f24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&p1)->f25);
		float L_51 = p0;
		(&V_0)->f25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&p1)->f26);
		float L_53 = p0;
		(&V_0)->f26 = ((float)((float)L_52*(float)L_53));
		t531  L_54 = V_0;
		return L_54;
	}
}
extern TypeInfo* t531_TI_var;
extern "C" t531  m2566 (t7 * __this , t531  p0, t531  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t531_TI_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	t531  V_0 = {0};
	{
		Initobj (t531_TI_var, (&V_0));
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f0);
		(&V_0)->f0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f1);
		(&V_0)->f1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&p0)->f2);
		float L_5 = ((&p1)->f2);
		(&V_0)->f2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		(&V_0)->f3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&p0)->f4);
		float L_9 = ((&p1)->f4);
		(&V_0)->f4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&p0)->f5);
		float L_11 = ((&p1)->f5);
		(&V_0)->f5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&p0)->f6);
		float L_13 = ((&p1)->f6);
		(&V_0)->f6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&p0)->f7);
		float L_15 = ((&p1)->f7);
		(&V_0)->f7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&p0)->f8);
		float L_17 = ((&p1)->f8);
		(&V_0)->f8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&p0)->f9);
		float L_19 = ((&p1)->f9);
		(&V_0)->f9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&p0)->f10);
		float L_21 = ((&p1)->f10);
		(&V_0)->f10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&p0)->f11);
		float L_23 = ((&p1)->f11);
		(&V_0)->f11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&p0)->f12);
		float L_25 = ((&p1)->f12);
		(&V_0)->f12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&p0)->f13);
		float L_27 = ((&p1)->f13);
		(&V_0)->f13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&p0)->f14);
		float L_29 = ((&p1)->f14);
		(&V_0)->f14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&p0)->f15);
		float L_31 = ((&p1)->f15);
		(&V_0)->f15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&p0)->f16);
		float L_33 = ((&p1)->f16);
		(&V_0)->f16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&p0)->f17);
		float L_35 = ((&p1)->f17);
		(&V_0)->f17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&p0)->f18);
		float L_37 = ((&p1)->f18);
		(&V_0)->f18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&p0)->f19);
		float L_39 = ((&p1)->f19);
		(&V_0)->f19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&p0)->f20);
		float L_41 = ((&p1)->f20);
		(&V_0)->f20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&p0)->f21);
		float L_43 = ((&p1)->f21);
		(&V_0)->f21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&p0)->f22);
		float L_45 = ((&p1)->f22);
		(&V_0)->f22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&p0)->f23);
		float L_47 = ((&p1)->f23);
		(&V_0)->f23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&p0)->f24);
		float L_49 = ((&p1)->f24);
		(&V_0)->f24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&p0)->f25);
		float L_51 = ((&p1)->f25);
		(&V_0)->f25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&p0)->f26);
		float L_53 = ((&p1)->f26);
		(&V_0)->f26 = ((float)((float)L_52+(float)L_53));
		t531  L_54 = V_0;
		return L_54;
	}
}
extern "C" bool m2567 (t7 * __this , t531  p0, t531  p1, const MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&p0)->f2);
		float L_5 = ((&p1)->f2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&p0)->f4);
		float L_9 = ((&p1)->f4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&p0)->f5);
		float L_11 = ((&p1)->f5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&p0)->f6);
		float L_13 = ((&p1)->f6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&p0)->f7);
		float L_15 = ((&p1)->f7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&p0)->f8);
		float L_17 = ((&p1)->f8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&p0)->f9);
		float L_19 = ((&p1)->f9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&p0)->f10);
		float L_21 = ((&p1)->f10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&p0)->f11);
		float L_23 = ((&p1)->f11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&p0)->f12);
		float L_25 = ((&p1)->f12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&p0)->f13);
		float L_27 = ((&p1)->f13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&p0)->f14);
		float L_29 = ((&p1)->f14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&p0)->f15);
		float L_31 = ((&p1)->f15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&p0)->f16);
		float L_33 = ((&p1)->f16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&p0)->f17);
		float L_35 = ((&p1)->f17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&p0)->f18);
		float L_37 = ((&p1)->f18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&p0)->f19);
		float L_39 = ((&p1)->f19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&p0)->f20);
		float L_41 = ((&p1)->f20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&p0)->f21);
		float L_43 = ((&p1)->f21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&p0)->f22);
		float L_45 = ((&p1)->f22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&p0)->f23);
		float L_47 = ((&p1)->f23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&p0)->f24);
		float L_49 = ((&p1)->f24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&p0)->f25);
		float L_51 = ((&p1)->f25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&p0)->f26);
		float L_53 = ((&p1)->f26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
extern "C" bool m2568 (t7 * __this , t531  p0, t531  p1, const MethodInfo* method)
{
	{
		t531  L_0 = p0;
		t531  L_1 = p1;
		bool L_2 = m2567(NULL, L_0, L_1, NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t56.h"
#ifndef _MSC_VER
#else
#endif
#include "t56MD.h"



extern "C" t219  m1683 (t56 * __this, const MethodInfo* method)
{
	typedef t219  (*m1683_ftn) (t56 *);
	static m1683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m1678 (t56 * __this, const MethodInfo* method)
{
	typedef float (*m1678_ftn) (t56 *);
	static m1678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern "C" t180 * m1675 (t56 * __this, const MethodInfo* method)
{
	typedef t180 * (*m1675_ftn) (t56 *);
	static m1675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
extern "C" t219  m1706 (t56 * __this, const MethodInfo* method)
{
	typedef t219  (*m1706_ftn) (t56 *);
	static m1706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
extern "C" t327  m1676 (t56 * __this, const MethodInfo* method)
{
	typedef t327  (*m1676_ftn) (t56 *);
	static m1676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
#include "t3.h"
#ifndef _MSC_VER
#else
#endif
#include "t3MD.h"



extern "C" void m161 (t3 * __this, t56 * p0, const MethodInfo* method)
{
	{
		t56 * L_0 = p0;
		m2569(__this, L_0, NULL);
		return;
	}
}
extern "C" void m2569 (t3 * __this, t56 * p0, const MethodInfo* method)
{
	typedef void (*m2569_ftn) (t3 *, t56 *);
	static m2569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::SetSprite_INTERNAL(UnityEngine.Sprite)");
	_il2cpp_icall_func(__this, p0);
}
#include "t374.h"
#ifndef _MSC_VER
#else
#endif
#include "t374MD.h"



extern "C" t327  m1694 (t7 * __this , t56 * p0, const MethodInfo* method)
{
	typedef t327  (*m1694_ftn) (t56 *);
	static m1694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern "C" t327  m1693 (t7 * __this , t56 * p0, const MethodInfo* method)
{
	typedef t327  (*m1693_ftn) (t56 *);
	static m1693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern "C" t327  m1682 (t7 * __this , t56 * p0, const MethodInfo* method)
{
	typedef t327  (*m1682_ftn) (t56 *);
	static m1682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern "C" t74  m1704 (t7 * __this , t56 * p0, const MethodInfo* method)
{
	t74  V_0 = {0};
	{
		t56 * L_0 = p0;
		m2570(NULL, L_0, (&V_0), NULL);
		t74  L_1 = V_0;
		return L_1;
	}
}
extern "C" void m2570 (t7 * __this , t56 * p0, t74 * p1, const MethodInfo* method)
{
	typedef void (*m2570_ftn) (t56 *, t74 *);
	static m2570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1);
}
#include "t532.h"
#ifndef _MSC_VER
#else
#endif
#include "t532MD.h"

#include "t664.h"
#include "t373.h"
#include "t665.h"
#include "t533.h"
#include "t694.h"
#include "t695.h"
#include "t696.h"
#include "t697.h"
#include "t373MD.h"
#include "t665MD.h"
#include "t533MD.h"
#include "t664MD.h"
#include "t696MD.h"
#include "t695MD.h"
#include "t697MD.h"


extern "C" void m2571 (t532 * __this, t47* p0, t533 * p1, const MethodInfo* method)
{
	t48* V_0 = {0};
	{
		m162(__this, NULL);
		t533 * L_0 = p1;
		t664 * L_1 = m2590(L_0, NULL);
		t48* L_2 = m2584(NULL, L_1, NULL);
		V_0 = L_2;
		t47* L_3 = p0;
		t533 * L_4 = p1;
		t536* L_5 = m2591(L_4, NULL);
		t48* L_6 = V_0;
		m2575(__this, L_3, L_5, L_6, NULL);
		return;
	}
}
extern "C" void m2572 (t532 * __this, const MethodInfo* method)
{
	{
		m2574(__this, 1, NULL);
		return;
	}
}
extern "C" void m2573 (t532 * __this, const MethodInfo* method)
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
		m2574(__this, 0, NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m2574 (t532 * __this, bool p0, const MethodInfo* method)
{
	typedef void (*m2574_ftn) (t532 *, bool);
	static m2574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2575 (t532 * __this, t47* p0, t536* p1, t48* p2, const MethodInfo* method)
{
	typedef void (*m2575_ftn) (t532 *, t47*, t536*, t48*);
	static m2575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern TypeInfo* t373_TI_var;
extern "C" t664 * m2576 (t532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t373_TI_var = il2cpp_codegen_type_info_from_index(276);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = m2583(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t373 * L_1 = (t373 *)il2cpp_codegen_object_new (t373_TI_var);
		m3141(L_1, (t47*) &_stringLiteral194, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t47* L_2 = m2577(__this, NULL);
		t664 * L_3 = m2585(NULL, L_2, NULL);
		return L_3;
	}
}
extern "C" t47* m2577 (t532 * __this, const MethodInfo* method)
{
	typedef t47* (*m2577_ftn) (t532 *);
	static m2577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t373_TI_var;
extern "C" t47* m2578 (t532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t373_TI_var = il2cpp_codegen_type_info_from_index(276);
		s_Il2CppMethodIntialized = true;
	}
	t536* V_0 = {0};
	{
		bool L_0 = m2583(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t373 * L_1 = (t373 *)il2cpp_codegen_object_new (t373_TI_var);
		m3141(L_1, (t47*) &_stringLiteral195, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t536* L_2 = m2581(__this, NULL);
		V_0 = L_2;
		t665 * L_3 = m2580(__this, NULL);
		t536* L_4 = V_0;
		t536* L_5 = V_0;
		t47* L_6 = (t47*)VirtFuncInvoker3< t47*, t536*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((t52 *)L_5)->max_length))));
		return L_6;
	}
}
extern TypeInfo* t665_TI_var;
extern "C" t665 * m2579 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t665_TI_var = il2cpp_codegen_type_info_from_index(925);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
		t665 * L_0 = m3242(NULL, NULL);
		return L_0;
	}
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t665_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t665 * m2580 (t532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		t665_TI_var = il2cpp_codegen_type_info_from_index(925);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t47* V_3 = {0};
	int32_t V_4 = 0;
	t665 * V_5 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t47*)NULL;
		t664 * L_0 = m2576(__this, NULL);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t47*, t47** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, L_0, (t47*) &_stringLiteral196, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		t47* L_2 = V_0;
		int32_t L_3 = m3243(L_2, (t47*) &_stringLiteral197, 5, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		t47* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = m3244(L_5, ((int32_t)61), L_6, NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		t47* L_9 = V_0;
		int32_t L_10 = V_2;
		t47* L_11 = m1781(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), NULL);
		t47* L_12 = m3245(L_11, NULL);
		t221* L_13 = ((t221*)SZArrayNew(t221_TI_var, 2));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		t221* L_14 = L_13;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		t47* L_15 = m3246(L_12, L_14, NULL);
		t47* L_16 = m3245(L_15, NULL);
		V_3 = L_16;
		t47* L_17 = V_3;
		int32_t L_18 = m1817(L_17, ((int32_t)59), NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		t47* L_20 = V_3;
		int32_t L_21 = V_4;
		t47* L_22 = m1755(L_20, 0, L_21, NULL);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			t47* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_24 = m3247(NULL, L_23, NULL);
			V_5 = L_24;
			goto IL_00b6;
		}

IL_0090:
		{
			; // IL_0090: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		t47* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_26 = m205(NULL, (t47*) &_stringLiteral198, L_25, (t47*) &_stringLiteral104, NULL);
		m183(NULL, L_26, NULL);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
		t665 * L_27 = m3248(NULL, NULL);
		return L_27;
	}

IL_00b6:
	{
		t665 * L_28 = V_5;
		return L_28;
	}
}
extern "C" t536* m2581 (t532 * __this, const MethodInfo* method)
{
	typedef t536* (*m2581_ftn) (t532 *);
	static m2581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47* m2582 (t532 * __this, const MethodInfo* method)
{
	typedef t47* (*m2582_ftn) (t532 *);
	static m2582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m2583 (t532 * __this, const MethodInfo* method)
{
	typedef bool (*m2583_ftn) (t532 *);
	static m2583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t48_TI_var;
extern TypeInfo* t696_TI_var;
extern TypeInfo* t88_TI_var;
extern const MethodInfo* m3249_MI_var;
extern const MethodInfo* m3250_MI_var;
extern const MethodInfo* m3251_MI_var;
extern const MethodInfo* m3252_MI_var;
extern const MethodInfo* m3253_MI_var;
extern "C" t48* m2584 (t7 * __this , t664 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t696_TI_var = il2cpp_codegen_type_info_from_index(926);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		m3249_MI_var = il2cpp_codegen_method_info_from_index(2147483895);
		m3250_MI_var = il2cpp_codegen_method_info_from_index(2147483896);
		m3251_MI_var = il2cpp_codegen_method_info_from_index(2147483897);
		m3252_MI_var = il2cpp_codegen_method_info_from_index(2147483898);
		m3253_MI_var = il2cpp_codegen_method_info_from_index(2147483899);
		s_Il2CppMethodIntialized = true;
	}
	t48* V_0 = {0};
	int32_t V_1 = 0;
	t695  V_2 = {0};
	t696  V_3 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t664 * L_0 = p0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (t48*)NULL;
	}

IL_0008:
	{
		t664 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_1);
		V_0 = ((t48*)SZArrayNew(t48_TI_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		t664 * L_3 = p0;
		t696  L_4 = m3249(L_3, m3249_MI_var);
		V_3 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			t695  L_5 = m3250((&V_3), m3250_MI_var);
			V_2 = L_5;
			t48* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			t47* L_9 = m3251((&V_2), m3251_MI_var);
			t47* L_10 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.String::ToString() */, L_9);
			ArrayElementTypeCheck (L_6, L_10);
			*((t47**)(t47**)SZArrayLdElema(L_6, L_8)) = (t47*)L_10;
			t48* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			t47* L_14 = m3252((&V_2), m3252_MI_var);
			t47* L_15 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.String::ToString() */, L_14);
			ArrayElementTypeCheck (L_11, L_15);
			*((t47**)(t47**)SZArrayLdElema(L_11, L_13)) = (t47*)L_15;
		}

IL_0052:
		{
			bool L_16 = m3253((&V_3), m3253_MI_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		t696  L_17 = V_3;
		t696  L_18 = L_17;
		t7 * L_19 = Box(t696_TI_var, &L_18);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_19);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_006f:
	{
		t48* L_20 = V_0;
		return L_20;
	}
}
extern TypeInfo* t396_TI_var;
extern TypeInfo* t664_TI_var;
extern TypeInfo* t697_TI_var;
extern const MethodInfo* m3254_MI_var;
extern "C" t664 * m2585 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		t664_TI_var = il2cpp_codegen_type_info_from_index(927);
		t697_TI_var = il2cpp_codegen_type_info_from_index(928);
		m3254_MI_var = il2cpp_codegen_method_info_from_index(2147483900);
		s_Il2CppMethodIntialized = true;
	}
	t664 * V_0 = {0};
	t697 * V_1 = {0};
	int32_t V_2 = 0;
	t47* V_3 = {0};
	int32_t V_4 = 0;
	t47* V_5 = {0};
	t47* V_6 = {0};
	{
		t47* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t396 * L_1 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_1, (t47*) &_stringLiteral199, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t664 * L_2 = (t664 *)il2cpp_codegen_object_new (t664_TI_var);
		m3254(L_2, m3254_MI_var);
		V_0 = L_2;
		t47* L_3 = p0;
		t697 * L_4 = (t697 *)il2cpp_codegen_object_new (t697_TI_var);
		m3255(L_4, L_3, NULL);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		t697 * L_5 = V_1;
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(9 /* System.String System.IO.StringReader::ReadLine() */, L_5);
		V_3 = L_6;
		t47* L_7 = V_3;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		t47* L_10 = V_3;
		bool L_11 = m186(L_10, (t47*) &_stringLiteral200, NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		t664 * L_12 = V_0;
		t47* L_13 = V_3;
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_12, (t47*) &_stringLiteral201, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		t47* L_14 = V_3;
		int32_t L_15 = m3256(L_14, (t47*) &_stringLiteral202, NULL);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0020;
	}

IL_0077:
	{
		t47* L_17 = V_3;
		int32_t L_18 = V_4;
		t47* L_19 = m1755(L_17, 0, L_18, NULL);
		t47* L_20 = m3257(L_19, NULL);
		V_5 = L_20;
		t47* L_21 = V_3;
		int32_t L_22 = V_4;
		t47* L_23 = m1781(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), NULL);
		V_6 = L_23;
		t664 * L_24 = V_0;
		t47* L_25 = V_5;
		t47* L_26 = V_6;
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		t664 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t698.h"
#include "t535.h"
#include "t534.h"
#include "t698MD.h"
#include "t535MD.h"
#include "t537MD.h"
#include "t534MD.h"
#include "t62MD.h"


extern TypeInfo* t534_TI_var;
extern TypeInfo* t535_TI_var;
extern TypeInfo* t536_TI_var;
extern const MethodInfo* m3258_MI_var;
extern const MethodInfo* m3259_MI_var;
extern "C" void m2586 (t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t534_TI_var = il2cpp_codegen_type_info_from_index(930);
		t535_TI_var = il2cpp_codegen_type_info_from_index(931);
		t536_TI_var = il2cpp_codegen_type_info_from_index(929);
		m3258_MI_var = il2cpp_codegen_method_info_from_index(2147483901);
		m3259_MI_var = il2cpp_codegen_method_info_from_index(2147483902);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m162(__this, NULL);
		t534 * L_0 = (t534 *)il2cpp_codegen_object_new (t534_TI_var);
		m3258(L_0, m3258_MI_var);
		__this->f0 = L_0;
		t535 * L_1 = (t535 *)il2cpp_codegen_object_new (t535_TI_var);
		m3259(L_1, m3259_MI_var);
		__this->f1 = L_1;
		t535 * L_2 = (t535 *)il2cpp_codegen_object_new (t535_TI_var);
		m3259(L_2, m3259_MI_var);
		__this->f2 = L_2;
		t535 * L_3 = (t535 *)il2cpp_codegen_object_new (t535_TI_var);
		m3259(L_3, m3259_MI_var);
		__this->f3 = L_3;
		__this->f4 = ((t536*)SZArrayNew(t536_TI_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = m163(NULL, ((int32_t)48), ((int32_t)110), NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)7));
	}

IL_005c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)6));
	}

IL_0068:
	{
		t536* L_9 = (__this->f4);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10)) = (uint8_t)(((uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)40))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t665_TI_var;
extern "C" void m2587 (t533 * __this, t47* p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t665_TI_var = il2cpp_codegen_type_info_from_index(925);
		s_Il2CppMethodIntialized = true;
	}
	t665 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
		t665 * L_0 = m3248(NULL, NULL);
		V_0 = L_0;
		t47* L_1 = p0;
		t47* L_2 = p1;
		t665 * L_3 = V_0;
		m2588(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" void m2588 (t533 * __this, t47* p0, t47* p1, t665 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t535 * L_0 = (__this->f1);
		t47* L_1 = p0;
		VirtActionInvoker1< t47* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		t535 * L_2 = (__this->f2);
		VirtActionInvoker1< t47* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_2, (t47*)NULL);
		t534 * L_3 = (__this->f0);
		t665 * L_4 = p2;
		t47* L_5 = p1;
		t536* L_6 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		VirtActionInvoker1< t536* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0) */, L_3, L_6);
		t535 * L_7 = (__this->f3);
		t665 * L_8 = p2;
		t47* L_9 = (t47*)VirtFuncInvoker0< t47* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_10 = m205(NULL, (t47*) &_stringLiteral217, L_9, (t47*) &_stringLiteral205, NULL);
		VirtActionInvoker1< t47* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, L_10);
		return;
	}
}
extern "C" void m2589 (t533 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t47* L_1 = m3260((&p1), NULL);
		m2587(__this, L_0, L_1, NULL);
		return;
	}
}
extern TypeInfo* t664_TI_var;
extern TypeInfo* t665_TI_var;
extern TypeInfo* t47_TI_var;
extern const MethodInfo* m3254_MI_var;
extern "C" t664 * m2590 (t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t664_TI_var = il2cpp_codegen_type_info_from_index(927);
		t665_TI_var = il2cpp_codegen_type_info_from_index(925);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		m3254_MI_var = il2cpp_codegen_method_info_from_index(2147483900);
		s_Il2CppMethodIntialized = true;
	}
	t664 * V_0 = {0};
	{
		t664 * L_0 = (t664 *)il2cpp_codegen_object_new (t664_TI_var);
		m3254(L_0, m3254_MI_var);
		V_0 = L_0;
		bool L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		t664 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
		t665 * L_3 = m3248(NULL, NULL);
		t536* L_4 = (__this->f4);
		t536* L_5 = (__this->f4);
		t47* L_6 = (t47*)VirtFuncInvoker3< t47*, t536*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((t52 *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_7 = m205(NULL, (t47*) &_stringLiteral204, L_6, (t47*) &_stringLiteral205, NULL);
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (t47*) &_stringLiteral203, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		t664 * L_8 = V_0;
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (t47*) &_stringLiteral203, (t47*) &_stringLiteral206);
	}

IL_0059:
	{
		t664 * L_9 = V_0;
		return L_9;
	}
}
extern TypeInfo* t698_TI_var;
extern TypeInfo* t665_TI_var;
extern TypeInfo* t537_TI_var;
extern TypeInfo* t48_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" t536* m2591 (t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t698_TI_var = il2cpp_codegen_type_info_from_index(932);
		t665_TI_var = il2cpp_codegen_type_info_from_index(925);
		t537_TI_var = il2cpp_codegen_type_info_from_index(933);
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t536* V_0 = {0};
	t536* V_1 = {0};
	t536* V_2 = {0};
	t536* V_3 = {0};
	t536* V_4 = {0};
	t536* V_5 = {0};
	t698 * V_6 = {0};
	int32_t V_7 = 0;
	t536* V_8 = {0};
	t47* V_9 = {0};
	t47* V_10 = {0};
	t536* V_11 = {0};
	t47* V_12 = {0};
	t536* V_13 = {0};
	t536* V_14 = {0};
	t536* V_15 = {0};
	t536* V_16 = {0};
	t698 * V_17 = {0};
	int32_t V_18 = 0;
	t536* V_19 = {0};
	t536* V_20 = {0};
	t536* V_21 = {0};
	t536* V_22 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		t665 * L_1 = m2579(NULL, NULL);
		t536* L_2 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, (t47*) &_stringLiteral207);
		V_0 = L_2;
		t665 * L_3 = m2579(NULL, NULL);
		t536* L_4 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, (t47*) &_stringLiteral208);
		V_1 = L_4;
		t665 * L_5 = m2579(NULL, NULL);
		t536* L_6 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, (t47*) &_stringLiteral209);
		V_2 = L_6;
		t665 * L_7 = m2579(NULL, NULL);
		t536* L_8 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, (t47*) &_stringLiteral210);
		V_3 = L_8;
		t665 * L_9 = m2579(NULL, NULL);
		t536* L_10 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, (t47*) &_stringLiteral205);
		V_4 = L_10;
		t665 * L_11 = m2579(NULL, NULL);
		t536* L_12 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, (t47*) &_stringLiteral211);
		V_5 = L_12;
		t698 * L_13 = (t698 *)il2cpp_codegen_object_new (t698_TI_var);
		m3261(L_13, ((int32_t)1024), NULL);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			t698 * L_14 = V_6;
			t536* L_15 = V_1;
			t536* L_16 = V_1;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)(((t52 *)L_16)->max_length))));
			t698 * L_17 = V_6;
			t536* L_18 = V_0;
			t536* L_19 = V_0;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)(((t52 *)L_19)->max_length))));
			t698 * L_20 = V_6;
			t536* L_21 = (__this->f4);
			t536* L_22 = (__this->f4);
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)(((t52 *)L_22)->max_length))));
			t698 * L_23 = V_6;
			t536* L_24 = V_1;
			t536* L_25 = V_1;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)(((t52 *)L_25)->max_length))));
			t698 * L_26 = V_6;
			t536* L_27 = V_2;
			t536* L_28 = V_2;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)(((t52 *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_29 = m3248(NULL, NULL);
			t535 * L_30 = (__this->f3);
			int32_t L_31 = V_7;
			t47* L_32 = (t47*)VirtFuncInvoker1< t47*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_30, L_31);
			t536* L_33 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			t698 * L_34 = V_6;
			t536* L_35 = V_8;
			t536* L_36 = V_8;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)(((t52 *)L_36)->max_length))));
			t698 * L_37 = V_6;
			t536* L_38 = V_1;
			t536* L_39 = V_1;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)(((t52 *)L_39)->max_length))));
			t698 * L_40 = V_6;
			t536* L_41 = V_3;
			t536* L_42 = V_3;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)(((t52 *)L_42)->max_length))));
			t665 * L_43 = m3248(NULL, NULL);
			t47* L_44 = (t47*)VirtFuncInvoker0< t47* >::Invoke(21 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			t535 * L_45 = (__this->f1);
			int32_t L_46 = V_7;
			t47* L_47 = (t47*)VirtFuncInvoker1< t47*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_45, L_46);
			V_10 = L_47;
			t47* L_48 = V_10;
			t665 * L_49 = m3248(NULL, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			bool L_50 = m2598(NULL, L_48, L_49, NULL);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			t47* L_51 = V_10;
			int32_t L_52 = m3256(L_51, (t47*) &_stringLiteral212, NULL);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			t48* L_53 = ((t48*)SZArrayNew(t48_TI_var, 5));
			ArrayElementTypeCheck (L_53, (t47*) &_stringLiteral212);
			*((t47**)(t47**)SZArrayLdElema(L_53, 0)) = (t47*)(t47*) &_stringLiteral212;
			t48* L_54 = L_53;
			t47* L_55 = V_9;
			ArrayElementTypeCheck (L_54, L_55);
			*((t47**)(t47**)SZArrayLdElema(L_54, 1)) = (t47*)L_55;
			t48* L_56 = L_54;
			ArrayElementTypeCheck (L_56, (t47*) &_stringLiteral213);
			*((t47**)(t47**)SZArrayLdElema(L_56, 2)) = (t47*)(t47*) &_stringLiteral213;
			t48* L_57 = L_56;
			t47* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_59 = m3248(NULL, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			t47* L_60 = m2595(NULL, L_58, L_59, NULL);
			ArrayElementTypeCheck (L_57, L_60);
			*((t47**)(t47**)SZArrayLdElema(L_57, 3)) = (t47*)L_60;
			t48* L_61 = L_57;
			ArrayElementTypeCheck (L_61, (t47*) &_stringLiteral214);
			*((t47**)(t47**)SZArrayLdElema(L_61, 4)) = (t47*)(t47*) &_stringLiteral214;
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_62 = m3262(NULL, L_61, NULL);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_63 = m3248(NULL, NULL);
			t47* L_64 = V_10;
			t536* L_65 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_63, L_64);
			V_11 = L_65;
			t698 * L_66 = V_6;
			t536* L_67 = V_11;
			t536* L_68 = V_11;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, (((int32_t)(((t52 *)L_68)->max_length))));
			t698 * L_69 = V_6;
			t536* L_70 = V_4;
			t536* L_71 = V_4;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_70, 0, (((int32_t)(((t52 *)L_71)->max_length))));
			t535 * L_72 = (__this->f2);
			int32_t L_73 = V_7;
			t47* L_74 = (t47*)VirtFuncInvoker1< t47*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			t535 * L_75 = (__this->f2);
			int32_t L_76 = V_7;
			t47* L_77 = (t47*)VirtFuncInvoker1< t47*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_75, L_76);
			V_12 = L_77;
			t47* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_79 = m3248(NULL, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			bool L_80 = m2598(NULL, L_78, L_79, NULL);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			t47* L_81 = V_12;
			int32_t L_82 = m3256(L_81, (t47*) &_stringLiteral212, NULL);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			t48* L_83 = ((t48*)SZArrayNew(t48_TI_var, 5));
			ArrayElementTypeCheck (L_83, (t47*) &_stringLiteral212);
			*((t47**)(t47**)SZArrayLdElema(L_83, 0)) = (t47*)(t47*) &_stringLiteral212;
			t48* L_84 = L_83;
			t47* L_85 = V_9;
			ArrayElementTypeCheck (L_84, L_85);
			*((t47**)(t47**)SZArrayLdElema(L_84, 1)) = (t47*)L_85;
			t48* L_86 = L_84;
			ArrayElementTypeCheck (L_86, (t47*) &_stringLiteral213);
			*((t47**)(t47**)SZArrayLdElema(L_86, 2)) = (t47*)(t47*) &_stringLiteral213;
			t48* L_87 = L_86;
			t47* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_89 = m3248(NULL, NULL);
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			t47* L_90 = m2595(NULL, L_88, L_89, NULL);
			ArrayElementTypeCheck (L_87, L_90);
			*((t47**)(t47**)SZArrayLdElema(L_87, 3)) = (t47*)L_90;
			t48* L_91 = L_87;
			ArrayElementTypeCheck (L_91, (t47*) &_stringLiteral214);
			*((t47**)(t47**)SZArrayLdElema(L_91, 4)) = (t47*)(t47*) &_stringLiteral214;
			IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
			t47* L_92 = m3262(NULL, L_91, NULL);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_93 = m3248(NULL, NULL);
			t47* L_94 = V_12;
			t536* L_95 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_93, L_94);
			V_13 = L_95;
			t698 * L_96 = V_6;
			t536* L_97 = V_5;
			t536* L_98 = V_5;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_96, L_97, 0, (((int32_t)(((t52 *)L_98)->max_length))));
			t698 * L_99 = V_6;
			t536* L_100 = V_13;
			t536* L_101 = V_13;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_99, L_100, 0, (((int32_t)(((t52 *)L_101)->max_length))));
			t698 * L_102 = V_6;
			t536* L_103 = V_4;
			t536* L_104 = V_4;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, (((int32_t)(((t52 *)L_104)->max_length))));
		}

IL_025c:
		{
			t698 * L_105 = V_6;
			t536* L_106 = V_1;
			t536* L_107 = V_1;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)(((t52 *)L_107)->max_length))));
			t698 * L_108 = V_6;
			t536* L_109 = V_1;
			t536* L_110 = V_1;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, (((int32_t)(((t52 *)L_110)->max_length))));
			t534 * L_111 = (__this->f0);
			int32_t L_112 = V_7;
			t536* L_113 = (t536*)VirtFuncInvoker1< t536*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_111, L_112);
			V_14 = L_113;
			t698 * L_114 = V_6;
			t536* L_115 = V_14;
			t536* L_116 = V_14;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_114, L_115, 0, (((int32_t)(((t52 *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			t534 * L_119 = (__this->f0);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			t698 * L_121 = V_6;
			t536* L_122 = V_1;
			t536* L_123 = V_1;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, (((int32_t)(((t52 *)L_123)->max_length))));
			t698 * L_124 = V_6;
			t536* L_125 = V_0;
			t536* L_126 = V_0;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, (((int32_t)(((t52 *)L_126)->max_length))));
			t698 * L_127 = V_6;
			t536* L_128 = (__this->f4);
			t536* L_129 = (__this->f4);
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, (((int32_t)(((t52 *)L_129)->max_length))));
			t698 * L_130 = V_6;
			t536* L_131 = V_0;
			t536* L_132 = V_0;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, (((int32_t)(((t52 *)L_132)->max_length))));
			t698 * L_133 = V_6;
			t536* L_134 = V_1;
			t536* L_135 = V_1;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_133, L_134, 0, (((int32_t)(((t52 *)L_135)->max_length))));
			t698 * L_136 = V_6;
			t536* L_137 = (t536*)VirtFuncInvoker0< t536* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			t698 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			t698 * L_139 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0311:
	{
		t665 * L_140 = m2579(NULL, NULL);
		t536* L_141 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_140, (t47*) &_stringLiteral215);
		V_15 = L_141;
		t665 * L_142 = m2579(NULL, NULL);
		t536* L_143 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, (t47*) &_stringLiteral216);
		V_16 = L_143;
		t698 * L_144 = (t698 *)il2cpp_codegen_object_new (t698_TI_var);
		m3261(L_144, ((int32_t)1024), NULL);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
			t665 * L_145 = m3248(NULL, NULL);
			t535 * L_146 = (__this->f1);
			int32_t L_147 = V_18;
			t47* L_148 = (t47*)VirtFuncInvoker1< t47*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_146, L_147);
			t536* L_149 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			t536* L_150 = m2594(NULL, L_149, NULL);
			V_19 = L_150;
			t534 * L_151 = (__this->f0);
			int32_t L_152 = V_18;
			t536* L_153 = (t536*)VirtFuncInvoker1< t536*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_151, L_152);
			V_20 = L_153;
			t536* L_154 = V_20;
			t536* L_155 = m2594(NULL, L_154, NULL);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			t698 * L_157 = V_17;
			t536* L_158 = V_15;
			t536* L_159 = V_15;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_157, L_158, 0, (((int32_t)(((t52 *)L_159)->max_length))));
		}

IL_0393:
		{
			t698 * L_160 = V_17;
			t536* L_161 = V_19;
			t536* L_162 = V_19;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_160, L_161, 0, (((int32_t)(((t52 *)L_162)->max_length))));
			t698 * L_163 = V_17;
			t536* L_164 = V_16;
			t536* L_165 = V_16;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_163, L_164, 0, (((int32_t)(((t52 *)L_165)->max_length))));
			t698 * L_166 = V_17;
			t536* L_167 = V_21;
			t536* L_168 = V_21;
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_166, L_167, 0, (((int32_t)(((t52 *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			t534 * L_171 = (__this->f0);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			t698 * L_173 = V_17;
			t536* L_174 = (t536*)VirtFuncInvoker0< t536* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			t698 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			t698 * L_176 = V_17;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_03f7:
	{
		t536* L_177 = V_22;
		return L_177;
	}
}
#include "t537.h"
#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t537_TI_var;
extern "C" void m2592 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t537_TI_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	{
		t665 * L_0 = m2579(NULL, NULL);
		t536* L_1 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, (t47*) &_stringLiteral218);
		((t537_SFs*)t537_TI_var->static_fields)->f0 = L_1;
		t665 * L_2 = m2579(NULL, NULL);
		t536* L_3 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, (t47*) &_stringLiteral219);
		((t537_SFs*)t537_TI_var->static_fields)->f1 = L_3;
		((t537_SFs*)t537_TI_var->static_fields)->f2 = ((int32_t)37);
		((t537_SFs*)t537_TI_var->static_fields)->f3 = ((int32_t)43);
		t665 * L_4 = m2579(NULL, NULL);
		t536* L_5 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, (t47*) &_stringLiteral220);
		((t537_SFs*)t537_TI_var->static_fields)->f4 = L_5;
		((t537_SFs*)t537_TI_var->static_fields)->f5 = ((int32_t)61);
		((t537_SFs*)t537_TI_var->static_fields)->f6 = ((int32_t)95);
		t665 * L_6 = m2579(NULL, NULL);
		t536* L_7 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, (t47*) &_stringLiteral221);
		((t537_SFs*)t537_TI_var->static_fields)->f7 = L_7;
		return;
	}
}
extern TypeInfo* t536_TI_var;
extern "C" t536* m2593 (t7 * __this , uint8_t p0, t536* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t536_TI_var = il2cpp_codegen_type_info_from_index(929);
		s_Il2CppMethodIntialized = true;
	}
	t536* V_0 = {0};
	{
		V_0 = ((t536*)SZArrayNew(t536_TI_var, 2));
		t536* L_0 = V_0;
		t536* L_1 = p1;
		uint8_t L_2 = p0;
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		t536* L_4 = V_0;
		t536* L_5 = p1;
		uint8_t L_6 = p0;
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		t536* L_8 = V_0;
		return L_8;
	}
}
extern TypeInfo* t537_TI_var;
extern "C" t536* m2594 (t7 * __this , t536* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t537_TI_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	{
		t536* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
		uint8_t L_1 = ((t537_SFs*)t537_TI_var->static_fields)->f2;
		uint8_t L_2 = ((t537_SFs*)t537_TI_var->static_fields)->f3;
		t536* L_3 = ((t537_SFs*)t537_TI_var->static_fields)->f4;
		t536* L_4 = m2596(NULL, L_0, L_1, L_2, L_3, 0, NULL);
		return L_4;
	}
}
extern TypeInfo* t537_TI_var;
extern "C" t47* m2595 (t7 * __this , t47* p0, t665 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t537_TI_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	t536* V_0 = {0};
	{
		t665 * L_0 = p1;
		t47* L_1 = p0;
		t536* L_2 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
		uint8_t L_3 = ((t537_SFs*)t537_TI_var->static_fields)->f5;
		uint8_t L_4 = ((t537_SFs*)t537_TI_var->static_fields)->f6;
		t536* L_5 = ((t537_SFs*)t537_TI_var->static_fields)->f7;
		t536* L_6 = m2596(NULL, L_2, L_3, L_4, L_5, 1, NULL);
		V_0 = L_6;
		t665 * L_7 = m2579(NULL, NULL);
		t536* L_8 = V_0;
		t536* L_9 = V_0;
		t47* L_10 = (t47*)VirtFuncInvoker3< t47*, t536*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)(((t52 *)L_9)->max_length))));
		return L_10;
	}
}
extern TypeInfo* t698_TI_var;
extern TypeInfo* t537_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" t536* m2596 (t7 * __this , t536* p0, uint8_t p1, uint8_t p2, t536* p3, bool p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t698_TI_var = il2cpp_codegen_type_info_from_index(932);
		t537_TI_var = il2cpp_codegen_type_info_from_index(933);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t698 * V_0 = {0};
	int32_t V_1 = 0;
	t536* V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	t698 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	t698 * G_B8_1 = {0};
	t536* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	t698 * G_B10_2 = {0};
	{
		t536* L_0 = p0;
		t698 * L_1 = (t698 *)il2cpp_codegen_object_new (t698_TI_var);
		m3261(L_1, ((int32_t)((int32_t)(((int32_t)(((t52 *)L_0)->max_length)))*(int32_t)2)), NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			t536* L_2 = p0;
			int32_t L_3 = V_1;
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			t698 * L_5 = V_0;
			uint8_t L_6 = p2;
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			t536* L_7 = p0;
			int32_t L_8 = V_1;
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			t536* L_10 = p0;
			int32_t L_11 = V_1;
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			t536* L_13 = p3;
			t536* L_14 = p0;
			int32_t L_15 = V_1;
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			bool L_17 = m2597(NULL, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), NULL);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			t698 * L_18 = V_0;
			uint8_t L_19 = p1;
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_18, L_19);
			t698 * L_20 = V_0;
			t536* L_21 = p0;
			int32_t L_22 = V_1;
			int32_t L_23 = L_22;
			bool L_24 = p4;
			G_B8_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
			G_B8_1 = L_20;
			if (!L_24)
			{
				G_B9_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
				G_B9_1 = L_20;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			t536* L_25 = ((t537_SFs*)t537_TI_var->static_fields)->f0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			t536* L_26 = ((t537_SFs*)t537_TI_var->static_fields)->f1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
			t536* L_27 = m2593(NULL, G_B10_1, G_B10_0, NULL);
			VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			t698 * L_28 = V_0;
			t536* L_29 = p0;
			int32_t L_30 = V_1;
			int32_t L_31 = L_30;
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			t536* L_34 = p0;
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((t52 *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			t698 * L_35 = V_0;
			t536* L_36 = (t536*)VirtFuncInvoker0< t536* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_35);
			V_2 = L_36;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			t698 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			t698 * L_38 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_38);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_00b0:
	{
		t536* L_39 = V_2;
		return L_39;
	}
}
extern "C" bool m2597 (t7 * __this , t536* p0, uint8_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t536* L_0 = p0;
		V_0 = (((int32_t)(((t52 *)L_0)->max_length)));
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		t536* L_1 = p0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		uint8_t L_4 = p1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3))) == ((uint32_t)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}
}
extern TypeInfo* t537_TI_var;
extern "C" bool m2598 (t7 * __this , t47* p0, t665 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t537_TI_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	{
		t665 * L_0 = p1;
		t47* L_1 = p0;
		t536* L_2 = (t536*)VirtFuncInvoker1< t536*, t47* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(t537_TI_var);
		bool L_3 = m2599(NULL, L_2, NULL);
		return L_3;
	}
}
extern "C" bool m2599 (t7 * __this , t536* p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		t536* L_0 = p0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		t536* L_3 = p0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))) <= ((int32_t)((int32_t)126))))
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
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		t536* L_8 = p0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t52 *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
#include "t538.h"
#ifndef _MSC_VER
#else
#endif
#include "t538MD.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void t538_marshal(const t538& unmarshaled, t538_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
}
void t538_marshal_back(const t538_marshaled& marshaled, t538& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void t538_marshal_cleanup(t538_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t539.h"
#ifndef _MSC_VER
#else
#endif



extern TypeInfo* t47_TI_var;
extern "C" t47* m2600 (t7 * __this , t47* p0, t69* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		t69* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_2 = m1911(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
#include "t483.h"
#ifndef _MSC_VER
#else
#endif



extern "C" void m2601 (t483 * __this, const MethodInfo* method)
{
	{
		m2714(__this, NULL);
		return;
	}
}
extern "C" void m2602 (t483 * __this, const MethodInfo* method)
{
	typedef void (*m2602_ftn) (t483 *);
	static m2602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2603 (t483 * __this, const MethodInfo* method)
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
		m2602(__this, NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m227(__this, NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void t483_marshal(const t483& unmarshaled, t483_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t483_marshal_back(const t483_marshaled& marshaled, t483& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void t483_marshal_cleanup(t483_marshaled& marshaled)
{
}
#include "t540.h"
#ifndef _MSC_VER
#else
#endif
#include "t540MD.h"



extern "C" void m2604 (t540 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2605 (t540 * __this, t47* p0, t47* p1, int32_t p2, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2605((t540 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t47* p0, t47* p1, int32_t p2, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t47* p0, t47* p1, int32_t p2, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, t47* p1, int32_t p2, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t540(Il2CppObject* delegate, t47* p0, t47* p1, int32_t p2)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	char* _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_string(p0);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = { 0 };
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Marshaling of parameter 'p2' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled, _p1_marshaled, p2);

	// Marshaling cleanup of parameter 'p0' native representation
	il2cpp_codegen_marshal_free(_p0_marshaled);
	_p0_marshaled = NULL;

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	// Marshaling cleanup of parameter 'p2' native representation

}
extern TypeInfo* t487_TI_var;
extern "C" t7 * m2606 (t540 * __this, t47* p0, t47* p1, int32_t p2, t213 * p3, t7 * p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t487_TI_var = il2cpp_codegen_type_info_from_index(934);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = Box(t487_TI_var, &p2);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern "C" void m2607 (t540 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t79.h"
#ifndef _MSC_VER
#else
#endif
#include "t79MD.h"



extern "C" int32_t m218 (t7 * __this , const MethodInfo* method)
{
	typedef int32_t (*m218_ftn) ();
	static m218_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m218_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
extern "C" void m219 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m2608(NULL, (t47*)NULL, L_0, 0, 1, NULL);
		return;
	}
}
extern "C" void m208 (t7 * __this , t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m2608(NULL, L_0, (-1), 0, 1, NULL);
		return;
	}
}
extern "C" t483 * m2608 (t7 * __this , t47* p0, int32_t p1, bool p2, bool p3, const MethodInfo* method)
{
	typedef t483 * (*m2608_ftn) (t47*, int32_t, bool, bool);
	static m2608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern "C" bool m1823 (t7 * __this , const MethodInfo* method)
{
	typedef bool (*m1823_ftn) ();
	static m1823_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1823_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
extern "C" bool m1825 (t7 * __this , const MethodInfo* method)
{
	typedef bool (*m1825_ftn) ();
	static m1825_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1825_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m1737 (t7 * __this , const MethodInfo* method)
{
	typedef int32_t (*m1737_ftn) ();
	static m1737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
extern TypeInfo* t79_TI_var;
extern "C" void m2609 (t7 * __this , t47* p0, t47* p1, int32_t p2, bool p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t79_TI_var = il2cpp_codegen_type_info_from_index(935);
		s_Il2CppMethodIntialized = true;
	}
	t540 * V_0 = {0};
	t540 * V_1 = {0};
	{
		bool L_0 = p3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t540 * L_1 = ((t79_SFs*)t79_TI_var->static_fields)->f0;
		V_0 = L_1;
		t540 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		t540 * L_3 = V_0;
		t47* L_4 = p0;
		t47* L_5 = p1;
		int32_t L_6 = p2;
		VirtActionInvoker3< t47*, t47*, int32_t >::Invoke(10 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		t540 * L_7 = ((t79_SFs*)t79_TI_var->static_fields)->f1;
		V_1 = L_7;
		t540 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		t540 * L_9 = V_1;
		t47* L_10 = p0;
		t47* L_11 = p1;
		int32_t L_12 = p2;
		VirtActionInvoker3< t47*, t47*, int32_t >::Invoke(10 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
#include "t340.h"
#ifndef _MSC_VER
#else
#endif
#include "t340MD.h"



extern "C" void m2610 (t340 * __this, const MethodInfo* method)
{
	{
		m2684(__this, NULL);
		return;
	}
}
extern "C" bool m1490 (t340 * __this, const MethodInfo* method)
{
	typedef bool (*m1490_ftn) (t340 *);
	static m1490_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1490_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m1784 (t340 * __this, bool p0, const MethodInfo* method)
{
	typedef void (*m1784_ftn) (t340 *, bool);
	static m1784_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1784_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" bool m1491 (t340 * __this, const MethodInfo* method)
{
	typedef bool (*m1491_ftn) (t340 *);
	static m1491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
#include "t541.h"
#ifndef _MSC_VER
#else
#endif
#include "t541MD.h"

#include "t150.h"


extern "C" void m2611 (t541 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2612 (t541 * __this, t150 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2612((t541 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t150 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t150 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t541(Il2CppObject* delegate, t150 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t150 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
extern "C" t7 * m2613 (t541 * __this, t150 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m2614 (t541 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
#include "t150MD.h"

#include "t631.h"
#include "t13.h"


extern "C" float m1556 (t150 * __this, const MethodInfo* method)
{
	typedef float (*m1556_ftn) (t150 *);
	static m1556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m1555 (t150 * __this, const MethodInfo* method)
{
	typedef float (*m1555_ftn) (t150 *);
	static m1555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m1453 (t150 * __this, const MethodInfo* method)
{
	typedef float (*m1453_ftn) (t150 *);
	static m1453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1570 (t150 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1570_ftn) (t150 *);
	static m1570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2615 (t150 * __this, const MethodInfo* method)
{
	typedef int32_t (*m2615_ftn) (t150 *);
	static m2615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2615_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2616 (t150 * __this, t219 * p0, const MethodInfo* method)
{
	typedef void (*m2616_ftn) (t150 *, t219 *);
	static m2616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t219  m2617 (t150 * __this, const MethodInfo* method)
{
	t219  V_0 = {0};
	{
		m2616(__this, (&V_0), NULL);
		t219  L_0 = V_0;
		return L_0;
	}
}
extern "C" t493 * m2618 (t150 * __this, const MethodInfo* method)
{
	typedef t493 * (*m2618_ftn) (t150 *);
	static m2618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2619 (t150 * __this, const MethodInfo* method)
{
	typedef int32_t (*m2619_ftn) (t150 *);
	static m2619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
extern "C" t67  m1650 (t150 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m2620(NULL, __this, (&p0), NULL);
		return L_0;
	}
}
extern "C" t67  m2620 (t7 * __this , t150 * p0, t67 * p1, const MethodInfo* method)
{
	typedef t67  (*m2620_ftn) (t150 *, t67 *);
	static m2620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t348  m1554 (t150 * __this, t67  p0, const MethodInfo* method)
{
	{
		t348  L_0 = m2621(NULL, __this, (&p0), NULL);
		return L_0;
	}
}
extern "C" t348  m2621 (t7 * __this , t150 * p0, t67 * p1, const MethodInfo* method)
{
	typedef t348  (*m2621_ftn) (t150 *, t67 *);
	static m2621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t150 * m1569 (t7 * __this , const MethodInfo* method)
{
	typedef t150 * (*m1569_ftn) ();
	static m1569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m2622 (t7 * __this , const MethodInfo* method)
{
	typedef int32_t (*m2622_ftn) ();
	static m2622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m2623 (t7 * __this , t636* p0, const MethodInfo* method)
{
	typedef int32_t (*m2623_ftn) (t636*);
	static m2623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(p0);
}
extern TypeInfo* t150_TI_var;
extern "C" void m2624 (t7 * __this , t150 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t150_TI_var = il2cpp_codegen_type_info_from_index(205);
		s_Il2CppMethodIntialized = true;
	}
	{
		t541 * L_0 = ((t150_SFs*)t150_TI_var->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t541 * L_1 = ((t150_SFs*)t150_TI_var->static_fields)->f2;
		t150 * L_2 = p0;
		VirtActionInvoker1< t150 * >::Invoke(10 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern TypeInfo* t150_TI_var;
extern "C" void m2625 (t7 * __this , t150 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t150_TI_var = il2cpp_codegen_type_info_from_index(205);
		s_Il2CppMethodIntialized = true;
	}
	{
		t541 * L_0 = ((t150_SFs*)t150_TI_var->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t541 * L_1 = ((t150_SFs*)t150_TI_var->static_fields)->f3;
		t150 * L_2 = p0;
		VirtActionInvoker1< t150 * >::Invoke(10 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern TypeInfo* t150_TI_var;
extern "C" void m2626 (t7 * __this , t150 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t150_TI_var = il2cpp_codegen_type_info_from_index(205);
		s_Il2CppMethodIntialized = true;
	}
	{
		t541 * L_0 = ((t150_SFs*)t150_TI_var->static_fields)->f4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t541 * L_1 = ((t150_SFs*)t150_TI_var->static_fields)->f4;
		t150 * L_2 = p0;
		VirtActionInvoker1< t150 * >::Invoke(10 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern "C" t13 * m2627 (t150 * __this, t348  p0, float p1, int32_t p2, const MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t13 * L_2 = m2628(NULL, __this, (&p0), L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" t13 * m2628 (t7 * __this , t150 * p0, t348 * p1, float p2, int32_t p3, const MethodInfo* method)
{
	typedef t13 * (*m2628_ftn) (t150 *, t348 *, float, int32_t);
	static m2628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern "C" t13 * m2629 (t150 * __this, t348  p0, float p1, int32_t p2, const MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t13 * L_2 = m2630(NULL, __this, (&p0), L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" t13 * m2630 (t7 * __this , t150 * p0, t348 * p1, float p2, int32_t p3, const MethodInfo* method)
{
	typedef t13 * (*m2630_ftn) (t150 *, t348 *, float, int32_t);
	static m2630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
#include "t71.h"
#ifndef _MSC_VER
#else
#endif



extern "C" void m2631 (t7 * __this , int32_t p0, t47* p1, t66 * p2, const MethodInfo* method)
{
	typedef void (*m2631_ftn) (int32_t, t47*, t66 *);
	static m2631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m2632 (t7 * __this , t65 * p0, t66 * p1, const MethodInfo* method)
{
	typedef void (*m2632_ftn) (t65 *, t66 *);
	static m2632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m183 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	t47* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		t7 * L_0 = p0;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		t7 * L_1 = p0;
		t47* L_2 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (t47*) &_stringLiteral222;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m2631(NULL, G_B3_1, G_B3_0, (t66 *)NULL, NULL);
		return;
	}
}
extern "C" void m1452 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	t47* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		t7 * L_0 = p0;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		t7 * L_1 = p0;
		t47* L_2 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (t47*) &_stringLiteral222;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m2631(NULL, G_B3_1, G_B3_0, (t66 *)NULL, NULL);
		return;
	}
}
extern "C" void m1710 (t7 * __this , t7 * p0, t66 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t47* L_1 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		t66 * L_2 = p1;
		m2631(NULL, 2, L_1, L_2, NULL);
		return;
	}
}
extern "C" void m2633 (t7 * __this , t65 * p0, const MethodInfo* method)
{
	{
		t65 * L_0 = p0;
		m2632(NULL, L_0, (t66 *)NULL, NULL);
		return;
	}
}
extern "C" void m1592 (t7 * __this , t65 * p0, t66 * p1, const MethodInfo* method)
{
	{
		t65 * L_0 = p0;
		t66 * L_1 = p1;
		m2632(NULL, L_0, L_1, NULL);
		return;
	}
}
extern "C" void m2634 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t47* L_1 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		m2631(NULL, 1, L_1, (t66 *)NULL, NULL);
		return;
	}
}
extern "C" void m1891 (t7 * __this , t7 * p0, t66 * p1, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t47* L_1 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		t66 * L_2 = p1;
		m2631(NULL, 1, L_1, L_2, NULL);
		return;
	}
}
#include "t542.h"
#ifndef _MSC_VER
#else
#endif
#include "t542MD.h"



extern "C" void m2635 (t542 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2636 (t542 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2636((t542 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t542(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t7 * m2637 (t542 * __this, t213 * p0, t7 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m2638 (t542 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t543.h"
#ifndef _MSC_VER
#else
#endif
#include "t543MD.h"

#include "t630.h"
#include "t226MD.h"


extern "C" void m2639 (t543 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t226 L_0 = {0};
		m3263(&L_0, 0, NULL);
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m2640 (t543 * __this, t226 p0, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t226 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t544_TI_var;
extern TypeInfo* t543_TI_var;
extern "C" void m2641 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t544_TI_var = il2cpp_codegen_type_info_from_index(936);
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		t544* L_0 = ((t544*)SZArrayNew(t544_TI_var, 1));
		t543 * L_1 = (t543 *)il2cpp_codegen_object_new (t543_TI_var);
		m2639(L_1, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t543 **)(t543 **)SZArrayLdElema(L_0, 0)) = (t543 *)L_1;
		((t543_SFs*)t543_TI_var->static_fields)->f1 = L_0;
		t544* L_2 = ((t543_SFs*)t543_TI_var->static_fields)->f1;
		int32_t L_3 = 0;
		((t543_SFs*)t543_TI_var->static_fields)->f2 = (*(t543 **)(t543 **)SZArrayLdElema(L_2, L_3));
		((t543_SFs*)t543_TI_var->static_fields)->f3 = (t542 *)NULL;
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern TypeInfo* t542_TI_var;
extern "C" void m2642 (t7 * __this , t542 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		t542_TI_var = il2cpp_codegen_type_info_from_index(938);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		t542 * L_0 = ((t543_SFs*)t543_TI_var->static_fields)->f3;
		t542 * L_1 = p0;
		t361 * L_2 = m1639(NULL, L_0, L_1, NULL);
		((t543_SFs*)t543_TI_var->static_fields)->f3 = ((t542 *)Castclass(L_2, t542_TI_var));
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern TypeInfo* t542_TI_var;
extern "C" void m2643 (t7 * __this , t542 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		t542_TI_var = il2cpp_codegen_type_info_from_index(938);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		t542 * L_0 = ((t543_SFs*)t543_TI_var->static_fields)->f3;
		t542 * L_1 = p0;
		t361 * L_2 = m1640(NULL, L_0, L_1, NULL);
		((t543_SFs*)t543_TI_var->static_fields)->f3 = ((t542 *)Castclass(L_2, t542_TI_var));
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" int32_t m2644 (t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2660(NULL, L_0, (&V_0), (&V_1), NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" int32_t m2645 (t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2660(NULL, L_0, (&V_0), (&V_1), NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" int32_t m2646 (t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2659(NULL, L_0, (&V_0), (&V_1), NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" int32_t m2647 (t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2659(NULL, L_0, (&V_0), (&V_1), NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" t630  m2648 (t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	t630  V_0 = {0};
	t630  V_1 = {0};
	{
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2661(NULL, L_0, (&V_0), (&V_1), NULL);
		t630  L_1 = V_0;
		return L_1;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" t630  m2649 (t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	t630  V_0 = {0};
	t630  V_1 = {0};
	{
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2661(NULL, L_0, (&V_0), (&V_1), NULL);
		t630  L_1 = V_1;
		return L_1;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" void m2650 (t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		t226 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2663(NULL, L_0, 0, 0, ((int32_t)60), NULL);
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" void m2651 (t543 * __this, int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		t226 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2663(NULL, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" void m2652 (t543 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		t226 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2664(NULL, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" void m2653 (t543 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		t226 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		m2662(NULL, L_0, L_1, L_2, NULL);
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" bool m2654 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		bool L_0 = m2665(NULL, NULL);
		return L_0;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" t67  m2655 (t7 * __this , t67  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	t67  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&p0)->f1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&p0)->f2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		int32_t L_4 = m2666(NULL, L_2, L_3, (&V_1), (&V_2), NULL);
		(&V_0)->f3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->f1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->f2 = (((float)L_6));
		t67  L_7 = V_0;
		return L_7;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" t543 * m2656 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		t543 * L_0 = ((t543_SFs*)t543_TI_var->static_fields)->f2;
		return L_0;
	}
}
extern TypeInfo* t544_TI_var;
extern TypeInfo* t543_TI_var;
extern "C" void m2657 (t7 * __this , t666* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t544_TI_var = il2cpp_codegen_type_info_from_index(936);
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t666* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		((t543_SFs*)t543_TI_var->static_fields)->f1 = ((t544*)SZArrayNew(t544_TI_var, (((int32_t)(((t52 *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		t544* L_1 = ((t543_SFs*)t543_TI_var->static_fields)->f1;
		int32_t L_2 = V_0;
		t666* L_3 = p0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		t543 * L_6 = (t543 *)il2cpp_codegen_object_new (t543_TI_var);
		m2640(L_6, (*(t226*)(t226*)SZArrayLdElema(L_3, L_5)), NULL);
		ArrayElementTypeCheck (L_1, L_6);
		*((t543 **)(t543 **)SZArrayLdElema(L_1, L_2)) = (t543 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		t666* L_9 = p0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t52 *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		t544* L_10 = ((t543_SFs*)t543_TI_var->static_fields)->f1;
		int32_t L_11 = 0;
		((t543_SFs*)t543_TI_var->static_fields)->f2 = (*(t543 **)(t543 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
extern TypeInfo* t543_TI_var;
extern "C" void m2658 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t543_TI_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		t542 * L_0 = ((t543_SFs*)t543_TI_var->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t543_TI_var);
		t542 * L_1 = ((t543_SFs*)t543_TI_var->static_fields)->f3;
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern "C" void m2659 (t7 * __this , t226 p0, int32_t* p1, int32_t* p2, const MethodInfo* method)
{
	typedef void (*m2659_ftn) (t226, int32_t*, int32_t*);
	static m2659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m2660 (t7 * __this , t226 p0, int32_t* p1, int32_t* p2, const MethodInfo* method)
{
	typedef void (*m2660_ftn) (t226, int32_t*, int32_t*);
	static m2660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m2661 (t7 * __this , t226 p0, t630 * p1, t630 * p2, const MethodInfo* method)
{
	typedef void (*m2661_ftn) (t226, t630 *, t630 *);
	static m2661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m2662 (t7 * __this , t226 p0, int32_t p1, int32_t p2, const MethodInfo* method)
{
	typedef void (*m2662_ftn) (t226, int32_t, int32_t);
	static m2662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m2663 (t7 * __this , t226 p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method)
{
	typedef void (*m2663_ftn) (t226, int32_t, int32_t, int32_t);
	static m2663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern "C" void m2664 (t7 * __this , t226 p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, const MethodInfo* method)
{
	typedef void (*m2664_ftn) (t226, int32_t, int32_t, int32_t, int32_t);
	static m2664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern "C" bool m2665 (t7 * __this , const MethodInfo* method)
{
	typedef bool (*m2665_ftn) ();
	static m2665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m2666 (t7 * __this , int32_t p0, int32_t p1, int32_t* p2, int32_t* p3, const MethodInfo* method)
{
	typedef int32_t (*m2666_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static m2666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
#include "t5.h"
#ifndef _MSC_VER
#else
#endif
#include "t5MD.h"



extern "C" void m158 (t5 * __this, const MethodInfo* method)
{
	{
		m2610(__this, NULL);
		return;
	}
}
extern "C" t63 * m167 (t5 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t63 * L_1 = m2667(__this, L_0, NULL);
		return L_1;
	}
}
extern "C" t63 * m2667 (t5 * __this, t7 * p0, const MethodInfo* method)
{
	typedef t63 * (*m2667_ftn) (t5 *, t7 *);
	static m2667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m2668 (t5 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		m2669(__this, L_0, NULL);
		return;
	}
}
extern "C" void m1830 (t5 * __this, t63 * p0, const MethodInfo* method)
{
	{
		t63 * L_0 = p0;
		m2670(__this, L_0, NULL);
		return;
	}
}
extern "C" void m2669 (t5 * __this, t7 * p0, const MethodInfo* method)
{
	typedef void (*m2669_ftn) (t5 *, t7 *);
	static m2669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2670 (t5 * __this, t63 * p0, const MethodInfo* method)
{
	typedef void (*m2670_ftn) (t5 *, t63 *);
	static m2670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, p0);
}
#include "t342.h"
#ifndef _MSC_VER
#else
#endif
#include "t342MD.h"



#include "t384.h"
#ifndef _MSC_VER
#else
#endif
#include "t384MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
