#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t491;
struct t491_marshaled;
struct t47;
struct t347;

extern "C" void m2173 (t491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2174 (t7 * __this , t491 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t491 * m2175 (t7 * __this , t47* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t491 * m2176 (t7 * __this , t347 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t491 * m2177 (t7 * __this , t347 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t491_marshal(const t491& unmarshaled, t491_marshaled& marshaled);
void t491_marshal_back(const t491_marshaled& marshaled, t491& unmarshaled);
void t491_marshal_cleanup(t491_marshaled& marshaled);
