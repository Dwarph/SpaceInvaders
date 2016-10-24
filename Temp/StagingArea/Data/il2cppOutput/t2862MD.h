#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2862;
struct t7;
struct t52;

extern "C" void m17723_gshared (t2862 * __this, t52 * p0, const MethodInfo* method);
#define m17723(__this, p0, method) (( void (*) (t2862 *, t52 *, const MethodInfo*))m17723_gshared)(__this, p0, method)
extern "C" t7 * m17724_gshared (t2862 * __this, const MethodInfo* method);
#define m17724(__this, method) (( t7 * (*) (t2862 *, const MethodInfo*))m17724_gshared)(__this, method)
extern "C" void m17725_gshared (t2862 * __this, const MethodInfo* method);
#define m17725(__this, method) (( void (*) (t2862 *, const MethodInfo*))m17725_gshared)(__this, method)
extern "C" bool m17726_gshared (t2862 * __this, const MethodInfo* method);
#define m17726(__this, method) (( bool (*) (t2862 *, const MethodInfo*))m17726_gshared)(__this, method)
extern "C" int8_t m17727_gshared (t2862 * __this, const MethodInfo* method);
#define m17727(__this, method) (( int8_t (*) (t2862 *, const MethodInfo*))m17727_gshared)(__this, method)
