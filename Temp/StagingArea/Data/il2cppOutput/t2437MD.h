#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2437;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"

extern "C" void m12325_gshared (t2437 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12325(__this, p0, p1, method) (( void (*) (t2437 *, t7 *, t226, const MethodInfo*))m12325_gshared)(__this, p0, p1, method)
extern "C" t1083  m12326_gshared (t2437 * __this, int32_t p0, t7 * p1, const MethodInfo* method);
#define m12326(__this, p0, p1, method) (( t1083  (*) (t2437 *, int32_t, t7 *, const MethodInfo*))m12326_gshared)(__this, p0, p1, method)
extern "C" t7 * m12327_gshared (t2437 * __this, int32_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12327(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2437 *, int32_t, t7 *, t213 *, t7 *, const MethodInfo*))m12327_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m12328_gshared (t2437 * __this, t7 * p0, const MethodInfo* method);
#define m12328(__this, p0, method) (( t1083  (*) (t2437 *, t7 *, const MethodInfo*))m12328_gshared)(__this, p0, method)
