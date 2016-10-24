#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2716;

extern "C" void m16027_gshared (t2716 * __this, const MethodInfo* method);
#define m16027(__this, method) (( void (*) (t2716 *, const MethodInfo*))m16027_gshared)(__this, method)
extern "C" int32_t m16028_gshared (t2716 * __this, uint64_t p0, const MethodInfo* method);
#define m16028(__this, p0, method) (( int32_t (*) (t2716 *, uint64_t, const MethodInfo*))m16028_gshared)(__this, p0, method)
extern "C" bool m16029_gshared (t2716 * __this, uint64_t p0, uint64_t p1, const MethodInfo* method);
#define m16029(__this, p0, p1, method) (( bool (*) (t2716 *, uint64_t, uint64_t, const MethodInfo*))m16029_gshared)(__this, p0, p1, method)
