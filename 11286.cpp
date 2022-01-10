//BOJ 11286 21-01-10


# include<iostream>
# include <queue>

using namespace std;
class cmp{
public:
	bool operator() (int a, int b) {
		if (abs(a) != abs(b)) return abs(a) > abs(b);
		else return a > 0&&b<0;
	}
}; 

int main() {

	int n;
	cin >> n;


	priority_queue<int, vector<int>, cmp>q;

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;

		if (a != 0) q.push(a);

		if (q.empty() == 0 && a == 0) {
			cout << q.top() << '\n'; q.pop();
		}
		else if (q.empty() == 1) cout << '0'<<'\n';



	}


	return 0;
}
