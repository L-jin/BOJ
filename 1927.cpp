# include <iostream>
# include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>>q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int n;
	cin >> n;
	int a;
	while (n--) {
		cin >> a;

		if (a == 0 && !q.empty()) {
			cout << q.top()<<'\n'; q.pop();
		}
		else if (a == 0 && q.empty()) cout << '0'<<'\n';

		else if (a != 0) q. push(a);
	}
	return 0;
}
