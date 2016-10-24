#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2760;
struct t7;
#include "t2494.h"

extern "C" void m16740_gshared (t2760 * __this, const MethodInfo* method);
#define m16740(__this, method) (( void (*) (t2760 *, const MethodInfo*))m16740_gshared)(__this, method)
extern "C" void m16741_gshared (t7 * __this , const MethodInfo* method);
#define m16741(__this , method) (( void (*) (t7 * , const MethodInfo*))m16741_gshared)(__this , method)
extern "C" int32_t m16742_gshared (t2760 * __this, t7 * p0, const MethodInfo* method);
#define m16742(__this, p0, method) (( int32_t (*) (t2760 *, t7 *, const MethodInfo*))m16742_gshared)(__this, p0, method)
extern "C" bool m16743_gshared (t2760 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16743(__this, p0, p1, method) (( bool (*) (t2760 *, t7 *, t7 *, const MethodInfo*))m16743_gshared)(__this, p0, p1, method)
extern "C" t2760 * m16744_gshared (t7 * __this , const MethodInfo* method);
#define m16744(__this , method) (( t2760 * (*) (t7 * , const MethodInfo*))m16744_gshared)(__this , method)
