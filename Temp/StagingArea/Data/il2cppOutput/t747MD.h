#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t747;
struct t66;
struct t66_marshaled;
struct t614;
struct t69;

extern "C" void m3358_gshared (t747 * __this, t66 * p0, t614 * p1, float p2, const MethodInfo* method);
#define m3358(__this, p0, p1, p2, method) (( void (*) (t747 *, t66 *, t614 *, float, const MethodInfo*))m3358_gshared)(__this, p0, p1, p2, method)
extern "C" void m17070_gshared (t747 * __this, t69* p0, const MethodInfo* method);
#define m17070(__this, p0, method) (( void (*) (t747 *, t69*, const MethodInfo*))m17070_gshared)(__this, p0, method)
