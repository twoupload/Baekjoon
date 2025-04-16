#include<iostream>
#include<stack>

using namespace std;

stack<int> s;

string cmd;
int n;
int cmdNum;

int main()
{
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> cmd;

		if (cmd == "push")
		{
			cin >> cmdNum;
			s.push(cmdNum);
		}
		else if (cmd == "top")
		{
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
		else if (cmd == "size")
			cout << s.size() << endl;
		else if (cmd == "empty")
			cout << s.empty() << endl;
		else
		{
			if (s.empty())
				cout << -1 << endl;
			else
			{
				int temp = s.top();
				s.pop();
				cout << temp << endl;
			}
		}
	}

	return 0;
}