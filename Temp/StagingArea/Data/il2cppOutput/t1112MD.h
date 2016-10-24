#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1112;
struct t1112_marshaled;

void t1112_marshal(const t1112& unmarshaled, t1112_marshaled& marshaled);
void t1112_marshal_back(const t1112_marshaled& marshaled, t1112& unmarshaled);
void t1112_marshal_cleanup(t1112_marshaled& marshaled);
