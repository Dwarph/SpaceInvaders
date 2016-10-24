#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2499;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m12970_gshared (t2499 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m12970(__this, p0, p1, method) (( void (*) (t2499 *, t7 *, t226, const MethodInfo*))m12970_gshared)(__this, p0, p1, method)
extern "C" t7 * m12971_gshared (t2499 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m12971(__this, p0, p1, method) (( t7 * (*) (t2499 *, t7 *, t7 *, const MethodInfo*))m12971_gshared)(__this, p0, p1, method)
extern "C" t7 * m12972_gshared (t2499 * __this, t7 * p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m12972(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2499 *, t7 *, t7 *, t213 *, t7 *, const MethodInfo*))m12972_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m12973_gshared (t2499 * __this, t7 * p0, const MethodInfo* method);
#define m12973(__this, p0, method) (( t7 * (*) (t2499 *, t7 *, const MethodInfo*))m12973_gshared)(__this, p0, method)
