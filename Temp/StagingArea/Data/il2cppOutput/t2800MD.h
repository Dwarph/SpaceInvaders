#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2800;
struct t66;
struct t66_marshaled;
struct t614;
struct t69;

extern "C" void m17085_gshared (t2800 * __this, t66 * p0, t614 * p1, uint8_t p2, const MethodInfo* method);
#define m17085(__this, p0, p1, p2, method) (( void (*) (t2800 *, t66 *, t614 *, uint8_t, const MethodInfo*))m17085_gshared)(__this, p0, p1, p2, method)
extern "C" void m17087_gshared (t2800 * __this, t69* p0, const MethodInfo* method);
#define m17087(__this, p0, method) (( void (*) (t2800 *, t69*, const MethodInfo*))m17087_gshared)(__this, p0, method)
