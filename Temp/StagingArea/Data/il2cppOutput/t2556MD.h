#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2556;
struct t7;
struct t614;
struct t2555;
struct t69;

extern "C" void m13770_gshared (t2556 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m13770(__this, p0, p1, method) (( void (*) (t2556 *, t7 *, t614 *, const MethodInfo*))m13770_gshared)(__this, p0, p1, method)
extern "C" void m13771_gshared (t2556 * __this, t2555 * p0, const MethodInfo* method);
#define m13771(__this, p0, method) (( void (*) (t2556 *, t2555 *, const MethodInfo*))m13771_gshared)(__this, p0, method)
extern "C" void m13772_gshared (t2556 * __this, t69* p0, const MethodInfo* method);
#define m13772(__this, p0, method) (( void (*) (t2556 *, t69*, const MethodInfo*))m13772_gshared)(__this, p0, method)
extern "C" bool m13773_gshared (t2556 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m13773(__this, p0, p1, method) (( bool (*) (t2556 *, t7 *, t614 *, const MethodInfo*))m13773_gshared)(__this, p0, p1, method)
