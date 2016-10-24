#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2789;
struct t7;
struct t614;
struct t69;

extern "C" void m17047_gshared (t2789 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17047(__this, p0, p1, method) (( void (*) (t2789 *, t7 *, t614 *, const MethodInfo*))m17047_gshared)(__this, p0, p1, method)
extern "C" void m17048_gshared (t2789 * __this, t69* p0, const MethodInfo* method);
#define m17048(__this, p0, method) (( void (*) (t2789 *, t69*, const MethodInfo*))m17048_gshared)(__this, p0, method)
extern "C" bool m17049_gshared (t2789 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17049(__this, p0, p1, method) (( bool (*) (t2789 *, t7 *, t614 *, const MethodInfo*))m17049_gshared)(__this, p0, p1, method)
