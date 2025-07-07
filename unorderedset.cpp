#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cout<<"Enter the string n "<<endl;
    cin>>n;
    unordered_set<char>s;
    for(int i=0;i<n.length();i++){
      s.insert(n[i]);
    }
    for(auto &i:s){
      cout<<i<<" ";
    }
   return 0;
}