#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2904;
struct t7;
#include "t505.h"

extern "C" void m17992_gshared (t2904 * __this, const MethodInfo* method);
#define m17992(__this, method) (( void (*) (t2904 *, const MethodInfo*))m17992_gshared)(__this, method)
extern "C" void m17993_gshared (t7 * __this , const MethodInfo* method);
#define m17993(__this , method) (( void (*) (t7 * , const MethodInfo*))m17993_gshared)(__this , method)
extern "C" int32_t m17994_gshared (t2904 * __this, t7 * p0, const MethodInfo* method);
#define m17994(__this, p0, method) (( int32_t (*) (t2904 *, t7 *, const MethodInfo*))m17994_gshared)(__this, p0, method)
extern "C" bool m17995_gshared (t2904 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m17995(__this, p0, p1, method) (( bool (*) (t2904 *, t7 *, t7 *, const MethodInfo*))m17995_gshared)(__this, p0, p1, method)
extern "C" t2904 * m17996_gshared (t7 * __this , const MethodInfo* method);
#define m17996(__this , method) (( t2904 * (*) (t7 * , const MethodInfo*))m17996_gshared)(__this , method)
