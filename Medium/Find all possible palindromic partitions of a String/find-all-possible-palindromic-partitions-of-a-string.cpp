//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<string>> ans;
    void drunk(int ind,string &s,int n,vector<string>&temp){
    if(ind==s.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<n;i++){
        string str=s.substr(ind,i-ind+1);
        if(str==string(str.rbegin(),str.rend())){
            temp.push_back(str);
            drunk(i+1,s,n,temp);
            temp.pop_back();
        }
    }
    }
    vector<vector<string>> allPalindromicPerms(string s){
        vector<string>q;
        drunk(0,s,s.size(),q);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends