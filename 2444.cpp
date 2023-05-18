// 백준 2444
// 별 찍기 - 7

#include <iostream>
using namespace std;

int main(void) {
	int number,num;
	cin >> number;

	num = number * 2 - 1;
	
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++) cout << "*";
		cout << endl;
	}

	return 0;
}