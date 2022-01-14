//BOJ 1260 22.01.14

# include <iostream>
# include <vector>
# include <queue>
# include <stack>
# include <algorithm>
using namespace std;

vector <int> v[1001];

bool visit[1001];
bool visit1[1001];
int main() {
	int n, m, k;
	cin >> n >> m>> k;

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

		stack<int> s;

		s.push(k);

		for (int i = 1; i <= n; i++) {
			sort(v[i].begin(), v[i].end());
		}


		while (!s.empty()) {
			int cur = s.top();
			s.pop();
			if (visit[cur] == 1) continue;
			cout << cur << ' ';
			visit[cur] = 1;
			int c = 1;
			int d = v[cur].size();
			while(d--) {
				int j = *(v[cur].end() - c);
				c++;
				if (visit[j] == 1) continue;
				s.push(j);


			}
		}
	

		cout << '\n';

		queue<int> q;

		q.push(k);
		visit1[k] = 1;
		
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			cout << cur << ' ';
			for (auto j:v[cur]) {
				if (visit1[j] == 1) continue;
				q.push(j);
				visit1[j] = 1;
			}
		}
	

	return  0;
}

