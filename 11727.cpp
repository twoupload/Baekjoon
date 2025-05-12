#include<iostream>
using namespace std;

long long arr[1001];
int N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr[1] = 1, arr[2] = 3;

	for (int i = 3; i <= 1000; i++)
	{
		arr[i] = (arr[i - 1] + arr[ i - 2] * 2) % 10007;
	}

	cin >> N;

	cout << arr[N];

	return 0;
}