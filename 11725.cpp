//BOJ 11725 - 22.01.17

# include<iostream>
# include<vector>
# include <queue>
using namespace std;

vector <int> v[100001];
int par[100001];

int main() {
	int n;

	cin >> n;

	int a, b;
	for (int i = 0; i < n - 1; i++) {
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue<int>q;
	q.push(1);

	for (int i = 0; i < n; i++) {
		int cur = q.front();
		q.pop();

		for (int k : v[cur]) {
			if (par[cur] == k) continue;
			q.push(k);
			par[k] = cur;
		}
	}

	for (int i = 2; i <= n; i++)
		cout << par[i] << '\n';

	return 0;
}
