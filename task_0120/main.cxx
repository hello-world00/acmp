#include <bits/stdc++.h>

// works in c++11 , not in c++17
int main()
{
	int N, M;
	std::cin >> N >> M;	
	int arr[N][M], dp[N][M] = {0};
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			std::cin >> arr[i][j];
	
	
	for (int i = 0; i < N; i++)
	{	
		for (int j = 0; j < M; j++)
		{
			if (i == 0 && j == 0)
				dp[0][0] = arr[0][0];
			
			else if (i == 0)
				dp[i][j] = dp[i][j - 1] + arr[i][j];
			else if (j == 0)
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			else
				dp[i][j] = std::min(dp[i][j - 1], dp[i - 1][j]) + arr[i][j];
			
		}
	}
			
	std::cout << dp[N - 1][M - 1] << std::endl;
	return 0;	
}
