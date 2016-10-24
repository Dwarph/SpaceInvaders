#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2553;
struct t7;
struct t614;
struct t391;
struct t69;

extern "C" void m13754_gshared (t2553 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m13754(__this, p0, p1, method) (( void (*) (t2553 *, t7 *, t614 *, const MethodInfo*))m13754_gshared)(__this, p0, p1, method)
extern "C" void m13755_gshared (t2553 * __this, t391 * p0, const MethodInfo* method);
#define m13755(__this, p0, method) (( void (*) (t2553 *, t391 *, const MethodInfo*))m13755_gshared)(__this, p0, method)
extern "C" void m13756_gshared (t2553 * __this, t69* p0, const MethodInfo* method);
#define m13756(__this, p0, method) (( void (*) (t2553 *, t69*, const MethodInfo*))m13756_gshared)(__this, p0, method)
extern "C" bool m13757_gshared (t2553 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m13757(__this, p0, p1, method) (( bool (*) (t2553 *, t7 *, t614 *, const MethodInfo*))m13757_gshared)(__this, p0, p1, method)
