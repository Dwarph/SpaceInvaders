#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1823;
struct t1823_marshaled;

void t1823_marshal(const t1823& unmarshaled, t1823_marshaled& marshaled);
void t1823_marshal_back(const t1823_marshaled& marshaled, t1823& unmarshaled);
void t1823_marshal_cleanup(t1823_marshaled& marshaled);
