#include <bits/stdc++.h>
using namespace std;
int ceilingdivision(int a,int b){
    return (a+b-1)/b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<ceilingdivision(a,b)<<endl;
    return 0;
}