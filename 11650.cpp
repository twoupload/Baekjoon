#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, i;
int a, b;

int main()
{
	cin >> n;
	vector<pair<int, int>> v(n);

	for (i = 0; i < n; i++)
		cin >> v[i].first >> v[i].second;

	sort(v.begin(), v.end());

	for (const auto& cur : v)
		cout << cur.first << " " << cur.second << "\n";

	return 0;
}