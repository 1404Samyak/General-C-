#include <bits/stdc++.h>
using namespace std;
vector<int> maxSumCombinations(vector<int> &nums1, vector<int> &nums2, int k) {
    int n = nums1.size();
    priority_queue<vector<int>, vector<vector<int>>> pq; // maxheap of {sum, i, j}
    vector<int> ans;
    sort(nums1.rbegin(), nums1.rend());
    sort(nums2.rbegin(), nums2.rend());
    pq.push({nums1[0] + nums2[0], 0, 0});
    set<pair<int, int>> st; // to track visited pairs
    st.insert({0, 0});
    while (ans.size() < k && !pq.empty()) {
        auto top = pq.top();
        pq.pop();
        int topsum = top[0], i = top[1], j = top[2];
        ans.push_back(topsum);
        if (i + 1 < n && st.find({i + 1, j}) == st.end()) {
            pq.push({nums1[i + 1] + nums2[j], i + 1, j});
            st.insert({i + 1, j});
        }
        if (j + 1 < n && st.find({i, j + 1}) == st.end()) {
            pq.push({nums1[i] + nums2[j + 1], i, j + 1});
            st.insert({i, j + 1});
        }
    }
    return ans;
}
int main() {
    vector<int> nums1 = {1, 4, 2};
    vector<int> nums2 = {3, 5};
    int k = 3;
    vector<int> result = maxSumCombinations(nums1, nums2, k);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
