#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int calculate_difficulty(vector<int>& opinions) {
    if (opinions.empty()) {
        return 0;
    }

    // 의견 정렬
    sort(opinions.begin(), opinions.end());

    // 각 끝에서 제외할 의견 수 계산 (15% 반올림)
    int exclude_count = round(opinions.size() * 0.15);

    // 제외할 의견이 있는 경우
    int start_idx = exclude_count;
    int end_idx = opinions.size() - exclude_count;

    // 평균 계산
    int sum = 0;
    for (int i = start_idx; i < end_idx; i++) {
        sum += opinions[i];
    }

    double mean = (double)sum / (end_idx - start_idx);

    // 반올림하여 정수로 변환
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