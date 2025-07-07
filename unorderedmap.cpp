#include <bits/stdc++.h>
using namespace std;
/* std::unordered_map: These operations have an average time complexity of O(1), but in the worst case, it can degrade to O(n) due to hash collisions, where 'n' is the number of elements in the map.
Keys are not ordered. They are organized based on the hash value of the key.*/
int main(){
    unordered_map<int,int>m;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    for(auto i=m.begin();i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}