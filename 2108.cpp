#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<unordered_map>
#include<utility>

using namespace std;

vector<pair<int, int>> vm;
vector<int> v;

int n, nn, i, sum;
double avg;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> nn;
		sum += nn;
		v.push_back(nn);
	}

	// Æò±Õ
	avg = (double)sum / n;
	cout << floor(avg + 0.5) << "\n";

	// Áß¾Ó°ª
	sort(v.begin(), v.end());
	cout << v[n / 2] << "\n";

	// ÃÖºó°ª
	unordered_map<int, int> fre;
	for (int num : v)
	{
		fre[num]++;
	}

	int max_fre = 0;
	for (const auto& pair : fre)
	{
		max_fre = max(max_fre, pair.second);
	}

	vector<int> temp;
	for (const auto& pair : fre)
	{
		if (pair.second == max_fre)
			temp.push_back(pair.first);
	}
	
	sort(temp.begin(), temp.end());

	if (temp.size() >= 2)
		cout << temp[1] << "\n";
	else if (temp.size() == 1)
		cout << temp[0] << "\n";

	// ¹üÀ§
	cout << v[n - 1] - v[0] << "\n";

	return 0;
}