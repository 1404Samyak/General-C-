#include <bits/stdc++.h>
using namespace std;
int longestMountain(vector<int>& arr) {
    int n = arr.size();
    vector<int> high(n, 1), low(n, 1);
    // increasing sequence lengths from left
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) high[i] = high[i - 1] + 1;
        else high[i] = 1;
    }
    // decreasing sequence lengths from right
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]) low[i] = low[i + 1] + 1;
        else low[i] = 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (high[i] > 1 && low[i] > 1) {
            ans = max(ans, high[i] + low[i] - 1);
        }
    }
    return ans;
}
int main() {
    vector<int> arr1 = {2,1,4,7,3,2,5};
    vector<int> arr2 = {2,2,2};
    vector<int> arr3 = {0,1,2,3,4,5,4,3,2,1,0};
    cout << "Test 1: " << longestMountain(arr1) << endl; // expected 5 (1,4,7,3,2)
    cout << "Test 2: " << longestMountain(arr2) << endl; // expected 0 (no mountain)
    cout << "Test 3: " << longestMountain(arr3) << endl; // expected 11 (whole array)
    return 0;
}
