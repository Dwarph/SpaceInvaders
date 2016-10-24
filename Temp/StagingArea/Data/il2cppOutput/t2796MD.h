#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2796;
struct t7;
struct t614;
struct t2797;
struct t69;

extern "C" void m17072_gshared (t2796 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17072(__this, p0, p1, method) (( void (*) (t2796 *, t7 *, t614 *, const MethodInfo*))m17072_gshared)(__this, p0, p1, method)
extern "C" void m17073_gshared (t2796 * __this, t2797 * p0, const MethodInfo* method);
#define m17073(__this, p0, method) (( void (*) (t2796 *, t2797 *, const MethodInfo*))m17073_gshared)(__this, p0, method)
extern "C" void m17074_gshared (t2796 * __this, t69* p0, const MethodInfo* method);
#define m17074(__this, p0, method) (( void (*) (t2796 *, t69*, const MethodInfo*))m17074_gshared)(__this, p0, method)
extern "C" bool m17075_gshared (t2796 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17075(__this, p0, p1, method) (( bool (*) (t2796 *, t7 *, t614 *, const MethodInfo*))m17075_gshared)(__this, p0, p1, method)
