#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2903;
#include "t505.h"

extern "C" void m17988_gshared (t2903 * __this, const MethodInfo* method);
#define m17988(__this, method) (( void (*) (t2903 *, const MethodInfo*))m17988_gshared)(__this, method)
extern "C" int32_t m17989_gshared (t2903 * __this, t505  p0, t505  p1, const MethodInfo* method);
#define m17989(__this, p0, p1, method) (( int32_t (*) (t2903 *, t505 , t505 , const MethodInfo*))m17989_gshared)(__this, p0, p1, method)
