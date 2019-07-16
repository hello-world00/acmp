#include <bits/stdc++.h>

int main()
{
	long long a, b, c, d, x;
	std::cin >> a >> b >> c >> d;

	for (x = -100; x < 100; x++)
	{
		if ((a * x * x * x) + (b * x * x) +(c * x) + d == 0)
			std::cout << x << ' ';
	}

	std::cout << std::endl;

	return 0;

}
