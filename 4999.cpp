#include<iostream>
using namespace std;

int posANum;
int reqANum;

string posAh;
string reqAh;

int main()
{
	cin >> posAh;
	cin >> reqAh;

	for (int i = 0; i < posAh.size(); i++)
	{
		if (posAh[i] != 'h')
			posANum += 1;
	}

	for (int i = 0; i < reqAh.size(); i++)
	{
		if (reqAh[i] != 'h')
			reqANum += 1;
	}

	if (reqANum <= posANum)
		cout << "go" << endl;
	else
		cout << "no" << endl;

	return 0;
}