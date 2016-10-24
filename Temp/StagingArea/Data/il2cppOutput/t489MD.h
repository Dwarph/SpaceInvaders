#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t489;
struct t489_marshaled;

extern "C" void m2714 (t489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t489_marshal(const t489& unmarshaled, t489_marshaled& marshaled);
void t489_marshal_back(const t489_marshaled& marshaled, t489& unmarshaled);
void t489_marshal_cleanup(t489_marshaled& marshaled);
