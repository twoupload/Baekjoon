#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;

string remote;
int n, x;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> remote;

		if (remote == "add")
		{
			cin >> x;

			if (find(v.begin(), v.end(), x) != v.end())
				continue;
			else
				v.push_back(x);
		}
		else if (remote == "remove")
		{
			cin >> x;

			if (find(v.begin(), v.end(), x) == v.end())
				continue;
			else
				v.erase(remove(v.begin(), v.end(), x), v.end());
		}
		else if (remote == "check")
		{
			cin >> x;

			if (find(v.begin(), v.end(), x) == v.end())
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
		}
		else if (remote == "toggle")
		{
			cin >> x;

			if (find(v.begin(), v.end(), x) == v.end())
				v.push_back(x);
			else
				v.erase(remove(v.begin(), v.end(), x), v.end());
		}
		else if (remote == "all")
		{
			v.clear();
			for (int j = 1; j <= 20; j++)
			{
				v.push_back(j);
			}
		}
		else if (remote == "empty")
		{
			v.clear();
		}
	}

	return 0;
}