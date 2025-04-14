#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int testcase;
    cin >> testcase; // �� �� ���� �Է¹���

    while (testcase--) {
        stack<char> st;
        string s;
        cin >> s; // ��ȣ���� ���ڿ��� �Է�

        for (int j = 0; j < s.length(); j++) {
            if (st.empty()) { //������ ����ִٸ� push
                st.push(s[j]);
            }
            else { //������ ������� �ʰ�
                if (st.top() == '(' && s[j] == ')') { //top�� ���� ��ȣ�鼭 ���� ���ڰ� �ݴ� ��ȣ��
                    st.pop();//Pop
                }
                else {//�� ���� ���� ��� push
                    st.push(s[j]);
                }
            }
        }
        if (st.empty()) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}