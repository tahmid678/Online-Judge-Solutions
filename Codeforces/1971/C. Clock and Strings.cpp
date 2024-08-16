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

	ll t;
	ll a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		if ((c > min(a, b) && c < max(a, b)) && !(d > min(a, b) && d < max(a, b))) {
			cout << "YES" << endl;
		} else if ((d > min(a, b) && d < max(a, b)) && !(c > min(a, b) && c < max(a, b))) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
