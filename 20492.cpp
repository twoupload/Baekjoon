#include <iostream>
using namespace std;

int p;
int totalP1, totalP2;

int main()
{
	cin >> p;

	totalP1 = p * 78 / 100;
	
	totalP2 = (p * 0.8) + (p * 0.2 * 0.78);

	cout << totalP1 << " " << totalP2;

	return 0;
}