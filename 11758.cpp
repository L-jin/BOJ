// boj 11758


# include <iostream>
using namespace std;

int ax1, ay1, ax2, ay2, ax3, ay3;


int CCW(int x1, int y1, int x2, int y2, int x3, int y3) {
	return (x2 - x1) * (y3 - y2) - (y2 - y1) * (x3 - x2);
}


int main() {


	cin >> ax1 >> ay1 >> ax2 >> ay2 >> ax3 >> ay3;


	int z = CCW(ax1, ay1, ax2, ay2, ax3, ay3);
	if (z>0) cout << 1;
	else if (z < 0) cout << -1;
	else cout << 0;

	return 0;
}
