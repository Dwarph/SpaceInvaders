#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1831;
struct t1831_marshaled;

void t1831_marshal(const t1831& unmarshaled, t1831_marshaled& marshaled);
void t1831_marshal_back(const t1831_marshaled& marshaled, t1831& unmarshaled);
void t1831_marshal_cleanup(t1831_marshaled& marshaled);
