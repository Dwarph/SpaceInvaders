#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2420;
struct t7;
struct t614;
struct t2388;
struct t69;

extern "C" void m11917_gshared (t2420 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m11917(__this, p0, p1, method) (( void (*) (t2420 *, t7 *, t614 *, const MethodInfo*))m11917_gshared)(__this, p0, p1, method)
extern "C" void m11918_gshared (t2420 * __this, t2388 * p0, const MethodInfo* method);
#define m11918(__this, p0, method) (( void (*) (t2420 *, t2388 *, const MethodInfo*))m11918_gshared)(__this, p0, method)
extern "C" void m11919_gshared (t2420 * __this, t69* p0, const MethodInfo* method);
#define m11919(__this, p0, method) (( void (*) (t2420 *, t69*, const MethodInfo*))m11919_gshared)(__this, p0, method)
extern "C" bool m11920_gshared (t2420 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m11920(__this, p0, p1, method) (( bool (*) (t2420 *, t7 *, t614 *, const MethodInfo*))m11920_gshared)(__this, p0, p1, method)
