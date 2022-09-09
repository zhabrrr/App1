#pragma once
#include "ListWrapper.h"

class Sorter
{
	ListWrapper& list;
	int period_ms;

public:
	Sorter(ListWrapper& lw, int period) : list(lw), period_ms(period) {  }

	void operator() ();
};
