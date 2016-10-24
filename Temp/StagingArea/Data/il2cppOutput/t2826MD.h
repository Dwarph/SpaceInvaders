#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2826;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17447_gshared (t2826 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17447(__this, p0, p1, method) (( void (*) (t2826 *, t7 *, t226, const MethodInfo*))m17447_gshared)(__this, p0, p1, method)
extern "C" uint8_t m17448_gshared (t2826 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
#define m17448(__this, p0, p1, method) (( uint8_t (*) (t2826 *, t7 *, uint8_t, const MethodInfo*))m17448_gshared)(__this, p0, p1, method)
extern "C" t7 * m17449_gshared (t2826 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17449(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2826 *, t7 *, uint8_t, t213 *, t7 *, const MethodInfo*))m17449_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint8_t m17450_gshared (t2826 * __this, t7 * p0, const MethodInfo* method);
#define m17450(__this, p0, method) (( uint8_t (*) (t2826 *, t7 *, const MethodInfo*))m17450_gshared)(__this, p0, method)
