#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t566;
struct t566_marshaled;
struct t47;

extern "C" t47* m2811 (t566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2812 (t566 * __this, t47* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t47* m2813 (t566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2814 (t566 * __this, t47* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t566_marshal(const t566& unmarshaled, t566_marshaled& marshaled);
void t566_marshal_back(const t566_marshaled& marshaled, t566& unmarshaled);
void t566_marshal_cleanup(t566_marshaled& marshaled);
