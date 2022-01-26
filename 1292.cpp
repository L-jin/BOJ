//BOJ 1292 22-01-26

# include <iostream>
using namespace std;

int arr[10002];

int main() {

	int a = 1; 
	for (int i=1; i<50; i++)
		for (int j=1; j<=i; j++)
		{
			arr[a] = i; a++;
		}

	int b, c;
	cin >> b >> c;


	int sum = 0;
	for (int i = b; i <= c; i++)
		sum += arr[i];

	cout << sum;

	return 0;
}
