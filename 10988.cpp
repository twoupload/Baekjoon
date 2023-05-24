// 백준 10988
// 팰린드롬인지 확인하기


// 수정필요
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
	// 문자열 입력
	string str;
	cin >> str;
	
	char str2 [101] ="";

	int i = 0;
	int len = str.length() - 1;

	while (str[i] != NULL)
	{
		str2[len] = str[i];
		i++;
		len--;
	}

	for (i = 0; i <= len; i++) {
		if (str[i] != str2[i]) {
			cout << "0";
			return 0;
		}
	}

	cout << "1";

	return 0;

	
}