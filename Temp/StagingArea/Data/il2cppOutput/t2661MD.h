#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2661;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t379.h"

extern "C" void m15396_gshared (t2661 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15396(__this, p0, p1, method) (( void (*) (t2661 *, t7 *, t226, const MethodInfo*))m15396_gshared)(__this, p0, p1, method)
extern "C" int32_t m15397_gshared (t2661 * __this, t379  p0, t379  p1, const MethodInfo* method);
#define m15397(__this, p0, p1, method) (( int32_t (*) (t2661 *, t379 , t379 , const MethodInfo*))m15397_gshared)(__this, p0, p1, method)
extern "C" t7 * m15398_gshared (t2661 * __this, t379  p0, t379  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m15398(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2661 *, t379 , t379 , t213 *, t7 *, const MethodInfo*))m15398_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15399_gshared (t2661 * __this, t7 * p0, const MethodInfo* method);
#define m15399(__this, p0, method) (( int32_t (*) (t2661 *, t7 *, const MethodInfo*))m15399_gshared)(__this, p0, method)
