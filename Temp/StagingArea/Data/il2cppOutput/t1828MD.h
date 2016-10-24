#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1828;
struct t1828_marshaled;

void t1828_marshal(const t1828& unmarshaled, t1828_marshaled& marshaled);
void t1828_marshal_back(const t1828_marshaled& marshaled, t1828& unmarshaled);
void t1828_marshal_cleanup(t1828_marshaled& marshaled);
