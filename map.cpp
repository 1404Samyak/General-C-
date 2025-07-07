#include <bits/stdc++.h>
using namespace std;
//In ordered map only unique keys can be stored,keys are arranged in sorted manner,TC of making map is logn
int main(){
    map<int,int>m; //This is an example of ordered map
    m[1]=1;
    m[2]=1;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=3;i<=n;i++){
        m[i]=m[i-1]+m[i-2];
    }
    for(auto i=m.begin();i!=m.end();i++){
        cout<<"key:"<<i->first<<" value :"<<i->second<<endl;
    } 
    auto i=m.find(30);//m.find(x) where x is a key here and m.find(x) returns the iterator whose first value is the required key
    if(i==m.end()){
        cout<<"The key is not present"<<endl;
    }
    else{
        cout<<"The key is present and value attached to it is "<<i->second<<endl;
    }
    return 0;
}