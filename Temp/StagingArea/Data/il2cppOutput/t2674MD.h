#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2674;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m15570_gshared (t2674 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15570(__this, p0, p1, method) (( void (*) (t2674 *, t7 *, t226, const MethodInfo*))m15570_gshared)(__this, p0, p1, method)
extern "C" int64_t m15571_gshared (t2674 * __this, t7 * p0, int64_t p1, const MethodInfo* method);
#define m15571(__this, p0, p1, method) (( int64_t (*) (t2674 *, t7 *, int64_t, const MethodInfo*))m15571_gshared)(__this, p0, p1, method)
extern "C" t7 * m15572_gshared (t2674 * __this, t7 * p0, int64_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m15572(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2674 *, t7 *, int64_t, t213 *, t7 *, const MethodInfo*))m15572_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int64_t m15573_gshared (t2674 * __this, t7 * p0, const MethodInfo* method);
#define m15573(__this, p0, method) (( int64_t (*) (t2674 *, t7 *, const MethodInfo*))m15573_gshared)(__this, p0, method)
