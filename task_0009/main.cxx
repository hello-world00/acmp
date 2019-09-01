#include <bits/stdc++.h>

int main()
{
	int i, n, t, sum = 0, mul = 1;
	std::vector<int> arr;
	
	std::cin >> n;
	
	for (i = 0; i < n; i++)
	{
		std::cin >> t;	
		arr.push_back(t);
	}

	for (auto num : arr)
		sum += (num > 0) ? num : 0;
	
	auto it = std::minmax_element(arr.begin(), arr.end());
	auto itStart = (it.first < it.second) ? it.first : it.second;
	auto itEnd = (it.first < it.second) ? it.second : it.first;
	
	for (auto it = itStart+1; it != itEnd; it++)
		mul *= (*it);

	std::cout << sum << ' ' << mul << std::endl;

	return 0;
}
