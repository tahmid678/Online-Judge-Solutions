#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, t = 0, sum1 = 0, sum2 = 0;
	cin >> n;
	int s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n);
	for (int i = 0; i < n; i++) {
		sum1 += s[i];
	}
	int i = 0;
	while (sum2 < sum1) {
		sum2 += s[i];
		sum1 -= s[i];
		t++;
		i++;
	}
	cout << n - t + 1 << endl;


	return 0;
}
