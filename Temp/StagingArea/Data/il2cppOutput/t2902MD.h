#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2902;
struct t7;
#include "t505.h"

extern "C" void m17984_gshared (t2902 * __this, const MethodInfo* method);
#define m17984(__this, method) (( void (*) (t2902 *, const MethodInfo*))m17984_gshared)(__this, method)
extern "C" void m17985_gshared (t7 * __this , const MethodInfo* method);
#define m17985(__this , method) (( void (*) (t7 * , const MethodInfo*))m17985_gshared)(__this , method)
extern "C" int32_t m17986_gshared (t2902 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m17986(__this, p0, p1, method) (( int32_t (*) (t2902 *, t7 *, t7 *, const MethodInfo*))m17986_gshared)(__this, p0, p1, method)
extern "C" t2902 * m17987_gshared (t7 * __this , const MethodInfo* method);
#define m17987(__this , method) (( t2902 * (*) (t7 * , const MethodInfo*))m17987_gshared)(__this , method)
