#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2474;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m12639_gshared (t2474 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12639(__this, p0, p1, method) (( void (*) (t2474 *, t7 *, t226, const MethodInfo*))m12639_gshared)(__this, p0, p1, method)
extern "C" t7 * m12640_gshared (t2474 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
#define m12640(__this, p0, p1, method) (( t7 * (*) (t2474 *, t7 *, int32_t, const MethodInfo*))m12640_gshared)(__this, p0, p1, method)
extern "C" t7 * m12641_gshared (t2474 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12641(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2474 *, t7 *, int32_t, t213 *, t7 *, const MethodInfo*))m12641_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m12642_gshared (t2474 * __this, t7 * p0, const MethodInfo* method);
#define m12642(__this, p0, method) (( t7 * (*) (t2474 *, t7 *, const MethodInfo*))m12642_gshared)(__this, p0, method)
