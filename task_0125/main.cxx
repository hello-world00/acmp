#include <bits/stdc++.h>

int main()
{
	int N, l, j, counter = 0;
	std::cin >> N;
	std::vector<std::pair<int, int>> connected;
	std::vector<int> hills;

	for (int i = 0; i < N; i++)
	{
		j = 0;
		for (; j <= i; j++)
			std::cin >> l;
		for (; j < N; j++){
			std::cin >> l;
			if (l)
				connected.push_back(std::make_pair(i, j));
		}
	}
	
	std::cin.ignore();
	for (int i = 0; i < N; i++)
	{
		std::cin >> l;
		hills.push_back(l);
	}
	
	for (auto p : connected)
	{
		if (hills[p.first] != hills[p.second])
			counter++;
	}
	
	std::cout << counter << std::endl;
	return 0;

}
