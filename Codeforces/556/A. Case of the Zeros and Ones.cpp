#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	string s;
	cin >> n;
	cin >> s;
	int zeroCount = 0;
	int oneCount = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			zeroCount++;
		} else {
			oneCount++;
		}
	}
	cout << abs(oneCount - zeroCount) << endl;

	return 0;
}
