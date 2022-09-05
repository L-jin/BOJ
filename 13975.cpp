# include <iostream>
# include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;

	cin >> n;

	while (n--) {
		long long a = 0;
		cin >> a;

		priority_queue<long long, vector<long long>, greater<>>q;

		long long b = 0;
		for (int j = 0; j < a; j++) {
			cin >> b;
			q.push(b);
		}

		long long hap = 0;
		long long dap = 0;

		while (q.size() != 1) {
			hap = q.top();
			q.pop();
			hap += q.top();
			q.pop();
			dap += hap;
			q.push(hap);
		}

		cout << dap << '\n';
	}

	return 0;
}
