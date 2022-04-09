//BOJ 13414 -22.04.09

# include <iostream>
# include <unordered_map>
# include <utility>
# include <algorithm>

using namespace std;

unordered_map<string, int> m;
vector<pair<string, int>> MC;
string st_num;

bool cmp(const pair<string, int>& a,
	const pair<string, int>& b)
{
	return (a.second < b.second);
}

int main() {
	int a, b;

	cin >> a >> b;

	for (int i = 0; i < b; i++) {
		cin >> st_num;

		if (m.find("st_num") != m.end()) {
			m.erase("st_num"); m[st_num] = i;
		}
		else m[st_num] = i;
	}

	unordered_map<string, int> ::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		MC.push_back(make_pair(iter->first, iter->second));
	}

	sort(MC.begin(), MC.end(), cmp);

	int end = (min(a, int(MC.size())));

	for (int i = 0; i < end; i++) cout << MC[i].first<<'\n';


	return 0;
}
