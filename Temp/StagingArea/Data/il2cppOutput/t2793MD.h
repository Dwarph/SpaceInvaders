#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2793;
struct t7;
struct t614;
struct t69;

extern "C" void m17061_gshared (t2793 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17061(__this, p0, p1, method) (( void (*) (t2793 *, t7 *, t614 *, const MethodInfo*))m17061_gshared)(__this, p0, p1, method)
extern "C" void m17062_gshared (t2793 * __this, t69* p0, const MethodInfo* method);
#define m17062(__this, p0, method) (( void (*) (t2793 *, t69*, const MethodInfo*))m17062_gshared)(__this, p0, method)
extern "C" bool m17063_gshared (t2793 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17063(__this, p0, p1, method) (( bool (*) (t2793 *, t7 *, t614 *, const MethodInfo*))m17063_gshared)(__this, p0, p1, method)
