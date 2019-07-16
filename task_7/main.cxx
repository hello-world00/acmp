#include <string>
#include <iostream>

std::string max_str(std::string str1, std::string str2)
{
	if (str1.length() == str2.length())
		return (str1.compare(str2) >= 0) ? str1 : str2;
	else
		return (str1.length() > str2.length()) ? str1 : str2;
}

int main()
{
	std::string str1, str2, str3;
	std::cin >> str1 >> str2 >> str3;

	std::cout << max_str(str1, max_str(str2, str3)) << std::endl; 

	return 0;
}
