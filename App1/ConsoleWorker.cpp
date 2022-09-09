#include "ConsoleWorker.h"
#include <string>

void ConsoleWorker::operator() () 
{
	std::string inputStr;
	while (1)
	{
		getline(std::cin, inputStr);

		if (inputStr.empty())
		{
			list.WriteToStream(std::cout);
		}
		else
		{
			list.Insert(inputStr);
		}
	}
}
