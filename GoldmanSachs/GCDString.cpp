#include <bits/stdc++.h>
using namespace std;

string gcdString(string str1,string str2){
    string res="";
    if(str1+str2== str2+str1){
        res=str1.substr(0, __gcd(str1.length(),str2.length()));
    }
    return res;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<gcdString(str1,str2)<<"\n";
    return 0;
}