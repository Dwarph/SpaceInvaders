#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2447;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m12321_gshared (t2447 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12321(__this, p0, p1, method) (( void (*) (t2447 *, t7 *, t226, const MethodInfo*))m12321_gshared)(__this, p0, p1, method)
extern "C" t7 * m12322_gshared (t2447 * __this, int32_t p0, t7 * p1, const MethodInfo* method);
#define m12322(__this, p0, p1, method) (( t7 * (*) (t2447 *, int32_t, t7 *, const MethodInfo*))m12322_gshared)(__this, p0, p1, method)
extern "C" t7 * m12323_gshared (t2447 * __this, int32_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12323(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2447 *, int32_t, t7 *, t213 *, t7 *, const MethodInfo*))m12323_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m12324_gshared (t2447 * __this, t7 * p0, const MethodInfo* method);
#define m12324(__this, p0, method) (( t7 * (*) (t2447 *, t7 *, const MethodInfo*))m12324_gshared)(__this, p0, method)
