#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2715;
struct t7;

extern "C" void m16022_gshared (t2715 * __this, const MethodInfo* method);
#define m16022(__this, method) (( void (*) (t2715 *, const MethodInfo*))m16022_gshared)(__this, method)
extern "C" void m16023_gshared (t7 * __this , const MethodInfo* method);
#define m16023(__this , method) (( void (*) (t7 * , const MethodInfo*))m16023_gshared)(__this , method)
extern "C" int32_t m16024_gshared (t2715 * __this, t7 * p0, const MethodInfo* method);
#define m16024(__this, p0, method) (( int32_t (*) (t2715 *, t7 *, const MethodInfo*))m16024_gshared)(__this, p0, method)
extern "C" bool m16025_gshared (t2715 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16025(__this, p0, p1, method) (( bool (*) (t2715 *, t7 *, t7 *, const MethodInfo*))m16025_gshared)(__this, p0, p1, method)
extern "C" t2715 * m16026_gshared (t7 * __this , const MethodInfo* method);
#define m16026(__this , method) (( t2715 * (*) (t7 * , const MethodInfo*))m16026_gshared)(__this , method)
