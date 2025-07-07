#include <bits/stdc++.h>
using namespace std;
int main(){
    //syntax is condition?value if true:value if false
    //the data type of the val must be same as the data type of the variable used 
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int val=(n>6)?n*n:n+1;
    cout<<val<<endl;
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    string s=(age>=18)?"Yes":"No";
    //The syntax is (condition)?value if condition is true:value is condition is false
    return 0;
}