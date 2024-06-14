#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	while (s.find("WUB") != -1) {
		if (s.find("WUB") == 0 || s.find("WUB") + 3 == s.size()) {
			s.replace(s.find("WUB"), 3, "");
		} else {
			if (s[s.find("WUB") - 1] != ' ') {
				s.replace(s.find("WUB"), 3, " ");
				continue;
			}
			s.replace(s.find("WUB"), 3, "");

		}
	}

	if (s[s.size() - 1] == ' ') {
		s.replace(s.size() - 1, 1, "");
	}
	cout << s << endl;

	return 0;
}
