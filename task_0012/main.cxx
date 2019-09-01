#include <bits/stdc++.h>


long double line(int X1, int Y1, int X2, int Y2)
{

	return std::sqrt((X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2));
}

long double S_rectangle(int X1, int Y1, int X2, int Y2, int X4, int Y4)
{
	double a = line(X1, Y1, X2, Y2);
	double b = line(X1, Y1, X4, Y4);

	return a * b;
}

long double S_triangle(int X1, int Y1, int X2, int Y2, int X3, int Y3)
{
	return std::abs((X2 - X1) * (Y3 - Y1) - (Y2 - Y1) * (X3 - X1)) / 2.0;
}

int main()
{
	int N, counter = 0;
	int X, Y, X1, Y1, X2, Y2, X3, Y3, X4, Y4;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> X >> Y >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
		long double S_r = S_rectangle(X1, Y1, X2, Y2, X4, Y4);
		long double S_rec1 = S_triangle(X, Y, X1, Y1, X2, Y2);
		long double S_rec2 = S_triangle(X, Y, X2, Y2, X3, Y3);
		long double S_rec3 = S_triangle(X, Y, X3, Y3, X4, Y4);
		long double S_rec4 = S_triangle(X, Y, X1, Y1, X4, Y4);
		// std::cout << S_r << ' ' << S_rec1 << ' ' << S_rec2 << ' ' << S_rec3 << ' ' << S_rec4 << std::endl;
		if (S_r == S_rec1 + S_rec2 + S_rec3 + S_rec4)
			counter++;
		
	}
	std::cout << counter << std::endl;
	return 0;

}
