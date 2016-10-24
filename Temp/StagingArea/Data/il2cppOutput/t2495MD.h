#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2495;
struct t7;
struct t52;
#include "t2494.h"

extern "C" void m12928_gshared (t2495 * __this, t52 * p0, const MethodInfo* method);
#define m12928(__this, p0, method) (( void (*) (t2495 *, t52 *, const MethodInfo*))m12928_gshared)(__this, p0, method)
extern "C" t7 * m12929_gshared (t2495 * __this, const MethodInfo* method);
#define m12929(__this, method) (( t7 * (*) (t2495 *, const MethodInfo*))m12929_gshared)(__this, method)
extern "C" void m12930_gshared (t2495 * __this, const MethodInfo* method);
#define m12930(__this, method) (( void (*) (t2495 *, const MethodInfo*))m12930_gshared)(__this, method)
extern "C" bool m12931_gshared (t2495 * __this, const MethodInfo* method);
#define m12931(__this, method) (( bool (*) (t2495 *, const MethodInfo*))m12931_gshared)(__this, method)
extern "C" t2494  m12932_gshared (t2495 * __this, const MethodInfo* method);
#define m12932(__this, method) (( t2494  (*) (t2495 *, const MethodInfo*))m12932_gshared)(__this, method)
