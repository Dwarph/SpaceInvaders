#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2913;
#include "t727.h"

extern "C" void m18035_gshared (t2913 * __this, const MethodInfo* method);
#define m18035(__this, method) (( void (*) (t2913 *, const MethodInfo*))m18035_gshared)(__this, method)
extern "C" int32_t m18036_gshared (t2913 * __this, t727  p0, const MethodInfo* method);
#define m18036(__this, p0, method) (( int32_t (*) (t2913 *, t727 , const MethodInfo*))m18036_gshared)(__this, p0, method)
extern "C" bool m18037_gshared (t2913 * __this, t727  p0, t727  p1, const MethodInfo* method);
#define m18037(__this, p0, p1, method) (( bool (*) (t2913 *, t727 , t727 , const MethodInfo*))m18037_gshared)(__this, p0, p1, method)
