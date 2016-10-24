#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2761;
#include "t2494.h"

extern "C" void m16745_gshared (t2761 * __this, const MethodInfo* method);
#define m16745(__this, method) (( void (*) (t2761 *, const MethodInfo*))m16745_gshared)(__this, method)
extern "C" int32_t m16746_gshared (t2761 * __this, t2494  p0, const MethodInfo* method);
#define m16746(__this, p0, method) (( int32_t (*) (t2761 *, t2494 , const MethodInfo*))m16746_gshared)(__this, p0, method)
extern "C" bool m16747_gshared (t2761 * __this, t2494  p0, t2494  p1, const MethodInfo* method);
#define m16747(__this, p0, p1, method) (( bool (*) (t2761 *, t2494 , t2494 , const MethodInfo*))m16747_gshared)(__this, p0, p1, method)
