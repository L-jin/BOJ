//BOJ 1018 -22.02.23

#include <iostream>
using namespace std;

int main() {


	int n, m;
	char base[51][51] = { 0 };
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> base[i][j];

	int arr[3000][3] = { 0 };
	int min = 65;
	int a = 0;
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			if ((i + j) % 2 == 0) {
				for (int k = i; k < i + 8; k++) {
					for (int l = j; l < j + 8; l++) {
						if ((k + l) % 2 == 0 && base[k][l] != base[i][j])arr[a][1]++;
						if ((k + l) % 2 == 1 && base[k][l] == base[i][j])arr[a][1]++;
						if ((k + l) % 2 == 0 && base[k][l] == base[i][j])arr[a][2]++;
						if ((k + l) % 2 == 1 && base[k][l] != base[i][j])arr[a][2]++;
					}
				}
			}
			else {
				for (int k = i; k < i + 8; k++) {
					for (int l = j; l < j + 8; l++) {
						if ((k + l) % 2 == 0 && base[k][l] == base[i][j])arr[a][1]++;
						if ((k + l) % 2 == 1 && base[k][l] != base[i][j])arr[a][1]++;
						if ((k + l) % 2 == 0 && base[k][l] != base[i][j])arr[a][2]++;
						if ((k + l) % 2 == 1 && base[k][l] == base[i][j])arr[a][2]++;
					}
				}
			}

			if (min > arr[a][1])min = arr[a][1];
			if (min > arr[a][2])min = arr[a][2];
			a++;
		}
	}

	cout << min;

	return 0;
}
