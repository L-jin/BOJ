//BOJ 1715 21.01.11

# include<iostream>
# include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>>q;

int main() {
	int n;

	cin >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		q.push(a);
	}

	long long int ans = 0;

	int b = 0;
	int c = 0;
	while (q.size() !=0) {
		b = q.top();
		q.pop();
	

		ans += b + c;

		q.push(b + c);
	}

	cout << ans;

	return 0;
}
