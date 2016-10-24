#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2403;
#include "t130.h"

extern "C" void m11710_gshared (t2403 * __this, const MethodInfo* method);
#define m11710(__this, method) (( void (*) (t2403 *, const MethodInfo*))m11710_gshared)(__this, method)
extern "C" int32_t m11711_gshared (t2403 * __this, t130  p0, const MethodInfo* method);
#define m11711(__this, p0, method) (( int32_t (*) (t2403 *, t130 , const MethodInfo*))m11711_gshared)(__this, p0, method)
extern "C" bool m11712_gshared (t2403 * __this, t130  p0, t130  p1, const MethodInfo* method);
#define m11712(__this, p0, p1, method) (( bool (*) (t2403 *, t130 , t130 , const MethodInfo*))m11712_gshared)(__this, p0, p1, method)
