class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans = 1; // At least one point is always there

        for (auto& point : points) {
            int px = point[0], py = point[1];
            map<double, int> mp;
            int duplicates = 0;

            for (auto& subpoint : points) {
                int x = subpoint[0], y = subpoint[1];

                if (x == px && y == py) {
                    // Exact same point
                    duplicates++;
                } else if (x == px) {
                    // Vertical line: infinite slope
                    mp[1e9]++;
                } else {
                    // Cast to double to avoid integer division
                    double m = (double)(y - py) / (x - px);
                    mp[m]++;
                }
            }

            int maxLine = 0;
            for (auto& [slope, count] : mp) {
                maxLine = max(maxLine, count);
            }

            // +duplicates includes the base point itself
            ans = max(ans, maxLine + duplicates);
        }

        return ans;
    }
};
