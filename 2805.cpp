#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m, max = 0;
    int tree[1000001];

    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> tree[i];

    sort(tree, tree + n);

    long long low = 0;
    long long high = tree[n - 1];

    while (low <= high) { //cut ������ �� ����
        long long sum = 0;
        long long cut = (low + high) / 2;

        for (int i = 0; i < n; i++) {
            if (tree[i] - cut > 0) sum += tree[i] - cut; // cut �ϰ� ���� �� �ִٸ� ������
        }

        if (sum >= m) { // m���ͺ��� ������ ������ ���ų� ������
            max = cut; // ���� cut ������ �ִ� �������� ����
            low = cut + 1; // cut ���� ������ �� �ø�
        }
        else {
            high = cut - 1; // m���Ͱ� �� �Ǹ� cut ���� ������ ����
        }
    }

    cout << max; // �ִ� cut ���� ���

    return 0;
}