#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2811;
struct t614;
struct t47;
struct t7;
struct t647;

extern "C" void m17270_gshared (t2811 * __this, const MethodInfo* method);
#define m17270(__this, method) (( void (*) (t2811 *, const MethodInfo*))m17270_gshared)(__this, method)
extern "C" t614 * m17271_gshared (t2811 * __this, t47* p0, t7 * p1, const MethodInfo* method);
#define m17271(__this, p0, p1, method) (( t614 * (*) (t2811 *, t47*, t7 *, const MethodInfo*))m17271_gshared)(__this, p0, p1, method)
extern "C" t647 * m17272_gshared (t2811 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17272(__this, p0, p1, method) (( t647 * (*) (t2811 *, t7 *, t614 *, const MethodInfo*))m17272_gshared)(__this, p0, p1, method)
