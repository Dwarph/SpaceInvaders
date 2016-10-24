#pragma once
#include <stdint.h>
#include "t7.h"
#include "t219.h"
#include "t74.h"
struct  t500  : public t7
{
	t219  f0;
	t219  f1;
	t219  f2;
	t74  f3;
	bool f4;
	bool f5;
};
