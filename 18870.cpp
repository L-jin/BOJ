//BOJ 18870 21.01.09

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int v[1000001];
int jung[1000001];
int arrr[1000001];

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arrr[i];
		
	}

	for (int i=0; i<n; i++)
	v[i] = arrr[i];

	sort(v, v+n);
	int j = 0;
	for (int i = 0; i < n-1; i++) {
		if (v[i] != v[i+1]) {
			jung[j] = v[i]; j++;
		}
	}
	if (v[n - 2] != v[n-1]) { jung[j] = v[n-1]; j++; }

	for (int i = 0; i < n; i++) {
		cout << lower_bound(jung, jung+j, arrr[i])-jung << ' ';
	}

	return 0;
}
