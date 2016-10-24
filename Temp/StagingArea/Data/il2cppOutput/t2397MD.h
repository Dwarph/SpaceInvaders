#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2397;
struct t7;
struct t52;
#include "t130.h"

extern "C" void m11628_gshared (t2397 * __this, t52 * p0, const MethodInfo* method);
#define m11628(__this, p0, method) (( void (*) (t2397 *, t52 *, const MethodInfo*))m11628_gshared)(__this, p0, method)
extern "C" t7 * m11629_gshared (t2397 * __this, const MethodInfo* method);
#define m11629(__this, method) (( t7 * (*) (t2397 *, const MethodInfo*))m11629_gshared)(__this, method)
extern "C" void m11630_gshared (t2397 * __this, const MethodInfo* method);
#define m11630(__this, method) (( void (*) (t2397 *, const MethodInfo*))m11630_gshared)(__this, method)
extern "C" bool m11631_gshared (t2397 * __this, const MethodInfo* method);
#define m11631(__this, method) (( bool (*) (t2397 *, const MethodInfo*))m11631_gshared)(__this, method)
extern "C" t130  m11632_gshared (t2397 * __this, const MethodInfo* method);
#define m11632(__this, method) (( t130  (*) (t2397 *, const MethodInfo*))m11632_gshared)(__this, method)
