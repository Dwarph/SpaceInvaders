#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1834;
struct t1834_marshaled;

void t1834_marshal(const t1834& unmarshaled, t1834_marshaled& marshaled);
void t1834_marshal_back(const t1834_marshaled& marshaled, t1834& unmarshaled);
void t1834_marshal_cleanup(t1834_marshaled& marshaled);
