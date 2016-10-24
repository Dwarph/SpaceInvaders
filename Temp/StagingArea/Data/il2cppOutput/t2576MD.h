#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2576;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m14060_gshared (t2576 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m14060(__this, p0, p1, method) (( void (*) (t2576 *, t7 *, t226, const MethodInfo*))m14060_gshared)(__this, p0, p1, method)
extern "C" void m14061_gshared (t2576 * __this, uint8_t p0, const MethodInfo* method);
#define m14061(__this, p0, method) (( void (*) (t2576 *, uint8_t, const MethodInfo*))m14061_gshared)(__this, p0, method)
extern "C" t7 * m14062_gshared (t2576 * __this, uint8_t p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m14062(__this, p0, p1, p2, method) (( t7 * (*) (t2576 *, uint8_t, t213 *, t7 *, const MethodInfo*))m14062_gshared)(__this, p0, p1, p2, method)
extern "C" void m14063_gshared (t2576 * __this, t7 * p0, const MethodInfo* method);
#define m14063(__this, p0, method) (( void (*) (t2576 *, t7 *, const MethodInfo*))m14063_gshared)(__this, p0, method)
