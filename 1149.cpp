// BOJ 1149 - 22.01.25

# include <iostream>
# include <algorithm>
using namespace std;

int arr[1002][100];
int dp[1002][3];

int main() {



	int n;

	cin >> n;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j<3; j++)
			cin >> arr[i][j];
	}
	
	for (int i = 1; i <= n; i++) {

		dp[i][0] = min(dp[i-1][1]+arr[i - 1][1], dp[i-1][2]+ arr[i - 1][2]);
		dp[i][1] = min(dp[i - 1][0] + arr[i - 1][0], dp[i - 1][2] + arr[i - 1][2]);
		dp[i][2] = min(dp[i - 1][0] + arr[i - 1][0], dp[i - 1][1] + arr[i - 1][1]);
	}

	int dap = min({ dp[n][0],dp[n][1],dp[n][2] });

	cout << dap;

	return 0;
}
