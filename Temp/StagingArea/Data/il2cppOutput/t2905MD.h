#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2905;
#include "t505.h"

extern "C" void m17997_gshared (t2905 * __this, const MethodInfo* method);
#define m17997(__this, method) (( void (*) (t2905 *, const MethodInfo*))m17997_gshared)(__this, method)
extern "C" int32_t m17998_gshared (t2905 * __this, t505  p0, const MethodInfo* method);
#define m17998(__this, p0, method) (( int32_t (*) (t2905 *, t505 , const MethodInfo*))m17998_gshared)(__this, p0, method)
extern "C" bool m17999_gshared (t2905 * __this, t505  p0, t505  p1, const MethodInfo* method);
#define m17999(__this, p0, p1, method) (( bool (*) (t2905 *, t505 , t505 , const MethodInfo*))m17999_gshared)(__this, p0, p1, method)
