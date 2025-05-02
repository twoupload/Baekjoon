#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, nn, s;
vector<int> v;
vector<int> result;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> nn;
		v.push_back(nn);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
			sum += v[j];

		result.push_back(sum);
	}

	for (auto iter : result)
		s += iter;

	cout << s;

	return 0;
}