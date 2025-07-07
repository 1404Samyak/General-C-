#include <bits/stdc++.h>
using namespace std;
long long int power(long long n,long long int k){
    long long int ans=1;
    for(int i=0;i<k;i++){
        ans=ans*n;
    }
    return ans;
}
long long sumofpowers(long long int n,long long int k){
long long int sum=0;
while(n!=0){
    int d=n%10;
    sum=sum+power(d,k);
    n=n/10;
}
return sum;
}
bool armstrong(long long int n){
    int k=log10(n)+1;
    return (sumofpowers(n,k)==n);
}
int main(){
   int n;
   cout<<"Enter the number n"<<endl;
   cin>>n;
   if(armstrong(n)==1){
    cout<<"The given number is a armstrong number"<<endl;
   }
   else{
    cout<<"The given number is not a armstrong number"<<endl;
   }
   return 0;
}
