// 백준 9086번
// 문자열

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int rep;
	string str;

	cin >> rep;
	
	for (int i = 0; i < rep; i++) {
		cin >> str;

		int len = str.length();

		if (len == 1) cout << str[0] << str[0] << endl;
		else if (len == 2) cout << str[0] << str[1] << endl;
		else cout << str[0] << str[len - 1] << endl;
	}

	return 0;
}