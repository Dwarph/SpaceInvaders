#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1822;
struct t1822_marshaled;

void t1822_marshal(const t1822& unmarshaled, t1822_marshaled& marshaled);
void t1822_marshal_back(const t1822_marshaled& marshaled, t1822& unmarshaled);
void t1822_marshal_cleanup(t1822_marshaled& marshaled);
