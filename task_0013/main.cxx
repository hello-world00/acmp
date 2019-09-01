#include <bits/stdc++.h>



int main()
{
	int A, B;
	int c = 0, d = 0;
	std::cin >> A >> B;

	for (int i = 1; i <= 1000; i *= 10)
	{
		if (A / i % 10 == B / i % 10)
			c++;	
	}

	for (int i = 1; i <= 1000; i *= 10)
	{
		for (int j = 1; j <= 1000; j *= 10)
		{
			if (A / i % 10 == B / j % 10)
				d++;
		}
	}
	d = (d == 0) ? 0 : d - c;
	std::cout << c << ' ' << d << std::endl;

}
