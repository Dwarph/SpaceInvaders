#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2846;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17638_gshared (t2846 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17638(__this, p0, p1, method) (( void (*) (t2846 *, t7 *, t226, const MethodInfo*))m17638_gshared)(__this, p0, p1, method)
extern "C" int32_t m17639_gshared (t2846 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m17639(__this, p0, p1, method) (( int32_t (*) (t2846 *, int32_t, int32_t, const MethodInfo*))m17639_gshared)(__this, p0, p1, method)
extern "C" t7 * m17640_gshared (t2846 * __this, int32_t p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17640(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2846 *, int32_t, int32_t, t213 *, t7 *, const MethodInfo*))m17640_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17641_gshared (t2846 * __this, t7 * p0, const MethodInfo* method);
#define m17641(__this, p0, method) (( int32_t (*) (t2846 *, t7 *, const MethodInfo*))m17641_gshared)(__this, p0, method)
