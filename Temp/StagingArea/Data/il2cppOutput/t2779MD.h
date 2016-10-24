#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2779;
struct t7;
struct t52;
#include "t743.h"

extern "C" void m16937_gshared (t2779 * __this, t52 * p0, const MethodInfo* method);
#define m16937(__this, p0, method) (( void (*) (t2779 *, t52 *, const MethodInfo*))m16937_gshared)(__this, p0, method)
extern "C" t7 * m16938_gshared (t2779 * __this, const MethodInfo* method);
#define m16938(__this, method) (( t7 * (*) (t2779 *, const MethodInfo*))m16938_gshared)(__this, method)
extern "C" void m16939_gshared (t2779 * __this, const MethodInfo* method);
#define m16939(__this, method) (( void (*) (t2779 *, const MethodInfo*))m16939_gshared)(__this, method)
extern "C" bool m16940_gshared (t2779 * __this, const MethodInfo* method);
#define m16940(__this, method) (( bool (*) (t2779 *, const MethodInfo*))m16940_gshared)(__this, method)
extern "C" t743  m16941_gshared (t2779 * __this, const MethodInfo* method);
#define m16941(__this, method) (( t743  (*) (t2779 *, const MethodInfo*))m16941_gshared)(__this, method)
