#include <iostream>
using namespace std;

int a, b;
int gcdNum, lcmNum;

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
	cin >> a >> b;

	gcdNum = gcd(a, b);
	lcmNum = lcm(a, b);

	cout << gcdNum << endl;
	cout << lcmNum << endl;
}

int gcd(int a, int b)
{
	int c;

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}