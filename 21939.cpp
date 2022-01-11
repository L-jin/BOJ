//BOJ 21939 - 22.01.11

# include <iostream>
# include <map>
# include <vector>
# include <queue>
using namespace std;

class firstcmp {
public:
	bool operator()(pair<int, int>a, pair<int, int>b) {
		if (a.first == b.first) return a.second < b.second;
		return a.first < b.first;
	}
};

class secondcmp {
public:
	bool operator()(pair<int, int>a, pair<int, int>b) {
		if (a.first == b.first) return a.second > b.second;
		return a.first > b.first;
	}
};

priority_queue<pair<int, int>, vector<pair<int, int>>, firstcmp>m;
priority_queue<pair<int, int>, vector<pair<int, int>>, secondcmp>m1;
map <int, int> m3;

int main() {
	int n, k;

	cin >> n;
	int a;
	int b;
	for (int i = 0; i < n; i++) {
		cin >> b >> a;

		m.push({ a,b });
		m1.push({ a,b });
	}

	cin >> k;

	while (k--) {
		string s;
		cin >> s;

		if (s == "add") {
			cin >> b >> a; 	 m.push({ a,b }); m1.push({ a,b });
		}
		else if (s == "recommend") {
			cin >> a;
			if (a == 1) {
				if (m3[m.top().second] == 1)m.pop();
				cout << m.top().second << '\n';
			}
			else if (a == -1) {
				if (m3[m1.top().second] == 1) m1.pop();
				cout << m1.top().second << '\n';
			}
		}

		if (s == "solved") { cin >> a;  m3[a] = 1; }
	}

	return 0;
}
