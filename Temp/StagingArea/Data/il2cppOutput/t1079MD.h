#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1079;
struct t1079_marshaled;

void t1079_marshal(const t1079& unmarshaled, t1079_marshaled& marshaled);
void t1079_marshal_back(const t1079_marshaled& marshaled, t1079& unmarshaled);
void t1079_marshal_cleanup(t1079_marshaled& marshaled);
