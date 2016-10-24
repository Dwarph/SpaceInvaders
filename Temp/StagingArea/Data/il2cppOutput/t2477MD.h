#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2477;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m12662_gshared (t2477 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12662(__this, p0, p1, method) (( void (*) (t2477 *, t7 *, t226, const MethodInfo*))m12662_gshared)(__this, p0, p1, method)
extern "C" int32_t m12663_gshared (t2477 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
#define m12663(__this, p0, p1, method) (( int32_t (*) (t2477 *, t7 *, int32_t, const MethodInfo*))m12663_gshared)(__this, p0, p1, method)
extern "C" t7 * m12664_gshared (t2477 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12664(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2477 *, t7 *, int32_t, t213 *, t7 *, const MethodInfo*))m12664_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m12665_gshared (t2477 * __this, t7 * p0, const MethodInfo* method);
#define m12665(__this, p0, method) (( int32_t (*) (t2477 *, t7 *, const MethodInfo*))m12665_gshared)(__this, p0, method)
