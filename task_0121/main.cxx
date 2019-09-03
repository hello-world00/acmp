#include <bits/stdc++.h>

int main()
{
	int N, n;
	std::cin >> N;
	std::vector<int> dp(N), arr;
	
	for (int i = 0; i < N; i++)
	{
		std::cin >> n;
		arr.push_back(n);
	}
	std::sort(arr.begin(), arr.end());
	
	
	dp[1] = arr[1] - arr[0];
	dp[2] = arr[2] - arr[0];
	for (int i = 3; i < N; i++)
		dp[i] = std::min(dp[i-1], dp[i-2]) + arr[i] - arr[i-1];
	std::cout << dp[N - 1] << std::endl;
	return 0;
}	

