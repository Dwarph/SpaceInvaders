#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1265;
struct t1265_marshaled;

void t1265_marshal(const t1265& unmarshaled, t1265_marshaled& marshaled);
void t1265_marshal_back(const t1265_marshaled& marshaled, t1265& unmarshaled);
void t1265_marshal_cleanup(t1265_marshaled& marshaled);
