# include <iostream>
# include <vector>
using namespace std;

vector<int>v[51];
int a;
int dap;

int dfs(int st) {
	for (int nxt : v[st]) {
		if (st == a)return 0;
		if (v[st].size() == 1 && nxt == a) {
			dap++; continue;
		}
		if (v[st].size() != 1 && nxt == a) {
			continue;
		}
		if (v[nxt].size() == 0) dap++;
		dfs(nxt);
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	int c = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == -1) { c = i; continue; }
		v[a].push_back(i);
	}

	cin >> a;

	
	dfs(c);

	cout << dap;

	return 0;
}
