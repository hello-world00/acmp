#include <stdio.h>

int main()
{
    int N, a; 
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int counter = 0;
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a);
            if (a)
                counter++;
        }
        printf("%d ", counter);
    }

    return 0;
}