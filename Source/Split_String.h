#pragma once
#include <vector>
#include <string>

std::vector<std::string> split(const std::string&& input, const char&& letter)
{
	int i = 0;
	int length = input.length();
	std::vector<std::string> strings;
	std::string temp_string;
	for (i = 0; i != length; ++i)
	{
		if (input[i] == letter)
		{
			strings.push_back(temp_string);
			temp_string = "";
			++i;
		}
		temp_string += input[i];
	}
	strings.push_back(temp_string);
	return strings;
}
