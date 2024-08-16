#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pi pair<int, int>
#define pb push_back
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n;
	cin >> n;
	vi soldiers(n);
	for (ll i = 0; i < n; i++) {
		cin >> soldiers[i];
	}
	ll max_index = 0, min_index = n - 1;
	ll max = soldiers[0], min = soldiers[n - 1];
	for (ll i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
		if (soldiers[i] > max) {
			max = soldiers[i];
			max_index = i;
		}
		if (soldiers[j] < min) {
			min = soldiers[j];
			min_index = j;
		}
	}
	ll res = max_index + n - 1 - min_index;
	if (max_index >= min_index) {
		res--;
	}
	cout << res << endl;

	return 0;
}
