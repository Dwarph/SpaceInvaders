#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2707;
struct t7;
struct t2700;

extern "C" void m15964_gshared (t2707 * __this, t2700 * p0, const MethodInfo* method);
#define m15964(__this, p0, method) (( void (*) (t2707 *, t2700 *, const MethodInfo*))m15964_gshared)(__this, p0, method)
extern "C" t7 * m15965_gshared (t2707 * __this, const MethodInfo* method);
#define m15965(__this, method) (( t7 * (*) (t2707 *, const MethodInfo*))m15965_gshared)(__this, method)
extern "C" void m15966_gshared (t2707 * __this, const MethodInfo* method);
#define m15966(__this, method) (( void (*) (t2707 *, const MethodInfo*))m15966_gshared)(__this, method)
extern "C" bool m15967_gshared (t2707 * __this, const MethodInfo* method);
#define m15967(__this, method) (( bool (*) (t2707 *, const MethodInfo*))m15967_gshared)(__this, method)
extern "C" uint64_t m15968_gshared (t2707 * __this, const MethodInfo* method);
#define m15968(__this, method) (( uint64_t (*) (t2707 *, const MethodInfo*))m15968_gshared)(__this, method)
