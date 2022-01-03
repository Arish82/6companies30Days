#include <bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK1(vector<long long int>& arr, int n, long long k) {
    vector<long long int> a(n+1);
    for(int i=0; i < n ; i++){
        a[i]=arr[i];
    }
    for(int i=1; i < n ; i++){
        a[i]=a[i]*a[i-1];
    }
    int i=0,j=0;
    int temp=1;
    int c=0;
    while(i<n && j<n){
        if(a[j]/temp<k){
            j++;
        }
        else{
            c += (j+1-i);
            i++;
            temp=a[i];
        }
    }
    return c;
}
int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
    int i=0,j=0;
        int temp=1;
        int c=0;
        long long int pro=1;
        while(j<n){
            pro *=arr[j];
            
            while(i<n && pro>=k){
                pro /=arr[i];
                i++;
            }
            if(pro<k){
                c+=j-i+1;
            }
            j++;
        }
        return c;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        long long int k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i < n ; i++){
            cin>>arr[i];
        }
        cout<<countSubArrayProductLessThanK(arr,n,k);
    }
    return 0;
}