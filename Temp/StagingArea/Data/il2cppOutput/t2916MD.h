#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2916;
struct t7;
#include "t991.h"

extern "C" void m18047_gshared (t2916 * __this, const MethodInfo* method);
#define m18047(__this, method) (( void (*) (t2916 *, const MethodInfo*))m18047_gshared)(__this, method)
extern "C" void m18048_gshared (t7 * __this , const MethodInfo* method);
#define m18048(__this , method) (( void (*) (t7 * , const MethodInfo*))m18048_gshared)(__this , method)
extern "C" int32_t m18049_gshared (t2916 * __this, t7 * p0, const MethodInfo* method);
#define m18049(__this, p0, method) (( int32_t (*) (t2916 *, t7 *, const MethodInfo*))m18049_gshared)(__this, p0, method)
extern "C" bool m18050_gshared (t2916 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m18050(__this, p0, p1, method) (( bool (*) (t2916 *, t7 *, t7 *, const MethodInfo*))m18050_gshared)(__this, p0, p1, method)
extern "C" t2916 * m18051_gshared (t7 * __this , const MethodInfo* method);
#define m18051(__this , method) (( t2916 * (*) (t7 * , const MethodInfo*))m18051_gshared)(__this , method)
