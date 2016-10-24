#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2406;
#include "t130.h"

extern "C" void m11721_gshared (t2406 * __this, const MethodInfo* method);
#define m11721(__this, method) (( void (*) (t2406 *, const MethodInfo*))m11721_gshared)(__this, method)
extern "C" int32_t m11722_gshared (t2406 * __this, t130  p0, t130  p1, const MethodInfo* method);
#define m11722(__this, p0, p1, method) (( int32_t (*) (t2406 *, t130 , t130 , const MethodInfo*))m11722_gshared)(__this, p0, p1, method)
