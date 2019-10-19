#include <stdio.h>

int main()
{
    int N, a; 
    scanf("%d", &N);
    int L[N] = {0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a);
            if (a)
                L[i]++;
        }
    }
    for (int i = 1; i < N; i++)
    {
        if (L[i] != L[i-1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");    
    return 0;
}