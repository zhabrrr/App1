#include "Sorter.h"
#include <chrono>
#include <thread>

void Sorter::operator() ()
{
	int list_size = 0;
	while (1)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(period_ms));
		int new_size = list.GetCount();
		if(new_size != list_size)
		{
			list_size = new_size;
			list.Sort();
			//std::cout << "List sorted\n";
		}
	}
}
