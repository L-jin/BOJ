# include <iostream>
# include <stack>
# include <vector>
# include <algorithm>
using namespace std;

int dx[4] = { 0,-1,0,1 };
int dy[4] = { 1,0,-1,0 };

int main() {


	int a, b, c = 0;
	cin >> a >> b >> c;


	int board[101][101] = { 0 };


	for (int i = 0; i < c; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				board[j][k] = 1;
			}
		}

	}

	stack<pair<int, int>>s;
	int cou = 0;
	int vis[101][101] = { 0 };
	vector<int>v;

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			if (board[i][j] == 1 || vis[i][j] == 1) continue;

			s.push({ i,j });

			int w = 1;

			vis[i][j] = 1;

			while (!s.empty()) {
				auto cur = s.top();
				s.pop();

				for (int k = 0; k < 4; k++) {

					int nx = cur.first + dx[k];
					int ny = cur.second + dy[k];

					if (nx<0 || nx>=b || ny<0 || ny>=a) continue;
					if (board[nx][ny] == 1 || vis[nx][ny] == 1)continue;

					s.push({ nx,ny });
					vis[nx][ny] = 1;
					w++;
				}

			}

			v.push_back(w);
			cou++;
		}
	}

	cout << cou << '\n';
	sort(v.begin(), v.end());

	for (int i = 0; i < cou; i++) cout << v[i]<<' ';


	return 0;
}
