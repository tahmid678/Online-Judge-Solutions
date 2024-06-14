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
		string res;
		cin >> res;
		stack<int> cp;
		stack<int> sm;
		for (int i = 0; i < res.size(); i++) {
			if (res[i] == 'b') {
				if (!sm.empty()) {
					int temp = sm.top();
					res[temp] = ' ';
					sm.pop();
				}
			} else if (res[i] == 'B') {
				if (!cp.empty()) {
					int temp = cp.top();
					res[temp] = ' ';
					cp.pop();
				}
			} else {
				if (res[i] >= 'a' && res[i] <= 'z') {
					sm.push(i);
				} else {
					cp.push(i);
				}
			}
		}
		for (int i = 0; i < res.size(); i++) {
			if (res[i] == ' ' || res[i] == 'b' || res[i] == 'B') {
				continue;
			}
			cout << res[i];
		}
		cout << endl;
	}
}
