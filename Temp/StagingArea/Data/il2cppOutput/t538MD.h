#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t538;
struct t538_marshaled;

void t538_marshal(const t538& unmarshaled, t538_marshaled& marshaled);
void t538_marshal_back(const t538_marshaled& marshaled, t538& unmarshaled);
void t538_marshal_cleanup(t538_marshaled& marshaled);
