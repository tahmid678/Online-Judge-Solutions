#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int quotient = n / 2020;
		int remainder = n % 2020;
		if (remainder > quotient) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	return 0;
}
