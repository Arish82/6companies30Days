#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        unordered_map<string,vector<int>> arr;
        for(int i=0;i<str.size();i++){
            string word=str[i];
            sort(word.begin(),word.end());
            arr[word].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto it:arr){
            vector<string> temp;
            ans.push_back(temp);
            for(int i=0; i < it.second.size() ; i++){
                ans[ans.size()-1].push_back(str[it.second[i]]);
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0; i < n ; i++){
            cin>>arr[i];
        }
        Solution ob;
        vector<vector<string>> result=ob.Anagrams(arr);
        for(int i=0; i < result.size() ; i++){
            for(int j=0; j < result[i].size() ; j++){
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}