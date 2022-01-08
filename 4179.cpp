// BOJ 4179 21.12.20

# include <iostream>
# include<queue>
# include<algorithm>
#include <cstring>
# include <cmath>
# include <utility>
using namespace std;

int fire[1003][1003];

int jihun[1003][1003];

#define x first
#define y second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	int n, m;
	cin >> n >> m;
	queue < pair<int, int>> bul;
	queue<pair <int, int>> woozi;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			jihun[i][j] = -1;
			fire[i][j] = -1;
		}
	}

	char base[1003][1003] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> base[i][j];
			if (base[i][j] == 'F') {
				bul.push({ i,j }); fire[i][j] = 0;
			}
			else if (base[i][j] == 'J') {
				woozi.push({ i,j }); jihun[i][j] = 0;
			}
		}
	}

	while (!bul.empty()) {
		pair<int, int> cur;

		cur = bul.front();
		bul.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cur.x + dx[i];
			int ny = cur.y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (base[nx][ny] == '#' || fire[nx][ny] >= 0) continue;

			fire[nx][ny] = fire[cur.x][cur.y] + 1;
			bul.push({ nx,ny });
		}
	}

	while (!woozi.empty()) {
		pair<int, int> cur2;

		cur2 = woozi.front();
		woozi.pop();

		for (int i = 0; i < 4; i++) {
			int wx = cur2.x + dx[i];
			int wy = cur2.y + dy[i];

			if (wx < 0 || wx >= n || wy < 0 || wy >= m) {
				cout << jihun[cur2.x][cur2.y] + 1;
				return 0;
			}

			if (jihun[wx][wy] >= 0 || base[wx][wy] == '#') continue;
			if (fire[wx][wy] >= 0 && fire[wx][wy] <= jihun[cur2.x][cur2.y] + 1) continue;

			jihun[wx][wy] = jihun[cur2.x][cur2.y] + 1;
			woozi.push({ wx,wy });
		}
	}
	cout << "IMPOSSIBLE";
}