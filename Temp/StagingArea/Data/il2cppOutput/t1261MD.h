#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1261;
struct t1261_marshaled;

void t1261_marshal(const t1261& unmarshaled, t1261_marshaled& marshaled);
void t1261_marshal_back(const t1261_marshaled& marshaled, t1261& unmarshaled);
void t1261_marshal_cleanup(t1261_marshaled& marshaled);
