#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1872;
#include "t505.h"

extern "C" void m10215_gshared (t1872 * __this, const MethodInfo* method);
#define m10215(__this, method) (( void (*) (t1872 *, const MethodInfo*))m10215_gshared)(__this, method)
extern "C" int32_t m17990_gshared (t1872 * __this, t505  p0, const MethodInfo* method);
#define m17990(__this, p0, method) (( int32_t (*) (t1872 *, t505 , const MethodInfo*))m17990_gshared)(__this, p0, method)
extern "C" bool m17991_gshared (t1872 * __this, t505  p0, t505  p1, const MethodInfo* method);
#define m17991(__this, p0, p1, method) (( bool (*) (t1872 *, t505 , t505 , const MethodInfo*))m17991_gshared)(__this, p0, p1, method)
