#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2758;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2724.h"
#include "t2494.h"

extern "C" void m16730_gshared (t2758 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16730(__this, p0, p1, method) (( void (*) (t2758 *, t7 *, t226, const MethodInfo*))m16730_gshared)(__this, p0, p1, method)
extern "C" t2724  m16731_gshared (t2758 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
#define m16731(__this, p0, p1, method) (( t2724  (*) (t2758 *, t7 *, t2494 , const MethodInfo*))m16731_gshared)(__this, p0, p1, method)
extern "C" t7 * m16732_gshared (t2758 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m16732(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2758 *, t7 *, t2494 , t213 *, t7 *, const MethodInfo*))m16732_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2724  m16733_gshared (t2758 * __this, t7 * p0, const MethodInfo* method);
#define m16733(__this, p0, method) (( t2724  (*) (t2758 *, t7 *, const MethodInfo*))m16733_gshared)(__this, p0, method)
