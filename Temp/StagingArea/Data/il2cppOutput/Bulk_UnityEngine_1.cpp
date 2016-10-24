#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t322.h"
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
#include "t322MD.h"

#include "t58.h"
#include "t74.h"
#include "t342.h"

#include "t52.h"

extern "C" int32_t m1508 (t322 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t74  m1510 (t322 * __this, const MethodInfo* method)
{
	{
		t74  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m1509 (t322 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void t322_marshal(const t322& unmarshaled, t322_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
	marshaled.f6 = unmarshaled.f6;
}
void t322_marshal_back(const t322_marshaled& marshaled, t322& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
	unmarshaled.f6 = marshaled.f6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void t322_marshal_cleanup(t322_marshaled& marshaled)
{
}
#include "t78.h"
#ifndef _MSC_VER
#else
#endif
#include "t78MD.h"

#include "t67.h"
#include "t54.h"
#include "t53.h"
#include "t384.h"
#include "t47.h"
#include "t60.h"
#include "t77.h"


extern "C" void m2671 (t7 * __this , const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m2672 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef bool (*m2672_ftn) (t47*);
	static m2672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2672_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyString(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m2673 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef bool (*m2673_ftn) (int32_t);
	static m2673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2673_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" float m1543 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef float (*m1543_ftn) (t47*);
	static m1543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m1542 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef bool (*m1542_ftn) (t47*);
	static m1542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1542_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(p0);
}
extern TypeInfo* t78_TI_var;
extern "C" bool m214 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_1 = m2672(NULL, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t78_TI_var;
extern "C" bool m203 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		bool L_1 = m2673(NULL, L_0, NULL);
		return L_1;
	}
}
extern "C" bool m1551 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef bool (*m1551_ftn) (int32_t);
	static m1551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m1512 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef bool (*m1512_ftn) (int32_t);
	static m1512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m1513 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef bool (*m1513_ftn) (int32_t);
	static m1513_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1513_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" t67  m1514 (t7 * __this , const MethodInfo* method)
{
	typedef t67  (*m1514_ftn) ();
	static m1514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
extern "C" t74  m1515 (t7 * __this , const MethodInfo* method)
{
	typedef t74  (*m1515_ftn) ();
	static m1515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
extern "C" bool m1541 (t7 * __this , const MethodInfo* method)
{
	typedef bool (*m1541_ftn) ();
	static m1541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
extern "C" t322  m1549 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef t322  (*m1549_ftn) (int32_t);
	static m1549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m1550 (t7 * __this , const MethodInfo* method)
{
	typedef int32_t (*m1550_ftn) ();
	static m1550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
extern "C" bool m1548 (t7 * __this , const MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m1822 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	typedef void (*m1822_ftn) (int32_t);
	static m1822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1822_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(p0);
}
extern "C" t47* m1742 (t7 * __this , const MethodInfo* method)
{
	typedef t47* (*m1742_ftn) ();
	static m1742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
extern "C" void m2674 (t7 * __this , t74 * p0, const MethodInfo* method)
{
	typedef void (*m2674_ftn) (t74 *);
	static m2674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0);
}
extern TypeInfo* t78_TI_var;
extern "C" void m1810 (t7 * __this , t74  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t78_TI_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t78_TI_var);
		m2674(NULL, (&p0), NULL);
		return;
	}
}
#include "t383.h"
#ifndef _MSC_VER
#else
#endif
#include "t383MD.h"



#include "t66.h"
#ifndef _MSC_VER
#else
#endif
#include "t66MD.h"

#include "t70.h"
#include "t7.h"
#include "t226.h"
#include "t396.h"
#include "t7MD.h"
#include "t226MD.h"
#include "t396MD.h"


extern "C" void m2675 (t66 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t66 * m2676 (t7 * __this , t66 * p0, t67  p1, t70  p2, const MethodInfo* method)
{
	{
		t66 * L_0 = p0;
		t66 * L_1 = m2677(NULL, L_0, (&p1), (&p2), NULL);
		return L_1;
	}
}
extern "C" t66 * m2677 (t7 * __this , t66 * p0, t67 * p1, t70 * p2, const MethodInfo* method)
{
	typedef t66 * (*m2677_ftn) (t66 *, t67 *, t70 *);
	static m2677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m201 (t7 * __this , t66 * p0, float p1, const MethodInfo* method)
{
	typedef void (*m201_ftn) (t66 *, float);
	static m201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m168 (t7 * __this , t66 * p0, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		t66 * L_0 = p0;
		float L_1 = V_0;
		m201(NULL, L_0, L_1, NULL);
		return;
	}
}
extern "C" void m2678 (t7 * __this , t66 * p0, bool p1, const MethodInfo* method)
{
	typedef void (*m2678_ftn) (t66 *, bool);
	static m2678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m1824 (t7 * __this , t66 * p0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		t66 * L_0 = p0;
		bool L_1 = V_0;
		m2678(NULL, L_0, L_1, NULL);
		return;
	}
}
extern "C" t47* m184 (t66 * __this, const MethodInfo* method)
{
	typedef t47* (*m184_ftn) (t66 *);
	static m184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m180 (t66 * __this, t47* p0, const MethodInfo* method)
{
	typedef void (*m180_ftn) (t66 *, t47*);
	static m180_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m180_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m1788 (t66 * __this, int32_t p0, const MethodInfo* method)
{
	typedef void (*m1788_ftn) (t66 *, int32_t);
	static m1788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t47* m229 (t66 * __this, const MethodInfo* method)
{
	typedef t47* (*m229_ftn) (t66 *);
	static m229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t66_TI_var;
extern "C" bool m226 (t66 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t66_TI_var = il2cpp_codegen_type_info_from_index(231);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		bool L_1 = m2679(NULL, __this, ((t66 *)IsInst(L_0, t66_TI_var)), NULL);
		return L_1;
	}
}
extern "C" int32_t m228 (t66 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = m2681(__this, NULL);
		return L_0;
	}
}
extern "C" bool m2679 (t7 * __this , t66 * p0, t66 * p1, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		t66 * L_0 = p0;
		V_0 = ((((t7*)(t66 *)L_0) == ((t7*)(t7 *)NULL))? 1 : 0);
		t66 * L_1 = p1;
		V_1 = ((((t7*)(t66 *)L_1) == ((t7*)(t7 *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		t66 * L_5 = p0;
		bool L_6 = m2680(NULL, L_5, NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		t66 * L_8 = p1;
		bool L_9 = m2680(NULL, L_8, NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		t66 * L_10 = p0;
		int32_t L_11 = (L_10->f0);
		t66 * L_12 = p1;
		int32_t L_13 = (L_12->f0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
extern TypeInfo* t226_TI_var;
extern "C" bool m2680 (t7 * __this , t66 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t226_TI_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	{
		t66 * L_0 = p0;
		t226 L_1 = m2682(L_0, NULL);
		t226 L_2 = ((t226_SFs*)t226_TI_var->static_fields)->f1;
		bool L_3 = m3264(NULL, L_1, L_2, NULL);
		return L_3;
	}
}
extern "C" int32_t m2681 (t66 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t226 m2682 (t66 * __this, const MethodInfo* method)
{
	{
		t226 L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t66 * m178 (t7 * __this , t66 * p0, t67  p1, t70  p2, const MethodInfo* method)
{
	{
		t66 * L_0 = p0;
		m2683(NULL, L_0, (t47*) &_stringLiteral223, NULL);
		t66 * L_1 = p0;
		t67  L_2 = p1;
		t70  L_3 = p2;
		t66 * L_4 = m2676(NULL, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
extern TypeInfo* t396_TI_var;
extern "C" void m2683 (t7 * __this , t7 * p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t396_TI_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		t47* L_1 = p1;
		t396 * L_2 = (t396 *)il2cpp_codegen_object_new (t396_TI_var);
		m1912(L_2, L_1, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
extern "C" bool m1450 (t7 * __this , t66 * p0, const MethodInfo* method)
{
	{
		t66 * L_0 = p0;
		bool L_1 = m2679(NULL, L_0, (t66 *)NULL, NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m206 (t7 * __this , t66 * p0, t66 * p1, const MethodInfo* method)
{
	{
		t66 * L_0 = p0;
		t66 * L_1 = p1;
		bool L_2 = m2679(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" bool m170 (t7 * __this , t66 * p0, t66 * p1, const MethodInfo* method)
{
	{
		t66 * L_0 = p0;
		t66 * L_1 = p1;
		bool L_2 = m2679(NULL, L_0, L_1, NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void t66_marshal(const t66& unmarshaled, t66_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
}
void t66_marshal_back(const t66_marshaled& marshaled, t66& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void t66_marshal_cleanup(t66_marshaled& marshaled)
{
}
#include "t55.h"
#ifndef _MSC_VER
#else
#endif
#include "t55MD.h"

#include "t68.h"
#include "t13.h"
#include "t347.h"
#include "t332.h"
#include "t13MD.h"


extern "C" void m2684 (t55 * __this, const MethodInfo* method)
{
	{
		m2675(__this, NULL);
		return;
	}
}
extern "C" t68 * m176 (t55 * __this, const MethodInfo* method)
{
	typedef t68 * (*m176_ftn) (t55 *);
	static m176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
extern "C" t13 * m166 (t55 * __this, const MethodInfo* method)
{
	typedef t13 * (*m166_ftn) (t55 *);
	static m166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
extern "C" t55 * m1945 (t55 * __this, t347 * p0, const MethodInfo* method)
{
	{
		t13 * L_0 = m166(__this, NULL);
		t347 * L_1 = p0;
		t55 * L_2 = m2686(L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" t55 * m202 (t55 * __this, t47* p0, const MethodInfo* method)
{
	typedef t55 * (*m202_ftn) (t55 *, t47*);
	static m202_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m202_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponent(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m2685 (t55 * __this, t347 * p0, t7 * p1, const MethodInfo* method)
{
	typedef void (*m2685_ftn) (t55 *, t347 *, t7 *);
	static m2685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" void m1614 (t55 * __this, t347 * p0, t332 * p1, const MethodInfo* method)
{
	{
		t347 * L_0 = p0;
		t332 * L_1 = p1;
		m2685(__this, L_0, L_1, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"
#include "t486.h"


extern "C" void m1787 (t13 * __this, t47* p0, const MethodInfo* method)
{
	{
		m2675(__this, NULL);
		t47* L_0 = p0;
		m2692(NULL, __this, L_0, NULL);
		return;
	}
}
extern "C" t55 * m2686 (t13 * __this, t347 * p0, const MethodInfo* method)
{
	typedef t55 * (*m2686_ftn) (t13 *, t347 *);
	static m2686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t55 * m2687 (t13 * __this, t47* p0, const MethodInfo* method)
{
	typedef t55 * (*m2687_ftn) (t13 *, t47*);
	static m2687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentByName(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t55 * m160 (t13 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t55 * L_1 = m2687(__this, L_0, NULL);
		return L_1;
	}
}
extern "C" t52 * m2688 (t13 * __this, t347 * p0, bool p1, bool p2, bool p3, bool p4, t7 * p5, const MethodInfo* method)
{
	typedef t52 * (*m2688_ftn) (t13 *, t347 *, bool, bool, bool, bool, t7 *);
	static m2688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5);
}
extern "C" t68 * m172 (t13 * __this, const MethodInfo* method)
{
	typedef t68 * (*m172_ftn) (t13 *);
	static m172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1791 (t13 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1791_ftn) (t13 *);
	static m1791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m1792 (t13 * __this, int32_t p0, const MethodInfo* method)
{
	typedef void (*m1792_ftn) (t13 *, int32_t);
	static m1792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" bool m1492 (t13 * __this, const MethodInfo* method)
{
	typedef bool (*m1492_ftn) (t13 *);
	static m1492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1492_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
extern "C" t13 * m191 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef t13 * (*m191_ftn) (t47*);
	static m191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" t17* m182 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef t17* (*m182_ftn) (t47*);
	static m182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m2689 (t13 * __this, t47* p0, t7 * p1, int32_t p2, const MethodInfo* method)
{
	typedef void (*m2689_ftn) (t13 *, t47*, t7 *, int32_t);
	static m2689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" t55 * m2690 (t13 * __this, t347 * p0, const MethodInfo* method)
{
	typedef t55 * (*m2690_ftn) (t13 *, t347 *);
	static m2690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t55 * m2691 (t13 * __this, t347 * p0, const MethodInfo* method)
{
	{
		t347 * L_0 = p0;
		t55 * L_1 = m2690(__this, L_0, NULL);
		return L_1;
	}
}
extern "C" void m2692 (t7 * __this , t13 * p0, t47* p1, const MethodInfo* method)
{
	typedef void (*m2692_ftn) (t13 *, t47*);
	static m2692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t13 * m159 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef t13 * (*m159_ftn) (t47*);
	static m159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" t13 * m179 (t13 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
#include "t545.h"
#ifndef _MSC_VER
#else
#endif
#include "t545MD.h"

#include "t68MD.h"


extern "C" void m2693 (t545 * __this, t68 * p0, const MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m162(__this, NULL);
		t68 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t7 * m2694 (t545 * __this, const MethodInfo* method)
{
	{
		t68 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t68 * L_2 = m1944(L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" bool m2695 (t545 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t68 * L_0 = (__this->f0);
		int32_t L_1 = m1946(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->f1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->f1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t182.h"
#include "t392.h"
#include "t67MD.h"
#include "t70MD.h"
#include "t71MD.h"


extern "C" void m2696 (t68 * __this, t67 * p0, const MethodInfo* method)
{
	typedef void (*m2696_ftn) (t68 *, t67 *);
	static m2696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2697 (t68 * __this, t67 * p0, const MethodInfo* method)
{
	typedef void (*m2697_ftn) (t68 *, t67 *);
	static m2697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t67  m173 (t68 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		m2696(__this, (&V_0), NULL);
		t67  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m174 (t68 * __this, t67  p0, const MethodInfo* method)
{
	{
		m2697(__this, (&p0), NULL);
		return;
	}
}
extern "C" void m2698 (t68 * __this, t67 * p0, const MethodInfo* method)
{
	typedef void (*m2698_ftn) (t68 *, t67 *);
	static m2698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2699 (t68 * __this, t67 * p0, const MethodInfo* method)
{
	typedef void (*m2699_ftn) (t68 *, t67 *);
	static m2699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t67  m1794 (t68 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		m2698(__this, (&V_0), NULL);
		t67  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m1803 (t68 * __this, t67  p0, const MethodInfo* method)
{
	{
		m2699(__this, (&p0), NULL);
		return;
	}
}
extern "C" t67  m1657 (t68 * __this, const MethodInfo* method)
{
	{
		t70  L_0 = m177(__this, NULL);
		t67  L_1 = m1654(NULL, NULL);
		t67  L_2 = m1655(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" void m2700 (t68 * __this, t70 * p0, const MethodInfo* method)
{
	typedef void (*m2700_ftn) (t68 *, t70 *);
	static m2700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t70  m177 (t68 * __this, const MethodInfo* method)
{
	t70  V_0 = {0};
	{
		m2700(__this, (&V_0), NULL);
		t70  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2701 (t68 * __this, t70 * p0, const MethodInfo* method)
{
	typedef void (*m2701_ftn) (t68 *, t70 *);
	static m2701_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2701_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2702 (t68 * __this, t70 * p0, const MethodInfo* method)
{
	typedef void (*m2702_ftn) (t68 *, t70 *);
	static m2702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t70  m1796 (t68 * __this, const MethodInfo* method)
{
	t70  V_0 = {0};
	{
		m2701(__this, (&V_0), NULL);
		t70  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m1804 (t68 * __this, t70  p0, const MethodInfo* method)
{
	{
		m2702(__this, (&p0), NULL);
		return;
	}
}
extern "C" void m2703 (t68 * __this, t67 * p0, const MethodInfo* method)
{
	typedef void (*m2703_ftn) (t68 *, t67 *);
	static m2703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2704 (t68 * __this, t67 * p0, const MethodInfo* method)
{
	typedef void (*m2704_ftn) (t68 *, t67 *);
	static m2704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t67  m1798 (t68 * __this, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		m2703(__this, (&V_0), NULL);
		t67  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m210 (t68 * __this, t67  p0, const MethodInfo* method)
{
	{
		m2704(__this, (&p0), NULL);
		return;
	}
}
extern "C" t68 * m1486 (t68 * __this, const MethodInfo* method)
{
	{
		t68 * L_0 = m2705(__this, NULL);
		return L_0;
	}
}
extern TypeInfo* t182_TI_var;
extern "C" void m181 (t68 * __this, t68 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t182_TI_var = il2cpp_codegen_type_info_from_index(250);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((t182 *)IsInst(__this, t182_TI_var)))
		{
			goto IL_0016;
		}
	}
	{
		m1891(NULL, (t47*) &_stringLiteral224, __this, NULL);
	}

IL_0016:
	{
		t68 * L_0 = p0;
		m2706(__this, L_0, NULL);
		return;
	}
}
extern "C" t68 * m2705 (t68 * __this, const MethodInfo* method)
{
	typedef t68 * (*m2705_ftn) (t68 *);
	static m2705_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2705_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2706 (t68 * __this, t68 * p0, const MethodInfo* method)
{
	typedef void (*m2706_ftn) (t68 *, t68 *);
	static m2706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m1789 (t68 * __this, t68 * p0, const MethodInfo* method)
{
	{
		t68 * L_0 = p0;
		m2707(__this, L_0, 1, NULL);
		return;
	}
}
extern "C" void m2707 (t68 * __this, t68 * p0, bool p1, const MethodInfo* method)
{
	typedef void (*m2707_ftn) (t68 *, t68 *, bool);
	static m2707_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2707_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" void m2708 (t68 * __this, t392 * p0, const MethodInfo* method)
{
	typedef void (*m2708_ftn) (t68 *, t392 *);
	static m2708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t392  m1857 (t68 * __this, const MethodInfo* method)
{
	t392  V_0 = {0};
	{
		m2708(__this, (&V_0), NULL);
		t392  L_0 = V_0;
		return L_0;
	}
}
extern "C" t67  m1878 (t68 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m2709(NULL, __this, (&p0), NULL);
		return L_0;
	}
}
extern "C" t67  m2709 (t7 * __this , t68 * p0, t67 * p1, const MethodInfo* method)
{
	typedef t67  (*m2709_ftn) (t68 *, t67 *);
	static m2709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t67  m1757 (t68 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = m2710(NULL, __this, (&p0), NULL);
		return L_0;
	}
}
extern "C" t67  m2710 (t7 * __this , t68 * p0, t67 * p1, const MethodInfo* method)
{
	typedef t67  (*m2710_ftn) (t68 *, t67 *);
	static m2710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m1946 (t68 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1946_ftn) (t68 *);
	static m1946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m1790 (t68 * __this, const MethodInfo* method)
{
	typedef void (*m1790_ftn) (t68 *);
	static m1790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
extern TypeInfo* t545_TI_var;
extern "C" t7 * m2711 (t68 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t545_TI_var = il2cpp_codegen_type_info_from_index(939);
		s_Il2CppMethodIntialized = true;
	}
	{
		t545 * L_0 = (t545 *)il2cpp_codegen_object_new (t545_TI_var);
		m2693(L_0, __this, NULL);
		return L_0;
	}
}
extern "C" t68 * m1944 (t68 * __this, int32_t p0, const MethodInfo* method)
{
	typedef t68 * (*m1944_ftn) (t68 *, int32_t);
	static m1944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
#include "t80.h"
#ifndef _MSC_VER
#else
#endif
#include "t80MD.h"



extern "C" float m2712 (t7 * __this , const MethodInfo* method)
{
	typedef float (*m2712_ftn) ();
	static m2712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
extern "C" float m1545 (t7 * __this , const MethodInfo* method)
{
	typedef float (*m1545_ftn) ();
	static m1545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
extern "C" float m1583 (t7 * __this , const MethodInfo* method)
{
	typedef float (*m1583_ftn) ();
	static m1583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
extern "C" void m211 (t7 * __this , float p0, const MethodInfo* method)
{
	typedef void (*m211_ftn) (float);
	static m211_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m211_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(p0);
}
extern "C" float m212 (t7 * __this , const MethodInfo* method)
{
	typedef float (*m212_ftn) ();
	static m212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
#include "t62.h"
#ifndef _MSC_VER
#else
#endif
#include "t62MD.h"



extern "C" int32_t m163 (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = m2713(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" int32_t m2713 (t7 * __this , int32_t p0, int32_t p1, const MethodInfo* method)
{
	typedef int32_t (*m2713_ftn) (int32_t, int32_t);
	static m2713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t489.h"
#ifndef _MSC_VER
#else
#endif
#include "t489MD.h"



extern "C" void m2714 (t489 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void t489_marshal(const t489& unmarshaled, t489_marshaled& marshaled)
{
}
void t489_marshal_back(const t489_marshaled& marshaled, t489& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void t489_marshal_cleanup(t489_marshaled& marshaled)
{
}
#include "t546.h"
#ifndef _MSC_VER
#else
#endif
#include "t546MD.h"

#include "t47MD.h"


extern "C" t47* m2715 (t7 * __this , t47* p0, t47* p1, const MethodInfo* method)
{
	typedef t47* (*m2715_ftn) (t47*, t47*);
	static m2715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m2716 (t7 * __this , t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_0 = L_0;
		t47* L_1 = p0;
		t47* L_2 = V_0;
		t47* L_3 = m2715(NULL, L_1, L_2, NULL);
		return L_3;
	}
}
#include "t547.h"
#ifndef _MSC_VER
#else
#endif
#include "t547MD.h"

#include "t157.h"


extern "C" t67  m2717 (t547 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2718 (t547 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t67  m2719 (t547 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2720 (t547 * __this, t67  p0, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m2721 (t547 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2722 (t547 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" float m2723 (t547 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m2724 (t547 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" float m2725 (t547 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2726 (t547 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m2727 (t547 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2728 (t547 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" float m2729 (t547 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2730 (t547 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" t157  m2731 (t547 * __this, const MethodInfo* method)
{
	{
		t157  L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m2732 (t547 * __this, t157  p0, const MethodInfo* method)
{
	{
		t157  L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
#include "t353.h"
#ifndef _MSC_VER
#else
#endif
#include "t353MD.h"

#include "t323.h"
#include "t348.h"
#include "t348MD.h"


extern "C" bool m2733 (t7 * __this , t67  p0, t67  p1, t323 * p2, float p3, int32_t p4, const MethodInfo* method)
{
	{
		t323 * L_0 = p2;
		float L_1 = p3;
		int32_t L_2 = p4;
		bool L_3 = m2734(NULL, (&p0), (&p1), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
extern "C" bool m2734 (t7 * __this , t67 * p0, t67 * p1, t323 * p2, float p3, int32_t p4, const MethodInfo* method)
{
	typedef bool (*m2734_ftn) (t67 *, t67 *, t323 *, float, int32_t);
	static m2734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern "C" bool m2735 (t7 * __this , t67  p0, t67  p1, t323 * p2, float p3, int32_t p4, const MethodInfo* method)
{
	{
		t67  L_0 = p0;
		t67  L_1 = p1;
		t323 * L_2 = p2;
		float L_3 = p3;
		int32_t L_4 = p4;
		bool L_5 = m2733(NULL, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
extern "C" bool m1651 (t7 * __this , t348  p0, t323 * p1, float p2, int32_t p3, const MethodInfo* method)
{
	{
		t67  L_0 = m1557((&p0), NULL);
		t67  L_1 = m1558((&p0), NULL);
		t323 * L_2 = p1;
		float L_3 = p2;
		int32_t L_4 = p3;
		bool L_5 = m2735(NULL, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
extern "C" t354* m1572 (t7 * __this , t348  p0, float p1, int32_t p2, const MethodInfo* method)
{
	{
		t67  L_0 = m1557((&p0), NULL);
		t67  L_1 = m1558((&p0), NULL);
		float L_2 = p1;
		int32_t L_3 = p2;
		t354* L_4 = m2736(NULL, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
extern "C" t354* m2736 (t7 * __this , t67  p0, t67  p1, float p2, int32_t p3, const MethodInfo* method)
{
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		t354* L_2 = m2737(NULL, (&p0), (&p1), L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" t354* m2737 (t7 * __this , t67 * p0, t67 * p1, float p2, int32_t p3, const MethodInfo* method)
{
	typedef t354* (*m2737_ftn) (t67 *, t67 *, float, int32_t);
	static m2737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
#include "t352.h"
#ifndef _MSC_VER
#else
#endif
#include "t352MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t323MD.h"



extern "C" t67  m1576 (t323 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t67  m1577 (t323 * __this, const MethodInfo* method)
{
	{
		t67  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" float m1575 (t323 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t352 * m1574 (t323 * __this, const MethodInfo* method)
{
	{
		t352 * L_0 = (__this->f5);
		return L_0;
	}
}
#include "t75.h"
#ifndef _MSC_VER
#else
#endif
#include "t75MD.h"

#include "t548.h"
#include "t51.h"
#include "t349.h"
#include "t548MD.h"


extern TypeInfo* t548_TI_var;
extern TypeInfo* t75_TI_var;
extern const MethodInfo* m3265_MI_var;
extern "C" void m2738 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t548_TI_var = il2cpp_codegen_type_info_from_index(940);
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		m3265_MI_var = il2cpp_codegen_method_info_from_index(2147483903);
		s_Il2CppMethodIntialized = true;
	}
	{
		t548 * L_0 = (t548 *)il2cpp_codegen_object_new (t548_TI_var);
		m3265(L_0, m3265_MI_var);
		((t75_SFs*)t75_TI_var->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" void m192 (t7 * __this , t51 * p0, t51 * p1, bool p2, const MethodInfo* method)
{
	typedef void (*m192_ftn) (t51 *, t51 *, bool);
	static m192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D,System.Boolean)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t75_TI_var;
extern "C" void m197 (t7 * __this , t51 * p0, t51 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		t51 * L_0 = p0;
		t51 * L_1 = p1;
		bool L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		m192(NULL, L_0, L_1, L_2, NULL);
		return;
	}
}
extern TypeInfo* t75_TI_var;
extern "C" void m2739 (t7 * __this , t74  p0, t74  p1, float p2, int32_t p3, float p4, float p5, t349 * p6, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		float L_2 = p4;
		float L_3 = p5;
		t349 * L_4 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		m2740(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
extern "C" void m2740 (t7 * __this , t74 * p0, t74 * p1, float p2, int32_t p3, float p4, float p5, t349 * p6, const MethodInfo* method)
{
	typedef void (*m2740_ftn) (t74 *, t74 *, float, int32_t, float, float, t349 *);
	static m2740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6);
}
extern TypeInfo* t75_TI_var;
extern "C" t349  m1652 (t7 * __this , t74  p0, t74  p1, float p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		t74  L_0 = p0;
		t74  L_1 = p1;
		float L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		t349  L_6 = m2741(NULL, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
extern TypeInfo* t75_TI_var;
extern "C" t349  m2741 (t7 * __this , t74  p0, t74  p1, float p2, int32_t p3, float p4, float p5, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	t349  V_0 = {0};
	{
		t74  L_0 = p0;
		t74  L_1 = p1;
		float L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = p4;
		float L_5 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		m2739(NULL, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), NULL);
		t349  L_6 = V_0;
		return L_6;
	}
}
extern TypeInfo* t75_TI_var;
extern "C" t351* m1559 (t7 * __this , t74  p0, t74  p1, float p2, int32_t p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t75_TI_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = p2;
		int32_t L_1 = p3;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t75_TI_var);
		t351* L_4 = m2742(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
extern "C" t351* m2742 (t7 * __this , t74 * p0, t74 * p1, float p2, int32_t p3, float p4, float p5, const MethodInfo* method)
{
	typedef t351* (*m2742_ftn) (t74 *, t74 *, float, int32_t, float, float);
	static m2742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
#ifndef _MSC_VER
#else
#endif
#include "t349MD.h"

#include "t73.h"
#include "t51MD.h"


extern "C" t74  m1563 (t349 * __this, const MethodInfo* method)
{
	{
		t74  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t74  m1564 (t349 * __this, const MethodInfo* method)
{
	{
		t74  L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" float m1653 (t349 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t51 * m1560 (t349 * __this, const MethodInfo* method)
{
	{
		t51 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t73 * m2743 (t349 * __this, const MethodInfo* method)
{
	t73 * G_B3_0 = {0};
	{
		t51 * L_0 = m1560(__this, NULL);
		bool L_1 = m170(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t51 * L_2 = m1560(__this, NULL);
		t73 * L_3 = m2746(L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((t73 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern "C" t68 * m1561 (t349 * __this, const MethodInfo* method)
{
	t73 * V_0 = {0};
	{
		t73 * L_0 = m2743(__this, NULL);
		V_0 = L_0;
		t73 * L_1 = V_0;
		bool L_2 = m170(NULL, L_1, (t66 *)NULL, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		t73 * L_3 = V_0;
		t68 * L_4 = m176(L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		t51 * L_5 = m1560(__this, NULL);
		bool L_6 = m170(NULL, L_5, (t66 *)NULL, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		t51 * L_7 = m1560(__this, NULL);
		t68 * L_8 = m176(L_7, NULL);
		return L_8;
	}

IL_0037:
	{
		return (t68 *)NULL;
	}
}
#include "t549.h"
#ifndef _MSC_VER
#else
#endif
#include "t549MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t73MD.h"



extern "C" void m2744 (t73 * __this, t74 * p0, const MethodInfo* method)
{
	typedef void (*m2744_ftn) (t73 *, t74 *);
	static m2744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m200 (t73 * __this, t74  p0, const MethodInfo* method)
{
	{
		m2744(__this, (&p0), NULL);
		return;
	}
}
extern "C" void m195 (t73 * __this, t74  p0, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		m2745(NULL, __this, (&p0), L_0, NULL);
		return;
	}
}
extern "C" void m2745 (t7 * __this , t73 * p0, t74 * p1, int32_t p2, const MethodInfo* method)
{
	typedef void (*m2745_ftn) (t73 *, t74 *, int32_t);
	static m2745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(p0, p1, p2);
}
#ifndef _MSC_VER
#else
#endif



extern "C" t73 * m2746 (t51 * __this, const MethodInfo* method)
{
	typedef t73 * (*m2746_ftn) (t51 *);
	static m2746_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2746_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#include "t72.h"
#ifndef _MSC_VER
#else
#endif
#include "t72MD.h"



#include "t550.h"
#ifndef _MSC_VER
#else
#endif
#include "t550MD.h"

#include "t213.h"


extern "C" void m2747 (t550 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2748 (t550 * __this, bool p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2748((t550 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, bool p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, bool p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t550(Il2CppObject* delegate, bool p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern TypeInfo* t54_TI_var;
extern "C" t7 * m2749 (t550 * __this, bool p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(t54_TI_var, &p0);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m2750 (t550 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t551.h"
#ifndef _MSC_VER
#else
#endif
#include "t551MD.h"



extern TypeInfo* t551_TI_var;
extern "C" void m2751 (t551 * __this, bool p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t551_TI_var = il2cpp_codegen_type_info_from_index(941);
		s_Il2CppMethodIntialized = true;
	}
	{
		t550 * L_0 = ((t551_SFs*)t551_TI_var->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t550 * L_1 = ((t551_SFs*)t551_TI_var->static_fields)->f0;
		bool L_2 = p0;
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#include "t552.h"
#ifndef _MSC_VER
#else
#endif
#include "t552MD.h"

#include "mscorlib_ArrayTypes.h"


extern "C" void m2752 (t552 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2753 (t552 * __this, t553* p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2753((t552 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 *, t7 * __this, t553* p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t7 * __this, t553* p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t552(Il2CppObject* delegate, t553* p0)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	float* _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)p0);

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern "C" t7 * m2754 (t552 * __this, t553* p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m2755 (t552 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t554.h"
#ifndef _MSC_VER
#else
#endif
#include "t554MD.h"



extern "C" void m2756 (t554 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2757 (t554 * __this, int32_t p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2757((t554 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t554(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern TypeInfo* t58_TI_var;
extern "C" t7 * m2758 (t554 * __this, int32_t p0, t213 * p1, t7 * p2, const MethodInfo* method)
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
extern "C" void m2759 (t554 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t22.h"
#ifndef _MSC_VER
#else
#endif
#include "t22MD.h"



extern "C" void m2760 (t22 * __this, t553* p0, const MethodInfo* method)
{
	{
		t552 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t552 * L_1 = (__this->f2);
		t553* L_2 = p0;
		VirtActionInvoker1< t553* >::Invoke(10 /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
extern "C" void m2761 (t22 * __this, int32_t p0, const MethodInfo* method)
{
	{
		t554 * L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t554 * L_1 = (__this->f3);
		int32_t L_2 = p0;
		VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
#include "t16.h"
#ifndef _MSC_VER
#else
#endif
#include "t16MD.h"



extern "C" void m171 (t16 * __this, t22 * p0, float p1, const MethodInfo* method)
{
	typedef void (*m171_ftn) (t16 *, t22 *, float);
	static m171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, p0, p1);
}
#include "t555.h"
#ifndef _MSC_VER
#else
#endif
#include "t555MD.h"



#include "t556.h"
#ifndef _MSC_VER
#else
#endif
#include "t556MD.h"

#include "t557.h"
#include "t558.h"
#include "t559.h"
#include "t60MD.h"


extern TypeInfo* t47_TI_var;
extern "C" void m2762 (t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		__this->f0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_0 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f1 = L_0;
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		__this->f2 = L_1;
		__this->f3 = (t66 *)NULL;
		__this->f4 = (0.0f);
		__this->f5 = 0;
		__this->f6 = 0;
		__this->f7 = 0;
		__this->f8 = (t557 *)NULL;
		return;
	}
}
extern "C" t47* m2763 (t556 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2764 (t556 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t47* m2765 (t556 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2766 (t556 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m2767 (t556 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2768 (t556 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m2769 (t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2770 (t556 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t66 * m2771 (t556 * __this, const MethodInfo* method)
{
	{
		t66 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2772 (t556 * __this, t66 * p0, const MethodInfo* method)
{
	{
		t66 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t47* m2773 (t556 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2774 (t556 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m2775 (t556 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2776 (t556 * __this, float p0, const MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" int32_t m2777 (t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern "C" void m2778 (t556 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m2779 (t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
extern "C" bool m2780 (t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
extern "C" t557 * m2781 (t556 * __this, const MethodInfo* method)
{
	{
		bool L_0 = m2779(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m1452(NULL, (t47*) &_stringLiteral225, NULL);
	}

IL_0015:
	{
		t557 * L_1 = (__this->f8);
		return L_1;
	}
}
extern "C" t558  m2782 (t556 * __this, const MethodInfo* method)
{
	{
		bool L_0 = m2780(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m1452(NULL, (t47*) &_stringLiteral226, NULL);
	}

IL_0015:
	{
		t558  L_1 = (__this->f9);
		return L_1;
	}
}
extern "C" t559  m2783 (t556 * __this, const MethodInfo* method)
{
	{
		bool L_0 = m2780(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m1452(NULL, (t47*) &_stringLiteral227, NULL);
	}

IL_0015:
	{
		t559  L_1 = (__this->f10);
		return L_1;
	}
}
extern "C" int32_t m2784 (t556 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		t47* L_0 = m2773(__this, NULL);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = m2775(__this, NULL);
		V_1 = L_3;
		int32_t L_4 = m3224((&V_1), NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
#include "t560.h"
#ifndef _MSC_VER
#else
#endif
#include "t560MD.h"



#include "t561.h"
#ifndef _MSC_VER
#else
#endif
#include "t561MD.h"



extern "C" void m2785 (t561 * __this, t667* p0, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		t667* L_0 = p0;
		m2789(__this, L_0, NULL);
		return;
	}
}
extern "C" void m2786 (t561 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		m2789(__this, (t667*)(t667*)NULL, NULL);
		return;
	}
}
extern "C" void m2787 (t561 * __this, const MethodInfo* method)
{
	typedef void (*m2787_ftn) (t561 *);
	static m2787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2788 (t561 * __this, const MethodInfo* method)
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
		m2787(__this, NULL);
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
extern "C" void m2789 (t561 * __this, t667* p0, const MethodInfo* method)
{
	typedef void (*m2789_ftn) (t561 *, t667*);
	static m2789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, p0);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void t561_marshal(const t561& unmarshaled, t561_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t561_marshal_back(const t561_marshaled& marshaled, t561& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void t561_marshal_cleanup(t561_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
#include "t557MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t559MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t558MD.h"

#include "t329MD.h"


extern "C" bool m2790 (t558 * __this, t47* p0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		t47* L_0 = p0;
		int32_t L_1 = m2808(NULL, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->f2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->f0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->f1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
extern "C" int32_t m2791 (t558 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m2792 (t558 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m2793 (t558 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m2794 (t558 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" float m2795 (t558 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m2796 (t558 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" bool m2797 (t558 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t L_1 = m2808(NULL, L_0, NULL);
		int32_t L_2 = (__this->f5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern "C" bool m2798 (t558 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#include "t563.h"
#ifndef _MSC_VER
#else
#endif
#include "t563MD.h"



extern "C" bool m2799 (t563 * __this, t47* p0, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t47* L_0 = p0;
		int32_t L_1 = m2808(NULL, L_0, NULL);
		int32_t L_2 = (__this->f2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		t47* L_3 = p0;
		int32_t L_4 = m2808(NULL, L_3, NULL);
		int32_t L_5 = (__this->f0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern "C" bool m2800 (t563 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		int32_t L_1 = m2808(NULL, L_0, NULL);
		int32_t L_2 = (__this->f1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern "C" int32_t m2801 (t563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m2802 (t563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m2803 (t563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" float m2804 (t563 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" bool m2805 (t563 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" bool m2806 (t563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m2807 (t563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void t563_marshal(const t563& unmarshaled, t563_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t563_marshal_back(const t563_marshaled& marshaled, t563& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void t563_marshal_cleanup(t563_marshaled& marshaled)
{
}
#include "t329.h"
#ifndef _MSC_VER
#else
#endif

#include "t393.h"


extern "C" void m1886 (t329 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m2809(__this, L_0, NULL);
		return;
	}
}
extern "C" void m1885 (t329 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		m2810(__this, L_0, NULL);
		return;
	}
}
extern "C" t393 * m1884 (t329 * __this, const MethodInfo* method)
{
	typedef t393 * (*m1884_ftn) (t329 *);
	static m1884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2808 (t7 * __this , t47* p0, const MethodInfo* method)
{
	typedef int32_t (*m2808_ftn) (t47*);
	static m2808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m2809 (t329 * __this, t47* p0, const MethodInfo* method)
{
	typedef void (*m2809_ftn) (t329 *, t47*);
	static m2809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m2810 (t329 * __this, t47* p0, const MethodInfo* method)
{
	typedef void (*m2810_ftn) (t329 *, t47*);
	static m2810_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2810_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t564.h"
#ifndef _MSC_VER
#else
#endif
#include "t564MD.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void t564_marshal(const t564& unmarshaled, t564_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
}
void t564_marshal_back(const t564_marshaled& marshaled, t564& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void t564_marshal_cleanup(t564_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t565.h"
#ifndef _MSC_VER
#else
#endif
#include "t565MD.h"



#include "t566.h"
#ifndef _MSC_VER
#else
#endif
#include "t566MD.h"



extern "C" t47* m2811 (t566 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2812 (t566 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t47* m2813 (t566 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2814 (t566 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void t566_marshal(const t566& unmarshaled, t566_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = il2cpp_codegen_marshal_string(unmarshaled.f1);
	marshaled.f2 = unmarshaled.f2;
}
void t566_marshal_back(const t566_marshaled& marshaled, t566& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = il2cpp_codegen_marshal_string_result(marshaled.f1);
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void t566_marshal_cleanup(t566_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.f1);
	marshaled.f1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
#include "t393MD.h"



#include "t173.h"
#ifndef _MSC_VER
#else
#endif
#include "t173MD.h"



#include "t174.h"
#ifndef _MSC_VER
#else
#endif
#include "t174MD.h"



#include "t175.h"
#ifndef _MSC_VER
#else
#endif
#include "t175MD.h"



#include "t567.h"
#ifndef _MSC_VER
#else
#endif
#include "t567MD.h"

#include "t219.h"
#include "t219MD.h"
#include "t74MD.h"


extern "C" int32_t m2815 (t567 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return (((int32_t)L_0));
	}
}
extern "C" int32_t m2816 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f2);
		float L_1 = m1619(L_0, NULL);
		return (((int32_t)L_1));
	}
}
extern "C" int32_t m2817 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f2);
		float L_1 = m1620(L_0, NULL);
		return (((int32_t)((-L_1))));
	}
}
extern "C" int32_t m2818 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f2);
		float L_1 = m1624(L_0, NULL);
		return (((int32_t)L_1));
	}
}
extern "C" int32_t m2819 (t567 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t219 * L_1 = &(__this->f2);
		float L_2 = m1625(L_1, NULL);
		t219 * L_3 = &(__this->f2);
		float L_4 = m1620(L_3, NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
extern "C" int32_t m2820 (t567 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t219 * L_1 = &(__this->f2);
		float L_2 = m1625(L_1, NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
extern "C" int32_t m2821 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f2);
		float L_1 = m1624(L_0, NULL);
		return (((int32_t)L_1));
	}
}
extern "C" int32_t m2822 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f2);
		float L_1 = m1624(L_0, NULL);
		t219 * L_2 = &(__this->f2);
		float L_3 = m1619(L_2, NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
extern "C" t74  m2823 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f1);
		float L_1 = m1624(L_0, NULL);
		t219 * L_2 = &(__this->f1);
		float L_3 = m1625(L_2, NULL);
		t74  L_4 = {0};
		m1500(&L_4, L_1, L_3, NULL);
		return L_4;
	}
}
extern "C" t74  m2824 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f1);
		float L_1 = m1624(L_0, NULL);
		t219 * L_2 = &(__this->f1);
		float L_3 = m1619(L_2, NULL);
		t219 * L_4 = &(__this->f1);
		float L_5 = m1625(L_4, NULL);
		t74  L_6 = {0};
		m1500(&L_6, ((float)((float)L_1+(float)L_3)), L_5, NULL);
		return L_6;
	}
}
extern "C" t74  m2825 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f1);
		float L_1 = m1624(L_0, NULL);
		t219 * L_2 = &(__this->f1);
		float L_3 = m1619(L_2, NULL);
		t219 * L_4 = &(__this->f1);
		float L_5 = m1625(L_4, NULL);
		t219 * L_6 = &(__this->f1);
		float L_7 = m1620(L_6, NULL);
		t74  L_8 = {0};
		m1500(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), NULL);
		return L_8;
	}
}
extern "C" t74  m2826 (t567 * __this, const MethodInfo* method)
{
	{
		t219 * L_0 = &(__this->f1);
		float L_1 = m1624(L_0, NULL);
		t219 * L_2 = &(__this->f1);
		float L_3 = m1625(L_2, NULL);
		t219 * L_4 = &(__this->f1);
		float L_5 = m1620(L_4, NULL);
		t74  L_6 = {0};
		m1500(&L_6, L_1, ((float)((float)L_3+(float)L_5)), NULL);
		return L_6;
	}
}
extern "C" t74  m2827 (t567 * __this, const MethodInfo* method)
{
	t74  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t74  L_1 = m2823(__this, NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t74  L_2 = m2823(__this, NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern "C" t74  m2828 (t567 * __this, const MethodInfo* method)
{
	t74  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t74  L_1 = m2826(__this, NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t74  L_2 = m2824(__this, NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern "C" t74  m2829 (t567 * __this, const MethodInfo* method)
{
	t74  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t74  L_1 = m2825(__this, NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t74  L_2 = m2825(__this, NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern "C" t74  m2830 (t567 * __this, const MethodInfo* method)
{
	t74  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t74  L_1 = m2824(__this, NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t74  L_2 = m2826(__this, NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
#include "t172.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void t567_marshal(const t567& unmarshaled, t567_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
	marshaled.f6 = unmarshaled.f6;
	marshaled.f7 = unmarshaled.f7;
}
void t567_marshal_back(const t567_marshaled& marshaled, t567& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
	unmarshaled.f6 = marshaled.f6;
	unmarshaled.f7 = marshaled.f7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void t567_marshal_cleanup(t567_marshaled& marshaled)
{
}
#include "t568.h"
#ifndef _MSC_VER
#else
#endif
#include "t568MD.h"



extern "C" void m2831 (t568 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2832 (t568 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2832((t568 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t568(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t7 * m2833 (t568 * __this, t213 * p0, t7 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m2834 (t568 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t171.h"
#ifndef _MSC_VER
#else
#endif
#include "t171MD.h"

#include "t179.h"
#include "t358.h"
#include "t361.h"
#include "t214.h"
#include "t361MD.h"
#include "t358MD.h"


extern TypeInfo* t171_TI_var;
extern TypeInfo* t358_TI_var;
extern "C" void m1600 (t7 * __this , t358 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t171_TI_var = il2cpp_codegen_type_info_from_index(236);
		t358_TI_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	{
		t358 * L_0 = ((t171_SFs*)t171_TI_var->static_fields)->f2;
		t358 * L_1 = p0;
		t361 * L_2 = m1639(NULL, L_0, L_1, NULL);
		((t171_SFs*)t171_TI_var->static_fields)->f2 = ((t358 *)Castclass(L_2, t358_TI_var));
		return;
	}
}
extern TypeInfo* t171_TI_var;
extern TypeInfo* t358_TI_var;
extern "C" void m2835 (t7 * __this , t358 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t171_TI_var = il2cpp_codegen_type_info_from_index(236);
		t358_TI_var = il2cpp_codegen_type_info_from_index(240);
		s_Il2CppMethodIntialized = true;
	}
	{
		t358 * L_0 = ((t171_SFs*)t171_TI_var->static_fields)->f2;
		t358 * L_1 = p0;
		t361 * L_2 = m1640(NULL, L_0, L_1, NULL);
		((t171_SFs*)t171_TI_var->static_fields)->f2 = ((t358 *)Castclass(L_2, t358_TI_var));
		return;
	}
}
extern "C" t179 * m1896 (t171 * __this, const MethodInfo* method)
{
	typedef t179 * (*m1896_ftn) (t171 *);
	static m1896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m1769 (t171 * __this, uint16_t p0, const MethodInfo* method)
{
	typedef bool (*m1769_ftn) (t171 *, uint16_t);
	static m1769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1769_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, p0);
}
extern TypeInfo* t171_TI_var;
extern "C" void m2836 (t7 * __this , t171 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t171_TI_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	t358 * V_0 = {0};
	{
		t358 * L_0 = ((t171_SFs*)t171_TI_var->static_fields)->f2;
		V_0 = L_0;
		t358 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t358 * L_2 = V_0;
		t171 * L_3 = p0;
		VirtActionInvoker1< t171 * >::Invoke(10 /* System.Void System.Action`1<UnityEngine.Font>::Invoke(!0) */, L_2, L_3);
	}

IL_0013:
	{
		t171 * L_4 = p0;
		t568 * L_5 = (L_4->f3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		t171 * L_6 = p0;
		t568 * L_7 = (L_6->f3);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke() */, L_7);
	}

IL_0029:
	{
		return;
	}
}
extern "C" bool m1899 (t171 * __this, const MethodInfo* method)
{
	typedef bool (*m1899_ftn) (t171 *);
	static m1899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1901 (t171 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1901_ftn) (t171 *);
	static m1901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1901_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
#include "t380.h"
#ifndef _MSC_VER
#else
#endif
#include "t380MD.h"



#include "t379.h"
#ifndef _MSC_VER
#else
#endif
#include "t379MD.h"



#include "t224.h"
#ifndef _MSC_VER
#else
#endif
#include "t224MD.h"

#include "t225.h"
#include "t569.h"
#include "t570.h"
#include "t223.h"
#include "t330.h"
#include "t341MD.h"
#include "t225MD.h"
#include "t569MD.h"
#include "t570MD.h"
#include "t330MD.h"


extern "C" void m1736 (t224 * __this, const MethodInfo* method)
{
	{
		m1894(__this, ((int32_t)50), NULL);
		return;
	}
}
extern TypeInfo* t225_TI_var;
extern TypeInfo* t569_TI_var;
extern TypeInfo* t570_TI_var;
extern const MethodInfo* m3266_MI_var;
extern const MethodInfo* m3267_MI_var;
extern const MethodInfo* m3268_MI_var;
extern "C" void m1894 (t224 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t225_TI_var = il2cpp_codegen_type_info_from_index(243);
		t569_TI_var = il2cpp_codegen_type_info_from_index(942);
		t570_TI_var = il2cpp_codegen_type_info_from_index(943);
		m3266_MI_var = il2cpp_codegen_method_info_from_index(2147483904);
		m3267_MI_var = il2cpp_codegen_method_info_from_index(2147483905);
		m3268_MI_var = il2cpp_codegen_method_info_from_index(2147483906);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		int32_t L_0 = p0;
		t225 * L_1 = (t225 *)il2cpp_codegen_object_new (t225_TI_var);
		m3266(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), m3266_MI_var);
		__this->f5 = L_1;
		int32_t L_2 = p0;
		t569 * L_3 = (t569 *)il2cpp_codegen_object_new (t569_TI_var);
		m3267(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), m3267_MI_var);
		__this->f6 = L_3;
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (t570_TI_var);
		m3268(L_4, ((int32_t)20), m3268_MI_var);
		__this->f7 = L_4;
		m2838(__this, NULL);
		return;
	}
}
extern "C" void m2837 (t224 * __this, const MethodInfo* method)
{
	{
		m2839(__this, NULL);
		return;
	}
}
extern "C" void m2838 (t224 * __this, const MethodInfo* method)
{
	typedef void (*m2838_ftn) (t224 *);
	static m2838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m2839 (t224 * __this, const MethodInfo* method)
{
	typedef void (*m2839_ftn) (t224 *);
	static m2839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
extern "C" bool m2840 (t224 * __this, t47* p0, t171 * p1, t157  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, t74  p15, t74  p16, bool p17, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t171 * L_1 = p1;
		t157  L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = p4;
		float L_5 = p5;
		int32_t L_6 = p6;
		bool L_7 = p7;
		bool L_8 = p8;
		int32_t L_9 = p9;
		int32_t L_10 = p10;
		int32_t L_11 = p11;
		int32_t L_12 = p12;
		bool L_13 = p13;
		int32_t L_14 = p14;
		float L_15 = ((&p15)->f1);
		float L_16 = ((&p15)->f2);
		float L_17 = ((&p16)->f1);
		float L_18 = ((&p16)->f2);
		bool L_19 = p17;
		bool L_20 = m2841(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, NULL);
		return L_20;
	}
}
extern "C" bool m2841 (t224 * __this, t47* p0, t171 * p1, t157  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, float p15, float p16, float p17, float p18, bool p19, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		t171 * L_1 = p1;
		int32_t L_2 = p3;
		float L_3 = p4;
		float L_4 = p5;
		int32_t L_5 = p6;
		bool L_6 = p7;
		bool L_7 = p8;
		int32_t L_8 = p9;
		int32_t L_9 = p10;
		int32_t L_10 = p11;
		int32_t L_11 = p12;
		bool L_12 = p13;
		int32_t L_13 = p14;
		float L_14 = p15;
		float L_15 = p16;
		float L_16 = p17;
		float L_17 = p18;
		bool L_18 = p19;
		bool L_19 = m2842(NULL, __this, L_0, L_1, (&p2), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		return L_19;
	}
}
extern "C" bool m2842 (t7 * __this , t224 * p0, t47* p1, t171 * p2, t157 * p3, int32_t p4, float p5, float p6, int32_t p7, bool p8, bool p9, int32_t p10, int32_t p11, int32_t p12, int32_t p13, bool p14, int32_t p15, float p16, float p17, float p18, float p19, bool p20, const MethodInfo* method)
{
	typedef bool (*m2842_ftn) (t224 *, t47*, t171 *, t157 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static m2842_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2842_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20);
}
extern "C" t219  m1786 (t224 * __this, const MethodInfo* method)
{
	typedef t219  (*m1786_ftn) (t224 *);
	static m1786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2843 (t224 * __this, const MethodInfo* method)
{
	typedef int32_t (*m2843_ftn) (t224 *);
	static m2843_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2843_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2844 (t224 * __this, t7 * p0, const MethodInfo* method)
{
	typedef void (*m2844_ftn) (t224 *, t7 *);
	static m2844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t222* m2845 (t224 * __this, const MethodInfo* method)
{
	typedef t222* (*m2845_ftn) (t224 *);
	static m2845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2846 (t224 * __this, const MethodInfo* method)
{
	typedef int32_t (*m2846_ftn) (t224 *);
	static m2846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t341_TI_var;
extern "C" int32_t m1763 (t224 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t341_TI_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		t47* L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_1 = m1783(NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		t47* L_2 = (__this->f1);
		int32_t L_3 = m1741(L_2, NULL);
		int32_t L_4 = m2843(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t341_TI_var);
		int32_t L_5 = m1774(NULL, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), NULL);
		int32_t L_6 = m1776(NULL, L_3, L_5, NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
extern "C" void m2847 (t224 * __this, t7 * p0, const MethodInfo* method)
{
	typedef void (*m2847_ftn) (t224 *, t7 *);
	static m2847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t668* m2848 (t224 * __this, const MethodInfo* method)
{
	typedef t668* (*m2848_ftn) (t224 *);
	static m2848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1762 (t224 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1762_ftn) (t224 *);
	static m1762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m2849 (t224 * __this, t7 * p0, const MethodInfo* method)
{
	typedef void (*m2849_ftn) (t224 *, t7 *);
	static m2849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t669* m2850 (t224 * __this, const MethodInfo* method)
{
	typedef t669* (*m2850_ftn) (t224 *);
	static m2850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1809 (t224 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1809_ftn) (t224 *);
	static m1809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t88_TI_var;
extern "C" void m2851 (t224 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
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
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, __this);
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
extern "C" t330  m2852 (t224 * __this, t330  p0, const MethodInfo* method)
{
	{
		t171 * L_0 = ((&p0)->f0);
		bool L_1 = m170(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t171 * L_2 = ((&p0)->f0);
		bool L_3 = m1899(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		t330  L_4 = p0;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&p0)->f2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&p0)->f6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		m2634(NULL, (t47*) &_stringLiteral228, NULL);
		(&p0)->f2 = 0;
		(&p0)->f6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&p0)->f8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		m2634(NULL, (t47*) &_stringLiteral229, NULL);
		(&p0)->f8 = 0;
	}

IL_0075:
	{
		t330  L_8 = p0;
		return L_8;
	}
}
extern "C" void m1898 (t224 * __this, const MethodInfo* method)
{
	{
		__this->f3 = 0;
		return;
	}
}
extern "C" void m2853 (t224 * __this, t569 * p0, const MethodInfo* method)
{
	{
		t569 * L_0 = p0;
		m2847(__this, L_0, NULL);
		return;
	}
}
extern "C" void m2854 (t224 * __this, t570 * p0, const MethodInfo* method)
{
	{
		t570 * L_0 = p0;
		m2849(__this, L_0, NULL);
		return;
	}
}
extern "C" void m2855 (t224 * __this, t225 * p0, const MethodInfo* method)
{
	{
		t225 * L_0 = p0;
		m2844(__this, L_0, NULL);
		return;
	}
}
extern "C" float m1904 (t224 * __this, t47* p0, t330  p1, const MethodInfo* method)
{
	t219  V_0 = {0};
	{
		(&p1)->f13 = 1;
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t47* L_0 = p0;
		t330  L_1 = p1;
		m1785(__this, L_0, L_1, NULL);
		t219  L_2 = m1786(__this, NULL);
		V_0 = L_2;
		float L_3 = m1619((&V_0), NULL);
		return L_3;
	}
}
extern "C" float m1905 (t224 * __this, t47* p0, t330  p1, const MethodInfo* method)
{
	t219  V_0 = {0};
	{
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t47* L_0 = p0;
		t330  L_1 = p1;
		m1785(__this, L_0, L_1, NULL);
		t219  L_2 = m1786(__this, NULL);
		V_0 = L_2;
		float L_3 = m1620((&V_0), NULL);
		return L_3;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" bool m1785 (t224 * __this, t47* p0, t330  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		t47* L_1 = p0;
		t47* L_2 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_3 = m185(NULL, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		t330  L_4 = (__this->f2);
		bool L_5 = m3161((&p1), L_4, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->f4);
		return L_6;
	}

IL_0035:
	{
		t47* L_7 = p0;
		t330  L_8 = p1;
		bool L_9 = m2856(__this, L_7, L_8, NULL);
		return L_9;
	}
}
extern "C" bool m2856 (t224 * __this, t47* p0, t330  p1, const MethodInfo* method)
{
	t330  V_0 = {0};
	{
		t47* L_0 = p0;
		__this->f1 = L_0;
		__this->f3 = 1;
		__this->f8 = 0;
		__this->f9 = 0;
		__this->f10 = 0;
		t330  L_1 = p1;
		__this->f2 = L_1;
		t330  L_2 = p1;
		t330  L_3 = m2852(__this, L_2, NULL);
		V_0 = L_3;
		t47* L_4 = p0;
		t171 * L_5 = ((&V_0)->f0);
		t157  L_6 = ((&V_0)->f1);
		int32_t L_7 = ((&V_0)->f2);
		float L_8 = ((&V_0)->f5);
		float L_9 = ((&V_0)->f3);
		int32_t L_10 = ((&V_0)->f6);
		bool L_11 = ((&V_0)->f4);
		bool L_12 = ((&V_0)->f8);
		int32_t L_13 = ((&V_0)->f9);
		int32_t L_14 = ((&V_0)->f10);
		int32_t L_15 = ((&V_0)->f12);
		int32_t L_16 = ((&V_0)->f13);
		bool L_17 = ((&V_0)->f11);
		int32_t L_18 = ((&V_0)->f7);
		t74  L_19 = ((&V_0)->f14);
		t74  L_20 = ((&V_0)->f15);
		bool L_21 = ((&V_0)->f16);
		bool L_22 = m2840(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		__this->f4 = L_22;
		bool L_23 = (__this->f4);
		return L_23;
	}
}
extern "C" t7* m1902 (t224 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t225 * L_1 = (__this->f5);
		m2855(__this, L_1, NULL);
		__this->f8 = 1;
	}

IL_001e:
	{
		t225 * L_2 = (__this->f5);
		return L_2;
	}
}
extern "C" t7* m1764 (t224 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t569 * L_1 = (__this->f6);
		m2853(__this, L_1, NULL);
		__this->f9 = 1;
	}

IL_001e:
	{
		t569 * L_2 = (__this->f6);
		return L_2;
	}
}
extern "C" t7* m1761 (t224 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t570 * L_1 = (__this->f7);
		m2854(__this, L_1, NULL);
		__this->f10 = 1;
	}

IL_001e:
	{
		t570 * L_2 = (__this->f7);
		return L_2;
	}
}
#include "t367.h"
#ifndef _MSC_VER
#else
#endif
#include "t367MD.h"



#include "t355.h"
#ifndef _MSC_VER
#else
#endif
#include "t355MD.h"



extern "C" void m1586 (t355 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m2857 (t355 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m2857((t355 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t355(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t7 * m2858 (t355 * __this, t213 * p0, t7 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m2859 (t355 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t184.h"
#ifndef _MSC_VER
#else
#endif
#include "t184MD.h"

#include "t150.h"


extern TypeInfo* t184_TI_var;
extern TypeInfo* t355_TI_var;
extern "C" void m1587 (t7 * __this , t355 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t184_TI_var = il2cpp_codegen_type_info_from_index(251);
		t355_TI_var = il2cpp_codegen_type_info_from_index(228);
		s_Il2CppMethodIntialized = true;
	}
	{
		t355 * L_0 = ((t184_SFs*)t184_TI_var->static_fields)->f2;
		t355 * L_1 = p0;
		t361 * L_2 = m1639(NULL, L_0, L_1, NULL);
		((t184_SFs*)t184_TI_var->static_fields)->f2 = ((t355 *)Castclass(L_2, t355_TI_var));
		return;
	}
}
extern TypeInfo* t184_TI_var;
extern TypeInfo* t355_TI_var;
extern "C" void m2860 (t7 * __this , t355 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t184_TI_var = il2cpp_codegen_type_info_from_index(251);
		t355_TI_var = il2cpp_codegen_type_info_from_index(228);
		s_Il2CppMethodIntialized = true;
	}
	{
		t355 * L_0 = ((t184_SFs*)t184_TI_var->static_fields)->f2;
		t355 * L_1 = p0;
		t361 * L_2 = m1640(NULL, L_0, L_1, NULL);
		((t184_SFs*)t184_TI_var->static_fields)->f2 = ((t355 *)Castclass(L_2, t355_TI_var));
		return;
	}
}
extern "C" int32_t m1645 (t184 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1645_ftn) (t184 *);
	static m1645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m1918 (t184 * __this, const MethodInfo* method)
{
	typedef bool (*m1918_ftn) (t184 *);
	static m1918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1918_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
extern "C" t150 * m1660 (t184 * __this, const MethodInfo* method)
{
	typedef t150 * (*m1660_ftn) (t184 *);
	static m1660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m1900 (t184 * __this, const MethodInfo* method)
{
	typedef float (*m1900_ftn) (t184 *);
	static m1900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m1922 (t184 * __this, float p0, const MethodInfo* method)
{
	typedef void (*m1922_ftn) (t184 *, float);
	static m1922_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1922_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" float m1679 (t184 * __this, const MethodInfo* method)
{
	typedef float (*m1679_ftn) (t184 *);
	static m1679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m1923 (t184 * __this, float p0, const MethodInfo* method)
{
	typedef void (*m1923_ftn) (t184 *, float);
	static m1923_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1923_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" bool m1630 (t184 * __this, const MethodInfo* method)
{
	typedef bool (*m1630_ftn) (t184 *);
	static m1630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1647 (t184 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1647_ftn) (t184 *);
	static m1647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1646 (t184 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1646_ftn) (t184 *);
	static m1646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m1659 (t184 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1659_ftn) (t184 *);
	static m1659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
extern "C" t179 * m1611 (t7 * __this , const MethodInfo* method)
{
	typedef t179 * (*m1611_ftn) ();
	static m1611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
extern "C" t179 * m1895 (t7 * __this , const MethodInfo* method)
{
	typedef t179 * (*m1895_ftn) ();
	static m1895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
extern TypeInfo* t184_TI_var;
extern "C" void m2861 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t184_TI_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	{
		t355 * L_0 = ((t184_SFs*)t184_TI_var->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t355 * L_1 = ((t184_SFs*)t184_TI_var->static_fields)->f2;
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern "C" void m1843 (t7 * __this , const MethodInfo* method)
{
	{
		m2861(NULL, NULL);
		return;
	}
}
#include "t360.h"
#ifndef _MSC_VER
#else
#endif
#include "t360MD.h"



extern "C" bool m1874 (t360 * __this, const MethodInfo* method)
{
	typedef bool (*m1874_ftn) (t360 *);
	static m1874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m2862 (t360 * __this, const MethodInfo* method)
{
	typedef bool (*m2862_ftn) (t360 *);
	static m2862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m1629 (t360 * __this, const MethodInfo* method)
{
	typedef bool (*m1629_ftn) (t360 *);
	static m1629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m2863 (t360 * __this, t74  p0, t150 * p1, const MethodInfo* method)
{
	{
		bool L_0 = m2862(__this, NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t223MD.h"

#include "t335.h"
#include "t356.h"
#include "t327.h"
#include "t335MD.h"
#include "t327MD.h"


extern TypeInfo* t223_TI_var;
extern "C" void m2864 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t223_TI_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	t223  V_0 = {0};
	{
		t335  L_0 = {0};
		m1594(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), NULL);
		((t223_SFs*)t223_TI_var->static_fields)->f6 = L_0;
		t327  L_1 = {0};
		m1626(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), NULL);
		((t223_SFs*)t223_TI_var->static_fields)->f7 = L_1;
		Initobj (t223_TI_var, (&V_0));
		t67  L_2 = m198(NULL, NULL);
		(&V_0)->f0 = L_2;
		t67  L_3 = m2421(NULL, NULL);
		(&V_0)->f1 = L_3;
		t327  L_4 = ((t223_SFs*)t223_TI_var->static_fields)->f7;
		(&V_0)->f5 = L_4;
		t335  L_5 = ((t223_SFs*)t223_TI_var->static_fields)->f6;
		(&V_0)->f2 = L_5;
		t74  L_6 = m1493(NULL, NULL);
		(&V_0)->f3 = L_6;
		t74  L_7 = m1493(NULL, NULL);
		(&V_0)->f4 = L_7;
		t223  L_8 = V_0;
		((t223_SFs*)t223_TI_var->static_fields)->f8 = L_8;
		return;
	}
}
#include "t183.h"
#ifndef _MSC_VER
#else
#endif
#include "t183MD.h"

#include "t233.h"
#include "t699.h"
#include "t539MD.h"


extern "C" void m1635 (t183 * __this, t157  p0, const MethodInfo* method)
{
	{
		m2865(NULL, __this, (&p0), NULL);
		return;
	}
}
extern "C" void m2865 (t7 * __this , t183 * p0, t157 * p1, const MethodInfo* method)
{
	typedef void (*m2865_ftn) (t183 *, t157 *);
	static m2865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t157  m1633 (t183 * __this, const MethodInfo* method)
{
	typedef t157  (*m1633_ftn) (t183 *);
	static m1633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m1956 (t183 * __this, bool p0, const MethodInfo* method)
{
	typedef void (*m1956_ftn) (t183 *, bool);
	static m1956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m1623 (t183 * __this, t179 * p0, t233 * p1, const MethodInfo* method)
{
	typedef void (*m1623_ftn) (t183 *, t179 *, t233 *);
	static m1623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t699_TI_var;
extern "C" void m1621 (t183 * __this, t225 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t699_TI_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	{
		t225 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		t69* L_2 = ((t69*)SZArrayNew(t69_TI_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		t7 * L_4 = Box(t699_TI_var, &L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_4;
		t47* L_5 = m2600(NULL, (t47*) &_stringLiteral230, L_2, NULL);
		m1891(NULL, L_5, __this, NULL);
		t225 * L_6 = p0;
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear() */, L_6);
	}

IL_0039:
	{
		t225 * L_7 = p0;
		m2866(__this, L_7, NULL);
		return;
	}
}
extern "C" void m2866 (t183 * __this, t7 * p0, const MethodInfo* method)
{
	typedef void (*m2866_ftn) (t183 *, t7 *);
	static m2866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t699_TI_var;
extern "C" void m1744 (t183 * __this, t222* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t699_TI_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		t69* L_1 = ((t69*)SZArrayNew(t69_TI_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		t7 * L_3 = Box(t699_TI_var, &L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_1, 0)) = (t7 *)L_3;
		t47* L_4 = m2600(NULL, (t47*) &_stringLiteral230, L_1, NULL);
		m1891(NULL, L_4, __this, NULL);
		p1 = 0;
	}

IL_0031:
	{
		t222* L_5 = p0;
		int32_t L_6 = p1;
		m2867(__this, L_5, L_6, NULL);
		return;
	}
}
extern "C" void m2867 (t183 * __this, t222* p0, int32_t p1, const MethodInfo* method)
{
	typedef void (*m2867_ftn) (t183 *, t222*, int32_t);
	static m2867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2867_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" void m1616 (t183 * __this, const MethodInfo* method)
{
	typedef void (*m1616_ftn) (t183 *);
	static m1616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m1612 (t183 * __this, const MethodInfo* method)
{
	typedef int32_t (*m1612_ftn) (t183 *);
	static m1612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
#include "t362.h"
#ifndef _MSC_VER
#else
#endif
#include "t362MD.h"

#include "t378.h"
#include "t378MD.h"
#include "t150MD.h"
#include "t182MD.h"


extern TypeInfo* t245_TI_var;
extern TypeInfo* t362_TI_var;
extern "C" void m2868 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t245_TI_var = il2cpp_codegen_type_info_from_index(310);
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t362_SFs*)t362_TI_var->static_fields)->f0 = ((t245*)SZArrayNew(t245_TI_var, 4));
		return;
	}
}
extern TypeInfo* t362_TI_var;
extern "C" bool m1661 (t7 * __this , t182 * p0, t74  p1, t150 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	{
		t182 * L_0 = p0;
		t150 * L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		bool L_2 = m2869(NULL, L_0, (&p1), L_1, NULL);
		return L_2;
	}
}
extern "C" bool m2869 (t7 * __this , t182 * p0, t74 * p1, t150 * p2, const MethodInfo* method)
{
	typedef bool (*m2869_ftn) (t182 *, t74 *, t150 *);
	static m2869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t362_TI_var;
extern "C" t74  m1631 (t7 * __this , t74  p0, t68 * p1, t184 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	t74  V_0 = {0};
	{
		t74  L_0 = p0;
		t68 * L_1 = p1;
		t184 * L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		m2870(NULL, L_0, L_1, L_2, (&V_0), NULL);
		t74  L_3 = V_0;
		return L_3;
	}
}
extern TypeInfo* t362_TI_var;
extern "C" void m2870 (t7 * __this , t74  p0, t68 * p1, t184 * p2, t74 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	{
		t68 * L_0 = p1;
		t184 * L_1 = p2;
		t74 * L_2 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		m2871(NULL, (&p0), L_0, L_1, L_2, NULL);
		return;
	}
}
extern "C" void m2871 (t7 * __this , t74 * p0, t68 * p1, t184 * p2, t74 * p3, const MethodInfo* method)
{
	typedef void (*m2871_ftn) (t74 *, t68 *, t184 *, t74 *);
	static m2871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2871_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern "C" t219  m1632 (t7 * __this , t182 * p0, t184 * p1, const MethodInfo* method)
{
	typedef t219  (*m1632_ftn) (t182 *, t184 *);
	static m1632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t362_TI_var;
extern "C" bool m2872 (t7 * __this , t182 * p0, t74  p1, t150 * p2, t67 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	t348  V_0 = {0};
	t378  V_1 = {0};
	float V_2 = 0.0f;
	{
		t67 * L_0 = p3;
		t74  L_1 = m1493(NULL, NULL);
		t67  L_2 = m1553(NULL, L_1, NULL);
		*L_0 = L_2;
		t150 * L_3 = p2;
		t74  L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		t348  L_5 = m2873(NULL, L_3, L_4, NULL);
		V_0 = L_5;
		t182 * L_6 = p0;
		t70  L_7 = m177(L_6, NULL);
		t67  L_8 = m2421(NULL, NULL);
		t67  L_9 = m1655(NULL, L_7, L_8, NULL);
		t182 * L_10 = p0;
		t67  L_11 = m173(L_10, NULL);
		m1758((&V_1), L_9, L_11, NULL);
		t348  L_12 = V_0;
		bool L_13 = m1759((&V_1), L_12, (&V_2), NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		t67 * L_14 = p3;
		float L_15 = V_2;
		t67  L_16 = m1760((&V_0), L_15, NULL);
		*L_14 = L_16;
		return 1;
	}
}
extern TypeInfo* t362_TI_var;
extern "C" bool m1705 (t7 * __this , t182 * p0, t74  p1, t150 * p2, t74 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	t67  V_0 = {0};
	{
		t74 * L_0 = p3;
		t74  L_1 = m1493(NULL, NULL);
		*L_0 = L_1;
		t182 * L_2 = p0;
		t74  L_3 = p1;
		t150 * L_4 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		bool L_5 = m2872(NULL, L_2, L_3, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		t74 * L_6 = p3;
		t182 * L_7 = p0;
		t67  L_8 = V_0;
		t67  L_9 = m1757(L_7, L_8, NULL);
		t74  L_10 = m199(NULL, L_9, NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
extern "C" t348  m2873 (t7 * __this , t150 * p0, t74  p1, const MethodInfo* method)
{
	t67  V_0 = {0};
	{
		t150 * L_0 = p0;
		bool L_1 = m170(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		t150 * L_2 = p0;
		t74  L_3 = p1;
		t67  L_4 = m1553(NULL, L_3, NULL);
		t348  L_5 = m1554(L_2, L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		t74  L_6 = p1;
		t67  L_7 = m1553(NULL, L_6, NULL);
		V_0 = L_7;
		t67 * L_8 = (&V_0);
		float L_9 = (L_8->f3);
		L_8->f3 = ((float)((float)L_9-(float)(100.0f)));
		t67  L_10 = V_0;
		t67  L_11 = m1654(NULL, NULL);
		t348  L_12 = {0};
		m2508(&L_12, L_10, L_11, NULL);
		return L_12;
	}
}
extern TypeInfo* t182_TI_var;
extern TypeInfo* t362_TI_var;
extern "C" void m1838 (t7 * __this , t182 * p0, int32_t p1, bool p2, bool p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t182_TI_var = il2cpp_codegen_type_info_from_index(250);
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t182 * V_1 = {0};
	t74  V_2 = {0};
	t74  V_3 = {0};
	t74  V_4 = {0};
	t74  V_5 = {0};
	float V_6 = 0.0f;
	{
		t182 * L_0 = p0;
		bool L_1 = m206(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = p3;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		t182 * L_3 = p0;
		int32_t L_4 = V_0;
		t68 * L_5 = m1944(L_3, L_4, NULL);
		V_1 = ((t182 *)IsInst(L_5, t182_TI_var));
		t182 * L_6 = V_1;
		bool L_7 = m170(NULL, L_6, (t66 *)NULL, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		t182 * L_8 = V_1;
		int32_t L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		m1838(NULL, L_8, L_9, 0, 1, NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		t182 * L_12 = p0;
		int32_t L_13 = m1946(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		t182 * L_14 = p0;
		t74  L_15 = m1686(L_14, NULL);
		V_2 = L_15;
		int32_t L_16 = p1;
		int32_t L_17 = p1;
		float L_18 = m1701((&V_2), L_17, NULL);
		m1711((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), NULL);
		t182 * L_19 = p0;
		t74  L_20 = V_2;
		m1807(L_19, L_20, NULL);
		bool L_21 = p2;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		t182 * L_22 = p0;
		t74  L_23 = m1801(L_22, NULL);
		V_3 = L_23;
		int32_t L_24 = p1;
		int32_t L_25 = p1;
		float L_26 = m1701((&V_3), L_25, NULL);
		m1711((&V_3), L_24, ((-L_26)), NULL);
		t182 * L_27 = p0;
		t74  L_28 = V_3;
		m1806(L_27, L_28, NULL);
		t182 * L_29 = p0;
		t74  L_30 = m1690(L_29, NULL);
		V_4 = L_30;
		t182 * L_31 = p0;
		t74  L_32 = m1800(L_31, NULL);
		V_5 = L_32;
		int32_t L_33 = p1;
		float L_34 = m1701((&V_4), L_33, NULL);
		V_6 = L_34;
		int32_t L_35 = p1;
		int32_t L_36 = p1;
		float L_37 = m1701((&V_5), L_36, NULL);
		m1711((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), NULL);
		int32_t L_38 = p1;
		float L_39 = V_6;
		m1711((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), NULL);
		t182 * L_40 = p0;
		t74  L_41 = V_4;
		m1805(L_40, L_41, NULL);
		t182 * L_42 = p0;
		t74  L_43 = V_5;
		m1691(L_42, L_43, NULL);
		return;
	}
}
extern TypeInfo* t182_TI_var;
extern TypeInfo* t362_TI_var;
extern "C" void m1837 (t7 * __this , t182 * p0, bool p1, bool p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t182_TI_var = il2cpp_codegen_type_info_from_index(250);
		t362_TI_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t182 * V_1 = {0};
	{
		t182 * L_0 = p0;
		bool L_1 = m206(NULL, L_0, (t66 *)NULL, NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = p2;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		t182 * L_3 = p0;
		int32_t L_4 = V_0;
		t68 * L_5 = m1944(L_3, L_4, NULL);
		V_1 = ((t182 *)IsInst(L_5, t182_TI_var));
		t182 * L_6 = V_1;
		bool L_7 = m170(NULL, L_6, (t66 *)NULL, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		t182 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		m1837(NULL, L_8, 0, 1, NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		t182 * L_11 = p0;
		int32_t L_12 = m1946(L_11, NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		t182 * L_13 = p0;
		t182 * L_14 = p0;
		t74  L_15 = m1686(L_14, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		t74  L_16 = m2874(NULL, L_15, NULL);
		m1807(L_13, L_16, NULL);
		t182 * L_17 = p0;
		t182 * L_18 = p0;
		t74  L_19 = m1802(L_18, NULL);
		t74  L_20 = m2874(NULL, L_19, NULL);
		m1692(L_17, L_20, NULL);
		bool L_21 = p1;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		t182 * L_22 = p0;
		t182 * L_23 = p0;
		t74  L_24 = m1801(L_23, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t362_TI_var);
		t74  L_25 = m2874(NULL, L_24, NULL);
		m1806(L_22, L_25, NULL);
		t182 * L_26 = p0;
		t182 * L_27 = p0;
		t74  L_28 = m1690(L_27, NULL);
		t74  L_29 = m2874(NULL, L_28, NULL);
		m1805(L_26, L_29, NULL);
		t182 * L_30 = p0;
		t182 * L_31 = p0;
		t74  L_32 = m1800(L_31, NULL);
		t74  L_33 = m2874(NULL, L_32, NULL);
		m1691(L_30, L_33, NULL);
		return;
	}
}
extern "C" t74  m2874 (t7 * __this , t74  p0, const MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f2);
		float L_1 = ((&p0)->f1);
		t74  L_2 = {0};
		m1500(&L_2, L_0, L_1, NULL);
		return L_2;
	}
}
#include "t571.h"
#ifndef _MSC_VER
#else
#endif
#include "t571MD.h"

#include "t572.h"
#include "t573.h"
#include "t28MD.h"


extern "C" void m2875 (t571 * __this, const MethodInfo* method)
{
	{
		__this->f0 = 1;
		m162(__this, NULL);
		return;
	}
}
extern "C" uint64_t m2876 (t571 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" uint64_t m2877 (t571 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m2878 (t571 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t572_TI_var;
extern TypeInfo* t573_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" t47* m2879 (t571 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t572_TI_var = il2cpp_codegen_type_info_from_index(945);
		t573_TI_var = il2cpp_codegen_type_info_from_index(946);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		t47* L_1 = m232(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		uint64_t L_3 = m2876(__this, NULL);
		uint64_t L_4 = L_3;
		t7 * L_5 = Box(t572_TI_var, &L_4);
		t47* L_6 = m3269(L_5, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_2, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_6;
		t69* L_7 = L_2;
		uint64_t L_8 = m2877(__this, NULL);
		uint64_t L_9 = L_8;
		t7 * L_10 = Box(t573_TI_var, &L_9);
		t47* L_11 = m3269(L_10, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_7, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_7, 2)) = (t7 *)L_11;
		t69* L_12 = L_7;
		int32_t L_13 = m2878(__this, NULL);
		int32_t L_14 = L_13;
		t7 * L_15 = Box(t58_TI_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t7 **)(t7 **)SZArrayLdElema(L_12, 3)) = (t7 *)L_15;
		t47* L_16 = m2600(NULL, (t47*) &_stringLiteral231, L_12, NULL);
		return L_16;
	}
}
#include "t574.h"
#ifndef _MSC_VER
#else
#endif
#include "t574MD.h"

#include "t700.h"
#include "t701.h"
#include "t700MD.h"
#include "t702MD.h"


extern "C" void m2880 (t574 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" t47* m2881 (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = p2;
		t47* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t47*, t7 ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, t670_TI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t7 * L_3 = p1;
		return ((t47*)IsInst(L_3, t47_TI_var));
	}

IL_0015:
	{
		t47* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_5 = m207(NULL, L_4, (t47*) &_stringLiteral233, NULL);
		t700 * L_6 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_6, L_5, NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t702_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" int32_t m2882 (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t702_TI_var = il2cpp_codegen_type_info_from_index(949);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = p2;
		t47* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t47*, t7 ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, t670_TI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t7 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t702_TI_var);
		int32_t L_4 = m3271(NULL, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		t47* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = m207(NULL, L_5, (t47*) &_stringLiteral233, NULL);
		t700 * L_7 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_7, L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t702_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" uint16_t m2883 (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t702_TI_var = il2cpp_codegen_type_info_from_index(949);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = p2;
		t47* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t47*, t7 ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, t670_TI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t7 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t702_TI_var);
		uint16_t L_4 = m3272(NULL, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		t47* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = m207(NULL, L_5, (t47*) &_stringLiteral233, NULL);
		t700 * L_7 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_7, L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t702_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" uint64_t m2884 (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t702_TI_var = il2cpp_codegen_type_info_from_index(949);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = p2;
		t47* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t47*, t7 ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, t670_TI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t7 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t702_TI_var);
		uint64_t L_4 = m3273(NULL, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		t47* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = m207(NULL, L_5, (t47*) &_stringLiteral233, NULL);
		t700 * L_7 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_7, L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t702_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" bool m2885 (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t702_TI_var = il2cpp_codegen_type_info_from_index(949);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7* L_0 = p2;
		t47* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t47*, t7 ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, t670_TI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t7 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t702_TI_var);
		bool L_4 = m3274(NULL, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		t47* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_6 = m207(NULL, L_5, (t47*) &_stringLiteral233, NULL);
		t700 * L_7 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_7, L_6, NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
#include "t575.h"
#ifndef _MSC_VER
#else
#endif
#include "t575MD.h"



extern "C" void m2886 (t575 * __this, const MethodInfo* method)
{
	{
		m2880(__this, NULL);
		return;
	}
}
extern "C" bool m2887 (t575 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2888 (t575 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t47* m2889 (t575 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2890 (t575 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t54_TI_var;
extern "C" t47* m2891 (t575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 3));
		t47* L_1 = m232(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		bool L_3 = m2887(__this, NULL);
		bool L_4 = L_3;
		t7 * L_5 = Box(t54_TI_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_5;
		t69* L_6 = L_2;
		t47* L_7 = m2889(__this, NULL);
		ArrayElementTypeCheck (L_6, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_6, 2)) = (t7 *)L_7;
		t47* L_8 = m2600(NULL, (t47*) &_stringLiteral234, L_6, NULL);
		return L_8;
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" void m2892 (t575 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	{
		t7 * L_0 = p0;
		V_0 = ((t7*)IsInst(L_0, t670_TI_var));
		t7* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		t7 * L_2 = p0;
		t7* L_3 = V_0;
		bool L_4 = m2885(__this, (t47*) &_stringLiteral235, L_2, L_3, NULL);
		m2888(__this, L_4, NULL);
		t7 * L_5 = p0;
		t7* L_6 = V_0;
		t47* L_7 = m2881(__this, (t47*) &_stringLiteral236, L_5, L_6, NULL);
		m2890(__this, L_7, NULL);
		bool L_8 = m2887(__this, NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		t47* L_9 = m2889(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_10 = m207(NULL, (t47*) &_stringLiteral237, L_9, NULL);
		t700 * L_11 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_11, L_10, NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
#include "t576.h"
#ifndef _MSC_VER
#else
#endif
#include "t576MD.h"



extern "C" void m2893 (t576 * __this, const MethodInfo* method)
{
	{
		m2886(__this, NULL);
		return;
	}
}
#include "t577.h"
#ifndef _MSC_VER
#else
#endif
#include "t577MD.h"

#include "t57.h"
#include "t578.h"
#include "t578MD.h"


extern "C" void m2894 (t577 * __this, const MethodInfo* method)
{
	{
		m2875(__this, NULL);
		return;
	}
}
extern "C" t47* m2895 (t577 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2896 (t577 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint32_t m2897 (t577 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2898 (t577 * __this, uint32_t p0, const MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" bool m2899 (t577 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m2900 (t577 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t47* m2901 (t577 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m2902 (t577 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern "C" t578 * m2903 (t577 * __this, const MethodInfo* method)
{
	{
		t578 * L_0 = (__this->f8);
		return L_0;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t57_TI_var;
extern TypeInfo* t54_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" t47* m2904 (t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t57_TI_var = il2cpp_codegen_type_info_from_index(950);
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	t69* G_B2_1 = {0};
	t69* G_B2_2 = {0};
	t47* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t69* G_B1_1 = {0};
	t69* G_B1_2 = {0};
	t47* G_B1_3 = {0};
	t47* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t69* G_B3_2 = {0};
	t69* G_B3_3 = {0};
	t47* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	t69* G_B5_1 = {0};
	t69* G_B5_2 = {0};
	t47* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	t69* G_B4_1 = {0};
	t69* G_B4_2 = {0};
	t47* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	t69* G_B6_2 = {0};
	t69* G_B6_3 = {0};
	t47* G_B6_4 = {0};
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 6));
		t47* L_1 = m2879(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		t47* L_3 = m2895(__this, NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_3;
		t69* L_4 = L_2;
		uint32_t L_5 = m2897(__this, NULL);
		uint32_t L_6 = L_5;
		t7 * L_7 = Box(t57_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 2)) = (t7 *)L_7;
		t69* L_8 = L_4;
		bool L_9 = m2899(__this, NULL);
		bool L_10 = L_9;
		t7 * L_11 = Box(t54_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 3)) = (t7 *)L_11;
		t69* L_12 = L_8;
		t47* L_13 = m2901(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_14 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		bool L_15 = m185(NULL, L_13, L_14, NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t47*) &_stringLiteral238;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t47*) &_stringLiteral238;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (t47*) &_stringLiteral239;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (t47*) &_stringLiteral240;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t7 **)(t7 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t7 *)G_B3_0;
		t69* L_16 = G_B3_3;
		t578 * L_17 = m2903(__this, NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		t578 * L_18 = m2903(__this, NULL);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		t7 * L_21 = Box(t58_TI_var, &L_20);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((t7 **)(t7 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t7 *)L_21;
		t47* L_22 = m2600(NULL, G_B6_4, G_B6_3, NULL);
		return L_22;
	}
}
#include "t579.h"
#ifndef _MSC_VER
#else
#endif
#include "t579MD.h"

#include "t580.h"
#include "t581.h"


extern "C" void m2905 (t579 * __this, const MethodInfo* method)
{
	{
		m2893(__this, NULL);
		return;
	}
}
extern "C" t47* m2906 (t579 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2907 (t579 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m2908 (t579 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2909 (t579 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m2910 (t579 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2911 (t579 * __this, uint64_t p0, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" t47* m2912 (t579 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2913 (t579 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m2914 (t579 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m2915 (t579 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m2916 (t579 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m2917 (t579 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t581_TI_var;
extern TypeInfo* t54_TI_var;
extern "C" t47* m2918 (t579 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t581_TI_var = il2cpp_codegen_type_info_from_index(952);
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 6));
		t47* L_1 = m2891(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		t47* L_3 = m2906(__this, NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_3;
		t69* L_4 = L_2;
		int32_t L_5 = m2908(__this, NULL);
		int32_t L_6 = L_5;
		t7 * L_7 = Box(t58_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 2)) = (t7 *)L_7;
		t69* L_8 = L_4;
		uint64_t L_9 = m2910(__this, NULL);
		uint64_t L_10 = L_9;
		t7 * L_11 = Box(t580_TI_var, &L_10);
		t47* L_12 = m3269(L_11, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_8, L_12);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 3)) = (t7 *)L_12;
		t69* L_13 = L_8;
		uint16_t L_14 = m2914(__this, NULL);
		uint16_t L_15 = L_14;
		t7 * L_16 = Box(t581_TI_var, &L_15);
		t47* L_17 = m3269(L_16, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_13, L_17);
		*((t7 **)(t7 **)SZArrayLdElema(L_13, 4)) = (t7 *)L_17;
		t69* L_18 = L_13;
		bool L_19 = m2916(__this, NULL);
		bool L_20 = L_19;
		t7 * L_21 = Box(t54_TI_var, &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t7 **)(t7 **)SZArrayLdElema(L_18, 5)) = (t7 *)L_21;
		t47* L_22 = m2600(NULL, (t47*) &_stringLiteral241, L_18, NULL);
		return L_22;
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" void m2919 (t579 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	{
		t7 * L_0 = p0;
		m2892(__this, L_0, NULL);
		t7 * L_1 = p0;
		V_0 = ((t7*)IsInst(L_1, t670_TI_var));
		t7* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t7 * L_3 = p0;
		t7* L_4 = V_0;
		t47* L_5 = m2881(__this, (t47*) &_stringLiteral242, L_3, L_4, NULL);
		m2907(__this, L_5, NULL);
		t7 * L_6 = p0;
		t7* L_7 = V_0;
		int32_t L_8 = m2882(__this, (t47*) &_stringLiteral243, L_6, L_7, NULL);
		m2909(__this, L_8, NULL);
		t7 * L_9 = p0;
		t7* L_10 = V_0;
		uint64_t L_11 = m2884(__this, (t47*) &_stringLiteral244, L_9, L_10, NULL);
		m2911(__this, L_11, NULL);
		t7 * L_12 = p0;
		t7* L_13 = V_0;
		t47* L_14 = m2881(__this, (t47*) &_stringLiteral245, L_12, L_13, NULL);
		m2913(__this, L_14, NULL);
		t7 * L_15 = p0;
		t7* L_16 = V_0;
		uint16_t L_17 = m2883(__this, (t47*) &_stringLiteral246, L_15, L_16, NULL);
		m2915(__this, L_17, NULL);
		t7 * L_18 = p0;
		t7* L_19 = V_0;
		bool L_20 = m2885(__this, (t47*) &_stringLiteral247, L_18, L_19, NULL);
		m2917(__this, L_20, NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		t7 * L_21 = p0;
		t47* L_22 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_23 = m207(NULL, (t47*) &_stringLiteral248, L_22, NULL);
		t700 * L_24 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_24, L_23, NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t582.h"
#ifndef _MSC_VER
#else
#endif
#include "t582MD.h"



extern "C" void m2920 (t582 * __this, const MethodInfo* method)
{
	{
		m2875(__this, NULL);
		return;
	}
}
extern "C" uint64_t m2921 (t582 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2922 (t582 * __this, uint64_t p0, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" t47* m2923 (t582 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2924 (t582 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" t47* m2925 (t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	t69* G_B2_1 = {0};
	t69* G_B2_2 = {0};
	t47* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t69* G_B1_1 = {0};
	t69* G_B1_2 = {0};
	t47* G_B1_3 = {0};
	t47* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t69* G_B3_2 = {0};
	t69* G_B3_3 = {0};
	t47* G_B3_4 = {0};
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 3));
		t47* L_1 = m2879(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		uint64_t L_3 = m2921(__this, NULL);
		uint64_t L_4 = L_3;
		t7 * L_5 = Box(t580_TI_var, &L_4);
		t47* L_6 = m3269(L_5, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_2, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_6;
		t69* L_7 = L_2;
		t47* L_8 = m2923(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_9 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		bool L_10 = m185(NULL, L_8, L_9, NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (t47*) &_stringLiteral249;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (t47*) &_stringLiteral249;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (t47*) &_stringLiteral239;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (t47*) &_stringLiteral240;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t7 **)(t7 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t7 *)G_B3_0;
		t47* L_11 = m2600(NULL, G_B3_4, G_B3_3, NULL);
		return L_11;
	}
}
#include "t583.h"
#ifndef _MSC_VER
#else
#endif
#include "t583MD.h"



extern "C" void m2926 (t583 * __this, const MethodInfo* method)
{
	{
		m2893(__this, NULL);
		return;
	}
}
extern "C" t47* m2927 (t583 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2928 (t583 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m2929 (t583 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2930 (t583 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m2931 (t583 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2932 (t583 * __this, uint64_t p0, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" t47* m2933 (t583 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2934 (t583 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m2935 (t583 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m2936 (t583 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m2937 (t583 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m2938 (t583 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t581_TI_var;
extern TypeInfo* t54_TI_var;
extern "C" t47* m2939 (t583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t581_TI_var = il2cpp_codegen_type_info_from_index(952);
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 6));
		t47* L_1 = m2891(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		t47* L_3 = m2927(__this, NULL);
		ArrayElementTypeCheck (L_2, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_3;
		t69* L_4 = L_2;
		int32_t L_5 = m2929(__this, NULL);
		int32_t L_6 = L_5;
		t7 * L_7 = Box(t58_TI_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_4, 2)) = (t7 *)L_7;
		t69* L_8 = L_4;
		uint64_t L_9 = m2931(__this, NULL);
		uint64_t L_10 = L_9;
		t7 * L_11 = Box(t580_TI_var, &L_10);
		t47* L_12 = m3269(L_11, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_8, L_12);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 3)) = (t7 *)L_12;
		t69* L_13 = L_8;
		uint16_t L_14 = m2935(__this, NULL);
		uint16_t L_15 = L_14;
		t7 * L_16 = Box(t581_TI_var, &L_15);
		t47* L_17 = m3269(L_16, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_13, L_17);
		*((t7 **)(t7 **)SZArrayLdElema(L_13, 4)) = (t7 *)L_17;
		t69* L_18 = L_13;
		bool L_19 = m2937(__this, NULL);
		bool L_20 = L_19;
		t7 * L_21 = Box(t54_TI_var, &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t7 **)(t7 **)SZArrayLdElema(L_18, 5)) = (t7 *)L_21;
		t47* L_22 = m2600(NULL, (t47*) &_stringLiteral241, L_18, NULL);
		return L_22;
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" void m2940 (t583 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	{
		t7 * L_0 = p0;
		m2892(__this, L_0, NULL);
		t7 * L_1 = p0;
		V_0 = ((t7*)IsInst(L_1, t670_TI_var));
		t7* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t7 * L_3 = p0;
		t7* L_4 = V_0;
		t47* L_5 = m2881(__this, (t47*) &_stringLiteral242, L_3, L_4, NULL);
		m2928(__this, L_5, NULL);
		t7 * L_6 = p0;
		t7* L_7 = V_0;
		int32_t L_8 = m2882(__this, (t47*) &_stringLiteral243, L_6, L_7, NULL);
		m2930(__this, L_8, NULL);
		t7 * L_9 = p0;
		t7* L_10 = V_0;
		uint64_t L_11 = m2884(__this, (t47*) &_stringLiteral244, L_9, L_10, NULL);
		m2932(__this, L_11, NULL);
		t7 * L_12 = p0;
		t7* L_13 = V_0;
		t47* L_14 = m2881(__this, (t47*) &_stringLiteral245, L_12, L_13, NULL);
		m2934(__this, L_14, NULL);
		t7 * L_15 = p0;
		t7* L_16 = V_0;
		uint16_t L_17 = m2883(__this, (t47*) &_stringLiteral246, L_15, L_16, NULL);
		m2936(__this, L_17, NULL);
		t7 * L_18 = p0;
		t7* L_19 = V_0;
		bool L_20 = m2885(__this, (t47*) &_stringLiteral247, L_18, L_19, NULL);
		m2938(__this, L_20, NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		t7 * L_21 = p0;
		t47* L_22 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_23 = m207(NULL, (t47*) &_stringLiteral248, L_22, NULL);
		t700 * L_24 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_24, L_23, NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t584.h"
#ifndef _MSC_VER
#else
#endif
#include "t584MD.h"



extern "C" void m2941 (t584 * __this, const MethodInfo* method)
{
	{
		m2875(__this, NULL);
		return;
	}
}
extern "C" uint64_t m2942 (t584 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2943 (t584 * __this, uint64_t p0, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t580_TI_var;
extern "C" t47* m2944 (t584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 2));
		t47* L_1 = m2879(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		uint64_t L_3 = m2942(__this, NULL);
		uint64_t L_4 = L_3;
		t7 * L_5 = Box(t580_TI_var, &L_4);
		t47* L_6 = m3269(L_5, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_2, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*) &_stringLiteral250, L_2, NULL);
		return L_7;
	}
}
#include "t585.h"
#ifndef _MSC_VER
#else
#endif
#include "t585MD.h"



extern "C" void m2945 (t585 * __this, const MethodInfo* method)
{
	{
		m2875(__this, NULL);
		return;
	}
}
extern "C" uint64_t m2946 (t585 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2947 (t585 * __this, uint64_t p0, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint16_t m2948 (t585 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2949 (t585 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t581_TI_var;
extern "C" t47* m2950 (t585 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t581_TI_var = il2cpp_codegen_type_info_from_index(952);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 3));
		t47* L_1 = m2879(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		uint64_t L_3 = m2946(__this, NULL);
		uint64_t L_4 = L_3;
		t7 * L_5 = Box(t580_TI_var, &L_4);
		t47* L_6 = m3269(L_5, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_2, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_6;
		t69* L_7 = L_2;
		uint16_t L_8 = m2948(__this, NULL);
		uint16_t L_9 = L_8;
		t7 * L_10 = Box(t581_TI_var, &L_9);
		t47* L_11 = m3269(L_10, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_7, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_7, 2)) = (t7 *)L_11;
		t47* L_12 = m2600(NULL, (t47*) &_stringLiteral251, L_7, NULL);
		return L_12;
	}
}
#include "t586.h"
#ifndef _MSC_VER
#else
#endif
#include "t586MD.h"



extern "C" void m2951 (t586 * __this, const MethodInfo* method)
{
	{
		m2875(__this, NULL);
		return;
	}
}
extern "C" int32_t m2952 (t586 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2953 (t586 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m2954 (t586 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2955 (t586 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t47* m2956 (t586 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m2957 (t586 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t578 * m2958 (t586 * __this, const MethodInfo* method)
{
	{
		t578 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t578 * m2959 (t586 * __this, const MethodInfo* method)
{
	{
		t578 * L_0 = (__this->f8);
		return L_0;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" t47* m2960 (t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	t69* G_B2_1 = {0};
	t69* G_B2_2 = {0};
	t47* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t69* G_B1_1 = {0};
	t69* G_B1_2 = {0};
	t47* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	t69* G_B3_2 = {0};
	t69* G_B3_3 = {0};
	t47* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	t69* G_B5_1 = {0};
	t69* G_B5_2 = {0};
	t47* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	t69* G_B4_1 = {0};
	t69* G_B4_2 = {0};
	t47* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	t69* G_B6_2 = {0};
	t69* G_B6_3 = {0};
	t47* G_B6_4 = {0};
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 6));
		t47* L_1 = m2879(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		int32_t L_3 = m2952(__this, NULL);
		int32_t L_4 = L_3;
		t7 * L_5 = Box(t58_TI_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_5;
		t69* L_6 = L_2;
		int32_t L_7 = m2954(__this, NULL);
		int32_t L_8 = L_7;
		t7 * L_9 = Box(t58_TI_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t7 **)(t7 **)SZArrayLdElema(L_6, 2)) = (t7 *)L_9;
		t69* L_10 = L_6;
		t47* L_11 = m2956(__this, NULL);
		ArrayElementTypeCheck (L_10, L_11);
		*((t7 **)(t7 **)SZArrayLdElema(L_10, 3)) = (t7 *)L_11;
		t69* L_12 = L_10;
		t578 * L_13 = m2958(__this, NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t47*) &_stringLiteral252;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t47*) &_stringLiteral252;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		t578 * L_14 = m2958(__this, NULL);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		t7 * L_17 = Box(t58_TI_var, &L_16);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((t7 **)(t7 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t7 *)L_17;
		t69* L_18 = G_B3_3;
		t578 * L_19 = m2959(__this, NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		t578 * L_20 = m2959(__this, NULL);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		t7 * L_23 = Box(t58_TI_var, &L_22);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((t7 **)(t7 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t7 *)L_23;
		t47* L_24 = m2600(NULL, G_B6_4, G_B6_3, NULL);
		return L_24;
	}
}
#include "t587.h"
#ifndef _MSC_VER
#else
#endif
#include "t587MD.h"



extern "C" void m2961 (t587 * __this, const MethodInfo* method)
{
	{
		m2880(__this, NULL);
		return;
	}
}
extern "C" uint16_t m2962 (t587 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2963 (t587 * __this, uint16_t p0, const MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t47* m2964 (t587 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2965 (t587 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t47* m2966 (t587 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2967 (t587 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t581_TI_var;
extern "C" t47* m2968 (t587 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t581_TI_var = il2cpp_codegen_type_info_from_index(952);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 4));
		t47* L_1 = m232(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		uint16_t L_3 = m2962(__this, NULL);
		uint16_t L_4 = L_3;
		t7 * L_5 = Box(t581_TI_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_5;
		t69* L_6 = L_2;
		t47* L_7 = m2964(__this, NULL);
		ArrayElementTypeCheck (L_6, L_7);
		*((t7 **)(t7 **)SZArrayLdElema(L_6, 2)) = (t7 *)L_7;
		t69* L_8 = L_6;
		t47* L_9 = m2966(__this, NULL);
		ArrayElementTypeCheck (L_8, L_9);
		*((t7 **)(t7 **)SZArrayLdElema(L_8, 3)) = (t7 *)L_9;
		t47* L_10 = m2600(NULL, (t47*) &_stringLiteral253, L_8, NULL);
		return L_10;
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern "C" void m2969 (t587 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	{
		t7 * L_0 = p0;
		V_0 = ((t7*)IsInst(L_0, t670_TI_var));
		t7* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		t7 * L_2 = p0;
		t7* L_3 = V_0;
		uint16_t L_4 = m2883(__this, (t47*) &_stringLiteral246, L_2, L_3, NULL);
		m2963(__this, L_4, NULL);
		t7 * L_5 = p0;
		t7* L_6 = V_0;
		t47* L_7 = m2881(__this, (t47*) &_stringLiteral254, L_5, L_6, NULL);
		m2965(__this, L_7, NULL);
		t7 * L_8 = p0;
		t7* L_9 = V_0;
		t47* L_10 = m2881(__this, (t47*) &_stringLiteral255, L_8, L_9, NULL);
		m2967(__this, L_10, NULL);
		goto IL_0061;
	}

IL_004b:
	{
		t7 * L_11 = p0;
		t47* L_12 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_13 = m207(NULL, (t47*) &_stringLiteral248, L_12, NULL);
		t700 * L_14 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_14, L_13, NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
#include "t588.h"
#ifndef _MSC_VER
#else
#endif
#include "t588MD.h"

#include "t589.h"
#include "t589MD.h"
struct t574;
struct t589;
struct t47;
struct t7;
struct t670;
struct t574;
struct t337;
struct t47;
struct t7;
struct t670;
extern "C" t337 * m3276_gshared (t574 * __this, t47* p0, t7 * p1, t7* p2, const MethodInfo* method);
#define m3276(__this, p0, p1, p2, method) (( t337 * (*) (t574 *, t47*, t7 *, t7*, const MethodInfo*))m3276_gshared)(__this, p0, p1, p2, method)
#define m3275(__this, p0, p1, p2, method) (( t589 * (*) (t574 *, t47*, t7 *, t7*, const MethodInfo*))m3276_gshared)(__this, p0, p1, p2, method)


extern "C" void m2970 (t588 * __this, const MethodInfo* method)
{
	{
		m2880(__this, NULL);
		return;
	}
}
extern "C" uint64_t m2971 (t588 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2972 (t588 * __this, uint64_t p0, const MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t47* m2973 (t588 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2974 (t588 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" int32_t m2975 (t588 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m2976 (t588 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2977 (t588 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m2978 (t588 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m2979 (t588 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" bool m2980 (t588 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m2981 (t588 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t578 * m2982 (t588 * __this, const MethodInfo* method)
{
	{
		t578 * L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" uint16_t m2983 (t588 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t589 * m2984 (t588 * __this, const MethodInfo* method)
{
	{
		t589 * L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" void m2985 (t588 * __this, t589 * p0, const MethodInfo* method)
{
	{
		t589 * L_0 = p0;
		__this->f8 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t54_TI_var;
extern "C" t47* m2986 (t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	t69* G_B2_1 = {0};
	t69* G_B2_2 = {0};
	t47* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t69* G_B1_1 = {0};
	t69* G_B1_2 = {0};
	t47* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	t69* G_B3_2 = {0};
	t69* G_B3_3 = {0};
	t47* G_B3_4 = {0};
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, ((int32_t)9)));
		t47* L_1 = m232(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		uint64_t L_3 = m2971(__this, NULL);
		uint64_t L_4 = L_3;
		t7 * L_5 = Box(t580_TI_var, &L_4);
		t47* L_6 = m3269(L_5, (t47*) &_stringLiteral232, NULL);
		ArrayElementTypeCheck (L_2, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_6;
		t69* L_7 = L_2;
		t47* L_8 = m2973(__this, NULL);
		ArrayElementTypeCheck (L_7, L_8);
		*((t7 **)(t7 **)SZArrayLdElema(L_7, 2)) = (t7 *)L_8;
		t69* L_9 = L_7;
		int32_t L_10 = m2975(__this, NULL);
		int32_t L_11 = L_10;
		t7 * L_12 = Box(t58_TI_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((t7 **)(t7 **)SZArrayLdElema(L_9, 3)) = (t7 *)L_12;
		t69* L_13 = L_9;
		int32_t L_14 = m2976(__this, NULL);
		int32_t L_15 = L_14;
		t7 * L_16 = Box(t58_TI_var, &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t7 **)(t7 **)SZArrayLdElema(L_13, 4)) = (t7 *)L_16;
		t69* L_17 = L_13;
		int32_t L_18 = m2978(__this, NULL);
		int32_t L_19 = L_18;
		t7 * L_20 = Box(t58_TI_var, &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		*((t7 **)(t7 **)SZArrayLdElema(L_17, 5)) = (t7 *)L_20;
		t69* L_21 = L_17;
		bool L_22 = m2980(__this, NULL);
		bool L_23 = L_22;
		t7 * L_24 = Box(t54_TI_var, &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t7 **)(t7 **)SZArrayLdElema(L_21, 6)) = (t7 *)L_24;
		t69* L_25 = L_21;
		t578 * L_26 = m2982(__this, NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (t47*) &_stringLiteral256;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (t47*) &_stringLiteral256;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		t578 * L_27 = m2982(__this, NULL);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		t7 * L_30 = Box(t58_TI_var, &L_29);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((t7 **)(t7 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t7 *)L_30;
		t69* L_31 = G_B3_3;
		t589 * L_32 = m2984(__this, NULL);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		t7 * L_35 = Box(t58_TI_var, &L_34);
		ArrayElementTypeCheck (L_31, L_35);
		*((t7 **)(t7 **)SZArrayLdElema(L_31, 8)) = (t7 *)L_35;
		t47* L_36 = m2600(NULL, G_B3_4, L_31, NULL);
		return L_36;
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern const MethodInfo* m3275_MI_var;
extern "C" void m2987 (t588 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		m3275_MI_var = il2cpp_codegen_method_info_from_index(2147483907);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	{
		t7 * L_0 = p0;
		V_0 = ((t7*)IsInst(L_0, t670_TI_var));
		t7* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		t7 * L_2 = p0;
		t7* L_3 = V_0;
		uint64_t L_4 = m2884(__this, (t47*) &_stringLiteral244, L_2, L_3, NULL);
		m2972(__this, L_4, NULL);
		t7 * L_5 = p0;
		t7* L_6 = V_0;
		t47* L_7 = m2881(__this, (t47*) &_stringLiteral257, L_5, L_6, NULL);
		m2974(__this, L_7, NULL);
		t7 * L_8 = p0;
		t7* L_9 = V_0;
		int32_t L_10 = m2882(__this, (t47*) &_stringLiteral258, L_8, L_9, NULL);
		m2977(__this, L_10, NULL);
		t7 * L_11 = p0;
		t7* L_12 = V_0;
		int32_t L_13 = m2882(__this, (t47*) &_stringLiteral259, L_11, L_12, NULL);
		m2979(__this, L_13, NULL);
		t7 * L_14 = p0;
		t7* L_15 = V_0;
		bool L_16 = m2885(__this, (t47*) &_stringLiteral260, L_14, L_15, NULL);
		m2981(__this, L_16, NULL);
		t7 * L_17 = p0;
		t7* L_18 = V_0;
		t589 * L_19 = m3275(__this, (t47*) &_stringLiteral261, L_17, L_18, m3275_MI_var);
		m2985(__this, L_19, NULL);
		goto IL_009a;
	}

IL_0084:
	{
		t7 * L_20 = p0;
		t47* L_21 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_22 = m207(NULL, (t47*) &_stringLiteral248, L_21, NULL);
		t700 * L_23 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_23, L_22, NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
#include "t590.h"
#ifndef _MSC_VER
#else
#endif
#include "t590MD.h"

#include "t591.h"
#include "t591MD.h"
struct t574;
struct t591;
struct t47;
struct t7;
struct t670;
#define m3277(__this, p0, p1, p2, method) (( t591 * (*) (t574 *, t47*, t7 *, t7*, const MethodInfo*))m3276_gshared)(__this, p0, p1, p2, method)


extern "C" void m2988 (t590 * __this, const MethodInfo* method)
{
	{
		m2893(__this, NULL);
		return;
	}
}
extern "C" t591 * m2989 (t590 * __this, const MethodInfo* method)
{
	{
		t591 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2990 (t590 * __this, t591 * p0, const MethodInfo* method)
{
	{
		t591 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern TypeInfo* t58_TI_var;
extern "C" t47* m2991 (t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		t69* L_0 = ((t69*)SZArrayNew(t69_TI_var, 2));
		t47* L_1 = m2891(__this, NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t7 **)(t7 **)SZArrayLdElema(L_0, 0)) = (t7 *)L_1;
		t69* L_2 = L_0;
		t591 * L_3 = m2989(__this, NULL);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		t7 * L_6 = Box(t58_TI_var, &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 1)) = (t7 *)L_6;
		t47* L_7 = m2600(NULL, (t47*) &_stringLiteral262, L_2, NULL);
		return L_7;
	}
}
extern TypeInfo* t670_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t700_TI_var;
extern const MethodInfo* m3277_MI_var;
extern "C" void m2992 (t590 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t700_TI_var = il2cpp_codegen_type_info_from_index(948);
		m3277_MI_var = il2cpp_codegen_method_info_from_index(2147483908);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	{
		t7 * L_0 = p0;
		m2892(__this, L_0, NULL);
		t7 * L_1 = p0;
		V_0 = ((t7*)IsInst(L_1, t670_TI_var));
		t7* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t7 * L_3 = p0;
		t7* L_4 = V_0;
		t591 * L_5 = m3277(__this, (t47*) &_stringLiteral263, L_3, L_4, m3277_MI_var);
		m2990(__this, L_5, NULL);
		goto IL_0042;
	}

IL_002c:
	{
		t7 * L_6 = p0;
		t47* L_7 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_8 = m207(NULL, (t47*) &_stringLiteral248, L_7, NULL);
		t700 * L_9 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m3270(L_9, L_8, NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t573MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t572MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t580MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t581MD.h"



#include "t592.h"
#ifndef _MSC_VER
#else
#endif
#include "t592MD.h"



extern TypeInfo* t536_TI_var;
extern "C" void m2993 (t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t536_TI_var = il2cpp_codegen_type_info_from_index(929);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		__this->f0 = ((t536*)SZArrayNew(t536_TI_var, ((int32_t)64)));
		return;
	}
}
extern TypeInfo* t702_TI_var;
extern "C" t47* m2994 (t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t702_TI_var = il2cpp_codegen_type_info_from_index(949);
		s_Il2CppMethodIntialized = true;
	}
	{
		t536* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(t702_TI_var);
		t47* L_1 = m3278(NULL, L_0, NULL);
		return L_1;
	}
}
#include "t593.h"
#ifndef _MSC_VER
#else
#endif
#include "t593MD.h"

#include "t594.h"
#include "t595.h"
#include "t703MD.h"
#include "t594MD.h"
#include "t595MD.h"
#include "t488MD.h"


extern TypeInfo* t594_TI_var;
extern TypeInfo* t593_TI_var;
extern TypeInfo* t595_TI_var;
extern const MethodInfo* m3281_MI_var;
extern "C" void m2995 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t594_TI_var = il2cpp_codegen_type_info_from_index(956);
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t595_TI_var = il2cpp_codegen_type_info_from_index(958);
		m3281_MI_var = il2cpp_codegen_method_info_from_index(2147483909);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = m3279(NULL, NULL);
		t594 * L_1 = (t594 *)il2cpp_codegen_object_new (t594_TI_var);
		m3280(L_1, L_0, NULL);
		((t593_SFs*)t593_TI_var->static_fields)->f0 = L_1;
		((t593_SFs*)t593_TI_var->static_fields)->f1 = 0;
		((t593_SFs*)t593_TI_var->static_fields)->f2 = 0;
		((t593_SFs*)t593_TI_var->static_fields)->f3 = (((int64_t)(-1)));
		t595 * L_2 = (t595 *)il2cpp_codegen_object_new (t595_TI_var);
		m3281(L_2, m3281_MI_var);
		((t593_SFs*)t593_TI_var->static_fields)->f4 = L_2;
		return;
	}
}
extern TypeInfo* t593_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" uint64_t m2996 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		t47* L_0 = m2168(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		int32_t L_1 = ((t593_SFs*)t593_TI_var->static_fields)->f2;
		int32_t L_2 = L_1;
		t7 * L_3 = Box(t58_TI_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_4 = m217(NULL, L_0, L_3, NULL);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
extern TypeInfo* t593_TI_var;
extern "C" void m2997 (t7 * __this , uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		((t593_SFs*)t593_TI_var->static_fields)->f3 = L_0;
		return;
	}
}
extern TypeInfo* t593_TI_var;
extern "C" uint64_t m2998 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		uint64_t L_0 = ((t593_SFs*)t593_TI_var->static_fields)->f3;
		return L_0;
	}
}
extern TypeInfo* t593_TI_var;
extern TypeInfo* t592_TI_var;
extern "C" t592 * m2999 (t7 * __this , uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t592_TI_var = il2cpp_codegen_type_info_from_index(955);
		s_Il2CppMethodIntialized = true;
	}
	t592 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		t595 * L_0 = ((t593_SFs*)t593_TI_var->static_fields)->f4;
		uint64_t L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, t592 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t592 * L_3 = (t592 *)il2cpp_codegen_object_new (t592_TI_var);
		m2993(L_3, NULL);
		V_0 = L_3;
	}

IL_0018:
	{
		t592 * L_4 = V_0;
		return L_4;
	}
}
#include "t596.h"
#ifndef _MSC_VER
#else
#endif
#include "t596MD.h"

#include "t597.h"
#include "t63.h"
#include "t671.h"
#include "t533.h"
#include "t532.h"
#include "t28.h"
#include "t664.h"
#include "t672.h"
#include "t673.h"
#include "t674.h"
#include "t597MD.h"
#include "t5MD.h"
#include "t701MD.h"
#include "t533MD.h"
#include "t57MD.h"
#include "t54MD.h"
#include "t664MD.h"
#include "t532MD.h"
struct t596;
struct t50;
struct t532;
struct t671;
struct t596;
struct t50;
struct t532;
struct t704;
extern "C" t7 * m3283_gshared (t596 * __this, t532 * p0, t704 * p1, const MethodInfo* method);
#define m3283(__this, p0, p1, method) (( t7 * (*) (t596 *, t532 *, t704 *, const MethodInfo*))m3283_gshared)(__this, p0, p1, method)
#define m3282(__this, p0, p1, method) (( t7 * (*) (t596 *, t532 *, t671 *, const MethodInfo*))m3283_gshared)(__this, p0, p1, method)
struct t596;
struct t50;
struct t532;
struct t672;
#define m3284(__this, p0, p1, method) (( t7 * (*) (t596 *, t532 *, t672 *, const MethodInfo*))m3283_gshared)(__this, p0, p1, method)
struct t596;
struct t50;
struct t532;
struct t673;
#define m3285(__this, p0, p1, method) (( t7 * (*) (t596 *, t532 *, t673 *, const MethodInfo*))m3283_gshared)(__this, p0, p1, method)
struct t596;
struct t50;
struct t532;
struct t674;
#define m3286(__this, p0, p1, method) (( t7 * (*) (t596 *, t532 *, t674 *, const MethodInfo*))m3283_gshared)(__this, p0, p1, method)


extern TypeInfo* t597_TI_var;
extern "C" void m3000 (t596 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		s_Il2CppMethodIntialized = true;
	}
	t47* V_0 = {0};
	uint64_t V_1 = 0;
	{
		t597 * L_0 = (t597 *)il2cpp_codegen_object_new (t597_TI_var);
		m3287(L_0, (t47*) &_stringLiteral264, NULL);
		__this->f3 = L_0;
		m158(__this, NULL);
		t47* L_1 = m2716(NULL, (t47*) &_stringLiteral265, NULL);
		V_0 = L_1;
		t47* L_2 = V_0;
		bool L_3 = m3288(NULL, L_2, (&V_1), NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		m183(NULL, (t47*) &_stringLiteral266, NULL);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		m3003(__this, L_4, NULL);
	}

IL_0044:
	{
		return;
	}
}
extern "C" t597 * m3001 (t596 * __this, const MethodInfo* method)
{
	{
		t597 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3002 (t596 * __this, t597 * p0, const MethodInfo* method)
{
	{
		t597 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern TypeInfo* t593_TI_var;
extern "C" void m3003 (t596 * __this, uint64_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		m2997(NULL, L_0, NULL);
		return;
	}
}
extern TypeInfo* t577_TI_var;
extern "C" t63 * m3004 (t596 * __this, t47* p0, uint32_t p1, bool p2, t47* p3, t671 * p4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t577_TI_var = il2cpp_codegen_type_info_from_index(960);
		s_Il2CppMethodIntialized = true;
	}
	t577 * V_0 = {0};
	{
		t577 * L_0 = (t577 *)il2cpp_codegen_object_new (t577_TI_var);
		m2894(L_0, NULL);
		V_0 = L_0;
		t577 * L_1 = V_0;
		t47* L_2 = p0;
		m2896(L_1, L_2, NULL);
		t577 * L_3 = V_0;
		uint32_t L_4 = p1;
		m2898(L_3, L_4, NULL);
		t577 * L_5 = V_0;
		bool L_6 = p2;
		m2900(L_5, L_6, NULL);
		t577 * L_7 = V_0;
		t47* L_8 = p3;
		m2902(L_7, L_8, NULL);
		t577 * L_9 = V_0;
		t671 * L_10 = p4;
		t63 * L_11 = m3005(__this, L_9, L_10, NULL);
		return L_11;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t533_TI_var;
extern TypeInfo* t593_TI_var;
extern TypeInfo* t572_TI_var;
extern TypeInfo* t573_TI_var;
extern TypeInfo* t532_TI_var;
extern const MethodInfo* m3282_MI_var;
extern "C" t63 * m3005 (t596 * __this, t577 * p0, t671 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t533_TI_var = il2cpp_codegen_type_info_from_index(962);
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t572_TI_var = il2cpp_codegen_type_info_from_index(945);
		t573_TI_var = il2cpp_codegen_type_info_from_index(946);
		t532_TI_var = il2cpp_codegen_type_info_from_index(963);
		m3282_MI_var = il2cpp_codegen_method_info_from_index(2147483910);
		s_Il2CppMethodIntialized = true;
	}
	t597 * V_0 = {0};
	t533 * V_1 = {0};
	t532 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		t597 * L_0 = m3001(__this, NULL);
		t597 * L_1 = (t597 *)il2cpp_codegen_object_new (t597_TI_var);
		m3289(L_1, L_0, (t47*) &_stringLiteral267, NULL);
		V_0 = L_1;
		t597 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = m217(NULL, (t47*) &_stringLiteral268, L_2, NULL);
		m183(NULL, L_3, NULL);
		t533 * L_4 = (t533 *)il2cpp_codegen_object_new (t533_TI_var);
		m2586(L_4, NULL);
		V_1 = L_4;
		t533 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		uint64_t L_6 = m2996(NULL, NULL);
		uint64_t L_7 = L_6;
		t7 * L_8 = Box(t572_TI_var, &L_7);
		t47* L_9 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		m2587(L_5, (t47*) &_stringLiteral269, L_9, NULL);
		t533 * L_10 = V_1;
		uint64_t L_11 = m2998(NULL, NULL);
		uint64_t L_12 = L_11;
		t7 * L_13 = Box(t573_TI_var, &L_12);
		t47* L_14 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		m2587(L_10, (t47*) &_stringLiteral270, L_14, NULL);
		t533 * L_15 = V_1;
		m2589(L_15, (t47*) &_stringLiteral245, 0, NULL);
		t533 * L_16 = V_1;
		m2589(L_16, (t47*) &_stringLiteral271, 0, NULL);
		t533 * L_17 = V_1;
		t577 * L_18 = p0;
		t47* L_19 = m2895(L_18, NULL);
		m2587(L_17, (t47*) &_stringLiteral257, L_19, NULL);
		t533 * L_20 = V_1;
		t577 * L_21 = p0;
		uint32_t L_22 = m2897(L_21, NULL);
		V_3 = L_22;
		t47* L_23 = m3290((&V_3), NULL);
		m2587(L_20, (t47*) &_stringLiteral272, L_23, NULL);
		t533 * L_24 = V_1;
		t577 * L_25 = p0;
		bool L_26 = m2899(L_25, NULL);
		V_4 = L_26;
		t47* L_27 = m3291((&V_4), NULL);
		m2587(L_24, (t47*) &_stringLiteral273, L_27, NULL);
		t533 * L_28 = V_1;
		t577 * L_29 = p0;
		t47* L_30 = m2901(L_29, NULL);
		m2587(L_28, (t47*) &_stringLiteral274, L_30, NULL);
		t533 * L_31 = V_1;
		t664 * L_32 = m2590(L_31, NULL);
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_32, (t47*) &_stringLiteral275, (t47*) &_stringLiteral276);
		t597 * L_33 = V_0;
		t47* L_34 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Uri::ToString() */, L_33);
		t533 * L_35 = V_1;
		t532 * L_36 = (t532 *)il2cpp_codegen_object_new (t532_TI_var);
		m2571(L_36, L_34, L_35, NULL);
		V_2 = L_36;
		t532 * L_37 = V_2;
		t671 * L_38 = p1;
		t7 * L_39 = m3282(__this, L_37, L_38, m3282_MI_var);
		t63 * L_40 = m167(__this, L_39, NULL);
		return L_40;
	}
}
extern TypeInfo* t582_TI_var;
extern "C" t63 * m3006 (t596 * __this, uint64_t p0, t47* p1, t672 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t582_TI_var = il2cpp_codegen_type_info_from_index(964);
		s_Il2CppMethodIntialized = true;
	}
	t582 * V_0 = {0};
	{
		t582 * L_0 = (t582 *)il2cpp_codegen_object_new (t582_TI_var);
		m2920(L_0, NULL);
		V_0 = L_0;
		t582 * L_1 = V_0;
		uint64_t L_2 = p0;
		m2922(L_1, L_2, NULL);
		t582 * L_3 = V_0;
		t47* L_4 = p1;
		m2924(L_3, L_4, NULL);
		t582 * L_5 = V_0;
		t672 * L_6 = p2;
		t63 * L_7 = m3007(__this, L_5, L_6, NULL);
		return L_7;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t533_TI_var;
extern TypeInfo* t593_TI_var;
extern TypeInfo* t572_TI_var;
extern TypeInfo* t573_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t532_TI_var;
extern const MethodInfo* m3284_MI_var;
extern "C" t63 * m3007 (t596 * __this, t582 * p0, t672 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t533_TI_var = il2cpp_codegen_type_info_from_index(962);
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t572_TI_var = il2cpp_codegen_type_info_from_index(945);
		t573_TI_var = il2cpp_codegen_type_info_from_index(946);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t532_TI_var = il2cpp_codegen_type_info_from_index(963);
		m3284_MI_var = il2cpp_codegen_method_info_from_index(2147483911);
		s_Il2CppMethodIntialized = true;
	}
	t597 * V_0 = {0};
	t533 * V_1 = {0};
	t532 * V_2 = {0};
	{
		t597 * L_0 = m3001(__this, NULL);
		t597 * L_1 = (t597 *)il2cpp_codegen_object_new (t597_TI_var);
		m3289(L_1, L_0, (t47*) &_stringLiteral277, NULL);
		V_0 = L_1;
		t597 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = m217(NULL, (t47*) &_stringLiteral278, L_2, NULL);
		m183(NULL, L_3, NULL);
		t533 * L_4 = (t533 *)il2cpp_codegen_object_new (t533_TI_var);
		m2586(L_4, NULL);
		V_1 = L_4;
		t533 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		uint64_t L_6 = m2996(NULL, NULL);
		uint64_t L_7 = L_6;
		t7 * L_8 = Box(t572_TI_var, &L_7);
		t47* L_9 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		m2587(L_5, (t47*) &_stringLiteral269, L_9, NULL);
		t533 * L_10 = V_1;
		uint64_t L_11 = m2998(NULL, NULL);
		uint64_t L_12 = L_11;
		t7 * L_13 = Box(t573_TI_var, &L_12);
		t47* L_14 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		m2587(L_10, (t47*) &_stringLiteral270, L_14, NULL);
		t533 * L_15 = V_1;
		m2589(L_15, (t47*) &_stringLiteral245, 0, NULL);
		t533 * L_16 = V_1;
		m2589(L_16, (t47*) &_stringLiteral271, 0, NULL);
		t533 * L_17 = V_1;
		t582 * L_18 = p0;
		uint64_t L_19 = m2921(L_18, NULL);
		uint64_t L_20 = L_19;
		t7 * L_21 = Box(t580_TI_var, &L_20);
		t47* L_22 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_21);
		m2587(L_17, (t47*) &_stringLiteral244, L_22, NULL);
		t533 * L_23 = V_1;
		t582 * L_24 = p0;
		t47* L_25 = m2923(L_24, NULL);
		m2587(L_23, (t47*) &_stringLiteral274, L_25, NULL);
		t533 * L_26 = V_1;
		t664 * L_27 = m2590(L_26, NULL);
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (t47*) &_stringLiteral275, (t47*) &_stringLiteral276);
		t597 * L_28 = V_0;
		t47* L_29 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		t533 * L_30 = V_1;
		t532 * L_31 = (t532 *)il2cpp_codegen_object_new (t532_TI_var);
		m2571(L_31, L_29, L_30, NULL);
		V_2 = L_31;
		t532 * L_32 = V_2;
		t672 * L_33 = p1;
		t7 * L_34 = m3284(__this, L_32, L_33, m3284_MI_var);
		t63 * L_35 = m167(__this, L_34, NULL);
		return L_35;
	}
}
extern TypeInfo* t584_TI_var;
extern "C" t63 * m3008 (t596 * __this, uint64_t p0, t673 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t584_TI_var = il2cpp_codegen_type_info_from_index(966);
		s_Il2CppMethodIntialized = true;
	}
	t584 * V_0 = {0};
	{
		t584 * L_0 = (t584 *)il2cpp_codegen_object_new (t584_TI_var);
		m2941(L_0, NULL);
		V_0 = L_0;
		t584 * L_1 = V_0;
		uint64_t L_2 = p0;
		m2943(L_1, L_2, NULL);
		t584 * L_3 = V_0;
		t673 * L_4 = p1;
		t63 * L_5 = m3009(__this, L_3, L_4, NULL);
		return L_5;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t533_TI_var;
extern TypeInfo* t593_TI_var;
extern TypeInfo* t572_TI_var;
extern TypeInfo* t573_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t532_TI_var;
extern const MethodInfo* m3285_MI_var;
extern "C" t63 * m3009 (t596 * __this, t584 * p0, t673 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t533_TI_var = il2cpp_codegen_type_info_from_index(962);
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t572_TI_var = il2cpp_codegen_type_info_from_index(945);
		t573_TI_var = il2cpp_codegen_type_info_from_index(946);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t532_TI_var = il2cpp_codegen_type_info_from_index(963);
		m3285_MI_var = il2cpp_codegen_method_info_from_index(2147483912);
		s_Il2CppMethodIntialized = true;
	}
	t597 * V_0 = {0};
	t533 * V_1 = {0};
	t532 * V_2 = {0};
	{
		t597 * L_0 = m3001(__this, NULL);
		t597 * L_1 = (t597 *)il2cpp_codegen_object_new (t597_TI_var);
		m3289(L_1, L_0, (t47*) &_stringLiteral279, NULL);
		V_0 = L_1;
		t597 * L_2 = V_0;
		t47* L_3 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Uri::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_4 = m207(NULL, (t47*) &_stringLiteral280, L_3, NULL);
		m183(NULL, L_4, NULL);
		t533 * L_5 = (t533 *)il2cpp_codegen_object_new (t533_TI_var);
		m2586(L_5, NULL);
		V_1 = L_5;
		t533 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		uint64_t L_7 = m2996(NULL, NULL);
		uint64_t L_8 = L_7;
		t7 * L_9 = Box(t572_TI_var, &L_8);
		t47* L_10 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_9);
		m2587(L_6, (t47*) &_stringLiteral269, L_10, NULL);
		t533 * L_11 = V_1;
		uint64_t L_12 = m2998(NULL, NULL);
		uint64_t L_13 = L_12;
		t7 * L_14 = Box(t573_TI_var, &L_13);
		t47* L_15 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_14);
		m2587(L_11, (t47*) &_stringLiteral270, L_15, NULL);
		t533 * L_16 = V_1;
		t584 * L_17 = p0;
		uint64_t L_18 = m2942(L_17, NULL);
		t592 * L_19 = m2999(NULL, L_18, NULL);
		t47* L_20 = m2994(L_19, NULL);
		m2587(L_16, (t47*) &_stringLiteral245, L_20, NULL);
		t533 * L_21 = V_1;
		m2589(L_21, (t47*) &_stringLiteral271, 0, NULL);
		t533 * L_22 = V_1;
		t584 * L_23 = p0;
		uint64_t L_24 = m2942(L_23, NULL);
		uint64_t L_25 = L_24;
		t7 * L_26 = Box(t580_TI_var, &L_25);
		t47* L_27 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_26);
		m2587(L_22, (t47*) &_stringLiteral244, L_27, NULL);
		t533 * L_28 = V_1;
		t664 * L_29 = m2590(L_28, NULL);
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (t47*) &_stringLiteral275, (t47*) &_stringLiteral276);
		t597 * L_30 = V_0;
		t47* L_31 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Uri::ToString() */, L_30);
		t533 * L_32 = V_1;
		t532 * L_33 = (t532 *)il2cpp_codegen_object_new (t532_TI_var);
		m2571(L_33, L_31, L_32, NULL);
		V_2 = L_33;
		t532 * L_34 = V_2;
		t673 * L_35 = p1;
		t7 * L_36 = m3285(__this, L_34, L_35, m3285_MI_var);
		t63 * L_37 = m167(__this, L_36, NULL);
		return L_37;
	}
}
extern TypeInfo* t585_TI_var;
extern "C" t63 * m3010 (t596 * __this, uint64_t p0, uint16_t p1, t673 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t585_TI_var = il2cpp_codegen_type_info_from_index(968);
		s_Il2CppMethodIntialized = true;
	}
	t585 * V_0 = {0};
	{
		t585 * L_0 = (t585 *)il2cpp_codegen_object_new (t585_TI_var);
		m2945(L_0, NULL);
		V_0 = L_0;
		t585 * L_1 = V_0;
		uint64_t L_2 = p0;
		m2947(L_1, L_2, NULL);
		t585 * L_3 = V_0;
		uint16_t L_4 = p1;
		m2949(L_3, L_4, NULL);
		t585 * L_5 = V_0;
		t673 * L_6 = p2;
		t63 * L_7 = m3011(__this, L_5, L_6, NULL);
		return L_7;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t533_TI_var;
extern TypeInfo* t593_TI_var;
extern TypeInfo* t572_TI_var;
extern TypeInfo* t573_TI_var;
extern TypeInfo* t580_TI_var;
extern TypeInfo* t581_TI_var;
extern TypeInfo* t532_TI_var;
extern const MethodInfo* m3285_MI_var;
extern "C" t63 * m3011 (t596 * __this, t585 * p0, t673 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t533_TI_var = il2cpp_codegen_type_info_from_index(962);
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t572_TI_var = il2cpp_codegen_type_info_from_index(945);
		t573_TI_var = il2cpp_codegen_type_info_from_index(946);
		t580_TI_var = il2cpp_codegen_type_info_from_index(951);
		t581_TI_var = il2cpp_codegen_type_info_from_index(952);
		t532_TI_var = il2cpp_codegen_type_info_from_index(963);
		m3285_MI_var = il2cpp_codegen_method_info_from_index(2147483912);
		s_Il2CppMethodIntialized = true;
	}
	t597 * V_0 = {0};
	t533 * V_1 = {0};
	t532 * V_2 = {0};
	{
		t597 * L_0 = m3001(__this, NULL);
		t597 * L_1 = (t597 *)il2cpp_codegen_object_new (t597_TI_var);
		m3289(L_1, L_0, (t47*) &_stringLiteral281, NULL);
		V_0 = L_1;
		t597 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = m217(NULL, (t47*) &_stringLiteral282, L_2, NULL);
		m183(NULL, L_3, NULL);
		t533 * L_4 = (t533 *)il2cpp_codegen_object_new (t533_TI_var);
		m2586(L_4, NULL);
		V_1 = L_4;
		t533 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		uint64_t L_6 = m2996(NULL, NULL);
		uint64_t L_7 = L_6;
		t7 * L_8 = Box(t572_TI_var, &L_7);
		t47* L_9 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		m2587(L_5, (t47*) &_stringLiteral269, L_9, NULL);
		t533 * L_10 = V_1;
		uint64_t L_11 = m2998(NULL, NULL);
		uint64_t L_12 = L_11;
		t7 * L_13 = Box(t573_TI_var, &L_12);
		t47* L_14 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		m2587(L_10, (t47*) &_stringLiteral270, L_14, NULL);
		t533 * L_15 = V_1;
		t585 * L_16 = p0;
		uint64_t L_17 = m2946(L_16, NULL);
		t592 * L_18 = m2999(NULL, L_17, NULL);
		t47* L_19 = m2994(L_18, NULL);
		m2587(L_15, (t47*) &_stringLiteral245, L_19, NULL);
		t533 * L_20 = V_1;
		m2589(L_20, (t47*) &_stringLiteral271, 0, NULL);
		t533 * L_21 = V_1;
		t585 * L_22 = p0;
		uint64_t L_23 = m2946(L_22, NULL);
		uint64_t L_24 = L_23;
		t7 * L_25 = Box(t580_TI_var, &L_24);
		t47* L_26 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_25);
		m2587(L_21, (t47*) &_stringLiteral244, L_26, NULL);
		t533 * L_27 = V_1;
		t585 * L_28 = p0;
		uint16_t L_29 = m2948(L_28, NULL);
		uint16_t L_30 = L_29;
		t7 * L_31 = Box(t581_TI_var, &L_30);
		t47* L_32 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_31);
		m2587(L_27, (t47*) &_stringLiteral246, L_32, NULL);
		t533 * L_33 = V_1;
		t664 * L_34 = m2590(L_33, NULL);
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_34, (t47*) &_stringLiteral275, (t47*) &_stringLiteral276);
		t597 * L_35 = V_0;
		t47* L_36 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Uri::ToString() */, L_35);
		t533 * L_37 = V_1;
		t532 * L_38 = (t532 *)il2cpp_codegen_object_new (t532_TI_var);
		m2571(L_38, L_36, L_37, NULL);
		V_2 = L_38;
		t532 * L_39 = V_2;
		t673 * L_40 = p1;
		t7 * L_41 = m3285(__this, L_39, L_40, m3285_MI_var);
		t63 * L_42 = m167(__this, L_41, NULL);
		return L_42;
	}
}
extern TypeInfo* t586_TI_var;
extern "C" t63 * m3012 (t596 * __this, int32_t p0, int32_t p1, t47* p2, t674 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t586_TI_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	t586 * V_0 = {0};
	{
		t586 * L_0 = (t586 *)il2cpp_codegen_object_new (t586_TI_var);
		m2951(L_0, NULL);
		V_0 = L_0;
		t586 * L_1 = V_0;
		int32_t L_2 = p0;
		m2955(L_1, L_2, NULL);
		t586 * L_3 = V_0;
		int32_t L_4 = p1;
		m2953(L_3, L_4, NULL);
		t586 * L_5 = V_0;
		t47* L_6 = p2;
		m2957(L_5, L_6, NULL);
		t586 * L_7 = V_0;
		t674 * L_8 = p3;
		t63 * L_9 = m3013(__this, L_7, L_8, NULL);
		return L_9;
	}
}
extern TypeInfo* t597_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t533_TI_var;
extern TypeInfo* t593_TI_var;
extern TypeInfo* t572_TI_var;
extern TypeInfo* t573_TI_var;
extern TypeInfo* t532_TI_var;
extern const MethodInfo* m3286_MI_var;
extern "C" t63 * m3013 (t596 * __this, t586 * p0, t674 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t533_TI_var = il2cpp_codegen_type_info_from_index(962);
		t593_TI_var = il2cpp_codegen_type_info_from_index(957);
		t572_TI_var = il2cpp_codegen_type_info_from_index(945);
		t573_TI_var = il2cpp_codegen_type_info_from_index(946);
		t532_TI_var = il2cpp_codegen_type_info_from_index(963);
		m3286_MI_var = il2cpp_codegen_method_info_from_index(2147483913);
		s_Il2CppMethodIntialized = true;
	}
	t597 * V_0 = {0};
	t533 * V_1 = {0};
	t532 * V_2 = {0};
	{
		t597 * L_0 = m3001(__this, NULL);
		t597 * L_1 = (t597 *)il2cpp_codegen_object_new (t597_TI_var);
		m3289(L_1, L_0, (t47*) &_stringLiteral283, NULL);
		V_0 = L_1;
		t597 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_3 = m217(NULL, (t47*) &_stringLiteral284, L_2, NULL);
		m183(NULL, L_3, NULL);
		t533 * L_4 = (t533 *)il2cpp_codegen_object_new (t533_TI_var);
		m2586(L_4, NULL);
		V_1 = L_4;
		t533 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t593_TI_var);
		uint64_t L_6 = m2996(NULL, NULL);
		uint64_t L_7 = L_6;
		t7 * L_8 = Box(t572_TI_var, &L_7);
		t47* L_9 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		m2587(L_5, (t47*) &_stringLiteral269, L_9, NULL);
		t533 * L_10 = V_1;
		uint64_t L_11 = m2998(NULL, NULL);
		uint64_t L_12 = L_11;
		t7 * L_13 = Box(t573_TI_var, &L_12);
		t47* L_14 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		m2587(L_10, (t47*) &_stringLiteral270, L_14, NULL);
		t533 * L_15 = V_1;
		m2589(L_15, (t47*) &_stringLiteral245, 0, NULL);
		t533 * L_16 = V_1;
		m2589(L_16, (t47*) &_stringLiteral271, 0, NULL);
		t533 * L_17 = V_1;
		t586 * L_18 = p0;
		int32_t L_19 = m2952(L_18, NULL);
		m2589(L_17, (t47*) &_stringLiteral285, L_19, NULL);
		t533 * L_20 = V_1;
		t586 * L_21 = p0;
		int32_t L_22 = m2954(L_21, NULL);
		m2589(L_20, (t47*) &_stringLiteral286, L_22, NULL);
		t533 * L_23 = V_1;
		t586 * L_24 = p0;
		t47* L_25 = m2956(L_24, NULL);
		m2587(L_23, (t47*) &_stringLiteral287, L_25, NULL);
		t533 * L_26 = V_1;
		t664 * L_27 = m2590(L_26, NULL);
		VirtActionInvoker2< t47*, t47* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (t47*) &_stringLiteral275, (t47*) &_stringLiteral276);
		t597 * L_28 = V_0;
		t47* L_29 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		t533 * L_30 = V_1;
		t532 * L_31 = (t532 *)il2cpp_codegen_object_new (t532_TI_var);
		m2571(L_31, L_29, L_30, NULL);
		V_2 = L_31;
		t532 * L_32 = V_2;
		t674 * L_33 = p1;
		t7 * L_34 = m3286(__this, L_32, L_33, m3286_MI_var);
		t63 * L_35 = m167(__this, L_34, NULL);
		return L_35;
	}
}
#include "t598.h"
#ifndef _MSC_VER
#else
#endif
#include "t598MD.h"

#include "t337MD.h"
#include "t601MD.h"


extern TypeInfo* t337_TI_var;
extern const MethodInfo* m3292_MI_var;
extern "C" void m3014 (t598 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t337_TI_var = il2cpp_codegen_type_info_from_index(971);
		m3292_MI_var = il2cpp_codegen_method_info_from_index(2147483914);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t337_TI_var);
		m3292(__this, m3292_MI_var);
		return;
	}
}
extern TypeInfo* t47_TI_var;
extern "C" t47* m3015 (t598 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t47* G_B2_0 = {0};
	t47* G_B1_0 = {0};
	{
		t47* L_0 = m3036(NULL, __this, NULL);
		t47* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_2 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
#include "t599.h"
#ifndef _MSC_VER
#else
#endif
#include "t599MD.h"

#include "t600.h"
#include "t705.h"
#include "t706.h"
#include "t707.h"
#include "t678.h"
#include "t708.h"
#include "t600MD.h"
#include "t678MD.h"
#include "t708MD.h"


extern TypeInfo* t600_TI_var;
extern const MethodInfo* m3293_MI_var;
extern "C" void m3016 (t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t600_TI_var = il2cpp_codegen_type_info_from_index(972);
		m3293_MI_var = il2cpp_codegen_method_info_from_index(2147483915);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t600 * L_0 = (t600 *)il2cpp_codegen_object_new (t600_TI_var);
		m3293(L_0, m3293_MI_var);
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t707_TI_var;
extern const MethodInfo* m3294_MI_var;
extern "C" t7 * m3017 (t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t707_TI_var = il2cpp_codegen_type_info_from_index(973);
		m3294_MI_var = il2cpp_codegen_method_info_from_index(2147483916);
		s_Il2CppMethodIntialized = true;
	}
	{
		t600 * L_0 = (__this->f0);
		t707  L_1 = m3294(L_0, m3294_MI_var);
		t707  L_2 = L_1;
		t7 * L_3 = Box(t707_TI_var, &L_2);
		return (t7 *)L_3;
	}
}
extern "C" void m3018 (t599 * __this, t47* p0, t7 * p1, const MethodInfo* method)
{
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = p0;
		t7 * L_2 = p1;
		VirtActionInvoker2< t47*, t7 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
extern const MethodInfo* m3295_MI_var;
extern "C" t7* m3019 (t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m3295_MI_var = il2cpp_codegen_method_info_from_index(2147483917);
		s_Il2CppMethodIntialized = true;
	}
	{
		t600 * L_0 = (__this->f0);
		t705 * L_1 = m3295(L_0, m3295_MI_var);
		return L_1;
	}
}
extern "C" bool m3020 (t599 * __this, t47* p0, const MethodInfo* method)
{
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t47* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
extern "C" bool m3021 (t599 * __this, t47* p0, t7 ** p1, const MethodInfo* method)
{
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = p0;
		t7 ** L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t47*, t7 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		return L_3;
	}
}
extern const MethodInfo* m3296_MI_var;
extern "C" t7* m3022 (t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m3296_MI_var = il2cpp_codegen_method_info_from_index(2147483918);
		s_Il2CppMethodIntialized = true;
	}
	{
		t600 * L_0 = (__this->f0);
		t706 * L_1 = m3296(L_0, m3296_MI_var);
		return L_1;
	}
}
extern "C" t7 * m3023 (t599 * __this, t47* p0, const MethodInfo* method)
{
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, t47* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
extern "C" void m3024 (t599 * __this, t47* p0, t7 * p1, const MethodInfo* method)
{
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = p0;
		t7 * L_2 = p1;
		VirtActionInvoker2< t47*, t7 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
extern const MethodInfo* m3297_MI_var;
extern const MethodInfo* m3298_MI_var;
extern "C" void m3025 (t599 * __this, t678  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m3297_MI_var = il2cpp_codegen_method_info_from_index(2147483919);
		m3298_MI_var = il2cpp_codegen_method_info_from_index(2147483920);
		s_Il2CppMethodIntialized = true;
	}
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = m3297((&p0), m3297_MI_var);
		t7 * L_2 = m3298((&p0), m3298_MI_var);
		VirtActionInvoker2< t47*, t7 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
extern "C" void m3026 (t599 * __this, const MethodInfo* method)
{
	{
		t600 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_0);
		return;
	}
}
extern const MethodInfo* m3297_MI_var;
extern const MethodInfo* m3298_MI_var;
extern "C" bool m3027 (t599 * __this, t678  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m3297_MI_var = il2cpp_codegen_method_info_from_index(2147483919);
		m3298_MI_var = il2cpp_codegen_method_info_from_index(2147483920);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = m3297((&p0), m3297_MI_var);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t47* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		t600 * L_3 = (__this->f0);
		t47* L_4 = m3297((&p0), m3297_MI_var);
		t7 * L_5 = (t7 *)VirtFuncInvoker1< t7 *, t47* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_3, L_4);
		t7 * L_6 = m3298((&p0), m3298_MI_var);
		G_B3_0 = ((((t7*)(t7 *)L_5) == ((t7*)(t7 *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t679_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" void m3028 (t599 * __this, t677* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t679_TI_var = il2cpp_codegen_type_info_from_index(975);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t678  V_1 = {0};
	t7* V_2 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t677* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral292, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 SimpleJson.JsonObject::get_Count() */, __this);
		V_0 = L_2;
		t7* L_3 = (t7*)VirtFuncInvoker0< t7* >::Invoke(11 /* System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator() */, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			t7* L_4 = V_2;
			t678  L_5 = (t678 )InterfaceFuncInvoker0< t678  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, t679_TI_var, L_4);
			V_1 = L_5;
			t677* L_6 = p0;
			int32_t L_7 = p1;
			int32_t L_8 = L_7;
			p1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			t678  L_9 = V_1;
			*((t678 *)(t678 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			t7* L_12 = V_2;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			t7* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			t7* L_15 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0068:
	{
		return;
	}
}
extern "C" int32_t m3029 (t599 * __this, const MethodInfo* method)
{
	{
		t600 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
extern "C" bool m3030 (t599 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
extern const MethodInfo* m3297_MI_var;
extern "C" bool m3031 (t599 * __this, t678  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m3297_MI_var = il2cpp_codegen_method_info_from_index(2147483919);
		s_Il2CppMethodIntialized = true;
	}
	{
		t600 * L_0 = (__this->f0);
		t47* L_1 = m3297((&p0), m3297_MI_var);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t47* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
extern TypeInfo* t707_TI_var;
extern const MethodInfo* m3294_MI_var;
extern "C" t7* m3032 (t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t707_TI_var = il2cpp_codegen_type_info_from_index(973);
		m3294_MI_var = il2cpp_codegen_method_info_from_index(2147483916);
		s_Il2CppMethodIntialized = true;
	}
	{
		t600 * L_0 = (__this->f0);
		t707  L_1 = m3294(L_0, m3294_MI_var);
		t707  L_2 = L_1;
		t7 * L_3 = Box(t707_TI_var, &L_2);
		return (t7*)L_3;
	}
}
extern "C" t47* m3033 (t599 * __this, const MethodInfo* method)
{
	{
		t47* L_0 = m3036(NULL, __this, NULL);
		return L_0;
	}
}
#include "t601.h"
#ifndef _MSC_VER
#else
#endif

#include "t603.h"
#include "t336.h"
#include "t337.h"
#include "t709.h"
#include "t710.h"
#include "t711.h"
#include "t692.h"
#include "t712.h"
#include "t694.h"
#include "t713.h"
#include "t86.h"
#include "t459.h"
#include "t603MD.h"
#include "t336MD.h"
#include "t709MD.h"
#include "t711MD.h"
#include "t692MD.h"
#include "t712MD.h"
#include "t58MD.h"
#include "t713MD.h"


extern "C" bool m3034 (t7 * __this , t47* p0, t7 ** p1, const MethodInfo* method)
{
	bool V_0 = false;
	t221* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		t47* L_0 = p0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		t47* L_1 = p0;
		t221* L_2 = m3300(L_1, NULL);
		V_1 = L_2;
		V_2 = 0;
		t7 ** L_3 = p1;
		t221* L_4 = V_1;
		t7 * L_5 = m3039(NULL, L_4, (&V_2), (&V_0), NULL);
		*((t7 **)(L_3)) = (t7 *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		t7 ** L_6 = p1;
		*((t7 **)(L_6)) = (t7 *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
extern TypeInfo* t336_TI_var;
extern "C" t47* m3035 (t7 * __this , t7 * p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	bool V_1 = false;
	t47* G_B3_0 = {0};
	{
		t336 * L_0 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_0, ((int32_t)2000), NULL);
		V_0 = L_0;
		t7 * L_1 = p1;
		t7 * L_2 = p0;
		t336 * L_3 = V_0;
		bool L_4 = m3047(NULL, L_1, L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		t336 * L_6 = V_0;
		t47* L_7 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((t47*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
extern "C" t47* m3036 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	{
		t7 * L_0 = p0;
		t7 * L_1 = m3053(NULL, NULL);
		t47* L_2 = m3035(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t599_TI_var;
extern TypeInfo* t670_TI_var;
extern "C" t7* m3037 (t7 * __this , t221* p0, int32_t* p1, bool* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t599_TI_var = il2cpp_codegen_type_info_from_index(977);
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	t47* V_3 = {0};
	t7 * V_4 = {0};
	{
		t599 * L_0 = (t599 *)il2cpp_codegen_object_new (t599_TI_var);
		m3016(L_0, NULL);
		V_0 = L_0;
		t221* L_1 = p0;
		int32_t* L_2 = p1;
		m3046(NULL, L_1, L_2, NULL);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		t221* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t L_5 = m3045(NULL, L_3, (*((int32_t*)L_4)), NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = p2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (t7*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		t221* L_9 = p0;
		int32_t* L_10 = p1;
		m3046(NULL, L_9, L_10, NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		t221* L_12 = p0;
		int32_t* L_13 = p1;
		m3046(NULL, L_12, L_13, NULL);
		t7* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		t221* L_15 = p0;
		int32_t* L_16 = p1;
		bool* L_17 = p2;
		t47* L_18 = m3040(NULL, L_15, L_16, L_17, NULL);
		V_3 = L_18;
		bool* L_19 = p2;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = p2;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (t7*)NULL;
	}

IL_0063:
	{
		t221* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t L_23 = m3046(NULL, L_21, L_22, NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = p2;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (t7*)NULL;
	}

IL_0077:
	{
		t221* L_26 = p0;
		int32_t* L_27 = p1;
		bool* L_28 = p2;
		t7 * L_29 = m3039(NULL, L_26, L_27, L_28, NULL);
		V_4 = L_29;
		bool* L_30 = p2;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = p2;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (t7*)NULL;
	}

IL_008d:
	{
		t7* L_32 = V_0;
		t47* L_33 = V_3;
		t7 * L_34 = V_4;
		InterfaceActionInvoker2< t47*, t7 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, t670_TI_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		t7* L_36 = V_0;
		return L_36;
	}
}
extern TypeInfo* t598_TI_var;
extern "C" t598 * m3038 (t7 * __this , t221* p0, int32_t* p1, bool* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t598_TI_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	t598 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t7 * V_3 = {0};
	{
		t598 * L_0 = (t598 *)il2cpp_codegen_object_new (t598_TI_var);
		m3014(L_0, NULL);
		V_0 = L_0;
		t221* L_1 = p0;
		int32_t* L_2 = p1;
		m3046(NULL, L_1, L_2, NULL);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		t221* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t L_5 = m3045(NULL, L_3, (*((int32_t*)L_4)), NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = p2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (t598 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		t221* L_9 = p0;
		int32_t* L_10 = p1;
		m3046(NULL, L_9, L_10, NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		t221* L_12 = p0;
		int32_t* L_13 = p1;
		m3046(NULL, L_12, L_13, NULL);
		goto IL_0070;
	}

IL_0051:
	{
		t221* L_14 = p0;
		int32_t* L_15 = p1;
		bool* L_16 = p2;
		t7 * L_17 = m3039(NULL, L_14, L_15, L_16, NULL);
		V_3 = L_17;
		bool* L_18 = p2;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (t598 *)NULL;
	}

IL_0063:
	{
		t598 * L_19 = V_0;
		t7 * L_20 = V_3;
		VirtActionInvoker1< t7 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		t598 * L_22 = V_0;
		return L_22;
	}
}
extern TypeInfo* t54_TI_var;
extern "C" t7 * m3039 (t7 * __this , t221* p0, int32_t* p1, bool* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		t221* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = m3045(NULL, L_0, (*((int32_t*)L_1)), NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		t221* L_4 = p0;
		int32_t* L_5 = p1;
		bool* L_6 = p2;
		t47* L_7 = m3040(NULL, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_004d:
	{
		t221* L_8 = p0;
		int32_t* L_9 = p1;
		bool* L_10 = p2;
		t7 * L_11 = m3042(NULL, L_8, L_9, L_10, NULL);
		return L_11;
	}

IL_0056:
	{
		t221* L_12 = p0;
		int32_t* L_13 = p1;
		bool* L_14 = p2;
		t7* L_15 = m3037(NULL, L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_005f:
	{
		t221* L_16 = p0;
		int32_t* L_17 = p1;
		bool* L_18 = p2;
		t598 * L_19 = m3038(NULL, L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0068:
	{
		t221* L_20 = p0;
		int32_t* L_21 = p1;
		m3046(NULL, L_20, L_21, NULL);
		bool L_22 = 1;
		t7 * L_23 = Box(t54_TI_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		t221* L_24 = p0;
		int32_t* L_25 = p1;
		m3046(NULL, L_24, L_25, NULL);
		bool L_26 = 0;
		t7 * L_27 = Box(t54_TI_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		t221* L_28 = p0;
		int32_t* L_29 = p1;
		m3046(NULL, L_28, L_29, NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = p2;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
extern TypeInfo* t336_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t709_TI_var;
extern "C" t47* m3040 (t7 * __this , t221* p0, int32_t* p1, bool* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t336_TI_var = il2cpp_codegen_type_info_from_index(158);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		s_Il2CppMethodIntialized = true;
	}
	t336 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		t336 * L_0 = (t336 *)il2cpp_codegen_object_new (t336_TI_var);
		m3301(L_0, ((int32_t)2000), NULL);
		V_0 = L_0;
		t221* L_1 = p0;
		int32_t* L_2 = p1;
		m3044(NULL, L_1, L_2, NULL);
		t221* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t* L_5 = p1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = p1;
		t221* L_10 = p0;
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((t52 *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		t221* L_11 = p0;
		int32_t* L_12 = p1;
		int32_t* L_13 = p1;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = p1;
		t221* L_20 = p0;
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((t52 *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		t221* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t* L_23 = p1;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		t336 * L_28 = V_0;
		m1772(L_28, ((int32_t)34), NULL);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		t336 * L_30 = V_0;
		m1772(L_30, ((int32_t)92), NULL);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		t336 * L_32 = V_0;
		m1772(L_32, ((int32_t)47), NULL);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		t336 * L_34 = V_0;
		m1772(L_34, 8, NULL);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		t336 * L_36 = V_0;
		m1772(L_36, ((int32_t)12), NULL);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		t336 * L_38 = V_0;
		m1772(L_38, ((int32_t)10), NULL);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		t336 * L_40 = V_0;
		m1772(L_40, ((int32_t)13), NULL);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		t336 * L_42 = V_0;
		m1772(L_42, ((int32_t)9), NULL);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		t221* L_44 = p0;
		int32_t* L_45 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = p2;
		t221* L_48 = p0;
		int32_t* L_49 = p1;
		t47* L_50 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_50 = m3302(L_50, L_48, (*((int32_t*)L_49)), 4, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_51 = m3303(NULL, NULL);
		bool L_52 = m3304(NULL, L_50, ((int32_t)515), L_51, (&V_4), NULL);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_55 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = p1;
		int32_t* L_59 = p1;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		t221* L_60 = p0;
		int32_t* L_61 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		t221* L_63 = p0;
		int32_t* L_64 = p1;
		t47* L_65 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_65 = m3302(L_65, L_63, (*((int32_t*)L_64)), 2, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_66 = m185(NULL, L_65, (t47*) &_stringLiteral293, NULL);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		t221* L_67 = p0;
		int32_t* L_68 = p1;
		t47* L_69 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_69 = m3302(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_70 = m3303(NULL, NULL);
		bool L_71 = m3304(NULL, L_69, ((int32_t)515), L_70, (&V_5), NULL);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		t336 * L_74 = V_0;
		uint32_t L_75 = V_4;
		m1772(L_74, (((uint16_t)L_75)), NULL);
		t336 * L_76 = V_0;
		uint32_t L_77 = V_5;
		m1772(L_76, (((uint16_t)L_77)), NULL);
		int32_t* L_78 = p1;
		int32_t* L_79 = p1;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = p2;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_81 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		return L_81;
	}

IL_020e:
	{
		t336 * L_82 = V_0;
		uint32_t L_83 = V_4;
		t47* L_84 = m3041(NULL, L_83, NULL);
		m3305(L_82, L_84, NULL);
		int32_t* L_85 = p1;
		int32_t* L_86 = p1;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		t336 * L_87 = V_0;
		uint16_t L_88 = V_1;
		m1772(L_87, L_88, NULL);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = p2;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (t47*)NULL;
	}

IL_024a:
	{
		t336 * L_92 = V_0;
		t47* L_93 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_92);
		return L_93;
	}
}
extern TypeInfo* t711_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t221_TI_var;
extern "C" t47* m3041 (t7 * __this , int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t711_TI_var = il2cpp_codegen_type_info_from_index(980);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t221_TI_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_2, (t47*) &_stringLiteral294, (t47*) &_stringLiteral295, NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = p0;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = p0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		t711 * L_5 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m3306(L_5, (t47*) &_stringLiteral294, (t47*) &_stringLiteral296, NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = p0;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = p0;
		t47* L_8 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_8 = m1782(L_8, (((uint16_t)L_7)), 1, NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = p0;
		p0 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		t221* L_10 = ((t221*)SZArrayNew(t221_TI_var, 2));
		int32_t L_11 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		t221* L_12 = L_10;
		int32_t L_13 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		t47* L_14 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_14 = m3307(L_14, L_12, NULL);
		return L_14;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t709_TI_var;
extern TypeInfo* t692_TI_var;
extern TypeInfo* t712_TI_var;
extern "C" t7 * m3042 (t7 * __this , t221* p0, int32_t* p1, bool* p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		t692_TI_var = il2cpp_codegen_type_info_from_index(981);
		t712_TI_var = il2cpp_codegen_type_info_from_index(982);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t7 * V_2 = {0};
	t47* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		t221* L_0 = p0;
		int32_t* L_1 = p1;
		m3044(NULL, L_0, L_1, NULL);
		t221* L_2 = p0;
		int32_t* L_3 = p1;
		int32_t L_4 = m3043(NULL, L_2, (*((int32_t*)L_3)), NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = p1;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		t221* L_7 = p0;
		int32_t* L_8 = p1;
		int32_t L_9 = V_1;
		t47* L_10 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_10 = m3302(L_10, L_7, (*((int32_t*)L_8)), L_9, NULL);
		V_3 = L_10;
		t47* L_11 = V_3;
		int32_t L_12 = m3243(L_11, (t47*) &_stringLiteral103, 5, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		t47* L_13 = V_3;
		int32_t L_14 = m3243(L_13, (t47*) &_stringLiteral297, 5, NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = p2;
		t221* L_16 = p0;
		int32_t* L_17 = p1;
		int32_t L_18 = V_1;
		t47* L_19 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_19 = m3302(L_19, L_16, (*((int32_t*)L_17)), L_18, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_20 = m3303(NULL, NULL);
		bool L_21 = m3308(NULL, L_19, ((int32_t)511), L_20, (&V_4), NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		t7 * L_24 = Box(t692_TI_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = p2;
		t221* L_26 = p0;
		int32_t* L_27 = p1;
		int32_t L_28 = V_1;
		t47* L_29 = (t47*)il2cpp_codegen_object_new (t47_TI_var);
		L_29 = m3302(L_29, L_26, (*((int32_t*)L_27)), L_28, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_30 = m3303(NULL, NULL);
		bool L_31 = m3309(NULL, L_29, ((int32_t)511), L_30, (&V_5), NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		t7 * L_34 = Box(t712_TI_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = p1;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		t7 * L_37 = V_2;
		return L_37;
	}
}
extern "C" int32_t m3043 (t7 * __this , t221* p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		t221* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = m1817((t47*) &_stringLiteral298, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		t221* L_7 = p0;
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((t52 *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
extern "C" void m3044 (t7 * __this , t221* p0, int32_t* p1, const MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		t221* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = (*((int32_t*)L_1));
		int32_t L_3 = m1817((t47*) &_stringLiteral299, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = p1;
		int32_t* L_5 = p1;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = p1;
		t221* L_7 = p0;
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((t52 *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
extern "C" int32_t m3045 (t7 * __this , t221* p0, int32_t p1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		t221* L_1 = p0;
		int32_t L_2 = m3046(NULL, L_1, (&V_0), NULL);
		return L_2;
	}
}
extern "C" int32_t m3046 (t7 * __this , t221* p0, int32_t* p1, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		t221* L_0 = p0;
		int32_t* L_1 = p1;
		m3044(NULL, L_0, L_1, NULL);
		int32_t* L_2 = p1;
		t221* L_3 = p0;
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((t52 *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		t221* L_4 = p0;
		int32_t* L_5 = p1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = p1;
		int32_t* L_8 = p1;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = p1;
		int32_t* L_14 = p1;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		t221* L_15 = p0;
		int32_t* L_16 = p1;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((t52 *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		t221* L_18 = p0;
		int32_t* L_19 = p1;
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		t221* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		t221* L_24 = p0;
		int32_t* L_25 = p1;
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		t221* L_27 = p0;
		int32_t* L_28 = p1;
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		t221* L_30 = p0;
		int32_t* L_31 = p1;
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = p1;
		int32_t* L_34 = p1;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		t221* L_36 = p0;
		int32_t* L_37 = p1;
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		t221* L_39 = p0;
		int32_t* L_40 = p1;
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		t221* L_42 = p0;
		int32_t* L_43 = p1;
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		t221* L_45 = p0;
		int32_t* L_46 = p1;
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = p1;
		int32_t* L_49 = p1;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		t221* L_51 = p0;
		int32_t* L_52 = p1;
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		t221* L_54 = p0;
		int32_t* L_55 = p1;
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		t221* L_57 = p0;
		int32_t* L_58 = p1;
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		t221* L_60 = p0;
		int32_t* L_61 = p1;
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = p1;
		int32_t* L_64 = p1;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
extern TypeInfo* t47_TI_var;
extern TypeInfo* t670_TI_var;
extern TypeInfo* t714_TI_var;
extern TypeInfo* t475_TI_var;
extern TypeInfo* t54_TI_var;
extern TypeInfo* t602_TI_var;
extern "C" bool m3047 (t7 * __this , t7 * p0, t7 * p1, t336 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t714_TI_var = il2cpp_codegen_type_info_from_index(983);
		t475_TI_var = il2cpp_codegen_type_info_from_index(864);
		t54_TI_var = il2cpp_codegen_type_info_from_index(48);
		t602_TI_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t47* V_1 = {0};
	t7* V_2 = {0};
	t7* V_3 = {0};
	t7 * V_4 = {0};
	t7 * V_5 = {0};
	t336 * G_B13_0 = {0};
	t336 * G_B12_0 = {0};
	t47* G_B14_0 = {0};
	t336 * G_B14_1 = {0};
	{
		V_0 = 1;
		t7 * L_0 = p1;
		V_1 = ((t47*)IsInst(L_0, t47_TI_var));
		t47* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		t47* L_2 = V_1;
		t336 * L_3 = p2;
		bool L_4 = m3050(NULL, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		t7 * L_5 = p1;
		V_2 = ((t7*)IsInst(L_5, t670_TI_var));
		t7* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		t7 * L_7 = p0;
		t7* L_8 = V_2;
		t7* L_9 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, t670_TI_var, L_8);
		t7* L_10 = V_2;
		t7* L_11 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, t670_TI_var, L_10);
		t336 * L_12 = p2;
		bool L_13 = m3048(NULL, L_7, L_9, L_11, L_12, NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		t7 * L_14 = p1;
		V_3 = ((t7*)IsInst(L_14, t714_TI_var));
		t7* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		t7 * L_16 = p0;
		t7* L_17 = V_3;
		t7* L_18 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, t714_TI_var, L_17);
		t7* L_19 = V_3;
		t7* L_20 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, t714_TI_var, L_19);
		t336 * L_21 = p2;
		bool L_22 = m3048(NULL, L_16, L_18, L_20, L_21, NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		t7 * L_23 = p1;
		V_4 = ((t7 *)IsInst(L_23, t475_TI_var));
		t7 * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		t7 * L_25 = p0;
		t7 * L_26 = V_4;
		t336 * L_27 = p2;
		bool L_28 = m3049(NULL, L_25, L_26, L_27, NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		t7 * L_29 = p1;
		bool L_30 = m3052(NULL, L_29, NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		t7 * L_31 = p1;
		t336 * L_32 = p2;
		bool L_33 = m3051(NULL, L_31, L_32, NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		t7 * L_34 = p1;
		if (!((t7 *)IsInst(L_34, t54_TI_var)))
		{
			goto IL_00cf;
		}
	}
	{
		t336 * L_35 = p2;
		t7 * L_36 = p1;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, t54_TI_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (t47*) &_stringLiteral300;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (t47*) &_stringLiteral301;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		m3305(G_B14_1, G_B14_0, NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		t7 * L_37 = p1;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		t336 * L_38 = p2;
		m3305(L_38, (t47*) &_stringLiteral302, NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		t7 * L_39 = p0;
		t7 * L_40 = p1;
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, t7 *, t7 ** >::Invoke(0 /* System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, t602_TI_var, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		t7 * L_43 = p0;
		t7 * L_44 = V_5;
		t336 * L_45 = p2;
		m3047(NULL, L_43, L_44, L_45, NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
extern TypeInfo* t475_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" bool m3048 (t7 * __this , t7 * p0, t7 * p1, t7 * p2, t336 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t475_TI_var = il2cpp_codegen_type_info_from_index(864);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t7 * V_0 = {0};
	t7 * V_1 = {0};
	bool V_2 = false;
	t7 * V_3 = {0};
	t7 * V_4 = {0};
	t47* V_5 = {0};
	{
		t336 * L_0 = p3;
		m3305(L_0, (t47*) &_stringLiteral303, NULL);
		t7 * L_1 = p1;
		t7 * L_2 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, t475_TI_var, L_1);
		V_0 = L_2;
		t7 * L_3 = p2;
		t7 * L_4 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, t475_TI_var, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		t7 * L_5 = V_0;
		t7 * L_6 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_5);
		V_3 = L_6;
		t7 * L_7 = V_1;
		t7 * L_8 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		t336 * L_10 = p3;
		m3305(L_10, (t47*) &_stringLiteral7, NULL);
	}

IL_0042:
	{
		t7 * L_11 = V_3;
		V_5 = ((t47*)IsInst(L_11, t47_TI_var));
		t47* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		t47* L_13 = V_5;
		t336 * L_14 = p3;
		m3050(NULL, L_13, L_14, NULL);
		goto IL_006f;
	}

IL_005f:
	{
		t7 * L_15 = p0;
		t7 * L_16 = V_4;
		t336 * L_17 = p3;
		bool L_18 = m3047(NULL, L_15, L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		t336 * L_19 = p3;
		m3305(L_19, (t47*) &_stringLiteral304, NULL);
		t7 * L_20 = p0;
		t7 * L_21 = V_4;
		t336 * L_22 = p3;
		bool L_23 = m3047(NULL, L_20, L_21, L_22, NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		t7 * L_24 = V_0;
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		t7 * L_26 = V_1;
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		t336 * L_28 = p3;
		m3305(L_28, (t47*) &_stringLiteral139, NULL);
		return 1;
	}
}
extern TypeInfo* t475_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" bool m3049 (t7 * __this , t7 * p0, t7 * p1, t336 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t475_TI_var = il2cpp_codegen_type_info_from_index(864);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t7 * V_1 = {0};
	t7 * V_2 = {0};
	bool V_3 = false;
	t7 * V_4 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t336 * L_0 = p2;
		m3305(L_0, (t47*) &_stringLiteral305, NULL);
		V_0 = 1;
		t7 * L_1 = p1;
		t7 * L_2 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, t475_TI_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			t7 * L_3 = V_2;
			t7 * L_4 = (t7 *)InterfaceFuncInvoker0< t7 * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, t50_TI_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			t336 * L_6 = p2;
			m3305(L_6, (t47*) &_stringLiteral7, NULL);
		}

IL_0033:
		{
			t7 * L_7 = p0;
			t7 * L_8 = V_1;
			t336 * L_9 = p2;
			bool L_10 = m3047(NULL, L_7, L_8, L_9, NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			t7 * L_11 = V_2;
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			t7 * L_13 = V_2;
			V_4 = ((t7 *)IsInst(L_13, t88_TI_var));
			t7 * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			t7 * L_15 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_006e:
	{
		t336 * L_16 = p2;
		m3305(L_16, (t47*) &_stringLiteral306, NULL);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
extern "C" bool m3050 (t7 * __this , t47* p0, t336 * p1, const MethodInfo* method)
{
	t221* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		t336 * L_0 = p1;
		m3305(L_0, (t47*) &_stringLiteral205, NULL);
		t47* L_1 = p0;
		t221* L_2 = m3300(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		t221* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		t336 * L_7 = p1;
		m3305(L_7, (t47*) &_stringLiteral307, NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		t336 * L_9 = p1;
		m3305(L_9, (t47*) &_stringLiteral308, NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		t336 * L_11 = p1;
		m3305(L_11, (t47*) &_stringLiteral309, NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		t336 * L_13 = p1;
		m3305(L_13, (t47*) &_stringLiteral310, NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		t336 * L_15 = p1;
		m3305(L_15, (t47*) &_stringLiteral311, NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		t336 * L_17 = p1;
		m3305(L_17, (t47*) &_stringLiteral312, NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		t336 * L_19 = p1;
		m3305(L_19, (t47*) &_stringLiteral313, NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		t336 * L_20 = p1;
		uint16_t L_21 = V_2;
		m1772(L_20, L_21, NULL);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		t221* L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((t52 *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		t336 * L_25 = p1;
		m3305(L_25, (t47*) &_stringLiteral205, NULL);
		return 1;
	}
}
extern TypeInfo* t712_TI_var;
extern TypeInfo* t709_TI_var;
extern TypeInfo* t701_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t57_TI_var;
extern TypeInfo* t713_TI_var;
extern TypeInfo* t60_TI_var;
extern TypeInfo* t702_TI_var;
extern "C" bool m3051 (t7 * __this , t7 * p0, t336 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t712_TI_var = il2cpp_codegen_type_info_from_index(982);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		t701_TI_var = il2cpp_codegen_type_info_from_index(985);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t57_TI_var = il2cpp_codegen_type_info_from_index(950);
		t713_TI_var = il2cpp_codegen_type_info_from_index(986);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		t702_TI_var = il2cpp_codegen_type_info_from_index(949);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	t713  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		t7 * L_0 = p0;
		if (!((t7 *)IsInst(L_0, t712_TI_var)))
		{
			goto IL_002a;
		}
	}
	{
		t336 * L_1 = p1;
		t7 * L_2 = p0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, t712_TI_var))));
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_3 = m3303(NULL, NULL);
		t47* L_4 = m3310((&V_0), L_3, NULL);
		m3305(L_1, L_4, NULL);
		goto IL_0123;
	}

IL_002a:
	{
		t7 * L_5 = p0;
		if (!((t7 *)IsInst(L_5, t701_TI_var)))
		{
			goto IL_0054;
		}
	}
	{
		t336 * L_6 = p1;
		t7 * L_7 = p0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, t701_TI_var))));
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_8 = m3303(NULL, NULL);
		t47* L_9 = m3311((&V_1), L_8, NULL);
		m3305(L_6, L_9, NULL);
		goto IL_0123;
	}

IL_0054:
	{
		t7 * L_10 = p0;
		if (!((t7 *)IsInst(L_10, t58_TI_var)))
		{
			goto IL_007e;
		}
	}
	{
		t336 * L_11 = p1;
		t7 * L_12 = p0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, t58_TI_var))));
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_13 = m3303(NULL, NULL);
		t47* L_14 = m3312((&V_2), L_13, NULL);
		m3305(L_11, L_14, NULL);
		goto IL_0123;
	}

IL_007e:
	{
		t7 * L_15 = p0;
		if (!((t7 *)IsInst(L_15, t57_TI_var)))
		{
			goto IL_00a8;
		}
	}
	{
		t336 * L_16 = p1;
		t7 * L_17 = p0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, t57_TI_var))));
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_18 = m3303(NULL, NULL);
		t47* L_19 = m3313((&V_3), L_18, NULL);
		m3305(L_16, L_19, NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		t7 * L_20 = p0;
		if (!((t7 *)IsInst(L_20, t713_TI_var)))
		{
			goto IL_00d3;
		}
	}
	{
		t336 * L_21 = p1;
		t7 * L_22 = p0;
		V_4 = ((*(t713 *)((t713 *)UnBox (L_22, t713_TI_var))));
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_23 = m3303(NULL, NULL);
		t47* L_24 = m3314((&V_4), L_23, NULL);
		m3305(L_21, L_24, NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		t7 * L_25 = p0;
		if (!((t7 *)IsInst(L_25, t60_TI_var)))
		{
			goto IL_00fe;
		}
	}
	{
		t336 * L_26 = p1;
		t7 * L_27 = p0;
		V_5 = ((*(float*)((float*)UnBox (L_27, t60_TI_var))));
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_28 = m3303(NULL, NULL);
		t47* L_29 = m3315((&V_5), L_28, NULL);
		m3305(L_26, L_29, NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		t336 * L_30 = p1;
		t7 * L_31 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_32 = m3303(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t702_TI_var);
		double L_33 = m3316(NULL, L_31, L_32, NULL);
		V_6 = L_33;
		t709 * L_34 = m3303(NULL, NULL);
		t47* L_35 = m3317((&V_6), (t47*) &_stringLiteral46, L_34, NULL);
		m3305(L_30, L_35, NULL);
	}

IL_0123:
	{
		return 1;
	}
}
extern TypeInfo* t86_TI_var;
extern TypeInfo* t356_TI_var;
extern TypeInfo* t459_TI_var;
extern TypeInfo* t699_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t57_TI_var;
extern TypeInfo* t712_TI_var;
extern TypeInfo* t701_TI_var;
extern TypeInfo* t60_TI_var;
extern TypeInfo* t692_TI_var;
extern TypeInfo* t713_TI_var;
extern "C" bool m3052 (t7 * __this , t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t86_TI_var = il2cpp_codegen_type_info_from_index(987);
		t356_TI_var = il2cpp_codegen_type_info_from_index(920);
		t459_TI_var = il2cpp_codegen_type_info_from_index(988);
		t699_TI_var = il2cpp_codegen_type_info_from_index(944);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t57_TI_var = il2cpp_codegen_type_info_from_index(950);
		t712_TI_var = il2cpp_codegen_type_info_from_index(982);
		t701_TI_var = il2cpp_codegen_type_info_from_index(985);
		t60_TI_var = il2cpp_codegen_type_info_from_index(36);
		t692_TI_var = il2cpp_codegen_type_info_from_index(981);
		t713_TI_var = il2cpp_codegen_type_info_from_index(986);
		s_Il2CppMethodIntialized = true;
	}
	{
		t7 * L_0 = p0;
		if (!((t7 *)IsInst(L_0, t86_TI_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		t7 * L_1 = p0;
		if (!((t7 *)IsInst(L_1, t356_TI_var)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		t7 * L_2 = p0;
		if (!((t7 *)IsInst(L_2, t459_TI_var)))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		t7 * L_3 = p0;
		if (!((t7 *)IsInst(L_3, t699_TI_var)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		t7 * L_4 = p0;
		if (!((t7 *)IsInst(L_4, t58_TI_var)))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		t7 * L_5 = p0;
		if (!((t7 *)IsInst(L_5, t57_TI_var)))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		t7 * L_6 = p0;
		if (!((t7 *)IsInst(L_6, t712_TI_var)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		t7 * L_7 = p0;
		if (!((t7 *)IsInst(L_7, t701_TI_var)))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		t7 * L_8 = p0;
		if (!((t7 *)IsInst(L_8, t60_TI_var)))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		t7 * L_9 = p0;
		if (!((t7 *)IsInst(L_9, t692_TI_var)))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		t7 * L_10 = p0;
		if (!((t7 *)IsInst(L_10, t713_TI_var)))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
extern TypeInfo* t601_TI_var;
extern "C" t7 * m3053 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t601_TI_var = il2cpp_codegen_type_info_from_index(989);
		s_Il2CppMethodIntialized = true;
	}
	t7 * G_B2_0 = {0};
	t7 * G_B1_0 = {0};
	{
		t7 * L_0 = ((t601_SFs*)t601_TI_var->static_fields)->f0;
		t7 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		t603 * L_2 = m3054(NULL, NULL);
		t603 * L_3 = L_2;
		((t601_SFs*)t601_TI_var->static_fields)->f0 = L_3;
		G_B2_0 = ((t7 *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
extern TypeInfo* t601_TI_var;
extern TypeInfo* t603_TI_var;
extern "C" t603 * m3054 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t601_TI_var = il2cpp_codegen_type_info_from_index(989);
		t603_TI_var = il2cpp_codegen_type_info_from_index(990);
		s_Il2CppMethodIntialized = true;
	}
	t603 * G_B2_0 = {0};
	t603 * G_B1_0 = {0};
	{
		t603 * L_0 = ((t601_SFs*)t601_TI_var->static_fields)->f1;
		t603 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		t603 * L_2 = (t603 *)il2cpp_codegen_object_new (t603_TI_var);
		m3055(L_2, NULL);
		t603 * L_3 = L_2;
		((t601_SFs*)t601_TI_var->static_fields)->f1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t610.h"
#include "t715.h"
#include "t716.h"
#include "t717.h"
#include "t718.h"
#include "t719.h"
#include "t720.h"
#include "t359.h"
#include "t685.h"
#include "t614.h"
#include "t616.h"
#include "t721.h"
#include "t722.h"
#include "t723.h"
#include "t608.h"
#include "t724.h"
#include "t609.h"
#include "t725.h"
#include "t505.h"
#include "t726.h"
#include "t727.h"
#include "t728.h"
#include "t715MD.h"
#include "t716MD.h"
#include "t717MD.h"
#include "t718MD.h"
#include "t719MD.h"
#include "t720MD.h"
#include "t347MD.h"
#include "t619MD.h"
#include "t721MD.h"
#include "t685MD.h"
#include "t722MD.h"
#include "t723MD.h"
#include "t616MD.h"
#include "t724MD.h"
#include "t725MD.h"
#include "t505MD.h"
#include "t726MD.h"
#include "t727MD.h"
#include "t728MD.h"
#include "t608MD.h"


extern TypeInfo* t715_TI_var;
extern TypeInfo* t716_TI_var;
extern TypeInfo* t717_TI_var;
extern TypeInfo* t718_TI_var;
extern TypeInfo* t719_TI_var;
extern TypeInfo* t720_TI_var;
extern const MethodInfo* m3318_MI_var;
extern const MethodInfo* m3319_MI_var;
extern const MethodInfo* m3320_MI_var;
extern const MethodInfo* m3321_MI_var;
extern const MethodInfo* m3322_MI_var;
extern const MethodInfo* m3323_MI_var;
extern "C" void m3055 (t603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t715_TI_var = il2cpp_codegen_type_info_from_index(997);
		t716_TI_var = il2cpp_codegen_type_info_from_index(998);
		t717_TI_var = il2cpp_codegen_type_info_from_index(999);
		t718_TI_var = il2cpp_codegen_type_info_from_index(1000);
		t719_TI_var = il2cpp_codegen_type_info_from_index(1001);
		t720_TI_var = il2cpp_codegen_type_info_from_index(1002);
		m3318_MI_var = il2cpp_codegen_method_info_from_index(2147483921);
		m3319_MI_var = il2cpp_codegen_method_info_from_index(2147483922);
		m3320_MI_var = il2cpp_codegen_method_info_from_index(2147483923);
		m3321_MI_var = il2cpp_codegen_method_info_from_index(2147483924);
		m3322_MI_var = il2cpp_codegen_method_info_from_index(2147483925);
		m3323_MI_var = il2cpp_codegen_method_info_from_index(2147483926);
		s_Il2CppMethodIntialized = true;
	}
	{
		m162(__this, NULL);
		t226 L_0 = { (void*)GetVirtualMethodInfo(__this, 6) };
		t715 * L_1 = (t715 *)il2cpp_codegen_object_new (t715_TI_var);
		m3318(L_1, __this, L_0, m3318_MI_var);
		t716 * L_2 = (t716 *)il2cpp_codegen_object_new (t716_TI_var);
		m3319(L_2, L_1, m3319_MI_var);
		__this->f0 = L_2;
		t226 L_3 = { (void*)GetVirtualMethodInfo(__this, 7) };
		t717 * L_4 = (t717 *)il2cpp_codegen_object_new (t717_TI_var);
		m3320(L_4, __this, L_3, m3320_MI_var);
		t718 * L_5 = (t718 *)il2cpp_codegen_object_new (t718_TI_var);
		m3321(L_5, L_4, m3321_MI_var);
		__this->f1 = L_5;
		t226 L_6 = { (void*)GetVirtualMethodInfo(__this, 8) };
		t719 * L_7 = (t719 *)il2cpp_codegen_object_new (t719_TI_var);
		m3322(L_7, __this, L_6, m3322_MI_var);
		t720 * L_8 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m3323(L_8, L_7, m3323_MI_var);
		__this->f2 = L_8;
		return;
	}
}
extern const Il2CppType* t58_0_0_0_var;
extern TypeInfo* t607_TI_var;
extern TypeInfo* t603_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t48_TI_var;
extern "C" void m3056 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_0_0_0_var = il2cpp_codegen_type_from_index(14);
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		t603_TI_var = il2cpp_codegen_type_info_from_index(990);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t603_SFs*)t603_TI_var->static_fields)->f3 = ((t607*)SZArrayNew(t607_TI_var, 0));
		t607* L_0 = ((t607*)SZArrayNew(t607_TI_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_1 = m1613(NULL, LoadTypeToken(t58_0_0_0_var), NULL);
		ArrayElementTypeCheck (L_0, L_1);
		*((t347 **)(t347 **)SZArrayLdElema(L_0, 0)) = (t347 *)L_1;
		((t603_SFs*)t603_TI_var->static_fields)->f4 = L_0;
		t48* L_2 = ((t48*)SZArrayNew(t48_TI_var, 3));
		ArrayElementTypeCheck (L_2, (t47*) &_stringLiteral314);
		*((t47**)(t47**)SZArrayLdElema(L_2, 0)) = (t47*)(t47*) &_stringLiteral314;
		t48* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t47*) &_stringLiteral315);
		*((t47**)(t47**)SZArrayLdElema(L_3, 1)) = (t47*)(t47*) &_stringLiteral315;
		t48* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t47*) &_stringLiteral316);
		*((t47**)(t47**)SZArrayLdElema(L_4, 2)) = (t47*)(t47*) &_stringLiteral316;
		((t603_SFs*)t603_TI_var->static_fields)->f5 = L_4;
		return;
	}
}
extern "C" t47* m3057 (t603 * __this, t47* p0, const MethodInfo* method)
{
	{
		t47* L_0 = p0;
		return L_0;
	}
}
extern TypeInfo* t603_TI_var;
extern TypeInfo* t619_TI_var;
extern "C" t610 * m3058 (t603 * __this, t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t603_TI_var = il2cpp_codegen_type_info_from_index(990);
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	t347 * G_B2_0 = {0};
	t347 * G_B1_0 = {0};
	t607* G_B3_0 = {0};
	t347 * G_B3_1 = {0};
	{
		t347 * L_0 = p0;
		t347 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t603_TI_var);
		t607* L_3 = ((t603_SFs*)t603_TI_var->static_fields)->f4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t603_TI_var);
		t607* L_4 = ((t603_SFs*)t603_TI_var->static_fields)->f3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t610 * L_5 = m3094(NULL, G_B3_1, G_B3_0, NULL);
		return L_5;
	}
}
extern TypeInfo* t721_TI_var;
extern TypeInfo* t619_TI_var;
extern TypeInfo* t683_TI_var;
extern TypeInfo* t729_TI_var;
extern TypeInfo* t680_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t684_TI_var;
extern TypeInfo* t730_TI_var;
extern const MethodInfo* m3324_MI_var;
extern "C" t7* m3059 (t603 * __this, t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t721_TI_var = il2cpp_codegen_type_info_from_index(1005);
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		t683_TI_var = il2cpp_codegen_type_info_from_index(1006);
		t729_TI_var = il2cpp_codegen_type_info_from_index(1008);
		t680_TI_var = il2cpp_codegen_type_info_from_index(992);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t684_TI_var = il2cpp_codegen_type_info_from_index(1009);
		t730_TI_var = il2cpp_codegen_type_info_from_index(1011);
		m3324_MI_var = il2cpp_codegen_method_info_from_index(2147483927);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	t685 * V_1 = {0};
	t7* V_2 = {0};
	t614 * V_3 = {0};
	t616 * V_4 = {0};
	t7* V_5 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t721 * L_0 = (t721 *)il2cpp_codegen_object_new (t721_TI_var);
		m3324(L_0, m3324_MI_var);
		V_0 = L_0;
		t347 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t7* L_2 = m3090(NULL, L_1, NULL);
		t7* L_3 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, t683_TI_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			t7* L_4 = V_2;
			t685 * L_5 = (t685 *)InterfaceFuncInvoker0< t685 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, t729_TI_var, L_4);
			V_1 = L_5;
			t685 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			t685 * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
			t614 * L_9 = m3092(NULL, L_8, NULL);
			V_3 = L_9;
			t614 * L_10 = V_3;
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			t614 * L_12 = V_3;
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			t7* L_14 = V_0;
			t685 * L_15 = V_1;
			t47* L_16 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			t47* L_17 = (t47*)VirtFuncInvoker1< t47*, t47* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			t685 * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
			t608 * L_19 = m3097(NULL, L_18, NULL);
			InterfaceActionInvoker2< t47*, t608 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, t680_TI_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			t7* L_20 = V_2;
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			t7* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			t7* L_23 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_007e:
	{
		t347 * L_24 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t7* L_25 = m3091(NULL, L_24, NULL);
		t7* L_26 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, t684_TI_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			t7* L_27 = V_5;
			t616 * L_28 = (t616 *)InterfaceFuncInvoker0< t616 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, t730_TI_var, L_27);
			V_4 = L_28;
			t616 * L_29 = V_4;
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			t616 * L_31 = V_4;
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			t7* L_33 = V_0;
			t616 * L_34 = V_4;
			t47* L_35 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			t47* L_36 = (t47*)VirtFuncInvoker1< t47*, t47* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			t616 * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
			t608 * L_38 = m3098(NULL, L_37, NULL);
			InterfaceActionInvoker2< t47*, t608 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, t680_TI_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			t7* L_39 = V_5;
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			t7* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			t7* L_42 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_00ee:
	{
		t7* L_43 = V_0;
		return L_43;
	}
}
extern TypeInfo* t724_TI_var;
extern TypeInfo* t619_TI_var;
extern TypeInfo* t683_TI_var;
extern TypeInfo* t729_TI_var;
extern TypeInfo* t681_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern TypeInfo* t684_TI_var;
extern TypeInfo* t730_TI_var;
extern const MethodInfo* m3325_MI_var;
extern const MethodInfo* m3326_MI_var;
extern "C" t7* m3060 (t603 * __this, t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t724_TI_var = il2cpp_codegen_type_info_from_index(1012);
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		t683_TI_var = il2cpp_codegen_type_info_from_index(1006);
		t729_TI_var = il2cpp_codegen_type_info_from_index(1008);
		t681_TI_var = il2cpp_codegen_type_info_from_index(994);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		t684_TI_var = il2cpp_codegen_type_info_from_index(1009);
		t730_TI_var = il2cpp_codegen_type_info_from_index(1011);
		m3325_MI_var = il2cpp_codegen_method_info_from_index(2147483928);
		m3326_MI_var = il2cpp_codegen_method_info_from_index(2147483929);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	t685 * V_1 = {0};
	t7* V_2 = {0};
	t614 * V_3 = {0};
	t616 * V_4 = {0};
	t7* V_5 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t724 * L_0 = (t724 *)il2cpp_codegen_object_new (t724_TI_var);
		m3325(L_0, m3325_MI_var);
		V_0 = L_0;
		t347 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t7* L_2 = m3090(NULL, L_1, NULL);
		t7* L_3 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, t683_TI_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			t7* L_4 = V_2;
			t685 * L_5 = (t685 *)InterfaceFuncInvoker0< t685 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, t729_TI_var, L_4);
			V_1 = L_5;
			t685 * L_6 = V_1;
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			t685 * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
			t614 * L_9 = m3093(NULL, L_8, NULL);
			V_3 = L_9;
			t614 * L_10 = V_3;
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			t614 * L_12 = V_3;
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			t7* L_14 = V_0;
			t685 * L_15 = V_1;
			t47* L_16 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			t47* L_17 = (t47*)VirtFuncInvoker1< t47*, t47* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			t685 * L_18 = V_1;
			t347 * L_19 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			t685 * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
			t609 * L_21 = m3101(NULL, L_20, NULL);
			t725  L_22 = {0};
			m3326(&L_22, L_19, L_21, m3326_MI_var);
			InterfaceActionInvoker2< t47*, t725  >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, t681_TI_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			t7* L_23 = V_2;
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			t7* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			t7* L_26 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0089:
	{
		t347 * L_27 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t7* L_28 = m3091(NULL, L_27, NULL);
		t7* L_29 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, t684_TI_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			t7* L_30 = V_5;
			t616 * L_31 = (t616 *)InterfaceFuncInvoker0< t616 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, t730_TI_var, L_30);
			V_4 = L_31;
			t616 * L_32 = V_4;
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsInitOnly() */, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			t616 * L_34 = V_4;
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			t616 * L_36 = V_4;
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			t7* L_38 = V_0;
			t616 * L_39 = V_4;
			t47* L_40 = (t47*)VirtFuncInvoker0< t47* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			t47* L_41 = (t47*)VirtFuncInvoker1< t47*, t47* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			t616 * L_42 = V_4;
			t347 * L_43 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			t616 * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
			t609 * L_45 = m3102(NULL, L_44, NULL);
			t725  L_46 = {0};
			m3326(&L_46, L_43, L_45, m3326_MI_var);
			InterfaceActionInvoker2< t47*, t725  >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, t681_TI_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			t7* L_47 = V_5;
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			t7* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			t7* L_50 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_0111:
	{
		t7* L_51 = V_0;
		return L_51;
	}
}
extern "C" bool m3061 (t603 * __this, t7 * p0, t7 ** p1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t7 * L_0 = p0;
		t7 ** L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t7 *, t7 ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		t7 * L_3 = p0;
		t7 ** L_4 = p1;
		bool L_5 = (bool)VirtFuncInvoker2< bool, t7 *, t7 ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t709_TI_var;
extern TypeInfo* t702_TI_var;
extern TypeInfo* t692_TI_var;
extern "C" t7 * m3062 (t603 * __this, t28 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		t702_TI_var = il2cpp_codegen_type_info_from_index(949);
		t692_TI_var = il2cpp_codegen_type_info_from_index(981);
		s_Il2CppMethodIntialized = true;
	}
	{
		t28 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_1 = m3303(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t702_TI_var);
		double L_2 = m3316(NULL, L_0, L_1, NULL);
		double L_3 = L_2;
		t7 * L_4 = Box(t692_TI_var, &L_3);
		return L_4;
	}
}
extern TypeInfo* t505_TI_var;
extern TypeInfo* t603_TI_var;
extern TypeInfo* t709_TI_var;
extern TypeInfo* t726_TI_var;
extern TypeInfo* t727_TI_var;
extern TypeInfo* t597_TI_var;
extern TypeInfo* t28_TI_var;
extern "C" bool m3063 (t603 * __this, t7 * p0, t7 ** p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t505_TI_var = il2cpp_codegen_type_info_from_index(896);
		t603_TI_var = il2cpp_codegen_type_info_from_index(990);
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		t726_TI_var = il2cpp_codegen_type_info_from_index(1013);
		t727_TI_var = il2cpp_codegen_type_info_from_index(1014);
		t597_TI_var = il2cpp_codegen_type_info_from_index(959);
		t28_TI_var = il2cpp_codegen_type_info_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	t28 * V_1 = {0};
	t505  V_2 = {0};
	t505  V_3 = {0};
	t726  V_4 = {0};
	t726  V_5 = {0};
	t727  V_6 = {0};
	{
		V_0 = 1;
		t7 * L_0 = p0;
		if (!((t7 *)IsInst(L_0, t505_TI_var)))
		{
			goto IL_0036;
		}
	}
	{
		t7 ** L_1 = p1;
		t7 * L_2 = p0;
		V_2 = ((*(t505 *)((t505 *)UnBox (L_2, t505_TI_var))));
		t505  L_3 = m3327((&V_2), NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(t603_TI_var);
		t48* L_4 = ((t603_SFs*)t603_TI_var->static_fields)->f5;
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_6 = m3303(NULL, NULL);
		t47* L_7 = m3328((&V_3), (*(t47**)(t47**)SZArrayLdElema(L_4, L_5)), L_6, NULL);
		*((t7 **)(L_1)) = (t7 *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		t7 * L_8 = p0;
		if (!((t7 *)IsInst(L_8, t726_TI_var)))
		{
			goto IL_006c;
		}
	}
	{
		t7 ** L_9 = p1;
		t7 * L_10 = p0;
		V_4 = ((*(t726 *)((t726 *)UnBox (L_10, t726_TI_var))));
		t726  L_11 = m3329((&V_4), NULL);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(t603_TI_var);
		t48* L_12 = ((t603_SFs*)t603_TI_var->static_fields)->f5;
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_14 = m3303(NULL, NULL);
		t47* L_15 = m3330((&V_5), (*(t47**)(t47**)SZArrayLdElema(L_12, L_13)), L_14, NULL);
		*((t7 **)(L_9)) = (t7 *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		t7 * L_16 = p0;
		if (!((t7 *)IsInst(L_16, t727_TI_var)))
		{
			goto IL_0092;
		}
	}
	{
		t7 ** L_17 = p1;
		t7 * L_18 = p0;
		V_6 = ((*(t727 *)((t727 *)UnBox (L_18, t727_TI_var))));
		t47* L_19 = m3331((&V_6), (t47*) &_stringLiteral317, NULL);
		*((t7 **)(L_17)) = (t7 *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		t7 * L_20 = p0;
		if (!((t597 *)IsInst(L_20, t597_TI_var)))
		{
			goto IL_00aa;
		}
	}
	{
		t7 ** L_21 = p1;
		t7 * L_22 = p0;
		t47* L_23 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*((t7 **)(L_21)) = (t7 *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		t7 * L_24 = p0;
		V_1 = ((t28 *)IsInst(L_24, t28_TI_var));
		t28 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		t7 ** L_26 = p1;
		t28 * L_27 = V_1;
		t7 * L_28 = (t7 *)VirtFuncInvoker1< t7 *, t28 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_27);
		*((t7 **)(L_26)) = (t7 *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		t7 ** L_29 = p1;
		*((t7 **)(L_29)) = (t7 *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
extern TypeInfo* t708_TI_var;
extern TypeInfo* t599_TI_var;
extern TypeInfo* t605_TI_var;
extern TypeInfo* t731_TI_var;
extern TypeInfo* t732_TI_var;
extern TypeInfo* t670_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern const MethodInfo* m3332_MI_var;
extern const MethodInfo* m3333_MI_var;
extern "C" bool m3064 (t603 * __this, t7 * p0, t7 ** p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t708_TI_var = il2cpp_codegen_type_info_from_index(974);
		t599_TI_var = il2cpp_codegen_type_info_from_index(977);
		t605_TI_var = il2cpp_codegen_type_info_from_index(1015);
		t731_TI_var = il2cpp_codegen_type_info_from_index(1016);
		t732_TI_var = il2cpp_codegen_type_info_from_index(1018);
		t670_TI_var = il2cpp_codegen_type_info_from_index(947);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		m3332_MI_var = il2cpp_codegen_method_info_from_index(2147483930);
		m3333_MI_var = il2cpp_codegen_method_info_from_index(2147483931);
		s_Il2CppMethodIntialized = true;
	}
	t347 * V_0 = {0};
	t7* V_1 = {0};
	t7* V_2 = {0};
	t728  V_3 = {0};
	t7* V_4 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t7 * L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (t708_TI_var);
		m3299(L_1, (t47*) &_stringLiteral318, NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t7 ** L_2 = p1;
		*((t7 **)(L_2)) = (t7 *)NULL;
		t7 * L_3 = p0;
		t347 * L_4 = m1520(L_3, NULL);
		V_0 = L_4;
		t347 * L_5 = V_0;
		t47* L_6 = (t47*)VirtFuncInvoker0< t47* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		t599 * L_7 = (t599 *)il2cpp_codegen_object_new (t599_TI_var);
		m3016(L_7, NULL);
		V_1 = L_7;
		t7* L_8 = (__this->f1);
		t347 * L_9 = V_0;
		t7* L_10 = (t7*)InterfaceFuncInvoker1< t7*, t347 * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, t605_TI_var, L_8, L_9);
		V_2 = L_10;
		t7* L_11 = V_2;
		t7* L_12 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, t731_TI_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			t7* L_13 = V_4;
			t728  L_14 = (t728 )InterfaceFuncInvoker0< t728  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, t732_TI_var, L_13);
			V_3 = L_14;
			t608 * L_15 = m3332((&V_3), m3332_MI_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			t7* L_16 = V_1;
			t47* L_17 = m3333((&V_3), m3333_MI_var);
			t47* L_18 = (t47*)VirtFuncInvoker1< t47*, t47* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			t608 * L_19 = m3332((&V_3), m3332_MI_var);
			t7 * L_20 = p0;
			t7 * L_21 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(10 /* System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object) */, L_19, L_20);
			InterfaceActionInvoker2< t47*, t7 * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, t670_TI_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			t7* L_22 = V_4;
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			t7* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			t7* L_25 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_009a:
	{
		t7 ** L_26 = p1;
		t7* L_27 = V_1;
		*((t7 **)(L_26)) = (t7 *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m3065 (t608 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m3066 (t608 * __this, t7 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3066((t608 *)__this->f9,p0, method);
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
extern "C" t7 * pinvoke_delegate_wrapper_t608(Il2CppObject* delegate, t7 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t7 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t7 * m3067 (t608 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" t7 * m3068 (t608 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#ifndef _MSC_VER
#else
#endif
#include "t609MD.h"



extern "C" void m3069 (t609 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m3070 (t609 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3070((t609 *)__this->f9,p0, p1, method);
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
extern "C" void pinvoke_delegate_wrapper_t609(Il2CppObject* delegate, t7 * p0, t7 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t7 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t7 * m3071 (t609 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m3072 (t609 * __this, t7 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
#include "t610MD.h"



extern "C" void m3073 (t610 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t7 * m3074 (t610 * __this, t69* p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3074((t610 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 *, t7 * __this, t69* p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, t69* p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t7 * (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t7 * pinvoke_delegate_wrapper_t610(Il2CppObject* delegate, t69* p0)
{
	typedef t7 * (STDCALL *native_function_ptr_type)(t7 **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t7 ** _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_array<t7 *>((Il2CppCodeGenArray*)p0);

	// Native function invocation and marshaling of return value back from native representation
	t7 * _return_value = _il2cpp_pinvoke_func(_p0_marshaled);
	t7 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter 'p0' native representation

	return __return_value_unmarshaled;
}
extern "C" t7 * m3075 (t610 * __this, t69* p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" t7 * m3076 (t610 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t7 *)__result;
}
#include "t611.h"
#ifndef _MSC_VER
#else
#endif
#include "t611MD.h"

#include "t612.h"
#include "t612MD.h"


extern "C" void m3077 (t611 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t7 * m3078 (t611 * __this, t69* p0, const MethodInfo* method)
{
	{
		t612 * L_0 = (__this->f0);
		t69* L_1 = p0;
		t7 * L_2 = m3334(L_0, L_1, NULL);
		return L_2;
	}
}
#include "t613.h"
#ifndef _MSC_VER
#else
#endif
#include "t613MD.h"

#include "t619.h"


extern "C" void m3079 (t613 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t619_TI_var;
extern "C" t7 * m3080 (t613 * __this, t7 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		t614 * L_0 = (__this->f0);
		t7 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t69* L_2 = ((t619_SFs*)t619_TI_var->static_fields)->f0;
		t7 * L_3 = (t7 *)VirtFuncInvoker2< t7 *, t7 *, t69* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
#include "t615.h"
#ifndef _MSC_VER
#else
#endif
#include "t615MD.h"



extern "C" void m3081 (t615 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" t7 * m3082 (t615 * __this, t7 * p0, const MethodInfo* method)
{
	{
		t616 * L_0 = (__this->f0);
		t7 * L_1 = p0;
		t7 * L_2 = (t7 *)VirtFuncInvoker1< t7 *, t7 * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
#include "t617.h"
#ifndef _MSC_VER
#else
#endif
#include "t617MD.h"



extern "C" void m3083 (t617 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern "C" void m3084 (t617 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		t614 * L_0 = (__this->f0);
		t7 * L_1 = p0;
		t69* L_2 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t7 * L_3 = p1;
		ArrayElementTypeCheck (L_2, L_3);
		*((t7 **)(t7 **)SZArrayLdElema(L_2, 0)) = (t7 *)L_3;
		VirtFuncInvoker2< t7 *, t7 *, t69* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return;
	}
}
#include "t618.h"
#ifndef _MSC_VER
#else
#endif
#include "t618MD.h"



extern "C" void m3085 (t618 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern "C" void m3086 (t618 * __this, t7 * p0, t7 * p1, const MethodInfo* method)
{
	{
		t616 * L_0 = (__this->f0);
		t7 * L_1 = p0;
		t7 * L_2 = p1;
		VirtActionInvoker2< t7 *, t7 * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t733.h"
#include "t734.h"
#include "t733MD.h"


extern TypeInfo* t69_TI_var;
extern TypeInfo* t619_TI_var;
extern "C" void m3087 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t619_SFs*)t619_TI_var->static_fields)->f0 = ((t69*)SZArrayNew(t69_TI_var, 0));
		return;
	}
}
extern "C" t7* m3088 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	{
		t347 * L_0 = p0;
		t735* L_1 = (t735*)VirtFuncInvoker0< t735* >::Invoke(71 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors() */, L_0);
		return (t7*)L_1;
	}
}
extern TypeInfo* t619_TI_var;
extern TypeInfo* t682_TI_var;
extern TypeInfo* t737_TI_var;
extern TypeInfo* t50_TI_var;
extern TypeInfo* t88_TI_var;
extern "C" t612 * m3089 (t7 * __this , t347 * p0, t607* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		t682_TI_var = il2cpp_codegen_type_info_from_index(1019);
		t737_TI_var = il2cpp_codegen_type_info_from_index(1021);
		t50_TI_var = il2cpp_codegen_type_info_from_index(60);
		t88_TI_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	t7* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	t612 * V_3 = {0};
	t7* V_4 = {0};
	t736* V_5 = {0};
	t733 * V_6 = {0};
	t736* V_7 = {0};
	int32_t V_8 = 0;
	t612 * V_9 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t347 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t7* L_1 = m3088(NULL, L_0, NULL);
		V_0 = L_1;
		t7* L_2 = V_0;
		t7* L_3 = (t7*)InterfaceFuncInvoker0< t7* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, t682_TI_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			t7* L_4 = V_4;
			t612 * L_5 = (t612 *)InterfaceFuncInvoker0< t612 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, t737_TI_var, L_4);
			V_3 = L_5;
			t612 * L_6 = V_3;
			t736* L_7 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			t607* L_8 = p1;
			t736* L_9 = V_5;
			if ((((int32_t)(((int32_t)(((t52 *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((t52 *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			t612 * L_10 = V_3;
			t736* L_11 = (t736*)VirtFuncInvoker0< t736* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			t736* L_12 = V_7;
			int32_t L_13 = V_8;
			int32_t L_14 = L_13;
			V_6 = (*(t733 **)(t733 **)SZArrayLdElema(L_12, L_14));
			t733 * L_15 = V_6;
			t347 * L_16 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			t607* L_17 = p1;
			int32_t L_18 = V_1;
			int32_t L_19 = L_18;
			if ((((t7*)(t347 *)L_16) == ((t7*)(t347 *)(*(t347 **)(t347 **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			t736* L_22 = V_7;
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t52 *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			t612 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			t7* L_25 = V_4;
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, t50_TI_var, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t65 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			t7* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			t7* L_28 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, t88_TI_var, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(t65 *)
	}

IL_00a3:
	{
		return (t612 *)NULL;
	}

IL_00a5:
	{
		t612 * L_29 = V_9;
		return L_29;
	}
}
extern "C" t7* m3090 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	{
		t347 * L_0 = p0;
		t738* L_1 = (t738*)VirtFuncInvoker1< t738*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (t7*)L_1;
	}
}
extern "C" t7* m3091 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	{
		t347 * L_0 = p0;
		t739* L_1 = (t739*)VirtFuncInvoker1< t739*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (t7*)L_1;
	}
}
extern "C" t614 * m3092 (t7 * __this , t685 * p0, const MethodInfo* method)
{
	{
		t685 * L_0 = p0;
		t614 * L_1 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
extern "C" t614 * m3093 (t7 * __this , t685 * p0, const MethodInfo* method)
{
	{
		t685 * L_0 = p0;
		t614 * L_1 = (t614 *)VirtFuncInvoker1< t614 *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
extern TypeInfo* t619_TI_var;
extern "C" t610 * m3094 (t7 * __this , t347 * p0, t607* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		t347 * L_0 = p0;
		t607* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t610 * L_2 = m3096(NULL, L_0, L_1, NULL);
		return L_2;
	}
}
extern TypeInfo* t611_TI_var;
extern TypeInfo* t610_TI_var;
extern const MethodInfo* m3078_MI_var;
extern "C" t610 * m3095 (t7 * __this , t612 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t611_TI_var = il2cpp_codegen_type_info_from_index(1022);
		t610_TI_var = il2cpp_codegen_type_info_from_index(991);
		m3078_MI_var = il2cpp_codegen_method_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	t611 * V_0 = {0};
	{
		t611 * L_0 = (t611 *)il2cpp_codegen_object_new (t611_TI_var);
		m3077(L_0, NULL);
		V_0 = L_0;
		t611 * L_1 = V_0;
		t612 * L_2 = p0;
		L_1->f0 = L_2;
		t611 * L_3 = V_0;
		t226 L_4 = { (void*)m3078_MI_var };
		t610 * L_5 = (t610 *)il2cpp_codegen_object_new (t610_TI_var);
		m3073(L_5, L_3, L_4, NULL);
		return L_5;
	}
}
extern TypeInfo* t619_TI_var;
extern "C" t610 * m3096 (t7 * __this , t347 * p0, t607* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	t612 * V_0 = {0};
	t610 * G_B3_0 = {0};
	{
		t347 * L_0 = p0;
		t607* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t612 * L_2 = m3089(NULL, L_0, L_1, NULL);
		V_0 = L_2;
		t612 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((t610 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		t612 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t610 * L_5 = m3095(NULL, L_4, NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t619_TI_var;
extern "C" t608 * m3097 (t7 * __this , t685 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		t685 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t608 * L_1 = m3099(NULL, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t619_TI_var;
extern "C" t608 * m3098 (t7 * __this , t616 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		t616 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t608 * L_1 = m3100(NULL, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t613_TI_var;
extern TypeInfo* t619_TI_var;
extern TypeInfo* t608_TI_var;
extern const MethodInfo* m3080_MI_var;
extern "C" t608 * m3099 (t7 * __this , t685 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t613_TI_var = il2cpp_codegen_type_info_from_index(1023);
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		t608_TI_var = il2cpp_codegen_type_info_from_index(993);
		m3080_MI_var = il2cpp_codegen_method_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	t613 * V_0 = {0};
	{
		t613 * L_0 = (t613 *)il2cpp_codegen_object_new (t613_TI_var);
		m3079(L_0, NULL);
		V_0 = L_0;
		t613 * L_1 = V_0;
		t685 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t614 * L_3 = m3092(NULL, L_2, NULL);
		L_1->f0 = L_3;
		t613 * L_4 = V_0;
		t226 L_5 = { (void*)m3080_MI_var };
		t608 * L_6 = (t608 *)il2cpp_codegen_object_new (t608_TI_var);
		m3065(L_6, L_4, L_5, NULL);
		return L_6;
	}
}
extern TypeInfo* t615_TI_var;
extern TypeInfo* t608_TI_var;
extern const MethodInfo* m3082_MI_var;
extern "C" t608 * m3100 (t7 * __this , t616 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t615_TI_var = il2cpp_codegen_type_info_from_index(1024);
		t608_TI_var = il2cpp_codegen_type_info_from_index(993);
		m3082_MI_var = il2cpp_codegen_method_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	t615 * V_0 = {0};
	{
		t615 * L_0 = (t615 *)il2cpp_codegen_object_new (t615_TI_var);
		m3081(L_0, NULL);
		V_0 = L_0;
		t615 * L_1 = V_0;
		t616 * L_2 = p0;
		L_1->f0 = L_2;
		t615 * L_3 = V_0;
		t226 L_4 = { (void*)m3082_MI_var };
		t608 * L_5 = (t608 *)il2cpp_codegen_object_new (t608_TI_var);
		m3065(L_5, L_3, L_4, NULL);
		return L_5;
	}
}
extern TypeInfo* t619_TI_var;
extern "C" t609 * m3101 (t7 * __this , t685 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		t685 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t609 * L_1 = m3103(NULL, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t619_TI_var;
extern "C" t609 * m3102 (t7 * __this , t616 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		t616 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t609 * L_1 = m3104(NULL, L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t617_TI_var;
extern TypeInfo* t619_TI_var;
extern TypeInfo* t609_TI_var;
extern const MethodInfo* m3084_MI_var;
extern "C" t609 * m3103 (t7 * __this , t685 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t617_TI_var = il2cpp_codegen_type_info_from_index(1025);
		t619_TI_var = il2cpp_codegen_type_info_from_index(1004);
		t609_TI_var = il2cpp_codegen_type_info_from_index(996);
		m3084_MI_var = il2cpp_codegen_method_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	t617 * V_0 = {0};
	{
		t617 * L_0 = (t617 *)il2cpp_codegen_object_new (t617_TI_var);
		m3083(L_0, NULL);
		V_0 = L_0;
		t617 * L_1 = V_0;
		t685 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t619_TI_var);
		t614 * L_3 = m3093(NULL, L_2, NULL);
		L_1->f0 = L_3;
		t617 * L_4 = V_0;
		t226 L_5 = { (void*)m3084_MI_var };
		t609 * L_6 = (t609 *)il2cpp_codegen_object_new (t609_TI_var);
		m3069(L_6, L_4, L_5, NULL);
		return L_6;
	}
}
extern TypeInfo* t618_TI_var;
extern TypeInfo* t609_TI_var;
extern const MethodInfo* m3086_MI_var;
extern "C" t609 * m3104 (t7 * __this , t616 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t618_TI_var = il2cpp_codegen_type_info_from_index(1026);
		t609_TI_var = il2cpp_codegen_type_info_from_index(996);
		m3086_MI_var = il2cpp_codegen_method_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	t618 * V_0 = {0};
	{
		t618 * L_0 = (t618 *)il2cpp_codegen_object_new (t618_TI_var);
		m3085(L_0, NULL);
		V_0 = L_0;
		t618 * L_1 = V_0;
		t616 * L_2 = p0;
		L_1->f0 = L_2;
		t618 * L_3 = V_0;
		t226 L_4 = { (void*)m3086_MI_var };
		t609 * L_5 = (t609 *)il2cpp_codegen_object_new (t609_TI_var);
		m3069(L_5, L_3, L_4, NULL);
		return L_5;
	}
}
#include "t620.h"
#ifndef _MSC_VER
#else
#endif
#include "t620MD.h"

#include "t529MD.h"


extern "C" void m3105 (t620 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t621.h"
#ifndef _MSC_VER
#else
#endif
#include "t621MD.h"



extern "C" void m3106 (t621 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		__this->f0 = 1;
		return;
	}
}
#include "t622.h"
#ifndef _MSC_VER
#else
#endif
#include "t622MD.h"

#include "t430.h"
#include "t431.h"
#include "t425.h"
#include "t740.h"
#include "t741.h"
#include "t740MD.h"
#include "t741MD.h"


extern TypeInfo* t623_TI_var;
extern TypeInfo* t622_TI_var;
extern TypeInfo* t624_TI_var;
extern TypeInfo* t625_TI_var;
extern "C" void m3107 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t623_TI_var = il2cpp_codegen_type_info_from_index(1027);
		t622_TI_var = il2cpp_codegen_type_info_from_index(1028);
		t624_TI_var = il2cpp_codegen_type_info_from_index(1029);
		t625_TI_var = il2cpp_codegen_type_info_from_index(1030);
		s_Il2CppMethodIntialized = true;
	}
	{
		((t622_SFs*)t622_TI_var->static_fields)->f0 = ((t623*)SZArrayNew(t623_TI_var, 1));
		((t622_SFs*)t622_TI_var->static_fields)->f1 = ((t624*)SZArrayNew(t624_TI_var, 1));
		((t622_SFs*)t622_TI_var->static_fields)->f2 = ((t625*)SZArrayNew(t625_TI_var, 1));
		return;
	}
}
extern const Il2CppType* t5_0_0_0_var;
extern const Il2CppType* t430_0_0_0_var;
extern TypeInfo* t740_TI_var;
extern TypeInfo* t347_TI_var;
extern const MethodInfo* m3335_MI_var;
extern const MethodInfo* m3336_MI_var;
extern const MethodInfo* m3337_MI_var;
extern "C" t347 * m3108 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_0_0_0_var = il2cpp_codegen_type_from_index(54);
		t430_0_0_0_var = il2cpp_codegen_type_from_index(377);
		t740_TI_var = il2cpp_codegen_type_info_from_index(1031);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		m3335_MI_var = il2cpp_codegen_method_info_from_index(2147483937);
		m3336_MI_var = il2cpp_codegen_method_info_from_index(2147483938);
		m3337_MI_var = il2cpp_codegen_method_info_from_index(2147483939);
		s_Il2CppMethodIntialized = true;
	}
	t740 * V_0 = {0};
	t347 * V_1 = {0};
	t69* V_2 = {0};
	{
		t740 * L_0 = (t740 *)il2cpp_codegen_object_new (t740_TI_var);
		m3335(L_0, m3335_MI_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		t740 * L_1 = V_0;
		t347 * L_2 = p0;
		m3336(L_1, L_2, m3336_MI_var);
		t347 * L_3 = p0;
		t347 * L_4 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		p0 = L_4;
	}

IL_001a:
	{
		t347 * L_5 = p0;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		t347 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_7 = m1613(NULL, LoadTypeToken(t5_0_0_0_var), NULL);
		if ((!(((t7*)(t347 *)L_6) == ((t7*)(t347 *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (t347 *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		t740 * L_8 = V_0;
		t347 * L_9 = m3337(L_8, m3337_MI_var);
		V_1 = L_9;
		t347 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_11 = m1613(NULL, LoadTypeToken(t430_0_0_0_var), NULL);
		t69* L_12 = (t69*)VirtFuncInvoker2< t69*, t347 *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		t69* L_13 = V_2;
		if (!(((int32_t)(((t52 *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		t347 * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		t740 * L_15 = V_0;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (t347 *)NULL;
	}
}
extern const Il2CppType* t425_0_0_0_var;
extern const Il2CppType* t5_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t425_TI_var;
extern TypeInfo* t607_TI_var;
extern TypeInfo* t741_TI_var;
extern const MethodInfo* m3338_MI_var;
extern const MethodInfo* m3339_MI_var;
extern "C" t607* m3109 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t425_0_0_0_var = il2cpp_codegen_type_from_index(375);
		t5_0_0_0_var = il2cpp_codegen_type_from_index(54);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t425_TI_var = il2cpp_codegen_type_info_from_index(375);
		t607_TI_var = il2cpp_codegen_type_info_from_index(1003);
		t741_TI_var = il2cpp_codegen_type_info_from_index(1032);
		m3338_MI_var = il2cpp_codegen_method_info_from_index(2147483940);
		m3339_MI_var = il2cpp_codegen_method_info_from_index(2147483941);
		s_Il2CppMethodIntialized = true;
	}
	t741 * V_0 = {0};
	t69* V_1 = {0};
	int32_t V_2 = 0;
	t425 * V_3 = {0};
	t607* V_4 = {0};
	{
		V_0 = (t741 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		t347 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_1 = m1613(NULL, LoadTypeToken(t425_0_0_0_var), NULL);
		t69* L_2 = (t69*)VirtFuncInvoker2< t69*, t347 *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		t69* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_3 = ((t425 *)Castclass((*(t7 **)(t7 **)SZArrayLdElema(L_3, L_5)), t425_TI_var));
		t741 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		t69* L_7 = V_1;
		if ((!(((uint32_t)(((int32_t)(((t52 *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		t347 * L_8 = p0;
		t347 * L_9 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_10 = m1613(NULL, LoadTypeToken(t5_0_0_0_var), NULL);
		if ((!(((t7*)(t347 *)L_9) == ((t7*)(t347 *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		t607* L_11 = ((t607*)SZArrayNew(t607_TI_var, 3));
		t425 * L_12 = V_3;
		t347 * L_13 = (L_12->f0);
		ArrayElementTypeCheck (L_11, L_13);
		*((t347 **)(t347 **)SZArrayLdElema(L_11, 0)) = (t347 *)L_13;
		t607* L_14 = L_11;
		t425 * L_15 = V_3;
		t347 * L_16 = (L_15->f1);
		ArrayElementTypeCheck (L_14, L_16);
		*((t347 **)(t347 **)SZArrayLdElema(L_14, 1)) = (t347 *)L_16;
		t607* L_17 = L_14;
		t425 * L_18 = V_3;
		t347 * L_19 = (L_18->f2);
		ArrayElementTypeCheck (L_17, L_19);
		*((t347 **)(t347 **)SZArrayLdElema(L_17, 2)) = (t347 *)L_19;
		V_4 = L_17;
		t607* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		t741 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		t741 * L_22 = (t741 *)il2cpp_codegen_object_new (t741_TI_var);
		m3338(L_22, m3338_MI_var);
		V_0 = L_22;
	}

IL_007f:
	{
		t425 * L_23 = V_3;
		t347 * L_24 = (L_23->f0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		t741 * L_25 = V_0;
		t425 * L_26 = V_3;
		t347 * L_27 = (L_26->f0);
		VirtActionInvoker1< t347 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		t425 * L_28 = V_3;
		t347 * L_29 = (L_28->f1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		t741 * L_30 = V_0;
		t425 * L_31 = V_3;
		t347 * L_32 = (L_31->f1);
		VirtActionInvoker1< t347 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		t425 * L_33 = V_3;
		t347 * L_34 = (L_33->f2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		t741 * L_35 = V_0;
		t425 * L_36 = V_3;
		t347 * L_37 = (L_36->f2);
		VirtActionInvoker1< t347 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		t69* L_40 = V_1;
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((t52 *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		t347 * L_41 = p0;
		t347 * L_42 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_41);
		p0 = L_42;
	}

IL_00d9:
	{
		t347 * L_43 = p0;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		t347 * L_44 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_45 = m1613(NULL, LoadTypeToken(t5_0_0_0_var), NULL);
		if ((!(((t7*)(t347 *)L_44) == ((t7*)(t347 *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		t741 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (t607*)NULL;
	}

IL_00f7:
	{
		t741 * L_47 = V_0;
		t607* L_48 = m3339(L_47, m3339_MI_var);
		return L_48;
	}
}
extern const Il2CppType* t431_0_0_0_var;
extern const Il2CppType* t5_0_0_0_var;
extern TypeInfo* t347_TI_var;
extern "C" bool m3110 (t7 * __this , t347 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t431_0_0_0_var = il2cpp_codegen_type_from_index(378);
		t5_0_0_0_var = il2cpp_codegen_type_from_index(54);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		t347 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_1 = m1613(NULL, LoadTypeToken(t431_0_0_0_var), NULL);
		t69* L_2 = (t69*)VirtFuncInvoker2< t69*, t347 *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		t69* L_3 = V_0;
		if (!(((int32_t)(((t52 *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		t347 * L_4 = p0;
		t347 * L_5 = (t347 *)VirtFuncInvoker0< t347 * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		p0 = L_5;
	}

IL_0029:
	{
		t347 * L_6 = p0;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		t347 * L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_8 = m1613(NULL, LoadTypeToken(t5_0_0_0_var), NULL);
		if ((!(((t7*)(t347 *)L_7) == ((t7*)(t347 *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t430MD.h"



extern "C" void m2033 (t430 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t425MD.h"



extern "C" void m2010 (t425 * __this, t347 * p0, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		t347 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t420.h"
#ifndef _MSC_VER
#else
#endif
#include "t420MD.h"



extern "C" void m1994 (t420 * __this, t47* p0, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m2028 (t420 * __this, t47* p0, int32_t p1, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		t47* L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t431MD.h"



extern "C" void m2034 (t431 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#include "t626.h"
#ifndef _MSC_VER
#else
#endif
#include "t626MD.h"

#include "t742.h"
#include "t743.h"


extern "C" void m3111 (t626 * __this, const MethodInfo* method)
{
	{
		m162(__this, NULL);
		return;
	}
}
extern TypeInfo* t69_TI_var;
extern "C" t7 * m3112 (t7 * __this , t7 * p0, t47* p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		V_0 = (t69*)NULL;
		t7 * L_0 = p2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t69* L_1 = V_0;
		t7 * L_2 = p2;
		ArrayElementTypeCheck (L_1, L_2);
		*((t7 **)(t7 **)SZArrayLdElema(L_1, 0)) = (t7 *)L_2;
	}

IL_0013:
	{
		t7 * L_3 = p0;
		t347 * L_4 = m1520(L_3, NULL);
		t47* L_5 = p1;
		t7 * L_6 = p0;
		t69* L_7 = V_0;
		t7 * L_8 = (t7 *)VirtFuncInvoker8< t7 *, t47*, int32_t, t742 *, t7 *, t69*, t744*, t709 *, t48* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (t742 *)NULL, L_6, L_7, (t744*)(t744*)NULL, (t709 *)NULL, (t48*)(t48*)NULL);
		return L_8;
	}
}
extern TypeInfo* t69_TI_var;
extern "C" t7 * m3113 (t7 * __this , t347 * p0, t47* p1, t7 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t69_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	t69* V_0 = {0};
	{
		V_0 = (t69*)NULL;
		t7 * L_0 = p2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((t69*)SZArrayNew(t69_TI_var, 1));
		t69* L_1 = V_0;
		t7 * L_2 = p2;
		ArrayElementTypeCheck (L_1, L_2);
		*((t7 **)(t7 **)SZArrayLdElema(L_1, 0)) = (t7 *)L_2;
	}

IL_0013:
	{
		t347 * L_3 = p0;
		t47* L_4 = p1;
		t69* L_5 = V_0;
		t7 * L_6 = (t7 *)VirtFuncInvoker8< t7 *, t47*, int32_t, t742 *, t7 *, t69*, t744*, t709 *, t48* >::Invoke(73 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (t742 *)NULL, NULL, L_5, (t744*)(t744*)NULL, (t709 *)NULL, (t48*)(t48*)NULL);
		return L_6;
	}
}
#include "t627.h"
#ifndef _MSC_VER
#else
#endif
#include "t627MD.h"



extern "C" void m3114 (t627 * __this, const MethodInfo* method)
{
	{
		m3241(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
