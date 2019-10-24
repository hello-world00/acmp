#include <vector>
#include <stdio.h>

using namespace std;

vector<vector<int>> G;
vector<int> used;
vector<int> comp;
vector<vector<int>> result;
 
void dfs (int v) {
	used[v] = true;
	comp.push_back (v);
	for (size_t i=0; i<G[v].size(); ++i) {
		int to = G[v][i];
		if (! used[to])
			dfs (to);
	}
}
int main()
{
    int N, M;
    int a, b;
    scanf("%d%d", &N, &M);
    
    G.resize(N);
    used.resize(N, 0);
    
    for (size_t i = 0; i < M; i++)
    {
        scanf("%d%d", &a, &b);
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    for (int i = 0; i < N; i++)
    {
        if (!used[i])
        {
            comp.clear();
            dfs(i);
            result.push_back(comp);
        }
    }
    printf("%d\n", result.size());
    for (auto v : result)
    {
        printf("%d\n", v.size());
        for (auto a : v)
            printf("%d ", a+1);
        printf("\n");
    }
    return 0;
}