#include <iostream>
#include "SplitString.h"

int main()
{
	std::vector<std::string> test = split("Hello this is the test for my new function!", ' ');
	for (std::string str : test)
	{
		std::cout << str << "\n";
	}
}
