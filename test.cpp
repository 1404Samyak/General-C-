#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        // Find highest set bit in (n - 1)
        int k = 63 - __builtin_clzll(n - 1);  // floor(log2(n - 1))
        long long pivot = 1LL << k;           // 2^k
        vector<long long> perm;
        // First half: 2^k - 1 down to 0
        for (long long i = pivot - 1; i >= 0; i--)perm.push_back(i);
        // Second half: 2^k up to n - 1
        for (long long i = pivot; i < n; i++)perm.push_back(i);
        for (auto x : perm)cout << x << " ";
        cout << "\n";
    }
    return 0;
}
