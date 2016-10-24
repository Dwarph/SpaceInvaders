#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2705;
struct t7;
struct t52;

extern "C" void m15945_gshared (t2705 * __this, t52 * p0, const MethodInfo* method);
#define m15945(__this, p0, method) (( void (*) (t2705 *, t52 *, const MethodInfo*))m15945_gshared)(__this, p0, method)
extern "C" t7 * m15946_gshared (t2705 * __this, const MethodInfo* method);
#define m15946(__this, method) (( t7 * (*) (t2705 *, const MethodInfo*))m15946_gshared)(__this, method)
extern "C" void m15947_gshared (t2705 * __this, const MethodInfo* method);
#define m15947(__this, method) (( void (*) (t2705 *, const MethodInfo*))m15947_gshared)(__this, method)
extern "C" bool m15948_gshared (t2705 * __this, const MethodInfo* method);
#define m15948(__this, method) (( bool (*) (t2705 *, const MethodInfo*))m15948_gshared)(__this, method)
extern "C" uint64_t m15949_gshared (t2705 * __this, const MethodInfo* method);
#define m15949(__this, method) (( uint64_t (*) (t2705 *, const MethodInfo*))m15949_gshared)(__this, method)
