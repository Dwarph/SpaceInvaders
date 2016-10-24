#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2894;
struct t7;
struct t52;
#include "t991.h"

extern "C" void m17876_gshared (t2894 * __this, t52 * p0, const MethodInfo* method);
#define m17876(__this, p0, method) (( void (*) (t2894 *, t52 *, const MethodInfo*))m17876_gshared)(__this, p0, method)
extern "C" t7 * m17877_gshared (t2894 * __this, const MethodInfo* method);
#define m17877(__this, method) (( t7 * (*) (t2894 *, const MethodInfo*))m17877_gshared)(__this, method)
extern "C" void m17878_gshared (t2894 * __this, const MethodInfo* method);
#define m17878(__this, method) (( void (*) (t2894 *, const MethodInfo*))m17878_gshared)(__this, method)
extern "C" bool m17879_gshared (t2894 * __this, const MethodInfo* method);
#define m17879(__this, method) (( bool (*) (t2894 *, const MethodInfo*))m17879_gshared)(__this, method)
extern "C" t991  m17880_gshared (t2894 * __this, const MethodInfo* method);
#define m17880(__this, method) (( t991  (*) (t2894 *, const MethodInfo*))m17880_gshared)(__this, method)
