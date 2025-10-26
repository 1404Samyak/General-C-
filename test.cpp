#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        map<ll,ll>freq;
        for(ll i=0;i<n;i++){
            freq[a[i]]++;
        }
        bool ans=false;
        for(auto p:freq){
            if(p.second>=2){
                ans=true;
                break;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
