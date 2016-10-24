#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t322;
struct t322_marshaled;
#include "t74.h"
#include "t342.h"

extern "C" int32_t m1508 (t322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t74  m1510 (t322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m1509 (t322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t322_marshal(const t322& unmarshaled, t322_marshaled& marshaled);
void t322_marshal_back(const t322_marshaled& marshaled, t322& unmarshaled);
void t322_marshal_cleanup(t322_marshaled& marshaled);
