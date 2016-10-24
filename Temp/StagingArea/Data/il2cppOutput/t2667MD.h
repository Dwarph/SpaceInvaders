#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2667;
struct t7;
struct t52;

extern "C" void m15511_gshared (t2667 * __this, t52 * p0, const MethodInfo* method);
#define m15511(__this, p0, method) (( void (*) (t2667 *, t52 *, const MethodInfo*))m15511_gshared)(__this, p0, method)
extern "C" t7 * m15512_gshared (t2667 * __this, const MethodInfo* method);
#define m15512(__this, method) (( t7 * (*) (t2667 *, const MethodInfo*))m15512_gshared)(__this, method)
extern "C" void m15513_gshared (t2667 * __this, const MethodInfo* method);
#define m15513(__this, method) (( void (*) (t2667 *, const MethodInfo*))m15513_gshared)(__this, method)
extern "C" bool m15514_gshared (t2667 * __this, const MethodInfo* method);
#define m15514(__this, method) (( bool (*) (t2667 *, const MethodInfo*))m15514_gshared)(__this, method)
extern "C" int64_t m15515_gshared (t2667 * __this, const MethodInfo* method);
#define m15515(__this, method) (( int64_t (*) (t2667 *, const MethodInfo*))m15515_gshared)(__this, method)
