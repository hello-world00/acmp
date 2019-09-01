#include <bits/stdc++.h>



int main()
{
	int N, counter = 0, c;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int q = 0; q < i; q++)
			std::cin >> c;
		for (int j = i; j < N; j++)
		{
			std::cin >> c;
			if (c == 1)
				counter++;
		}
	}
	std::cout << counter << std::endl;
	return 0;
}
