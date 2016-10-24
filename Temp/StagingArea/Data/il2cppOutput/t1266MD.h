#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1266;
struct t1266_marshaled;

void t1266_marshal(const t1266& unmarshaled, t1266_marshaled& marshaled);
void t1266_marshal_back(const t1266_marshaled& marshaled, t1266& unmarshaled);
void t1266_marshal_cleanup(t1266_marshaled& marshaled);
