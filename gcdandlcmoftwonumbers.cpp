#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b) {
    while (b) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// LCM function
long long int lcm(long long int a, long long int b) {
    return (a / gcd(a, b)) * b;
}
long long int lcm(long long int a,long long int b){
    long long int g=gcd(a,b);
    return (a*b)/g;
}
int main(){
   int a,b;
   cout<<"Enter the value of a and b"<<endl;
   cin>>a>>b;
   cout<<"The gcd of two numbers given is "<<gcd(a,b)<<" and lcm of the two numbers is "<<lcm(a,b)<<endl;
   return 0;
}