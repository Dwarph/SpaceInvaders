#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1826;
struct t1826_marshaled;

void t1826_marshal(const t1826& unmarshaled, t1826_marshaled& marshaled);
void t1826_marshal_back(const t1826_marshaled& marshaled, t1826& unmarshaled);
void t1826_marshal_cleanup(t1826_marshaled& marshaled);
