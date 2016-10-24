#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1817;
struct t1817_marshaled;

void t1817_marshal(const t1817& unmarshaled, t1817_marshaled& marshaled);
void t1817_marshal_back(const t1817_marshaled& marshaled, t1817& unmarshaled);
void t1817_marshal_cleanup(t1817_marshaled& marshaled);
