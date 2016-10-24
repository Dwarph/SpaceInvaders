#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1264;
struct t1264_marshaled;

void t1264_marshal(const t1264& unmarshaled, t1264_marshaled& marshaled);
void t1264_marshal_back(const t1264_marshaled& marshaled, t1264& unmarshaled);
void t1264_marshal_cleanup(t1264_marshaled& marshaled);
