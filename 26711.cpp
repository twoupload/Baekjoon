#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string a, b, ans;
int carry;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.length() < b.length())
		a += "0";
	while (a.length() > b.length())
		b += "0";
	n = a.length();

	for (int i = 0; i < n; i++)
	{
		int cur = a[i] - '0' + b[i] - '0' + carry;
		if (cur > 9)
			carry = 1, cur -= 10;
		else
			carry = 0;
		ans += cur + '0';
	}

	if (carry)
		ans += '1';
	reverse(ans.begin(), ans.end());

	cout << ans;

	return 0;
}