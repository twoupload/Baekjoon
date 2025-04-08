#include <iostream>
using namespace std;

int n, nn, c;
int gg, hh;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> nn;

		if (nn % 2 == 0)
			gg++;
		else
			hh++;
	}

	if (gg > hh)
		cout << "Happy" << endl;
	else
		cout << "Sad" << endl;

	return 0;

}