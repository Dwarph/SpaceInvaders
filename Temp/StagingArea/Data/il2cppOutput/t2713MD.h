#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2713;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2703.h"

extern "C" void m16012_gshared (t2713 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16012(__this, p0, p1, method) (( void (*) (t2713 *, t7 *, t226, const MethodInfo*))m16012_gshared)(__this, p0, p1, method)
extern "C" t2703  m16013_gshared (t2713 * __this, uint64_t p0, t7 * p1, const MethodInfo* method);
#define m16013(__this, p0, p1, method) (( t2703  (*) (t2713 *, uint64_t, t7 *, const MethodInfo*))m16013_gshared)(__this, p0, p1, method)
extern "C" t7 * m16014_gshared (t2713 * __this, uint64_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m16014(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2713 *, uint64_t, t7 *, t213 *, t7 *, const MethodInfo*))m16014_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2703  m16015_gshared (t2713 * __this, t7 * p0, const MethodInfo* method);
#define m16015(__this, p0, method) (( t2703  (*) (t2713 *, t7 *, const MethodInfo*))m16015_gshared)(__this, p0, method)
