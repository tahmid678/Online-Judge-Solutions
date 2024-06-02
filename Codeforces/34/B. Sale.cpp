#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	int total[n];
	for (int i = 0; i < n; i++) {
		cin >> total[i];
	}
	sort(total, total + n);
	int sum = 0;
	for (int i = 0; i < m; i++) {
		if (total[i] > 0)
			break;
		sum += total[i];
	}

	sum *= -1;
	cout << sum << endl;

	return 0;
}
