/*
해쉬 맵 사용

#include<iostream>
#include <unordered_map>
using namespace std;

unordered_map <int, int> m;

int N, M, card;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> card;
		m[card]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> card;
		cout << m[card] << " ";
	}

	return 0;
}
*/

// 이분 탐색 사용
#include<iostream>
#include<algorithm>
using namespace std;

int arr[500002];
int N, M, card;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> card;
		arr[i] = card;
	}

	sort(arr, arr + N);

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> card;
		cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card) << " ";
	}

	return 0;
}