#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2909;
#include "t726.h"

extern "C" void m18014_gshared (t2909 * __this, const MethodInfo* method);
#define m18014(__this, method) (( void (*) (t2909 *, const MethodInfo*))m18014_gshared)(__this, method)
extern "C" int32_t m18015_gshared (t2909 * __this, t726  p0, const MethodInfo* method);
#define m18015(__this, p0, method) (( int32_t (*) (t2909 *, t726 , const MethodInfo*))m18015_gshared)(__this, p0, method)
extern "C" bool m18016_gshared (t2909 * __this, t726  p0, t726  p1, const MethodInfo* method);
#define m18016(__this, p0, p1, method) (( bool (*) (t2909 *, t726 , t726 , const MethodInfo*))m18016_gshared)(__this, p0, p1, method)
