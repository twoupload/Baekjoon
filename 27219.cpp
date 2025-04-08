#include <iostream>
using namespace std;

int n;
int v, i;

int main()
{
	cin >> n;

	v = n / 5;
	i = n % 5;

	for (int j = 0; j < v; j++)
		cout << "V";
	for (int j = 0; j < i; j++)
		cout << "I";

	return 0;
}