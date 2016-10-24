#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2831;

extern "C" void m17473_gshared (t2831 * __this, const MethodInfo* method);
#define m17473(__this, method) (( void (*) (t2831 *, const MethodInfo*))m17473_gshared)(__this, method)
extern "C" int32_t m17474_gshared (t2831 * __this, uint8_t p0, const MethodInfo* method);
#define m17474(__this, p0, method) (( int32_t (*) (t2831 *, uint8_t, const MethodInfo*))m17474_gshared)(__this, p0, method)
extern "C" bool m17475_gshared (t2831 * __this, uint8_t p0, uint8_t p1, const MethodInfo* method);
#define m17475(__this, p0, p1, method) (( bool (*) (t2831 *, uint8_t, uint8_t, const MethodInfo*))m17475_gshared)(__this, p0, p1, method)
