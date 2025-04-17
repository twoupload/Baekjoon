#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

int n,cmdNum;
int i;
string cmd;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> cmd;

		if (cmd == "push")
		{
			cin >> cmdNum;
			q.push(cmdNum);
		}
		else if (cmd == "pop")
		{
			if (q.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				int temp;
				temp = q.front();
				q.pop();
				cout << temp << endl;
			}
		}
		else if (cmd == "size")
		{
			cout << q.size() << endl;
		}
		else if (cmd == "empty")
		{
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (cmd == "front")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (cmd == "back")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
		else
		{
			cout << "wrong cmd" << endl;
			return 0;
		}
	}

	return 0;
}