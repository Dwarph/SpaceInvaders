#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2675;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2665.h"

extern "C" void m15578_gshared (t2675 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15578(__this, p0, p1, method) (( void (*) (t2675 *, t7 *, t226, const MethodInfo*))m15578_gshared)(__this, p0, p1, method)
extern "C" t2665  m15579_gshared (t2675 * __this, t7 * p0, int64_t p1, const MethodInfo* method);
#define m15579(__this, p0, p1, method) (( t2665  (*) (t2675 *, t7 *, int64_t, const MethodInfo*))m15579_gshared)(__this, p0, p1, method)
extern "C" t7 * m15580_gshared (t2675 * __this, t7 * p0, int64_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m15580(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2675 *, t7 *, int64_t, t213 *, t7 *, const MethodInfo*))m15580_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2665  m15581_gshared (t2675 * __this, t7 * p0, const MethodInfo* method);
#define m15581(__this, p0, method) (( t2665  (*) (t2675 *, t7 *, const MethodInfo*))m15581_gshared)(__this, p0, method)
