#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2825;
struct t7;
struct t2816;

extern "C" void m17442_gshared (t2825 * __this, t2816 * p0, const MethodInfo* method);
#define m17442(__this, p0, method) (( void (*) (t2825 *, t2816 *, const MethodInfo*))m17442_gshared)(__this, p0, method)
extern "C" t7 * m17443_gshared (t2825 * __this, const MethodInfo* method);
#define m17443(__this, method) (( t7 * (*) (t2825 *, const MethodInfo*))m17443_gshared)(__this, method)
extern "C" void m17444_gshared (t2825 * __this, const MethodInfo* method);
#define m17444(__this, method) (( void (*) (t2825 *, const MethodInfo*))m17444_gshared)(__this, method)
extern "C" bool m17445_gshared (t2825 * __this, const MethodInfo* method);
#define m17445(__this, method) (( bool (*) (t2825 *, const MethodInfo*))m17445_gshared)(__this, method)
extern "C" uint8_t m17446_gshared (t2825 * __this, const MethodInfo* method);
#define m17446(__this, method) (( uint8_t (*) (t2825 *, const MethodInfo*))m17446_gshared)(__this, method)
