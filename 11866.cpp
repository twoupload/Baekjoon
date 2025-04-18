#include<iostream>
using namespace std;

int N, K;
int cur, ch, curCh = 1;
bool arr[1001];

int main()
{
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		arr[i] = true;

	cout << "<";

	while (ch < N)
	{
		if (cur == N)
			cur = 0;

		cur++;

		if (arr[cur] == true)
		{
			if (curCh == K)
			{
				ch++;

				if (ch < N)
					cout << cur << ", ";
				else
					cout << cur;

				arr[cur] = false;
				curCh = 1;
			}
			else
			{
				curCh++;
			}
		}
	}

	cout << ">";

	return 0;
	
}