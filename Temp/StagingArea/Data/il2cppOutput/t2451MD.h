#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2451;
struct t7;

extern "C" void m12344_gshared (t2451 * __this, const MethodInfo* method);
#define m12344(__this, method) (( void (*) (t2451 *, const MethodInfo*))m12344_gshared)(__this, method)
extern "C" void m12345_gshared (t7 * __this , const MethodInfo* method);
#define m12345(__this , method) (( void (*) (t7 * , const MethodInfo*))m12345_gshared)(__this , method)
extern "C" int32_t m12346_gshared (t2451 * __this, t7 * p0, const MethodInfo* method);
#define m12346(__this, p0, method) (( int32_t (*) (t2451 *, t7 *, const MethodInfo*))m12346_gshared)(__this, p0, method)
extern "C" bool m12347_gshared (t2451 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m12347(__this, p0, p1, method) (( bool (*) (t2451 *, t7 *, t7 *, const MethodInfo*))m12347_gshared)(__this, p0, p1, method)
extern "C" t2451 * m12348_gshared (t7 * __this , const MethodInfo* method);
#define m12348(__this , method) (( t2451 * (*) (t7 * , const MethodInfo*))m12348_gshared)(__this , method)
