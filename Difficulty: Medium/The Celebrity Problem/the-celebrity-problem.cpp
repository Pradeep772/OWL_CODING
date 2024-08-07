//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        if(mat.size()==1 && mat[0].size()==1)return 0;
        map<int,int>ro,co;
        for(int i=0;i<mat.size();i++){
            ro[i]=count(mat[i].begin(),mat[i].end(),1);
        }
        for(int i=0;i<mat[0].size();i++){
            for(int j=0;j<mat.size();j++){
                if(mat[j][i])co[i]++;
            }
        }
        int r,c;
        for(auto it:ro){
            //cout<<it.first<<" "<<it.second<<endl;
            if(it.second==0){
                r=it.first;
            }
        }
        for(auto it:co){
            if(it.second==mat.size()-1){
                c=it.first;
            }
            if(c==r){
                break;
            }
        }
        //cout<<c<<" "<<r; 
        int res=(c==r)?c:-1;
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends