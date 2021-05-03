#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		if (n % 2 == 0) {
			// If'n' is even, then for each operation 'n' will be added 
			// by 2 and keep being even.
			// add the value of 'n' to the multiple of 2 that is based on 'k' times
			cout << n + 2 * k << '\n';
			continue;
		}
		//If 'n' is odd, then for the first time 'n' will be added by 
		// an odd number and then become even.
		int p = 0;
		for (int i = n; i >= 2; i--) {
			if (n % i == 0) {
				// find the smallest divisor of 'p' that is not equal to 1
				p = i;
			}
		}
		// add the value of 'n' to the multiple of 2 that is based on 'k - 1' times,
		// because the first number that will be added to this number is the smallest divisor
		// after the odd number has been added with another odd number, it will become an
		// even number and the same process happens as with the case above
		cout << n + p + 2 * (k - 1) << '\n';
	}
	return 0;
}
