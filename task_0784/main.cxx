#include <stdio.h>

int main()
{
    int N;
    unsigned long long a, b;
    scanf("%d%llu%llu", &N, &a, &b);
    while (a != b)
    {
        while (a > b)
            a /= 2;
        while (a < b)
            b /= 2;
    }
    printf("%llu\n", a);
    return 0;
}