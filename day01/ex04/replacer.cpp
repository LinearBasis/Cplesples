#include "replacer.hpp"
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

std::string	replace_helper(std::string str, std::string from, std::string to)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		// std::cout << i << " : ";
		// std::cout << str << std::endl;
		if (!strncmp(str.c_str() + i, from.c_str(), from.size()))
		{
			str.erase(i, from.size());
			str.insert(i, to);
			i += (to.size() - 1);
		}
	}
	return (str);
}

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	fin(filename);


	if (!fin.is_open())
	{
		std::cout << "File open error\n";
		return ;
	}
	std::string	ans("");
	std::string tmp;
	while (std::getline(fin, tmp))
	{
		ans += tmp;
		ans += "\n";
	}
	std::cout << ans << std::endl;
	ans = replace_helper(ans, s1, s2);

	fin.close();
	std::ofstream	fout(filename);

	if (!fout.is_open())
	{
		std::cout << "File open error\n";
		return ;
	}
	fout << ans;
	return ;
}