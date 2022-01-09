// BOJ-7562 22.01.09

# include<iostream>
# include <queue>
using namespace std;

int base[100][100];

int dx[8]{ 2,2,-1,1,-2,-2,-1,1 };
int dy[8]{ -1,1,2,2,-1,1,-2,-2 };

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		queue<pair<int, int>>q;

		int arr[100][100] = { 0 };

		int st = 0, st1 = 0;
		int en = 0, en1 = 0;

		cin >> st >> st1;
		cin >> en >> en1;

		q.push({ st,st1 });
		arr[st][st1] = 1;

		while (!q.empty()) {
			pair<int, int> cur = q.front();
			q.pop();

			for (int i = 0; i < 8; i++) {
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];

				if (nx >= n || ny >= n || nx < 0 || ny < 0)continue;
				if (arr[nx][ny] != 0)continue;

				q.push({ nx,ny });
				arr[nx][ny] = arr[cur.first][cur.second] + 1;
			}
		}
		cout << arr[en][en1] - 1 << '\n';
	}

	return 0;
}
