#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2463;
struct t7;
struct t614;
struct t324;
struct t69;

extern "C" void m12512_gshared (t2463 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m12512(__this, p0, p1, method) (( void (*) (t2463 *, t7 *, t614 *, const MethodInfo*))m12512_gshared)(__this, p0, p1, method)
extern "C" void m12513_gshared (t2463 * __this, t324 * p0, const MethodInfo* method);
#define m12513(__this, p0, method) (( void (*) (t2463 *, t324 *, const MethodInfo*))m12513_gshared)(__this, p0, method)
extern "C" void m12514_gshared (t2463 * __this, t69* p0, const MethodInfo* method);
#define m12514(__this, p0, method) (( void (*) (t2463 *, t69*, const MethodInfo*))m12514_gshared)(__this, p0, method)
extern "C" bool m12515_gshared (t2463 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m12515(__this, p0, p1, method) (( bool (*) (t2463 *, t7 *, t614 *, const MethodInfo*))m12515_gshared)(__this, p0, p1, method)
