#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2584;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m14162_gshared (t2584 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m14162(__this, p0, p1, method) (( void (*) (t2584 *, t7 *, t226, const MethodInfo*))m14162_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14164_gshared (t2584 * __this, t7 * p0, const MethodInfo* method);
#define m14164(__this, p0, method) (( uint8_t (*) (t2584 *, t7 *, const MethodInfo*))m14164_gshared)(__this, p0, method)
extern "C" t7 * m14166_gshared (t2584 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m14166(__this, p0, p1, p2, method) (( t7 * (*) (t2584 *, t7 *, t213 *, t7 *, const MethodInfo*))m14166_gshared)(__this, p0, p1, p2, method)
extern "C" uint8_t m14168_gshared (t2584 * __this, t7 * p0, const MethodInfo* method);
#define m14168(__this, p0, method) (( uint8_t (*) (t2584 *, t7 *, const MethodInfo*))m14168_gshared)(__this, p0, method)
