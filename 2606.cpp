#include<iostream>
#include<vector>
#define MAX 105
using namespace std;

int N, M, cnt = 0;
vector<int> G[MAX];
bool visited[MAX];

void DFS(int v)
{
	visited[v] = true;
	for (int t = 0; t < G[v].size(); t++)
	{
		int k = G[v][t];
		if (!visited[k])
		{
			cnt++;
			DFS(k);
		}
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int start, end;
		cin >> start >> end;
		G[start].push_back(end);
		G[end].push_back(start);
	}
	DFS(1);
	cout << cnt << '\n';
	return 0;
}