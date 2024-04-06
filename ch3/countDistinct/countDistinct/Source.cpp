// Program to count how many times each disticnt word appears in its input

#include<iostream>
#include<vector>
#include<unordered_map>

int main()
{
	std::unordered_map<std::string, unsigned>dict;
	for (std::string word; std::cin >> word;)
	{
		dict[word]++;
		word = " ";
	}
	/*std::cout << "Number of distinct words are: " << dict.size() << std::endl;*/
	for (auto it = dict.begin(); it != dict.end(); it++)
	{
		std::cout << it->first << it->second << std::endl;
	}
}