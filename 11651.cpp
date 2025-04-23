#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int n, i, x, y;

vector<pair<int, int>> vp;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> x >> y;

		vp.push_back(make_pair(x, y));
	}

	sort(vp.begin(), vp.end(), cmp);


	for (i = 0; i < vp.size(); i++)
		cout << vp[i].first << " " << vp[i].second << "\n";
	

	return 0;
}