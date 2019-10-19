#include <stdio.h>

// Works in c++11, MinGW GNU C++ 8.1

int main()
{
    int N, c, a;
    scanf("%d", &N);
    printf("%d\n", N);
    for (int i = 0; i < N; i++)
    {
        int A[N+1] = {0};
        scanf("%d", &c);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a);
            A[a] = 1;
        }
        for (int j = 1; j <= N; j++)
            printf("%d ", A[j]);
        printf("\n");
    }
    return 0;
}