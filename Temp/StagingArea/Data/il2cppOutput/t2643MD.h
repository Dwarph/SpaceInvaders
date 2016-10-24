#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2643;
struct t7;
struct t52;
#include "t560.h"

extern "C" void m15111_gshared (t2643 * __this, t52 * p0, const MethodInfo* method);
#define m15111(__this, p0, method) (( void (*) (t2643 *, t52 *, const MethodInfo*))m15111_gshared)(__this, p0, method)
extern "C" t7 * m15112_gshared (t2643 * __this, const MethodInfo* method);
#define m15112(__this, method) (( t7 * (*) (t2643 *, const MethodInfo*))m15112_gshared)(__this, method)
extern "C" void m15113_gshared (t2643 * __this, const MethodInfo* method);
#define m15113(__this, method) (( void (*) (t2643 *, const MethodInfo*))m15113_gshared)(__this, method)
extern "C" bool m15114_gshared (t2643 * __this, const MethodInfo* method);
#define m15114(__this, method) (( bool (*) (t2643 *, const MethodInfo*))m15114_gshared)(__this, method)
extern "C" t560  m15115_gshared (t2643 * __this, const MethodInfo* method);
#define m15115(__this, method) (( t560  (*) (t2643 *, const MethodInfo*))m15115_gshared)(__this, method)
