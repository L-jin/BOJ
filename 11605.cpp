//BOJ 11605 -22.03.19


# include <iostream>
using namespace std;

int base[1025][1025];
int x1, x2, a1, a2;

int dp[1025][1025];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);


	int m, n;

	cin >> m >> n;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> base[i][j];
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + base[i][j];
		}
	}

	while (n--) {
		cin >> x1 >> a1 >> x2 >> a2;

		int sum = dp[x2][a2] - (dp[x1 - 1][a2] + dp[x2][a1 - 1] - dp[x1 - 1][a1 - 1]);

		cout << sum << '\n';
	}

	return 0;
}
