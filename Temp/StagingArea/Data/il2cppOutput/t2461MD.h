#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2461;
struct t7;
struct t52;
#include "t349.h"

extern "C" void m12494_gshared (t2461 * __this, t52 * p0, const MethodInfo* method);
#define m12494(__this, p0, method) (( void (*) (t2461 *, t52 *, const MethodInfo*))m12494_gshared)(__this, p0, method)
extern "C" t7 * m12495_gshared (t2461 * __this, const MethodInfo* method);
#define m12495(__this, method) (( t7 * (*) (t2461 *, const MethodInfo*))m12495_gshared)(__this, method)
extern "C" void m12496_gshared (t2461 * __this, const MethodInfo* method);
#define m12496(__this, method) (( void (*) (t2461 *, const MethodInfo*))m12496_gshared)(__this, method)
extern "C" bool m12497_gshared (t2461 * __this, const MethodInfo* method);
#define m12497(__this, method) (( bool (*) (t2461 *, const MethodInfo*))m12497_gshared)(__this, method)
extern "C" t349  m12498_gshared (t2461 * __this, const MethodInfo* method);
#define m12498(__this, method) (( t349  (*) (t2461 *, const MethodInfo*))m12498_gshared)(__this, method)
