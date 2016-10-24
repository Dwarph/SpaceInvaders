#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2518;
struct t7;
#include "t223.h"

extern "C" void m13262_gshared (t2518 * __this, const MethodInfo* method);
#define m13262(__this, method) (( void (*) (t2518 *, const MethodInfo*))m13262_gshared)(__this, method)
extern "C" void m13263_gshared (t7 * __this , const MethodInfo* method);
#define m13263(__this , method) (( void (*) (t7 * , const MethodInfo*))m13263_gshared)(__this , method)
extern "C" int32_t m13264_gshared (t2518 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m13264(__this, p0, p1, method) (( int32_t (*) (t2518 *, t7 *, t7 *, const MethodInfo*))m13264_gshared)(__this, p0, p1, method)
extern "C" t2518 * m13265_gshared (t7 * __this , const MethodInfo* method);
#define m13265(__this , method) (( t2518 * (*) (t7 * , const MethodInfo*))m13265_gshared)(__this , method)
