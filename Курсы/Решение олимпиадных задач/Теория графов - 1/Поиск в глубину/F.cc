#include <vector>
#include <stdio.h>

using namespace std;

vector<vector<int>> G;
int N, M;

void dfs(int x, int y)
{
    G[x][y] = 2;

    if (x >= 1 && G[x-1][y] == 1)
        dfs(x-1, y);
    if (x + 1 < N && G[x+1][y] == 1)
        dfs(x + 1, y);
    if (y >= 1 && G[x][y-1] == 1)
        dfs(x, y - 1);
    if (y + 1 < M && G[x][y+1] == 1)
        dfs(x, y + 1);
}

int main()
{
    int ans = 0;
    char c;
    scanf("%d%d", &N, &M);
    G.resize(N, vector<int>(M, 0));
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf(" %c", &c);
            if (c == '#')
                G[i][j] = 1;
            else
                G[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(G[i][j] == 1){
                dfs(i, j);
                ans++;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}