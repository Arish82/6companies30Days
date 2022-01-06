#include <bits/stdc++.h>
using namespace std;

string PatternID(string str){
    int n=str.size();
    int I=0,d=0;
    for(int i=0; i < n ; i++){
        if(str[i]=='I') I++;
        else d++;
    }
    string nstr="";
    int start=5;
    int in=start+1,dec=start-1;
    vector<int> arr;
    if(d>I){
        start+=(d-4);
        // nstr +=to_string(start);
        arr.push_back(start);
        in=start+1;
        dec=start-1;
    }
    else{
        start-=(I-4);
        // nstr+=to_string(start);
        arr.push_back(start);
        in=start+1;
        dec=start-1;
    }
    for(int i=0; i < n ; i++){
        if(str[i]=='I'){
            // nstr+=to_string(in);
            arr.push_back(in);
            in++;
        }
        else{
            // nstr+=to_string(dec);
            arr.push_back(dec);
            dec--;
        }
    }
    int it=*min_element(arr.begin(),arr.end());
    
    for(int i=0;i<arr.size();i++){
        arr[i]-=(it-1);
        nstr+=to_string(arr[i]);
    }
    return nstr;
}
int main(){
    string str;
    cin>>str;
    cout<<PatternID(str)<<"\n";
    return 0;
}