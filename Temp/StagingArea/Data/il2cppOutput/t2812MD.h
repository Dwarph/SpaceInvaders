#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2812;
struct t614;
struct t47;
struct t7;
struct t647;

extern "C" void m17273_gshared (t2812 * __this, const MethodInfo* method);
#define m17273(__this, method) (( void (*) (t2812 *, const MethodInfo*))m17273_gshared)(__this, method)
extern "C" t614 * m17274_gshared (t2812 * __this, t47* p0, t7 * p1, const MethodInfo* method);
#define m17274(__this, p0, p1, method) (( t614 * (*) (t2812 *, t47*, t7 *, const MethodInfo*))m17274_gshared)(__this, p0, p1, method)
extern "C" t647 * m17275_gshared (t2812 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17275(__this, p0, p1, method) (( t647 * (*) (t2812 *, t7 *, t614 *, const MethodInfo*))m17275_gshared)(__this, p0, p1, method)
