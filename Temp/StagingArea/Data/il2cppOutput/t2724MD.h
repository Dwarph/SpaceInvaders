#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2724;
struct t7;
struct t47;
#include "t2494.h"

extern "C" void m16212_gshared (t2724 * __this, t7 * p0, t2494  p1, const MethodInfo* method);
#define m16212(__this, p0, p1, method) (( void (*) (t2724 *, t7 *, t2494 , const MethodInfo*))m16212_gshared)(__this, p0, p1, method)
extern "C" t7 * m16213_gshared (t2724 * __this, const MethodInfo* method);
#define m16213(__this, method) (( t7 * (*) (t2724 *, const MethodInfo*))m16213_gshared)(__this, method)
extern "C" void m16214_gshared (t2724 * __this, t7 * p0, const MethodInfo* method);
#define m16214(__this, p0, method) (( void (*) (t2724 *, t7 *, const MethodInfo*))m16214_gshared)(__this, p0, method)
extern "C" t2494  m16215_gshared (t2724 * __this, const MethodInfo* method);
#define m16215(__this, method) (( t2494  (*) (t2724 *, const MethodInfo*))m16215_gshared)(__this, method)
extern "C" void m16216_gshared (t2724 * __this, t2494  p0, const MethodInfo* method);
#define m16216(__this, p0, method) (( void (*) (t2724 *, t2494 , const MethodInfo*))m16216_gshared)(__this, p0, method)
extern "C" t47* m16217_gshared (t2724 * __this, const MethodInfo* method);
#define m16217(__this, method) (( t47* (*) (t2724 *, const MethodInfo*))m16217_gshared)(__this, method)
