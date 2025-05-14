#include <iostream>
#include <cstring> // memset�� ���� ���
using namespace std;

int field[51][51]; // ���߹�
bool visited[51][51]; // �湮 ���� üũ
int M, N, K;

// �����¿� �̵��� �迭
int dx[4] = { 0, 0, -1, 1 }; // �¿�
int dy[4] = { -1, 1, 0, 0 }; // ����

// DFS �Լ�
void dfs(int x, int y) {
    visited[x][y] = true; // ���� ��ġ �湮 ǥ��

    // �����¿� �� ���� Ž��
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // ���� üũ
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            // ���߰� �ְ� ���� �湮���� �ʾҴٸ�
            if (field[nx][ny] == 1 && !visited[nx][ny]) {
                dfs(nx, ny); // ��������� Ž�� ���
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        cin >> M >> N >> K;

        // �迭 �ʱ�ȭ
        memset(field, 0, sizeof(field));
        memset(visited, false, sizeof(visited));

        // ���� ��ġ �Է�
        for (int i = 0; i < K; i++) {
            int X, Y;
            cin >> X >> Y;
            field[X][Y] = 1;
        }

        int worm_count = 0; // �ʿ��� ������ ��

        // ��� ���߹� Ž��
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                // ���߰� �ְ� ���� �湮���� �ʾҴٸ�
                if (field[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j); // DFS Ž�� ����
                    worm_count++; // ����� ���� �ϳ��� ��� �湮�����Ƿ� ������ �� ���� �߰�
                }
            }
        }

        cout << worm_count << "\n";
    }

    return 0;
}