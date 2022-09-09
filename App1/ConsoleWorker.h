#pragma once
#include "ListWrapper.h"

class ConsoleWorker
{
	ListWrapper& list;

public:
	ConsoleWorker(ListWrapper& lw) : list (lw)  {  }

	void operator() ();
};

