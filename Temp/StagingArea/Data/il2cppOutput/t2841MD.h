#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2841;
struct t47;

extern "C" void m17601_gshared (t2841 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m17601(__this, p0, p1, method) (( void (*) (t2841 *, int32_t, int32_t, const MethodInfo*))m17601_gshared)(__this, p0, p1, method)
extern "C" int32_t m17602_gshared (t2841 * __this, const MethodInfo* method);
#define m17602(__this, method) (( int32_t (*) (t2841 *, const MethodInfo*))m17602_gshared)(__this, method)
extern "C" void m17603_gshared (t2841 * __this, int32_t p0, const MethodInfo* method);
#define m17603(__this, p0, method) (( void (*) (t2841 *, int32_t, const MethodInfo*))m17603_gshared)(__this, p0, method)
extern "C" int32_t m17604_gshared (t2841 * __this, const MethodInfo* method);
#define m17604(__this, method) (( int32_t (*) (t2841 *, const MethodInfo*))m17604_gshared)(__this, method)
extern "C" void m17605_gshared (t2841 * __this, int32_t p0, const MethodInfo* method);
#define m17605(__this, p0, method) (( void (*) (t2841 *, int32_t, const MethodInfo*))m17605_gshared)(__this, p0, method)
extern "C" t47* m17606_gshared (t2841 * __this, const MethodInfo* method);
#define m17606(__this, method) (( t47* (*) (t2841 *, const MethodInfo*))m17606_gshared)(__this, method)
