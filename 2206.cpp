// boj 2206

# include <iostream>
# include <queue>
# include <tuple>
using namespace std;

char base[100][100];
int v[100][100][2];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int main() {
	int n, m;

	cin >> n >> m;

	//맵 입력받기
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> base[i][j];
		}
	}

	//예외처리 쉽게 방문표시 -1 로 채워주기
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			v[i][j][0] = -1;
			v[i][j][1] = -1;
		}
	}

	v[0][0][0] = 1;
	v[0][0][1] = 1;

	// bfs 의 큐
	queue <tuple<int, int, int>> q;

	q.push({ 0, 0 ,0 });

	int x, y, b = 0;

	//bfs
	while (!q.empty()) {
		//x,y,b 는 커서 역할

		tie(x, y, b) = q.front();
		q.pop();

		if (x == n - 1 && y == m - 1) break;  // 이 부분

		for (int i = 0; i < 4; ++i) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (x >= n || y >= m || x < 0 || y < 0) continue;

			// 벽 안뚫는 경우
			if (base[nx][ny] == '0' && v[nx][ny][b] == -1)
			{
				v[nx][ny][b] = v[x][y][b] + 1;
				q.push({ nx, ny, b });
			}
			// 벽 뚫는 경우
			if (base[nx][ny] == '1' && v[nx][ny][1] == -1 && b == 0) {
				v[nx][ny][1] = v[x][y][b] + 1;
				q.push({ nx, ny, 1 });
			}
		}
	}

	cout << v[n - 1][m - 1][b];

	return 0;
}
