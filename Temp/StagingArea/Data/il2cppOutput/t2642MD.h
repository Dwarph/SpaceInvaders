#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2642;
struct t7;
struct t52;

extern "C" void m15106_gshared (t2642 * __this, t52 * p0, const MethodInfo* method);
#define m15106(__this, p0, method) (( void (*) (t2642 *, t52 *, const MethodInfo*))m15106_gshared)(__this, p0, method)
extern "C" t7 * m15107_gshared (t2642 * __this, const MethodInfo* method);
#define m15107(__this, method) (( t7 * (*) (t2642 *, const MethodInfo*))m15107_gshared)(__this, method)
extern "C" void m15108_gshared (t2642 * __this, const MethodInfo* method);
#define m15108(__this, method) (( void (*) (t2642 *, const MethodInfo*))m15108_gshared)(__this, method)
extern "C" bool m15109_gshared (t2642 * __this, const MethodInfo* method);
#define m15109(__this, method) (( bool (*) (t2642 *, const MethodInfo*))m15109_gshared)(__this, method)
extern "C" float m15110_gshared (t2642 * __this, const MethodInfo* method);
#define m15110(__this, method) (( float (*) (t2642 *, const MethodInfo*))m15110_gshared)(__this, method)
