#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t483;
struct t483_marshaled;

extern "C" void m2601 (t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2602 (t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2603 (t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t483_marshal(const t483& unmarshaled, t483_marshaled& marshaled);
void t483_marshal_back(const t483_marshaled& marshaled, t483& unmarshaled);
void t483_marshal_cleanup(t483_marshaled& marshaled);
