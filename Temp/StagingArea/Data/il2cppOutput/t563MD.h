#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t563;
struct t563_marshaled;
struct t47;

extern "C" bool m2799 (t563 * __this, t47* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2800 (t563 * __this, t47* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2801 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2802 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2803 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m2804 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2805 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2806 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2807 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void t563_marshal(const t563& unmarshaled, t563_marshaled& marshaled);
void t563_marshal_back(const t563_marshaled& marshaled, t563& unmarshaled);
void t563_marshal_cleanup(t563_marshaled& marshaled);
