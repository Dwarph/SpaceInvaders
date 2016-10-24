#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2513;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t223.h"

extern "C" void m13156_gshared (t2513 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m13156(__this, p0, p1, method) (( void (*) (t2513 *, t7 *, t226, const MethodInfo*))m13156_gshared)(__this, p0, p1, method)
extern "C" int32_t m13157_gshared (t2513 * __this, t223  p0, t223  p1, const MethodInfo* method);
#define m13157(__this, p0, p1, method) (( int32_t (*) (t2513 *, t223 , t223 , const MethodInfo*))m13157_gshared)(__this, p0, p1, method)
extern "C" t7 * m13158_gshared (t2513 * __this, t223  p0, t223  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m13158(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2513 *, t223 , t223 , t213 *, t7 *, const MethodInfo*))m13158_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m13159_gshared (t2513 * __this, t7 * p0, const MethodInfo* method);
#define m13159(__this, p0, method) (( int32_t (*) (t2513 *, t7 *, const MethodInfo*))m13159_gshared)(__this, p0, method)
