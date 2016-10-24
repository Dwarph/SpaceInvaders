#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2704;
struct t7;
struct t52;
#include "t2703.h"

extern "C" void m15934_gshared (t2704 * __this, t52 * p0, const MethodInfo* method);
#define m15934(__this, p0, method) (( void (*) (t2704 *, t52 *, const MethodInfo*))m15934_gshared)(__this, p0, method)
extern "C" t7 * m15935_gshared (t2704 * __this, const MethodInfo* method);
#define m15935(__this, method) (( t7 * (*) (t2704 *, const MethodInfo*))m15935_gshared)(__this, method)
extern "C" void m15936_gshared (t2704 * __this, const MethodInfo* method);
#define m15936(__this, method) (( void (*) (t2704 *, const MethodInfo*))m15936_gshared)(__this, method)
extern "C" bool m15937_gshared (t2704 * __this, const MethodInfo* method);
#define m15937(__this, method) (( bool (*) (t2704 *, const MethodInfo*))m15937_gshared)(__this, method)
extern "C" t2703  m15938_gshared (t2704 * __this, const MethodInfo* method);
#define m15938(__this, method) (( t2703  (*) (t2704 *, const MethodInfo*))m15938_gshared)(__this, method)
