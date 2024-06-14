#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, h, k;
	cin >> n >> h >> k;

	vector<int> food(n);
	for (int i = 0; i < n; i++) {
		cin >> food[i];
	}

	long long time = 0;
	long long sum = 0;
	for (int i = 0; i < n;) {
		while (sum + food[i] <= h && i < n) {
			sum += food[i];
			i++;
		}
		if (sum <= k) {
			time++;
			sum -= k;
		} else {
			time += sum / k;
			sum -= k * (sum / k);
		}
		if (sum < 0) {
			sum = 0;
		}
	}
	while (sum > 0) {
		time++;
		sum -= k;
	}
	cout << time << endl;

	return 0;
}
