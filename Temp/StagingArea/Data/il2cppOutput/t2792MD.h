#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2792;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17057_gshared (t2792 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17057(__this, p0, p1, method) (( void (*) (t2792 *, t7 *, t226, const MethodInfo*))m17057_gshared)(__this, p0, p1, method)
extern "C" void m17058_gshared (t2792 * __this, t7 * p0, t7 * p1, t7 * p2, const MethodInfo* method);
#define m17058(__this, p0, p1, p2, method) (( void (*) (t2792 *, t7 *, t7 *, t7 *, const MethodInfo*))m17058_gshared)(__this, p0, p1, p2, method)
extern "C" t7 * m17059_gshared (t2792 * __this, t7 * p0, t7 * p1, t7 * p2, t213 * p3, t7 * p4, const MethodInfo* method);
#define m17059(__this, p0, p1, p2, p3, p4, method) (( t7 * (*) (t2792 *, t7 *, t7 *, t7 *, t213 *, t7 *, const MethodInfo*))m17059_gshared)(__this, p0, p1, p2, p3, p4, method)
extern "C" void m17060_gshared (t2792 * __this, t7 * p0, const MethodInfo* method);
#define m17060(__this, p0, method) (( void (*) (t2792 *, t7 *, const MethodInfo*))m17060_gshared)(__this, p0, method)
