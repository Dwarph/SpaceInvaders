#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2912;
struct t7;
#include "t727.h"

extern "C" void m18030_gshared (t2912 * __this, const MethodInfo* method);
#define m18030(__this, method) (( void (*) (t2912 *, const MethodInfo*))m18030_gshared)(__this, method)
extern "C" void m18031_gshared (t7 * __this , const MethodInfo* method);
#define m18031(__this , method) (( void (*) (t7 * , const MethodInfo*))m18031_gshared)(__this , method)
extern "C" int32_t m18032_gshared (t2912 * __this, t7 * p0, const MethodInfo* method);
#define m18032(__this, p0, method) (( int32_t (*) (t2912 *, t7 *, const MethodInfo*))m18032_gshared)(__this, p0, method)
extern "C" bool m18033_gshared (t2912 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m18033(__this, p0, p1, method) (( bool (*) (t2912 *, t7 *, t7 *, const MethodInfo*))m18033_gshared)(__this, p0, p1, method)
extern "C" t2912 * m18034_gshared (t7 * __this , const MethodInfo* method);
#define m18034(__this , method) (( t2912 * (*) (t7 * , const MethodInfo*))m18034_gshared)(__this , method)
