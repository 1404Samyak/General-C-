#include <iostream>
using namespace std;
int main(){
    //pointer is used to store the address of a variable and access the value at that address
    // & is used to denote the address of a variable
   int arr[]={1,2,3,4,5};//Here the variable arr is actaully the address of the first element of the array and then continous blocks are givem
    cout<<*(arr+2)<<endl; // will the give the value at the address of the first element the value of first element 
    int a=4;
    int *b=&a; // A new variable b is used to store address of a
    cout<<"The address of a is "<<b<<endl;
    cout<<"The value at address "<<b<<" will be "<<*b<<endl;
    int** c=&b;
    cout<<"The address of b is "<<c<<endl;
    cout<<*c<<endl; // because value of b is the address of a
    cout<<**c<<endl;//will give value of a
    return 0;   
    }
    
    
