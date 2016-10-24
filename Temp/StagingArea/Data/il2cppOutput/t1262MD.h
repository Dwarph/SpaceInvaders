#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1262;
struct t1262_marshaled;

void t1262_marshal(const t1262& unmarshaled, t1262_marshaled& marshaled);
void t1262_marshal_back(const t1262_marshaled& marshaled, t1262& unmarshaled);
void t1262_marshal_cleanup(t1262_marshaled& marshaled);
