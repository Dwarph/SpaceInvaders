#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2887;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17843_gshared (t2887 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17843(__this, p0, p1, method) (( void (*) (t2887 *, t7 *, t226, const MethodInfo*))m17843_gshared)(__this, p0, p1, method)
extern "C" t7 * m17844_gshared (t2887 * __this, t7 * p0, const MethodInfo* method);
#define m17844(__this, p0, method) (( t7 * (*) (t2887 *, t7 *, const MethodInfo*))m17844_gshared)(__this, p0, method)
extern "C" t7 * m17845_gshared (t2887 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m17845(__this, p0, p1, p2, method) (( t7 * (*) (t2887 *, t7 *, t213 *, t7 *, const MethodInfo*))m17845_gshared)(__this, p0, p1, p2, method)
extern "C" t7 * m17846_gshared (t2887 * __this, t7 * p0, const MethodInfo* method);
#define m17846(__this, p0, method) (( t7 * (*) (t2887 *, t7 *, const MethodInfo*))m17846_gshared)(__this, p0, method)
