#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2516;
struct t7;
#include "t223.h"

extern "C" void m13254_gshared (t2516 * __this, const MethodInfo* method);
#define m13254(__this, method) (( void (*) (t2516 *, const MethodInfo*))m13254_gshared)(__this, method)
extern "C" void m13255_gshared (t7 * __this , const MethodInfo* method);
#define m13255(__this , method) (( void (*) (t7 * , const MethodInfo*))m13255_gshared)(__this , method)
extern "C" int32_t m13256_gshared (t2516 * __this, t7 * p0, const MethodInfo* method);
#define m13256(__this, p0, method) (( int32_t (*) (t2516 *, t7 *, const MethodInfo*))m13256_gshared)(__this, p0, method)
extern "C" bool m13257_gshared (t2516 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m13257(__this, p0, p1, method) (( bool (*) (t2516 *, t7 *, t7 *, const MethodInfo*))m13257_gshared)(__this, p0, p1, method)
extern "C" t2516 * m13258_gshared (t7 * __this , const MethodInfo* method);
#define m13258(__this , method) (( t2516 * (*) (t7 * , const MethodInfo*))m13258_gshared)(__this , method)
