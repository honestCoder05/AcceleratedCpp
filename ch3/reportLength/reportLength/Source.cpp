// Program to report the lenght of smallest and largest string in an input
#include<iostream>
#include<string>
#include<map>

int main()
{
	std::map<std::string, unsigned>dict;
	std::string s;

	while (std::cin >> s)
	{
		auto size = s.size();
		dict[s] = size;

	}
	for (auto it = dict.begin(); it != dict.end(); it++)
	{
		std::cout << it->first << ": " << it->second << std::endl;
	}
	std::cout << "Smallest length is: " << dict.begin()->second << std::endl;
	std::cout << "Largest length is: " << dict.rbegin()->second << std::endl;
}