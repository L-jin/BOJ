#BOJ 16165 -22.04.09

# include <iostream>
# include <unordered_map>
# include <vector>
# include <algorithm>
using namespace std;

unordered_map<string, string> m;
unordered_map < string, vector<string>>m2;

string group_name;
int member_num;
string member_name;

int main() {

	int a, b;

	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		cin >> group_name;
		cin >> member_num;
		for (int j = 0; j < member_num; j++) {
			cin >> member_name;
			m[member_name] = group_name;
			m2[group_name].push_back(member_name);
		}
		sort(m2[group_name].begin(), m2[group_name].end());
	}

	

	string q;
	bool GM = 0;

	while (b--) {
		cin >> q >> GM;

		if (GM == 0) {
			
			for (int i = 0; i < m2[q].size(); i++)
				cout << m2[q][i] << '\n';
		}
		else cout << m[q] << '\n';
	}

	return 0;
}
