#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int maxPoints(vector<vector<int>>& points) {
    int ans = 1; // At least one point is always there
    for (auto& point : points) {
        int px = point[0], py = point[1];
        map<double, int> mp;
        int duplicates = 0;
        for (auto& subpoint : points) {
            int x = subpoint[0], y = subpoint[1];
            if (x == px && y == py)duplicates++; // Count duplicates
            else if (x == px)mp[1e9]++; // Vertical line (infinite slope)
            else {
                double m = (double)(y - py) / (x - px); // Ensure float division
                mp[m]++;
            }
        }
        int maxLine = 0;
        for (auto p:mp) {
            int count=p.second;
            maxLine = max(maxLine, count);
        }
        ans = max(ans, maxLine + duplicates); // Include duplicates
    }
    return ans;
}
int main() {
    // Test Case 1
    vector<vector<int>> points1 = {{1, 1}, {2, 2}, {3, 3}};
    cout << "Max points on a line: " << maxPoints(points1) << endl; // Output: 3
    // Test Case 2 (with duplicate)
    vector<vector<int>> points2 = {{1, 1}, {1, 1}, {2, 2}, {3, 3}};
    cout << "Max points on a line: " << maxPoints(points2) << endl; // Output: 4
    // Test Case 3 (vertical line)
    vector<vector<int>> points3 = {{1, 1}, {1, 2}, {1, 3}};
    cout << "Max points on a line: " << maxPoints(points3) << endl; // Output: 3
    return 0;
}
