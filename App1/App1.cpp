#include <iostream>
#include "ListWrapper.h"
#include "ConsoleWorker.h"
#include "Sorter.h"

int main()
{
    ListWrapper lw;

    std::thread t0{ ConsoleWorker(lw) };
    std::thread t1{ Sorter(lw, 5000) };
    t0.join();

    std::cout << "Execution finished\n";
}

