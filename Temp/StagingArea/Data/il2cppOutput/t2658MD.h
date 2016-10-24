#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2658;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t379.h"

extern "C" void m15386_gshared (t2658 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15386(__this, p0, p1, method) (( void (*) (t2658 *, t7 *, t226, const MethodInfo*))m15386_gshared)(__this, p0, p1, method)
extern "C" bool m15387_gshared (t2658 * __this, t379  p0, const MethodInfo* method);
#define m15387(__this, p0, method) (( bool (*) (t2658 *, t379 , const MethodInfo*))m15387_gshared)(__this, p0, method)
extern "C" t7 * m15388_gshared (t2658 * __this, t379  p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m15388(__this, p0, p1, p2, method) (( t7 * (*) (t2658 *, t379 , t213 *, t7 *, const MethodInfo*))m15388_gshared)(__this, p0, p1, p2, method)
extern "C" bool m15389_gshared (t2658 * __this, t7 * p0, const MethodInfo* method);
#define m15389(__this, p0, method) (( bool (*) (t2658 *, t7 *, const MethodInfo*))m15389_gshared)(__this, p0, method)
