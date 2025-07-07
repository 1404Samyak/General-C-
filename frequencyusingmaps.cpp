#include <bits/stdc++.h>
using namespace std;
int main(){
   map<int,int>m;
   int n;
   cout<<"Enter the number of inputs to be given"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    m[x]++;
   }
   for(auto i=m.begin();i!=m.end();i++){
      cout<<i->first<<" frequency:"<<i->second<<endl;
   }
   return 0;
}
