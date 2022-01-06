#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin>>N;
    long long ans=N*(N+1)*(2*N+1)/6;
    cout<<ans<<"\n";
    return 0;
}