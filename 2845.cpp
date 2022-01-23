// BOJ 2845 - 22.01.23

# include <iostream>
using namespace std;

int arr[5];
int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	for (int i = 0; i < 5; i++)
		cout << arr[i] - n * m << ' ';

	return 0;
}
