// 백준 25314
// 코딩은 체육과목 입니다. 
// 입력한 숫자만큼 long 쓰기.

#include <iostream>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	num = num / 4;

	for (int i = 0; i < num; i++) cout << "long ";

	cout << "int";

	return 0;
}