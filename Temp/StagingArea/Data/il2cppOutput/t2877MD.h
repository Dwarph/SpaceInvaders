#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2877;
struct t7;
struct t52;
#include "t1420.h"

extern "C" void m17793_gshared (t2877 * __this, t52 * p0, const MethodInfo* method);
#define m17793(__this, p0, method) (( void (*) (t2877 *, t52 *, const MethodInfo*))m17793_gshared)(__this, p0, method)
extern "C" t7 * m17794_gshared (t2877 * __this, const MethodInfo* method);
#define m17794(__this, method) (( t7 * (*) (t2877 *, const MethodInfo*))m17794_gshared)(__this, method)
extern "C" void m17795_gshared (t2877 * __this, const MethodInfo* method);
#define m17795(__this, method) (( void (*) (t2877 *, const MethodInfo*))m17795_gshared)(__this, method)
extern "C" bool m17796_gshared (t2877 * __this, const MethodInfo* method);
#define m17796(__this, method) (( bool (*) (t2877 *, const MethodInfo*))m17796_gshared)(__this, method)
extern "C" t1420  m17797_gshared (t2877 * __this, const MethodInfo* method);
#define m17797(__this, method) (( t1420  (*) (t2877 *, const MethodInfo*))m17797_gshared)(__this, method)
