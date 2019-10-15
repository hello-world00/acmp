#include <stdio.h>

#define MAX 101
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))

int main()
{
    int G[MAX][MAX] = {0};
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            scanf("%d", &G[i][j]);
        
    for (int k = 1; k <= N; k++)
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
            printf("%d ", G[i][j]);
        printf("\n");
    }

    return 0;
}