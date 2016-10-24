#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1819;
struct t1819_marshaled;

void t1819_marshal(const t1819& unmarshaled, t1819_marshaled& marshaled);
void t1819_marshal_back(const t1819_marshaled& marshaled, t1819& unmarshaled);
void t1819_marshal_cleanup(t1819_marshaled& marshaled);
