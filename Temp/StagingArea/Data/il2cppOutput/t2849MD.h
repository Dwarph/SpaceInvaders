#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2849;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2841.h"

extern "C" void m17665_gshared (t2849 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17665(__this, p0, p1, method) (( void (*) (t2849 *, t7 *, t226, const MethodInfo*))m17665_gshared)(__this, p0, p1, method)
extern "C" t2841  m17666_gshared (t2849 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m17666(__this, p0, p1, method) (( t2841  (*) (t2849 *, int32_t, int32_t, const MethodInfo*))m17666_gshared)(__this, p0, p1, method)
extern "C" t7 * m17667_gshared (t2849 * __this, int32_t p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17667(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2849 *, int32_t, int32_t, t213 *, t7 *, const MethodInfo*))m17667_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2841  m17668_gshared (t2849 * __this, t7 * p0, const MethodInfo* method);
#define m17668(__this, p0, method) (( t2841  (*) (t2849 *, t7 *, const MethodInfo*))m17668_gshared)(__this, p0, method)
