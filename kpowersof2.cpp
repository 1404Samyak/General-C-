#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,k;
    cin>>n>>k;
    ll temp=n, cnt=0;
    // Step 1: Count number of set bits in n
    // - Each set bit corresponds to one power of 2 already present in the sum.
    // - Minimum number of powers needed = number of set bits.
    while(temp!=0){
        ll d=temp%2;
        if(d) cnt++;
        temp/=2;
    }
    // Step 2: Check feasibility
    // - Minimum powers needed = cnt (set bits).
    // - Maximum powers possible = n (splitting everything into 1's).
    // So the condition is: cnt <= k <= n
    if(cnt<=k && k<=n){
        priority_queue<ll,vector<ll>> pq;  // max-heap
        ll temp=n, count=0;
        // Step 3: Put all initial powers of 2 in pq
        // Example: n=13 -> binary=1101 -> insert {8,4,1}
        while(temp!=0){
            ll d=temp%2;
            count++;
            if(d==1) pq.push(1LL<<(count-1)); // push corresponding power of 2
            temp/=2;
        }
        // Step 4: Keep splitting the largest power until we reach exactly k terms
        // - Take the biggest power from pq
        // - Split it into two halves (num/2, num/2)
        // - Push them back
        // - This keeps sum unchanged but increases count of terms by 1
        while(pq.size() < k && pq.top() > 1){
            ll num = pq.top();
            pq.pop();
            pq.push(num/2);
            pq.push(num/2);
        }
        // Step 5: Print final representation
        // pq contains exactly k powers of 2 whose sum = n
        while(!pq.empty()){
            cout<<pq.top()<<" ";  // prints in descending order
            pq.pop();
        }
        cout<<endl;
    }
    else {
        // If condition not satisfied -> impossible
        cout<<-1<<endl;
    }
    return 0;
}
