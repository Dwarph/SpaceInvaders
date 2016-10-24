#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2756;
struct t7;
struct t2748;
#include "t2494.h"

extern "C" void m16717_gshared (t2756 * __this, t2748 * p0, const MethodInfo* method);
#define m16717(__this, p0, method) (( void (*) (t2756 *, t2748 *, const MethodInfo*))m16717_gshared)(__this, p0, method)
extern "C" t7 * m16718_gshared (t2756 * __this, const MethodInfo* method);
#define m16718(__this, method) (( t7 * (*) (t2756 *, const MethodInfo*))m16718_gshared)(__this, method)
extern "C" void m16719_gshared (t2756 * __this, const MethodInfo* method);
#define m16719(__this, method) (( void (*) (t2756 *, const MethodInfo*))m16719_gshared)(__this, method)
extern "C" bool m16720_gshared (t2756 * __this, const MethodInfo* method);
#define m16720(__this, method) (( bool (*) (t2756 *, const MethodInfo*))m16720_gshared)(__this, method)
extern "C" t2494  m16721_gshared (t2756 * __this, const MethodInfo* method);
#define m16721(__this, method) (( t2494  (*) (t2756 *, const MethodInfo*))m16721_gshared)(__this, method)
