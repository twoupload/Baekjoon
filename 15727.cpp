#include <iostream>

using namespace std;

int dis;

int main()
{
	cin >> dis; 

	if (dis % 5 == 0)
		cout << dis / 5;
	else
		cout << (dis / 5) + 1;

	return 0;
}