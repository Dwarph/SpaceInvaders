#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2404;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t130.h"

extern "C" void m11713_gshared (t2404 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m11713(__this, p0, p1, method) (( void (*) (t2404 *, t7 *, t226, const MethodInfo*))m11713_gshared)(__this, p0, p1, method)
extern "C" bool m11714_gshared (t2404 * __this, t130  p0, const MethodInfo* method);
#define m11714(__this, p0, method) (( bool (*) (t2404 *, t130 , const MethodInfo*))m11714_gshared)(__this, p0, method)
extern "C" t7 * m11715_gshared (t2404 * __this, t130  p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m11715(__this, p0, p1, p2, method) (( t7 * (*) (t2404 *, t130 , t213 *, t7 *, const MethodInfo*))m11715_gshared)(__this, p0, p1, p2, method)
extern "C" bool m11716_gshared (t2404 * __this, t7 * p0, const MethodInfo* method);
#define m11716(__this, p0, method) (( bool (*) (t2404 *, t7 *, const MethodInfo*))m11716_gshared)(__this, p0, method)
