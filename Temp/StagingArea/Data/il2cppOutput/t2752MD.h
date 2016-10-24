#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2752;
struct t7;
struct t2748;

extern "C" void m16682_gshared (t2752 * __this, t2748 * p0, const MethodInfo* method);
#define m16682(__this, p0, method) (( void (*) (t2752 *, t2748 *, const MethodInfo*))m16682_gshared)(__this, p0, method)
extern "C" t7 * m16683_gshared (t2752 * __this, const MethodInfo* method);
#define m16683(__this, method) (( t7 * (*) (t2752 *, const MethodInfo*))m16683_gshared)(__this, method)
extern "C" void m16684_gshared (t2752 * __this, const MethodInfo* method);
#define m16684(__this, method) (( void (*) (t2752 *, const MethodInfo*))m16684_gshared)(__this, method)
extern "C" bool m16685_gshared (t2752 * __this, const MethodInfo* method);
#define m16685(__this, method) (( bool (*) (t2752 *, const MethodInfo*))m16685_gshared)(__this, method)
extern "C" t7 * m16686_gshared (t2752 * __this, const MethodInfo* method);
#define m16686(__this, method) (( t7 * (*) (t2752 *, const MethodInfo*))m16686_gshared)(__this, method)
