#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t98;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t130.h"

extern "C" void m1449_gshared (t98 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m1449(__this, p0, p1, method) (( void (*) (t98 *, t7 *, t226, const MethodInfo*))m1449_gshared)(__this, p0, p1, method)
extern "C" int32_t m11337_gshared (t98 * __this, t130  p0, t130  p1, const MethodInfo* method);
#define m11337(__this, p0, p1, method) (( int32_t (*) (t98 *, t130 , t130 , const MethodInfo*))m11337_gshared)(__this, p0, p1, method)
extern "C" t7 * m11338_gshared (t98 * __this, t130  p0, t130  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m11338(__this, p0, p1, p2, p3, method) (( t7 * (*) (t98 *, t130 , t130 , t213 *, t7 *, const MethodInfo*))m11338_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m11339_gshared (t98 * __this, t7 * p0, const MethodInfo* method);
#define m11339(__this, p0, method) (( int32_t (*) (t98 *, t7 *, const MethodInfo*))m11339_gshared)(__this, p0, method)
