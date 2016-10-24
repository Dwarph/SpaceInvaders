#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2442;
struct t7;
struct t2436;

extern "C" void m12281_gshared (t2442 * __this, t2436 * p0, const MethodInfo* method);
#define m12281(__this, p0, method) (( void (*) (t2442 *, t2436 *, const MethodInfo*))m12281_gshared)(__this, p0, method)
extern "C" t7 * m12282_gshared (t2442 * __this, const MethodInfo* method);
#define m12282(__this, method) (( t7 * (*) (t2442 *, const MethodInfo*))m12282_gshared)(__this, method)
extern "C" void m12283_gshared (t2442 * __this, const MethodInfo* method);
#define m12283(__this, method) (( void (*) (t2442 *, const MethodInfo*))m12283_gshared)(__this, method)
extern "C" bool m12284_gshared (t2442 * __this, const MethodInfo* method);
#define m12284(__this, method) (( bool (*) (t2442 *, const MethodInfo*))m12284_gshared)(__this, method)
extern "C" int32_t m12285_gshared (t2442 * __this, const MethodInfo* method);
#define m12285(__this, method) (( int32_t (*) (t2442 *, const MethodInfo*))m12285_gshared)(__this, method)
