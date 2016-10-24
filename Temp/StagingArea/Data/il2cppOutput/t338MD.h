#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t338;
struct t7;
struct t97;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m11340_gshared (t338 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m11340(__this, p0, p1, method) (( void (*) (t338 *, t7 *, t226, const MethodInfo*))m11340_gshared)(__this, p0, p1, method)
extern "C" void m11342_gshared (t338 * __this, t7 * p0, t97 * p1, const MethodInfo* method);
#define m11342(__this, p0, p1, method) (( void (*) (t338 *, t7 *, t97 *, const MethodInfo*))m11342_gshared)(__this, p0, p1, method)
extern "C" t7 * m11344_gshared (t338 * __this, t7 * p0, t97 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m11344(__this, p0, p1, p2, p3, method) (( t7 * (*) (t338 *, t7 *, t97 *, t213 *, t7 *, const MethodInfo*))m11344_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m11346_gshared (t338 * __this, t7 * p0, const MethodInfo* method);
#define m11346(__this, p0, method) (( void (*) (t338 *, t7 *, const MethodInfo*))m11346_gshared)(__this, p0, method)
