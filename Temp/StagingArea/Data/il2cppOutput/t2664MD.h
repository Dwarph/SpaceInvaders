#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2664;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t1083.h"

extern "C" void m15574_gshared (t2664 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15574(__this, p0, p1, method) (( void (*) (t2664 *, t7 *, t226, const MethodInfo*))m15574_gshared)(__this, p0, p1, method)
extern "C" t1083  m15575_gshared (t2664 * __this, t7 * p0, int64_t p1, const MethodInfo* method);
#define m15575(__this, p0, p1, method) (( t1083  (*) (t2664 *, t7 *, int64_t, const MethodInfo*))m15575_gshared)(__this, p0, p1, method)
extern "C" t7 * m15576_gshared (t2664 * __this, t7 * p0, int64_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m15576(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2664 *, t7 *, int64_t, t213 *, t7 *, const MethodInfo*))m15576_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1083  m15577_gshared (t2664 * __this, t7 * p0, const MethodInfo* method);
#define m15577(__this, p0, method) (( t1083  (*) (t2664 *, t7 *, const MethodInfo*))m15577_gshared)(__this, p0, method)
