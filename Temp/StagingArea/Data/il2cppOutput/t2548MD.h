#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2548;
struct t7;
struct t52;
#include "t74.h"

extern "C" void m13723_gshared (t2548 * __this, t52 * p0, const MethodInfo* method);
#define m13723(__this, p0, method) (( void (*) (t2548 *, t52 *, const MethodInfo*))m13723_gshared)(__this, p0, method)
extern "C" t7 * m13724_gshared (t2548 * __this, const MethodInfo* method);
#define m13724(__this, method) (( t7 * (*) (t2548 *, const MethodInfo*))m13724_gshared)(__this, method)
extern "C" void m13725_gshared (t2548 * __this, const MethodInfo* method);
#define m13725(__this, method) (( void (*) (t2548 *, const MethodInfo*))m13725_gshared)(__this, method)
extern "C" bool m13726_gshared (t2548 * __this, const MethodInfo* method);
#define m13726(__this, method) (( bool (*) (t2548 *, const MethodInfo*))m13726_gshared)(__this, method)
extern "C" t74  m13727_gshared (t2548 * __this, const MethodInfo* method);
#define m13727(__this, method) (( t74  (*) (t2548 *, const MethodInfo*))m13727_gshared)(__this, method)
