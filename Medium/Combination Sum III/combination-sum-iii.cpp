//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   void fun(int ind,int num,vector<int>v,vector<vector<int>>&res,int n,int sum){
      if(ind>num){
          return;
      }
      if(ind==num){
          if(sum==0 && v.size()==n){
              res.push_back(v);
              return;
          }
      }
      if(sum==0 && v.size()==n){
          if(ind>9){
              return;
          }
          res.push_back(v);
          return;
      }
      if(v.size()>n || sum<ind){
          return;
      }
      v.push_back(ind);
      sum=sum-ind;
      
      fun(ind+1,num,v,res,n,sum);
      v.pop_back();
      sum+=ind;
      fun(ind+1,num,v,res,n,sum);
      return;
  }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        
        vector<vector<int>>res;
        vector<int>v;
        fun(1,10,v,res,K,N);
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends