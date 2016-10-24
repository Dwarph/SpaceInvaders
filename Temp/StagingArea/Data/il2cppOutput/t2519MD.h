#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2519;
#include "t223.h"

extern "C" void m13266_gshared (t2519 * __this, const MethodInfo* method);
#define m13266(__this, method) (( void (*) (t2519 *, const MethodInfo*))m13266_gshared)(__this, method)
extern "C" int32_t m13267_gshared (t2519 * __this, t223  p0, t223  p1, const MethodInfo* method);
#define m13267(__this, p0, p1, method) (( int32_t (*) (t2519 *, t223 , t223 , const MethodInfo*))m13267_gshared)(__this, p0, p1, method)
