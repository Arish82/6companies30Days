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

int NthUgly(int n){
    set<long long int> s;
    s.insert(1);
    n--;
    while(n--){
        auto it=s.begin();
        long long int k=*it;
        s.erase(it);
        s.insert(k*2);
        s.insert(k*3);
        s.insert(k*5);
        
    }
    return *s.begin();

}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<NthUgly(n)<<"\n";
    }
    return 0;
}