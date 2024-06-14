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
		int n, m;
		cin >> n >> m;
		int row1 = -1, row2, col1 = -1, col2;
		char c;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> c;
				if (c == '#' && row1 < 0 && col1 < 0) {
					row1 = row2 = i + 1;
					col1 = col2 = j + 1;
				} else if (c == '#' && row1 != -1 && col1 != -1) {
					row2 = i + 1;
					col2 = j + 1;
				}
			}
		}
		cout << (row1 + row2) / 2 << " " << (col1 + col2) / 2 << endl;
	}

	return 0;
}
