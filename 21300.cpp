#include <iostream>
using namespace std;

int arr[6];
int sum, b;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> b;
		arr[i] = b;
	}

	for (int i = 0; i < 6; i++)
	{
		sum += arr[i] * 5;
	}

	cout << sum;

	return 0;
}