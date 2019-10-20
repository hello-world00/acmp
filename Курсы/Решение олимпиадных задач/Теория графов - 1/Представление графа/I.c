#include <stdio.h>

int G[101][101];

int main()
{
    int N, M;
    int a,b;
    scanf("%d%d", &N, &M);
    
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d", &a, &b);
        G[a-1][b-1] = 1;
    }
  	if (N*(N-1)/2 != M) {printf("NO\n"); return 0;}
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            if (G[i][j] == G[j][i]) {printf("NO\n"); return 0;}
        
    printf("YES\n");
    return 0;
}