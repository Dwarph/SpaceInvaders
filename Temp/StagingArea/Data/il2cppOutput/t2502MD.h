#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2502;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2494.h"

extern "C" void m12997_gshared (t2502 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12997(__this, p0, p1, method) (( void (*) (t2502 *, t7 *, t226, const MethodInfo*))m12997_gshared)(__this, p0, p1, method)
extern "C" t2494  m12998_gshared (t2502 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m12998(__this, p0, p1, method) (( t2494  (*) (t2502 *, t7 *, t7 *, const MethodInfo*))m12998_gshared)(__this, p0, p1, method)
extern "C" t7 * m12999_gshared (t2502 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12999(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2502 *, t7 *, t7 *, t213 *, t7 *, const MethodInfo*))m12999_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2494  m13000_gshared (t2502 * __this, t7 * p0, const MethodInfo* method);
#define m13000(__this, p0, method) (( t2494  (*) (t2502 *, t7 *, const MethodInfo*))m13000_gshared)(__this, p0, method)
