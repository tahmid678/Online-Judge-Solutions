#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, h, result = 0;
	cin >> n >> h;
	vector<int> heights(n);

	for (int i = 0; i < n; i++) {
		cin >> heights[i];
		if (heights[i] <= h) {
			result += 1;
		} else {
			result += 2;
		}
	}

	cout << result << endl;

	return 0;
}