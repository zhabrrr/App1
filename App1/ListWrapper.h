#pragma once
#include <list>
#include <string>
#include <mutex>
#include <iostream>

class ListWrapper
{
	std::list<std::string> arr;
	std::mutex mtx;

public:
	void Sort();
	void Insert(const std::string& str);
	void WriteToStream(std::ostream& outstream);
	int GetCount();
};

