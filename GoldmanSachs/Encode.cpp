#include <bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;

string encode(string src){
    src+=" ";
    string str="";
    pair<char,int> a{src[0],1};
    for(int i=1;i<src.length();i++){
        if(src[i]!=a.first){
            str+=(a.first + (to_string(a.second)));
            a.first=src[i];
            a.second=1;
        }
        else{
            a.second++;
        }
        
    }
    return str;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        cout<<encode(str)<<"\n";
    }
    return 0;
}