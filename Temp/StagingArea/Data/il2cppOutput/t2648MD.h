#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2648;
#include "t380.h"

extern "C" void m15241_gshared (t2648 * __this, const MethodInfo* method);
#define m15241(__this, method) (( void (*) (t2648 *, const MethodInfo*))m15241_gshared)(__this, method)
extern "C" int32_t m15242_gshared (t2648 * __this, t380  p0, const MethodInfo* method);
#define m15242(__this, p0, method) (( int32_t (*) (t2648 *, t380 , const MethodInfo*))m15242_gshared)(__this, p0, method)
extern "C" bool m15243_gshared (t2648 * __this, t380  p0, t380  p1, const MethodInfo* method);
#define m15243(__this, p0, p1, method) (( bool (*) (t2648 *, t380 , t380 , const MethodInfo*))m15243_gshared)(__this, p0, p1, method)
