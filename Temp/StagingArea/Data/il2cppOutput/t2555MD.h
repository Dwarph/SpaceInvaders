#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2555;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t74.h"

extern "C" void m13766_gshared (t2555 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m13766(__this, p0, p1, method) (( void (*) (t2555 *, t7 *, t226, const MethodInfo*))m13766_gshared)(__this, p0, p1, method)
extern "C" void m13767_gshared (t2555 * __this, t74  p0, const MethodInfo* method);
#define m13767(__this, p0, method) (( void (*) (t2555 *, t74 , const MethodInfo*))m13767_gshared)(__this, p0, method)
extern "C" t7 * m13768_gshared (t2555 * __this, t74  p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m13768(__this, p0, p1, p2, method) (( t7 * (*) (t2555 *, t74 , t213 *, t7 *, const MethodInfo*))m13768_gshared)(__this, p0, p1, p2, method)
extern "C" void m13769_gshared (t2555 * __this, t7 * p0, const MethodInfo* method);
#define m13769(__this, p0, method) (( void (*) (t2555 *, t7 *, const MethodInfo*))m13769_gshared)(__this, p0, method)
