#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	string s;
	cin >> s;
	map<string, int> mp;
	for (int i = 0; i < s.size() - 1; i++) {
		string tmp = "";
		tmp += s[i];
		tmp += s[i + 1];
		mp[tmp]++;
	}
	string res;
	int len = 0;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		if (it->second > len) {
			len = it->second;
			res = it->first;
		}
	}
	cout << res << endl;

	return 0;
}
