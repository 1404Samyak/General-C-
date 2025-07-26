#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> calculateSpan(vector<int>& arr) {
    int n = arr.size();
    vector<int> left(n, -1), ans(n, 0); // stores index of previous greater
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            left[i] = st.top();
        }
        st.push(i);
    }
    for (int i = 0; i < n; i++) {
        ans[i] = i - left[i];
    }

    return ans;
}
int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85}; // sample input
    vector<int> result = calculateSpan(prices);
    cout << "Stock Span for each day: ";
    for (int span : result) {
        cout << span << " ";
    }
    cout << endl;
    return 0;
}
