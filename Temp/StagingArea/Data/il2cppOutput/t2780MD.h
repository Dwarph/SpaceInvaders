#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2780;
struct t7;
struct t52;
#include "t633.h"

extern "C" void m16942_gshared (t2780 * __this, t52 * p0, const MethodInfo* method);
#define m16942(__this, p0, method) (( void (*) (t2780 *, t52 *, const MethodInfo*))m16942_gshared)(__this, p0, method)
extern "C" t7 * m16943_gshared (t2780 * __this, const MethodInfo* method);
#define m16943(__this, method) (( t7 * (*) (t2780 *, const MethodInfo*))m16943_gshared)(__this, method)
extern "C" void m16944_gshared (t2780 * __this, const MethodInfo* method);
#define m16944(__this, method) (( void (*) (t2780 *, const MethodInfo*))m16944_gshared)(__this, method)
extern "C" bool m16945_gshared (t2780 * __this, const MethodInfo* method);
#define m16945(__this, method) (( bool (*) (t2780 *, const MethodInfo*))m16945_gshared)(__this, method)
extern "C" t633  m16946_gshared (t2780 * __this, const MethodInfo* method);
#define m16946(__this, method) (( t633  (*) (t2780 *, const MethodInfo*))m16946_gshared)(__this, method)
