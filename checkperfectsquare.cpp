#include <bits/stdc++.h>
using namespace std;
bool checkperfectsquare(int n){
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return true;
    }
    else {
        return false;
    }
}
//Will work for integer inputs only whether an integer is a perfect square or not ,and why we will check for non integer inputs for perfect sqaure
int main(){
    int n;
    cout<<"Enter the integer to check"<<endl;
    cin>>n;
    if(checkperfectsquare(n)==1){
        cout<<n<<" is a perfect square"<<endl;
    }
    else{
        cout<<n<<" is not a perfect square"<<endl;
    }
    return 0;
}