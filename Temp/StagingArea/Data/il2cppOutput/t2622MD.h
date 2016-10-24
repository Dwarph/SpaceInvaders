#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2622;
struct t7;
struct t52;

extern "C" void m14811_gshared (t2622 * __this, t52 * p0, const MethodInfo* method);
#define m14811(__this, p0, method) (( void (*) (t2622 *, t52 *, const MethodInfo*))m14811_gshared)(__this, p0, method)
extern "C" t7 * m14812_gshared (t2622 * __this, const MethodInfo* method);
#define m14812(__this, method) (( t7 * (*) (t2622 *, const MethodInfo*))m14812_gshared)(__this, method)
extern "C" void m14813_gshared (t2622 * __this, const MethodInfo* method);
#define m14813(__this, method) (( void (*) (t2622 *, const MethodInfo*))m14813_gshared)(__this, method)
extern "C" bool m14814_gshared (t2622 * __this, const MethodInfo* method);
#define m14814(__this, method) (( bool (*) (t2622 *, const MethodInfo*))m14814_gshared)(__this, method)
extern "C" uint8_t m14815_gshared (t2622 * __this, const MethodInfo* method);
#define m14815(__this, method) (( uint8_t (*) (t2622 *, const MethodInfo*))m14815_gshared)(__this, method)
