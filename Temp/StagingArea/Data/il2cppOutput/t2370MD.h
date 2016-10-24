#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2370;
struct t7;
struct t52;

extern "C" void m11269_gshared (t2370 * __this, t52 * p0, const MethodInfo* method);
#define m11269(__this, p0, method) (( void (*) (t2370 *, t52 *, const MethodInfo*))m11269_gshared)(__this, p0, method)
extern "C" t7 * m11270_gshared (t2370 * __this, const MethodInfo* method);
#define m11270(__this, method) (( t7 * (*) (t2370 *, const MethodInfo*))m11270_gshared)(__this, method)
extern "C" void m11271_gshared (t2370 * __this, const MethodInfo* method);
#define m11271(__this, method) (( void (*) (t2370 *, const MethodInfo*))m11271_gshared)(__this, method)
extern "C" bool m11272_gshared (t2370 * __this, const MethodInfo* method);
#define m11272(__this, method) (( bool (*) (t2370 *, const MethodInfo*))m11272_gshared)(__this, method)
extern "C" int32_t m11273_gshared (t2370 * __this, const MethodInfo* method);
#define m11273(__this, method) (( int32_t (*) (t2370 *, const MethodInfo*))m11273_gshared)(__this, method)
