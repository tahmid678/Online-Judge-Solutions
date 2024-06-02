#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long n, t;
	cin >> t;
	while (t--) {
		cin >> n;
		bool result = false;
		while (n > 1) {
			if (n % 2 == 1) {
				result = true;
				break;
			}
			n /= 2;
		}
		if (result) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
