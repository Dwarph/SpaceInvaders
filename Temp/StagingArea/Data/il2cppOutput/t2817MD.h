#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2817;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"

extern "C" void m17451_gshared (t2817 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17451(__this, p0, p1, method) (( void (*) (t2817 *, t7 *, t226, const MethodInfo*))m17451_gshared)(__this, p0, p1, method)
extern "C" t1083  m17452_gshared (t2817 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
#define m17452(__this, p0, p1, method) (( t1083  (*) (t2817 *, t7 *, uint8_t, const MethodInfo*))m17452_gshared)(__this, p0, p1, method)
extern "C" t7 * m17453_gshared (t2817 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17453(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2817 *, t7 *, uint8_t, t213 *, t7 *, const MethodInfo*))m17453_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m17454_gshared (t2817 * __this, t7 * p0, const MethodInfo* method);
#define m17454(__this, p0, method) (( t1083  (*) (t2817 *, t7 *, const MethodInfo*))m17454_gshared)(__this, p0, method)
