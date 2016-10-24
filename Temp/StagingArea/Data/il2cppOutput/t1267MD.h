#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1267;
struct t1267_marshaled;

void t1267_marshal(const t1267& unmarshaled, t1267_marshaled& marshaled);
void t1267_marshal_back(const t1267_marshaled& marshaled, t1267& unmarshaled);
void t1267_marshal_cleanup(t1267_marshaled& marshaled);
