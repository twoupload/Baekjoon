#include <iostream>
using namespace std;

long long arr[101];
int N, num;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	arr[1] = 1, arr[2] = 1, arr[3] = 1;

	for (int i = 4; i < 101; i++)
		arr[i] = arr[i - 3] + arr[i - 2];

	
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		cout << arr[num] << "\n";
	}

	return 0;
}