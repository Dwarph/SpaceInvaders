#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2462;
struct t7;
struct t52;
#include "t323.h"

extern "C" void m12502_gshared (t2462 * __this, t52 * p0, const MethodInfo* method);
#define m12502(__this, p0, method) (( void (*) (t2462 *, t52 *, const MethodInfo*))m12502_gshared)(__this, p0, method)
extern "C" t7 * m12503_gshared (t2462 * __this, const MethodInfo* method);
#define m12503(__this, method) (( t7 * (*) (t2462 *, const MethodInfo*))m12503_gshared)(__this, method)
extern "C" void m12504_gshared (t2462 * __this, const MethodInfo* method);
#define m12504(__this, method) (( void (*) (t2462 *, const MethodInfo*))m12504_gshared)(__this, method)
extern "C" bool m12505_gshared (t2462 * __this, const MethodInfo* method);
#define m12505(__this, method) (( bool (*) (t2462 *, const MethodInfo*))m12505_gshared)(__this, method)
extern "C" t323  m12506_gshared (t2462 * __this, const MethodInfo* method);
#define m12506(__this, method) (( t323  (*) (t2462 *, const MethodInfo*))m12506_gshared)(__this, method)
