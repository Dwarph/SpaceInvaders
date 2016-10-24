#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2679;

extern "C" void m15596_gshared (t2679 * __this, const MethodInfo* method);
#define m15596(__this, method) (( void (*) (t2679 *, const MethodInfo*))m15596_gshared)(__this, method)
extern "C" int32_t m15597_gshared (t2679 * __this, int64_t p0, const MethodInfo* method);
#define m15597(__this, p0, method) (( int32_t (*) (t2679 *, int64_t, const MethodInfo*))m15597_gshared)(__this, p0, method)
extern "C" bool m15598_gshared (t2679 * __this, int64_t p0, int64_t p1, const MethodInfo* method);
#define m15598(__this, p0, p1, method) (( bool (*) (t2679 *, int64_t, int64_t, const MethodInfo*))m15598_gshared)(__this, p0, p1, method)
