#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2750;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"
#include "t2494.h"

extern "C" void m16726_gshared (t2750 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16726(__this, p0, p1, method) (( void (*) (t2750 *, t7 *, t226, const MethodInfo*))m16726_gshared)(__this, p0, p1, method)
extern "C" t1083  m16727_gshared (t2750 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
#define m16727(__this, p0, p1, method) (( t1083  (*) (t2750 *, t7 *, t2494 , const MethodInfo*))m16727_gshared)(__this, p0, p1, method)
extern "C" t7 * m16728_gshared (t2750 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m16728(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2750 *, t7 *, t2494 , t213 *, t7 *, const MethodInfo*))m16728_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m16729_gshared (t2750 * __this, t7 * p0, const MethodInfo* method);
#define m16729(__this, p0, method) (( t1083  (*) (t2750 *, t7 *, const MethodInfo*))m16729_gshared)(__this, p0, method)
