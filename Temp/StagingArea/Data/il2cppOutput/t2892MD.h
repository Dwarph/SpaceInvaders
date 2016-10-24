#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2892;
struct t7;
struct t52;
#include "t505.h"

extern "C" void m17866_gshared (t2892 * __this, t52 * p0, const MethodInfo* method);
#define m17866(__this, p0, method) (( void (*) (t2892 *, t52 *, const MethodInfo*))m17866_gshared)(__this, p0, method)
extern "C" t7 * m17867_gshared (t2892 * __this, const MethodInfo* method);
#define m17867(__this, method) (( t7 * (*) (t2892 *, const MethodInfo*))m17867_gshared)(__this, method)
extern "C" void m17868_gshared (t2892 * __this, const MethodInfo* method);
#define m17868(__this, method) (( void (*) (t2892 *, const MethodInfo*))m17868_gshared)(__this, method)
extern "C" bool m17869_gshared (t2892 * __this, const MethodInfo* method);
#define m17869(__this, method) (( bool (*) (t2892 *, const MethodInfo*))m17869_gshared)(__this, method)
extern "C" t505  m17870_gshared (t2892 * __this, const MethodInfo* method);
#define m17870(__this, method) (( t505  (*) (t2892 *, const MethodInfo*))m17870_gshared)(__this, method)
