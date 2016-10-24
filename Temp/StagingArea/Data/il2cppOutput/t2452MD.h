#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2452;

extern "C" void m12349_gshared (t2452 * __this, const MethodInfo* method);
#define m12349(__this, method) (( void (*) (t2452 *, const MethodInfo*))m12349_gshared)(__this, method)
extern "C" int32_t m12350_gshared (t2452 * __this, int32_t p0, const MethodInfo* method);
#define m12350(__this, p0, method) (( int32_t (*) (t2452 *, int32_t, const MethodInfo*))m12350_gshared)(__this, p0, method)
extern "C" bool m12351_gshared (t2452 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m12351(__this, p0, p1, method) (( bool (*) (t2452 *, int32_t, int32_t, const MethodInfo*))m12351_gshared)(__this, p0, p1, method)
