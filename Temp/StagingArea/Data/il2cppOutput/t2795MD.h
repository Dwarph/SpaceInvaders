#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2795;
struct t66;
struct t66_marshaled;
struct t614;
struct t7;
struct t69;

extern "C" void m17068_gshared (t2795 * __this, t66 * p0, t614 * p1, t7 * p2, const MethodInfo* method);
#define m17068(__this, p0, p1, p2, method) (( void (*) (t2795 *, t66 *, t614 *, t7 *, const MethodInfo*))m17068_gshared)(__this, p0, p1, p2, method)
extern "C" void m17069_gshared (t2795 * __this, t69* p0, const MethodInfo* method);
#define m17069(__this, p0, method) (( void (*) (t2795 *, t69*, const MethodInfo*))m17069_gshared)(__this, p0, method)
