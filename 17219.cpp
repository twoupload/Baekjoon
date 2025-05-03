#include<iostream>
#include<map>

using namespace std;

int N, M;
string site, password;

map<string, string> info;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> site >> password;
		info.insert(make_pair(site, password));
	}

	for (int i = 0; i < M; i++)
	{
		cin >> site;
		cout << info.find(site)->second << "\n";
	}

	return 0;
}