#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1820;
struct t1820_marshaled;

void t1820_marshal(const t1820& unmarshaled, t1820_marshaled& marshaled);
void t1820_marshal_back(const t1820_marshaled& marshaled, t1820& unmarshaled);
void t1820_marshal_cleanup(t1820_marshaled& marshaled);
