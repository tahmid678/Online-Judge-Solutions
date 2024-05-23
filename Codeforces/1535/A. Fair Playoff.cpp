#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	int a, b, c, d;
	while (t--) {
		cin >> a >> b >> c >> d;
		int p1 = max(a, b);
		int p2 = max(c, d);
		if (p1 < min(c, d) || p2 < min(a, b)) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	return 0;
}
