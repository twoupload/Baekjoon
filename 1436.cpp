#include<iostream>
#include<string>
using namespace std;

int main()
{
	int title; // ��ȭ ���� 666
	string sTitle; // ���ڿ��� ��ȯ�� ��ȭ ����
	int check = 0;
	int n;

	cin >> n;

	for (title = 666; ; title++)
	{
		sTitle = to_string(title);

		if (sTitle.find("666") != -1)
		{
			check++;
			if (check == n)
			{
				cout << title;
				break;
			}
		}
	}
	return 0;
}