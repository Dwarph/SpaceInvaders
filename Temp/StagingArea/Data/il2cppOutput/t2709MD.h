#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2709;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m15981_gshared (t2709 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15981(__this, p0, p1, method) (( void (*) (t2709 *, t7 *, t226, const MethodInfo*))m15981_gshared)(__this, p0, p1, method)
extern "C" uint64_t m15982_gshared (t2709 * __this, uint64_t p0, t7 * p1, const MethodInfo* method);
#define m15982(__this, p0, p1, method) (( uint64_t (*) (t2709 *, uint64_t, t7 *, const MethodInfo*))m15982_gshared)(__this, p0, p1, method)
extern "C" t7 * m15983_gshared (t2709 * __this, uint64_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m15983(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2709 *, uint64_t, t7 *, t213 *, t7 *, const MethodInfo*))m15983_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint64_t m15984_gshared (t2709 * __this, t7 * p0, const MethodInfo* method);
#define m15984(__this, p0, method) (( uint64_t (*) (t2709 *, t7 *, const MethodInfo*))m15984_gshared)(__this, p0, method)
