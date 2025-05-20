#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;
vector<int> v;
int N, num;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;

		vec.push_back(num);
		v.push_back(num);
	}

	sort(vec.begin(), vec.end());

	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (int i = 0; i < N; i++)
	{
		int findNum = v[i];
		int index = lower_bound(vec.begin(), vec.end(), findNum) - vec.begin();

		cout << index << " ";
	}

	return 0;
}