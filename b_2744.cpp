#include <iostream>
using namespace std;

string s;

int main()
{
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
		else 
		{
			s[i] = s[i] - 32;
		}
	}

	cout << s;

	return 0;
}