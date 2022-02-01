//BOJ 11328 22-02-01

# include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	while (n--) {
		string a, b;

		cin >> a >> b;

		int arr[200] = { 0 };

		for (int k : a) arr[k]++;
		for (int k : b) arr[k]--;

		int k = 0;
		for (int i = 0; i < 200; i++) {
			if (arr[i] != 0) { cout << "Impossible" << '\n'; k = 1; break; }

		}

		if (k == 0) cout << "Possible" << '\n';

	}


	return 0;
}
