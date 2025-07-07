#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    //sets can be used to store the unique values of keys only no value of key will be repeated in sets and keys will be stored in sorted pr lexographically sorted order
    for(auto i=s.begin();i!=s.end();i++){
        cout<<"unique key :"<<*i<<endl;
    }
    return 0;
}