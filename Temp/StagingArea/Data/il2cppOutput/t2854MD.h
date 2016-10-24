#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2854;
struct t7;
struct t52;
#include "t1035.h"

extern "C" void m17683_gshared (t2854 * __this, t52 * p0, const MethodInfo* method);
#define m17683(__this, p0, method) (( void (*) (t2854 *, t52 *, const MethodInfo*))m17683_gshared)(__this, p0, method)
extern "C" t7 * m17684_gshared (t2854 * __this, const MethodInfo* method);
#define m17684(__this, method) (( t7 * (*) (t2854 *, const MethodInfo*))m17684_gshared)(__this, method)
extern "C" void m17685_gshared (t2854 * __this, const MethodInfo* method);
#define m17685(__this, method) (( void (*) (t2854 *, const MethodInfo*))m17685_gshared)(__this, method)
extern "C" bool m17686_gshared (t2854 * __this, const MethodInfo* method);
#define m17686(__this, method) (( bool (*) (t2854 *, const MethodInfo*))m17686_gshared)(__this, method)
extern "C" t1035  m17687_gshared (t2854 * __this, const MethodInfo* method);
#define m17687(__this, method) (( t1035  (*) (t2854 *, const MethodInfo*))m17687_gshared)(__this, method)
