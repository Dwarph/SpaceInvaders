#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2468;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"

extern "C" void m12666_gshared (t2468 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12666(__this, p0, p1, method) (( void (*) (t2468 *, t7 *, t226, const MethodInfo*))m12666_gshared)(__this, p0, p1, method)
extern "C" t1083  m12667_gshared (t2468 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
#define m12667(__this, p0, p1, method) (( t1083  (*) (t2468 *, t7 *, int32_t, const MethodInfo*))m12667_gshared)(__this, p0, p1, method)
extern "C" t7 * m12668_gshared (t2468 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12668(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2468 *, t7 *, int32_t, t213 *, t7 *, const MethodInfo*))m12668_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m12669_gshared (t2468 * __this, t7 * p0, const MethodInfo* method);
#define m12669(__this, p0, method) (( t1083  (*) (t2468 *, t7 *, const MethodInfo*))m12669_gshared)(__this, p0, method)
