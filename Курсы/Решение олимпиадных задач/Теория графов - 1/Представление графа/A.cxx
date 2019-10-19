#include <stdio.h>
#include <vector>
#include <unordered_map>

int main()
{
    int N, M = 0, a;
    scanf("%d", &N);
    std::unordered_map<int, std::vector<int>> G;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &a);
            if (a){G[i].push_back(j); M++;}
        }
    }
    printf("%d %d\n", N, M);
    for (auto i : G)
        for (auto j : i.second)
            printf("%d %d\n", i.first, j);

    return 0;
}