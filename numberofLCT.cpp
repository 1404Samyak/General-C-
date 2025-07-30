#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    // Given a string, count number of subsequences of the form "LCT"
    string s;
    cin >> s;
    ll n = s.size();
    // Step 1: Create prefix array pfl[]
    // pfl[i] = number of 'L's from s[0] to s[i]
    vector<ll> pfl(n);
    pfl[0] = (s[0] == 'L') ? 1 : 0;
    for (ll i = 1; i < n; i++) {
        pfl[i] = pfl[i - 1] + ((s[i] == 'L') ? 1 : 0);
    }
    // Step 2: Create prefix array pflc[]
    // pflc[i] = number of "LC" subsequences from s[0] to s[i]
    vector<ll> pflc(n);
    pflc[0] = 0; // No "LC" subsequence can end at index 0
    for (ll i = 1; i < n; i++) {
        pflc[i] = pflc[i - 1]; // inherit previous count
        if (s[i] == 'C') {
            pflc[i] += pfl[i]; // every 'L' before can pair with this 'C' to make "LC"
        }
    }
    // Step 3: For each 'T', add number of "LC" subsequences before it
    ll ans = 0;
    for (ll i = n - 1; i >= 0; i--) {
        if (s[i] == 'T') {
            ans += pflc[i]; // every "LC" before this 'T' gives a valid "LCT"
        }
    }
    // Output the total number of "LCT" subsequences
    cout << ans << endl;
    return 0;
}
