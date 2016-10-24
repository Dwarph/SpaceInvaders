#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2660;
#include "t379.h"

extern "C" void m15394_gshared (t2660 * __this, const MethodInfo* method);
#define m15394(__this, method) (( void (*) (t2660 *, const MethodInfo*))m15394_gshared)(__this, method)
extern "C" int32_t m15395_gshared (t2660 * __this, t379  p0, t379  p1, const MethodInfo* method);
#define m15395(__this, p0, p1, method) (( int32_t (*) (t2660 *, t379 , t379 , const MethodInfo*))m15395_gshared)(__this, p0, p1, method)
