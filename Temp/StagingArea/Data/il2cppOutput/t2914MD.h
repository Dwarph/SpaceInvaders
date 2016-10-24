#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2914;
struct t7;
#include "t991.h"

extern "C" void m18039_gshared (t2914 * __this, const MethodInfo* method);
#define m18039(__this, method) (( void (*) (t2914 *, const MethodInfo*))m18039_gshared)(__this, method)
extern "C" void m18040_gshared (t7 * __this , const MethodInfo* method);
#define m18040(__this , method) (( void (*) (t7 * , const MethodInfo*))m18040_gshared)(__this , method)
extern "C" int32_t m18041_gshared (t2914 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m18041(__this, p0, p1, method) (( int32_t (*) (t2914 *, t7 *, t7 *, const MethodInfo*))m18041_gshared)(__this, p0, p1, method)
extern "C" t2914 * m18042_gshared (t7 * __this , const MethodInfo* method);
#define m18042(__this , method) (( t2914 * (*) (t7 * , const MethodInfo*))m18042_gshared)(__this , method)
