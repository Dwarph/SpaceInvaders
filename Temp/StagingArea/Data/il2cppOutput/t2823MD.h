#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2823;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17424_gshared (t2823 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17424(__this, p0, p1, method) (( void (*) (t2823 *, t7 *, t226, const MethodInfo*))m17424_gshared)(__this, p0, p1, method)
extern "C" t7 * m17425_gshared (t2823 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
#define m17425(__this, p0, p1, method) (( t7 * (*) (t2823 *, t7 *, uint8_t, const MethodInfo*))m17425_gshared)(__this, p0, p1, method)
extern "C" t7 * m17426_gshared (t2823 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17426(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2823 *, t7 *, uint8_t, t213 *, t7 *, const MethodInfo*))m17426_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t7 * m17427_gshared (t2823 * __this, t7 * p0, const MethodInfo* method);
#define m17427(__this, p0, method) (( t7 * (*) (t2823 *, t7 *, const MethodInfo*))m17427_gshared)(__this, p0, method)
