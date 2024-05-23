#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long n, k;
	cin >> n >> k;
	long long totalOdd, totalEven;
	if (n % 2 == 0) {
		totalOdd = n / 2;
		totalEven = n / 2;
	} else {
		totalOdd = n / 2 + 1;
		totalEven = n / 2;
	}

	if (k <= totalOdd) {
		long long num = 1 + (k - 1) * 2;
		cout << num << endl;
	} else {
		long long num = 2 + (k - totalOdd - 1) * 2;
		cout << num << endl;
	}


	return 0;
}
