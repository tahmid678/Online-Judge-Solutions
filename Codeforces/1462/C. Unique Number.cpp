#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	vector<int> digits(10);
	while (t--) {
		int x;
		string res = "";
		cin >> x;
		for (int i = 0; i < 10; i++) {
			digits[i] = i;
		}
		if (x > 45) {
			cout << -1 << endl;
		} else {
			for (int i = 9; i > 0; i--) {
				if (digits[i] <= x) {
					x -= digits[i];
					res += to_string(i);
				}
				if (x == 0) {
					break;
				}
			}
			reverse(res.begin(), res.end());
		}
		cout << res << endl;
	}

	return 0;
}
