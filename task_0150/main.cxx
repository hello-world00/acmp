#include <cstdio>

#define MAX 101
int G[MAX][MAX] = {0};
int used[MAX] = {0};
int result = -1;
int N, S;

void dfs(int v) ;

int main()
{
    
    scanf("%d%d", &N, &S);
    
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            scanf("%d", &G[i][j]);

    dfs(S);

    printf("%d\n", result);

    return 0;
}


void dfs(int v) 
{
    result++;
    used[v] = 1;
    for (int i = 1; i <= N; i++)
        if (G[v][i] == 1 && !used[i])
            dfs(i);
}