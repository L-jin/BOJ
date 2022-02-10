// boj 1032 -22.02.10

# include <iostream>
#include<cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    n--;
    char a[51];
    while (n--) {
        for (int i = 0; i < s.length(); i++)
        {
            cin >> a[i];
            if (s[i] != a[i]) s[i] = '?';
        }
    }

    cout << s;
    return 0;
}
