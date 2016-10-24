#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2650;
struct t7;
#include "t380.h"

extern "C" void m15248_gshared (t2650 * __this, const MethodInfo* method);
#define m15248(__this, method) (( void (*) (t2650 *, const MethodInfo*))m15248_gshared)(__this, method)
extern "C" void m15249_gshared (t7 * __this , const MethodInfo* method);
#define m15249(__this , method) (( void (*) (t7 * , const MethodInfo*))m15249_gshared)(__this , method)
extern "C" int32_t m15250_gshared (t2650 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m15250(__this, p0, p1, method) (( int32_t (*) (t2650 *, t7 *, t7 *, const MethodInfo*))m15250_gshared)(__this, p0, p1, method)
extern "C" t2650 * m15251_gshared (t7 * __this , const MethodInfo* method);
#define m15251(__this , method) (( t2650 * (*) (t7 * , const MethodInfo*))m15251_gshared)(__this , method)
