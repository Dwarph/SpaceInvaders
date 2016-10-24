#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2517;
#include "t223.h"

extern "C" void m13259_gshared (t2517 * __this, const MethodInfo* method);
#define m13259(__this, method) (( void (*) (t2517 *, const MethodInfo*))m13259_gshared)(__this, method)
extern "C" int32_t m13260_gshared (t2517 * __this, t223  p0, const MethodInfo* method);
#define m13260(__this, p0, method) (( int32_t (*) (t2517 *, t223 , const MethodInfo*))m13260_gshared)(__this, p0, method)
extern "C" bool m13261_gshared (t2517 * __this, t223  p0, t223  p1, const MethodInfo* method);
#define m13261(__this, p0, p1, method) (( bool (*) (t2517 *, t223 , t223 , const MethodInfo*))m13261_gshared)(__this, p0, p1, method)
