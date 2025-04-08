#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int remain = 0;
	for (int i = 0; i < str.size(); i++)
	{
		remain = (remain * 10 + (str[i] - '0')) % 20000303;
	}

	cout << remain;
	return 0;
}

