#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1036;
struct t1036_marshaled;

extern "C" int32_t m4201 (t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m4202 (t1036 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4203 (t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m4204 (t1036 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1036_marshal(const t1036& unmarshaled, t1036_marshaled& marshaled);
void t1036_marshal_back(const t1036_marshaled& marshaled, t1036& unmarshaled);
void t1036_marshal_cleanup(t1036_marshaled& marshaled);
