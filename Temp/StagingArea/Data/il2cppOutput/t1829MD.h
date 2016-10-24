#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1829;
struct t1829_marshaled;

void t1829_marshal(const t1829& unmarshaled, t1829_marshaled& marshaled);
void t1829_marshal_back(const t1829_marshaled& marshaled, t1829& unmarshaled);
void t1829_marshal_cleanup(t1829_marshaled& marshaled);
