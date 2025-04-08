#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;

int n, integer;
int i;

int main()
{
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> integer;
		v.push_back(integer);
	}

	sort(v.begin(), v.end());

	for (i = 0; i < n; i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}