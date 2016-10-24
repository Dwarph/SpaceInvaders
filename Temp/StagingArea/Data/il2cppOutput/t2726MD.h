#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2726;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m16218_gshared (t2726 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16218(__this, p0, p1, method) (( void (*) (t2726 *, t7 *, t226, const MethodInfo*))m16218_gshared)(__this, p0, p1, method)
extern "C" t7 * m16220_gshared (t2726 * __this, t7 * p0, const MethodInfo* method);
#define m16220(__this, p0, method) (( t7 * (*) (t2726 *, t7 *, const MethodInfo*))m16220_gshared)(__this, p0, method)
extern "C" t7 * m16222_gshared (t2726 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m16222(__this, p0, p1, p2, method) (( t7 * (*) (t2726 *, t7 *, t213 *, t7 *, const MethodInfo*))m16222_gshared)(__this, p0, p1, p2, method)
extern "C" t7 * m16224_gshared (t2726 * __this, t7 * p0, const MethodInfo* method);
#define m16224(__this, p0, method) (( t7 * (*) (t2726 *, t7 *, const MethodInfo*))m16224_gshared)(__this, p0, method)
