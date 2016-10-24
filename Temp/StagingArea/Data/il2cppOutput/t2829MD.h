#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2829;
struct t7;

extern "C" void m17465_gshared (t2829 * __this, const MethodInfo* method);
#define m17465(__this, method) (( void (*) (t2829 *, const MethodInfo*))m17465_gshared)(__this, method)
extern "C" void m17466_gshared (t7 * __this , const MethodInfo* method);
#define m17466(__this , method) (( void (*) (t7 * , const MethodInfo*))m17466_gshared)(__this , method)
extern "C" int32_t m17467_gshared (t2829 * __this, t7 * p0, const MethodInfo* method);
#define m17467(__this, p0, method) (( int32_t (*) (t2829 *, t7 *, const MethodInfo*))m17467_gshared)(__this, p0, method)
extern "C" bool m17468_gshared (t2829 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m17468(__this, p0, p1, method) (( bool (*) (t2829 *, t7 *, t7 *, const MethodInfo*))m17468_gshared)(__this, p0, p1, method)
extern "C" t2829 * m17469_gshared (t7 * __this , const MethodInfo* method);
#define m17469(__this , method) (( t2829 * (*) (t7 * , const MethodInfo*))m17469_gshared)(__this , method)
