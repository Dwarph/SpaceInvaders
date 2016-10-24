#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2840;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"

extern "C" void m17661_gshared (t2840 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17661(__this, p0, p1, method) (( void (*) (t2840 *, t7 *, t226, const MethodInfo*))m17661_gshared)(__this, p0, p1, method)
extern "C" t1083  m17662_gshared (t2840 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m17662(__this, p0, p1, method) (( t1083  (*) (t2840 *, int32_t, int32_t, const MethodInfo*))m17662_gshared)(__this, p0, p1, method)
extern "C" t7 * m17663_gshared (t2840 * __this, int32_t p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17663(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2840 *, int32_t, int32_t, t213 *, t7 *, const MethodInfo*))m17663_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m17664_gshared (t2840 * __this, t7 * p0, const MethodInfo* method);
#define m17664(__this, p0, method) (( t1083  (*) (t2840 *, t7 *, const MethodInfo*))m17664_gshared)(__this, p0, method)
