#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2448;
struct t7;
struct t52;
#include "t1083.h"

extern "C" void m12329_gshared (t2448 * __this, t52 * p0, const MethodInfo* method);
#define m12329(__this, p0, method) (( void (*) (t2448 *, t52 *, const MethodInfo*))m12329_gshared)(__this, p0, method)
extern "C" t7 * m12330_gshared (t2448 * __this, const MethodInfo* method);
#define m12330(__this, method) (( t7 * (*) (t2448 *, const MethodInfo*))m12330_gshared)(__this, method)
extern "C" void m12331_gshared (t2448 * __this, const MethodInfo* method);
#define m12331(__this, method) (( void (*) (t2448 *, const MethodInfo*))m12331_gshared)(__this, method)
extern "C" bool m12332_gshared (t2448 * __this, const MethodInfo* method);
#define m12332(__this, method) (( bool (*) (t2448 *, const MethodInfo*))m12332_gshared)(__this, method)
extern "C" t1083  m12333_gshared (t2448 * __this, const MethodInfo* method);
#define m12333(__this, method) (( t1083  (*) (t2448 *, const MethodInfo*))m12333_gshared)(__this, method)
