#include <iostream>
using namespace std;
int arr[129][129];
int white = 0; // �� ����
int blue = 0; // �Ķ� ����
void fc(int x, int y, int k) {
    bool cut = false; // �߶���ϴ��� 
    int first_color = arr[x][y]; // ù��°ĭ�� ��
    for (int i = x; i < x + k;i++) {
        for (int j = y; j < y + k;j++) {
            if (arr[i][j] != first_color) { // �߰��� �ٸ����� ������
                cut = true; // �߶����.
                break;
            }
        }
    }
    if (cut) { // �߶���ϴ� �����̸� 
        fc(x, y, k / 2); // ���ʿ� ���� ��Ʈ
        fc(x, y + k / 2, k / 2); //���ʿ� ������ ��Ʈ
        fc(x + k / 2, y, k / 2); // �Ʒ��ʿ� ���� ��Ʈ
        fc(x + k / 2, y + k / 2, k / 2); // �Ʒ��ʿ� ������ ��Ʈ
    }
    else {
        if (first_color == 1) // �Ķ���
            blue++;
        else // ���
            white++;
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n;j++) {
            cin >> arr[i][j];
        }
    }
    fc(0, 0, n);
    cout << white << '\n';
    cout << blue << '\n';
    return 0;
}
