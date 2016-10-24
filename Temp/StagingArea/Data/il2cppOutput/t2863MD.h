#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2863;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17728_gshared (t2863 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17728(__this, p0, p1, method) (( void (*) (t2863 *, t7 *, t226, const MethodInfo*))m17728_gshared)(__this, p0, p1, method)
extern "C" t7 * m17729_gshared (t2863 * __this, t7 * p0, const MethodInfo* method);
#define m17729(__this, p0, method) (( t7 * (*) (t2863 *, t7 *, const MethodInfo*))m17729_gshared)(__this, p0, method)
extern "C" t7 * m17730_gshared (t2863 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m17730(__this, p0, p1, p2, method) (( t7 * (*) (t2863 *, t7 *, t213 *, t7 *, const MethodInfo*))m17730_gshared)(__this, p0, p1, p2, method)
extern "C" t7 * m17731_gshared (t2863 * __this, t7 * p0, const MethodInfo* method);
#define m17731(__this, p0, method) (( t7 * (*) (t2863 *, t7 *, const MethodInfo*))m17731_gshared)(__this, p0, method)
