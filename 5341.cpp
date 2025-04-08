#include<iostream>
using namespace std;

int n;

int main()
{
	while (1)
	{
		cin >> n;

		if (n != 0)
		{
			int temp = 0;
			for (int i = n; i > 0; i--)
				temp += i;

			cout << temp << endl;
		}
		else
			break;
	}

	return 0;
}