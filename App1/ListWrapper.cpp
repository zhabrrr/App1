#include "ListWrapper.h"
#include <algorithm>

void ListWrapper::Sort()
{
	std::lock_guard <std::mutex>  guard(mtx);
	arr.sort([](const std::string& lhs, const std::string& rhs) {  return _stricmp(lhs.c_str(), rhs.c_str()) < 0; });
}


void ListWrapper::Insert(const std::string& str)
{
	std::lock_guard <std::mutex>  guard(mtx);
	arr.push_front(str);
}

void ListWrapper::WriteToStream(std::ostream& outstream)
{
	outstream << "--------------\n";
	std::lock_guard <std::mutex>  guard(mtx);
	for (const std::string& s : arr)
	{
		outstream << s << '\n';
	}
	outstream << "--------------\n\n";

}

int ListWrapper::GetCount() 
{ 
	std::lock_guard <std::mutex>  guard(mtx);
	return arr.size();
}

