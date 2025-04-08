#include <iostream>
using namespace std;

string str;
bool sw = true;

int main()
{
	cin >> str;

	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == str[i - 1])
			continue;
		else
		{
			sw = false;
			break;
		}
	}

	if (sw == false)
		cout << 0;
	else
		cout << 1;

	return 0;
}