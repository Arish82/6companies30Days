#include <bits/stdc++.h>
using namespace std;

int findPosition(int N , int M , int K) {
    if(M==1 && N==1 && K==1)
        return 1;
    if(M<N){
        if((K+M-1)==N)
            return N;
        return (K+M-1)%N;
    }
    else{
        if((K+(M%N)-1)==N)
            return N;
        return (K+(M%N)-1)%N;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M,K;
        cin>>N>>M>>K;
        cout<<findPosition(N,M,K)<<"\n";
    }
    return 0;
}