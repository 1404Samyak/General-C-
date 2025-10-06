#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll sum=0,total=0;
    ll l=0,r=0;
    while(r<n){
        sum=sum+a[r];
        if(r-l+1==k){
            total=total+sum;
            sum=sum-a[l];
            l++;
        }
        r++;
    }
    double ans=0.0;
    ans=(double)total/(n-k+1);
    cout<<fixed<<setprecision(9)<<ans<<endl;
    return 0;
}
