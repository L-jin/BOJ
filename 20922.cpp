//BOJ 20922 -22.03.21


# include <iostream>
using namespace std;

int v[2000001];
int Co[2000001];
int check[2000001];

int a;
int b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n, m;
	int maxx = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> v[i];

	int i = 0;
	while (1) {
		if (maxx < check[i]) maxx = check[i];
		i++;
		if (a == n) break;
		if (Co[v[a]] < m) { Co[v[a]]++; a++; check[i] = a - b; }
		else {
			Co[v[b]]--; b++;
		}
	}
	

	cout << maxx;

	return 0;
}
