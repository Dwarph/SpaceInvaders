#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2677;
struct t7;

extern "C" void m15588_gshared (t2677 * __this, const MethodInfo* method);
#define m15588(__this, method) (( void (*) (t2677 *, const MethodInfo*))m15588_gshared)(__this, method)
extern "C" void m15589_gshared (t7 * __this , const MethodInfo* method);
#define m15589(__this , method) (( void (*) (t7 * , const MethodInfo*))m15589_gshared)(__this , method)
extern "C" int32_t m15590_gshared (t2677 * __this, t7 * p0, const MethodInfo* method);
#define m15590(__this, p0, method) (( int32_t (*) (t2677 *, t7 *, const MethodInfo*))m15590_gshared)(__this, p0, method)
extern "C" bool m15591_gshared (t2677 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m15591(__this, p0, p1, method) (( bool (*) (t2677 *, t7 *, t7 *, const MethodInfo*))m15591_gshared)(__this, p0, p1, method)
extern "C" t2677 * m15592_gshared (t7 * __this , const MethodInfo* method);
#define m15592(__this , method) (( t2677 * (*) (t7 * , const MethodInfo*))m15592_gshared)(__this , method)
