#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2369;
struct t7;

extern "C" void m11267_gshared (t2369 * __this, const MethodInfo* method);
#define m11267(__this, method) (( void (*) (t2369 *, const MethodInfo*))m11267_gshared)(__this, method)
extern "C" int32_t m11268_gshared (t2369 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m11268(__this, p0, p1, method) (( int32_t (*) (t2369 *, t7 *, t7 *, const MethodInfo*))m11268_gshared)(__this, p0, p1, method)
