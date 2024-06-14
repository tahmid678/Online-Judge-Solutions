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
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		long long sum = 0;
		int max = -1, cnt = 0;
		for (int i = 0; i < n; i++) {
			sum += v[i];
			if (max < v[i]) {
				max = v[i];
			}
			if ((sum - max) == max) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
