#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2438;
struct t7;
struct t47;

extern "C" void m12256_gshared (t2438 * __this, int32_t p0, t7 * p1, const MethodInfo* method);
#define m12256(__this, p0, p1, method) (( void (*) (t2438 *, int32_t, t7 *, const MethodInfo*))m12256_gshared)(__this, p0, p1, method)
extern "C" int32_t m12257_gshared (t2438 * __this, const MethodInfo* method);
#define m12257(__this, method) (( int32_t (*) (t2438 *, const MethodInfo*))m12257_gshared)(__this, method)
extern "C" void m12258_gshared (t2438 * __this, int32_t p0, const MethodInfo* method);
#define m12258(__this, p0, method) (( void (*) (t2438 *, int32_t, const MethodInfo*))m12258_gshared)(__this, p0, method)
extern "C" t7 * m12259_gshared (t2438 * __this, const MethodInfo* method);
#define m12259(__this, method) (( t7 * (*) (t2438 *, const MethodInfo*))m12259_gshared)(__this, method)
extern "C" void m12260_gshared (t2438 * __this, t7 * p0, const MethodInfo* method);
#define m12260(__this, p0, method) (( void (*) (t2438 *, t7 *, const MethodInfo*))m12260_gshared)(__this, p0, method)
extern "C" t47* m12261_gshared (t2438 * __this, const MethodInfo* method);
#define m12261(__this, method) (( t47* (*) (t2438 *, const MethodInfo*))m12261_gshared)(__this, method)
