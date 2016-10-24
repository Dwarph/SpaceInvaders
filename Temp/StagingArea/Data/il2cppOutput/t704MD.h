#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t704;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m16084_gshared (t704 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16084(__this, p0, p1, method) (( void (*) (t704 *, t7 *, t226, const MethodInfo*))m16084_gshared)(__this, p0, p1, method)
extern "C" void m16086_gshared (t704 * __this, t7 * p0, const MethodInfo* method);
#define m16086(__this, p0, method) (( void (*) (t704 *, t7 *, const MethodInfo*))m16086_gshared)(__this, p0, method)
extern "C" t7 * m16088_gshared (t704 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m16088(__this, p0, p1, p2, method) (( t7 * (*) (t704 *, t7 *, t213 *, t7 *, const MethodInfo*))m16088_gshared)(__this, p0, p1, p2, method)
extern "C" void m16090_gshared (t704 * __this, t7 * p0, const MethodInfo* method);
#define m16090(__this, p0, method) (( void (*) (t704 *, t7 *, const MethodInfo*))m16090_gshared)(__this, p0, method)
