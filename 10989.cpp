#include<iostream>
using namespace std;

int arr[10001];
int n, nn;
int i, j;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> nn;
		arr[nn]++;
	}

	for (i = 1; i <= 10000; i++)
	{
		for (j = 0; j < arr[i]; j++)
		{
			cout << i << "\n";
		}
	}

	return 0;
}