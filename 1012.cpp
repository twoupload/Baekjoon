#include <iostream>
#include <cstring> // memset을 위한 헤더
using namespace std;

int field[51][51]; // 배추밭
bool visited[51][51]; // 방문 여부 체크
int M, N, K;

// 상하좌우 이동용 배열
int dx[4] = { 0, 0, -1, 1 }; // 좌우
int dy[4] = { -1, 1, 0, 0 }; // 상하

// DFS 함수
void dfs(int x, int y) {
    visited[x][y] = true; // 현재 위치 방문 표시

    // 상하좌우 네 방향 탐색
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 범위 체크
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            // 배추가 있고 아직 방문하지 않았다면
            if (field[nx][ny] == 1 && !visited[nx][ny]) {
                dfs(nx, ny); // 재귀적으로 탐색 계속
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

        // 배열 초기화
        memset(field, 0, sizeof(field));
        memset(visited, false, sizeof(visited));

        // 배추 위치 입력
        for (int i = 0; i < K; i++) {
            int X, Y;
            cin >> X >> Y;
            field[X][Y] = 1;
        }

        int worm_count = 0; // 필요한 지렁이 수

        // 모든 배추밭 탐색
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                // 배추가 있고 아직 방문하지 않았다면
                if (field[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j); // DFS 탐색 시작
                    worm_count++; // 연결된 군집 하나를 모두 방문했으므로 지렁이 한 마리 추가
                }
            }
        }

        cout << worm_count << "\n";
    }

    return 0;
}