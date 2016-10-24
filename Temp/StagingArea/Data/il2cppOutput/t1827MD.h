#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1827;
struct t1827_marshaled;

void t1827_marshal(const t1827& unmarshaled, t1827_marshaled& marshaled);
void t1827_marshal_back(const t1827_marshaled& marshaled, t1827& unmarshaled);
void t1827_marshal_cleanup(t1827_marshaled& marshaled);
