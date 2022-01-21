// BOJ 2293- 22-01-21 
//ref . 바킹독

# include <iostream>
using namespace std;

int main() {

	int n, a;

	cin >> n >> a;

	int arr[10001] = { 0 };
	int dap[10001] = { 0 };
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	dap[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j <= a; j++) {
			dap[j] += dap[j - arr[i]];
		}
	}

	cout << dap[a];

	return 0;
}
