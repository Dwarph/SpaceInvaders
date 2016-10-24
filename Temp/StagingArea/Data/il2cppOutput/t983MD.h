#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t983;
struct t983_marshaled;
struct t47;
#include "t986.h"

extern "C" void m3947 (t983 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3948 (t983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3949 (t983 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3950 (t983 * __this, t47* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t47* m3951 (t7 * __this , int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t983_marshal(const t983& unmarshaled, t983_marshaled& marshaled);
void t983_marshal_back(const t983_marshaled& marshaled, t983& unmarshaled);
void t983_marshal_cleanup(t983_marshaled& marshaled);
