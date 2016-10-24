#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2656;
struct t7;
#include "t379.h"

extern "C" void m15378_gshared (t2656 * __this, const MethodInfo* method);
#define m15378(__this, method) (( void (*) (t2656 *, const MethodInfo*))m15378_gshared)(__this, method)
extern "C" void m15379_gshared (t7 * __this , const MethodInfo* method);
#define m15379(__this , method) (( void (*) (t7 * , const MethodInfo*))m15379_gshared)(__this , method)
extern "C" int32_t m15380_gshared (t2656 * __this, t7 * p0, const MethodInfo* method);
#define m15380(__this, p0, method) (( int32_t (*) (t2656 *, t7 *, const MethodInfo*))m15380_gshared)(__this, p0, method)
extern "C" bool m15381_gshared (t2656 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m15381(__this, p0, p1, method) (( bool (*) (t2656 *, t7 *, t7 *, const MethodInfo*))m15381_gshared)(__this, p0, p1, method)
extern "C" t2656 * m15382_gshared (t7 * __this , const MethodInfo* method);
#define m15382(__this , method) (( t2656 * (*) (t7 * , const MethodInfo*))m15382_gshared)(__this , method)
