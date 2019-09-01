#include <iostream>
#include <regex>
#include <string>
#include <cstdlib>

int main()
{
	std::string req;
	std::regex r("[A-H][1-8]-[A-H][1-8]");
	std::smatch m;

	std::cin >> req;	
	std::regex_search(req, m, r);
	
	if (m.size() == 0){
		std::cout << "ERROR" << std::endl;
		return 0;
	}
		
	int dx = std::abs(req[0]-req[3]);  // A2-B4
		                          // ^  ^
	int dy = std::abs(req[1] - req[4]);
	
	if ((dx == 1 && dy == 2) || (dx  == 2 && dy == 1))
	       std::cout << "YES" << std::endl;
	else 
		std::cout << "NO" << std::endl;	

	return 0;	

}
