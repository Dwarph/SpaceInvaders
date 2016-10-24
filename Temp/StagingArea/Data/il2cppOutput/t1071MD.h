#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1071;
struct t1071_marshaled;
struct t47;

extern "C" void m4427 (t1071 * __this, t47* p0, t47* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1071_marshal(const t1071& unmarshaled, t1071_marshaled& marshaled);
void t1071_marshal_back(const t1071_marshaled& marshaled, t1071& unmarshaled);
void t1071_marshal_cleanup(t1071_marshaled& marshaled);
