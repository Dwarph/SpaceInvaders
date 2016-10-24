#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t59;
struct t59_marshaled;

extern "C" void m164 (t59 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t59_marshal(const t59& unmarshaled, t59_marshaled& marshaled);
void t59_marshal_back(const t59_marshaled& marshaled, t59& unmarshaled);
void t59_marshal_cleanup(t59_marshaled& marshaled);
