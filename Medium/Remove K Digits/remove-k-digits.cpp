//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        stack<char>s;
        for(auto it:S){
            while(K && s.size() && s.top()>it){
                K--;
                s.pop();
            }
            s.push(it);
        }
        while(K && s.size()){
            s.pop();
            K--;
        }
        string c="",a="";
        while(!s.empty()){
            c+=s.top();
            s.pop();
        }
        while(c.size() && c.back()=='0'){
            c.pop_back();
        }
        reverse(c.begin(),c.end());
        if(c.size()==0){
            return "0";
        }
        else{
            return c;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends