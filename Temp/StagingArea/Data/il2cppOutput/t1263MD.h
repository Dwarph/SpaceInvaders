#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1263;
struct t1263_marshaled;

void t1263_marshal(const t1263& unmarshaled, t1263_marshaled& marshaled);
void t1263_marshal_back(const t1263_marshaled& marshaled, t1263& unmarshaled);
void t1263_marshal_cleanup(t1263_marshaled& marshaled);
