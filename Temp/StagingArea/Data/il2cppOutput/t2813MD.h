#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2813;
struct t614;
struct t47;
struct t7;
struct t647;

extern "C" void m17276_gshared (t2813 * __this, const MethodInfo* method);
#define m17276(__this, method) (( void (*) (t2813 *, const MethodInfo*))m17276_gshared)(__this, method)
extern "C" t614 * m17277_gshared (t2813 * __this, t47* p0, t7 * p1, const MethodInfo* method);
#define m17277(__this, p0, p1, method) (( t614 * (*) (t2813 *, t47*, t7 *, const MethodInfo*))m17277_gshared)(__this, p0, p1, method)
extern "C" t647 * m17278_gshared (t2813 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17278(__this, p0, p1, method) (( t647 * (*) (t2813 *, t7 *, t614 *, const MethodInfo*))m17278_gshared)(__this, p0, p1, method)
