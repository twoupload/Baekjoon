#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 큰 수에서 작은 수를 빼는 함수
string subtractBigNumbers(string b, string c) {
    // b와 c가 모두 양수이고 b > c인 경우

    // 길이를 동일하게 맞추기
    while (c.length() < b.length()) {
        c = "0" + c;
    }

    string result = "";
    int borrow = 0;

    // 뒤에서부터 뺄셈 수행
    for (int i = b.length() - 1; i >= 0; i--) {
        int digit_b = b[i] - '0';
        int digit_c = c[i] - '0';

        // 이전 자리에서 빌림 처리
        int diff = digit_b - digit_c - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }

        result = to_string(diff) + result;
    }

    // 앞쪽의 불필요한 0 제거
    while (result.length() > 1 && result[0] == '0') {
        result.erase(0, 1);
    }

    return result;
}

// 큰 수를 작은 수로 나누는 함수
string divideBigNumberBySmall(string num, long long divisor) {
    string result;
    long long remainder = 0;

    for (char digit : num) {
        long long current = remainder * 10 + (digit - '0');
        result += to_string(current / divisor);
        remainder = current % divisor;
    }

    // 앞쪽의 불필요한 0 제거
    while (result.length() > 1 && result[0] == '0') {
        result.erase(0, 1);
    }

    return result;
}

int main() {
    long long a;
    string b, c;

    // 입력
    cin >> a >> b >> c;

    // b-c 계산
    string difference = subtractBigNumbers(b, c);

    // (b-c)/a 계산
    string x = divideBigNumberBySmall(difference, a);

    // 결과 출력
    cout << x << endl;

    return 0;
}