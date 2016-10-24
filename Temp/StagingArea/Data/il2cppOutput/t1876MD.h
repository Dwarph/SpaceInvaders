#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1876;
#include "t727.h"

extern "C" void m10222_gshared (t1876 * __this, const MethodInfo* method);
#define m10222(__this, method) (( void (*) (t1876 *, const MethodInfo*))m10222_gshared)(__this, method)
extern "C" int32_t m18028_gshared (t1876 * __this, t727  p0, const MethodInfo* method);
#define m18028(__this, p0, method) (( int32_t (*) (t1876 *, t727 , const MethodInfo*))m18028_gshared)(__this, p0, method)
extern "C" bool m18029_gshared (t1876 * __this, t727  p0, t727  p1, const MethodInfo* method);
#define m18029(__this, p0, p1, method) (( bool (*) (t1876 *, t727 , t727 , const MethodInfo*))m18029_gshared)(__this, p0, p1, method)
