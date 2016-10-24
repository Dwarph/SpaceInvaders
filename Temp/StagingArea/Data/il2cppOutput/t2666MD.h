#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2666;
struct t7;
struct t52;
#include "t2665.h"

extern "C" void m15500_gshared (t2666 * __this, t52 * p0, const MethodInfo* method);
#define m15500(__this, p0, method) (( void (*) (t2666 *, t52 *, const MethodInfo*))m15500_gshared)(__this, p0, method)
extern "C" t7 * m15501_gshared (t2666 * __this, const MethodInfo* method);
#define m15501(__this, method) (( t7 * (*) (t2666 *, const MethodInfo*))m15501_gshared)(__this, method)
extern "C" void m15502_gshared (t2666 * __this, const MethodInfo* method);
#define m15502(__this, method) (( void (*) (t2666 *, const MethodInfo*))m15502_gshared)(__this, method)
extern "C" bool m15503_gshared (t2666 * __this, const MethodInfo* method);
#define m15503(__this, method) (( bool (*) (t2666 *, const MethodInfo*))m15503_gshared)(__this, method)
extern "C" t2665  m15504_gshared (t2666 * __this, const MethodInfo* method);
#define m15504(__this, method) (( t2665  (*) (t2666 *, const MethodInfo*))m15504_gshared)(__this, method)
