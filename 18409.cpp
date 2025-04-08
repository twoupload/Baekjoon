#include <iostream>
#include <string>

using namespace std;

int main()
{

	string str;
	
	int w = 0;
	int n = 0;

	cin >> n;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o')
		{
			w += 1;
		}
	}

	cout << w;

	return 0;
}