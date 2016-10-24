#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2649;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t380.h"

extern "C" void m15244_gshared (t2649 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15244(__this, p0, p1, method) (( void (*) (t2649 *, t7 *, t226, const MethodInfo*))m15244_gshared)(__this, p0, p1, method)
extern "C" bool m15245_gshared (t2649 * __this, t380  p0, const MethodInfo* method);
#define m15245(__this, p0, method) (( bool (*) (t2649 *, t380 , const MethodInfo*))m15245_gshared)(__this, p0, method)
extern "C" t7 * m15246_gshared (t2649 * __this, t380  p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m15246(__this, p0, p1, p2, method) (( t7 * (*) (t2649 *, t380 , t213 *, t7 *, const MethodInfo*))m15246_gshared)(__this, p0, p1, p2, method)
extern "C" bool m15247_gshared (t2649 * __this, t7 * p0, const MethodInfo* method);
#define m15247(__this, p0, method) (( bool (*) (t2649 *, t7 *, const MethodInfo*))m15247_gshared)(__this, p0, method)
