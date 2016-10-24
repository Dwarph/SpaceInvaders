#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2876;
struct t7;
struct t52;
#include "t1413.h"

extern "C" void m17788_gshared (t2876 * __this, t52 * p0, const MethodInfo* method);
#define m17788(__this, p0, method) (( void (*) (t2876 *, t52 *, const MethodInfo*))m17788_gshared)(__this, p0, method)
extern "C" t7 * m17789_gshared (t2876 * __this, const MethodInfo* method);
#define m17789(__this, method) (( t7 * (*) (t2876 *, const MethodInfo*))m17789_gshared)(__this, method)
extern "C" void m17790_gshared (t2876 * __this, const MethodInfo* method);
#define m17790(__this, method) (( void (*) (t2876 *, const MethodInfo*))m17790_gshared)(__this, method)
extern "C" bool m17791_gshared (t2876 * __this, const MethodInfo* method);
#define m17791(__this, method) (( bool (*) (t2876 *, const MethodInfo*))m17791_gshared)(__this, method)
extern "C" t1413  m17792_gshared (t2876 * __this, const MethodInfo* method);
#define m17792(__this, method) (( t1413  (*) (t2876 *, const MethodInfo*))m17792_gshared)(__this, method)
