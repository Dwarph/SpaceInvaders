#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2659;
struct t7;
#include "t379.h"

extern "C" void m15390_gshared (t2659 * __this, const MethodInfo* method);
#define m15390(__this, method) (( void (*) (t2659 *, const MethodInfo*))m15390_gshared)(__this, method)
extern "C" void m15391_gshared (t7 * __this , const MethodInfo* method);
#define m15391(__this , method) (( void (*) (t7 * , const MethodInfo*))m15391_gshared)(__this , method)
extern "C" int32_t m15392_gshared (t2659 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m15392(__this, p0, p1, method) (( int32_t (*) (t2659 *, t7 *, t7 *, const MethodInfo*))m15392_gshared)(__this, p0, p1, method)
extern "C" t2659 * m15393_gshared (t7 * __this , const MethodInfo* method);
#define m15393(__this , method) (( t2659 * (*) (t7 * , const MethodInfo*))m15393_gshared)(__this , method)
