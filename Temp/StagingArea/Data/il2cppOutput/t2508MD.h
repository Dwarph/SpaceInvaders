#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2508;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m13105_gshared (t2508 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m13105(__this, p0, p1, method) (( void (*) (t2508 *, t7 *, t226, const MethodInfo*))m13105_gshared)(__this, p0, p1, method)
extern "C" void m13107_gshared (t2508 * __this, t7 * p0, const MethodInfo* method);
#define m13107(__this, p0, method) (( void (*) (t2508 *, t7 *, const MethodInfo*))m13107_gshared)(__this, p0, method)
extern "C" t7 * m13109_gshared (t2508 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m13109(__this, p0, p1, p2, method) (( t7 * (*) (t2508 *, t7 *, t213 *, t7 *, const MethodInfo*))m13109_gshared)(__this, p0, p1, p2, method)
extern "C" void m13111_gshared (t2508 * __this, t7 * p0, const MethodInfo* method);
#define m13111(__this, p0, method) (( void (*) (t2508 *, t7 *, const MethodInfo*))m13111_gshared)(__this, p0, method)
