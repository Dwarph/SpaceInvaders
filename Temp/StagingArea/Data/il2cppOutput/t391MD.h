#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t391;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m1840_gshared (t391 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m1840(__this, p0, p1, method) (( void (*) (t391 *, t7 *, t226, const MethodInfo*))m1840_gshared)(__this, p0, p1, method)
extern "C" void m13751_gshared (t391 * __this, float p0, const MethodInfo* method);
#define m13751(__this, p0, method) (( void (*) (t391 *, float, const MethodInfo*))m13751_gshared)(__this, p0, method)
extern "C" t7 * m13752_gshared (t391 * __this, float p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m13752(__this, p0, p1, p2, method) (( t7 * (*) (t391 *, float, t213 *, t7 *, const MethodInfo*))m13752_gshared)(__this, p0, p1, p2, method)
extern "C" void m13753_gshared (t391 * __this, t7 * p0, const MethodInfo* method);
#define m13753(__this, p0, method) (( void (*) (t391 *, t7 *, const MethodInfo*))m13753_gshared)(__this, p0, method)
