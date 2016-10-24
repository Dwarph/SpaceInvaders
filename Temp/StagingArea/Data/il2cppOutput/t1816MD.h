#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1816;
struct t1816_marshaled;

void t1816_marshal(const t1816& unmarshaled, t1816_marshaled& marshaled);
void t1816_marshal_back(const t1816_marshaled& marshaled, t1816& unmarshaled);
void t1816_marshal_cleanup(t1816_marshaled& marshaled);
