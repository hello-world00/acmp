#include <stdio.h>
#include <string.h>

#define MAX 101

int i, j, n, c, Edges;

int m[MAX][MAX], used[MAX];

void dfs(int v)
{
  int i;

  used[v] = 1; c++;

  for(i = 0; i < n; i++)
    if (m[v][i] && !used[i]) dfs(i);
}

 

int main(void)
{
  scanf("%d",&n); Edges = c = 0;

  memset(used,0,sizeof(used));

  for(i = 0; i < n; i++)
  	for(j = 0; j < n; j++)
    	scanf("%d",&m[i][j]), Edges += m[i][j];


  dfs(0); Edges /= 2;

 
  printf("%s\n", ((Edges == n - 1) && (c == n)) ? "YES" : "NO");
} 