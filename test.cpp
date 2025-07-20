#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    set<int>s;
    vector<vector<ll>>temp(n);
    vector<vector<ll>>ans;
    ll ind=-1;
    for(ll i=0;i<n;i++){
        if(s.find(a[i])!=s.end())continue;
        else ind++;
        ll last=1e8;
        for(ll j=i;j<n;j++){
            if(a[j]<last && s.find(a[j])==s.end()){
                temp[ind].push_back(a[j]);
                last=a[j];
                s.insert(a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(temp[i].size()>0)ans.push_back(temp[i]);
    }
    for(auto vec:ans){
        for(ll num:vec){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}
