#include <iostream>
using namespace std;

int checkNum = 0;
int temp;

int main()
{
	for (int i = 0; i < 5; i++) 
	{
		cin >> temp;
		checkNum += temp * temp;
	}

	cout << checkNum % 10;

	return 0;
}