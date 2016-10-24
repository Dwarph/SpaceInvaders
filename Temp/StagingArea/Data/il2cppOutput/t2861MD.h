#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2861;
struct t7;
struct t52;

extern "C" void m17718_gshared (t2861 * __this, t52 * p0, const MethodInfo* method);
#define m17718(__this, p0, method) (( void (*) (t2861 *, t52 *, const MethodInfo*))m17718_gshared)(__this, p0, method)
extern "C" t7 * m17719_gshared (t2861 * __this, const MethodInfo* method);
#define m17719(__this, method) (( t7 * (*) (t2861 *, const MethodInfo*))m17719_gshared)(__this, method)
extern "C" void m17720_gshared (t2861 * __this, const MethodInfo* method);
#define m17720(__this, method) (( void (*) (t2861 *, const MethodInfo*))m17720_gshared)(__this, method)
extern "C" bool m17721_gshared (t2861 * __this, const MethodInfo* method);
#define m17721(__this, method) (( bool (*) (t2861 *, const MethodInfo*))m17721_gshared)(__this, method)
extern "C" int16_t m17722_gshared (t2861 * __this, const MethodInfo* method);
#define m17722(__this, method) (( int16_t (*) (t2861 *, const MethodInfo*))m17722_gshared)(__this, method)
