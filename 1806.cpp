//BOJ 1806 22-01-05

# include<iostream>
# include<algorithm>
using namespace std;

int arr[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int st = 0;
	int en = 0;
	int hap = arr[0];
	int mini = 1000000001;

	while (st != n && en != n) {
		if (hap < m) { en++; hap += arr[en]; continue; }
		if (hap >= m) {
			mini = min(mini, en - st); hap -= arr[st]; st++;
		}
	}
	if (mini == 1000000001) cout << '0';
	else cout << mini+1;
	return 0;
}
