#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2652;
struct t7;
struct t212;
struct t213;
#include "t226.h"
#include "t380.h"

extern "C" void m15254_gshared (t2652 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m15254(__this, p0, p1, method) (( void (*) (t2652 *, t7 *, t226, const MethodInfo*))m15254_gshared)(__this, p0, p1, method)
extern "C" int32_t m15255_gshared (t2652 * __this, t380  p0, t380  p1, const MethodInfo* method);
#define m15255(__this, p0, p1, method) (( int32_t (*) (t2652 *, t380 , t380 , const MethodInfo*))m15255_gshared)(__this, p0, p1, method)
extern "C" t7 * m15256_gshared (t2652 * __this, t380  p0, t380  p1, t213 * p2, t7 * p3, const MethodInfo* method);
#define m15256(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2652 *, t380 , t380 , t213 *, t7 *, const MethodInfo*))m15256_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15257_gshared (t2652 * __this, t7 * p0, const MethodInfo* method);
#define m15257(__this, p0, method) (( int32_t (*) (t2652 *, t7 *, const MethodInfo*))m15257_gshared)(__this, p0, method)
