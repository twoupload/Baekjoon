// ���� 10810
// �� �ֱ�

#include <iostream>
using namespace std;

int main(void) {
	int n, m; // n : �ִ� ��, �ٱ���  m : �ִ� Ƚ��
	int i, j, k; // i to j, k number
	int arr[101] = {0}; // �迭

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