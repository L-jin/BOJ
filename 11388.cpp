//BOJ 11399 - 22.01.16

# include <iostream>
# include <algorithm>
using namespace std;

int arr[1000];
int arr1[1000];

int main() {
	int n;

	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		ans += arr[i];
		arr1[i] = ans;
	
	}

	int anss = 0;

	for (int i = 0; i < n; i++)
		anss += arr1[i];

	cout << anss;

	return 0;
}
