#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2908;
struct t7;
#include "t726.h"

extern "C" void m18009_gshared (t2908 * __this, const MethodInfo* method);
#define m18009(__this, method) (( void (*) (t2908 *, const MethodInfo*))m18009_gshared)(__this, method)
extern "C" void m18010_gshared (t7 * __this , const MethodInfo* method);
#define m18010(__this , method) (( void (*) (t7 * , const MethodInfo*))m18010_gshared)(__this , method)
extern "C" int32_t m18011_gshared (t2908 * __this, t7 * p0, const MethodInfo* method);
#define m18011(__this, p0, method) (( int32_t (*) (t2908 *, t7 *, const MethodInfo*))m18011_gshared)(__this, p0, method)
extern "C" bool m18012_gshared (t2908 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m18012(__this, p0, p1, method) (( bool (*) (t2908 *, t7 *, t7 *, const MethodInfo*))m18012_gshared)(__this, p0, p1, method)
extern "C" t2908 * m18013_gshared (t7 * __this , const MethodInfo* method);
#define m18013(__this , method) (( t2908 * (*) (t7 * , const MethodInfo*))m18013_gshared)(__this , method)
