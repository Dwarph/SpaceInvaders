#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1875;
#include "t727.h"

extern "C" void m10221_gshared (t1875 * __this, const MethodInfo* method);
#define m10221(__this, method) (( void (*) (t1875 *, const MethodInfo*))m10221_gshared)(__this, method)
extern "C" int32_t m18021_gshared (t1875 * __this, t727  p0, t727  p1, const MethodInfo* method);
#define m18021(__this, p0, p1, method) (( int32_t (*) (t1875 *, t727 , t727 , const MethodInfo*))m18021_gshared)(__this, p0, p1, method)
