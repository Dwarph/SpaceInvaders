#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2577;
struct t7;
struct t614;
struct t2576;
struct t69;

extern "C" void m14064_gshared (t2577 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m14064(__this, p0, p1, method) (( void (*) (t2577 *, t7 *, t614 *, const MethodInfo*))m14064_gshared)(__this, p0, p1, method)
extern "C" void m14065_gshared (t2577 * __this, t2576 * p0, const MethodInfo* method);
#define m14065(__this, p0, method) (( void (*) (t2577 *, t2576 *, const MethodInfo*))m14065_gshared)(__this, p0, method)
extern "C" void m14066_gshared (t2577 * __this, t69* p0, const MethodInfo* method);
#define m14066(__this, p0, method) (( void (*) (t2577 *, t69*, const MethodInfo*))m14066_gshared)(__this, p0, method)
extern "C" bool m14067_gshared (t2577 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m14067(__this, p0, p1, method) (( bool (*) (t2577 *, t7 *, t614 *, const MethodInfo*))m14067_gshared)(__this, p0, p1, method)
