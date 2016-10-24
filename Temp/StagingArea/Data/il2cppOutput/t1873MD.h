#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1873;
#include "t726.h"

extern "C" void m10216_gshared (t1873 * __this, const MethodInfo* method);
#define m10216(__this, method) (( void (*) (t1873 *, const MethodInfo*))m10216_gshared)(__this, method)
extern "C" int32_t m18000_gshared (t1873 * __this, t726  p0, t726  p1, const MethodInfo* method);
#define m18000(__this, p0, p1, method) (( int32_t (*) (t1873 *, t726 , t726 , const MethodInfo*))m18000_gshared)(__this, p0, p1, method)
