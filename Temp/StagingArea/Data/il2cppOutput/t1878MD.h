#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1878;
#include "t991.h"

extern "C" void m10224_gshared (t1878 * __this, const MethodInfo* method);
#define m10224(__this, method) (( void (*) (t1878 *, const MethodInfo*))m10224_gshared)(__this, method)
extern "C" int32_t m18045_gshared (t1878 * __this, t991  p0, const MethodInfo* method);
#define m18045(__this, p0, method) (( int32_t (*) (t1878 *, t991 , const MethodInfo*))m18045_gshared)(__this, p0, method)
extern "C" bool m18046_gshared (t1878 * __this, t991  p0, t991  p1, const MethodInfo* method);
#define m18046(__this, p0, p1, method) (( bool (*) (t1878 *, t991 , t991 , const MethodInfo*))m18046_gshared)(__this, p0, p1, method)
