#include <bits/stdc++.h>
using namespace std;
// Function to calculate the minimum increments to make all elements unique
int minIncrementForUnique(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int ans = 0;
    int last = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] <= last) {
            ans += (last + 1 - nums[i]);
            last = last + 1;
        } else {
            last = nums[i];
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {3, 2, 1, 2, 1, 7};
    int result = minIncrementForUnique(nums);
    cout << "Minimum increments to make all elements unique: " << result << endl;
    return 0;
}
