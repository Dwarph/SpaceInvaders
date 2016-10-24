#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1824;
struct t1824_marshaled;

void t1824_marshal(const t1824& unmarshaled, t1824_marshaled& marshaled);
void t1824_marshal_back(const t1824_marshaled& marshaled, t1824& unmarshaled);
void t1824_marshal_cleanup(t1824_marshaled& marshaled);
