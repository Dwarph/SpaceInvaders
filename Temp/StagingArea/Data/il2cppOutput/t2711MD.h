#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2711;
struct t7;
struct t2700;

extern "C" void m15999_gshared (t2711 * __this, t2700 * p0, const MethodInfo* method);
#define m15999(__this, p0, method) (( void (*) (t2711 *, t2700 *, const MethodInfo*))m15999_gshared)(__this, p0, method)
extern "C" t7 * m16000_gshared (t2711 * __this, const MethodInfo* method);
#define m16000(__this, method) (( t7 * (*) (t2711 *, const MethodInfo*))m16000_gshared)(__this, method)
extern "C" void m16001_gshared (t2711 * __this, const MethodInfo* method);
#define m16001(__this, method) (( void (*) (t2711 *, const MethodInfo*))m16001_gshared)(__this, method)
extern "C" bool m16002_gshared (t2711 * __this, const MethodInfo* method);
#define m16002(__this, method) (( bool (*) (t2711 *, const MethodInfo*))m16002_gshared)(__this, method)
extern "C" t7 * m16003_gshared (t2711 * __this, const MethodInfo* method);
#define m16003(__this, method) (( t7 * (*) (t2711 *, const MethodInfo*))m16003_gshared)(__this, method)
