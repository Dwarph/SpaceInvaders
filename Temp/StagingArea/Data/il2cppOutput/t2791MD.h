#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2791;
struct t7;
struct t614;
struct t69;

extern "C" void m17054_gshared (t2791 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17054(__this, p0, p1, method) (( void (*) (t2791 *, t7 *, t614 *, const MethodInfo*))m17054_gshared)(__this, p0, p1, method)
extern "C" void m17055_gshared (t2791 * __this, t69* p0, const MethodInfo* method);
#define m17055(__this, p0, method) (( void (*) (t2791 *, t69*, const MethodInfo*))m17055_gshared)(__this, p0, method)
extern "C" bool m17056_gshared (t2791 * __this, t7 * p0, t614 * p1, const MethodInfo* method);
#define m17056(__this, p0, p1, method) (( bool (*) (t2791 *, t7 *, t614 *, const MethodInfo*))m17056_gshared)(__this, p0, p1, method)
