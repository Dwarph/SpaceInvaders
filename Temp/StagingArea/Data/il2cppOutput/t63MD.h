#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t63;
struct t63_marshaled;

extern "C" void m2170 (t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2171 (t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2172 (t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t63_marshal(const t63& unmarshaled, t63_marshaled& marshaled);
void t63_marshal_back(const t63_marshaled& marshaled, t63& unmarshaled);
void t63_marshal_cleanup(t63_marshaled& marshaled);
