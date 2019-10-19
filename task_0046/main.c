#include <stdio.h>

int main(){
	const char e[] = "7182818284590452353602875";
	int n, i;

	scanf("%d", &n);
	printf("%s", (n==0) ? "3" : "2.");

	for (i = 0; i < n-1; i++)
		printf("%c", e[i]);

	printf("%c", (n!=0) ? ((n==25) ? e[24] : (((e[n] - '0') >= 5) ? e[i]+1: e[i])) : 32);
	return 0;
}

