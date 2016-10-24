#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2678;

extern "C" void m15593_gshared (t2678 * __this, const MethodInfo* method);
#define m15593(__this, method) (( void (*) (t2678 *, const MethodInfo*))m15593_gshared)(__this, method)
extern "C" int32_t m15594_gshared (t2678 * __this, int64_t p0, const MethodInfo* method);
#define m15594(__this, p0, method) (( int32_t (*) (t2678 *, int64_t, const MethodInfo*))m15594_gshared)(__this, p0, method)
extern "C" bool m15595_gshared (t2678 * __this, int64_t p0, int64_t p1, const MethodInfo* method);
#define m15595(__this, p0, p1, method) (( bool (*) (t2678 *, int64_t, int64_t, const MethodInfo*))m15595_gshared)(__this, p0, p1, method)
