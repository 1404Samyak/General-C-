#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    int cnt=1,prev=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==prev){
            cnt++;
            prev=nums[i];
            if(cnt>2)nums[i]=-1;
        }
        else{
            cnt=1;
            prev=nums[i];
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    for(int i:nums)cout<<i<<" ";
    cout<<endl;
    return 0;
}
