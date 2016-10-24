#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2439;
struct t7;
struct t52;
#include "t2438.h"

extern "C" void m12251_gshared (t2439 * __this, t52 * p0, const MethodInfo* method);
#define m12251(__this, p0, method) (( void (*) (t2439 *, t52 *, const MethodInfo*))m12251_gshared)(__this, p0, method)
extern "C" t7 * m12252_gshared (t2439 * __this, const MethodInfo* method);
#define m12252(__this, method) (( t7 * (*) (t2439 *, const MethodInfo*))m12252_gshared)(__this, method)
extern "C" void m12253_gshared (t2439 * __this, const MethodInfo* method);
#define m12253(__this, method) (( void (*) (t2439 *, const MethodInfo*))m12253_gshared)(__this, method)
extern "C" bool m12254_gshared (t2439 * __this, const MethodInfo* method);
#define m12254(__this, method) (( bool (*) (t2439 *, const MethodInfo*))m12254_gshared)(__this, method)
extern "C" t2438  m12255_gshared (t2439 * __this, const MethodInfo* method);
#define m12255(__this, method) (( t2438  (*) (t2439 *, const MethodInfo*))m12255_gshared)(__this, method)
