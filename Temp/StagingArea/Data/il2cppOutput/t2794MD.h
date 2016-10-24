#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2794;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17064_gshared (t2794 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17064(__this, p0, p1, method) (( void (*) (t2794 *, t7 *, t226, const MethodInfo*))m17064_gshared)(__this, p0, p1, method)
extern "C" void m17065_gshared (t2794 * __this, t7 * p0, t7 * p1, t7 * p2, t7 * p3, const MethodInfo* method);
#define m17065(__this, p0, p1, p2, p3, method) (( void (*) (t2794 *, t7 *, t7 *, t7 *, t7 *, const MethodInfo*))m17065_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m17066_gshared (t2794 * __this, t7 * p0, t7 * p1, t7 * p2, t7 * p3, t213 * p4, t7 * p5, const MethodInfo* method);
#define m17066(__this, p0, p1, p2, p3, p4, p5, method) (( t7 * (*) (t2794 *, t7 *, t7 *, t7 *, t7 *, t213 *, t7 *, const MethodInfo*))m17066_gshared)(__this, p0, p1, p2, p3, p4, p5, method)
extern "C" void m17067_gshared (t2794 * __this, t7 * p0, const MethodInfo* method);
#define m17067(__this, p0, method) (( void (*) (t2794 *, t7 *, const MethodInfo*))m17067_gshared)(__this, p0, method)
