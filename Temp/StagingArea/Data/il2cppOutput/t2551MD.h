#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2551;
struct t7;
struct t52;
#include "t380.h"

extern "C" void m13738_gshared (t2551 * __this, t52 * p0, const MethodInfo* method);
#define m13738(__this, p0, method) (( void (*) (t2551 *, t52 *, const MethodInfo*))m13738_gshared)(__this, p0, method)
extern "C" t7 * m13739_gshared (t2551 * __this, const MethodInfo* method);
#define m13739(__this, method) (( t7 * (*) (t2551 *, const MethodInfo*))m13739_gshared)(__this, method)
extern "C" void m13740_gshared (t2551 * __this, const MethodInfo* method);
#define m13740(__this, method) (( void (*) (t2551 *, const MethodInfo*))m13740_gshared)(__this, method)
extern "C" bool m13741_gshared (t2551 * __this, const MethodInfo* method);
#define m13741(__this, method) (( bool (*) (t2551 *, const MethodInfo*))m13741_gshared)(__this, method)
extern "C" t380  m13742_gshared (t2551 * __this, const MethodInfo* method);
#define m13742(__this, method) (( t380  (*) (t2551 *, const MethodInfo*))m13742_gshared)(__this, method)
