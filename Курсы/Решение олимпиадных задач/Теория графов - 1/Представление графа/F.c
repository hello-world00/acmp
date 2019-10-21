#include <stdio.h>
 
int G[101][101];
 
int main()
{
    int N, f = 1;
    scanf("%d", &N);
 
 
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &G[i][j]);
            if (i == j && G[i][j]) {printf("NO\n"); return 0;}
        }
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (G[i][j] != G[j][i]) 
                f = 0;
                 
     
    printf("%s\n", (f) ? "NO" : "YES");
    return 0;
}