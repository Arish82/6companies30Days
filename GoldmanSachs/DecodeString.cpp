#include <bits/stdc++.h>
using namespace std;
string recu(string str,int &i){
    string nstr="";
    int n=0;
    for(; i < str.size() ; i++){
        if(str[i]>='0' && str[i]<='9'){
            // cout<<str[i]<<"\n";
            n=(n*10)+(int)(str[i])-'0';
        }
        else if(str[i]>='a' && str[i]<='z'){
            // cout<<str[i]<<"\n";
            nstr+=str[i];
        }
        else if(str[i]=='['){
            i++;
            string kk="";
            kk=recu(str,i);
            // cout<<kk<<" ";
            while(n>0){
                nstr+=kk;
                n--;
            }
            // cout<<nstr<<" \n";
        }
        else if(str[i]==']'){
            // i++;
            return nstr;
        }
    }
}
string decodedString(string str){
    string nstr="";
    int i=0;
    nstr=recu(str,i);
    return nstr;
}
int main(){
    string str;
    cin>>str;
    cout<<decodedString(str)<<"\n";
    // cout<<('9'-'0');
    return 0;
}