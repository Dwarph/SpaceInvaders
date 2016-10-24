#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1874;
#include "t726.h"

extern "C" void m10217_gshared (t1874 * __this, const MethodInfo* method);
#define m10217(__this, method) (( void (*) (t1874 *, const MethodInfo*))m10217_gshared)(__this, method)
extern "C" int32_t m18007_gshared (t1874 * __this, t726  p0, const MethodInfo* method);
#define m18007(__this, p0, method) (( int32_t (*) (t1874 *, t726 , const MethodInfo*))m18007_gshared)(__this, p0, method)
extern "C" bool m18008_gshared (t1874 * __this, t726  p0, t726  p1, const MethodInfo* method);
#define m18008(__this, p0, p1, method) (( bool (*) (t1874 *, t726 , t726 , const MethodInfo*))m18008_gshared)(__this, p0, p1, method)
