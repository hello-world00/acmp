#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main()
{
    int N, M, a, b;
    scanf("%d%d", &N, &M);
    std::unordered_map<int, std::vector<int>> G;
    for (int i = 0; i < M; i++)
    {
            scanf("%d%d", &a, &b);
            auto it = std::upper_bound(G[a].cbegin(), G[a].cend(), b); 
            G[a].insert(it, b);
    }
    printf("%d\n", N);
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", G[i].size());
        for (auto j : G[i])
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}