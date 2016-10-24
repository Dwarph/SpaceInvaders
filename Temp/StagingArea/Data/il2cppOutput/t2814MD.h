#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2814;
struct t7;
struct t212;
struct t213;
#include "t226.h"

extern "C" void m17279_gshared (t2814 * __this, t7 * p0, t226 p1, const MethodInfo* method);
#define m17279(__this, p0, p1, method) (( void (*) (t2814 *, t7 *, t226, const MethodInfo*))m17279_gshared)(__this, p0, p1, method)
extern "C" t7 * m17280_gshared (t2814 * __this, t7 * p0, const MethodInfo* method);
#define m17280(__this, p0, method) (( t7 * (*) (t2814 *, t7 *, const MethodInfo*))m17280_gshared)(__this, p0, method)
extern "C" t7 * m17281_gshared (t2814 * __this, t7 * p0, t213 * p1, t7 * p2, const MethodInfo* method);
#define m17281(__this, p0, p1, p2, method) (( t7 * (*) (t2814 *, t7 *, t213 *, t7 *, const MethodInfo*))m17281_gshared)(__this, p0, p1, p2, method)
extern "C" t7 * m17282_gshared (t2814 * __this, t7 * p0, const MethodInfo* method);
#define m17282(__this, p0, method) (( t7 * (*) (t2814 *, t7 *, const MethodInfo*))m17282_gshared)(__this, p0, method)
