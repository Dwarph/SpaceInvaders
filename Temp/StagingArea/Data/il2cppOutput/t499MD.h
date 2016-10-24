#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t499;
struct t499_marshaled;

extern "C" void m2210 (t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2211 (t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2212 (t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2213 (t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t499_marshal(const t499& unmarshaled, t499_marshaled& marshaled);
void t499_marshal_back(const t499_marshaled& marshaled, t499& unmarshaled);
void t499_marshal_cleanup(t499_marshaled& marshaled);
