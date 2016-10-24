#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2906;
struct t7;
#include "t726.h"

extern "C" void m18001_gshared (t2906 * __this, const MethodInfo* method);
#define m18001(__this, method) (( void (*) (t2906 *, const MethodInfo*))m18001_gshared)(__this, method)
extern "C" void m18002_gshared (t7 * __this , const MethodInfo* method);
#define m18002(__this , method) (( void (*) (t7 * , const MethodInfo*))m18002_gshared)(__this , method)
extern "C" int32_t m18003_gshared (t2906 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m18003(__this, p0, p1, method) (( int32_t (*) (t2906 *, t7 *, t7 *, const MethodInfo*))m18003_gshared)(__this, p0, p1, method)
extern "C" t2906 * m18004_gshared (t7 * __this , const MethodInfo* method);
#define m18004(__this , method) (( t2906 * (*) (t7 * , const MethodInfo*))m18004_gshared)(__this , method)
