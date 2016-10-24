#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2717;

extern "C" void m16030_gshared (t2717 * __this, const MethodInfo* method);
#define m16030(__this, method) (( void (*) (t2717 *, const MethodInfo*))m16030_gshared)(__this, method)
extern "C" int32_t m16031_gshared (t2717 * __this, uint64_t p0, const MethodInfo* method);
#define m16031(__this, p0, method) (( int32_t (*) (t2717 *, uint64_t, const MethodInfo*))m16031_gshared)(__this, p0, method)
extern "C" bool m16032_gshared (t2717 * __this, uint64_t p0, uint64_t p1, const MethodInfo* method);
#define m16032(__this, p0, p1, method) (( bool (*) (t2717 *, uint64_t, uint64_t, const MethodInfo*))m16032_gshared)(__this, p0, p1, method)
