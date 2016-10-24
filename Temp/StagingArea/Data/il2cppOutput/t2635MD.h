#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2635;
struct t7;
struct t52;
#include "t226.h"

extern "C" void m15009_gshared (t2635 * __this, t52 * p0, const MethodInfo* method);
#define m15009(__this, p0, method) (( void (*) (t2635 *, t52 *, const MethodInfo*))m15009_gshared)(__this, p0, method)
extern "C" t7 * m15010_gshared (t2635 * __this, const MethodInfo* method);
#define m15010(__this, method) (( t7 * (*) (t2635 *, const MethodInfo*))m15010_gshared)(__this, method)
extern "C" void m15011_gshared (t2635 * __this, const MethodInfo* method);
#define m15011(__this, method) (( void (*) (t2635 *, const MethodInfo*))m15011_gshared)(__this, method)
extern "C" bool m15012_gshared (t2635 * __this, const MethodInfo* method);
#define m15012(__this, method) (( bool (*) (t2635 *, const MethodInfo*))m15012_gshared)(__this, method)
extern "C" t226 m15013_gshared (t2635 * __this, const MethodInfo* method);
#define m15013(__this, method) (( t226 (*) (t2635 *, const MethodInfo*))m15013_gshared)(__this, method)
