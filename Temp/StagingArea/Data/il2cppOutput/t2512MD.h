#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2512;
struct t7;
struct t225;
#include "t223.h"

extern "C" void m13150_gshared (t2512 * __this, t225 * p0, const MethodInfo* method);
#define m13150(__this, p0, method) (( void (*) (t2512 *, t225 *, const MethodInfo*))m13150_gshared)(__this, p0, method)
extern "C" t7 * m13151_gshared (t2512 * __this, const MethodInfo* method);
#define m13151(__this, method) (( t7 * (*) (t2512 *, const MethodInfo*))m13151_gshared)(__this, method)
extern "C" void m13152_gshared (t2512 * __this, const MethodInfo* method);
#define m13152(__this, method) (( void (*) (t2512 *, const MethodInfo*))m13152_gshared)(__this, method)
extern "C" void m13153_gshared (t2512 * __this, const MethodInfo* method);
#define m13153(__this, method) (( void (*) (t2512 *, const MethodInfo*))m13153_gshared)(__this, method)
extern "C" bool m13154_gshared (t2512 * __this, const MethodInfo* method);
#define m13154(__this, method) (( bool (*) (t2512 *, const MethodInfo*))m13154_gshared)(__this, method)
extern "C" t223  m13155_gshared (t2512 * __this, const MethodInfo* method);
#define m13155(__this, method) (( t223  (*) (t2512 *, const MethodInfo*))m13155_gshared)(__this, method)
