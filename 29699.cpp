#include <iostream>
#include <string>

using namespace std;

int n;
string str = "WelcomeToSMUPC";

int main()
{
	cin >> n;

	n = n % str.size();


	if (n == 0)
		cout << str[str.size() - 1] << endl;
	else
		cout << str[n - 1] << endl;

	return 0;
}