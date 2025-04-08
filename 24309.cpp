#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// ū ������ ���� ���� ���� �Լ�
string subtractBigNumbers(string b, string c) {
    // b�� c�� ��� ����̰� b > c�� ���

    // ���̸� �����ϰ� ���߱�
    while (c.length() < b.length()) {
        c = "0" + c;
    }

    string result = "";
    int borrow = 0;

    // �ڿ������� ���� ����
    for (int i = b.length() - 1; i >= 0; i--) {
        int digit_b = b[i] - '0';
        int digit_c = c[i] - '0';

        // ���� �ڸ����� ���� ó��
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

    // ������ ���ʿ��� 0 ����
    while (result.length() > 1 && result[0] == '0') {
        result.erase(0, 1);
    }

    return result;
}

// ū ���� ���� ���� ������ �Լ�
string divideBigNumberBySmall(string num, long long divisor) {
    string result;
    long long remainder = 0;

    for (char digit : num) {
        long long current = remainder * 10 + (digit - '0');
        result += to_string(current / divisor);
        remainder = current % divisor;
    }

    // ������ ���ʿ��� 0 ����
    while (result.length() > 1 && result[0] == '0') {
        result.erase(0, 1);
    }

    return result;
}

int main() {
    long long a;
    string b, c;

    // �Է�
    cin >> a >> b >> c;

    // b-c ���
    string difference = subtractBigNumbers(b, c);

    // (b-c)/a ���
    string x = divideBigNumberBySmall(difference, a);

    // ��� ���
    cout << x << endl;

    return 0;
}