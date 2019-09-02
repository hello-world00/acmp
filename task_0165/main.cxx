#include <bits/stdc++.h>



int main()
{
	int N, M;
	std::cin >> N >> M;
	std::vector<std::vector<int>> arr(N), dp(N);
	
	for (int i = 0; i < N; i++)
	{
		arr[i].resize(M);
		dp[i].resize(M);
		for (int j = 0; j < M; j++)
		{
			std::cin >> arr[i][j];
			dp[i][j] = 0;
		}
	}
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			
			if (i == N - 1 && j == M - 1)
				continue;
			else 
			{
				int k = arr[i][j];
				if (k + i < N)
					dp[k + i][j] += dp[i][j];
				if (k + j < M)
					dp[i][k + j] += dp[i][j];
			}	
				
					
		}
	}
	

	std::cout << dp[N - 1][M - 1] << std::endl;
	return 0;
}
