#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2837;
struct t7;
struct t52;
#include "t983.h"

extern "C" void m17531_gshared (t2837 * __this, t52 * p0, const MethodInfo* method);
#define m17531(__this, p0, method) (( void (*) (t2837 *, t52 *, const MethodInfo*))m17531_gshared)(__this, p0, method)
extern "C" t7 * m17532_gshared (t2837 * __this, const MethodInfo* method);
#define m17532(__this, method) (( t7 * (*) (t2837 *, const MethodInfo*))m17532_gshared)(__this, method)
extern "C" void m17533_gshared (t2837 * __this, const MethodInfo* method);
#define m17533(__this, method) (( void (*) (t2837 *, const MethodInfo*))m17533_gshared)(__this, method)
extern "C" bool m17534_gshared (t2837 * __this, const MethodInfo* method);
#define m17534(__this, method) (( bool (*) (t2837 *, const MethodInfo*))m17534_gshared)(__this, method)
extern "C" t983  m17535_gshared (t2837 * __this, const MethodInfo* method);
#define m17535(__this, method) (( t983  (*) (t2837 *, const MethodInfo*))m17535_gshared)(__this, method)
