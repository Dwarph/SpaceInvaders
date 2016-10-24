#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2848;
struct t7;
struct t1019;

extern "C" void m17656_gshared (t2848 * __this, t1019 * p0, const MethodInfo* method);
#define m17656(__this, p0, method) (( void (*) (t2848 *, t1019 *, const MethodInfo*))m17656_gshared)(__this, p0, method)
extern "C" t7 * m17657_gshared (t2848 * __this, const MethodInfo* method);
#define m17657(__this, method) (( t7 * (*) (t2848 *, const MethodInfo*))m17657_gshared)(__this, method)
extern "C" void m17658_gshared (t2848 * __this, const MethodInfo* method);
#define m17658(__this, method) (( void (*) (t2848 *, const MethodInfo*))m17658_gshared)(__this, method)
extern "C" bool m17659_gshared (t2848 * __this, const MethodInfo* method);
#define m17659(__this, method) (( bool (*) (t2848 *, const MethodInfo*))m17659_gshared)(__this, method)
extern "C" int32_t m17660_gshared (t2848 * __this, const MethodInfo* method);
#define m17660(__this, method) (( int32_t (*) (t2848 *, const MethodInfo*))m17660_gshared)(__this, method)
