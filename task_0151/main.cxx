#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

#define WHITE 0
#define RED 1
#define BLUE 2

vector<vector<int>> G;
vector<int> color;


void dfs(int v, int v_color)
{
    color[v] = v_color;
    for (int i = 0; i < G[v].size(); i++)
    {
        if (!G[v][i])
            continue;
        if (color[i] == WHITE)
            dfs(i, (v_color == BLUE) ? RED : BLUE);
        else if (color[i] == v_color)
        {
            printf("NO\n");
            exit(0);
        }
    }
}

int main()
{
    int N, M, a, b;
    scanf("%d%d", &N, &M);
    
    G.resize(N, vector<int>(N, 0));
    color.resize(N, WHITE);
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d", &a, &b);
        G[a-1][b-1] = G[b-1][a-1] = 1;
    }

    for (int i = 0; i < N; i++)
        if (color[i] == 0)
            dfs(i, RED);
    

    printf("YES\n");
    return 0;
}