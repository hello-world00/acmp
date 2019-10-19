#include <stdio.h>

int main()
{   
    int N, a, b, counter = 0;
    int G[501] = {0};

    scanf("%d", &N);
    for (int i = 1; i < N; i++)
    {
        scanf("%d%d", &a, &b);
        G[a]++;
        G[b]++;
    }
    
    for (int i = 1; i <= N; i++)
        if (G[i] >= 2)
            counter++;
    
    printf("%d\n", counter);
}