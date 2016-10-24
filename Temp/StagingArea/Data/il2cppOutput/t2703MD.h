#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2703;
struct t7;
struct t47;

extern "C" void m15939_gshared (t2703 * __this, uint64_t p0, t7 * p1, const MethodInfo* method);
#define m15939(__this, p0, p1, method) (( void (*) (t2703 *, uint64_t, t7 *, const MethodInfo*))m15939_gshared)(__this, p0, p1, method)
extern "C" uint64_t m15940_gshared (t2703 * __this, const MethodInfo* method);
#define m15940(__this, method) (( uint64_t (*) (t2703 *, const MethodInfo*))m15940_gshared)(__this, method)
extern "C" void m15941_gshared (t2703 * __this, uint64_t p0, const MethodInfo* method);
#define m15941(__this, p0, method) (( void (*) (t2703 *, uint64_t, const MethodInfo*))m15941_gshared)(__this, p0, method)
extern "C" t7 * m15942_gshared (t2703 * __this, const MethodInfo* method);
#define m15942(__this, method) (( t7 * (*) (t2703 *, const MethodInfo*))m15942_gshared)(__this, method)
extern "C" void m15943_gshared (t2703 * __this, t7 * p0, const MethodInfo* method);
#define m15943(__this, p0, method) (( void (*) (t2703 *, t7 *, const MethodInfo*))m15943_gshared)(__this, p0, method)
extern "C" t47* m15944_gshared (t2703 * __this, const MethodInfo* method);
#define m15944(__this, method) (( t47* (*) (t2703 *, const MethodInfo*))m15944_gshared)(__this, method)
