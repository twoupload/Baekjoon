#include <iostream>
using namespace std;

int arr[10];
bool b = true;

int main()
{
	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == 1 || arr[i] == 0)
			continue;
		else
			b = false;
	}

	if (b == true)
		cout << "S" << endl;
	else
		cout << "F" << endl;

	return 0;
}