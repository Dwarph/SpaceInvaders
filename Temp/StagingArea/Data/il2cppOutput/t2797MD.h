#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2797;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17076_gshared (t2797 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17076(__this, p0, p1, method) (( void (*) (t2797 *, t7 *, t226, const MethodInfo*))m17076_gshared)(__this, p0, p1, method)
extern "C" void m17077_gshared (t2797 * __this, int32_t p0, const MethodInfo* method);
#define m17077(__this, p0, method) (( void (*) (t2797 *, int32_t, const MethodInfo*))m17077_gshared)(__this, p0, method)
extern "C" t7 * m17078_gshared (t2797 * __this, int32_t p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m17078(__this, p0, p1, p2, method) (( t7 * (*) (t2797 *, int32_t, t213 *, t7 *, const MethodInfo*))m17078_gshared)(__this, p0, p1, p2, method)
extern "C" void m17079_gshared (t2797 * __this, t7 * p0, const MethodInfo* method);
#define m17079(__this, p0, method) (( void (*) (t2797 *, t7 *, const MethodInfo*))m17079_gshared)(__this, p0, method)
