#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2405;
struct t7;
#include "t130.h"

extern "C" void m11717_gshared (t2405 * __this, const MethodInfo* method);
#define m11717(__this, method) (( void (*) (t2405 *, const MethodInfo*))m11717_gshared)(__this, method)
extern "C" void m11718_gshared (t7 * __this , const MethodInfo* method);
#define m11718(__this , method) (( void (*) (t7 * , const MethodInfo*))m11718_gshared)(__this , method)
extern "C" int32_t m11719_gshared (t2405 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m11719(__this, p0, p1, method) (( int32_t (*) (t2405 *, t7 *, t7 *, const MethodInfo*))m11719_gshared)(__this, p0, p1, method)
extern "C" t2405 * m11720_gshared (t7 * __this , const MethodInfo* method);
#define m11720(__this , method) (( t2405 * (*) (t7 * , const MethodInfo*))m11720_gshared)(__this , method)
