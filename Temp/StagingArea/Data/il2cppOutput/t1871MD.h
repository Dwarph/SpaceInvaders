#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1871;
#include "t505.h"

extern "C" void m10214_gshared (t1871 * __this, const MethodInfo* method);
#define m10214(__this, method) (( void (*) (t1871 *, const MethodInfo*))m10214_gshared)(__this, method)
extern "C" int32_t m17983_gshared (t1871 * __this, t505  p0, t505  p1, const MethodInfo* method);
#define m17983(__this, p0, p1, method) (( int32_t (*) (t1871 *, t505 , t505 , const MethodInfo*))m17983_gshared)(__this, p0, p1, method)
