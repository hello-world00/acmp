#include <bits/stdc++.h>

int main()
{
	int N;
	int q,w;
	std::cin >> N;
	std::vector<std::pair<int, int>> arr;
	std::vector<int> dp(N);
	for (int i = 0; i < N; i++)
	{	
		std::cin >> q >> w;
	       	arr.push_back(std::make_pair(q, w));
	}
	std::sort(arr.begin(), arr.end());
	
	dp[0] = arr[0].second;
	dp[1] = std::min(arr[1].second + arr[0].second, arr[1].second);

	for (int i = 2; i < N; i++)
		dp[i] = arr[i].second + std::min(dp[i-1], dp[i-2]);
	std::cout << dp[N-1] << std::endl;
	return 0;
}
