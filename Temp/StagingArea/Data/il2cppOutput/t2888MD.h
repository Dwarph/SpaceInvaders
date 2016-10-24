#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2888;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17847_gshared (t2888 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17847(__this, p0, p1, method) (( void (*) (t2888 *, t7 *, t226, const MethodInfo*))m17847_gshared)(__this, p0, p1, method)
extern "C" t7 * m17848_gshared (t2888 * __this, const MethodInfo* method);
#define m17848(__this, method) (( t7 * (*) (t2888 *, const MethodInfo*))m17848_gshared)(__this, method)
extern "C" t7 * m17849_gshared (t2888 * __this, t213 * p0, t7 * p1, const MethodInfo* method);
#define m17849(__this, p0, p1, method) (( t7 * (*) (t2888 *, t213 *, t7 *, const MethodInfo*))m17849_gshared)(__this, p0, p1, method)
extern "C" t7 * m17850_gshared (t2888 * __this, t7 * p0, const MethodInfo* method);
#define m17850(__this, p0, method) (( t7 * (*) (t2888 *, t7 *, const MethodInfo*))m17850_gshared)(__this, p0, method)
