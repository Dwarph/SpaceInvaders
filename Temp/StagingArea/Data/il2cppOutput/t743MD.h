#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t743;
struct t743_marshaled;

void t743_marshal(const t743& unmarshaled, t743_marshaled& marshaled);
void t743_marshal_back(const t743_marshaled& marshaled, t743& unmarshaled);
void t743_marshal_cleanup(t743_marshaled& marshaled);
