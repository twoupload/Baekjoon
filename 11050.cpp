#include <iostream>
using namespace std;

int n, k;
int c, cc, ccc;
int res;

int cal(int a);

int main()
{
	cin >> n >> k;

	c = cal(n);
	cc = cal(n - k);
	ccc = cal(k);

	res = cc * ccc;
	res = c / res;

	cout << res << endl;

	return 0;
}

int cal(int a)
{
	int sum = 1;
	while (a > 0)
	{
		sum = sum * a;

		a--;
	}

	return sum;
}

