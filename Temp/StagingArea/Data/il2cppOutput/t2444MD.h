#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2444;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m12298_gshared (t2444 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12298(__this, p0, p1, method) (( void (*) (t2444 *, t7 *, t226, const MethodInfo*))m12298_gshared)(__this, p0, p1, method)
extern "C" int32_t m12299_gshared (t2444 * __this, int32_t p0, t7 * p1, const MethodInfo* method);
#define m12299(__this, p0, p1, method) (( int32_t (*) (t2444 *, int32_t, t7 *, const MethodInfo*))m12299_gshared)(__this, p0, p1, method)
extern "C" t7 * m12300_gshared (t2444 * __this, int32_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12300(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2444 *, int32_t, t7 *, t213 *, t7 *, const MethodInfo*))m12300_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m12301_gshared (t2444 * __this, t7 * p0, const MethodInfo* method);
#define m12301(__this, p0, method) (( int32_t (*) (t2444 *, t7 *, const MethodInfo*))m12301_gshared)(__this, p0, method)
