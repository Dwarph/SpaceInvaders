#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2842;
struct t7;
struct t52;
#include "t2841.h"

extern "C" void m17596_gshared (t2842 * __this, t52 * p0, const MethodInfo* method);
#define m17596(__this, p0, method) (( void (*) (t2842 *, t52 *, const MethodInfo*))m17596_gshared)(__this, p0, method)
extern "C" t7 * m17597_gshared (t2842 * __this, const MethodInfo* method);
#define m17597(__this, method) (( t7 * (*) (t2842 *, const MethodInfo*))m17597_gshared)(__this, method)
extern "C" void m17598_gshared (t2842 * __this, const MethodInfo* method);
#define m17598(__this, method) (( void (*) (t2842 *, const MethodInfo*))m17598_gshared)(__this, method)
extern "C" bool m17599_gshared (t2842 * __this, const MethodInfo* method);
#define m17599(__this, method) (( bool (*) (t2842 *, const MethodInfo*))m17599_gshared)(__this, method)
extern "C" t2841  m17600_gshared (t2842 * __this, const MethodInfo* method);
#define m17600(__this, method) (( t2841  (*) (t2842 *, const MethodInfo*))m17600_gshared)(__this, method)
