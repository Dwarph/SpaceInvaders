#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2851;
struct t7;

extern "C" void m17675_gshared (t2851 * __this, const MethodInfo* method);
#define m17675(__this, method) (( void (*) (t2851 *, const MethodInfo*))m17675_gshared)(__this, method)
extern "C" void m17676_gshared (t7 * __this , const MethodInfo* method);
#define m17676(__this , method) (( void (*) (t7 * , const MethodInfo*))m17676_gshared)(__this , method)
extern "C" int32_t m17677_gshared (t2851 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m17677(__this, p0, p1, method) (( int32_t (*) (t2851 *, t7 *, t7 *, const MethodInfo*))m17677_gshared)(__this, p0, p1, method)
extern "C" t2851 * m17678_gshared (t7 * __this , const MethodInfo* method);
#define m17678(__this , method) (( t2851 * (*) (t7 * , const MethodInfo*))m17678_gshared)(__this , method)
