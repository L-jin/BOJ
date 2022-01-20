//BOJ 1991 -22.01.20


# include <iostream>
using namespace std;

int rc[1000];
int lc[1000];

void pre(int a) {
	cout << char(a);
	if (lc[a] != 0) pre(lc[a]);
	if (rc[a] != 0)pre(rc[a]);
}

void mid(int a) {
	if (lc[a] != 0) mid(lc[a]);
	cout << char(a);
	if (rc[a] != 0)mid(rc[a]);
}

void post(int a) {
	if (lc[a] != 0) post(lc[a]);
	if (rc[a] != 0)post(rc[a]);
	cout << char(a);
}

int main() {
	int n;
	cin >> n;

	char o, r, l;
	for (int i = 0; i < n; i++) {
		cin >> o >> l >> r;
		if (r != '.') rc[o] = r;
		if (l != '.') lc[o] = l;
	}

	pre(65);
	cout << '\n';
	mid(65);
	cout << '\n';
	post(65);
	cout << '\n';

	return 0;
}
