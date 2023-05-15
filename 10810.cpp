// 백준 10810
// 공 넣기

#include <iostream>
using namespace std;

int main(void) {
	int n, m; // n : 최대 공, 바구니  m : 최대 횟수
	int i, j, k; // i to j, k number
	int arr[101] = {0}; // 배열

	cin >> n >> m;
	
	for (int p = 1; p <= m; p++) {
		cin >> i >> j >> k;

		for (int q = i; q <= j; q++) arr[q] = k;
	}

	for (int t = 1; t <= n; t++) {
		cout << arr[t] << " ";
	}

	return 0;

}