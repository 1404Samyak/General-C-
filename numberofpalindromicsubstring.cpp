#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    //we want to find number of palindromic substrings in the given string
    vector<vector<ll>>palindrome(n,vector<ll>(n,0));
    //palindrome[i][j]=1 if substring from index i to j is palindrome else 0
    //so start with shorter length substrings first so while doing recursion we need to check whether inner substring is palindrome or not so it should be already computed
    for(ll len=1;len<=n;len++){
        for(ll i=0;i<(n-len);i++){
            ll j=(i+len-1);
            if(len==1)palindrome[i][j]=1;
            else if(len==2){
                if(s[i]==s[j])palindrome[i][j]=1;
            }
            else{
                //so for this i+1<=j-1 so j>=i+2 so len>=3 so length must be atleast 3 
                palindrome[i][j] = ((s[i]==s[j])?palindrome[i+1][j-1]:0);
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=i;j<n;j++){
            if(palindrome[i][j]==1)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}