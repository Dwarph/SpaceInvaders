#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t748;
struct t66;
struct t66_marshaled;
struct t614;
struct t69;

extern "C" void m3359_gshared (t748 * __this, t66 * p0, t614 * p1, int32_t p2, const MethodInfo* method);
#define m3359(__this, p0, p1, p2, method) (( void (*) (t748 *, t66 *, t614 *, int32_t, const MethodInfo*))m3359_gshared)(__this, p0, p1, p2, method)
extern "C" void m17071_gshared (t748 * __this, t69* p0, const MethodInfo* method);
#define m17071(__this, p0, method) (( void (*) (t748 *, t69*, const MethodInfo*))m17071_gshared)(__this, p0, method)
