#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2853;

extern "C" void m17681_gshared (t2853 * __this, const MethodInfo* method);
#define m17681(__this, method) (( void (*) (t2853 *, const MethodInfo*))m17681_gshared)(__this, method)
extern "C" int32_t m17682_gshared (t2853 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m17682(__this, p0, p1, method) (( int32_t (*) (t2853 *, int32_t, int32_t, const MethodInfo*))m17682_gshared)(__this, p0, p1, method)
