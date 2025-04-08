#include<iostream>
using namespace std;

int a = -1, b = -1;

int main()
{
	
	while (1)
	{
		cin >> a >> b;

		if (a != 0 && b != 0)
		{
			if (a > b)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}

		else break;
	}

	return 0;
}