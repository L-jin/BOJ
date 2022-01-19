// BOJ 2606 - 22.01.19

# include <iostream>
# include <vector>
# include <queue>
using namespace std;
vector<int>v[1000];
int visit[1000];
int main() {
	int m;
	cin >> m;
	int n;
	cin >> n;

	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	queue<int>q;

	q.push(1);
	visit[1] = 1;
	int count = 0;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (auto k : v[cur])
		{
			if (visit[k] == 1) continue;
			visit[k] = 1;
			q.push(k);
			count++;
		}
	}
	cout << count;

	return 0;
}
