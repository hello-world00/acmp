#include <bits/stdc++.h>

int counter = 0;

void dfs (std::vector<std::vector<bool>> A, std::vector<bool> &used, int v) 
{
    if (!(used[v]))
        counter++;
	used[v] = true;


   
    for (int i = 0; i < A.size(); i++)
    {
        if (A[v][i] && !used[i])
            dfs(A, used, i);
    }

}

int main()
{
    int N, K, X, Y;
    
    std::cin >> N >> K;
    std::vector<std::vector<bool>> A(N + 1, std::vector<bool>(N + 1, false));
    std::vector<bool> used(N  + 1, false);
    while (std::cin >> X && X != 0)
    {
        std::cin >> Y;
        A[X][Y] = true; // X faster than Y.
    }

    dfs(A, used, K);

    std::cout << ((counter == N) ? "Yes" : "No") << std::endl;
    return 0;
}

