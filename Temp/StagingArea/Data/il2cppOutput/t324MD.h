#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t324;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t157.h"

extern "C" void m1636_gshared (t324 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m1636(__this, p0, p1, method) (( void (*) (t324 *, t7 *, t226, const MethodInfo*))m1636_gshared)(__this, p0, p1, method)
extern "C" void m12509_gshared (t324 * __this, t157  p0, const MethodInfo* method);
#define m12509(__this, p0, method) (( void (*) (t324 *, t157 , const MethodInfo*))m12509_gshared)(__this, p0, method)
extern "C" t7 * m12510_gshared (t324 * __this, t157  p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m12510(__this, p0, p1, p2, method) (( t7 * (*) (t324 *, t157 , t213 *, t7 *, const MethodInfo*))m12510_gshared)(__this, p0, p1, p2, method)
extern "C" void m12511_gshared (t324 * __this, t7 * p0, const MethodInfo* method);
#define m12511(__this, p0, method) (( void (*) (t324 *, t7 *, const MethodInfo*))m12511_gshared)(__this, p0, method)
