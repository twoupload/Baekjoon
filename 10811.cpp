// ���� 10811��
// �� ���� ����

#include <iostream>
using namespace std;

int main(void) {
	int n, m; // ��, �ٱ��� ����, �ִ� Ƚ��
	int i, j; // i switch to j
	int arr[101] = { 0 };

	cin >> n >> m;

	for (int t = 0; t < 101; t++) arr[t] = t;

	for (int p = 1; p <= m; p++) {
		cin >> i >> j;
		if (i != j) {
			int tmp = j;
			for (int h = i; i < j; i++) {
				arr[h] = arr[tmp];
				tmp--;
			}
		}

		else continue;
	}

	for (int q = 1; q <= n; q++) cout << arr[q] << " ";

	return 0;
}