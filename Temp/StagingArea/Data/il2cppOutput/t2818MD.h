#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2818;
struct t7;
struct t47;

extern "C" void m17387_gshared (t2818 * __this, t7 * p0, uint8_t p1, const MethodInfo* method);
#define m17387(__this, p0, p1, method) (( void (*) (t2818 *, t7 *, uint8_t, const MethodInfo*))m17387_gshared)(__this, p0, p1, method)
extern "C" t7 * m17388_gshared (t2818 * __this, const MethodInfo* method);
#define m17388(__this, method) (( t7 * (*) (t2818 *, const MethodInfo*))m17388_gshared)(__this, method)
extern "C" void m17389_gshared (t2818 * __this, t7 * p0, const MethodInfo* method);
#define m17389(__this, p0, method) (( void (*) (t2818 *, t7 *, const MethodInfo*))m17389_gshared)(__this, p0, method)
extern "C" uint8_t m17390_gshared (t2818 * __this, const MethodInfo* method);
#define m17390(__this, method) (( uint8_t (*) (t2818 *, const MethodInfo*))m17390_gshared)(__this, method)
extern "C" void m17391_gshared (t2818 * __this, uint8_t p0, const MethodInfo* method);
#define m17391(__this, p0, method) (( void (*) (t2818 *, uint8_t, const MethodInfo*))m17391_gshared)(__this, p0, method)
extern "C" t47* m17392_gshared (t2818 * __this, const MethodInfo* method);
#define m17392(__this, method) (( t47* (*) (t2818 *, const MethodInfo*))m17392_gshared)(__this, method)
