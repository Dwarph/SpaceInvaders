#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2790;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17050_gshared (t2790 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17050(__this, p0, p1, method) (( void (*) (t2790 *, t7 *, t226, const MethodInfo*))m17050_gshared)(__this, p0, p1, method)
extern "C" void m17051_gshared (t2790 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m17051(__this, p0, p1, method) (( void (*) (t2790 *, t7 *, t7 *, const MethodInfo*))m17051_gshared)(__this, p0, p1, method)
extern "C" t7 * m17052_gshared (t2790 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17052(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2790 *, t7 *, t7 *, t213 *, t7 *, const MethodInfo*))m17052_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m17053_gshared (t2790 * __this, t7 * p0, const MethodInfo* method);
#define m17053(__this, p0, method) (( void (*) (t2790 *, t7 *, const MethodInfo*))m17053_gshared)(__this, p0, method)
