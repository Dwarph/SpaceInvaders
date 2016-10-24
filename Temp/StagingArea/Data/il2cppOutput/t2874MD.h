#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2874;
struct t7;

extern "C" void m17783_gshared (t2874 * __this, const MethodInfo* method);
#define m17783(__this, method) (( void (*) (t2874 *, const MethodInfo*))m17783_gshared)(__this, method)
extern "C" int32_t m17784_gshared (t2874 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m17784(__this, p0, p1, method) (( int32_t (*) (t2874 *, t7 *, t7 *, const MethodInfo*))m17784_gshared)(__this, p0, p1, method)
