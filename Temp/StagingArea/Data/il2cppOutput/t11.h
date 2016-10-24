#pragma once
#include <stdint.h>
struct t7;
struct t12;
#include "t7.h"
struct  t11  : public t7
{
	int32_t f0;
	t7 * f1;
	t12 * f2;
};
