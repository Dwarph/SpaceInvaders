#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2592;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m14275_gshared (t2592 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m14275(__this, p0, p1, method) (( void (*) (t2592 *, t7 *, t226, const MethodInfo*))m14275_gshared)(__this, p0, p1, method)
extern "C" float m14277_gshared (t2592 * __this, t7 * p0, const MethodInfo* method);
#define m14277(__this, p0, method) (( float (*) (t2592 *, t7 *, const MethodInfo*))m14277_gshared)(__this, p0, method)
extern "C" t7 * m14279_gshared (t2592 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m14279(__this, p0, p1, p2, method) (( t7 * (*) (t2592 *, t7 *, t213 *, t7 *, const MethodInfo*))m14279_gshared)(__this, p0, p1, p2, method)
extern "C" float m14281_gshared (t2592 * __this, t7 * p0, const MethodInfo* method);
#define m14281(__this, p0, method) (( float (*) (t2592 *, t7 *, const MethodInfo*))m14281_gshared)(__this, p0, method)
