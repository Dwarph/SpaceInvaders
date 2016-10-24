#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1818;
struct t1818_marshaled;

void t1818_marshal(const t1818& unmarshaled, t1818_marshaled& marshaled);
void t1818_marshal_back(const t1818_marshaled& marshaled, t1818& unmarshaled);
void t1818_marshal_cleanup(t1818_marshaled& marshaled);
