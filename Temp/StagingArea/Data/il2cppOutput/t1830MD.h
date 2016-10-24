#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1830;
struct t1830_marshaled;

void t1830_marshal(const t1830& unmarshaled, t1830_marshaled& marshaled);
void t1830_marshal_back(const t1830_marshaled& marshaled, t1830& unmarshaled);
void t1830_marshal_cleanup(t1830_marshaled& marshaled);
