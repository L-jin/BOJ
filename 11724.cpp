// BOJ 11724 22.01.14

# include <iostream>
# include <vector>
# include <queue>
using namespace std;

vector <int> v[1001];
bool visit[1001];

int main() {
	int n, m;
	cin >> n >> m;

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 1)continue;
		count++;
		queue<int> q;

		q.push(i);
		visit[i] = 1;

		while (!q.empty()) {
			int cur = q.front();
			q.pop();

			for (auto j:v[cur]) {
				if (visit[j] == 1) continue;
				q.push(j);
				visit[j] = 1;
			}
		}
	}
	 cout<<count;
	return  0;
}

