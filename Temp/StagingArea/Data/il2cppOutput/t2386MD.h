#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2386;
struct t2388;
struct t7;

extern "C" void m11440_gshared (t2386 * __this, t2388 * p0, t2388 * p1, const MethodInfo* method);
#define m11440(__this, p0, p1, method) (( void (*) (t2386 *, t2388 *, t2388 *, const MethodInfo*))m11440_gshared)(__this, p0, p1, method)
extern "C" int32_t m11442_gshared (t2386 * __this, const MethodInfo* method);
#define m11442(__this, method) (( int32_t (*) (t2386 *, const MethodInfo*))m11442_gshared)(__this, method)
extern "C" void m11444_gshared (t2386 * __this, int32_t p0, const MethodInfo* method);
#define m11444(__this, p0, method) (( void (*) (t2386 *, int32_t, const MethodInfo*))m11444_gshared)(__this, p0, method)
extern "C" int32_t m11446_gshared (t2386 * __this, const MethodInfo* method);
#define m11446(__this, method) (( int32_t (*) (t2386 *, const MethodInfo*))m11446_gshared)(__this, method)
extern "C" int32_t m11448_gshared (t2386 * __this, const MethodInfo* method);
#define m11448(__this, method) (( int32_t (*) (t2386 *, const MethodInfo*))m11448_gshared)(__this, method)
extern "C" t7 * m11450_gshared (t2386 * __this, const MethodInfo* method);
#define m11450(__this, method) (( t7 * (*) (t2386 *, const MethodInfo*))m11450_gshared)(__this, method)
extern "C" void m11452_gshared (t2386 * __this, t7 * p0, const MethodInfo* method);
#define m11452(__this, p0, method) (( void (*) (t2386 *, t7 *, const MethodInfo*))m11452_gshared)(__this, p0, method)
