#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        //we want largest interval l to r such that all segments from l to r divides n 
        //l|n l+1|n l+2|n ... r|n so gcd(l,r) will also divide n for sure 
        //just find smallest number r which does not divide n and take r-1 as ending point
        //so basically if 1 2 3 4 ..k divides n then lcm(1,2,3..k) also divides n 
        //so if k doesnt divide n then also lcm(1,2..k) doesnt divide n and lcm grows very very fast so we can just keep finding lcm until it exceeds n so we can iterate upto 50,100 also lcm of first 50 numbers is already very large
        //and lcm can till i is lcm of lcm till i-1 and ith number 
        ll l=1,r=n;
        ll lcm=1;
        for(ll i=2;i<=n;i++){
            lcm=(lcm*i)/__gcd(lcm,i);// basically lcm of prev lcm and i 
            if(n%lcm!=0){
                r=i-1;
                break;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
