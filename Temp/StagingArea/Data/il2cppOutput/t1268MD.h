#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1268;
struct t1268_marshaled;

void t1268_marshal(const t1268& unmarshaled, t1268_marshaled& marshaled);
void t1268_marshal_back(const t1268_marshaled& marshaled, t1268& unmarshaled);
void t1268_marshal_cleanup(t1268_marshaled& marshaled);
