#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1821;
struct t1821_marshaled;

void t1821_marshal(const t1821& unmarshaled, t1821_marshaled& marshaled);
void t1821_marshal_back(const t1821_marshaled& marshaled, t1821& unmarshaled);
void t1821_marshal_cleanup(t1821_marshaled& marshaled);
