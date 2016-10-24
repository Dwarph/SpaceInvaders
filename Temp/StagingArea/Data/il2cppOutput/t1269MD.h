#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1269;
struct t1269_marshaled;

void t1269_marshal(const t1269& unmarshaled, t1269_marshaled& marshaled);
void t1269_marshal_back(const t1269_marshaled& marshaled, t1269& unmarshaled);
void t1269_marshal_cleanup(t1269_marshaled& marshaled);
