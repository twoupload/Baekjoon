#include <iostream>
using namespace std;

int t, s;

int main()
{
	cin >> t >> s;

	if (t >= 12 && t <= 16)
	{
		if (s == 0)
			cout << 320;
		else
			cout << 280;
	}

	else
	{
		cout << 280;
	}

	return 0;
}