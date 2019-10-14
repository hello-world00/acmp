#include <stdio.h>
#include <string.h>

#define MAX 1010
int A[MAX][MAX];
int used[MAX];
int N, flag = 0;

void dfs(int v, int prev = -1){
    used[v] = 1;
    for (int i = 0; i < N; i++)
        if ((prev != i) && A[v][i])
            if (used[i]) flag = 1; else dfs(i, v);
}

int main()
{
    int K, u, v;
    
    memset(A, 0, sizeof(A));
    memset(used, 0, sizeof(used));
    
    scanf("%d%d", &N, &K);


    for (int i = 0; i < K; i++)
    {
        scanf("%d%d", &u, &v);
        A[u-1][v-1] = 1;
        A[v-1][u-1] = 1;
    }


    for (int i = 0; i < N; i++)
        if (!used[i])
            dfs(i);

    printf("%s\n", (flag) ? "YES" : "NO");
    return 0;
}


