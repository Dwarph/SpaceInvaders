#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2470;
struct t7;
struct t52;
#include "t2469.h"

extern "C" void m12597_gshared (t2470 * __this, t52 * p0, const MethodInfo* method);
#define m12597(__this, p0, method) (( void (*) (t2470 *, t52 *, const MethodInfo*))m12597_gshared)(__this, p0, method)
extern "C" t7 * m12598_gshared (t2470 * __this, const MethodInfo* method);
#define m12598(__this, method) (( t7 * (*) (t2470 *, const MethodInfo*))m12598_gshared)(__this, method)
extern "C" void m12599_gshared (t2470 * __this, const MethodInfo* method);
#define m12599(__this, method) (( void (*) (t2470 *, const MethodInfo*))m12599_gshared)(__this, method)
extern "C" bool m12600_gshared (t2470 * __this, const MethodInfo* method);
#define m12600(__this, method) (( bool (*) (t2470 *, const MethodInfo*))m12600_gshared)(__this, method)
extern "C" t2469  m12601_gshared (t2470 * __this, const MethodInfo* method);
#define m12601(__this, method) (( t2469  (*) (t2470 *, const MethodInfo*))m12601_gshared)(__this, method)
