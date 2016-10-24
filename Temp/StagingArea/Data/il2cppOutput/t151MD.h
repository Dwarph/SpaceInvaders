#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t151;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t323.h"

extern "C" void m1573_gshared (t151 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m1573(__this, p0, p1, method) (( void (*) (t151 *, t7 *, t226, const MethodInfo*))m1573_gshared)(__this, p0, p1, method)
extern "C" int32_t m12499_gshared (t151 * __this, t323  p0, t323  p1, const MethodInfo* method);
#define m12499(__this, p0, p1, method) (( int32_t (*) (t151 *, t323 , t323 , const MethodInfo*))m12499_gshared)(__this, p0, p1, method)
extern "C" t7 * m12500_gshared (t151 * __this, t323  p0, t323  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12500(__this, p0, p1, p2, p3, method) (( t7 * (*) (t151 *, t323 , t323 , t213 *, t7 *, const MethodInfo*))m12500_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m12501_gshared (t151 * __this, t7 * p0, const MethodInfo* method);
#define m12501(__this, p0, method) (( int32_t (*) (t151 *, t7 *, const MethodInfo*))m12501_gshared)(__this, p0, method)
