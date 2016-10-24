#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2855;
struct t7;
struct t52;
#include "t1071.h"

extern "C" void m17688_gshared (t2855 * __this, t52 * p0, const MethodInfo* method);
#define m17688(__this, p0, method) (( void (*) (t2855 *, t52 *, const MethodInfo*))m17688_gshared)(__this, p0, method)
extern "C" t7 * m17689_gshared (t2855 * __this, const MethodInfo* method);
#define m17689(__this, method) (( t7 * (*) (t2855 *, const MethodInfo*))m17689_gshared)(__this, method)
extern "C" void m17690_gshared (t2855 * __this, const MethodInfo* method);
#define m17690(__this, method) (( void (*) (t2855 *, const MethodInfo*))m17690_gshared)(__this, method)
extern "C" bool m17691_gshared (t2855 * __this, const MethodInfo* method);
#define m17691(__this, method) (( bool (*) (t2855 *, const MethodInfo*))m17691_gshared)(__this, method)
extern "C" t1071  m17692_gshared (t2855 * __this, const MethodInfo* method);
#define m17692(__this, method) (( t1071  (*) (t2855 *, const MethodInfo*))m17692_gshared)(__this, method)
