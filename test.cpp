#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    ll ans=0;
    //basically i want distinct pairs (i,j) such that (a[i]+a[j])%k==0
    //for ex in 1 2 2 3 2 4 10(k=2) the number of pairs are index wise are (1,2),(0,3),(4,5) only so 3 pairs
    for(ll i=0;i<n;i++){
        ll rem=a[i]%k;
        mp[rem]++;
    }
    //so rem can be 0 1 2 ... k-1
    for(ll r=0;r<k;r++){
        ll complement=(k-r)%k; //to handle case when r=0
        if(r==complement){ //means r=0 or r=k/2 when k is even
            ans+=mp[r]/2; //we can make pairs within this group only
        }
        else if(r<complement){ //to avoid double counting
            ans+=min(mp[r],mp[complement]); //we can make pairs between these two groups only
        }
    }
    cout<<2*ans<<"\n";
    return 0;
}
