#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2449;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2438.h"

extern "C" void m12334_gshared (t2449 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12334(__this, p0, p1, method) (( void (*) (t2449 *, t7 *, t226, const MethodInfo*))m12334_gshared)(__this, p0, p1, method)
extern "C" t2438  m12335_gshared (t2449 * __this, int32_t p0, t7 * p1, const MethodInfo* method);
#define m12335(__this, p0, p1, method) (( t2438  (*) (t2449 *, int32_t, t7 *, const MethodInfo*))m12335_gshared)(__this, p0, p1, method)
extern "C" t7 * m12336_gshared (t2449 * __this, int32_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12336(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2449 *, int32_t, t7 *, t213 *, t7 *, const MethodInfo*))m12336_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2438  m12337_gshared (t2449 * __this, t7 * p0, const MethodInfo* method);
#define m12337(__this, p0, method) (( t2438  (*) (t2449 *, t7 *, const MethodInfo*))m12337_gshared)(__this, p0, method)
