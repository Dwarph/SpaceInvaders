#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2875;
struct t7;

extern "C" void m17785_gshared (t2875 * __this, const MethodInfo* method);
#define m17785(__this, method) (( void (*) (t2875 *, const MethodInfo*))m17785_gshared)(__this, method)
extern "C" int32_t m17786_gshared (t2875 * __this, t7 * p0, const MethodInfo* method);
#define m17786(__this, p0, method) (( int32_t (*) (t2875 *, t7 *, const MethodInfo*))m17786_gshared)(__this, p0, method)
extern "C" bool m17787_gshared (t2875 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m17787(__this, p0, p1, method) (( bool (*) (t2875 *, t7 *, t7 *, const MethodInfo*))m17787_gshared)(__this, p0, p1, method)
