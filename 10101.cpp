//BOJ 10101 - 22.02.05

# include <iostream>
using namespace std;

int main() {


	int a, b, c;

	cin >> a >> b >> c;

	if (a == 60 && b == 60 && c == 60)
	{
		cout << "Equilateral"; return 0;
	}
	else if (a + b + c == 180 && a == b || a + b + c == 180 && b == c || a + b + c == 180 && a == c)
	{
		cout << "Isosceles"; return 0;
	}

	else if (a + b + c == 180 && a != b && a != c && b != c) {
		cout << "Scalene"; return 0;
	}

	else cout << "Error";

	return 0;
}
