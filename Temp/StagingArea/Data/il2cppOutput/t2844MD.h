#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2844;
struct t7;
struct t1019;

extern "C" void m17621_gshared (t2844 * __this, t1019 * p0, const MethodInfo* method);
#define m17621(__this, p0, method) (( void (*) (t2844 *, t1019 *, const MethodInfo*))m17621_gshared)(__this, p0, method)
extern "C" t7 * m17622_gshared (t2844 * __this, const MethodInfo* method);
#define m17622(__this, method) (( t7 * (*) (t2844 *, const MethodInfo*))m17622_gshared)(__this, method)
extern "C" void m17623_gshared (t2844 * __this, const MethodInfo* method);
#define m17623(__this, method) (( void (*) (t2844 *, const MethodInfo*))m17623_gshared)(__this, method)
extern "C" bool m17624_gshared (t2844 * __this, const MethodInfo* method);
#define m17624(__this, method) (( bool (*) (t2844 *, const MethodInfo*))m17624_gshared)(__this, method)
extern "C" int32_t m17625_gshared (t2844 * __this, const MethodInfo* method);
#define m17625(__this, method) (( int32_t (*) (t2844 *, const MethodInfo*))m17625_gshared)(__this, method)
