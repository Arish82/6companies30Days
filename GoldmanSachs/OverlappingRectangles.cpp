#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int doOverlap(int l1[],int l2[],int r1[],int r2[]){
    int x1=l1[0], y1=l1[1];
        int a1=r1[0], b1=r1[1];
        int x2=l2[0], y2=l2[1];
        int a2=r2[0], b2=r2[1];
        if(a1< x2) return 0;
        else if(a2<x1) return 0;
        else if(y1<b2) return 0;
        else if(y2<b1) return 0;
        
        return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l1[2],l2[2],r1[2],r2[2];
        cin>>l1[0]>>l1[1];
        cin>>l2[0]>>l2[1];
        cin>>r1[0]>>r1[1];
        cin>>r2[0]>>r2[1];
        cout<<doOverlap(l1,l2,r1,r2)<<"\n";
    }
    return 0;
}