#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2893;
struct t7;
struct t52;
#include "t713.h"

extern "C" void m17871_gshared (t2893 * __this, t52 * p0, const MethodInfo* method);
#define m17871(__this, p0, method) (( void (*) (t2893 *, t52 *, const MethodInfo*))m17871_gshared)(__this, p0, method)
extern "C" t7 * m17872_gshared (t2893 * __this, const MethodInfo* method);
#define m17872(__this, method) (( t7 * (*) (t2893 *, const MethodInfo*))m17872_gshared)(__this, method)
extern "C" void m17873_gshared (t2893 * __this, const MethodInfo* method);
#define m17873(__this, method) (( void (*) (t2893 *, const MethodInfo*))m17873_gshared)(__this, method)
extern "C" bool m17874_gshared (t2893 * __this, const MethodInfo* method);
#define m17874(__this, method) (( bool (*) (t2893 *, const MethodInfo*))m17874_gshared)(__this, method)
extern "C" t713  m17875_gshared (t2893 * __this, const MethodInfo* method);
#define m17875(__this, method) (( t713  (*) (t2893 *, const MethodInfo*))m17875_gshared)(__this, method)
