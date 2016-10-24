#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2911;
#include "t727.h"

extern "C" void m18026_gshared (t2911 * __this, const MethodInfo* method);
#define m18026(__this, method) (( void (*) (t2911 *, const MethodInfo*))m18026_gshared)(__this, method)
extern "C" int32_t m18027_gshared (t2911 * __this, t727  p0, t727  p1, const MethodInfo* method);
#define m18027(__this, p0, p1, method) (( int32_t (*) (t2911 *, t727 , t727 , const MethodInfo*))m18027_gshared)(__this, p0, p1, method)
