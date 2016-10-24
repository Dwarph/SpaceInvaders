#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1347;
struct t1347_marshaled;
#include "t1299.h"

extern "C" void m6568 (t1347 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1347_marshal(const t1347& unmarshaled, t1347_marshaled& marshaled);
void t1347_marshal_back(const t1347_marshaled& marshaled, t1347& unmarshaled);
void t1347_marshal_cleanup(t1347_marshaled& marshaled);
