#include<iostream>
#include<string>

using namespace std;

string arr[4];
string str;

int idx, num;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 1; i <= 3; i++)
	{
		cin >> str;
		arr[i] = str;
	}

	for (int i = 1; i <= 3; i++)
	{
		if (arr[i] == "Fizz" || arr[i] == "Buzz" || arr[i] == "FizzBuzz")
			continue;
		else
		{
			idx = i;
			num = stoi(arr[i]);
		}
	}

	if (idx == 1)
		num += 3;
	else if (idx == 2)
		num += 2;
	else
		num += 1;


	if (num % 15 == 0)
		cout << "FizzBuzz";
	else if (num % 3 == 0)
		cout << "Fizz";
	else if (num % 5 == 0)
		cout << "Buzz";
	else
		cout << num;

	return 0;
}