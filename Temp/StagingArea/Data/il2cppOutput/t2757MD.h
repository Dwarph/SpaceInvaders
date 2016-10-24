#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2757;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2494.h"

extern "C" void m16722_gshared (t2757 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16722(__this, p0, p1, method) (( void (*) (t2757 *, t7 *, t226, const MethodInfo*))m16722_gshared)(__this, p0, p1, method)
extern "C" t2494  m16723_gshared (t2757 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
#define m16723(__this, p0, p1, method) (( t2494  (*) (t2757 *, t7 *, t2494 , const MethodInfo*))m16723_gshared)(__this, p0, p1, method)
extern "C" t7 * m16724_gshared (t2757 * __this, t7 * p0, t2494  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m16724(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2757 *, t7 *, t2494 , t213 *, t7 *, const MethodInfo*))m16724_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2494  m16725_gshared (t2757 * __this, t7 * p0, const MethodInfo* method);
#define m16725(__this, p0, method) (( t2494  (*) (t2757 *, t7 *, const MethodInfo*))m16725_gshared)(__this, p0, method)
