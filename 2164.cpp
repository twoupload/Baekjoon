#include<iostream>
#include<deque>

using namespace std;

// info
int i;
int n, temp;

// init deque
deque<int> deq;

int main()
{
	// input integer in deque
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		deq.push_back(i);
	}

	// calculation
	/*
		1. pop front deque and then delete
		2. pop front deque and then push back deque
		3. repeat this circulation until left only one integer
	*/

	while (deq.size() > 1)
	{
		deq.pop_front();
		temp = deq.front();

		deq.pop_front();

		deq.push_back(temp);
	}

	// print integer
	cout << deq.front();

	return 0;
}