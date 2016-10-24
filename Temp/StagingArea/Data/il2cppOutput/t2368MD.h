#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2368;
struct t7;

extern "C" void m11263_gshared (t2368 * __this, const MethodInfo* method);
#define m11263(__this, method) (( void (*) (t2368 *, const MethodInfo*))m11263_gshared)(__this, method)
extern "C" void m11264_gshared (t7 * __this , const MethodInfo* method);
#define m11264(__this , method) (( void (*) (t7 * , const MethodInfo*))m11264_gshared)(__this , method)
extern "C" int32_t m11265_gshared (t2368 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m11265(__this, p0, p1, method) (( int32_t (*) (t2368 *, t7 *, t7 *, const MethodInfo*))m11265_gshared)(__this, p0, p1, method)
extern "C" t2368 * m11266_gshared (t7 * __this , const MethodInfo* method);
#define m11266(__this , method) (( t2368 * (*) (t7 * , const MethodInfo*))m11266_gshared)(__this , method)
