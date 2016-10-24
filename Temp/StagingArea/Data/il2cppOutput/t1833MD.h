#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1833;
struct t1833_marshaled;

void t1833_marshal(const t1833& unmarshaled, t1833_marshaled& marshaled);
void t1833_marshal_back(const t1833_marshaled& marshaled, t1833& unmarshaled);
void t1833_marshal_cleanup(t1833_marshaled& marshaled);
