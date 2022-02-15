// BOJ 1141 22.02.15

# include <iostream>
# include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;

	cin >> n;

	string s[51];

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n);

	int dap = n;
	
	for (int i = 0; i < n - 1; i++) {
		int count = 0;

		if (s[i].length() <= s[i + 1].length()) {
			for (int j = 0; j < s[i].size(); j++)
				if (s[i][j] == s[i + 1][j]) count++;

			if (count == s[i].length())dap--;
		}
	}

	cout << dap;

	return 0;
}
