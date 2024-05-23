#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int two, three;
	if (n % 2 == 0) {
		two = n / 2;
		three = 0;
	} else {
		two = n / 2 - 1;
		three = 1;
	}
	cout << two + three << endl;
	for (int i = 0; i < two; i++) {
		cout << 2 << " ";
	}
	if (three) {
		cout << 3 << endl;
	}

	return 0;
}
