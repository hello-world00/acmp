#include <bits/stdc++.h>

int main()
{
	int N, min_way = 10000;
	std::cin >> N;
	std::vector<std::vector<int>> G(N, std::vector<int> (N));
		
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)	
			std::cin >> G[i][j];
	}	
	
	for (int a = 0; a < N; a++)
	{
		for (int b = 0; b < N; b++)
		{
			if (a == b)
				continue;
			for (int c = 0; c < N; c++)
			{
				if (a == c || b == c)
					continue;
				min_way = std::min(min_way, G[a][b] + G[b][c] + G[c][a]);
			
			}
		}
	}
	std::cout << min_way << std::endl;
	
	

	return 0;
}
