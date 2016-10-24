#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1080;
struct t1080_marshaled;

void t1080_marshal(const t1080& unmarshaled, t1080_marshaled& marshaled);
void t1080_marshal_back(const t1080_marshaled& marshaled, t1080& unmarshaled);
void t1080_marshal_cleanup(t1080_marshaled& marshaled);
