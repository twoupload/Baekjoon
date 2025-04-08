#include <iostream>
using namespace std;

int t1, e1, f1;
int t2, e2, f2;
int maxx, mel;

int main()
{
	cin >> t1 >> e1 >> f1;
	cin >> t2 >> e2 >> f2;

	maxx = t1 * 3 + e1 * 20 + f1 * 120;
	mel = t2 * 3 + e2 * 20 + f2 * 120;

	if (maxx > mel)
		cout << "Max" << endl;
	else if (maxx < mel)
		cout << "Mel" << endl;
	else
		cout << "Draw" << endl;

	return 0;
}