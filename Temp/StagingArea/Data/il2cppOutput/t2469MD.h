#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2469;
struct t7;
struct t47;

extern "C" void m12602_gshared (t2469 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
#define m12602(__this, p0, p1, method) (( void (*) (t2469 *, t7 *, int32_t, const MethodInfo*))m12602_gshared)(__this, p0, p1, method)
extern "C" t7 * m12603_gshared (t2469 * __this, const MethodInfo* method);
#define m12603(__this, method) (( t7 * (*) (t2469 *, const MethodInfo*))m12603_gshared)(__this, method)
extern "C" void m12604_gshared (t2469 * __this, t7 * p0, const MethodInfo* method);
#define m12604(__this, p0, method) (( void (*) (t2469 *, t7 *, const MethodInfo*))m12604_gshared)(__this, p0, method)
extern "C" int32_t m12605_gshared (t2469 * __this, const MethodInfo* method);
#define m12605(__this, method) (( int32_t (*) (t2469 *, const MethodInfo*))m12605_gshared)(__this, method)
extern "C" void m12606_gshared (t2469 * __this, int32_t p0, const MethodInfo* method);
#define m12606(__this, p0, method) (( void (*) (t2469 *, int32_t, const MethodInfo*))m12606_gshared)(__this, p0, method)
extern "C" t47* m12607_gshared (t2469 * __this, const MethodInfo* method);
#define m12607(__this, method) (( t47* (*) (t2469 *, const MethodInfo*))m12607_gshared)(__this, method)
