#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2493;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"

extern "C" void m12993_gshared (t2493 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12993(__this, p0, p1, method) (( void (*) (t2493 *, t7 *, t226, const MethodInfo*))m12993_gshared)(__this, p0, p1, method)
extern "C" t1083  m12994_gshared (t2493 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m12994(__this, p0, p1, method) (( t1083  (*) (t2493 *, t7 *, t7 *, const MethodInfo*))m12994_gshared)(__this, p0, p1, method)
extern "C" t7 * m12995_gshared (t2493 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12995(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2493 *, t7 *, t7 *, t213 *, t7 *, const MethodInfo*))m12995_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m12996_gshared (t2493 * __this, t7 * p0, const MethodInfo* method);
#define m12996(__this, p0, method) (( t1083  (*) (t2493 *, t7 *, const MethodInfo*))m12996_gshared)(__this, p0, method)
