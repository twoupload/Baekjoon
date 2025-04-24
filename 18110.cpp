#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int calculate_difficulty(vector<int>& opinions) {
    if (opinions.empty()) {
        return 0;
    }

    // �ǰ� ����
    sort(opinions.begin(), opinions.end());

    // �� ������ ������ �ǰ� �� ��� (15% �ݿø�)
    int exclude_count = round(opinions.size() * 0.15);

    // ������ �ǰ��� �ִ� ���
    int start_idx = exclude_count;
    int end_idx = opinions.size() - exclude_count;

    // ��� ���
    int sum = 0;
    for (int i = start_idx; i < end_idx; i++) {
        sum += opinions[i];
    }

    double mean = (double)sum / (end_idx - start_idx);

    // �ݿø��Ͽ� ������ ��ȯ
    return round(mean);
}

int main() {
    int n;
    cin >> n;

    vector<int> opinions(n);
    for (int i = 0; i < n; i++) {
        cin >> opinions[i];
    }

    int result = calculate_difficulty(opinions);
    cout << result << endl;

    return 0;
}