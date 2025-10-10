#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    long long sum = 0, need = 0;
    for (int i = 0; i < n; ++i) {
        need += i;
        //because our best possible case is 0,1,2,3,4,5...i.e each position has at least i elements to its left so that it can be swapped to leftmost position
        //such that entire seq is strictly increasing last element can be as big as possible so at any moment if sum<need we can say no
        //as we can never make it strictly increasing
        sum += a[i];
        if (sum < need) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}