//BOJ 1202 -22.01.08
// ref.https://youtu.be/IKnjzmyk70U

# include<iostream>
# include<utility>
# include<set>
# include<algorithm>
using namespace std;

pair <int, int> bo[10000000];
multiset<int> bag;

int main() {

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> bo[i].second >> bo[i].first;


	sort(bo, bo + n);

	int a = 0;
	for (int i = 0; i < k; i++)
	{
		cin >> a;
		bag.insert(a);
	}

	long long int ans = 0;


	for (int i = n - 1; i >= 0; i--) {
		auto it = bag.lower_bound(bo[i].second);
		if (it != bag.end()) {
			ans += bo[i].first;
			bag.erase(it);
		}

	}
	cout << ans;

	return 0;
}
