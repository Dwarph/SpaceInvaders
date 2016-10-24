#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1825;
struct t1825_marshaled;

void t1825_marshal(const t1825& unmarshaled, t1825_marshaled& marshaled);
void t1825_marshal_back(const t1825_marshaled& marshaled, t1825& unmarshaled);
void t1825_marshal_cleanup(t1825_marshaled& marshaled);
