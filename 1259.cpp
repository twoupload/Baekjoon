#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int num;
string str;
string rStr;

int main()
{


	while (1)
	{
		cin >> num;

		if (num == 0)
			return 0;
		else
		{
			rStr = to_string(num);

			str = rStr;

			reverse(rStr.begin(), rStr.end());

			if (str == rStr)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
}