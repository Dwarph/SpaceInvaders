#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1877;
#include "t991.h"

extern "C" void m10223_gshared (t1877 * __this, const MethodInfo* method);
#define m10223(__this, method) (( void (*) (t1877 *, const MethodInfo*))m10223_gshared)(__this, method)
extern "C" int32_t m18038_gshared (t1877 * __this, t991  p0, t991  p1, const MethodInfo* method);
#define m18038(__this, p0, p1, method) (( int32_t (*) (t1877 *, t991 , t991 , const MethodInfo*))m18038_gshared)(__this, p0, p1, method)
