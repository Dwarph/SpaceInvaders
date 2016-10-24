#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2478;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2469.h"

extern "C" void m12670_gshared (t2478 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12670(__this, p0, p1, method) (( void (*) (t2478 *, t7 *, t226, const MethodInfo*))m12670_gshared)(__this, p0, p1, method)
extern "C" t2469  m12671_gshared (t2478 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
#define m12671(__this, p0, p1, method) (( t2469  (*) (t2478 *, t7 *, int32_t, const MethodInfo*))m12671_gshared)(__this, p0, p1, method)
extern "C" t7 * m12672_gshared (t2478 * __this, t7 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12672(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2478 *, t7 *, int32_t, t213 *, t7 *, const MethodInfo*))m12672_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2469  m12673_gshared (t2478 * __this, t7 * p0, const MethodInfo* method);
#define m12673(__this, p0, method) (( t2469  (*) (t2478 *, t7 *, const MethodInfo*))m12673_gshared)(__this, p0, method)
