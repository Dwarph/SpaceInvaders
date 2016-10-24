#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2830;

extern "C" void m17470_gshared (t2830 * __this, const MethodInfo* method);
#define m17470(__this, method) (( void (*) (t2830 *, const MethodInfo*))m17470_gshared)(__this, method)
extern "C" int32_t m17471_gshared (t2830 * __this, uint8_t p0, const MethodInfo* method);
#define m17471(__this, p0, method) (( int32_t (*) (t2830 *, uint8_t, const MethodInfo*))m17471_gshared)(__this, p0, method)
extern "C" bool m17472_gshared (t2830 * __this, uint8_t p0, uint8_t p1, const MethodInfo* method);
#define m17472(__this, p0, p1, method) (( bool (*) (t2830 *, uint8_t, uint8_t, const MethodInfo*))m17472_gshared)(__this, p0, p1, method)
