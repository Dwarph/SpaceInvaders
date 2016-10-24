#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2754;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2494.h"

extern "C" void m16699_gshared (t2754 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16699(__this, p0, p1, method) (( void (*) (t2754 *, t7 *, t226, const MethodInfo*))m16699_gshared)(__this, p0, p1, method)
extern "C" t7 * m16700_gshared (t2754 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
#define m16700(__this, p0, p1, method) (( t7 * (*) (t2754 *, t7 *, t2494 , const MethodInfo*))m16700_gshared)(__this, p0, p1, method)
extern "C" t7 * m16701_gshared (t2754 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m16701(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2754 *, t7 *, t2494 , t213 *, t7 *, const MethodInfo*))m16701_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m16702_gshared (t2754 * __this, t7 * p0, const MethodInfo* method);
#define m16702(__this, p0, method) (( t7 * (*) (t2754 *, t7 *, const MethodInfo*))m16702_gshared)(__this, p0, method)
