#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int i=-1,j=0;
    int c=INT_MAX;
    int n=nums.size();
    for(i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    i=-1;
    int temp=0;
    bool f=true;
    while(j<n && i<n){
        if((nums[j]-temp)<target){
            j++;
        }
        else if((nums[j]-temp)>=target){
            c=min(c,j-i);
            i++;
            temp=nums[i];
            f=false;
        }
    }
    if(f)
        c=0;
    return c;
}
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> arr(n);
    for(int i=0; i < n ; i++){
        cin>>arr[i];
    }
    cout<<minSubArrayLen(t,arr);
    return 0;
}