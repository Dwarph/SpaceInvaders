#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2915;
#include "t991.h"

extern "C" void m18043_gshared (t2915 * __this, const MethodInfo* method);
#define m18043(__this, method) (( void (*) (t2915 *, const MethodInfo*))m18043_gshared)(__this, method)
extern "C" int32_t m18044_gshared (t2915 * __this, t991  p0, t991  p1, const MethodInfo* method);
#define m18044(__this, p0, p1, method) (( int32_t (*) (t2915 *, t991 , t991 , const MethodInfo*))m18044_gshared)(__this, p0, p1, method)
