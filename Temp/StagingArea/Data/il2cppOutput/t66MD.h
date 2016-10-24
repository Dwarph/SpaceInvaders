#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t66;
struct t66_marshaled;
struct t47;
struct t7;
#include "t383.h"
#include "t67.h"
#include "t70.h"
#include "t226.h"

extern "C" void m2675 (t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t66 * m2676 (t7 * __this , t66 * p0, t67  p1, t70  p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t66 * m2677 (t7 * __this , t66 * p0, t67 * p1, t70 * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m201 (t7 * __this , t66 * p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m168 (t7 * __this , t66 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2678 (t7 * __this , t66 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1824 (t7 * __this , t66 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t47* m184 (t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m180 (t66 * __this, t47* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1788 (t66 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t47* m229 (t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m226 (t66 * __this, t7 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m228 (t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2679 (t7 * __this , t66 * p0, t66 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2680 (t7 * __this , t66 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2681 (t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t226 m2682 (t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t66 * m178 (t7 * __this , t66 * p0, t67  p1, t70  p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2683 (t7 * __this , t7 * p0, t47* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1450 (t7 * __this , t66 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m206 (t7 * __this , t66 * p0, t66 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m170 (t7 * __this , t66 * p0, t66 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t66_marshal(const t66& unmarshaled, t66_marshaled& marshaled);
void t66_marshal_back(const t66_marshaled& marshaled, t66& unmarshaled);
void t66_marshal_cleanup(t66_marshaled& marshaled);
