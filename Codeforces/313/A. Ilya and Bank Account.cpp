#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long n;
	cin >> n;
	if (n > 0) {
		cout << n;
	} else {
		long long temp = abs(n);
		int lastDigit = temp % 10;
		int secondLastDigit = (temp / 10) % 10;
		if (lastDigit > secondLastDigit) {
			cout << (temp / 10) * -1 << endl;
		} else {
			temp = (temp / 10) / 10;
			temp *= 10;
			temp += lastDigit;
			cout << temp * -1 << endl;
		}
	}

	return 0;
}
