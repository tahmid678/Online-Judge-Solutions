#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int two = n / 2;
		int three = n / 3;
		if (two == three) {
			cout << 3 << endl;
		} else {
			cout << 2 << endl;
		}
	}

	return 0;

}
