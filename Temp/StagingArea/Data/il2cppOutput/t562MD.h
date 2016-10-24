#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t562;
struct t562_marshaled;
struct t7;

extern "C" bool m3162 (t562 * __this, t7 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3163 (t562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3164 (t7 * __this , t562 * p0, t562 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t562_marshal(const t562& unmarshaled, t562_marshaled& marshaled);
void t562_marshal_back(const t562_marshaled& marshaled, t562& unmarshaled);
void t562_marshal_cleanup(t562_marshaled& marshaled);
