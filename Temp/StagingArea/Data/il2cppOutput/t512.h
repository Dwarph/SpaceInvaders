#pragma once
#include <stdint.h>
struct t511;
#include "t7.h"
#include "t219.h"
struct  t512  : public t7
{
	float f0;
	float f1;
	float f2;
	float f3;
	t219  f4;
	int32_t f5;
	int32_t f6;
	t511 * f7;
};
struct t512_SFs{
	t219  f8;
	int32_t f9;
};
