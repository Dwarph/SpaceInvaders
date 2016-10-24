#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2910;
struct t7;
#include "t727.h"

extern "C" void m18022_gshared (t2910 * __this, const MethodInfo* method);
#define m18022(__this, method) (( void (*) (t2910 *, const MethodInfo*))m18022_gshared)(__this, method)
extern "C" void m18023_gshared (t7 * __this , const MethodInfo* method);
#define m18023(__this , method) (( void (*) (t7 * , const MethodInfo*))m18023_gshared)(__this , method)
extern "C" int32_t m18024_gshared (t2910 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m18024(__this, p0, p1, method) (( int32_t (*) (t2910 *, t7 *, t7 *, const MethodInfo*))m18024_gshared)(__this, p0, p1, method)
extern "C" t2910 * m18025_gshared (t7 * __this , const MethodInfo* method);
#define m18025(__this , method) (( t2910 * (*) (t7 * , const MethodInfo*))m18025_gshared)(__this , method)
