#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2373;
struct t7;
struct t52;

extern "C" void m11280_gshared (t2373 * __this, t52 * p0, const MethodInfo* method);
#define m11280(__this, p0, method) (( void (*) (t2373 *, t52 *, const MethodInfo*))m11280_gshared)(__this, p0, method)
extern "C" t7 * m11282_gshared (t2373 * __this, const MethodInfo* method);
#define m11282(__this, method) (( t7 * (*) (t2373 *, const MethodInfo*))m11282_gshared)(__this, method)
extern "C" void m11284_gshared (t2373 * __this, const MethodInfo* method);
#define m11284(__this, method) (( void (*) (t2373 *, const MethodInfo*))m11284_gshared)(__this, method)
extern "C" bool m11286_gshared (t2373 * __this, const MethodInfo* method);
#define m11286(__this, method) (( bool (*) (t2373 *, const MethodInfo*))m11286_gshared)(__this, method)
extern "C" uint16_t m11288_gshared (t2373 * __this, const MethodInfo* method);
#define m11288(__this, method) (( uint16_t (*) (t2373 *, const MethodInfo*))m11288_gshared)(__this, method)
