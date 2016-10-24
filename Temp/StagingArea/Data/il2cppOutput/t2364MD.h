#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2364;
struct t7;

extern "C" void m11246_gshared (t2364 * __this, const MethodInfo* method);
#define m11246(__this, method) (( void (*) (t2364 *, const MethodInfo*))m11246_gshared)(__this, method)
extern "C" void m11247_gshared (t7 * __this , const MethodInfo* method);
#define m11247(__this , method) (( void (*) (t7 * , const MethodInfo*))m11247_gshared)(__this , method)
extern "C" int32_t m11248_gshared (t2364 * __this, t7 * p0, const MethodInfo* method);
#define m11248(__this, p0, method) (( int32_t (*) (t2364 *, t7 *, const MethodInfo*))m11248_gshared)(__this, p0, method)
extern "C" bool m11249_gshared (t2364 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m11249(__this, p0, p1, method) (( bool (*) (t2364 *, t7 *, t7 *, const MethodInfo*))m11249_gshared)(__this, p0, p1, method)
extern "C" t2364 * m11250_gshared (t7 * __this , const MethodInfo* method);
#define m11250(__this , method) (( t2364 * (*) (t7 * , const MethodInfo*))m11250_gshared)(__this , method)
