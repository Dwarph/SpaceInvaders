#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2511;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t223.h"

extern "C" void m13146_gshared (t2511 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m13146(__this, p0, p1, method) (( void (*) (t2511 *, t7 *, t226, const MethodInfo*))m13146_gshared)(__this, p0, p1, method)
extern "C" bool m13147_gshared (t2511 * __this, t223  p0, const MethodInfo* method);
#define m13147(__this, p0, method) (( bool (*) (t2511 *, t223 , const MethodInfo*))m13147_gshared)(__this, p0, method)
extern "C" t7 * m13148_gshared (t2511 * __this, t223  p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m13148(__this, p0, p1, p2, method) (( t7 * (*) (t2511 *, t223 , t213 *, t7 *, const MethodInfo*))m13148_gshared)(__this, p0, p1, p2, method)
extern "C" bool m13149_gshared (t2511 * __this, t7 * p0, const MethodInfo* method);
#define m13149(__this, p0, method) (( bool (*) (t2511 *, t7 *, const MethodInfo*))m13149_gshared)(__this, p0, method)
