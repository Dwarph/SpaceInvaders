#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2827;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t2818.h"

extern "C" void m17455_gshared (t2827 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17455(__this, p0, p1, method) (( void (*) (t2827 *, t7 *, t226, const MethodInfo*))m17455_gshared)(__this, p0, p1, method)
extern "C" t2818  m17456_gshared (t2827 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
#define m17456(__this, p0, p1, method) (( t2818  (*) (t2827 *, t7 *, uint8_t, const MethodInfo*))m17456_gshared)(__this, p0, p1, method)
extern "C" t7 * m17457_gshared (t2827 * __this, t7 * p0, uint8_t p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m17457(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2827 *, t7 *, uint8_t, t213 *, t7 *, const MethodInfo*))m17457_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2818  m17458_gshared (t2827 * __this, t7 * p0, const MethodInfo* method);
#define m17458(__this, p0, method) (( t2818  (*) (t2827 *, t7 *, const MethodInfo*))m17458_gshared)(__this, p0, method)
