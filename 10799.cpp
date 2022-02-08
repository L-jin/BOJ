# include <iostream>
# include<stack>
using namespace std;

int count;
int b;

int main() {
	stack<char>s;
	string a;

	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '(') { 
            s.push(a[i]); b++; continue;
        }
		if (a[i] == ')' && s.top() == '(') {
			s.push(a[i]);  b--; count += b; continue;
		}
		if (a[i] == ')' && s.top() == ')') {
            s.push(a[i]); b--; count++; 
        }
	}

	cout << count;

	return 0;
}
