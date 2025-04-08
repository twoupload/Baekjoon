#include<iostream>
#include<vector>
using namespace std;

int n;
int i, j;
int result;

int main()
{
	cin >> n;

	for (i = 1; i < n; i++)
	{
		vector<int> v;
		int sum = 0;
		int temp = i;
		while (temp > 0)
		{
			v.push_back(temp % 10);
			temp = temp / 10;
		}
		for (j = 0; j < v.size(); j++)
		{
			sum += v[j];
		}

		if (i + sum == n)
		{
			result = i;
			break;
		}
			
	}

	cout << result << endl;
}