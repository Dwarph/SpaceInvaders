#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2657;
#include "t379.h"

extern "C" void m15383_gshared (t2657 * __this, const MethodInfo* method);
#define m15383(__this, method) (( void (*) (t2657 *, const MethodInfo*))m15383_gshared)(__this, method)
extern "C" int32_t m15384_gshared (t2657 * __this, t379  p0, const MethodInfo* method);
#define m15384(__this, p0, method) (( int32_t (*) (t2657 *, t379 , const MethodInfo*))m15384_gshared)(__this, p0, method)
extern "C" bool m15385_gshared (t2657 * __this, t379  p0, t379  p1, const MethodInfo* method);
#define m15385(__this, p0, p1, method) (( bool (*) (t2657 *, t379 , t379 , const MethodInfo*))m15385_gshared)(__this, p0, p1, method)
