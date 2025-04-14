#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int testcase;
    cin >> testcase; // 몇 번 돌지 입력받음

    while (testcase--) {
        stack<char> st;
        string s;
        cin >> s; // 괄호들을 문자열로 입력

        for (int j = 0; j < s.length(); j++) {
            if (st.empty()) { //스택이 비어있다면 push
                st.push(s[j]);
            }
            else { //스택이 비어있지 않고
                if (st.top() == '(' && s[j] == ')') { //top이 여는 괄호면서 다음 인자가 닫는 괄호면
                    st.pop();//Pop
                }
                else {//그 외의 경우는 모두 push
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