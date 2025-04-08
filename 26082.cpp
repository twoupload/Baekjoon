#include <iostream>
using namespace std;

int a, b, c;
int x;

int main()
{
	cin >> a >> b >> c;

	// (b / a) * 3 = x / c
	// (b / a ) * 3 * c = x

	x = b / a;
	x = x * 3;
	x = x * c;

	cout << x;

	return 0;
}