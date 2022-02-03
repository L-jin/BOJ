# include <iostream>
# include <stack>
using namespace std;

int main() {
	int n;

	cin >> n;

	int arr[1000000] = { 0 };

	stack<int>s;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	int a = 1;
	int b = 1;
	char dap[1000000] = { 0 };
	for (int i = 1; i <= n; i++) {
		s.push(i);
		dap[b] = '+';
		b++;
		while (!s.empty() && s.top() == arr[a]) {
			dap[b] = '-';
			s.pop();
			a++;
			b++;
		}
	}

	if (a == n + 1)
		for (int i = 1; i < b; i++) cout << dap[i] << '\n';

	else cout << "NO";

	return 0;
}
