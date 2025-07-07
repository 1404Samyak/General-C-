#include <bits/stdc++.h>
using namespace std;
void update(int &n){ //copy of int n is formed
n++;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    update(n);
    cout<<"The new value of n is "<<n<<endl; //then value of n will remain same because passing by value has taken copy of n and incremented that n to 5 not the original n given by the user
    return 0;
}