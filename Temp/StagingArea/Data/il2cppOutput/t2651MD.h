#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2651;
#include "t380.h"

extern "C" void m15252_gshared (t2651 * __this, const MethodInfo* method);
#define m15252(__this, method) (( void (*) (t2651 *, const MethodInfo*))m15252_gshared)(__this, method)
extern "C" int32_t m15253_gshared (t2651 * __this, t380  p0, t380  p1, const MethodInfo* method);
#define m15253(__this, p0, p1, method) (( int32_t (*) (t2651 *, t380 , t380 , const MethodInfo*))m15253_gshared)(__this, p0, p1, method)
