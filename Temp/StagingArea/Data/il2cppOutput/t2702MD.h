#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2702;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"

extern "C" void m16008_gshared (t2702 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m16008(__this, p0, p1, method) (( void (*) (t2702 *, t7 *, t226, const MethodInfo*))m16008_gshared)(__this, p0, p1, method)
extern "C" t1083  m16009_gshared (t2702 * __this, uint64_t p0, t7 * p1, const MethodInfo* method);
#define m16009(__this, p0, p1, method) (( t1083  (*) (t2702 *, uint64_t, t7 *, const MethodInfo*))m16009_gshared)(__this, p0, p1, method)
extern "C" t7 * m16010_gshared (t2702 * __this, uint64_t p0, t7 * p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m16010(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2702 *, uint64_t, t7 *, t213 *, t7 *, const MethodInfo*))m16010_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m16011_gshared (t2702 * __this, t7 * p0, const MethodInfo* method);
#define m16011(__this, p0, method) (( t1083  (*) (t2702 *, t7 *, const MethodInfo*))m16011_gshared)(__this, p0, method)
