#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t564;
struct t564_marshaled;

void t564_marshal(const t564& unmarshaled, t564_marshaled& marshaled);
void t564_marshal_back(const t564_marshaled& marshaled, t564& unmarshaled);
void t564_marshal_cleanup(t564_marshaled& marshaled);
