#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2819;
struct t7;
struct t52;
#include "t2818.h"

extern "C" void m17382_gshared (t2819 * __this, t52 * p0, const MethodInfo* method);
#define m17382(__this, p0, method) (( void (*) (t2819 *, t52 *, const MethodInfo*))m17382_gshared)(__this, p0, method)
extern "C" t7 * m17383_gshared (t2819 * __this, const MethodInfo* method);
#define m17383(__this, method) (( t7 * (*) (t2819 *, const MethodInfo*))m17383_gshared)(__this, method)
extern "C" void m17384_gshared (t2819 * __this, const MethodInfo* method);
#define m17384(__this, method) (( void (*) (t2819 *, const MethodInfo*))m17384_gshared)(__this, method)
extern "C" bool m17385_gshared (t2819 * __this, const MethodInfo* method);
#define m17385(__this, method) (( bool (*) (t2819 *, const MethodInfo*))m17385_gshared)(__this, method)
extern "C" t2818  m17386_gshared (t2819 * __this, const MethodInfo* method);
#define m17386(__this, method) (( t2818  (*) (t2819 *, const MethodInfo*))m17386_gshared)(__this, method)
