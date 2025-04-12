#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
int i;
int nNum, mNum;
vector<int> num;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> nNum;
		num.push_back(nNum);
	}

	sort(num.begin(), num.end());

	cin >> m;

	for (i = 0; i < m; i++)
	{
		cin >> mNum;
		
		if (binary_search(num.begin(), num.end(), mNum)) {
			cout << "1\n";
		}
		else
		{
			cout << "0\n";
		}

	}
	return 0;
}