#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll longestConsecutive(vector<ll>& nums) {
    set<ll> s;  // to store unique sorted values
    // insert all numbers into set (automatically removes duplicates)
    for(ll num : nums) s.insert(num);
    ll ans = 0;
    for(ll num : s) {
        // Only consider `num` as start of sequence if `num - 1` is not present
        // This ensures we're not starting in the middle of another sequence
        if(s.find(num - 1) == s.end()) {
            ll temp = num;
            ll count = 0;
            // Count how long the consecutive sequence continues
            while(s.find(temp) != s.end()) {
                count++;
                temp++;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}
int main() {
    vector<ll> nums = {100, 4, 200, 1, 3, 2};
    cout << "Length of Longest Consecutive Sequence: " << longestConsecutive(nums) << endl;
    return 0;
}
