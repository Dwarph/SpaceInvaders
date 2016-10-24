#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2671;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m15547_gshared (t2671 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15547(__this, p0, p1, method) (( void (*) (t2671 *, t7 *, t226, const MethodInfo*))m15547_gshared)(__this, p0, p1, method)
extern "C" t7 * m15548_gshared (t2671 * __this, t7 * p0, int64_t p1, const MethodInfo* method);
#define m15548(__this, p0, p1, method) (( t7 * (*) (t2671 *, t7 *, int64_t, const MethodInfo*))m15548_gshared)(__this, p0, p1, method)
extern "C" t7 * m15549_gshared (t2671 * __this, t7 * p0, int64_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m15549(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2671 *, t7 *, int64_t, t213 *, t7 *, const MethodInfo*))m15549_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m15550_gshared (t2671 * __this, t7 * p0, const MethodInfo* method);
#define m15550(__this, p0, method) (( t7 * (*) (t2671 *, t7 *, const MethodInfo*))m15550_gshared)(__this, p0, method)
