#include <bits/stdc++.h>
using namespace std;

void solve() {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
				cin >> a[i];
		}

		// Make all odd numbers even in one operation: odd + (odd % 10) = even
		for (int i = 0; i < n; i++) {
				if (a[i] % 2 == 1) {
						a[i] += a[i] % 10; // after this, last digit is in {0,2,4,6,8}
				}
		}

		// If already all equal, we're done
		if (count(a, a + n, a[0]) == n) { // quick uniformity check
				cout << "YES\n";
				return;
		}

		// If any number ends with 0 now, it can no longer change (stuck state)
		// If not all equal yet and some end with 0, it's impossible
		for (int i = 0; i < n; i++) {
				if (a[i] % 10 == 0) { // stuck at this value forever
						cout << "NO\n";
						return;
				}
		}

		// Drive all numbers to have last digit 2; from there, each operation adds 2
		// Hence numbers become equivalent modulo 20
		for (int i = 0; i < n; i++) {
				while (a[i] % 10 != 2) { // repeatedly apply until unit digit becomes 2
						a[i] += a[i] % 10;
				}
				a[i] %= 20; // collapse to its residue class under +2 steps
		}

		// If all residue classes match, they can be made equal; otherwise not
		if (count(a, a + n, a[0]) == n) {
				cout << "YES\n";
				return;
		} else {
				cout << "NO\n";
		}
}

int main() {
		cin.sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int t;
		cin >> t;

		while (t--) { // process each test case
				solve();
		}
}

// Time Complexity (TC): O(n)
// Space Complexity (SC): O(1)
