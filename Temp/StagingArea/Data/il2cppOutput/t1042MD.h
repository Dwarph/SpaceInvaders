#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1042;
struct t1042_marshaled;
struct t7;
#include "t1042.h"

extern "C" void m4236 (t1042 * __this, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t1042  m4237 (t7 * __this , const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4238 (t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4239 (t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4240 (t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4241 (t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4242 (t1042 * __this, t1042  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4243 (t1042 * __this, t1042  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4244 (t1042 * __this, t1042  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4245 (t1042 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4246 (t1042 * __this, t1042  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m4247 (t1042 * __this, t1042  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4248 (t1042 * __this, t7 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1042_marshal(const t1042& unmarshaled, t1042_marshaled& marshaled);
void t1042_marshal_back(const t1042_marshaled& marshaled, t1042& unmarshaled);
void t1042_marshal_cleanup(t1042_marshaled& marshaled);
