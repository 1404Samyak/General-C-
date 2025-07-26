#include <iostream>
#include <vector>
using namespace std;
// Function to find the starting gas station index
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    // Create temp[i] = gas[i] - cost[i]
    vector<int> temp(n);
    for(int i = 0; i < n; i++) {
        temp[i] = gas[i] - cost[i];
    }
    int total = 0;     // Total gas balance over entire circuit
    int current = 0;   // Current balance while iterating
    int ans = 0;       // Candidate starting index
    for(int i = 0; i < n; i++) {
        total += temp[i];      // Net fuel gain/loss at station i
        current += temp[i];    // Add to current running fuel
        // If we can't proceed from current station
        if(current < 0) {
            // Reset and try next station as starting point
            current = 0;
            ans = i + 1;
        }
    }
    // If total fuel is enough for the journey, return starting index
    if(total >= 0) return ans;
    // Otherwise, it's not possible to complete the circuit
    return -1;
}
int main() {
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    int startIndex = canCompleteCircuit(gas, cost);
    cout << "Start index: " << startIndex << endl;  // Output: 3
    return 0;
}
