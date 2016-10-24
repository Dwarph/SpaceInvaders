#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1458;
struct t1458_marshaled;

void t1458_marshal(const t1458& unmarshaled, t1458_marshaled& marshaled);
void t1458_marshal_back(const t1458_marshaled& marshaled, t1458& unmarshaled);
void t1458_marshal_cleanup(t1458_marshaled& marshaled);
