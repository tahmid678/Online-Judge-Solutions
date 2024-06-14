#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long n;
	cin >> n;
	string t = to_string(n);
	bool res = false;
	while (t.size() > 0) {
		if (t.substr(0, 3) == "144") {
			t = t.substr(3, t.size());
			res = true;
		} else if (t.substr(0, 2) == "14") {
			t = t.substr(2, t.size());
			res = true;
		} else if (t.substr(0, 1) == "1") {
			t = t.substr(1, t.size());
			res = true;
		} else {
			res = false;
		}

		if (!res) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}
