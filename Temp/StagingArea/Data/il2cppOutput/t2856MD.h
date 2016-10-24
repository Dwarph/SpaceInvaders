#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2856;
struct t7;
struct t52;

extern "C" void m17693_gshared (t2856 * __this, t52 * p0, const MethodInfo* method);
#define m17693(__this, p0, method) (( void (*) (t2856 *, t52 *, const MethodInfo*))m17693_gshared)(__this, p0, method)
extern "C" t7 * m17694_gshared (t2856 * __this, const MethodInfo* method);
#define m17694(__this, method) (( t7 * (*) (t2856 *, const MethodInfo*))m17694_gshared)(__this, method)
extern "C" void m17695_gshared (t2856 * __this, const MethodInfo* method);
#define m17695(__this, method) (( void (*) (t2856 *, const MethodInfo*))m17695_gshared)(__this, method)
extern "C" bool m17696_gshared (t2856 * __this, const MethodInfo* method);
#define m17696(__this, method) (( bool (*) (t2856 *, const MethodInfo*))m17696_gshared)(__this, method)
extern "C" uint32_t m17697_gshared (t2856 * __this, const MethodInfo* method);
#define m17697(__this, method) (( uint32_t (*) (t2856 *, const MethodInfo*))m17697_gshared)(__this, method)
