
// ���� 11718
// ���ڿ� �״�� ����ϱ�

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str; // ���� string
	while (true) { // string ���ڰ� ���� ������ �ݺ�
		getline(cin, str); // getline���� ���� �����Ͽ� str ���ڿ� ������. 
		if (str == "") break; // ���ڿ��� ���� ���
		cout << str << endl;
	}
	return 0;
}