#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    ll x=0;
    for(ll i=0;i<n;i++){
        x=x^arr[i];
    }
    //now x will contain xor of two unique elements which occur only once x=a^b
    //but a anf b are different so we will find rightmost bit which is different in a and b means rightmost set bit in x
    ll d=0;
    ll rightmost=-1;
    ll temp=x;
    while(temp>0){
        if(temp%2==1){
            rightmost=d;
            break;
        }
        temp=temp/2;
        d++;
    }
    ll num=(1LL<<rightmost);//this will have only that rightmost set bit
    vector<ll>a,b;
    for(ll i=0;i<n;i++){
        if(arr[i]&num){
            a.push_back(arr[i]);
        }
        else{
            b.push_back(arr[i]);
        }
    }
    ll first=0,second=0;
    for(ll i=0;i<a.size();i++){
        first=first^a[i];
    }
    for(ll i=0;i<b.size();i++){
        second=second^b[i];
    }
    cout<<min(first,second)<<" "<<max(first,second)<<endl;
    return 0;

}