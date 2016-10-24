#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1832;
struct t1832_marshaled;

void t1832_marshal(const t1832& unmarshaled, t1832_marshaled& marshaled);
void t1832_marshal_back(const t1832_marshaled& marshaled, t1832& unmarshaled);
void t1832_marshal_cleanup(t1832_marshaled& marshaled);
