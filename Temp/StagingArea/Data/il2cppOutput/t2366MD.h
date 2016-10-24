#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2366;
struct t7;

extern "C" void m11256_gshared (t2366 * __this, const MethodInfo* method);
#define m11256(__this, method) (( void (*) (t2366 *, const MethodInfo*))m11256_gshared)(__this, method)
extern "C" int32_t m11257_gshared (t2366 * __this, t7 * p0, const MethodInfo* method);
#define m11257(__this, p0, method) (( int32_t (*) (t2366 *, t7 *, const MethodInfo*))m11257_gshared)(__this, p0, method)
extern "C" bool m11258_gshared (t2366 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m11258(__this, p0, p1, method) (( bool (*) (t2366 *, t7 *, t7 *, const MethodInfo*))m11258_gshared)(__this, p0, p1, method)
