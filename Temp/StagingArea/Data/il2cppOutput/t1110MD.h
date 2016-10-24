#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1110;
struct t1110_marshaled;

void t1110_marshal(const t1110& unmarshaled, t1110_marshaled& marshaled);
void t1110_marshal_back(const t1110_marshaled& marshaled, t1110& unmarshaled);
void t1110_marshal_cleanup(t1110_marshaled& marshaled);
