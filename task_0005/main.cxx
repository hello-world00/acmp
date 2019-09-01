#include <iostream>
#include <vector>

const int DAYS = 31;

void printDays(std::vector<int> arr)
{
	for (int i : arr)
		std::cout << i << ' ';
	
	std::cout << std::endl;

}

int main()
{
	std::vector<int> oddDays;
	std::vector<int> evenDays;
	int i, n, k;
	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		std::cin >> k;
		if (k % 2 == 0)
			evenDays.push_back(k);
		else 
			oddDays.push_back(k);
	}

	printDays(oddDays);
	printDays(evenDays);
	std::cout << ((evenDays.size() >= oddDays.size()) ? "YES" : "NO") << std::endl;

	return 0;
}


