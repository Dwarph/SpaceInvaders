#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2453;

extern "C" void m12352_gshared (t2453 * __this, const MethodInfo* method);
#define m12352(__this, method) (( void (*) (t2453 *, const MethodInfo*))m12352_gshared)(__this, method)
extern "C" int32_t m12353_gshared (t2453 * __this, int32_t p0, const MethodInfo* method);
#define m12353(__this, p0, method) (( int32_t (*) (t2453 *, int32_t, const MethodInfo*))m12353_gshared)(__this, p0, method)
extern "C" bool m12354_gshared (t2453 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m12354(__this, p0, p1, method) (( bool (*) (t2453 *, int32_t, int32_t, const MethodInfo*))m12354_gshared)(__this, p0, p1, method)
