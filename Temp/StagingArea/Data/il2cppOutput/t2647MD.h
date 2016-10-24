#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2647;
struct t7;
#include "t380.h"

extern "C" void m15236_gshared (t2647 * __this, const MethodInfo* method);
#define m15236(__this, method) (( void (*) (t2647 *, const MethodInfo*))m15236_gshared)(__this, method)
extern "C" void m15237_gshared (t7 * __this , const MethodInfo* method);
#define m15237(__this , method) (( void (*) (t7 * , const MethodInfo*))m15237_gshared)(__this , method)
extern "C" int32_t m15238_gshared (t2647 * __this, t7 * p0, const MethodInfo* method);
#define m15238(__this, p0, method) (( int32_t (*) (t2647 *, t7 *, const MethodInfo*))m15238_gshared)(__this, p0, method)
extern "C" bool m15239_gshared (t2647 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m15239(__this, p0, p1, method) (( bool (*) (t2647 *, t7 *, t7 *, const MethodInfo*))m15239_gshared)(__this, p0, p1, method)
extern "C" t2647 * m15240_gshared (t7 * __this , const MethodInfo* method);
#define m15240(__this , method) (( t2647 * (*) (t7 * , const MethodInfo*))m15240_gshared)(__this , method)
