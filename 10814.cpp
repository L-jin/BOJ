//BOJ 10814 22-01-08

# include<iostream>
# include<algorithm>
using namespace std;

 bool cmp(pair <int, string>a, pair <int, string>b) {
	return a.first < b.first;
}


int main() {
	int n;

	cin >> n;

	pair<int, string>p[1000001];

	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}

	stable_sort(p, p+n,cmp);
	for (int i = 0; i < n; i++) {
		cout << p[i].first << ' ' << p[i].second << '\n';
	}

	return 0;
}
