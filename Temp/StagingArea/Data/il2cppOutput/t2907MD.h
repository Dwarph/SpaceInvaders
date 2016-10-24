#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2907;
#include "t726.h"

extern "C" void m18005_gshared (t2907 * __this, const MethodInfo* method);
#define m18005(__this, method) (( void (*) (t2907 *, const MethodInfo*))m18005_gshared)(__this, method)
extern "C" int32_t m18006_gshared (t2907 * __this, t726  p0, t726  p1, const MethodInfo* method);
#define m18006(__this, p0, p1, method) (( int32_t (*) (t2907 *, t726 , t726 , const MethodInfo*))m18006_gshared)(__this, p0, p1, method)
