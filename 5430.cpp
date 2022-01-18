//BOJ 5430 22.01.18

# include <iostream>
# include<deque>
# include <cstring>
# include<algorithm>
using namespace std;
int error;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int n;
	cin >> n;

	while (n--) {
		string st;
		cin >> st;
		error = 0;
		deque<int>de;
		char a;
		int b;
		int get;
		bool S = 0;
		cin >> get;
		if (get == 0)cin >> a;

		for (int i = 0; i < get; i++) {
			cin >> a >> b;
			de.push_back(b);
		}
		cin >> a;

		for (int i = 0; i < st.size(); i++) {
		
			if (st[i] == 'R') 
			{if (!S)S = 1; else S = 0;
		}
			else {
				if (de.empty() == 1) {
					cout << "error" << '\n'; error = 1;  break;
				}
				if (!S)de.pop_front(); else de.pop_back(); }
		}
		if (error != 1 && S == 0) {
			cout << '[';
			if (!de.empty()) {
				while (de.size() > 1) {
					cout << de.front() << ',';
					de.pop_front();
				}
					cout << de.back() << ']' << '\n';
				
			}
			else cout << ']' << '\n';
		}
		if (error != 1 && S == 1) {
			cout << '[';
			if (!de.empty()) {
				while (de.size() > 1) {
					cout << de.back() << ',';
					de.pop_back();
				}

				cout << de.front() << ']' << '\n';
			}
			else cout << ']' << '\n';
		}
		
	}

	return 0;
}
