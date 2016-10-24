#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t561;
struct t561_marshaled;
struct t667;

extern "C" void m2785 (t561 * __this, t667* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2786 (t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2787 (t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2788 (t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2789 (t561 * __this, t667* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t561_marshal(const t561& unmarshaled, t561_marshaled& marshaled);
void t561_marshal_back(const t561_marshaled& marshaled, t561& unmarshaled);
void t561_marshal_cleanup(t561_marshaled& marshaled);
