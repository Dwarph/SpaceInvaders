#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1349;
struct t1349_marshaled;

void t1349_marshal(const t1349& unmarshaled, t1349_marshaled& marshaled);
void t1349_marshal_back(const t1349_marshaled& marshaled, t1349& unmarshaled);
void t1349_marshal_cleanup(t1349_marshaled& marshaled);
