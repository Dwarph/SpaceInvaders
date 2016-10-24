#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2550;
struct t7;
struct t52;
#include "t379.h"

extern "C" void m13733_gshared (t2550 * __this, t52 * p0, const MethodInfo* method);
#define m13733(__this, p0, method) (( void (*) (t2550 *, t52 *, const MethodInfo*))m13733_gshared)(__this, p0, method)
extern "C" t7 * m13734_gshared (t2550 * __this, const MethodInfo* method);
#define m13734(__this, method) (( t7 * (*) (t2550 *, const MethodInfo*))m13734_gshared)(__this, method)
extern "C" void m13735_gshared (t2550 * __this, const MethodInfo* method);
#define m13735(__this, method) (( void (*) (t2550 *, const MethodInfo*))m13735_gshared)(__this, method)
extern "C" bool m13736_gshared (t2550 * __this, const MethodInfo* method);
#define m13736(__this, method) (( bool (*) (t2550 *, const MethodInfo*))m13736_gshared)(__this, method)
extern "C" t379  m13737_gshared (t2550 * __this, const MethodInfo* method);
#define m13737(__this, method) (( t379  (*) (t2550 *, const MethodInfo*))m13737_gshared)(__this, method)
