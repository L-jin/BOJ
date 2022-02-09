//BOJ 5014-22.02.10

# include <iostream>
# include <queue>
using namespace std;

int cou[10000001];

int main() {
	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;

	queue<int>q;

	q.push(s);
	cou[s] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int go : {cur + u, cur - d}) {
			if (go<1 || go >f) continue;
			if (cou[go] != 0) continue;
			cou[go] = cou[cur] + 1;
			q.push(go);
		}
	}

	if (s != g && cou[g] == 0)cout << "use the stairs";
	else cout << cou[g]-1;

	return 0;
}
