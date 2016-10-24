#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2917;
#include "t991.h"

extern "C" void m18052_gshared (t2917 * __this, const MethodInfo* method);
#define m18052(__this, method) (( void (*) (t2917 *, const MethodInfo*))m18052_gshared)(__this, method)
extern "C" int32_t m18053_gshared (t2917 * __this, t991  p0, const MethodInfo* method);
#define m18053(__this, p0, method) (( int32_t (*) (t2917 *, t991 , const MethodInfo*))m18053_gshared)(__this, p0, method)
extern "C" bool m18054_gshared (t2917 * __this, t991  p0, t991  p1, const MethodInfo* method);
#define m18054(__this, p0, p1, method) (( bool (*) (t2917 *, t991 , t991 , const MethodInfo*))m18054_gshared)(__this, p0, p1, method)
