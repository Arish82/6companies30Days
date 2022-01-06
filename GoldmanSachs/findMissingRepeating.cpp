#include <bits/stdc++.h>
using namespace std;

int *findTwoElement(int *arr, int n) {
    sort(arr,arr+n);
        int* ar= new int[2];
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
            ar[0]=arr[i];
            break;
            }
        }
        int k=1;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                k++;
            }
        }
        ar[1]=k;
        return ar;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int* ans=new int[2];
    ans=findTwoElement(arr,n);
    cout<<ans[0]<<" "<<ans[1]<<"\n";
    return 0;
}