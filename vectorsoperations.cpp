#include <bits/stdc++.h>
using namespace std;
void printvector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";// can access individual elements of vector directly like an array
    }
}
/*adding elements to vectors by v.push_back towards the last,removing elements from vectors by
 v.pop_back() which will remove the last element ,and elements of vector also are allocated in continous memory locations like arrays*/
int main(){
vector<int>v1={1,2,3,4,5}; //we can assign the elements of vector in first line only 
v1.push_back(6); //will add 6 at end
printvector(v1);
v1.pop_back();// will remove the last element
cout<<endl;
printvector(v1);
cout<<endl;
vector<int>v2(5,1);// This will initialise a vectpr of size 5 containing 5 ones
printvector(v2);
cout<<endl;
vector<int>v3={34,65,3,7,9,8,2,78};
sort(v3.begin(),v3.end());/*v.begin()is the iterator which points to the first element of the vector and v.end() 
iterator points to the iterator just next to the last element of the vector */
printvector(v3);
cout<<endl;
cout<<v3.empty()<<endl;
//for iterator we can write auto i=v.begin() then for accessing value we have to use *i
    return 0;
}
