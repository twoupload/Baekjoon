#include <iostream>
using namespace std;

int arr[100001];

int N, M;
int i, j;
int num;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int t = 1; t <= N; t++)
	{
		cin >> num;
		if (t == 1)
			arr[1] = num;
		else
			arr[t] = arr[t - 1] + num;
	}


	for (int t = 0; t < M; t++)
	{
		cin >> i >> j;

		int sum = 0;
		sum = arr[j] - arr[i - 1];

		cout << sum << "\n";
	}

	return 0;
}