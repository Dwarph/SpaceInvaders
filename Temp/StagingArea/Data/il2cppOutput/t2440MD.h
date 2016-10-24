#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2440;
struct t7;
struct t52;
#include "t1403.h"

extern "C" void m12262_gshared (t2440 * __this, t52 * p0, const MethodInfo* method);
#define m12262(__this, p0, method) (( void (*) (t2440 *, t52 *, const MethodInfo*))m12262_gshared)(__this, p0, method)
extern "C" t7 * m12263_gshared (t2440 * __this, const MethodInfo* method);
#define m12263(__this, method) (( t7 * (*) (t2440 *, const MethodInfo*))m12263_gshared)(__this, method)
extern "C" void m12264_gshared (t2440 * __this, const MethodInfo* method);
#define m12264(__this, method) (( void (*) (t2440 *, const MethodInfo*))m12264_gshared)(__this, method)
extern "C" bool m12265_gshared (t2440 * __this, const MethodInfo* method);
#define m12265(__this, method) (( bool (*) (t2440 *, const MethodInfo*))m12265_gshared)(__this, method)
extern "C" t1403  m12266_gshared (t2440 * __this, const MethodInfo* method);
#define m12266(__this, method) (( t1403  (*) (t2440 *, const MethodInfo*))m12266_gshared)(__this, method)
