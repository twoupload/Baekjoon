#include<iostream>
#include<map>
#include<vector>
using namespace std;

int N, M, c;
string P;

map<string, int> people;
vector<string> nnPeople;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> P;

		people[P] += 1;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> P;
		people[P] += 1;
	}

	for (auto iter : people)
	{
		if (iter.second == 2)
		{
			c++;
			nnPeople.push_back(iter.first);
		}
	}

	cout << c << "\n";

	for (int i = 0; i < nnPeople.size(); i++)
	{
		cout << nnPeople[i] << "\n";
	}

	return 0;
}