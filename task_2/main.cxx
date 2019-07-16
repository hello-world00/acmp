#include <iostream>


int main()
{
	int n;
	std::cin >> n;
	
	if (n > 0)
		std::cout << (n + 1) * n / 2 << std::endl;
	else 
		std::cout << -((-n + 1) * -n / 2) + 1 << std::endl;

	return 0;
}
