// ���� 10988
// �Ӹ�������� Ȯ���ϱ�


// �����ʿ�
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
	// ���ڿ� �Է�
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