#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2712;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m16004_gshared (t2712 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16004(__this, p0, p1, method) (( void (*) (t2712 *, t7 *, t226, const MethodInfo*))m16004_gshared)(__this, p0, p1, method)
extern "C" t7 * m16005_gshared (t2712 * __this, uint64_t p0, t7 * p1, const MethodInfo* method);
#define m16005(__this, p0, p1, method) (( t7 * (*) (t2712 *, uint64_t, t7 *, const MethodInfo*))m16005_gshared)(__this, p0, p1, method)
extern "C" t7 * m16006_gshared (t2712 * __this, uint64_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m16006(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2712 *, uint64_t, t7 *, t213 *, t7 *, const MethodInfo*))m16006_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m16007_gshared (t2712 * __this, t7 * p0, const MethodInfo* method);
#define m16007(__this, p0, method) (( t7 * (*) (t2712 *, t7 *, const MethodInfo*))m16007_gshared)(__this, p0, method)
