#include <iostream>
using namespace std;

int n, num, sum;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		sum += num;
	}

	if (sum == 0)
		cout << "Stay" << endl;
	else if (sum > 0)
		cout << "Right" << endl;
	else
		cout << "Left" << endl;

	return 0;
}