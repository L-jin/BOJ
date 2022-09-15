# include <iostream>
# include <vector>
# include <queue>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
	int n, m = 0;

	cin >> n >> m;

	vector<int>v[1001];
	int inde[1001]={0};
	int a,b,c = 0;
	while (m--) {
		cin >> a;
		cin >> b;
		while (1) {
			a--;
			if (a != 0)cin >> c;
			else break;
			v[b].push_back(c);
			inde[c]++;
			b = c;
		}
	}

	queue<int>q;
	vector<int>dap;
	for (int i = 1; i <= n; i++) {
		if (inde[i] == 0) q.push(i);
		
	}


	while(!q.empty())
	{
		int cur = q.front(); q.pop();
		dap.push_back(cur);
		for (int nxt : v[cur]) {
			inde[nxt]--;
			if (inde[nxt] == 0)q.push(nxt);
		}
	}
    if (dap.size() != n) {
		cout << '0'; return 0;
	}
	for (int r : dap) cout << r << '\n';

	return 0;
}
