
// 백준 11718
// 문자열 그대로 출력하기

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str; // 변수 string
	while (true) { // string 문자가 있을 때까지 반복
		getline(cin, str); // getline으로 띄어쓰기 포함하여 str 문자열 가져옴. 
		if (str == "") break; // 문자열이 없을 경우
		cout << str << endl;
	}
	return 0;
}