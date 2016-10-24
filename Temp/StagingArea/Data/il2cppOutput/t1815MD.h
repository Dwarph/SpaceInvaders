#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1815;
struct t1815_marshaled;

void t1815_marshal(const t1815& unmarshaled, t1815_marshaled& marshaled);
void t1815_marshal_back(const t1815_marshaled& marshaled, t1815& unmarshaled);
void t1815_marshal_cleanup(t1815_marshaled& marshaled);
