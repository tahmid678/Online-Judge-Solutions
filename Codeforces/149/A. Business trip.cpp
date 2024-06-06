#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int k;
	vector<int> a(12);
	cin >> k;
	int res = 0;
	int sum = 0;
	for (int i = 0; i < 12; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum < k) {
		cout << -1 << endl;
		return 0;
	}
	sort(a.begin(), a.end(), greater<int>());
	int i = 0;
	while (k > 0 && i < 12) {
		res++;
		k -= a[i];
		i++;
	}
	cout << res << endl;

	return 0;
}
