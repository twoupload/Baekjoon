#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;
int a;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	cout << v[1];

	return 0;
}