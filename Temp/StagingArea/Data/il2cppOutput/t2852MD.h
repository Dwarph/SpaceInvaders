#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2852;

extern "C" void m17679_gshared (t2852 * __this, const MethodInfo* method);
#define m17679(__this, method) (( void (*) (t2852 *, const MethodInfo*))m17679_gshared)(__this, method)
extern "C" int32_t m17680_gshared (t2852 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m17680(__this, p0, p1, method) (( int32_t (*) (t2852 *, int32_t, int32_t, const MethodInfo*))m17680_gshared)(__this, p0, p1, method)
