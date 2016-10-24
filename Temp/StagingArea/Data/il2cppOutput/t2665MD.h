#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2665;
struct t7;
struct t47;

extern "C" void m15505_gshared (t2665 * __this, t7 * p0, int64_t p1, const MethodInfo* method);
#define m15505(__this, p0, p1, method) (( void (*) (t2665 *, t7 *, int64_t, const MethodInfo*))m15505_gshared)(__this, p0, p1, method)
extern "C" t7 * m15506_gshared (t2665 * __this, const MethodInfo* method);
#define m15506(__this, method) (( t7 * (*) (t2665 *, const MethodInfo*))m15506_gshared)(__this, method)
extern "C" void m15507_gshared (t2665 * __this, t7 * p0, const MethodInfo* method);
#define m15507(__this, p0, method) (( void (*) (t2665 *, t7 *, const MethodInfo*))m15507_gshared)(__this, p0, method)
extern "C" int64_t m15508_gshared (t2665 * __this, const MethodInfo* method);
#define m15508(__this, method) (( int64_t (*) (t2665 *, const MethodInfo*))m15508_gshared)(__this, method)
extern "C" void m15509_gshared (t2665 * __this, int64_t p0, const MethodInfo* method);
#define m15509(__this, p0, method) (( void (*) (t2665 *, int64_t, const MethodInfo*))m15509_gshared)(__this, p0, method)
extern "C" t47* m15510_gshared (t2665 * __this, const MethodInfo* method);
#define m15510(__this, method) (( t47* (*) (t2665 *, const MethodInfo*))m15510_gshared)(__this, method)
