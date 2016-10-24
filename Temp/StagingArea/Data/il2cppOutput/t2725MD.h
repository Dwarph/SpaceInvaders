#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2725;
struct t7;
struct t52;
#include "t2724.h"

extern "C" void m16207_gshared (t2725 * __this, t52 * p0, const MethodInfo* method);
#define m16207(__this, p0, method) (( void (*) (t2725 *, t52 *, const MethodInfo*))m16207_gshared)(__this, p0, method)
extern "C" t7 * m16208_gshared (t2725 * __this, const MethodInfo* method);
#define m16208(__this, method) (( t7 * (*) (t2725 *, const MethodInfo*))m16208_gshared)(__this, method)
extern "C" void m16209_gshared (t2725 * __this, const MethodInfo* method);
#define m16209(__this, method) (( void (*) (t2725 *, const MethodInfo*))m16209_gshared)(__this, method)
extern "C" bool m16210_gshared (t2725 * __this, const MethodInfo* method);
#define m16210(__this, method) (( bool (*) (t2725 *, const MethodInfo*))m16210_gshared)(__this, method)
extern "C" t2724  m16211_gshared (t2725 * __this, const MethodInfo* method);
#define m16211(__this, method) (( t2724  (*) (t2725 *, const MethodInfo*))m16211_gshared)(__this, method)
