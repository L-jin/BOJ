// BOJ 2445 22.02.11
//ref _ baaaaaaaaaaarkingdog lect

#include <iostream>
using namespace std;

char base[2188][2188];
void star(int n, int a, int b) {
	if (n == 1) {
		base[a][b] = '*';
		return;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) continue;
			star(n / 3, a + n / 3 * i, b + n / 3 * j);
		}
	}
}

int main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			base[i][j] = ' ';

	star(n, 0, 0);
	for (int i = 0; i < n; i++)
		cout << base[i] << '\n';

	return 0;
}
