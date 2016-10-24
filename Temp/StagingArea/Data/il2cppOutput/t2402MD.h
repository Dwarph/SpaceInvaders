#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2402;
struct t7;
#include "t130.h"

extern "C" void m11705_gshared (t2402 * __this, const MethodInfo* method);
#define m11705(__this, method) (( void (*) (t2402 *, const MethodInfo*))m11705_gshared)(__this, method)
extern "C" void m11706_gshared (t7 * __this , const MethodInfo* method);
#define m11706(__this , method) (( void (*) (t7 * , const MethodInfo*))m11706_gshared)(__this , method)
extern "C" int32_t m11707_gshared (t2402 * __this, t7 * p0, const MethodInfo* method);
#define m11707(__this, p0, method) (( int32_t (*) (t2402 *, t7 *, const MethodInfo*))m11707_gshared)(__this, p0, method)
extern "C" bool m11708_gshared (t2402 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m11708(__this, p0, p1, method) (( bool (*) (t2402 *, t7 *, t7 *, const MethodInfo*))m11708_gshared)(__this, p0, p1, method)
extern "C" t2402 * m11709_gshared (t7 * __this , const MethodInfo* method);
#define m11709(__this , method) (( t2402 * (*) (t7 * , const MethodInfo*))m11709_gshared)(__this , method)
